#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

/* 0893F65C */
void func_0893F65C(u32 a0, u32 a1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0893F65C:;
    sp = sp - 96;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F680;
L_0893F680:;
    a1 = LD32(a1+4);
    a0 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F694;
L_0893F694:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0893F6E4; }
    goto L_0893F6B8;
L_0893F6B8:;
    a0 = LD32(a2);
    goto L_0893F6BC;
L_0893F6BC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893FAC0; }
    goto L_0893F6D4;
L_0893F6D4:;
    a2 = LD32(a2+4);
    goto L_0893F6D8;
L_0893F6D8:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_0893F6BC; }
    goto L_0893F6E0;
L_0893F6E0:;
    a3 = 0 + 0;
    goto L_0893F6E4;
L_0893F6E4:;
    cnd_ = a3 == 0;
    t0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F6EC;
L_0893F6EC:;
    t1 = LD32(s0+28);
    a0 = LD32(a3);
    v1 = LD32(t1+48);
    v0 = LD32(a0-16);
    a1 = LD32(v1);
    v0 = a3 + v0;
    s2 = LD_U16(v0+8);
    a0 = LD32(a1-16);
    v0 = 999;
    v1 = v1 + a0;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    a1 = t0 - 22840;
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F720;
L_0893F720:;
    v0 = LD32(a1+4);
    v1 = LD32(t0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_0893F770; }
    goto L_0893F744;
L_0893F744:;
    a1 = LD32(a0);
    goto L_0893F748;
L_0893F748:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893FAA0; }
    goto L_0893F760;
L_0893F760:;
    a0 = LD32(a0+4);
    goto L_0893F764;
L_0893F764:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_0893F748; }
    goto L_0893F76C;
L_0893F76C:;
    s1 = 0 + 0;
    goto L_0893F770;
L_0893F770:;
    cnd_ = s1 == 0;
    t0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F778;
L_0893F778:;
    v1 = LD32(t1+48);
    s4 = LD32(s1+236);
    a0 = LD32(v1);
    v0 = LD32(a0-16);
    v1 = v1 + v0;
    a2 = LD32(v1+4);
    v0 = 999;
    cnd_ = a2 == v0;
    a1 = t0 - 22400;
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F79C;
L_0893F79C:;
    v0 = LD32(a1+4);
    v1 = LD32(t0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0893F7EC; }
    goto L_0893F7C0;
L_0893F7C0:;
    a0 = LD32(a1);
    goto L_0893F7C4;
L_0893F7C4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0893FA80; }
    goto L_0893F7DC;
L_0893F7DC:;
    a1 = LD32(a1+4);
    goto L_0893F7E0;
L_0893F7E0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0893F7C4; }
    goto L_0893F7E8;
L_0893F7E8:;
    s3 = 0 + 0;
    goto L_0893F7EC;
L_0893F7EC:;
    cnd_ = s3 == 0;
    v0 = D_08B45A9C - (23196);
    if (cnd_) { goto L_0893F8F4; }
    goto L_0893F7F4;
L_0893F7F4:;
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp+16, FBITS(f1));
    f12 = BITSF(0);
    ST32(sp+20, FBITS(f0));
    a0 = a3 + 0;
    a1 = sp + 0;
    ST32(sp+24, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    v0 = LD32(a3);
    v1 = LD32(v0+56);
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893F838;
L_0893F838:;
    v0 = LD32(s0+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+144);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893F850;
L_0893F850:;
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = s2 ^ 0x8014;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    f1 = f1 - f0;
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v1 = v1 < 0x1u;
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = s2 ^ 0x8003;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    ST32(sp+32, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+36, FBITS(f3));
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    cnd_ = v1 != 0;
    ST32(sp+40, FBITS(f1));
    if (cnd_) { goto L_0893F9E4; }
    goto L_0893F8C4;
L_0893F8C4:;
    v1 = s2 ^ 0x801e;
    v0 = s2 ^ 0x8004;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD_U8(s0+115); goto L_0893F9E8; }
    goto L_0893F8E0;
L_0893F8E0:;
    v0 = 0x801d;
    cnd_ = s2 == v0;
    v0 = 0x8005;
    if (cnd_) { goto L_0893F9E4; }
    goto L_0893F8EC;
L_0893F8EC:;
    cnd_ = s2 == v0;
    if (cnd_) { v0 = LD_U8(s0+114); goto L_0893F914; }
    goto L_0893F8F4;
L_0893F8F4:;
    goto L_0893F8F8;
L_0893F8F8:;
    sp = sp + 96;
    return;
L_0893F914:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+113); goto L_0893F938; }
    goto L_0893F91C;
L_0893F91C:;
    v0 = D_08AED8F4 - (-9996);
    f0 = BITSF(LD32(v0-9996));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_0893F9D8; }
    goto L_0893F934;
L_0893F934:;
    v0 = LD_U8(s0+113);
    goto L_0893F938;
L_0893F938:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+112); goto L_0893F95C; }
    goto L_0893F940;
L_0893F940:;
    v0 = D_08AED8F8 - (-9992);
    f0 = BITSF(LD32(v0-9992));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_0893F9CC; }
    goto L_0893F958;
L_0893F958:;
    v0 = LD_U8(s0+112);
    goto L_0893F95C;
L_0893F95C:;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0893F9C0; }
    goto L_0893F964;
L_0893F964:;
    v0 = LD_U8(s0+121);
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0893F9B8; }
    goto L_0893F970;
L_0893F970:;
    v0 = LD_U8(s0+110);
    cnd_ = v0 != 0;
    a2 = 110;
    if (cnd_) { goto L_0893F994; }
    goto L_0893F97C;
L_0893F97C:;
    v0 = LD_U8(s0+111);
    goto L_0893F980;
L_0893F980:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0893F8F8; }
    goto L_0893F988;
L_0893F988:;
    a0 = s4 + 0;
    a1 = s1 + 0;
    a2 = 111;
    goto L_0893F994;
L_0893F994:;
    v0 = func_08985438(a0, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0893F99C;
L_0893F99C:;
    v1 = v0 + 0;
    v0 = LD32(s3+204);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(v0, v1); goto L_0893F8F4; }
    goto L_0893F9AC;
L_0893F9AC:;
    goto L_0893F8F8;
L_0893F9B4:;
    a1 = s1 + 0;
    goto L_0893F9B8;
L_0893F9B8:;
    a2 = 124;
    goto L_0893F994;
L_0893F9C0:;
    a1 = s1 + 0;
    a2 = 122;
    goto L_0893F994;
L_0893F9CC:;
    a1 = s1 + 0;
    a2 = 118;
    goto L_0893F994;
L_0893F9D8:;
    a1 = s1 + 0;
    a2 = 116;
    goto L_0893F994;
L_0893F9E4:;
    v0 = LD_U8(s0+115);
    goto L_0893F9E8;
L_0893F9E8:;
    a0 = s4 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a2 = 126;
    if (cnd_) { goto L_0893F994; }
    goto L_0893F9F8;
L_0893F9F8:;
    v0 = LD_U8(s0+116);
    a0 = s4 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a2 = 119;
    if (cnd_) { goto L_0893F994; }
    goto L_0893FA0C;
L_0893FA0C:;
    v0 = LD_U8(s0+112);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 122; goto L_0893F994; }
    goto L_0893FA18;
L_0893FA18:;
    v0 = LD_U8(s0+110);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 110; goto L_0893F994; }
    goto L_0893FA24;
L_0893FA24:;
    v0 = LD_U8(s0+114);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+113); goto L_0893FA4C; }
    goto L_0893FA30;
L_0893FA30:;
    v0 = D_08AED8F4 - (-9996);
    f0 = BITSF(LD32(v0-9996));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a2 = 116; goto L_0893F994; }
    goto L_0893FA48;
L_0893FA48:;
    v0 = LD_U8(s0+113);
    goto L_0893FA4C;
L_0893FA4C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+121); goto L_0893FA70; }
    goto L_0893FA54;
L_0893FA54:;
    v0 = D_08AED8F8 - (-9992);
    f0 = BITSF(LD32(v0-9992));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = s4 + 0; goto L_0893F9CC; }
    goto L_0893FA6C;
L_0893FA6C:;
    v0 = LD_U8(s0+121);
    goto L_0893FA70;
L_0893FA70:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+111); goto L_0893F980; }
    goto L_0893FA78;
L_0893FA78:;
    a0 = s4 + 0;
    goto L_0893F9B4;
L_0893FA80:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_0893F7DC; }
    goto L_0893FA8C;
L_0893FA8C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0893F7E0; }
    goto L_0893FA98;
L_0893FA98:;
    goto L_0893F7EC;
L_0893FAA0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0893F760; }
    goto L_0893FAAC;
L_0893FAAC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0893F764; }
    goto L_0893FAB8;
L_0893FAB8:;
    goto L_0893F770;
L_0893FAC0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_0893F6D4; }
    goto L_0893FACC;
L_0893FACC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0893F6D8; }
    goto L_0893FAD8;
L_0893FAD8:;
    goto L_0893F6E4;
}

/* 0893FAE0 */
void func_0893FAE0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0893FAE0:;
    sp = sp - 16;
    v0 = LD32(a0+28);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0893FB0C; }
    goto L_0893FB00;
L_0893FB00:;
    a1 = LD32(v0+48);
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_0893FB24; }
    goto L_0893FB0C;
L_0893FB0C:;
    goto L_0893FB10;
L_0893FB10:;
    sp = sp + 16;
    return;
L_0893FB24:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    v1 = LD32(v0-16);
    a2 = 1;
    v1 = a1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FB40;
L_0893FB40:;
    cnd_ = v0 == 0;
    s2 = 1;
    if (cnd_) { goto L_0893FB0C; }
    goto L_0893FB48;
L_0893FB48:;
    v1 = LD32(s0+28);
    s1 = LD32(v0+236);
    v0 = LD32(v1+48);
    cnd_ = s1 == 0;
    ST32(v0+236, s2);
    if (cnd_) { goto L_0893FB0C; }
    goto L_0893FB5C;
L_0893FB5C:;
    a0 = s1 + 0;
    a1 = 110;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FB68;
L_0893FB68:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+110, s2); goto L_0893FB70; }
    goto L_0893FB70;
L_0893FB70:;
    a0 = s1 + 0;
    a1 = 111;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FB7C;
L_0893FB7C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+111, s2); goto L_0893FB84; }
    goto L_0893FB84;
L_0893FB84:;
    a0 = s1 + 0;
    a1 = 122;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FB90;
L_0893FB90:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+112, s2); goto L_0893FB98; }
    goto L_0893FB98;
L_0893FB98:;
    a0 = s1 + 0;
    a1 = 118;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FBA4;
L_0893FBA4:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893FBBC; }
    goto L_0893FBAC;
L_0893FBAC:;
    v0 = LD32(s0+28);
    v1 = LD32(v0+48);
    ST32(v1+236, 0);
    ST8(s0+113, s2);
    goto L_0893FBBC;
L_0893FBBC:;
    a1 = 116;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FBC4;
L_0893FBC4:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893FBDC; }
    goto L_0893FBCC;
L_0893FBCC:;
    v0 = LD32(s0+28);
    v1 = LD32(v0+48);
    ST32(v1+236, 0);
    ST8(s0+114, s2);
    goto L_0893FBDC;
L_0893FBDC:;
    a1 = 124;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FBE4;
L_0893FBE4:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893FBFC; }
    goto L_0893FBEC;
L_0893FBEC:;
    v0 = LD32(s0+28);
    v1 = LD32(v0+48);
    ST32(v1+236, 0);
    ST8(s0+121, s2);
    goto L_0893FBFC;
L_0893FBFC:;
    a1 = 126;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC04;
L_0893FC04:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+115, s2); goto L_0893FC0C; }
    goto L_0893FC0C;
L_0893FC0C:;
    a0 = s1 + 0;
    a1 = 119;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC18;
L_0893FC18:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+116, s2); goto L_0893FC20; }
    goto L_0893FC20;
L_0893FC20:;
    a0 = s1 + 0;
    a1 = 177;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC2C;
L_0893FC2C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+117, s2); goto L_0893FC34; }
    goto L_0893FC34;
L_0893FC34:;
    a0 = s1 + 0;
    a1 = 178;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC40;
L_0893FC40:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+118, s2); goto L_0893FC48; }
    goto L_0893FC48;
L_0893FC48:;
    a0 = s1 + 0;
    a1 = 117;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC54;
L_0893FC54:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893FC64; }
    goto L_0893FC5C;
L_0893FC5C:;
    v0 = 1;
    ST8(s0+120, v0);
    goto L_0893FC64;
L_0893FC64:;
    a1 = 127;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC6C;
L_0893FC6C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0893FC7C; }
    goto L_0893FC74;
L_0893FC74:;
    v0 = 1;
    ST8(s0+119, v0);
    goto L_0893FC7C;
L_0893FC7C:;
    a1 = 130;
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FC84;
L_0893FC84:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0893FC94; }
    goto L_0893FC8C;
L_0893FC8C:;
    v0 = 1;
    ST8(s0+122, v0);
    goto L_0893FC94;
L_0893FC94:;
    a2 = 1;
    v1 = s0 + 110;
    v0 = LD_U8(v1);
    goto L_0893FCA0;
L_0893FCA0:;
    a1 = a1 + 1;
    a0 = a1 < 0xdu;
    cnd_ = v0 == 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_0893FCB4; }
    goto L_0893FCB0;
L_0893FCB0:;
    ST8(s0+109, a2);
    goto L_0893FCB4;
L_0893FCB4:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD_U8(v1); goto L_0893FCA0; }
    goto L_0893FCBC;
L_0893FCBC:;
    goto L_0893FB10;
}

/* 0893FCC4 */
rv_t func_0893FCC4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_0893FCC4:;
    sp = sp - 160;
    a2 = D_08C2C664 - (-14748);
    v1 = a2 - 14748;
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
    if (cnd_) { goto L_0893FD78; }
    goto L_0893FD2C;
L_0893FD2C:;
    a2 = LD32(a2-14748);
    a3 = a1 + 0;
    goto L_0893FD34;
L_0893FD34:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0893FD68; }
    goto L_0893FD4C;
L_0893FD4C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+8); goto L_0893FD7C; }
    goto L_0893FD5C;
L_0893FD5C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893FD4C; }
    goto L_0893FD68;
L_0893FD68:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0893FD34; }
    goto L_0893FD78;
L_0893FD78:;
    a2 = LD32(sp+8);
    goto L_0893FD7C;
L_0893FD7C:;
    cnd_ = a2 == 0;
    v0 = D_08AED8FC - (-9988);
    if (cnd_) { goto L_0893FDCC; }
    goto L_0893FD84;
L_0893FD84:;
    f22 = BITSF(LD32(v0-9988));
    v1 = D_08AED900 - (-9984);
    v0 = D_08AED904 - (-9980);
    f23 = BITSF(LD32(v1-9984));
    f24 = BITSF(LD32(v0-9980));
    a0 = sp + 0;
    goto L_0893FD9C;
L_0893FD9C:;
    a1 = 1;
    s0 = LD32(a2);
    { u64 r_ = func_08ABCF50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FDA8;
L_0893FDA8:;
    a0 = LD32(s3+28);
    a1 = LD32(s0+88);
    v0 = LD32(a0+48);
    v1 = LD32(v0+12);
    cnd_ = a1 == v1;
    if (cnd_) { a1 = LD32(s0+28); goto L_0893FEAC; }
    goto L_0893FDC0;
L_0893FDC0:;
    a2 = LD32(sp+8);
    goto L_0893FDC4;
L_0893FDC4:;
    cnd_ = a2 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0893FD9C; }
    goto L_0893FDCC;
L_0893FDCC:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893FE54; }
    goto L_0893FDE0;
L_0893FDE0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0893FE54; }
    goto L_0893FDEC;
L_0893FDEC:;
    v0 = LD32(s1);
    goto L_0893FDF0;
L_0893FDF0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0893FE44; }
    goto L_0893FE04;
L_0893FE04:;
    v0 = LD_U8(s0+8);
    goto L_0893FE08;
L_0893FE08:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0893FEA4; }
    goto L_0893FE10;
L_0893FE10:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893FE94; }
    goto L_0893FE18;
L_0893FE18:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0893FE20;
L_0893FE20:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FE2C;
L_0893FE2C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0893FE38;
L_0893FE38:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0893FE08; }
    goto L_0893FE40;
L_0893FE40:;
    v1 = LD32(s1+4);
    goto L_0893FE44;
L_0893FE44:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0893FDF0; }
    goto L_0893FE54;
L_0893FE54:;
    v0 = 0 + 0;
    goto L_0893FE58;
L_0893FE58:;
    sp = sp + 160;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_0893FE94:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0893FE20;
L_0893FEA4:;
    s0 = LD32(s0+4);
    goto L_0893FE38;
L_0893FEAC:;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0893FEBC;
L_0893FEBC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0893FDC0; }
    goto L_0893FEC4;
L_0893FEC4:;
    f0 = BITSF(LD32(v0+8));
    f20 = BITSF(0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_0893FDC4; }
    goto L_0893FEDC;
L_0893FEDC:;
    f1 = f22 / f0;
    v0 = LD32(v0);
    v1 = LD32(v0-12);
    a0 = s1 + v1;
    f0 = BITSF(LD32(a0+40));
    f0 = f0 * f1;
    fcc = FCMP(f0, f23, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0893FDC4; }
    goto L_0893FF04;
L_0893FF04:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893FF14;
L_0893FF14:;
    s0 = v0 + 0;
    v0 = LD32(s3+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0893FF3C;
L_0893FF3C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f24, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+8);
    if (cnd_) { goto L_0893FDC4; }
    goto L_0893FFA8;
L_0893FFA8:;
    a2 = D_08C2BFF8 - (-16392);
    v1 = a2 - 16392;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    a0 = sp + 32;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+32, v1);
    ST32(sp+36, 0);
    cnd_ = a1 == 0;
    ST32(sp+40, 0);
    if (cnd_) { goto L_08940020; }
    goto L_0893FFD4;
L_0893FFD4:;
    a2 = LD32(a2-16392);
    a3 = a1 + 0;
    goto L_0893FFDC;
L_0893FFDC:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08940010; }
    goto L_0893FFF4;
L_0893FFF4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+40);
    if (cnd_) { goto L_08940024; }
    goto L_08940004;
L_08940004:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0893FFF4; }
    goto L_08940010;
L_08940010:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0893FFDC; }
    goto L_08940020;
L_08940020:;
    s0 = LD32(sp+40);
    goto L_08940024;
L_08940024:;
    cnd_ = s0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08940100; }
    goto L_0894002C;
L_0894002C:;
    v0 = D_08AED908 - (-9976);
    v1 = D_08AED8FC - (-9988);
    f21 = BITSF(LD32(v0-9976));
    f25 = BITSF(LD32(v1-9988));
    s0 = LD32(s0);
    goto L_08940040;
L_08940040:;
    a1 = 1;
    a0 = s2 + 0;
    func_08ABDC74(a0, a1);
    goto L_0894004C;
L_0894004C:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940068;
L_08940068:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940088;
L_08940088:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 - f2;
    f4 = f4 - f5;
    f0 = f0 - f3;
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+52, FBITS(f0));
    s0 = LD32(sp+40);
    ST32(sp+48, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f4));
    if (cnd_) { goto L_089400F8; }
    goto L_089400F4;
L_089400F4:;
    f20 = f20 + f25;
    goto L_089400F8;
L_089400F8:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_08940040; }
    goto L_08940100;
L_08940100:;
    fcc = FCMP(f20, f22, 12);
    cnd_ = fcc;
    s1 = LD32(sp+32);
    if (cnd_) { goto L_089401B4; }
    goto L_08940110;
L_08940110:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0893FDC0; }
    goto L_08940120;
L_08940120:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0893FDC0; }
    goto L_0894012C;
L_0894012C:;
    v0 = LD32(s1);
    goto L_08940130;
L_08940130:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08940184; }
    goto L_08940144;
L_08940144:;
    v0 = LD_U8(s0+8);
    goto L_08940148;
L_08940148:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089401AC; }
    goto L_08940150;
L_08940150:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894019C; }
    goto L_08940158;
L_08940158:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08940160;
L_08940160:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894016C;
L_0894016C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08940178;
L_08940178:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08940148; }
    goto L_08940180;
L_08940180:;
    v1 = LD32(s1+4);
    goto L_08940184;
L_08940184:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940130; }
    goto L_08940194;
L_08940194:;
    a2 = LD32(sp+8);
    goto L_0893FDC4;
L_0894019C:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_08940160;
L_089401AC:;
    s0 = LD32(s0+4);
    goto L_08940178;
L_089401B4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08940238; }
    goto L_089401C4;
L_089401C4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08940238; }
    goto L_089401D0;
L_089401D0:;
    v0 = LD32(s1);
    goto L_089401D4;
L_089401D4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08940228; }
    goto L_089401E8;
L_089401E8:;
    v0 = LD_U8(s0+8);
    goto L_089401EC;
L_089401EC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089402F0; }
    goto L_089401F4;
L_089401F4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089402E0; }
    goto L_089401FC;
L_089401FC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08940204;
L_08940204:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940210;
L_08940210:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0894021C;
L_0894021C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089401EC; }
    goto L_08940224;
L_08940224:;
    v1 = LD32(s1+4);
    goto L_08940228;
L_08940228:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089401D4; }
    goto L_08940238;
L_08940238:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089402C0; }
    goto L_0894024C;
L_0894024C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089402C0; }
    goto L_08940258;
L_08940258:;
    v0 = LD32(s1);
    goto L_0894025C;
L_0894025C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089402B0; }
    goto L_08940270;
L_08940270:;
    v0 = LD_U8(s0+8);
    goto L_08940274;
L_08940274:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089402D8; }
    goto L_0894027C;
L_0894027C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089402C8; }
    goto L_08940284;
L_08940284:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0894028C;
L_0894028C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940298;
L_08940298:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089402A4;
L_089402A4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08940274; }
    goto L_089402AC;
L_089402AC:;
    v1 = LD32(s1+4);
    goto L_089402B0;
L_089402B0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894025C; }
    goto L_089402C0;
L_089402C0:;
    v0 = 1;
    goto L_0893FE58;
L_089402C8:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0894028C;
L_089402D8:;
    s0 = LD32(s0+4);
    goto L_089402A4;
L_089402E0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08940204;
L_089402F0:;
    s0 = LD32(s0+4);
    goto L_0894021C;
    v[0]=vr0;
}

/* 089402F8 */
rv_t func_089402F8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 208);
L_089402F8:;
    sp = sp - 208;
    s7 = D_08C25390 - (21392);
    v0 = LD32(s7+21392);
    s6 = a0 + 0;
    s5 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(sp+64, 0);
    if (cnd_) { goto L_08940624; }
    goto L_08940348;
L_08940348:;
    v0 = D_08AED90C - (-9972);
    f20 = BITSF(LD32(v0-9972));
    fp = D_08B1B510 - (-19184);
    v0 = fp - 19184;
    goto L_08940358;
L_08940358:;
    v1 = s5 << 2;
    v1 = v1 + v0;
    a2 = LD32(v1);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = D_08C2BA28 - (-17880);
    if (cnd_) { goto L_08940610; }
    goto L_08940370;
L_08940370:;
    v1 = v1 - 17880;
    v0 = LD32(v1+4);
    a0 = D_08C2BA28 - (-17880);
    v1 = LD32(a0-17880);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089403C8; }
    goto L_0894039C;
L_0894039C:;
    a0 = LD32(a1);
    goto L_089403A0;
L_089403A0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08940C5C; }
    goto L_089403B8;
L_089403B8:;
    a1 = LD32(a1+4);
    goto L_089403BC;
L_089403BC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089403A0; }
    goto L_089403C4;
L_089403C4:;
    s3 = 0 + 0;
    goto L_089403C8;
L_089403C8:;
    cnd_ = s3 == 0;
    v0 = LD32(s7+21392);
    if (cnd_) { goto L_08940614; }
    goto L_089403D0;
L_089403D0:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089403EC;
L_089403EC:;
    s0 = v0 + 0;
    v0 = LD32(s6+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940414;
L_08940414:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f4);
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {vr0=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08940610; }
    goto L_0894047C;
L_0894047C:;
    a1 = D_08C2ADE8 - (-21016);
    v0 = a1 - 21016;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    s2 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_089404F4; }
    goto L_089404A8;
L_089404A8:;
    a1 = LD32(a1-21016);
    a2 = a0 + 0;
    goto L_089404B0;
L_089404B0:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_089404E4; }
    goto L_089404C8;
L_089404C8:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_089404F8; }
    goto L_089404D8;
L_089404D8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089404C8; }
    goto L_089404E4;
L_089404E4:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_089404B0; }
    goto L_089404F4;
L_089404F4:;
    a0 = LD32(sp+24);
    goto L_089404F8;
L_089404F8:;
    s4 = 0 + 0;
    cnd_ = a0 == 0;
    ST32(sp+64, 0);
    if (cnd_) { goto L_0894056C; }
    goto L_08940504;
L_08940504:;
    v0 = D_08AED910 - (-9968);
    v1 = D_08AED914 - (-9964);
    f21 = BITSF(LD32(v0-9968));
    f22 = BITSF(LD32(v1-9964));
    s1 = LD32(a0);
    goto L_08940518;
L_08940518:;
    a1 = 1;
    a0 = s2 + 0;
    func_08ABDD18(a0, a1);
    goto L_08940524;
L_08940524:;
    v0 = LD32(s1);
    f0 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    f1 = BITSF(LD32(v1+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_08940564; }
    goto L_08940548;
L_08940548:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08940564; }
    goto L_08940554;
L_08940554:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08940B04; }
    goto L_08940560;
L_08940560:;
    a0 = LD32(sp+24);
    goto L_08940564;
L_08940564:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08940518; }
    goto L_0894056C;
L_0894056C:;
    v0 = func_08979DF4();
    goto L_08940574;
L_08940574:;
    v1 = 2;
    cnd_ = v0 == v1;
    a0 = LD32(sp+64);
    if (cnd_) { goto L_08940A48; }
    goto L_08940580;
L_08940580:;
    v0 = a0 | s4;
    cnd_ = v0 == 0;
    s1 = LD32(sp+16);
    if (cnd_) { goto L_089409A4; }
    goto L_0894058C;
L_0894058C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08940610; }
    goto L_0894059C;
L_0894059C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08940610; }
    goto L_089405A8;
L_089405A8:;
    v0 = LD32(s1);
    goto L_089405AC;
L_089405AC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08940600; }
    goto L_089405C0;
L_089405C0:;
    v0 = LD_U8(s0+8);
    goto L_089405C4;
L_089405C4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0894099C; }
    goto L_089405CC;
L_089405CC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894098C; }
    goto L_089405D4;
L_089405D4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089405DC;
L_089405DC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089405E8;
L_089405E8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089405F4;
L_089405F4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089405C4; }
    goto L_089405FC;
L_089405FC:;
    v1 = LD32(s1+4);
    goto L_08940600;
L_08940600:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089405AC; }
    goto L_08940610;
L_08940610:;
    v0 = LD32(s7+21392);
    goto L_08940614;
L_08940614:;
    s5 = s5 + 1;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    v0 = fp - 19184;
    if (cnd_) { goto L_08940358; }
    goto L_08940624;
L_08940624:;
    v0 = func_08979DF4();
    goto L_0894062C;
L_0894062C:;
    v1 = 2;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(s6+28); goto L_08940678; }
    goto L_08940638;
L_08940638:;
    v0 = 0 + 0;
    goto L_0894063C;
L_0894063C:;
    goto L_08940640;
L_08940640:;
    sp = sp + 208;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_08940678:;
    f20 = BITSF(0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0894063C; }
    goto L_08940684;
L_08940684:;
    a0 = LD32(a0+44);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08940640; }
    goto L_08940690;
L_08940690:;
    v0 = func_08960A84(a0);
    goto L_08940698;
L_08940698:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0894063C; }
    goto L_089406A0;
L_089406A0:;
    v0 = LD32(s6+28);
    s2 = sp + 48;
    a0 = LD32(v0+44);
    v0 = func_08960A84(a0);
    goto L_089406B0;
L_089406B0:;
    v1 = v0 + 52;
    a0 = v0 + 0;
    v0 = LD32(v1+8);
    ST32(sp+48, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+52, 0);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    ST32(sp+56, 0);
    if (cnd_) { goto L_0894072C; }
    goto L_089406D8;
L_089406D8:;
    a1 = LD32(a0+52);
    a2 = v1 + 0;
    a0 = LD32(s2+4);
    goto L_089406E4;
L_089406E4:;
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08940714; }
    goto L_089406F8;
L_089406F8:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+56); goto L_08940730; }
    goto L_08940708;
L_08940708:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089406F8; }
    goto L_08940714;
L_08940714:;
    v0 = a0 + 1;
    ST32(s2+4, v0);
    v1 = LD32(a2+4);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_089406E4; }
    goto L_0894072C;
L_0894072C:;
    a0 = LD32(sp+56);
    goto L_08940730;
L_08940730:;
    cnd_ = a0 == 0;
    v0 = D_08AED918 - (-9960);
    if (cnd_) { goto L_08940840; }
    goto L_08940738;
L_08940738:;
    f21 = BITSF(LD32(v0-9960));
    v1 = D_08AED91C - (-9956);
    v0 = LD32(sp+64);
    f22 = BITSF(LD32(v1-9956));
    s4 = D_08AED920 - (-9952);
    s1 = v0 < 0x1u;
    v0 = LD32(s6+28);
    goto L_08940754;
L_08940754:;
    s0 = LD32(a0);
    a1 = LD32(v0+48);
    a0 = LD32(s0+4);
    a2 = LD32(a1);
    v0 = LD32(a2-16);
    v0 = a1 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == a0;
    s3 = s0 + 28;
    if (cnd_) { goto L_08940800; }
    goto L_08940778;
L_08940778:;
    v0 = LD32(a2-12);
    v0 = a1 + v0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940794;
L_08940794:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s0+28));
    f2 = BITSF(LD32(s3+8));
    f0 = BITSF(LD32(s3+4));
    f1 = f1 - f3;
    f2 = f2 - f5;
    f0 = f0 - f4;
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f1);
    v0 = FBITS(f2);
    {vr0=BITSF(v1);}
    a0 = FBITS(f0);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_08940800; }
    goto L_089407FC;
L_089407FC:;
    f20 = f20 + f22;
    goto L_08940800;
L_08940800:;
    f0 = BITSF(LD32(s4-9952));
    a0 = s2 + 0;
    a1 = 1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08940820; }
    goto L_0894081C;
L_0894081C:;
    v0 = 0 + 0;
    goto L_08940820;
L_08940820:;
    v0 = s1 & v0;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp+48); goto L_089408E8; }
    goto L_0894082C;
L_0894082C:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940834;
L_08940834:;
    a0 = LD32(sp+56);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(s6+28); goto L_08940754; }
    goto L_08940840;
L_08940840:;
    s1 = LD32(sp+48);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08940638; }
    goto L_08940854;
L_08940854:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08940638; }
    goto L_08940860;
L_08940860:;
    v0 = LD32(s1);
    goto L_08940864;
L_08940864:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089408B8; }
    goto L_08940878;
L_08940878:;
    v0 = LD_U8(s0+8);
    goto L_0894087C;
L_0894087C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089408E0; }
    goto L_08940884;
L_08940884:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089408D0; }
    goto L_0894088C;
L_0894088C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08940894;
L_08940894:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089408A0;
L_089408A0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089408AC;
L_089408AC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0894087C; }
    goto L_089408B4;
L_089408B4:;
    v1 = LD32(s1+4);
    goto L_089408B8;
L_089408B8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940864; }
    goto L_089408C8;
L_089408C8:;
    v0 = 0 + 0;
    goto L_0894063C;
L_089408D0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08940894;
L_089408E0:;
    s0 = LD32(s0+4);
    goto L_089408AC;
L_089408E8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0894096C; }
    goto L_089408F8;
L_089408F8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0894096C; }
    goto L_08940904;
L_08940904:;
    v0 = LD32(s1);
    goto L_08940908;
L_08940908:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0894095C; }
    goto L_0894091C;
L_0894091C:;
    v0 = LD_U8(s0+8);
    goto L_08940920;
L_08940920:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08940984; }
    goto L_08940928;
L_08940928:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940974; }
    goto L_08940930;
L_08940930:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08940938;
L_08940938:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940944;
L_08940944:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08940950;
L_08940950:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08940920; }
    goto L_08940958;
L_08940958:;
    v1 = LD32(s1+4);
    goto L_0894095C;
L_0894095C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940908; }
    goto L_0894096C;
L_0894096C:;
    v0 = 1;
    goto L_0894063C;
L_08940974:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08940938;
L_08940984:;
    s0 = LD32(s0+4);
    goto L_08940950;
L_0894098C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089405DC;
L_0894099C:;
    s0 = LD32(s0+4);
    goto L_089405F4;
L_089409A4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0894096C; }
    goto L_089409B4;
L_089409B4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0894096C; }
    goto L_089409C0;
L_089409C0:;
    v0 = LD32(s1);
    goto L_089409C4;
L_089409C4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08940A18; }
    goto L_089409D8;
L_089409D8:;
    v0 = LD_U8(s0+8);
    goto L_089409DC;
L_089409DC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08940A40; }
    goto L_089409E4;
L_089409E4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940A30; }
    goto L_089409EC;
L_089409EC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089409F4;
L_089409F4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940A00;
L_08940A00:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08940A0C;
L_08940A0C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089409DC; }
    goto L_08940A14;
L_08940A14:;
    v1 = LD32(s1+4);
    goto L_08940A18;
L_08940A18:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089409C4; }
    goto L_08940A28;
L_08940A28:;
    v0 = 1;
    goto L_0894063C;
L_08940A30:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089409F4;
L_08940A40:;
    s0 = LD32(s0+4);
    goto L_08940A0C;
L_08940A48:;
    v1 = LD32(sp+64);
    v0 = s4 < 0x2u;
    s1 = v1 < 0x1u;
    v0 = s1 & v0;
    cnd_ = v0 == 0;
    s1 = LD32(sp+16);
    if (cnd_) { goto L_0894058C; }
    goto L_08940A60;
L_08940A60:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0894096C; }
    goto L_08940A70;
L_08940A70:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0894096C; }
    goto L_08940A7C;
L_08940A7C:;
    v0 = LD32(s1);
    goto L_08940A80;
L_08940A80:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08940AD4; }
    goto L_08940A94;
L_08940A94:;
    v0 = LD_U8(s0+8);
    goto L_08940A98;
L_08940A98:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08940AFC; }
    goto L_08940AA0;
L_08940AA0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940AEC; }
    goto L_08940AA8;
L_08940AA8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08940AB0;
L_08940AB0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940ABC;
L_08940ABC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08940AC8;
L_08940AC8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08940A98; }
    goto L_08940AD0;
L_08940AD0:;
    v1 = LD32(s1+4);
    goto L_08940AD4;
L_08940AD4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940A80; }
    goto L_08940AE4;
L_08940AE4:;
    v0 = 1;
    goto L_0894063C;
L_08940AEC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08940AB0;
L_08940AFC:;
    s0 = LD32(s0+4);
    goto L_08940AC8;
L_08940B04:;
    v1 = LD32(v1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940B14;
L_08940B14:;
    s0 = v0 + 0;
    v0 = LD32(s6+28);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940B3C;
L_08940B3C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = FBITS(f1);
    a0 = FBITS(f0);
    {vr0=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_08940BB0; }
    goto L_08940BA4;
L_08940BA4:;
    a0 = LD32(sp+64);
    a0 = a0 + 1;
    ST32(sp+64, a0);
    goto L_08940BB0;
L_08940BB0:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940BCC;
L_08940BCC:;
    s0 = v0 + 0;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940BEC;
L_08940BEC:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f4);
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {vr0=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f22, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_08940560; }
    goto L_08940C54;
L_08940C54:;
    s4 = s4 + 1;
    goto L_08940560;
L_08940C5C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_089403B8; }
    goto L_08940C68;
L_08940C68:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089403BC; }
    goto L_08940C74;
L_08940C74:;
    goto L_089403C8;
    v[0]=vr0;
}

/* 08940C7C */
rv_t func_08940C7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08940C7C:;
    sp = sp - 160;
    s7 = a1 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == 0;
    s6 = a0 + 0;
    if (cnd_) { goto L_08940CD0; }
    goto L_08940CC4;
L_08940CC4:;
    v0 = LD32(v1+48);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08940D10; }
    goto L_08940CD0;
L_08940CD0:;
    v0 = 999;
    goto L_08940CD4;
L_08940CD4:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_08940D10:;
    a0 = LD32(v1+44);
    v0 = func_08960A8C(a0);
    goto L_08940D18;
L_08940D18:;
    s5 = v0 + 40;
    v0 = LD32(s5+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(s5+8, v0);
    ST32(sp, s5);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940D40;
L_08940D40:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08941064; }
    goto L_08940D4C;
L_08940D4C:;
    f23 = BITSF(0);
    s3 = LD32(v0);
    goto L_08940D54;
L_08940D54:;
    f0 = BITSF(LD32(s3+24));
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    v0 = 0x8006;
    if (cnd_) { goto L_08941048; }
    goto L_08940D68;
L_08940D68:;
    v1 = LD32(s3+8);
    cnd_ = v1 == v0;
    a1 = D_08B28DC4 - (-29244);
    if (cnd_) { goto L_08941048; }
    goto L_08940D74;
L_08940D74:;
    v0 = a1 - 29244;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    s2 = sp + 16;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08940DE8; }
    goto L_08940D9C;
L_08940D9C:;
    a1 = LD32(a1-29244);
    a2 = a0 + 0;
    goto L_08940DA4;
L_08940DA4:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08940DD8; }
    goto L_08940DBC;
L_08940DBC:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+24);
    if (cnd_) { goto L_08940DEC; }
    goto L_08940DCC;
L_08940DCC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08940DBC; }
    goto L_08940DD8;
L_08940DD8:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08940DA4; }
    goto L_08940DE8;
L_08940DE8:;
    s0 = LD32(sp+24);
    goto L_08940DEC;
L_08940DEC:;
    v0 = D_08AED924 - (-9948);
    cnd_ = s0 == 0;
    f20 = BITSF(LD32(v0-9948));
    if (cnd_) { goto L_08940EB0; }
    goto L_08940DF8;
L_08940DF8:;
    a0 = s2 + 0;
    goto L_08940DFC;
L_08940DFC:;
    a1 = 1;
    s1 = LD32(s0);
    func_08ABD144(a0, a1);
    goto L_08940E08;
L_08940E08:;
    v1 = LD32(s6+28);
    a0 = LD32(v1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 32;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08940E2C;
L_08940E2C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s1+32));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+40, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    s0 = LD32(sp+24);
    if (cnd_) { goto L_08940EA8; }
    goto L_08940E98;
L_08940E98:;
    fcc = FCMP(f0, f23, 2);
    f20 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1+4); goto L_089411A4; }
    goto L_08940EA8;
L_08940EA8:;
    cnd_ = s0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08940DFC; }
    goto L_08940EB0;
L_08940EB0:;
    v0 = LD32(s5+8);
    s2 = sp + 48;
    a0 = s2 + 0;
    v0 = v0 + 1;
    ST32(s5+8, v0);
    a1 = 1;
    f20 = BITSF(0);
    ST32(sp+48, s5);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940EDC;
L_08940EDC:;
    a0 = LD32(sp+56);
    cnd_ = a0 == 0;
    v0 = D_08AED928 - (-9944);
    if (cnd_) { goto L_08940FAC; }
    goto L_08940EE8;
L_08940EE8:;
    v1 = D_08AED92C - (-9940);
    f21 = BITSF(LD32(v0-9944));
    f22 = BITSF(LD32(v1-9940));
    s1 = D_08AED930 - (-9936);
    s0 = s3 + 28;
    a2 = LD32(a0);
    goto L_08940F00;
L_08940F00:;
    v1 = LD32(s3+4);
    f6 = BITSF(LD32(s1-9936));
    v0 = LD32(a2+4);
    a0 = s2 + 0;
    a1 = 1;
    cnd_ = v1 == v0;
    a3 = a2 + 28;
    if (cnd_) { goto L_08940F88; }
    goto L_08940F1C;
L_08940F1C:;
    f4 = BITSF(LD32(a2+28));
    f5 = BITSF(LD32(a3+8));
    f0 = BITSF(LD32(s3+28));
    f1 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f4;
    f1 = f1 - f3;
    f2 = f2 - f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_08940F88; }
    goto L_08940F84;
L_08940F84:;
    f20 = f20 + f22;
    goto L_08940F88;
L_08940F88:;
    fcc = FCMP(f6, f20, 12);
    cnd_ = fcc;
    v0 = 999;
    if (cnd_) { goto L_089410AC; }
    goto L_08940F98;
L_08940F98:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08940FA0;
L_08940FA0:;
    a0 = LD32(sp+56);
    cnd_ = a0 != 0;
    if (cnd_) { a2 = LD32(a0); goto L_08940F00; }
    goto L_08940FAC;
L_08940FAC:;
    a0 = LD32(sp+48);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894109C; }
    goto L_08940FC0;
L_08940FC0:;
    s1 = LD32(sp+16);
    goto L_08940FC4;
L_08940FC4:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08941048; }
    goto L_08940FD4;
L_08940FD4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08941048; }
    goto L_08940FE0;
L_08940FE0:;
    v0 = LD32(s1);
    goto L_08940FE4;
L_08940FE4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08941038; }
    goto L_08940FF8;
L_08940FF8:;
    v0 = LD_U8(s0+8);
    goto L_08940FFC;
L_08940FFC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08941094; }
    goto L_08941004;
L_08941004:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08941084; }
    goto L_0894100C;
L_0894100C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08941014;
L_08941014:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941020;
L_08941020:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0894102C;
L_0894102C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08940FFC; }
    goto L_08941034;
L_08941034:;
    v1 = LD32(s1+4);
    goto L_08941038;
L_08941038:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08940FE4; }
    goto L_08941048;
L_08941048:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941054;
L_08941054:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s3 = LD32(v0); goto L_08940D54; }
    goto L_08941060;
L_08941060:;
    a0 = LD32(sp);
    goto L_08941064;
L_08941064:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08940CD0; }
    goto L_08941074;
L_08941074:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894107C;
L_0894107C:;
    v0 = 999;
    goto L_08940CD4;
L_08941084:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08941014;
L_08941094:;
    s0 = LD32(s0+4);
    goto L_0894102C;
L_0894109C:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089410A4;
L_089410A4:;
    s1 = LD32(sp+16);
    goto L_08940FC4;
L_089410AC:;
    ST32(s7, v0);
    a0 = LD32(sp+48);
    s5 = LD32(s3+4);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08941194; }
    goto L_089410C8;
L_089410C8:;
    s1 = LD32(sp+16);
    goto L_089410CC;
L_089410CC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08941150; }
    goto L_089410DC;
L_089410DC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08941150; }
    goto L_089410E8;
L_089410E8:;
    v0 = LD32(s1);
    goto L_089410EC;
L_089410EC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08941140; }
    goto L_08941100;
L_08941100:;
    v0 = LD_U8(s0+8);
    goto L_08941104;
L_08941104:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0894118C; }
    goto L_0894110C;
L_0894110C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894117C; }
    goto L_08941114;
L_08941114:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0894111C;
L_0894111C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941128;
L_08941128:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08941134;
L_08941134:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08941104; }
    goto L_0894113C;
L_0894113C:;
    v1 = LD32(s1+4);
    goto L_08941140;
L_08941140:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089410EC; }
    goto L_08941150;
L_08941150:;
    a0 = LD32(sp);
    goto L_08941154;
L_08941154:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894116C; }
    goto L_08941164;
L_08941164:;
    v0 = s5 + 0;
    goto L_08940CD4;
L_0894116C:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941174;
L_08941174:;
    v0 = s5 + 0;
    goto L_08940CD4;
L_0894117C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0894111C;
L_0894118C:;
    s0 = LD32(s0+4);
    goto L_08941134;
L_08941194:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894119C;
L_0894119C:;
    s1 = LD32(sp+16);
    goto L_089410CC;
L_089411A4:;
    s1 = LD32(sp+16);
    ST32(s7, v1);
    v0 = LD32(s1+8);
    s5 = LD32(s3+4);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08941150; }
    goto L_089411C0;
L_089411C0:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08941150; }
    goto L_089411CC;
L_089411CC:;
    v0 = LD32(s1);
    goto L_089411D0;
L_089411D0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08941224; }
    goto L_089411E4;
L_089411E4:;
    v0 = LD_U8(s0+8);
    goto L_089411E8;
L_089411E8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0894124C; }
    goto L_089411F0;
L_089411F0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894123C; }
    goto L_089411F8;
L_089411F8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08941200;
L_08941200:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894120C;
L_0894120C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08941218;
L_08941218:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089411E8; }
    goto L_08941220;
L_08941220:;
    v1 = LD32(s1+4);
    goto L_08941224;
L_08941224:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089411D0; }
    goto L_08941234;
L_08941234:;
    a0 = LD32(sp);
    goto L_08941154;
L_0894123C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08941200;
L_0894124C:;
    s0 = LD32(s0+4);
    goto L_08941218;
}

/* 08941254 */
rv_t func_08941254(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08941254:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2615C - (24924);
    t1 = D_08C2616C - (24940);
    t2 = D_08C2617C - (24956);
    a1 = a1 & a0;
    v1 = t0 + 24924;
    a2 = t1 + 24940;
    cnd_ = a1 == 0;
    a3 = t2 + 24956;
    if (cnd_) { goto L_0894130C; }
    goto L_08941284;
L_08941284:;
    v0 = D_08AED934 - (-9932);
    f4 = BITSF(LD32(v0-9932));
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
    ST32(t0+24924, FBITS(f2));
    ST32(t1+24940, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+24956, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894130C;
L_0894130C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08941314 */
rv_t func_08941314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941314:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08941254(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941328;
L_08941328:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08941334 */
u64 func_08941334(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941334:;
    sp = sp - 16;
    a2 = 1050;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894134C;
L_0894134C:;
    v0 = D_08AF88D0 - (-30512);
    v1 = 999;
    v0 = v0 - 30512;
    ST32(s0+32, v1);
    ST32(s0, v0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08941374 */
rv_t func_08941374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08941374:;
    sp = sp - 128;
    s4 = 0 + 0;
    s3 = a0 + 0;
    s1 = sp + 16;
    v0 = func_08941A54(a0);
    goto L_089413A8;
L_089413A8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089413C8;
L_089413C8:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = s3 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08941A54(a0);
    goto L_089413E8;
L_089413E8:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    v0 = func_08941A54(a0);
    goto L_089413F4;
L_089413F4:;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941408;
L_08941408:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 1;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f12 = BITSF(v0);
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08959780(a0, a1, a2, f12); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941448;
L_08941448:;
    a2 = D_08C2A204 - (-24060);
    a0 = a2 - 24060;
    v0 = LD32(a0+8);
    a1 = LD32(a0+4);
    v1 = D_08AED93C - (-9924);
    v0 = v0 + 1;
    ST32(a0+8, v0);
    f21 = BITSF(LD32(v1-9924));
    ST32(sp+16, a0);
    ST32(sp+20, 0);
    cnd_ = a1 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_089414C4; }
    goto L_08941478;
L_08941478:;
    a0 = LD32(a2-24060);
    a2 = a1 + 0;
    goto L_08941480;
L_08941480:;
    a1 = LD32(s1+4);
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_089414B4; }
    goto L_08941498;
L_08941498:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+24); goto L_089414C8; }
    goto L_089414A8;
L_089414A8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08941498; }
    goto L_089414B4;
L_089414B4:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08941480; }
    goto L_089414C4;
L_089414C4:;
    v1 = LD32(sp+24);
    goto L_089414C8;
L_089414C8:;
    cnd_ = v1 == 0;
    v0 = D_08AED938 - (-9928);
    if (cnd_) { goto L_089414FC; }
    goto L_089414D0;
L_089414D0:;
    f20 = BITSF(LD32(v0-9928));
    s0 = LD32(v1);
    goto L_089414D8;
L_089414D8:;
    v0 = LD32(s0+36);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+92); goto L_0894155C; }
    goto L_089414E4;
L_089414E4:;
    a0 = s1 + 0;
    goto L_089414E8;
L_089414E8:;
    a1 = 1;
    { u64 r_ = func_08ABDE1C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089414F0;
L_089414F0:;
    v1 = LD32(sp+24);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_089414D8; }
    goto L_089414FC;
L_089414FC:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894154C; }
    goto L_08941510;
L_08941510:;
    cnd_ = s4 == 0;
    v0 = 999;
    if (cnd_) { goto L_0894151C; }
    goto L_08941518;
L_08941518:;
    v0 = LD32(s4+4);
    goto L_0894151C;
L_0894151C:;
    ST32(s3+32, v0);
    v0 = 1;
    sp = sp + 128;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_0894154C:;
    { u64 r_ = func_08ABDEB4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941554;
L_08941554:;
    goto L_08941510;
L_0894155C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089414E8; }
    goto L_08941564;
L_08941564:;
    v0 = LD_U8(s0+93);
    a0 = s3 + 0;
    cnd_ = v0 != 0;
    s2 = s0 + 40;
    if (cnd_) { goto L_089414E4; }
    goto L_08941574;
L_08941574:;
    v0 = func_08941A54(a0);
    goto L_0894157C;
L_0894157C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894159C;
L_0894159C:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s2+4));
    f4 = f4 - f5;
    f2 = f2 - f0;
    f1 = f1 - f3;
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+40, FBITS(f4));
    v0 = FBITS(f2);
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    ST32(sp+36, FBITS(f1));
    if (cnd_) { goto L_089414E4; }
    goto L_08941600;
L_08941600:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_089414E8; }
    goto L_08941610;
L_08941610:;
    f21 = BITSF(v0);
    s4 = s0 + 0;
    goto L_089414E8;
    v[0]=vr0;
}

/* 0894161C */
rv_t func_0894161C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894161C:;
    sp = sp - 32;
    s1 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08941670; }
    goto L_0894163C;
L_0894163C:;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08941644;
L_08941644:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_0894164C;
L_0894164C:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941660;
L_08941660:;
    v0 = LD32(s1+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0894163C; }
    goto L_08941670;
L_08941670:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_08941678;
L_08941678:;
    a0 = v0 + 0;
    a1 = 999;
    func_0895988C(a0, a1);
    goto L_08941684;
L_08941684:;
    s0 = D_08B45A9C - (23196);
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_08941690;
L_08941690:;
    s0 = s0 + 23196;
    a1 = s0 + 0;
    a2 = 0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089416A4;
L_089416A4:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_089416AC;
L_089416AC:;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089416C0;
L_089416C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089416D4 */
rv_t func_089416D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089416D4:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_089416FC; }
    goto L_089416EC;
L_089416EC:;
    v0 = 0 + 0;
    goto L_089416F0;
L_089416F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089416FC:;
    v1 = 0x409b0000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0x8404;
    if (cnd_) { goto L_089416EC; }
    goto L_08941708;
L_08941708:;
    v0 = LD32(a1+4);
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_089416F0; }
    goto L_08941714;
L_08941714:;
    v1 = LD32(a0+28);
    v0 = 2;
    cnd_ = v1 != v0;
    a1 = 3;
    if (cnd_) { goto L_089416EC; }
    goto L_08941724;
L_08941724:;
    { rv_t r_ = func_08941A5C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894172C;
L_0894172C:;
    v0 = 1;
    goto L_089416F0;
}

/* 08941734 */
rv_t func_08941734(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08941734:;
    sp = sp - 80;
    a1 = LD32(a0+8);
    v0 = (a1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089417A0; }
    goto L_08941758;
L_08941758:;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = a1 | 0x10;
    if (cnd_) { goto L_089419CC; }
    goto L_08941768;
L_08941768:;
    v0 = v1 << 2;
    v1 = D_08AD9ED4 - (-24876);
    v1 = v1 - 24876;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08941784u: goto L_08941784; case 0x089417A0u: goto L_089417A0; case 0x089417ECu: goto L_089417EC; case 0x089419C8u: goto L_089419C8; default: rs_break(0, 0x0894177c); }
L_08941784:;
    v1 = LD32(s1+32);
    v0 = 999;
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_089417B8; }
    goto L_08941798;
L_08941798:;
    { rv_t r_ = func_08941A5C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089417A0;
L_089417A0:;
    goto L_089417A4;
L_089417A4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089417B8:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_089417C0;
L_089417C0:;
    a0 = v0 + 0;
    v0 = func_0895990C(a0);
    goto L_089417C8;
L_089417C8:;
    v1 = LD32(v0+552);
    a0 = s1 + 0;
    a1 = 3;
    v1 = v1 | 0x4;
    ST32(v0+552, v1);
    v1 = D_08AED940 - (-9920);
    f0 = BITSF(LD32(v1-9920));
    ST32(v0+548, FBITS(f0));
    goto L_08941798;
L_089417EC:;
    a0 = LD32(s1+32);
    a1 = D_08C2A204 - (-24060);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 24060;
    if (cnd_) { goto L_0894194C; }
    goto L_08941800;
L_08941800:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24060);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08941844; }
    goto L_08941824;
L_08941824:;
    s0 = LD32(v1);
    goto L_08941828;
L_08941828:;
    v0 = LD32(s0+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(s0+16); goto L_089419A8; }
    goto L_08941834;
L_08941834:;
    v1 = LD32(v1+4);
    goto L_08941838;
L_08941838:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08941828; }
    goto L_08941840;
L_08941840:;
    s2 = 0 + 0;
    goto L_08941844;
L_08941844:;
    cnd_ = s2 == 0;
    v0 = 999;
    if (cnd_) { goto L_0894194C; }
    goto L_0894184C;
L_0894184C:;
    v1 = LD32(s2+88);
    cnd_ = v1 == v0;
    s0 = s2 + 40;
    if (cnd_) { goto L_0894194C; }
    goto L_08941858;
L_08941858:;
    v0 = s2 + 52;
    f5 = BITSF(LD32(s2+40));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s2+52));
    f0 = BITSF(LD32(v0+4));
    f2 = f2 - f4;
    f1 = f1 - f5;
    f0 = f0 - f3;
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    v0 = func_08941A54(a0);
    goto L_08941894;
L_08941894:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089418B4;
L_089418B4:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s2+40));
    f3 = BITSF(LD32(s0+4));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = LD32(sp+4);
    {v[4]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = FBITS(f3);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f1, f0, 12);
    ST32(sp+20, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08941994; }
    goto L_08941934;
L_08941934:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_0894193C;
L_0894193C:;
    a1 = LD32(s2+88);
    a0 = v0 + 0;
    goto L_08941944;
L_08941944:;
    func_0895988C(a0, a1);
    goto L_0894194C;
L_0894194C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0894196C; }
    goto L_08941958;
L_08941958:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_08941980; }
    goto L_08941968;
L_08941968:;
    v0 = LD32(s1+8);
    goto L_0894196C;
L_0894196C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_08941798;
L_08941980:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089417A4; }
    goto L_08941988;
L_08941988:;
    a0 = s1 + 0;
    a1 = 2;
    goto L_08941798;
L_08941994:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_0894199C;
L_0894199C:;
    a0 = v0 + 0;
    a1 = 999;
    goto L_08941944;
L_089419A8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08941838; }
    goto L_089419B4;
L_089419B4:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    s2 = s0 + 0;
    if (cnd_) { goto L_08941834; }
    goto L_089419C0;
L_089419C0:;
    goto L_08941844;
L_089419C8:;
    v0 = a1 | 0x10;
    goto L_089419CC;
L_089419CC:;
    ST32(s1+8, v0);
    goto L_089417A0;
}

/* 089419D4 */
rv_t func_089419D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089419D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08941A54(a0);
    goto L_089419E8;
L_089419E8:;
    v1 = D_08B1B57C - (-19076);
    a1 = LD32(s0+28);
    v1 = v1 - 19076;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AED944 - (-9916);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9916));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941A24;
L_08941A24:;
    a0 = s0 + 0;
    v0 = func_08941A54(a0);
    goto L_08941A2C;
L_08941A2C:;
    v0 = v0 + 64;
    v1 = D_08AED948 - (-9912);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9912));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08941A54 */
u32 func_08941A54(u32 a0)
{
    u32 v0 = 0;
L_08941A54:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08941A5C */
rv_t func_08941A5C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08941A5C:;
    sp = sp - 32;
    v0 = 1;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08941BA0; }
    goto L_08941A80;
L_08941A80:;
    v0 = s0 < 0x5u;
    goto L_08941A84;
L_08941A84:;
    cnd_ = v0 == 0;
    ST32(s1+28, s0);
    if (cnd_) { goto L_08941B14; }
    goto L_08941A8C;
L_08941A8C:;
    v1 = D_08AD9F1C - (-24804);
    v0 = s0 << 2;
    v1 = v1 - 24804;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08941AA8u: goto L_08941AA8; case 0x08941B14u: goto L_08941B14; case 0x08941B28u: goto L_08941B28; case 0x08941B90u: goto L_08941B90; default: rs_break(0, 0x08941aa0); }
L_08941AA8:;
    a0 = s1 + 0;
    a1 = 1160;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941AB8;
L_08941AB8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08941AD8; }
    goto L_08941AC0;
L_08941AC0:;
    a1 = LD32(s1+32);
    a0 = v0 + 0;
    { u64 r_ = func_0894E418(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941ACC;
L_08941ACC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08941B18; }
    goto L_08941AD4;
L_08941AD4:;
    v0 = LD32(s1+8);
    goto L_08941AD8;
L_08941AD8:;
    a0 = s1 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    v0 = func_08941A54(a0);
    goto L_08941AE8;
L_08941AE8:;
    a0 = v0 + 0;
    v0 = func_0895990C(a0);
    goto L_08941AF0;
L_08941AF0:;
    v1 = LD32(v0+552);
    a0 = s1 + 0;
    a1 = 3;
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(v0+552, v1);
    v1 = D_08AED94C - (-9908);
    f0 = BITSF(LD32(v1-9908));
    ST32(v0+548, FBITS(f0));
    { rv_t r_ = func_08941A5C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941B14;
L_08941B14:;
    goto L_08941B18;
L_08941B18:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08941B28:;
    a0 = s1 + 0;
    s0 = D_08B45A9C - (23196);
    v0 = func_08941A54(a0);
    goto L_08941B34;
L_08941B34:;
    s0 = s0 + 23196;
    a2 = 0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941B48;
L_08941B48:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_08941B50;
L_08941B50:;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941B64;
L_08941B64:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_08941B6C;
L_08941B6C:;
    a0 = v0 + 0;
    v0 = func_0895990C(a0);
    goto L_08941B74;
L_08941B74:;
    v1 = LD32(v0+552);
    a0 = D_08AED94C - (-9908);
    f0 = BITSF(LD32(a0-9908));
    v1 = v1 | 0x4;
    ST32(v0+552, v1);
    ST32(v0+548, FBITS(f0));
    goto L_08941B14;
L_08941B90:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x8;
    ST32(s1+8, v0);
    goto L_08941B14;
L_08941BA0:;
    a1 = a0 + 0;
    a2 = 1160;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08941BB0;
L_08941BB0:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08941A80; }
    goto L_08941BB8;
L_08941BB8:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08941BC4;
L_08941BC4:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941BCC;
L_08941BCC:;
    a0 = s1 + 0;
    v0 = func_08941A54(a0);
    goto L_08941BD4;
L_08941BD4:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941BE8;
L_08941BE8:;
    v0 = s0 < 0x5u;
    goto L_08941A84;
}

/* 08941BF0 */
rv_t func_08941BF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08941BF0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2620C - (25100);
    t1 = D_08C2621C - (25116);
    t2 = D_08C2622C - (25132);
    a1 = a1 & a0;
    v1 = t0 + 25100;
    a2 = t1 + 25116;
    cnd_ = a1 == 0;
    a3 = t2 + 25132;
    if (cnd_) { goto L_08941CA8; }
    goto L_08941C20;
L_08941C20:;
    v0 = D_08AED950 - (-9904);
    f4 = BITSF(LD32(v0-9904));
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
    ST32(t0+25100, FBITS(f2));
    ST32(t1+25116, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+25132, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08941CA8;
L_08941CA8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08941CB0 */
rv_t func_08941CB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941CB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08941BF0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941CC4;
L_08941CC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08941CD0 */
u64 func_08941CD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941CD0:;
    sp = sp - 16;
    a2 = 1051;
    s0 = a0 + 0;
    func_089422F4(a0, a1, a2);
    goto L_08941CE8;
L_08941CE8:;
    v0 = D_08AF8908 - (-30456);
    v0 = v0 - 30456;
    ST32(s0, v0);
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08941CFC;
L_08941CFC:;
    v1 = LD32(v0+48);
    v0 = LD32(v1+228);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08941D14; }
    goto L_08941D10;
L_08941D10:;
    v0 = 1;
    goto L_08941D14;
L_08941D14:;
    ST32(s0+32, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08941D28 */
rv_t func_08941D28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941D28:;
    sp = sp - 16;
    v0 = 3;
    cnd_ = a1 == v0;
    v1 = 1102;
    if (cnd_) { goto L_08941D54; }
    goto L_08941D3C;
L_08941D3C:;
    v0 = 8;
    cnd_ = a1 == v0;
    v1 = 1100;
    if (cnd_) { goto L_08941D54; }
    goto L_08941D48;
L_08941D48:;
    { rv_t r_ = func_08942448(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941D50;
L_08941D50:;
    v1 = v0 + 0;
    goto L_08941D54;
L_08941D54:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08941D64 */
rv_t func_08941D64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08941D64:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C262BC - (25276);
    t1 = D_08C262CC - (25292);
    t2 = D_08C262DC - (25308);
    a1 = a1 & a0;
    v1 = t0 + 25276;
    a2 = t1 + 25292;
    cnd_ = a1 == 0;
    a3 = t2 + 25308;
    if (cnd_) { goto L_08941E1C; }
    goto L_08941D94;
L_08941D94:;
    v0 = D_08AED954 - (-9900);
    f4 = BITSF(LD32(v0-9900));
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
    ST32(t0+25276, FBITS(f2));
    ST32(t1+25292, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+25308, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08941E1C;
L_08941E1C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08941E24 */
rv_t func_08941E24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941E24:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08941D64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08941E38;
L_08941E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08941E44 */
u64 func_08941E44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08941E44:;
    sp = sp - 16;
    a2 = 1100;
    s0 = a0 + 0;
    func_08949ADC(a0, a1, a2);
    goto L_08941E5C;
L_08941E5C:;
    v0 = D_08AF8948 - (-30392);
    v1 = 1;
    v0 = v0 - 30392;
    ST8(s0+40, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08941E80 */
rv_t func_08941E80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08941E80:;
    sp = sp - 112;
    v0 = 999;
    s0 = a0 + 0;
    a0 = D_08C2A204 - (-24060);
    v1 = a0 - 24060;
    cnd_ = a1 == v0;
    ST32(s0+32, a1);
    if (cnd_) { goto L_089421A8; }
    goto L_08941EA8;
L_08941EA8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24060);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08941EEC; }
    goto L_08941ECC;
L_08941ECC:;
    v1 = LD32(a0);
    goto L_08941ED0;
L_08941ED0:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089421BC; }
    goto L_08941EDC;
L_08941EDC:;
    a0 = LD32(a0+4);
    goto L_08941EE0;
L_08941EE0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08941ED0; }
    goto L_08941EE8;
L_08941EE8:;
    a2 = 0 + 0;
    goto L_08941EEC;
L_08941EEC:;
    cnd_ = a2 == 0;
    a1 = a2 + 64;
    if (cnd_) { goto L_089421A8; }
    goto L_08941EF4;
L_08941EF4:;
    a0 = a2 + 40;
    f5 = BITSF(LD32(a2+40));
    f4 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a2+64));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    f1 = f1 - f5;
    f2 = f2 - f4;
    f0 = f0 - f3;
    v0 = a2 + 52;
    ST32(sp, FBITS(f1));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    f6 = BITSF(0);
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a2+52));
    f5 = BITSF(LD32(a2+40));
    f1 = BITSF(LD32(a0+8));
    f2 = f2 - f0;
    f3 = f3 - f5;
    f4 = f4 - f1;
    ST32(sp+20, FBITS(f2));
    v0 = FBITS(f3);
    {vr12=BITSF(v0);}
    v0 = FBITS(f2);
    {vr13=BITSF(v0);}
    v0 = FBITS(f4);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f6, 2);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_08941FD8; }
    goto L_08941F94;
L_08941F94:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr8=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(vr4);}
    f6 = BITSF(v0);
    {float s0=vr8;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08941FD8;
L_08941FD8:;
    f4 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    v0 = FBITS(f4);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = LD32(sp);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    v0 = FBITS(f2);
    {vr5=BITSF(v0);}
    v0 = FBITS(f3);
    {vr6=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = f3 * f6;
    f4 = f4 * f6;
    f1 = f0 / f6;
    f7 = BITSF(0);
    ST32(sp+72, FBITS(f3));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    ST32(sp+64, FBITS(f4));
    f2 = f2 * f6;
    f0 = f3 * f1;
    f5 = f4 * f1;
    f1 = f2 * f1;
    ST32(sp+68, FBITS(f2));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    f2 = BITSF(LD32(a2+40));
    f4 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+4));
    f2 = f2 + f5;
    f4 = f4 + f0;
    f3 = f3 + f1;
    ST32(sp+32, FBITS(f2));
    ST32(sp+40, FBITS(f4));
    ST32(sp+36, FBITS(f3));
    f0 = BITSF(LD32(a2+64));
    f1 = BITSF(LD32(a1+8));
    f5 = BITSF(LD32(a1+4));
    f2 = f2 - f0;
    f4 = f4 - f1;
    f3 = f3 - f5;
    v0 = FBITS(f2);
    {vr12=BITSF(v0);}
    v0 = FBITS(f3);
    {vr13=BITSF(v0);}
    v0 = FBITS(f4);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+64, FBITS(f2));
    fcc = FCMP(f0, f7, 2);
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_08942114; }
    goto L_089420D8;
L_089420D8:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_08942114;
L_08942114:;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(v0);}
    v0 = LD32(sp+72);
    {vr5=BITSF(v1);}
    v1 = 0 + 0;
    {vr6=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = 0xbf800000u;
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    {vr16=BITSF(v0);}
    {float s0=vr16;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    v0 = D_08AED958 - (-9896);
    f0 = BITSF(LD32(v0-9896));
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    {vr4=1.57079632679f;}
    a0 = s0 + 0;
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f7));
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    ST32(sp+48, FBITS(f7));
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f20 = BITSF(v0);
    v0 = func_0894A06C(a0);
    goto L_08942190;
L_08942190:;
    a0 = v0 + 0;
    a1 = 2;
    v0 = func_08959870(a0, a1);
    goto L_0894219C;
L_0894219C:;
    a0 = s0 + 0;
    v0 = func_0894A06C(a0);
    goto L_089421A4;
L_089421A4:;
    ST32(v0+112, FBITS(f20));
    goto L_089421A8;
L_089421A8:;
    sp = sp + 112;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;return (rv_t){ v0, v1, f0 }; }
L_089421BC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_08941EDC; }
    goto L_089421C8;
L_089421C8:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08941EE0; }
    goto L_089421D4;
L_089421D4:;
    goto L_08941EEC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;
}

/* 089421DC */
rv_t func_089421DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089421DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894A06C(a0);
    goto L_089421F0;
L_089421F0:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08959870(a0, a1);
    goto L_089421FC;
L_089421FC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08949C60(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942204;
L_08942204:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08942214 */
rv_t func_08942214(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08942214:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2636C - (25452);
    t1 = D_08C2637C - (25468);
    t2 = D_08C2638C - (25484);
    a1 = a1 & a0;
    v1 = t0 + 25452;
    a2 = t1 + 25468;
    cnd_ = a1 == 0;
    a3 = t2 + 25484;
    if (cnd_) { goto L_089422CC; }
    goto L_08942244;
L_08942244:;
    v0 = D_08AED95C - (-9892);
    f4 = BITSF(LD32(v0-9892));
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
    ST32(t0+25452, FBITS(f2));
    ST32(t1+25468, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+25484, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089422CC;
L_089422CC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089422D4 */
rv_t func_089422D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089422D4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08942214(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089422E8;
L_089422E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089422F4 */
void func_089422F4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089422F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08950BAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08942308;
L_08942308:;
    v0 = D_08AF8988 - (-30328);
    v0 = v0 - 30328;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 08942324 */
rv_t func_08942324(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08942324:;
    sp = sp - 16;
    v1 = 0x8074;
    a2 = LD_U16(a1+16);
    cnd_ = a2 == v1;
    if (cnd_) { goto L_08942358; }
    goto L_0894233C;
L_0894233C:;
    { rv_t r_ = func_08950BE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942344;
L_08942344:;
    a0 = v0 + 0;
    goto L_08942348;
L_08942348:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08942358:;
    v0 = func_08942440(a0);
    goto L_08942360;
L_08942360:;
    v1 = LD32(v0+156);
    a0 = 1;
    v1 = v1 | 0x4;
    ST32(v0+156, v1);
    goto L_08942348;
}

/* 08942374 */
rv_t func_08942374(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08942374:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08950D44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942388;
L_08942388:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089423DC; }
    goto L_08942394;
L_08942394:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_0894241C; }
    goto L_089423A4;
L_089423A4:;
    v1 = LD32(s0+28);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089423E8; }
    goto L_089423B4;
L_089423B4:;
    cnd_ = v1 == v0;
    v0 = 7;
    if (cnd_) { goto L_089423E8; }
    goto L_089423BC;
L_089423BC:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089423E8; }
    goto L_089423C4;
L_089423C4:;
    a0 = s0 + 0;
    v0 = func_08942440(a0);
    goto L_089423CC;
L_089423CC:;
    a0 = v0 + 0;
    a1 = 10;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089423D8;
L_089423D8:;
    goto L_089423DC;
L_089423DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089423E8:;
    a0 = s0 + 0;
    v0 = func_08942440(a0);
    goto L_089423F0;
L_089423F0:;
    a0 = v0 + 0;
    a1 = 11;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089423FC;
L_089423FC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 3;
    goto L_08942408;
L_08942408:;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942414;
L_08942414:;
    goto L_089423DC;
L_0894241C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089423DC; }
    goto L_08942424;
L_08942424:;
    v1 = LD32(s0+28);
    v0 = 2;
    cnd_ = v1 != v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089423C4; }
    goto L_08942434;
L_08942434:;
    v1 = LD32(s0);
    a1 = 1;
    goto L_08942408;
}

/* 08942440 */
u32 func_08942440(u32 a0)
{
    u32 v0 = 0;
L_08942440:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08942448 */
rv_t func_08942448(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
L_08942448:;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    v1 = D_08AD9F30 - (-24784);
    if (cnd_) { goto L_08942474; }
    goto L_08942454;
L_08942454:;
    v0 = a1 << 2;
    v1 = v1 - 24784;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894246Cu: goto L_0894246C; case 0x08942474u: goto L_08942474; case 0x0894247Cu: goto L_0894247C; case 0x08942484u: goto L_08942484; case 0x0894248Cu: goto L_0894248C; case 0x08942494u: goto L_08942494; case 0x0894249Cu: goto L_0894249C; case 0x089424A4u: goto L_089424A4; default: rs_break(0, 0x08942464); }
L_0894246C:;
    v0 = 1158;
    return (rv_t){ v0, v1, f0 };
L_08942474:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
L_0894247C:;
    v0 = 1109;
    return (rv_t){ v0, v1, f0 };
L_08942484:;
    v0 = 1104;
    return (rv_t){ v0, v1, f0 };
L_0894248C:;
    v0 = 1105;
    return (rv_t){ v0, v1, f0 };
L_08942494:;
    v0 = 1106;
    return (rv_t){ v0, v1, f0 };
L_0894249C:;
    v0 = 1107;
    return (rv_t){ v0, v1, f0 };
L_089424A4:;
    v0 = 1108;
    return (rv_t){ v0, v1, f0 };
}

/* 089424AC */
rv_t func_089424AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089424AC:;
    sp = sp - 32;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0xcu;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08942524; }
    goto L_089424D8;
L_089424D8:;
    v0 = v1 << 2;
    v1 = D_08AD9F58 - (-24744);
    v1 = v1 - 24744;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089424F4u: goto L_089424F4; case 0x08942524u: goto L_08942524; default: rs_break(0, 0x089424ec); }
L_089424F4:;
    v1 = LD32(s0);
    a1 = LD32(s0+28);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942508;
L_08942508:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894251C;
L_0894251C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0894271C; }
    goto L_08942524;
L_08942524:;
    v0 = s1 < 0xcu;
    goto L_08942528;
L_08942528:;
    cnd_ = v0 == 0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_08942628; }
    goto L_08942530;
L_08942530:;
    v1 = D_08AD9F88 - (-24696);
    v0 = s1 << 2;
    v1 = v1 - 24696;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894254Cu: goto L_0894254C; case 0x0894257Cu: goto L_0894257C; case 0x08942594u: goto L_08942594; case 0x089425E0u: goto L_089425E0; case 0x08942628u: goto L_08942628; case 0x08942638u: goto L_08942638; case 0x08942680u: goto L_08942680; case 0x089426D4u: goto L_089426D4; default: rs_break(0, 0x08942544); }
L_0894254C:;
    a0 = s0 + 0;
    v0 = func_08942440(a0);
    goto L_08942554;
L_08942554:;
    a0 = v0 + 0;
    a1 = 1;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942560;
L_08942560:;
    v0 = 1;
    ST8(s0+36, v0);
    a0 = s0 + 0;
    v0 = func_08942440(a0);
    goto L_08942570;
L_08942570:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_08959870(a0, a1);
    goto L_0894257C;
L_0894257C:;
    goto L_08942580;
L_08942580:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08942594:;
    v1 = LD32(s0);
    a1 = LD32(s0+28);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089425A8;
L_089425A8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089425B8;
L_089425B8:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08942580; }
    goto L_089425C0;
L_089425C0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_089425CC;
L_089425CC:;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089425D8;
L_089425D8:;
    goto L_08942580;
L_089425E0:;
    v1 = LD32(s0);
    a1 = LD32(s0+28);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089425F4;
L_089425F4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942604;
L_08942604:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08942628; }
    goto L_0894260C;
L_0894260C:;
    v1 = LD32(s2+4);
    ST32(v0+32, v1);
    v0 = LD32(s2);
    v0 = v0 ^ 0x4;
    v0 = v0 < 0x1u;
    ST8(a0+36, v0);
    goto L_0894257C;
L_08942628:;
    v1 = LD32(s0);
    goto L_0894262C;
L_0894262C:;
    a0 = s0 + 0;
    a1 = 3;
    goto L_089425CC;
L_08942638:;
    v1 = LD32(s0);
    a1 = LD32(s0+28);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894264C;
L_0894264C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894265C;
L_0894265C:;
    a0 = v0 + 0;
    v1 = 0 < s2;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0894262C; }
    goto L_08942674;
L_08942674:;
    v0 = LD32(s2+4);
    ST32(a0+32, v0);
    goto L_0894257C;
L_08942680:;
    v1 = LD32(s0);
    a1 = LD32(s0+28);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942694;
L_08942694:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089426A4;
L_089426A4:;
    a0 = v0 + 0;
    v1 = 0 < s2;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0894262C; }
    goto L_089426BC;
L_089426BC:;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = LD32(s2+4);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089426CC;
L_089426CC:;
    goto L_08942580;
L_089426D4:;
    v1 = LD32(s0);
    a1 = LD32(s0+28);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089426E8;
L_089426E8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089426F8;
L_089426F8:;
    a0 = v0 + 0;
    v1 = 0 < s2;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0894262C; }
    goto L_08942710;
L_08942710:;
    v0 = LD32(s2+4);
    ST32(a0+36, v0);
    goto L_0894257C;
L_0894271C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08942728;
L_08942728:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942730;
L_08942730:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08942738;
L_08942738:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894274C;
L_0894274C:;
    v0 = s1 < 0xcu;
    goto L_08942528;
}

/* 08942754 */
rv_t func_08942754(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08942754:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2639C - (25500);
    t1 = D_08C263AC - (25516);
    t2 = D_08C263BC - (25532);
    a1 = a1 & a0;
    v1 = t0 + 25500;
    a2 = t1 + 25516;
    cnd_ = a1 == 0;
    a3 = t2 + 25532;
    if (cnd_) { goto L_0894280C; }
    goto L_08942784;
L_08942784:;
    v0 = D_08AED960 - (-9888);
    f4 = BITSF(LD32(v0-9888));
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
    ST32(t0+25500, FBITS(f2));
    ST32(t1+25516, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+25532, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894280C;
L_0894280C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08942814 */
rv_t func_08942814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08942814:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08942754(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942828;
L_08942828:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08942834 */
rv_t func_08942834(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08942834:;
    sp = sp - 16;
    a2 = 1150;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894284C;
L_0894284C:;
    a0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = a0 + 23196;
    v0 = s0 + 40;
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    ST32(s0+40, FBITS(f2));
    a1 = s0 + 52;
    a2 = s0 + 68;
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    v0 = D_08AF89C8 - (-30264);
    v0 = v0 - 30264;
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+8));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f0));
    ST32(s0+52, FBITS(f2));
    ST32(s0+64, 0);
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0, v0);
    ST32(s0+68, FBITS(f2));
    ST32(s0+84, 0);
    ST32(s0+28, 0);
    ST8(s0+36, 0);
    ST8(s0+80, 0);
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089428DC */
rv_t func_089428DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089428DC:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089428F8;
L_089428F8:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08943018(a0);
    goto L_08942904;
L_08942904:;
    a1 = v0 + 0;
    v1 = D_08AED968 - (-9880);
    v0 = D_08AED964 - (-9884);
    f12 = BITSF(LD32(v0-9884));
    f13 = BITSF(LD32(v1-9880));
    a0 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_08965E64(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942924;
L_08942924:;
    ST32(s1+84, s0);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089429C8; }
    goto L_08942930;
L_08942930:;
    v0 = LD32(s1+24);
    a0 = D_08C2B0A8 - (-20312);
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089429C4; }
    goto L_08942948;
L_08942948:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08942998; }
    goto L_0894296C;
L_0894296C:;
    a0 = LD32(a1);
    goto L_08942970;
L_08942970:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089429F4; }
    goto L_08942988;
L_08942988:;
    a1 = LD32(a1+4);
    goto L_0894298C;
L_0894298C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08942970; }
    goto L_08942994;
L_08942994:;
    a0 = 0 + 0;
    goto L_08942998;
L_08942998:;
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089429C8; }
    goto L_089429A0;
L_089429A0:;
    ST32(sp, 0);
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_089429A8;
L_089429A8:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089429BC;
L_089429BC:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+84); goto L_089429DC; }
    goto L_089429C4;
L_089429C4:;
    v0 = 1;
    goto L_089429C8;
L_089429C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089429DC:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(sp);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089429EC;
L_089429EC:;
    v0 = 1;
    goto L_089429C8;
L_089429F4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894298C; }
    goto L_08942A00;
L_08942A00:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894298C; }
    goto L_08942A0C;
L_08942A0C:;
    goto L_08942998;
}

/* 08942A14 */
rv_t func_08942A14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08942A14:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08942A5C; }
    goto L_08942A30;
L_08942A30:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08942A38;
L_08942A38:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942A4C;
L_08942A4C:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08942A30; }
    goto L_08942A5C;
L_08942A5C:;
    a0 = LD32(s0+84);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08942A90; }
    goto L_08942A68;
L_08942A68:;
    ST32(s0+84, 0);
    goto L_08942A6C;
L_08942A6C:;
    a0 = s0 + 0;
    v0 = func_08943018(a0);
    goto L_08942A74;
L_08942A74:;
    v1 = LD32(v0+48);
    v0 = 999;
    ST32(v1+256, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08942A90:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942A9C;
L_08942A9C:;
    ST32(s0+84, 0);
    goto L_08942A6C;
}

/* 08942AA4 */
rv_t func_08942AA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08942AA4:;
    sp = sp - 64;
    s0 = a0 + 0;
    s1 = s0 + 40;
    f20 = f12;
    v0 = func_08943018(a0);
    goto L_08942AC8;
L_08942AC8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942AE8;
L_08942AE8:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s1+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s0 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = func_08943018(a0);
    goto L_08942B20;
L_08942B20:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942B40;
L_08942B40:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = LD32(s0+84);
    a3 = LD_U8(s0+36);
    a1 = sp + 16;
    f12 = f20;
    a2 = sp + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = func_08965A70(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942B70;
L_08942B70:;
    v0 = LD_U8(s0+80);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08942B94; }
    goto L_08942B7C;
L_08942B7C:;
    goto L_08942B80;
L_08942B80:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08942B94:;
    ST32(sp+4, 0);
    v0 = func_08943018(a0);
    goto L_08942B9C;
L_08942B9C:;
    a0 = v0 + 0;
    v1 = LD32(v0);
    f12 = f20;
    v0 = LD32(v1+84);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942BB4;
L_08942BB4:;
    goto L_08942B80;
}

/* 08942BBC */
rv_t func_08942BBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08942BBC:;
    sp = sp - 96;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08942BF4; }
    goto L_08942BE8;
L_08942BE8:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+32)); goto L_08942C10; }
    goto L_08942BF4;
L_08942BF4:;
    goto L_08942BF8;
L_08942BF8:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08942C10:;
    f0 = f0 + f12;
    ST32(a0+32, FBITS(f0));
    v0 = func_08943018(a0);
    goto L_08942C1C;
L_08942C1C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08942C24;
L_08942C24:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08942C2C;
L_08942C2C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08942F5C; }
    goto L_08942C34;
L_08942C34:;
    a0 = s0 + 0;
    v0 = func_08943018(a0);
    goto L_08942C3C;
L_08942C3C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08942C44;
L_08942C44:;
    v1 = LD32(v0+24);
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    s1 = LD32(v1+4);
    cnd_ = s1 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08942F58; }
    goto L_08942C5C;
L_08942C5C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08942CAC; }
    goto L_08942C80;
L_08942C80:;
    a1 = LD32(a0);
    goto L_08942C84;
L_08942C84:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08942F64; }
    goto L_08942C9C;
L_08942C9C:;
    a0 = LD32(a0+4);
    goto L_08942CA0;
L_08942CA0:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08942C84; }
    goto L_08942CA8;
L_08942CA8:;
    s2 = 0 + 0;
    goto L_08942CAC;
L_08942CAC:;
    cnd_ = s2 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08942F5C; }
    goto L_08942CB4;
L_08942CB4:;
    a0 = s0 + 0;
    v0 = func_08943018(a0);
    goto L_08942CBC;
L_08942CBC:;
    v1 = LD32(v0+48);
    a0 = s0 + 0;
    ST32(v1+256, s1);
    v0 = func_08943018(a0);
    goto L_08942CCC;
L_08942CCC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942CEC;
L_08942CEC:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    s1 = v0 + 0;
    f0 = func_08943020(a0, a1);
    goto L_08942CFC;
L_08942CFC:;
    v1 = LD32(s0+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08942BF8; }
    goto L_08942D0C;
L_08942D0C:;
    v0 = v1 << 2;
    v1 = D_08AD9FB8 - (-24648);
    v1 = v1 - 24648;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08942BF4u: goto L_08942BF4; case 0x08942D28u: goto L_08942D28; case 0x08942DBCu: goto L_08942DBC; case 0x08942EBCu: goto L_08942EBC; case 0x08942F34u: goto L_08942F34; default: rs_break(0, 0x08942d20); }
L_08942D28:;
    v0 = s0 + 40;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s0+40));
    f2 = f2 - f3;
    f4 = f4 - f5;
    f1 = f1 - f0;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+4, FBITS(f2));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AED96C - (-9876);
    f0 = BITSF(LD32(v0-9876));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08942DB0; }
    goto L_08942D98;
L_08942D98:;
    a0 = s0 + 0;
    goto L_08942D9C;
L_08942D9C:;
    a1 = 2;
    goto L_08942DA0;
L_08942DA0:;
    { rv_t r_ = func_08943378(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942DA8;
L_08942DA8:;
    goto L_08942BF8;
L_08942DB0:;
    a0 = s0 + 0;
    goto L_08942DB4;
L_08942DB4:;
    a1 = 1;
    goto L_08942DA0;
L_08942DBC:;
    f0 = BITSF(LD32(s0+64));
    a0 = s0 + 0;
    a1 = s0 + 0;
    f0 = f0 + f20;
    a2 = 1152;
    a3 = 0 + 0;
    ST32(s0+64, FBITS(f0));
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08942DDC;
L_08942DDC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08942DF4; }
    goto L_08942DE4;
L_08942DE4:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_08942E00; }
    goto L_08942DF4;
L_08942DF4:;
    a0 = s0 + 0;
    a1 = 3;
    goto L_08942DA0;
L_08942E00:;
    cnd_ = v0 != 0;
    v0 = D_08AED970 - (-9872);
    if (cnd_) { goto L_08942D98; }
    goto L_08942E08;
L_08942E08:;
    f0 = BITSF(LD32(s0+64));
    f1 = BITSF(LD32(v0-9872));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08942BF8; }
    goto L_08942E20;
L_08942E20:;
    s1 = s0 + 40;
    s2 = s0 + 68;
    f4 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s0+40));
    f5 = BITSF(LD32(s0+68));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f1 = f1 - f5;
    f2 = f2 - f4;
    f3 = f3 - f0;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AED974 - (-9868);
    f0 = BITSF(LD32(v0-9868));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f0, f4, 12);
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_08942E98; }
    goto L_08942E90;
L_08942E90:;
    ST32(s0+64, 0);
    goto L_08942BF4;
L_08942E98:;
    a1 = s1 + 0;
    { u64 r_ = func_08944AEC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08942EA0;
L_08942EA0:;
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s0+40));
    f2 = BITSF(LD32(s1+4));
    ST32(s2+8, FBITS(f0));
    ST32(s0+68, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    goto L_08942E90;
L_08942EBC:;
    v0 = s0 + 52;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s0+52));
    f2 = f2 - f3;
    f4 = f4 - f5;
    f1 = f1 - f0;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+4, FBITS(f2));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AED978 - (-9864);
    f0 = BITSF(LD32(v0-9864));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08942BF4; }
    goto L_08942F2C;
L_08942F2C:;
    a0 = s0 + 0;
    goto L_08942DB4;
L_08942F34:;
    v0 = D_08AED97C - (-9860);
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9860));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08942BF8; }
    goto L_08942F50;
L_08942F50:;
    a0 = s0 + 0;
    goto L_08942D9C;
L_08942F58:;
    a0 = s0 + 0;
    goto L_08942F5C;
L_08942F5C:;
    a1 = 4;
    goto L_08942DA0;
L_08942F64:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08942CA0; }
    goto L_08942F70;
L_08942F70:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08942C9C; }
    goto L_08942F7C;
L_08942F7C:;
    goto L_08942CAC;
}

/* 08942F84 */
rv_t func_08942F84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08942F84:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08942FB0; }
    goto L_08942FA0;
L_08942FA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08942FB0:;
    v0 = func_08943018(a0);
    goto L_08942FB8;
L_08942FB8:;
    a1 = LD32(s0+28);
    v1 = D_08B1B58C - (-19060);
    v1 = v1 - 19060;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AED980 - (-9856);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9856));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08942FF4;
L_08942FF4:;
    a0 = s0 + 0;
    v0 = func_08943018(a0);
    goto L_08942FFC;
L_08942FFC:;
    v0 = v0 + 64;
    v1 = D_08AED984 - (-9852);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9852));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08942FA0;
}

/* 08943018 */
u32 func_08943018(u32 a0)
{
    u32 v0 = 0;
L_08943018:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08943020 */
float func_08943020(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08943020:;
    sp = sp - 48;
    s4 = a0 + 0;
    s2 = a1 + 0;
    v0 = func_08943018(a0);
    goto L_08943048;
L_08943048:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943068;
L_08943068:;
    a3 = LD32(s2);
    s3 = v0 + 0;
    v0 = LD32(a3-16);
    a0 = s2 + v0;
    v1 = LD_U16(a0+8);
    v0 = 0x8004;
    cnd_ = v1 == v0;
    v0 = 0x8003;
    if (cnd_) { goto L_08943278; }
    goto L_08943088;
L_08943088:;
    cnd_ = v1 == v0;
    v0 = 0x8014;
    if (cnd_) { goto L_08943278; }
    goto L_08943090;
L_08943090:;
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_08943278; }
    goto L_08943098;
L_08943098:;
    cnd_ = v1 == v0;
    v0 = 999;
    if (cnd_) { goto L_08943278; }
    goto L_089430A0;
L_089430A0:;
    a2 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08943224; }
    goto L_089430B0;
L_089430B0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08943100; }
    goto L_089430D4;
L_089430D4:;
    a0 = LD32(a1);
    goto L_089430D8;
L_089430D8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08943258; }
    goto L_089430F0;
L_089430F0:;
    a1 = LD32(a1+4);
    goto L_089430F4;
L_089430F4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089430D8; }
    goto L_089430FC;
L_089430FC:;
    a0 = 0 + 0;
    goto L_08943100;
L_08943100:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3-12); goto L_08943228; }
    goto L_08943108;
L_08943108:;
    v0 = LD32(a0);
    f12 = BITSF(0);
    s1 = s4 + 40;
    v1 = LD32(v0+56);
    a1 = s1 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943124;
L_08943124:;
    v0 = 1;
    ST8(s4+36, v0);
    goto L_0894312C;
L_0894312C:;
    v0 = LD32(s2);
    goto L_08943130;
L_08943130:;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943148;
L_08943148:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s3+8));
    f0 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s3+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s4 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = func_08943018(a0);
    goto L_08943180;
L_08943180:;
    a2 = LD32(v0+56);
    a1 = sp + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08943190;
L_08943190:;
    a1 = v0 + 0;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    v0 = D_08B20494 - (1172);
    if (cnd_) { goto L_08943204; }
    goto L_089431A0;
L_089431A0:;
    a2 = v0 + 1172;
    v1 = LD_U16(a2+10);
    a0 = s4 + 52;
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089431CC; }
    goto L_089431B8;
L_089431B8:;
    v1 = LD32(a2+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_089431CC;
L_089431CC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    goto L_089431E4;
L_089431E4:;
    sp = sp + 48;
    return f0;
L_08943204:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s4+40));
    f1 = BITSF(LD32(s1+4));
    v0 = s4 + 52;
    ST32(s4+52, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_089431E4;
L_08943224:;
    a0 = LD32(a3-12);
    goto L_08943228;
L_08943228:;
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = s4 + 40;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894323C;
L_0894323C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s4+40, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_08943124;
L_08943258:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089430F4; }
    goto L_08943264;
L_08943264:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089430F4; }
    goto L_08943270;
L_08943270:;
    goto L_08943100;
L_08943278:;
    a0 = LD32(a3-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943290;
L_08943290:;
    a0 = LD32(s2);
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v1 = LD32(a0-16);
    f5 = BITSF(LD32(s3));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    v1 = s2 + v1;
    f1 = f1 - f5;
    f0 = f0 - f2;
    f4 = f4 - f3;
    a1 = LD32(v1+4);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089432E0;
L_089432E0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0894336C; }
    goto L_089432E8;
L_089432E8:;
    v1 = LD32(v0);
    v0 = D_08B1B740 - (-18624);
    f12 = BITSF(LD32(v0-18624));
    v0 = LD32(v1+104);
    s1 = s4 + 40;
    a0 = s0 + 0;
    a1 = sp + 0;
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894330C;
L_0894330C:;
    cnd_ = v0 == 0;
    ST8(s4+36, v0);
    if (cnd_) { goto L_08943348; }
    goto L_08943314;
L_08943314:;
    f2 = BITSF(LD32(s4+40));
    f5 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s3+8));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    ST32(s4+40, FBITS(f2));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    goto L_0894312C;
L_08943348:;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = s1 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943364;
L_08943364:;
    v0 = LD32(s2);
    goto L_08943130;
L_0894336C:;
    s1 = s4 + 40;
    ST8(s4+36, 0);
    goto L_0894312C;
}

/* 08943378 */
rv_t func_08943378(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08943378:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089433BC; }
    goto L_0894339C;
L_0894339C:;
    v0 = v1 << 2;
    v1 = D_08ADA030 - (-24528);
    v1 = v1 - 24528;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089433B8u: goto L_089433B8; case 0x089433BCu: goto L_089433BC; case 0x08943484u: goto L_08943484; default: rs_break(0, 0x089433b0); }
L_089433B8:;
    ST8(s0+80, 0);
    goto L_089433BC;
L_089433BC:;
    v0 = s1 < 0x6u;
    goto L_089433C0;
L_089433C0:;
    ST32(s0+28, s1);
    cnd_ = v0 == 0;
    ST32(s0+32, 0);
    if (cnd_) { goto L_089433F0; }
    goto L_089433CC;
L_089433CC:;
    v1 = D_08ADA048 - (-24504);
    v0 = s1 << 2;
    v1 = v1 - 24504;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089433E8u: goto L_089433E8; case 0x089433F0u: goto L_089433F0; case 0x08943404u: goto L_08943404; case 0x08943474u: goto L_08943474; default: rs_break(0, 0x089433e0); }
L_089433E8:;
    v0 = 1;
    ST8(s0+80, v0);
    goto L_089433F0;
L_089433F0:;
    goto L_089433F4;
L_089433F4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08943404:;
    ST32(s0+64, 0);
    a0 = s0 + 0;
    a1 = 1152;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943418;
L_08943418:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08943460; }
    goto L_08943420;
L_08943420:;
    a0 = v0 + 0;
    v0 = D_08AED988 - (-9848);
    f0 = BITSF(LD32(v0-9848));
    s1 = s0 + 40;
    a1 = s1 + 0;
    ST32(v1+112, FBITS(f0));
    { rv_t r_ = func_0894483C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894343C;
L_0894343C:;
    cnd_ = v0 == 0;
    v0 = s0 + 68;
    if (cnd_) { goto L_08943460; }
    goto L_08943444;
L_08943444:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s1+4));
    ST32(s0+68, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_089433F0;
L_08943460:;
    a0 = s0 + 0;
    a1 = 3;
    { rv_t r_ = func_08943378(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894346C;
L_0894346C:;
    goto L_089433F4;
L_08943474:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_089433F0;
L_08943484:;
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089433BC; }
    goto L_08943490;
L_08943490:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08943498;
L_08943498:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089434A0;
L_089434A0:;
    a0 = s0 + 0;
    v0 = func_08943018(a0);
    goto L_089434A8;
L_089434A8:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089434BC;
L_089434BC:;
    v0 = s1 < 0x6u;
    goto L_089433C0;
}

/* 089434C4 */
rv_t func_089434C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089434C4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C263CC - (25548);
    t1 = D_08C263DC - (25564);
    t2 = D_08C263EC - (25580);
    a1 = a1 & a0;
    v1 = t0 + 25548;
    a2 = t1 + 25564;
    cnd_ = a1 == 0;
    a3 = t2 + 25580;
    if (cnd_) { goto L_0894357C; }
    goto L_089434F4;
L_089434F4:;
    v0 = D_08AED98C - (-9844);
    f4 = BITSF(LD32(v0-9844));
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
    ST32(t0+25548, FBITS(f2));
    ST32(t1+25564, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+25580, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894357C;
L_0894357C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08943584 */
rv_t func_08943584(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943584:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089434C4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943598;
L_08943598:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089435A4 */
u64 func_089435A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089435A4:;
    sp = sp - 16;
    a2 = 1101;
    s0 = a0 + 0;
    { u64 r_ = func_08950F08(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089435BC;
L_089435BC:;
    v0 = D_08AF8A00 - (-30208);
    v0 = v0 - 30208;
    ST32(s0, v0);
    ST8(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089435E4 */
rv_t func_089435E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089435E4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08943634; }
    goto L_08943600;
L_08943600:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08943608;
L_08943608:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08943610;
L_08943610:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943624;
L_08943624:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08943600; }
    goto L_08943634;
L_08943634:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08943644 */
rv_t func_08943644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943644:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089436B8; }
    goto L_08943660;
L_08943660:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_089436B8; }
    goto L_08943678;
L_08943678:;
    v0 = v1 << 2;
    v1 = D_08ADA060 - (-24480);
    v1 = v1 - 24480;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08943694u: goto L_08943694; case 0x089436B8u: goto L_089436B8; case 0x089436D8u: goto L_089436D8; case 0x089436E4u: goto L_089436E4; default: rs_break(0, 0x0894368c); }
L_08943694:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894369C;
L_0894369C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089436A4;
L_089436A4:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089436AC;
L_089436AC:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_089436C8; }
    goto L_089436B8;
L_089436B8:;
    goto L_089436BC;
L_089436BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089436C8:;
    { rv_t r_ = func_089437D8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089436D0;
L_089436D0:;
    goto L_089436BC;
L_089436D8:;
    a0 = s0 + 0;
    goto L_089436DC;
L_089436DC:;
    a1 = 1;
    goto L_089436C8;
L_089436E4:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089436EC;
L_089436EC:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089436F4;
L_089436F4:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089436FC;
L_089436FC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08943734; }
    goto L_08943704;
L_08943704:;
    v0 = LD32(s0+16);
    goto L_08943708;
L_08943708:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_089436DC; }
    goto L_08943710;
L_08943710:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089436DC; }
    goto L_08943720;
L_08943720:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089436BC; }
    goto L_0894372C;
L_0894372C:;
    a0 = s0 + 0;
    goto L_089436DC;
L_08943734:;
    a1 = 1;
    { rv_t r_ = func_089437D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894373C;
L_0894373C:;
    v0 = LD32(s0+16);
    goto L_08943708;
}

/* 08943744 */
rv_t func_08943744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943744:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08943770; }
    goto L_08943760;
L_08943760:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08943770:;
    v0 = func_08950F38(a0);
    goto L_08943778;
L_08943778:;
    a1 = LD32(s0+28);
    v1 = D_08B1B5A0 - (-19040);
    v1 = v1 - 19040;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AED990 - (-9840);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9840));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089437B4;
L_089437B4:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089437BC;
L_089437BC:;
    v0 = v0 + 64;
    v1 = D_08AED994 - (-9836);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9836));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08943760;
}

/* 089437D8 */
rv_t func_089437D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089437D8:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08943834; }
    goto L_089437FC;
L_089437FC:;
    v0 = v1 << 2;
    v1 = D_08ADA09C - (-24420);
    v1 = v1 - 24420;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08943818u: goto L_08943818; case 0x08943834u: goto L_08943834; case 0x08943924u: goto L_08943924; default: rs_break(0, 0x08943810); }
L_08943818:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1151;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894382C;
L_0894382C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_089438E8; }
    goto L_08943834;
L_08943834:;
    v0 = s1 < 0x5u;
    goto L_08943838;
L_08943838:;
    ST32(s0+28, s1);
    cnd_ = v0 == 0;
    ST32(s0+32, 0);
    if (cnd_) { goto L_08943878; }
    goto L_08943844;
L_08943844:;
    v1 = D_08ADA0B0 - (-24400);
    v0 = s1 << 2;
    v1 = v1 - 24400;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08943860u: goto L_08943860; case 0x08943878u: goto L_08943878; case 0x089438ACu: goto L_089438AC; case 0x089438D8u: goto L_089438D8; default: rs_break(0, 0x08943858); }
L_08943860:;
    a0 = s0 + 0;
    a1 = 1151;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943870;
L_08943870:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0894388C; }
    goto L_08943878;
L_08943878:;
    goto L_0894387C;
L_0894387C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894388C:;
    a0 = s0 + 0;
    a1 = 3;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_0894389C;
L_0894389C:;
    { rv_t r_ = func_089437D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089438A4;
L_089438A4:;
    goto L_0894387C;
L_089438AC:;
    a0 = s0 + 0;
    a1 = 1150;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089438BC;
L_089438BC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089438CC; }
    goto L_089438C4;
L_089438C4:;
    ST8(s0+36, v0);
    goto L_08943878;
L_089438CC:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_0894389C;
L_089438D8:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_08943878;
L_089438E8:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089438F4;
L_089438F4:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089438FC;
L_089438FC:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08943904;
L_08943904:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_08943910;
L_08943910:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894391C;
L_0894391C:;
    v0 = s1 < 0x5u;
    goto L_08943838;
L_08943924:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1150;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08943938;
L_08943938:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08943834; }
    goto L_08943940;
L_08943940:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894394C;
L_0894394C:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943954;
L_08943954:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894395C;
L_0894395C:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 4;
    goto L_08943910;
}

/* 0894396C */
rv_t func_0894396C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894396C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2647C - (25724);
    t1 = D_08C2648C - (25740);
    t2 = D_08C2649C - (25756);
    a1 = a1 & a0;
    v1 = t0 + 25724;
    a2 = t1 + 25740;
    cnd_ = a1 == 0;
    a3 = t2 + 25756;
    if (cnd_) { goto L_08943A24; }
    goto L_0894399C;
L_0894399C:;
    v0 = D_08AED998 - (-9832);
    f4 = BITSF(LD32(v0-9832));
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
    ST32(t0+25724, FBITS(f2));
    ST32(t1+25740, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+25756, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08943A24;
L_08943A24:;
    return (rv_t){ v0, v1, f0 };
}

/* 08943A2C */
rv_t func_08943A2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943A2C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894396C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943A40;
L_08943A40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08943A4C */
rv_t func_08943A4C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943A4C:;
    sp = sp - 16;
    a2 = 1151;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08943A64;
L_08943A64:;
    a0 = D_08B45A9C - (23196);
    v1 = a0 + 23196;
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    v0 = s0 + 32;
    ST32(v0+4, FBITS(f0));
    a1 = s0 + 52;
    ST32(v0+8, FBITS(f1));
    v0 = D_08AF8A70 - (-30096);
    v0 = v0 - 30096;
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    ST32(s0+32, FBITS(f2));
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0, v0);
    ST32(s0+52, FBITS(f2));
    ST8(s0+65, 0);
    ST32(s0+28, 0);
    ST8(s0+64, 0);
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08943AD4 */
rv_t func_08943AD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08943AD4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08943B1C; }
    goto L_08943AF0;
L_08943AF0:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08943AF8;
L_08943AF8:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943B0C;
L_08943B0C:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08943AF0; }
    goto L_08943B1C;
L_08943B1C:;
    a0 = s0 + 0;
    v0 = func_08943E84(a0);
    goto L_08943B24;
L_08943B24:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943B34;
L_08943B34:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08943B44 */
rv_t func_08943B44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08943B44:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08943B78; }
    goto L_08943B64;
L_08943B64:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08943B78:;
    v0 = func_08943E84(a0);
    goto L_08943B80;
L_08943B80:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = s0 + 52;
    v0 = LD32(v1+84);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943B98;
L_08943B98:;
    ST8(s0+65, v0);
    goto L_08943B64;
}

/* 08943BA0 */
rv_t func_08943BA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08943BA0:;
    sp = sp - 64;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08943C0C; }
    goto L_08943BC4;
L_08943BC4:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08943C10; }
    goto L_08943BD0;
L_08943BD0:;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08943C10; }
    goto L_08943BE0;
L_08943BE0:;
    v0 = v1 << 2;
    v1 = D_08ADA0C4 - (-24380);
    v1 = v1 - 24380;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08943BFCu: goto L_08943BFC; case 0x08943C0Cu: goto L_08943C0C; case 0x08943C20u: goto L_08943C20; case 0x08943C54u: goto L_08943C54; case 0x08943C70u: goto L_08943C70; default: rs_break(0, 0x08943bf4); }
L_08943BFC:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_08943C04;
L_08943C04:;
    { rv_t r_ = func_0894434C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943C0C;
L_08943C0C:;
    goto L_08943C10;
L_08943C10:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08943C20:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08943C4C; }
    goto L_08943C2C;
L_08943C2C:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08943C04; }
    goto L_08943C3C;
L_08943C3C:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08943C10; }
    goto L_08943C48;
L_08943C48:;
    a0 = s0 + 0;
    goto L_08943C4C;
L_08943C4C:;
    a1 = 2;
    goto L_08943C04;
L_08943C54:;
    f0 = BITSF(LD32(s0+44));
    f1 = BITSF(0);
    f0 = f0 - f12;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0+44, FBITS(f0));
    if (cnd_) { goto L_08943DDC; }
    goto L_08943C70;
L_08943C70:;
    v0 = LD_U8(s0+65);
    goto L_08943C74;
L_08943C74:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08943C10; }
    goto L_08943C7C;
L_08943C7C:;
    f0 = BITSF(LD32(s0+48));
    f3 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    ST32(s0+48, FBITS(f0));
    if (cnd_) { goto L_08943C10; }
    goto L_08943C98;
L_08943C98:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a1 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + v1;
    a0 = a0 + a1;
    v1 = a0 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    v1 = D_08AED9A0 - (-9824);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f4 = BITSF(LD32(v1-9824));
    v0 = D_08AED99C - (-9828);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    f0 = BITSF(LD32(v0-9828));
    ST32(s0+56, FBITS(f3));
    f2 = f2 * f4;
    f1 = f1 + f1;
    a2 = s0 + 52;
    v1 = LD32(a2+4);
    f2 = f2 + f2;
    f1 = f1 + f0;
    {u32 a_=sp+(16);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = a1 + a0;
    f2 = f2 + f0;
    ST32(s0+60, FBITS(f1));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = LD32(a2+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(t0+4, a1);
    fcc = FCMP(f0, f3, 2);
    ST32(s0+52, FBITS(f2));
    cnd_ = fcc;
    ST32(a3+23232, a0);
    if (cnd_) { goto L_08943D90; }
    goto L_08943D58;
L_08943D58:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(a2+8, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(s0+52, v1);
    ST32(a2+4, v0);
    goto L_08943D90;
L_08943D90:;
    v0 = LD32(a3+23232);
    a0 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    v1 = D_08AED9A4 - (-9820);
    a0 = a0 + v0;
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v1-9820));
    ST32(t0+4, a0);
    f0 = f0 * f4;
    ST32(a3+23232, v0);
    f0 = f0 * f1;
    f0 = f0 + f1;
    ST32(s0+48, FBITS(f0));
    goto L_08943C0C;
L_08943DDC:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0894434C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943DE8;
L_08943DE8:;
    v0 = LD_U8(s0+65);
    goto L_08943C74;
}

/* 08943DF0 */
rv_t func_08943DF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943DF0:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08943E1C; }
    goto L_08943E0C;
L_08943E0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08943E1C:;
    v0 = func_08943E84(a0);
    goto L_08943E24;
L_08943E24:;
    a1 = LD32(s0+28);
    v1 = D_08B1B5B0 - (-19024);
    v1 = v1 - 19024;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AED9A8 - (-9816);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9816));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08943E60;
L_08943E60:;
    a0 = s0 + 0;
    v0 = func_08943E84(a0);
    goto L_08943E68;
L_08943E68:;
    v0 = v0 + 64;
    v1 = D_08AED9AC - (-9812);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9812));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08943E0C;
}

/* 08943E84 */
u32 func_08943E84(u32 a0)
{
    u32 v0 = 0;
L_08943E84:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08943E8C */
void func_08943E8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943E8C:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a2 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a2;
    v1 = (u32)((s32)v0 >> 16);
    a1 = v0 << 16;
    a2 = a2 + v0;
    a1 = a1 + v1;
    a1 = a1 + a2;
    v1 = a1 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    v1 = D_08AED9B4 - (-9804);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f3 = BITSF(LD32(v1-9804));
    v0 = D_08AED9B0 - (-9808);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0-9808));
    ST32(a0+36, 0);
    f2 = f2 * f3;
    f1 = f1 + f1;
    t1 = a0 + 32;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    f2 = f2 + f2;
    f1 = f1 + f0;
    f3 = BITSF(LD32(a0+36));
    a2 = a2 + a1;
    f2 = f2 + f0;
    ST32(a0+40, FBITS(f1));
    sp = sp - 16;
    v0 = FBITS(f2);
    v1 = LD32(t1+8);
    {vr8=BITSF(v0);}
    v0 = LD32(t1+4);
    {vr9=BITSF(v0);}
    {vr10=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(t0+4, a2);
    fcc = FCMP(f0, f3, 2);
    ST32(a3+23232, a1);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    cnd_ = fcc;
    ST32(a0+32, FBITS(f2));
    if (cnd_) { goto L_08943F8C; }
    goto L_08943F58;
L_08943F58:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(t1+8, FBITS(f3));
    ST32(sp+4, v0);
    ST32(a0+32, v1);
    ST32(sp, v1);
    ST32(sp+8, FBITS(f3));
    ST32(t1+4, v0);
    goto L_08943F8C;
L_08943F8C:;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 08943F94 */
rv_t func_08943F94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08943F94:;
    v0 = D_08B20494 - (1172);
    v1 = D_08C26568 - (25960);
    a1 = v0 + 1172;
    a2 = v1 + 25960;
    f5 = BITSF(LD32(v1+25960));
    v1 = LD_U16(a1+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    sp = sp - 16;
    v1 = v0 << 3;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08943FD0; }
    goto L_08943FC8;
L_08943FC8:;
    v0 = LD32(a1+12);
    v0 = v0 + v1;
    goto L_08943FD0;
L_08943FD0:;
    f3 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+4));
    f0 = f0 - f5;
    f3 = f3 - f4;
    f1 = f1 - f2;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0894402C */
rv_t func_0894402C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894402C:;
    v0 = D_08C26574 - (25972);
    f0 = BITSF(LD32(v0+25972));
    v0 = D_08B20494 - (1172);
    v1 = D_08C2655C - (25948);
    a1 = v0 + 1172;
    a2 = v1 + 25948;
    f5 = BITSF(LD32(v1+25948));
    v1 = LD_U16(a1+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    sp = sp - 16;
    v1 = v0 << 3;
    f6 = f0 * f0;
    a3 = 1;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08944078; }
    goto L_08944070;
L_08944070:;
    v0 = LD32(a1+12);
    v0 = v0 + v1;
    goto L_08944078;
L_08944078:;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+8));
    f2 = f2 - f5;
    f3 = f3 - f0;
    f4 = f4 - f1;
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
    fcc = FCMP(f6, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089440D4; }
    goto L_089440D0;
L_089440D0:;
    a3 = 0 + 0;
    goto L_089440D4;
L_089440D4:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089440E0 */
u32 func_089440E0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_089440E0:;
    sp = sp - 144;
    s1 = a1 & 0xffff;
    a1 = s1 << 1;
    a1 = a1 + s1;
    a1 = a1 << 3;
    v0 = D_08AED9B8 - (-9800);
    v1 = D_08AED9BC - (-9796);
    s6 = a2 + 0;
    s4 = a0 + 32;
    s2 = 0 + 0;
    s0 = a0 + 0;
    ST32(sp+64, 0);
    ST32(sp+68, a1);
    f21 = BITSF(LD32(v0-9800));
    f20 = BITSF(LD32(v1-9796));
    v0 = D_08C2655C - (25948);
    v1 = D_08C26568 - (25960);
    s7 = v0 + 25948;
    s5 = v1 + 25960;
    a0 = s0 + 0;
    goto L_08944160;
L_08944160:;
    a1 = D_08C27F08 - (32520);
    fp = a1 + 32520;
    func_08943E8C(a0);
    goto L_0894416C;
L_0894416C:;
    f1 = BITSF(s2);
    s3 = D_08B20494 - (1172);
    v0 = D_08AED9C0 - (-9792);
    f0 = (float)(s32)FBITS(f1);
    s3 = s3 + 1172;
    f3 = BITSF(LD32(v0-9792));
    v0 = LD_U16(s3+10);
    f0 = f0 * f21;
    a0 = s0 + 0;
    v0 = s1 < v0;
    s2 = s2 + 1;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    f0 = f20 - f0;
    if (cnd_) { goto L_089441B0; }
    goto L_089441A4;
L_089441A4:;
    v0 = LD32(s3+12);
    a1 = LD32(sp+68);
    v1 = v0 + a1;
    goto L_089441B0;
L_089441B0:;
    fcc = FCMP(f0, f3, 14);
    f8 = BITSF(LD32(v1+8));
    f6 = BITSF(LD32(v1));
    f7 = BITSF(LD32(v1+4));
    v0 = D_08C2655C - (25948);
    ST32(v0+25948, FBITS(f6));
    ST32(s7+4, FBITS(f7));
    cnd_ = fcc;
    ST32(s7+8, FBITS(f8));
    if (cnd_) { goto L_089441D8; }
    goto L_089441D4;
L_089441D4:;
    f3 = f0;
    goto L_089441D8;
L_089441D8:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+8));
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    v0 = D_08C26574 - (25972);
    ST32(v0+25972, FBITS(f3));
    f4 = f1 + f1;
    f5 = f2 + f2;
    f3 = f0 + f0;
    v1 = D_08C26568 - (25960);
    f7 = f7 + f4;
    f8 = f8 + f5;
    f6 = f6 + f3;
    ST32(sp+48, FBITS(f0));
    ST32(v1+25960, FBITS(f6));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f8));
    ST32(s5+4, FBITS(f7));
    ST32(s5+8, FBITS(f8));
    v0 = func_08943E84(a0);
    goto L_08944248;
L_08944248:;
    v1 = LD32(v0+56);
    a1 = D_08C27EF8 - (32504);
    a0 = s0 + 0;
    ST32(a1+32504, v1);
    v0 = func_08943E84(a0);
    goto L_0894425C;
L_0894425C:;
    t1 = LD32(v0+56);
    v1 = RS_FADDR(func_08AA0FC8, 0x08AA0FC8u) - (4040);
    v0 = RS_FADDR(func_08943F94, 0x08943F94u) - (16276);
    t2 = v0 + 16276;
    t3 = v1 + 4040;
    v0 = RS_FADDR(func_0894402C, 0x0894402Cu) - (16428);
    v1 = RS_FADDR(func_0895E124, 0x0895E124u) - (-7900);
    v0 = v0 + 16428;
    v1 = v1 - 7900;
    a0 = s3 + 0;
    a1 = fp + 0;
    a2 = sp + 64;
    a3 = 128;
    t0 = s1 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_088043E4(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_089442A0;
L_089442A0:;
    a0 = D_08C27EF8 - (32504);
    v0 = LD32(sp+64);
    v1 = (s32)s2 < 5;
    cnd_ = v0 != 0;
    ST32(a0+32504, 0);
    if (cnd_) { goto L_089442BC; }
    goto L_089442B4;
L_089442B4:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08944160; }
    goto L_089442BC;
L_089442BC:;
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08944310; }
    goto L_089442C4;
L_089442C4:;
    v0 = v0 << 1;
    v0 = v0 + fp;
    a1 = LD_U16(v0-2);
    v1 = LD_U16(s3+10);
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089442F4; }
    goto L_089442E0;
L_089442E0:;
    v1 = LD32(s3+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_089442F4;
L_089442F4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s6+8, FBITS(f0));
    v1 = 1;
    ST32(s6, FBITS(f1));
    ST32(s6+4, FBITS(f2));
    goto L_08944310;
L_08944310:;
    v0 = v1 + 0;
    sp = sp + 144;
    return v0;
}

/* 0894434C */
rv_t func_0894434C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0894434C:;
    sp = sp - 64;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089443EC; }
    goto L_08944370;
L_08944370:;
    v0 = v1 << 2;
    v1 = D_08ADA114 - (-24300);
    v1 = v1 - 24300;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894438Cu: goto L_0894438C; case 0x089443ECu: goto L_089443EC; case 0x08944684u: goto L_08944684; default: rs_break(0, 0x08944384); }
L_0894438C:;
    a0 = s1 + 0;
    v0 = func_08943E84(a0);
    goto L_08944394;
L_08944394:;
    a1 = D_08B45A9C - (23196);
    a1 = a1 + 23196;
    a0 = v0 + 0;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089443A4;
L_089443A4:;
    a1 = LD32(s1+16);
    cnd_ = a1 == 0;
    ST32(sp+16, a1);
    if (cnd_) { goto L_089443EC; }
    goto L_089443B0;
L_089443B0:;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089443B8;
L_089443B8:;
    a0 = LD32(sp+16);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089443C0;
L_089443C0:;
    a0 = s1 + 0;
    v0 = func_08943E84(a0);
    goto L_089443C8;
L_089443C8:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089443DC;
L_089443DC:;
    v0 = LD32(s1+16);
    ST32(sp+16, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089443B0; }
    goto L_089443EC;
L_089443EC:;
    v0 = s0 < 0x5u;
    cnd_ = v0 == 0;
    ST32(s1+28, s0);
    if (cnd_) { goto L_089444AC; }
    goto L_089443F8;
L_089443F8:;
    v1 = D_08ADA128 - (-24280);
    v0 = s0 << 2;
    v1 = v1 - 24280;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08944414u: goto L_08944414; case 0x089444ACu: goto L_089444AC; case 0x089444C8u: goto L_089444C8; case 0x08944674u: goto L_08944674; default: rs_break(0, 0x0894440c); }
L_08944414:;
    a0 = s1 + 0;
    v0 = func_08943E84(a0);
    goto L_0894441C;
L_0894441C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894443C;
L_0894443C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08943E84(a0);
    goto L_08944448;
L_08944448:;
    a1 = LD32(v0+56);
    a0 = s0 + 0;
    v0 = func_0895E284(a0, a1);
    goto L_08944454;
L_08944454:;
    a1 = v0 + 0;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089444C0; }
    goto L_08944464;
L_08944464:;
    a2 = sp + 0;
    v0 = func_089440E0(a0, a1, a2);
    goto L_0894446C;
L_0894446C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089444A0; }
    goto L_08944474;
L_08944474:;
    a1 = 1152;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944480;
L_08944480:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089444A0; }
    goto L_08944488;
L_08944488:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0894483C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944494;
L_08944494:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089444B0; }
    goto L_0894449C;
L_0894449C:;
    a0 = s1 + 0;
    goto L_089444A0;
L_089444A0:;
    a1 = 2;
    goto L_089444A4;
L_089444A4:;
    { rv_t r_ = func_0894434C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089444AC;
L_089444AC:;
    goto L_089444B0;
L_089444B0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089444C0:;
    a1 = 3;
    goto L_089444A4;
L_089444C8:;
    t0 = D_08B25AC0 - (23232);
    v1 = LD32(t0+23232);
    a1 = t0 + 23232;
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    t1 = D_08AED9C4 - (-9788);
    a2 = D_08AED9CC - (-9780);
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AED9C8 - (-9784);
    f3 = BITSF(LD32(t1-9788));
    f2 = BITSF(LD32(a2-9780));
    f0 = BITSF(LD32(v0-9784));
    a0 = a0 + v1;
    f1 = f1 * f2;
    f0 = f0 - f3;
    ST32(a1+4, a0);
    f1 = f1 * f0;
    ST32(t0+23232, v1);
    f1 = f1 + f3;
    ST32(s1+44, FBITS(f1));
    goto L_0894452C;
L_0894452C:;
    v0 = LD32(t0+23232);
    a3 = t0 + 23232;
    a1 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + v1;
    a0 = a0 + a1;
    v1 = a0 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    f4 = BITSF(LD32(a2-9780));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AED9D0 - (-9776);
    ST32(s1+56, 0);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    f0 = BITSF(LD32(v0-9776));
    a2 = s1 + 52;
    f2 = f2 * f4;
    f1 = f1 + f1;
    v1 = LD32(a2+4);
    f3 = BITSF(LD32(s1+56));
    f2 = f2 + f2;
    f1 = f1 + f0;
    {u32 a_=sp+(32);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = a1 + a0;
    f2 = f2 + f0;
    ST32(s1+60, FBITS(f1));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = LD32(a2+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(t0+23232, a0);
    t0 = D_08B25AC0 - (23232);
    fcc = FCMP(f0, f3, 2);
    ST32(a3+4, a1);
    cnd_ = fcc;
    ST32(s1+52, FBITS(f2));
    if (cnd_) { goto L_08944620; }
    goto L_089445EC;
L_089445EC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(a2+8, a0);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(s1+52, v0);
    ST32(a2+4, v1);
    goto L_08944620;
L_08944620:;
    v0 = LD32(t0+23232);
    v1 = LD32(a3+4);
    f2 = BITSF(LD32(t1-9788));
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    v1 = v1 + v0;
    ST32(t0+23232, v0);
    f0 = (float)(s32)FBITS(f1);
    v0 = 1;
    ST32(a3+4, v1);
    f0 = f0 * f4;
    ST8(s1+64, v0);
    f0 = f0 * f2;
    ST8(s1+65, 0);
    f0 = f0 + f2;
    ST32(s1+48, FBITS(f0));
    goto L_089444AC;
L_08944674:;
    t1 = D_08AED9C4 - (-9788);
    t0 = D_08B25AC0 - (23232);
    a2 = D_08AED9CC - (-9780);
    goto L_0894452C;
L_08944684:;
    ST8(s1+64, 0);
    ST8(s1+65, 0);
    goto L_089443EC;
}

/* 08944690 */
rv_t func_08944690(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
L_08944690:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08B45A9C - (23196);
    t3 = D_08C264AC - (25772);
    t4 = D_08C264BC - (25788);
    t6 = D_08C264CC - (25804);
    t7 = D_08C2655C - (25948);
    t2 = D_08C26568 - (25960);
    a1 = a1 & a0;
    t1 = t0 + 23196;
    v1 = t3 + 25772;
    a2 = t4 + 25788;
    a3 = t6 + 25804;
    t8 = t7 + 25948;
    cnd_ = a1 == 0;
    t5 = t2 + 25960;
    if (cnd_) { goto L_08944784; }
    goto L_089446D8;
L_089446D8:;
    v0 = D_08AED9D4 - (-9772);
    f4 = BITSF(LD32(v0-9772));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f8 = BITSF(LD32(t1+8));
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f9 = BITSF(LD32(t1+4));
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
    f7 = BITSF(LD32(t0+23196));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(t3+25772, FBITS(f2));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(t4+25788, FBITS(f6));
    ST32(t2+25960, FBITS(f7));
    ST32(t5+8, FBITS(f8));
    ST32(v1+4, FBITS(f5));
    ST32(v1+8, FBITS(f6));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(t6+25804, FBITS(f1));
    ST32(a2+12, FBITS(f1));
    ST32(t7+25948, FBITS(f7));
    ST32(t8+8, FBITS(f8));
    ST32(t5+4, FBITS(f9));
    ST32(a2+8, FBITS(f3));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(t8+4, FBITS(f9));
    goto L_08944784;
L_08944784:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894478C */
rv_t func_0894478C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894478C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08944690(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089447A0;
L_089447A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089447AC */
float func_089447AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089447AC:;
    sp = sp - 16;
    a2 = 1152;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089447C4;
L_089447C4:;
    v0 = D_08AF8AA8 - (-30040);
    v0 = v0 - 30040;
    ST32(s0, v0);
    a0 = s0 + 36;
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    func_0895F0BC(a0);
    goto L_089447E0;
L_089447E0:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0+23196));
    v0 = s0 + 96;
    ST32(v0+8, FBITS(f0));
    a0 = s0 + 0;
    ST32(v0+4, FBITS(f1));
    v0 = D_08AED9DC - (-9764);
    f0 = BITSF(LD32(v0-9764));
    ST32(s0+96, FBITS(f2));
    ST32(s0+112, FBITS(f0));
    ST32(s0+80, 0);
    ST8(s0+108, 0);
    ST8(s0+109, 0);
    ST32(s0+116, 0);
    f0 = func_08945930(a0);
    goto L_08944828;
L_08944828:;
    ST32(s0+120, FBITS(f0));
    sp = sp + 16;
    return f0;
}

/* 0894483C */
rv_t func_0894483C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0894483C:;
    sp = sp - 96;
    s4 = 0xffff;
    s3 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 & ~(0x3u << 3)) | ((0 & 0x3) << 3);
    ST32(a0+8, v0);
    v0 = func_089452EC(a0);
    goto L_08944874;
L_08944874:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944894;
L_08944894:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s3+4));
    f2 = BITSF(LD32(s3+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    a0 = s1 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_089452EC(a0);
    goto L_089448CC;
L_089448CC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089448EC;
L_089448EC:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089452EC(a0);
    goto L_089448F8;
L_089448F8:;
    a2 = LD32(v0+56);
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08944908;
L_08944908:;
    cnd_ = v0 == s4;
    s2 = v0 + 0;
    if (cnd_) { goto L_08944ACC; }
    goto L_08944910;
L_08944910:;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a0 = s1 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    v0 = func_089452EC(a0);
    goto L_0894493C;
L_0894493C:;
    a0 = s3 + 0;
    a2 = LD32(v0+56);
    a1 = sp + 16;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894494C;
L_0894494C:;
    cnd_ = v0 == s4;
    s0 = v0 + 0;
    if (cnd_) { goto L_08944ACC; }
    goto L_08944954;
L_08944954:;
    ST32(s1+80, 0);
    s3 = s1 + 36;
    a0 = s3 + 0;
    func_0895FB6C(a0);
    goto L_08944964;
L_08944964:;
    a0 = s1 + 0;
    v0 = func_089452EC(a0);
    goto L_0894496C;
L_0894496C:;
    a3 = D_08B20494 - (1172);
    a2 = a3 + 1172;
    v1 = LD_U16(a2+10);
    a0 = LD32(v0+56);
    a1 = 0 + 0;
    v1 = s2 < v1;
    cnd_ = v1 == 0;
    ST32(sp+32, a0);
    if (cnd_) { goto L_089449A0; }
    goto L_0894498C;
L_0894498C:;
    v1 = LD32(a2+12);
    v0 = s2 << 1;
    v0 = v0 + s2;
    v0 = v0 << 3;
    a1 = v1 + v0;
    goto L_089449A0;
L_089449A0:;
    a0 = a3 + 1172;
    v0 = LD_U16(a0+10);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089449C8; }
    goto L_089449B4;
L_089449B4:;
    v1 = LD32(a0+12);
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 3;
    a2 = v1 + v0;
    goto L_089449C8;
L_089449C8:;
    a0 = s3 + 0;
    a3 = sp + 32;
    t0 = 0 + 0;
    t1 = 999;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_089449DC;
L_089449DC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08944AD0; }
    goto L_089449E4;
L_089449E4:;
    a0 = s1 + 0;
    v0 = func_089452EC(a0);
    goto L_089449EC;
L_089449EC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 48;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944A0C;
L_08944A0C:;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+48));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(s1+116, v0);
    ST32(sp+24, FBITS(f2));
    f0 = func_08945930(a0);
    goto L_08944A70;
L_08944A70:;
    a0 = s1 + 0;
    f2 = BITSF(LD32(s1+116));
    f1 = BITSF(LD32(s1+112));
    ST32(s1+120, FBITS(f0));
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    a1 = 4;
    if (cnd_) { goto L_08944AA0; }
    goto L_08944A90;
L_08944A90:;
    a0 = s1 + 0;
    v0 = func_08945410(a0);
    goto L_08944A98;
L_08944A98:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08944AA0;
L_08944AA0:;
    { rv_t r_ = func_089452F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944AA8;
L_08944AA8:;
    v0 = 1;
    goto L_08944AAC;
L_08944AAC:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08944ACC:;
    v0 = LD32(s1+8);
    goto L_08944AD0;
L_08944AD0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    { rv_t r_ = func_089452F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944AE4;
L_08944AE4:;
    v0 = 0 + 0;
    goto L_08944AAC;
}

/* 08944AEC */
u64 func_08944AEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_08944AEC:;
    sp = sp - 96;
    s1 = a0 + 0;
    s3 = s1 + 36;
    s0 = a1 + 0;
    v0 = func_089452EC(a0);
    goto L_08944B14;
L_08944B14:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944B34;
L_08944B34:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    a1 = LD32(s1+80);
    a0 = s3 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_08944B70;
L_08944B70:;
    a0 = s1 + 0;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    s2 = v0 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    v0 = func_089452EC(a0);
    goto L_08944BA0;
L_08944BA0:;
    a0 = s0 + 0;
    a2 = LD32(v0+56);
    a1 = sp + 16;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08944BB0;
L_08944BB0:;
    s0 = v0 + 0;
    v0 = 0xffff;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08944D14; }
    goto L_08944BC0;
L_08944BC0:;
    ST32(s1+80, 0);
    a0 = s3 + 0;
    func_0895FB6C(a0);
    goto L_08944BCC;
L_08944BCC:;
    a0 = s1 + 0;
    v0 = func_089452EC(a0);
    goto L_08944BD4;
L_08944BD4:;
    a3 = D_08B20494 - (1172);
    a2 = a3 + 1172;
    v1 = LD_U16(a2+10);
    a0 = LD32(v0+56);
    a1 = 0 + 0;
    v1 = s2 < v1;
    cnd_ = v1 == 0;
    ST32(sp+32, a0);
    if (cnd_) { goto L_08944C08; }
    goto L_08944BF4;
L_08944BF4:;
    v1 = LD32(a2+12);
    v0 = s2 << 1;
    v0 = v0 + s2;
    v0 = v0 << 3;
    a1 = v1 + v0;
    goto L_08944C08;
L_08944C08:;
    a0 = a3 + 1172;
    v0 = LD_U16(a0+10);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08944C30; }
    goto L_08944C1C;
L_08944C1C:;
    v1 = LD32(a0+12);
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 3;
    a2 = v1 + v0;
    goto L_08944C30;
L_08944C30:;
    a0 = s3 + 0;
    a3 = sp + 32;
    t0 = 0 + 0;
    t1 = 999;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_08944C44;
L_08944C44:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08944D2C; }
    goto L_08944C4C;
L_08944C4C:;
    a0 = s1 + 0;
    v0 = func_089452EC(a0);
    goto L_08944C54;
L_08944C54:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 48;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944C74;
L_08944C74:;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+48));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(s1+116, v0);
    ST32(sp+24, FBITS(f2));
    f0 = func_08945930(a0);
    goto L_08944CD8;
L_08944CD8:;
    a0 = s1 + 0;
    f2 = BITSF(LD32(s1+116));
    f1 = BITSF(LD32(s1+112));
    ST32(s1+120, FBITS(f0));
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    a1 = 4;
    if (cnd_) { goto L_08944D08; }
    goto L_08944CF8;
L_08944CF8:;
    a0 = s1 + 0;
    v0 = func_08945410(a0);
    goto L_08944D00;
L_08944D00:;
    a0 = s1 + 0;
    a1 = 2;
    goto L_08944D08;
L_08944D08:;
    { rv_t r_ = func_089452F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944D10;
L_08944D10:;
    goto L_08944D14;
L_08944D14:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_08944D2C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_08944D08;
}

/* 08944D40 */
rv_t func_08944D40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08944D40:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08944D6C; }
    goto L_08944D5C;
L_08944D5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08944D6C:;
    v0 = func_089452EC(a0);
    goto L_08944D74;
L_08944D74:;
    a1 = LD32(s0+28);
    v1 = D_08B1B5C0 - (-19008);
    v1 = v1 - 19008;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AED9E0 - (-9760);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9760));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944DB0;
L_08944DB0:;
    a0 = s0 + 0;
    v0 = func_089452EC(a0);
    goto L_08944DB8;
L_08944DB8:;
    v0 = v0 + 64;
    v1 = D_08AED9E4 - (-9756);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9756));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08944D5C;
}

/* 08944DD4 */
rv_t func_08944DD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08944DD4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    func_0895FB6C(a0);
    goto L_08944DEC;
L_08944DEC:;
    a0 = s0 + 0;
    v0 = func_089452EC(a0);
    goto L_08944DF4;
L_08944DF4:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944E04;
L_08944E04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08944E14 */
rv_t func_08944E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08944E14:;
    sp = sp - 64;
    s0 = a0 + 0;
    v0 = LD_U8(a0+108);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08944E40; }
    goto L_08944E34;
L_08944E34:;
    v0 = LD_U8(a0+109);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08944F64; }
    goto L_08944E40;
L_08944E40:;
    v0 = LD32(s0+28);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08944E68; }
    goto L_08944E54;
L_08944E54:;
    goto L_08944E58;
L_08944E58:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08944E68:;
    v0 = func_089452EC(a0);
    goto L_08944E70;
L_08944E70:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944E90;
L_08944E90:;
    v1 = s0 + 48;
    f4 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(s0+48));
    f3 = f3 - f5;
    f2 = f2 - f0;
    f1 = f1 - f4;
    f0 = BITSF(0);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+4, FBITS(f2));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    fcc = FCMP(f0, f20, 12);
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { goto L_08944E58; }
    goto L_08944F04;
L_08944F04:;
    f2 = BITSF(LD32(s0+116));
    f3 = BITSF(LD32(s0+120));
    f1 = f0 - f2;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = D_08AED9E8 - (-9752);
    f1 = BITSF(LD32(v0-9752));
    f0 = f0 / f20;
    v0 = D_08AED9EC - (-9748);
    f0 = f0 - f3;
    f0 = f0 * f20;
    f0 = f0 * f1;
    f3 = f3 + f0;
    f0 = BITSF(LD32(v0-9748));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    ST32(s0+120, FBITS(f3));
    if (cnd_) { goto L_08944F5C; }
    goto L_08944F50;
L_08944F50:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x18;
    ST32(s0+8, v0);
    goto L_08944F5C;
L_08944F5C:;
    ST32(s0+116, FBITS(f4));
    goto L_08944E54;
L_08944F64:;
    v0 = func_089452EC(a0);
    goto L_08944F6C;
L_08944F6C:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = s0 + 96;
    v0 = LD32(v1+84);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08944F84;
L_08944F84:;
    ST8(s0+109, v0);
    goto L_08944E40;
}

/* 08944F8C */
rv_t func_08944F8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08944F8C:;
    sp = sp - 80;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08944FD0; }
    goto L_08944FC4;
L_08944FC4:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+32)); goto L_08944FFC; }
    goto L_08944FD0;
L_08944FD0:;
    goto L_08944FD4;
L_08944FD4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08944FFC:;
    f0 = f0 + f12;
    ST32(a0+32, FBITS(f0));
    v0 = func_089452EC(a0);
    goto L_08945008;
L_08945008:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945028;
L_08945028:;
    v1 = LD32(s1+28);
    s2 = v0 + 0;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08944FD4; }
    goto L_0894503C;
L_0894503C:;
    v0 = v1 << 2;
    v1 = D_08ADA198 - (-24168);
    v1 = v1 - 24168;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08944FD0u: goto L_08944FD0; case 0x08945058u: goto L_08945058; case 0x089450ECu: goto L_089450EC; case 0x089451A8u: goto L_089451A8; default: rs_break(0, 0x08945050); }
L_08945058:;
    v0 = s1 + 84;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s2+4));
    f5 = BITSF(LD32(s2+8));
    f4 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s1+84));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    v1 = LD_U8(s1+109);
    v0 = s1 + 96;
    ST32(v0+4, FBITS(f1));
    a0 = s1 + 0;
    a1 = 2;
    ST32(v0+8, FBITS(f2));
    ST32(s1+96, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    cnd_ = v1 != 0;
    ST32(s1+100, 0);
    if (cnd_) { goto L_089450DC; }
    goto L_089450B0;
L_089450B0:;
    v0 = D_08AED9F0 - (-9744);
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-9744));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08944FD4; }
    goto L_089450CC;
L_089450CC:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x18;
    ST32(s1+8, v0);
    goto L_08944FD4;
L_089450DC:;
    { rv_t r_ = func_089452F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089450E4;
L_089450E4:;
    goto L_08944FD4;
L_089450EC:;
    a0 = s1 + 0;
    v0 = func_08945410(a0);
    goto L_089450F4;
L_089450F4:;
    f2 = BITSF(LD32(s2));
    f3 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s1+84));
    f1 = BITSF(LD32(s1+92));
    a0 = s1 + 0;
    f0 = f0 - f2;
    f1 = f1 - f3;
    s4 = v0 + 0;
    ST32(sp+4, 0);
    s3 = s1 + 48;
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f0));
    v0 = func_089452EC(a0);
    goto L_08945128;
L_08945128:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    f0 = func_08945930(a0);
    goto L_08945134;
L_08945134:;
    f12 = f0;
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0895A8A0(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08945144;
L_08945144:;
    f12 = BITSF(LD32(s1+112));
    v0 = D_08AED9F4 - (-9740);
    f20 = BITSF(LD32(v0-9740));
    f12 = f12 * f12;
    a0 = s2 + 0;
    a1 = s3 + 0;
    f13 = f20;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945164;
L_08945164:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089451A0; }
    goto L_0894516C;
L_0894516C:;
    v0 = D_08AED9F8 - (-9736);
    f12 = BITSF(LD32(v0-9736));
    a0 = s2 + 0;
    a1 = s3 + 0;
    f13 = f20;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945184;
L_08945184:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08945198; }
    goto L_0894518C;
L_0894518C:;
    cnd_ = s4 == 0;
    if (cnd_) {  goto L_08944FD4; }
    goto L_08945194;
L_08945194:;
    a0 = s1 + 0;
    goto L_08945198;
L_08945198:;
    a1 = 3;
    goto L_089450DC;
L_089451A0:;
    a1 = 4;
    goto L_089450DC;
L_089451A8:;
    f12 = BITSF(LD32(s1+112));
    v0 = D_08AED9F4 - (-9740);
    f13 = BITSF(LD32(v0-9740));
    f12 = f12 * f12;
    s0 = s1 + 48;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089451C8;
L_089451C8:;
    cnd_ = v0 == 0;
    if (cnd_) { f5 = BITSF(LD32(s2+4)); goto L_08945200; }
    goto L_089451D0;
L_089451D0:;
    a0 = s1 + 0;
    a1 = 4;
    { rv_t r_ = func_089452F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089451DC;
L_089451DC:;
    v0 = D_08AED9F0 - (-9744);
    goto L_089451E0;
L_089451E0:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-9744));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08944FD4; }
    goto L_089451F8;
L_089451F8:;
    a0 = s1 + 0;
    goto L_089451A0;
L_08945200:;
    f4 = BITSF(LD32(s2+8));
    f3 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+48));
    f1 = f1 - f5;
    f2 = f2 - f4;
    f0 = f0 - f3;
    a0 = s1 + 0;
    ST32(sp+4, FBITS(f1));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    ST32(sp, FBITS(f0));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+8, FBITS(f2));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    ST32(sp+4, 0);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f22 = BITSF(v0);
    v0 = func_089452EC(a0);
    goto L_08945264;
L_08945264:;
    a0 = s1 + 0;
    f21 = BITSF(LD32(v0+76));
    v0 = func_089452EC(a0);
    goto L_08945270;
L_08945270:;
    a0 = s1 + 0;
    f20 = BITSF(LD32(v0+80));
    v0 = func_089452EC(a0);
    goto L_0894527C;
L_0894527C:;
    f0 = BITSF(LD32(v0+76));
    v0 = D_08AED9FC - (-9732);
    f20 = f20 - f0;
    f0 = BITSF(LD32(v0-9732));
    v0 = D_08AED9F8 - (-9736);
    f20 = f20 * f0;
    f0 = BITSF(LD32(v0-9736));
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    f21 = f21 + f20;
    if (cnd_) { goto L_089452CC; }
    goto L_089452A8;
L_089452A8:;
    f1 = sqrtf(f22);
    v0 = D_08AEDA00 - (-9728);
    f2 = BITSF(LD32(v0-9728));
    v0 = D_08AEDA04 - (-9724);
    f0 = f21 - f2;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-9724));
    f1 = f1 * f0;
    f21 = f1 + f2;
    goto L_089452CC;
L_089452CC:;
    a0 = s1 + 0;
    v0 = func_089452EC(a0);
    goto L_089452D4;
L_089452D4:;
    a0 = v0 + 0;
    a1 = sp + 0;
    f12 = f21;
    { u64 r_ = func_0895A8A0(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089452E4;
L_089452E4:;
    v0 = D_08AED9F0 - (-9744);
    goto L_089451E0;
}

/* 089452EC */
u32 func_089452EC(u32 a0)
{
    u32 v0 = 0;
L_089452EC:;
    v0 = LD32(a0+24);
    return v0;
}

/* 089452F4 */
rv_t func_089452F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089452F4:;
    sp = sp - 32;
    v0 = 1;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08945404; }
    goto L_08945318;
L_08945318:;
    v0 = a1 < 0x6u;
    ST32(s2+28, a1);
    cnd_ = v0 == 0;
    ST32(s2+32, 0);
    if (cnd_) { goto L_089453BC; }
    goto L_08945328;
L_08945328:;
    v1 = D_08ADA1B0 - (-24144);
    v0 = a1 << 2;
    v1 = v1 - 24144;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08945344u: goto L_08945344; case 0x089453BCu: goto L_089453BC; case 0x089453D4u: goto L_089453D4; default: rs_break(0, 0x0894533c); }
L_08945344:;
    a0 = s2 + 0;
    v0 = func_089452EC(a0);
    goto L_0894534C;
L_0894534C:;
    a0 = LD32(v0+48);
    s0 = s2 + 84;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s1 = s2 + 96;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945370;
L_08945370:;
    f3 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s2+84));
    f1 = f1 - f3;
    f2 = f2 - f5;
    f0 = f0 - f4;
    v0 = 1;
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(s2+96, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST8(s2+108, v0);
    ST8(s2+109, 0);
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(s2+100, 0);
    goto L_089453BC;
L_089453BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089453D4:;
    a0 = s2 + 36;
    func_0895FB6C(a0);
    goto L_089453DC;
L_089453DC:;
    a0 = s2 + 0;
    v0 = func_089452EC(a0);
    goto L_089453E4;
L_089453E4:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089453F4;
L_089453F4:;
    v0 = LD32(s2+8);
    v0 = v0 | 0x8;
    ST32(s2+8, v0);
    goto L_089453BC;
L_08945404:;
    ST8(a0+108, 0);
    ST8(a0+109, 0);
    goto L_08945318;
}

/* 08945410 */
u32 func_08945410(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08945410:;
    sp = sp - 160;
    s3 = a0 + 36;
    v0 = LD32(s3+24);
    v1 = LD32(a0+80);
    v0 = v0 - 1;
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089454BC; }
    goto L_08945460;
L_08945460:;
    v0 = a0 + 48;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+48));
    v1 = a0 + 84;
    ST32(v1+8, FBITS(f2));
    v0 = 1;
    ST32(a0+84, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    goto L_08945484;
L_08945484:;
    sp = sp + 160;
    return v0;
L_089454BC:;
    s6 = D_08B20494 - (1172);
    v0 = func_089452EC(a0);
    goto L_089454C4;
L_089454C4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089454E4;
L_089454E4:;
    a1 = LD32(s0+80);
    a0 = s3 + 0;
    s7 = v0 + 0;
    v0 = func_08ABD9B0(a0, a1);
    goto L_089454F4;
L_089454F4:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08945520; }
    goto L_0894550C;
L_0894550C:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_08945520;
L_08945520:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    a1 = LD32(s0+80);
    ST32(s1+8, FBITS(f0));
    a0 = s3 + 0;
    a1 = a1 + 1;
    ST32(s1, FBITS(f1));
    s4 = sp + 16;
    ST32(s1+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_0894554C;
L_0894554C:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08945578; }
    goto L_08945564;
L_08945564:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_08945578;
L_08945578:;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AEDA08 - (-9720);
    ST32(s4, FBITS(f0));
    s5 = 0 + 0;
    s1 = s0 + 84;
    ST32(s4+4, FBITS(f1));
    fp = s0 + 48;
    ST32(s4+8, FBITS(f2));
    f20 = BITSF(LD32(v0-9720));
    a0 = sp + 0;
    goto L_089455A8;
L_089455A8:;
    a2 = s7 + 0;
    a3 = s1 + 0;
    a1 = s4 + 0;
    func_08835730(a0, a1, a2, a3);
    goto L_089455B8;
L_089455B8:;
    f1 = BITSF(LD32(s0+84));
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+20));
    a0 = s3 + 0;
    s2 = sp + 0;
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+24));
    f2 = f1 * f1;
    ST32(sp+32, FBITS(f1));
    f3 = f3 - f0;
    f5 = f4 * f4;
    ST32(sp+36, FBITS(f4));
    f0 = f3 * f3;
    f2 = f2 + f5;
    f2 = f2 + f0;
    fcc = FCMP(f2, f20, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_08945928; }
    goto L_08945610;
L_08945610:;
    v1 = LD32(s0+80);
    v1 = v1 + 1;
    ST32(s0+80, v1);
    a1 = v1 + 0;
    v0 = LD32(s3+24);
    v0 = v0 - 1;
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 == 0;
    if (cnd_) { f0 = BITSF(LD32(fp+8)); goto L_0894591C; }
    goto L_08945634;
L_08945634:;
    v0 = func_08ABD9B0(a0, a1);
    goto L_0894563C;
L_0894563C:;
    a1 = s6 + 1172;
    a0 = LD_U16(a1+10);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v0 = v0 < a0;
    v1 = v1 << 3;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08945668; }
    goto L_08945660;
L_08945660:;
    v0 = LD32(a1+12);
    a2 = v0 + v1;
    goto L_08945668;
L_08945668:;
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    a1 = LD32(s0+80);
    ST32(s2+8, FBITS(f0));
    a1 = a1 + 1;
    ST32(s2, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_0894568C;
L_0894568C:;
    a1 = s6 + 1172;
    a0 = LD_U16(a1+10);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v0 = v0 < a0;
    v1 = v1 << 3;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089456B4; }
    goto L_089456AC;
L_089456AC:;
    v0 = LD32(a1+12);
    a0 = v0 + v1;
    goto L_089456B4;
L_089456B4:;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    goto L_089456CC;
L_089456CC:;
    cnd_ = s5 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089455A8; }
    goto L_089456D4;
L_089456D4:;
    v0 = D_08AEDA0C - (-9716);
    f20 = BITSF(LD32(v0-9716));
    s2 = LD32(s0+80);
    f21 = BITSF(0);
    s5 = s0 + 48;
    goto L_089456E8;
L_089456E8:;
    f8 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f8 - f4;
    f3 = f7 - f3;
    f2 = f6 - f2;
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
    fcc = FCMP(f0, f21, 2);
    ST32(sp+36, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_08945784; }
    goto L_08945748;
L_08945748:;
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
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_08945784;
L_08945784:;
    f3 = BITSF(LD32(s0+84));
    f4 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    f0 = f8 - f3;
    f1 = f7 - f4;
    f2 = f6 - f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+48, FBITS(f0));
    f6 = f20;
    ST32(sp+52, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f7 = BITSF(v0);
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    ST32(sp+56, FBITS(f2));
    if (cnd_) { goto L_089457EC; }
    goto L_089457E8;
L_089457E8:;
    f6 = f0;
    goto L_089457EC;
L_089457EC:;
    f2 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f2 = f2 * f6;
    f1 = f1 * f6;
    f0 = f0 * f6;
    f20 = f20 - f7;
    f3 = f3 + f2;
    f4 = f4 + f1;
    f5 = f5 + f0;
    fcc = FCMP(f21, f20, 12);
    ST32(s0+84, FBITS(f3));
    ST32(s1+4, FBITS(f4));
    ST32(s1+8, FBITS(f5));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f0));
    if (cnd_) { goto L_089458F4; }
    goto L_08945834;
L_08945834:;
    v0 = LD32(s3+24);
    s2 = s2 + 1;
    v0 = v0 - 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089458FC; }
    goto L_0894584C;
L_0894584C:;
    a1 = s2 + 0;
    v0 = func_08ABD9B0(a0, a1);
    goto L_08945854;
L_08945854:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    a2 = sp + 0;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08945884; }
    goto L_08945870;
L_08945870:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_08945884;
L_08945884:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(a2+8, FBITS(f0));
    a1 = s2 + 1;
    a0 = s3 + 0;
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_089458A8;
L_089458A8:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089458D4; }
    goto L_089458C0;
L_089458C0:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_089458D4;
L_089458D4:;
    fcc = FCMP(f21, f20, 12);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    cnd_ = fcc;
    ST32(s4+4, FBITS(f2));
    if (cnd_) { goto L_089456E8; }
    goto L_089458F4;
L_089458F4:;
    v0 = 0 + 0;
    goto L_08945484;
L_089458FC:;
    f0 = BITSF(LD32(s5+8));
    f1 = BITSF(LD32(s0+48));
    f2 = BITSF(LD32(s5+4));
    goto L_08945908;
L_08945908:;
    v0 = 1;
    ST32(s0+84, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    ST32(s1+4, FBITS(f2));
    goto L_08945484;
L_0894591C:;
    f1 = BITSF(LD32(s0+48));
    f2 = BITSF(LD32(fp+4));
    goto L_08945908;
L_08945928:;
    s5 = 1;
    goto L_089456CC;
}

/* 08945930 */
float func_08945930(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08945930:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_089452EC(a0);
    goto L_08945948;
L_08945948:;
    a0 = s0 + 0;
    f20 = BITSF(LD32(v0+76));
    v0 = func_089452EC(a0);
    goto L_08945954;
L_08945954:;
    f1 = BITSF(LD32(v0+76));
    f0 = BITSF(LD32(v0+80));
    v0 = D_08AEDA10 - (-9712);
    f0 = f0 - f1;
    f1 = BITSF(LD32(v0-9712));
    f0 = f0 * f1;
    f20 = f20 + f0;
    f0 = f20;
    sp = sp + 32;
    return f0;
}

/* 08945988 */
rv_t func_08945988(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08945988:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26588 - (25992);
    t1 = D_08C26598 - (26008);
    t2 = D_08C265A8 - (26024);
    a1 = a1 & a0;
    v1 = t0 + 25992;
    a2 = t1 + 26008;
    cnd_ = a1 == 0;
    a3 = t2 + 26024;
    if (cnd_) { goto L_08945A40; }
    goto L_089459B8;
L_089459B8:;
    v0 = D_08AEDA14 - (-9708);
    f4 = BITSF(LD32(v0-9708));
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
    ST32(t0+25992, FBITS(f2));
    ST32(t1+26008, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26024, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08945A40;
L_08945A40:;
    return (rv_t){ v0, v1, f0 };
}

/* 08945A48 */
rv_t func_08945A48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945A48:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08945988(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945A5C;
L_08945A5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08945A68 */
u64 func_08945A68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945A68:;
    sp = sp - 16;
    a2 = 1052;
    s0 = a0 + 0;
    func_089422F4(a0, a1, a2);
    goto L_08945A80;
L_08945A80:;
    v0 = D_08AF8AE0 - (-29984);
    v0 = v0 - 29984;
    ST32(s0, v0);
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08945A94;
L_08945A94:;
    v1 = LD32(v0+48);
    v0 = LD32(v1+228);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08945AAC; }
    goto L_08945AA8;
L_08945AA8:;
    v0 = 1;
    goto L_08945AAC;
L_08945AAC:;
    ST32(s0+32, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08945AC0 */
rv_t func_08945AC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945AC0:;
    sp = sp - 16;
    v0 = 3;
    cnd_ = a1 == v0;
    a2 = 1102;
    if (cnd_) { goto L_08945AE0; }
    goto L_08945AD4;
L_08945AD4:;
    { rv_t r_ = func_08942448(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945ADC;
L_08945ADC:;
    a2 = v0 + 0;
    goto L_08945AE0;
L_08945AE0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08945AF0 */
rv_t func_08945AF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08945AF0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26640 - (26176);
    t1 = D_08C26650 - (26192);
    t2 = D_08C26660 - (26208);
    a1 = a1 & a0;
    v1 = t0 + 26176;
    a2 = t1 + 26192;
    cnd_ = a1 == 0;
    a3 = t2 + 26208;
    if (cnd_) { goto L_08945BA8; }
    goto L_08945B20;
L_08945B20:;
    v0 = D_08AEDA18 - (-9704);
    f4 = BITSF(LD32(v0-9704));
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
    ST32(t0+26176, FBITS(f2));
    ST32(t1+26192, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26208, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08945BA8;
L_08945BA8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08945BB0 */
rv_t func_08945BB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945BB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08945AF0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945BC4;
L_08945BC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08945BD0 */
u64 func_08945BD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945BD0:;
    sp = sp - 16;
    a2 = 1053;
    s0 = a0 + 0;
    func_089422F4(a0, a1, a2);
    goto L_08945BE8;
L_08945BE8:;
    v0 = D_08AF8B20 - (-29920);
    v0 = v0 - 29920;
    ST32(s0, v0);
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08945BFC;
L_08945BFC:;
    v1 = LD32(v0+48);
    v0 = LD32(v1+228);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_08945C14; }
    goto L_08945C10;
L_08945C10:;
    v0 = 1;
    goto L_08945C14;
L_08945C14:;
    ST32(s0+32, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08945C28 */
rv_t func_08945C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945C28:;
    sp = sp - 16;
    v0 = 3;
    cnd_ = a1 == v0;
    a2 = 1102;
    if (cnd_) { goto L_08945C48; }
    goto L_08945C3C;
L_08945C3C:;
    { rv_t r_ = func_08942448(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945C44;
L_08945C44:;
    a2 = v0 + 0;
    goto L_08945C48;
L_08945C48:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08945C58 */
rv_t func_08945C58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08945C58:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C266F0 - (26352);
    t1 = D_08C26700 - (26368);
    t2 = D_08C26710 - (26384);
    a1 = a1 & a0;
    v1 = t0 + 26352;
    a2 = t1 + 26368;
    cnd_ = a1 == 0;
    a3 = t2 + 26384;
    if (cnd_) { goto L_08945D10; }
    goto L_08945C88;
L_08945C88:;
    v0 = D_08AEDA1C - (-9700);
    f4 = BITSF(LD32(v0-9700));
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
    ST32(t0+26352, FBITS(f2));
    ST32(t1+26368, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26384, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08945D10;
L_08945D10:;
    return (rv_t){ v0, v1, f0 };
}

/* 08945D18 */
rv_t func_08945D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945D18:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08945C58(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945D2C;
L_08945D2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08945D38 */
u64 func_08945D38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945D38:;
    sp = sp - 16;
    a2 = 1102;
    s0 = a0 + 0;
    { u64 r_ = func_08950F08(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08945D50;
L_08945D50:;
    v0 = D_08AF8B60 - (-29856);
    v0 = v0 - 29856;
    ST32(s0, v0);
    ST8(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08945D78 */
rv_t func_08945D78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08945D78:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08945DC8; }
    goto L_08945D94;
L_08945D94:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08945D9C;
L_08945D9C:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945DA4;
L_08945DA4:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945DB8;
L_08945DB8:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08945D94; }
    goto L_08945DC8;
L_08945DC8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08945DD8 */
rv_t func_08945DD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08945DD8:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08945E6C; }
    goto L_08945DF4;
L_08945DF4:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_08945E6C; }
    goto L_08945E0C;
L_08945E0C:;
    v0 = v1 << 2;
    v1 = D_08ADA1CC - (-24116);
    v1 = v1 - 24116;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08945E28u: goto L_08945E28; case 0x08945E6Cu: goto L_08945E6C; case 0x08945FDCu: goto L_08945FDC; case 0x08945FECu: goto L_08945FEC; default: rs_break(0, 0x08945e20); }
L_08945E28:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == 0;
    v0 = D_08AEDA20 - (-9696);
    if (cnd_) { goto L_08945E4C; }
    goto L_08945E34;
L_08945E34:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9696));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08945E70; }
    goto L_08945E4C;
L_08945E4C:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945E54;
L_08945E54:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08945E5C;
L_08945E5C:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08945E64;
L_08945E64:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08945E7C; }
    goto L_08945E6C;
L_08945E6C:;
    goto L_08945E70;
L_08945E70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08945E7C:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945E84;
L_08945E84:;
    a0 = LD32(v0+48);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    v1 = LD32(a0+204);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08945FBC; }
    goto L_08945E9C;
L_08945E9C:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945EA4;
L_08945EA4:;
    v1 = LD32(v0+48);
    v0 = LD32(v1+228);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08945E70; }
    goto L_08945EB8;
L_08945EB8:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945EC0;
L_08945EC0:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08945EC8;
L_08945EC8:;
    v1 = LD32(v0+24);
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_08945F50; }
    goto L_08945EE0;
L_08945EE0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08945F30; }
    goto L_08945F04;
L_08945F04:;
    a0 = LD32(a1);
    goto L_08945F08;
L_08945F08:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08945F9C; }
    goto L_08945F20;
L_08945F20:;
    a1 = LD32(a1+4);
    goto L_08945F24;
L_08945F24:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08945F08; }
    goto L_08945F2C;
L_08945F2C:;
    a3 = 0 + 0;
    goto L_08945F30;
L_08945F30:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08945F50; }
    goto L_08945F38;
L_08945F38:;
    v1 = LD32(a3+228);
    v0 = (v1 >> 2) & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_08945F50; }
    goto L_08945F48;
L_08945F48:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a3); goto L_08945F78; }
    goto L_08945F50;
L_08945F50:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945F58;
L_08945F58:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08945F60;
L_08945F60:;
    a0 = v0 + 0;
    v0 = D_08AEDA24 - (-9692);
    f12 = BITSF(LD32(v0-9692));
    { rv_t r_ = func_089601D4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945F70;
L_08945F70:;
    goto L_08945E70;
L_08945F78:;
    a0 = s0 + 0;
    a1 = 2;
    v1 = LD32(v0-16);
    v1 = a3 + v1;
    goto L_08945F88;
L_08945F88:;
    a2 = LD32(v1+4);
    goto L_08945F8C;
L_08945F8C:;
    { rv_t r_ = func_0894611C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08945F94;
L_08945F94:;
    goto L_08945E70;
L_08945F9C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08945F24; }
    goto L_08945FA8;
L_08945FA8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08945F20; }
    goto L_08945FB4;
L_08945FB4:;
    goto L_08945F30;
L_08945FBC:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945FC4;
L_08945FC4:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08945FCC;
L_08945FCC:;
    v1 = LD32(v0+24);
    a0 = s0 + 0;
    a1 = 2;
    goto L_08945F88;
L_08945FDC:;
    a0 = s0 + 0;
    goto L_08945FE0;
L_08945FE0:;
    a1 = 1;
    a2 = 999;
    goto L_08945F8C;
L_08945FEC:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08945FF4;
L_08945FF4:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08945FFC;
L_08945FFC:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08946004;
L_08946004:;
    v1 = LD32(s0+16);
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08946034; }
    goto L_08946018;
L_08946018:;
    v1 = LD32(v1+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_08946038; }
    goto L_08946028;
L_08946028:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08946038; }
    goto L_08946034;
L_08946034:;
    a1 = 1;
    goto L_08946038;
L_08946038:;
    cnd_ = a0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894604C; }
    goto L_08946040;
L_08946040:;
    cnd_ = a1 == 0;
    v0 = D_08AEDA28 - (-9688);
    if (cnd_) { goto L_0894605C; }
    goto L_08946048;
L_08946048:;
    a0 = s0 + 0;
    goto L_0894604C;
L_0894604C:;
    a1 = 1;
    a2 = 999;
    { rv_t r_ = func_0894611C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946058;
L_08946058:;
    v0 = D_08AEDA28 - (-9688);
    goto L_0894605C;
L_0894605C:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9688));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08945E70; }
    goto L_08946074;
L_08946074:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894607C;
L_0894607C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08946084;
L_08946084:;
    a0 = v0 + 0;
    v0 = D_08AEDA2C - (-9684);
    f12 = BITSF(LD32(v0-9684));
    { rv_t r_ = func_089601D4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946094;
L_08946094:;
    a0 = s0 + 0;
    goto L_08945FE0;
}

/* 0894609C */
rv_t func_0894609C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894609C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08950F38(a0);
    goto L_089460B0;
L_089460B0:;
    v1 = D_08B1B5D4 - (-18988);
    a1 = LD32(s0+28);
    v1 = v1 - 18988;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDA30 - (-9680);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9680));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089460EC;
L_089460EC:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089460F4;
L_089460F4:;
    v0 = v0 + 64;
    v1 = D_08AEDA34 - (-9676);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9676));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894611C */
rv_t func_0894611C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894611C:;
    sp = sp - 32;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08946180; }
    goto L_08946148;
L_08946148:;
    v0 = v1 << 2;
    v1 = D_08ADA20C - (-24052);
    v1 = v1 - 24052;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08946164u: goto L_08946164; case 0x08946180u: goto L_08946180; case 0x0894627Cu: goto L_0894627C; default: rs_break(0, 0x0894615c); }
L_08946164:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1157;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08946178;
L_08946178:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08946240; }
    goto L_08946180;
L_08946180:;
    v0 = s1 < 0x5u;
    goto L_08946184;
L_08946184:;
    ST32(s0+28, s1);
    cnd_ = v0 == 0;
    ST32(s0+32, 0);
    if (cnd_) { goto L_089461C4; }
    goto L_08946190;
L_08946190:;
    v1 = D_08ADA220 - (-24032);
    v0 = s1 << 2;
    v1 = v1 - 24032;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089461ACu: goto L_089461AC; case 0x089461C4u: goto L_089461C4; case 0x089461FCu: goto L_089461FC; case 0x08946230u: goto L_08946230; default: rs_break(0, 0x089461a4); }
L_089461AC:;
    a0 = s0 + 0;
    a1 = 1157;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089461BC;
L_089461BC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089461DC; }
    goto L_089461C4;
L_089461C4:;
    goto L_089461C8;
L_089461C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089461DC:;
    a0 = s0 + 0;
    a1 = 3;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_089461EC;
L_089461EC:;
    a2 = 999;
    { rv_t r_ = func_0894611C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089461F4;
L_089461F4:;
    goto L_089461C8;
L_089461FC:;
    a0 = s0 + 0;
    a1 = 1156;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894620C;
L_0894620C:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089461EC; }
    goto L_08946218;
L_08946218:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_0894854C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08946224;
L_08946224:;
    v0 = 1;
    ST8(s0+36, v0);
    goto L_089461C4;
L_08946230:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_089461C4;
L_08946240:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894624C;
L_0894624C:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946254;
L_08946254:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894625C;
L_0894625C:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_08946268;
L_08946268:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946274;
L_08946274:;
    v0 = s1 < 0x5u;
    goto L_08946184;
L_0894627C:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1156;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08946290;
L_08946290:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08946180; }
    goto L_08946298;
L_08946298:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089462A4;
L_089462A4:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089462AC;
L_089462AC:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089462B4;
L_089462B4:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 4;
    goto L_08946268;
}

/* 089462C4 */
rv_t func_089462C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089462C4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C267A0 - (26528);
    t1 = D_08C267B0 - (26544);
    t2 = D_08C267C0 - (26560);
    a1 = a1 & a0;
    v1 = t0 + 26528;
    a2 = t1 + 26544;
    cnd_ = a1 == 0;
    a3 = t2 + 26560;
    if (cnd_) { goto L_0894637C; }
    goto L_089462F4;
L_089462F4:;
    v0 = D_08AEDA38 - (-9672);
    f4 = BITSF(LD32(v0-9672));
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
    ST32(t0+26528, FBITS(f2));
    ST32(t1+26544, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26560, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894637C;
L_0894637C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08946384 */
rv_t func_08946384(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08946384:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089462C4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946398;
L_08946398:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089463A4 */
u64 func_089463A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089463A4:;
    sp = sp - 16;
    a2 = 1054;
    s0 = a0 + 0;
    { u64 r_ = func_08950BAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089463BC;
L_089463BC:;
    v0 = D_08AF8B98 - (-29800);
    v1 = 2;
    v0 = v0 - 29800;
    ST32(s0+32, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089463E0 */
rv_t func_089463E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089463E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08950D44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089463F4;
L_089463F4:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08946448; }
    goto L_08946400;
L_08946400:;
    v0 = LD32(v0+8);
    a1 = 3;
    v1 = (v0 >> 3) & 0x1;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08946488; }
    goto L_08946418;
L_08946418:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0894644C; }
    goto L_08946420;
L_08946420:;
    v1 = LD32(s0+28);
    v0 = 2;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08946458; }
    goto L_08946430;
L_08946430:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 3;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946448;
L_08946448:;
    goto L_0894644C;
L_0894644C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08946458:;
    v0 = LD32(s0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946468;
L_08946468:;
    a0 = s0 + 0;
    v0 = func_089464A0(a0);
    goto L_08946470;
L_08946470:;
    a0 = v0 + 0;
    a1 = 1;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894647C;
L_0894647C:;
    v0 = 1;
    ST8(s0+36, v0);
    goto L_08946448;
L_08946488:;
    v0 = LD32(s0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946498;
L_08946498:;
    goto L_0894644C;
}

/* 089464A0 */
u32 func_089464A0(u32 a0)
{
    u32 v0 = 0;
L_089464A0:;
    v0 = LD32(a0+24);
    return v0;
}

/* 089464A8 */
rv_t func_089464A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089464A8:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0xcu;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08946504; }
    goto L_089464CC;
L_089464CC:;
    v0 = v1 << 2;
    v1 = D_08ADA234 - (-24012);
    v1 = v1 - 24012;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089464E8u: goto L_089464E8; case 0x08946504u: goto L_08946504; case 0x089465CCu: goto L_089465CC; default: rs_break(0, 0x089464e0); }
L_089464E8:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1155;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089464FC;
L_089464FC:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08946590; }
    goto L_08946504;
L_08946504:;
    v0 = s1 < 0xcu;
    goto L_08946508;
L_08946508:;
    cnd_ = v0 == 0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_08946580; }
    goto L_08946510;
L_08946510:;
    v1 = D_08ADA264 - (-23964);
    v0 = s1 << 2;
    v1 = v1 - 23964;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894652Cu: goto L_0894652C; case 0x08946544u: goto L_08946544; case 0x08946574u: goto L_08946574; case 0x08946580u: goto L_08946580; default: rs_break(0, 0x08946524); }
L_0894652C:;
    a0 = s0 + 0;
    a1 = 1155;
    goto L_08946534;
L_08946534:;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894653C;
L_0894653C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08946558; }
    goto L_08946544;
L_08946544:;
    goto L_08946548;
L_08946548:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08946558:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08946560;
L_08946560:;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894656C;
L_0894656C:;
    goto L_08946548;
L_08946574:;
    a0 = s0 + 0;
    a1 = 1103;
    goto L_08946534;
L_08946580:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 3;
    goto L_08946560;
L_08946590:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894659C;
L_0894659C:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089465A4;
L_089465A4:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_089465AC;
L_089465AC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_089465B8;
L_089465B8:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089465C4;
L_089465C4:;
    v0 = s1 < 0xcu;
    goto L_08946508;
L_089465CC:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1103;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089465E0;
L_089465E0:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08946504; }
    goto L_089465E8;
L_089465E8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089465F4;
L_089465F4:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089465FC;
L_089465FC:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08946604;
L_08946604:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 4;
    goto L_089465B8;
}

/* 08946614 */
rv_t func_08946614(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08946614:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26850 - (26704);
    t1 = D_08C26860 - (26720);
    t2 = D_08C26870 - (26736);
    a1 = a1 & a0;
    v1 = t0 + 26704;
    a2 = t1 + 26720;
    cnd_ = a1 == 0;
    a3 = t2 + 26736;
    if (cnd_) { goto L_089466CC; }
    goto L_08946644;
L_08946644:;
    v0 = D_08AEDA3C - (-9668);
    f4 = BITSF(LD32(v0-9668));
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
    ST32(t0+26704, FBITS(f2));
    ST32(t1+26720, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26736, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089466CC;
L_089466CC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089466D4 */
rv_t func_089466D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089466D4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08946614(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089466E8;
L_089466E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089466F4 */
rv_t func_089466F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089466F4:;
    sp = sp - 16;
    a2 = 1153;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894670C;
L_0894670C:;
    a0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = a0 + 23196;
    v0 = s0 + 40;
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    ST32(s0+40, FBITS(f2));
    a1 = s0 + 52;
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    v0 = D_08AF8BD8 - (-29736);
    v0 = v0 - 29736;
    f1 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    v1 = 1;
    ST32(s0, v0);
    ST32(s0+28, v1);
    ST32(s0+52, FBITS(f1));
    ST32(s0+64, 0);
    ST8(s0+36, 0);
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894677C */
rv_t func_0894677C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894677C:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946798;
L_08946798:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08946E50(a0);
    goto L_089467A4;
L_089467A4:;
    a1 = v0 + 0;
    v1 = D_08AEDA44 - (-9660);
    v0 = D_08AEDA40 - (-9664);
    f12 = BITSF(LD32(v0-9664));
    f13 = BITSF(LD32(v1-9660));
    a0 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_08965E64(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089467C4;
L_089467C4:;
    ST32(s1+64, s0);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08946868; }
    goto L_089467D0;
L_089467D0:;
    v0 = LD32(s1+24);
    a0 = D_08C2B0A8 - (-20312);
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08946864; }
    goto L_089467E8;
L_089467E8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08946838; }
    goto L_0894680C;
L_0894680C:;
    a0 = LD32(a1);
    goto L_08946810;
L_08946810:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08946894; }
    goto L_08946828;
L_08946828:;
    a1 = LD32(a1+4);
    goto L_0894682C;
L_0894682C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08946810; }
    goto L_08946834;
L_08946834:;
    a0 = 0 + 0;
    goto L_08946838;
L_08946838:;
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08946868; }
    goto L_08946840;
L_08946840:;
    ST32(sp, 0);
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_08946848;
L_08946848:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894685C;
L_0894685C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+64); goto L_0894687C; }
    goto L_08946864;
L_08946864:;
    v0 = 1;
    goto L_08946868;
L_08946868:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894687C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(sp);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894688C;
L_0894688C:;
    v0 = 1;
    goto L_08946868;
L_08946894:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894682C; }
    goto L_089468A0;
L_089468A0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894682C; }
    goto L_089468AC;
L_089468AC:;
    goto L_08946838;
}

/* 089468B4 */
rv_t func_089468B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089468B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+64);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089468F8; }
    goto L_089468D0;
L_089468D0:;
    ST32(s0+64, 0);
    goto L_089468D4;
L_089468D4:;
    a0 = s0 + 0;
    v0 = func_08946E50(a0);
    goto L_089468DC;
L_089468DC:;
    v1 = LD32(v0+48);
    v0 = 999;
    ST32(v1+256, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089468F8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946908;
L_08946908:;
    ST32(s0+64, 0);
    goto L_089468D4;
}

/* 08946910 */
rv_t func_08946910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08946910:;
    sp = sp - 64;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v1 = (v0 >> 3) & 0x1;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08946944; }
    goto L_0894693C;
L_0894693C:;
    cnd_ = v1 == 0;
    s1 = a0 + 40;
    if (cnd_) { goto L_0894695C; }
    goto L_08946944;
L_08946944:;
    goto L_08946948;
L_08946948:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0894695C:;
    v0 = func_08946E50(a0);
    goto L_08946964;
L_08946964:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946984;
L_08946984:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = s0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08946E50(a0);
    goto L_089469A4;
L_089469A4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089469C4;
L_089469C4:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s1+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a3 = LD_U8(s0+36);
    a0 = LD32(s0+64);
    f12 = f20;
    a2 = sp + 16;
    a1 = sp + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = func_08965A70(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946A0C;
L_08946A0C:;
    goto L_08946948;
}

/* 08946A14 */
rv_t func_08946A14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08946A14:;
    sp = sp - 128;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08946A4C; }
    goto L_08946A40;
L_08946A40:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+32)); goto L_08946A6C; }
    goto L_08946A4C;
L_08946A4C:;
    goto L_08946A50;
L_08946A50:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08946A6C:;
    f0 = f0 + f12;
    ST32(a0+32, FBITS(f0));
    v0 = func_08946E50(a0);
    goto L_08946A78;
L_08946A78:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08946A80;
L_08946A80:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08946A88;
L_08946A88:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08946B38; }
    goto L_08946A90;
L_08946A90:;
    a0 = s1 + 0;
    v0 = func_08946E50(a0);
    goto L_08946A98;
L_08946A98:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08946AA0;
L_08946AA0:;
    v1 = LD32(v0+24);
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    s0 = LD32(v1+4);
    cnd_ = s0 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08946B34; }
    goto L_08946AB8;
L_08946AB8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08946B08; }
    goto L_08946ADC;
L_08946ADC:;
    a1 = LD32(a0);
    goto L_08946AE0;
L_08946AE0:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08946DB0; }
    goto L_08946AF8;
L_08946AF8:;
    a0 = LD32(a0+4);
    goto L_08946AFC;
L_08946AFC:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08946AE0; }
    goto L_08946B04;
L_08946B04:;
    s2 = 0 + 0;
    goto L_08946B08;
L_08946B08:;
    cnd_ = s2 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08946B38; }
    goto L_08946B10;
L_08946B10:;
    v1 = LD32(s2);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08946B4C; }
    goto L_08946B34;
L_08946B34:;
    a0 = s1 + 0;
    goto L_08946B38;
L_08946B38:;
    a1 = 3;
    goto L_08946B3C;
L_08946B3C:;
    v0 = func_08946E58(a0, a1);
    goto L_08946B44;
L_08946B44:;
    goto L_08946A50;
L_08946B4C:;
    a0 = s1 + 0;
    v0 = func_08946E50(a0);
    goto L_08946B54;
L_08946B54:;
    v1 = LD32(v0+48);
    a0 = s1 + 0;
    ST32(v1+256, s0);
    v0 = func_08946E50(a0);
    goto L_08946B64;
L_08946B64:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946B84;
L_08946B84:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    f0 = func_08946E80(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08946B94;
L_08946B94:;
    v1 = LD32(s1+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08946D80; }
    goto L_08946BA4;
L_08946BA4:;
    v1 = D_08ADA294 - (-23916);
    v1 = v1 - 23916;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08946A4Cu: goto L_08946A4C; case 0x08946BBCu: goto L_08946BBC; case 0x08946CD0u: goto L_08946CD0; case 0x08946D80u: goto L_08946D80; default: rs_break(0, 0x08946bb4); }
L_08946BBC:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == 0;
    s3 = s1 + 40;
    if (cnd_) { goto L_08946CAC; }
    goto L_08946BC8;
L_08946BC8:;
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    a0 = s1 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    ST32(sp+20, 0);
    v0 = func_08946E50(a0);
    goto L_08946C0C;
L_08946C0C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08946E50(a0);
    goto L_08946C18;
L_08946C18:;
    v1 = D_08AEDA48 - (-9656);
    f20 = BITSF(LD32(v1-9656));
    f12 = BITSF(LD32(v0+124));
    a0 = s0 + 0;
    a1 = sp + 16;
    f12 = f12 * f20;
    a2 = 0 + 0;
    { rv_t r_ = func_08959780(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946C38;
L_08946C38:;
    v0 = D_08AEDA4C - (-9652);
    f0 = BITSF(LD32(v0-9652));
    a2 = D_08C29E64 - (-24988);
    a0 = s3 + 0;
    a1 = sp + 32;
    a2 = a2 - 24988;
    f12 = f20;
    a3 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946C60;
L_08946C60:;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[0]=BITSF(v1);}
    v1 = LD32(sp+24);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEDA50 - (-9648);
    f0 = BITSF(LD32(v0-9648));
    a0 = s1 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    a1 = 2;
    if (cnd_) { goto L_08946A4C; }
    goto L_08946CA4;
L_08946CA4:;
    goto L_08946B3C;
L_08946CAC:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946CC8;
L_08946CC8:;
    s3 = v0 + 0;
    goto L_08946BC8;
L_08946CD0:;
    v0 = LD_U8(s1+36);
    cnd_ = v0 == 0;
    v1 = s1 + 40;
    if (cnd_) { goto L_08946D8C; }
    goto L_08946CDC;
L_08946CDC:;
    f5 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+4, 0);
    v0 = func_08946E50(a0);
    goto L_08946D20;
L_08946D20:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08946E50(a0);
    goto L_08946D2C;
L_08946D2C:;
    f12 = BITSF(LD32(v0+120));
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08959780(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946D40;
L_08946D40:;
    v0 = LD32(sp);
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEDA54 - (-9644);
    f0 = BITSF(LD32(v0-9644));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_08946A50; }
    goto L_08946D80;
L_08946D80:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08946B3C;
L_08946D8C:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946DA8;
L_08946DA8:;
    v1 = v0 + 0;
    goto L_08946CDC;
L_08946DB0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08946AFC; }
    goto L_08946DBC;
L_08946DBC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08946AF8; }
    goto L_08946DC8;
L_08946DC8:;
    goto L_08946B08;
}

/* 08946DD0 */
rv_t func_08946DD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08946DD0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08946E50(a0);
    goto L_08946DE4;
L_08946DE4:;
    v1 = D_08B1B5E4 - (-18972);
    a1 = LD32(s0+28);
    v1 = v1 - 18972;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDA58 - (-9640);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9640));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946E20;
L_08946E20:;
    a0 = s0 + 0;
    v0 = func_08946E50(a0);
    goto L_08946E28;
L_08946E28:;
    v0 = v0 + 64;
    v1 = D_08AEDA5C - (-9636);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9636));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08946E50 */
u32 func_08946E50(u32 a0)
{
    u32 v0 = 0;
L_08946E50:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08946E58 */
u32 func_08946E58(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08946E58:;
    v0 = 3;
    ST32(a0+28, a1);
    cnd_ = a1 == v0;
    ST32(a0+32, 0);
    if (cnd_) { goto L_08946E70; }
    goto L_08946E68;
L_08946E68:;
    return v0;
L_08946E70:;
    v0 = LD32(a0+8);
    v0 = v0 | 0x8;
    ST32(a0+8, v0);
    return v0;
}

/* 08946E80 */
float func_08946E80(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08946E80:;
    sp = sp - 48;
    s3 = a0 + 0;
    a3 = LD32(a1);
    v0 = LD32(a3-16);
    a0 = a1 + v0;
    v1 = LD_U16(a0+8);
    v0 = 0x8004;
    cnd_ = v1 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08946FC8; }
    goto L_08946EB8;
L_08946EB8:;
    v0 = 0x8003;
    cnd_ = v1 == v0;
    v0 = 0x8014;
    if (cnd_) { goto L_08946FC8; }
    goto L_08946EC4;
L_08946EC4:;
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_08946FC8; }
    goto L_08946ECC;
L_08946ECC:;
    cnd_ = v1 == v0;
    v0 = 999;
    if (cnd_) { goto L_08946FC8; }
    goto L_08946ED4;
L_08946ED4:;
    a2 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08946F74; }
    goto L_08946EE4;
L_08946EE4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08946F34; }
    goto L_08946F08;
L_08946F08:;
    a0 = LD32(a1);
    goto L_08946F0C;
L_08946F0C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08946FA8; }
    goto L_08946F24;
L_08946F24:;
    a1 = LD32(a1+4);
    goto L_08946F28;
L_08946F28:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08946F0C; }
    goto L_08946F30;
L_08946F30:;
    a0 = 0 + 0;
    goto L_08946F34;
L_08946F34:;
    cnd_ = a0 == 0;
    a1 = s3 + 40;
    if (cnd_) { goto L_08946F74; }
    goto L_08946F3C;
L_08946F3C:;
    v0 = LD32(a0);
    f12 = BITSF(0);
    v1 = LD32(v0+56);
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946F50;
L_08946F50:;
    v0 = 1;
    ST8(s3+36, v0);
    goto L_08946F58;
L_08946F58:;
    goto L_08946F5C;
L_08946F5C:;
    sp = sp + 48;
    return f0;
L_08946F74:;
    a0 = LD32(a3-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s3 + 40;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946F8C;
L_08946F8C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s3+40, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_08946F50;
L_08946FA8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08946F28; }
    goto L_08946FB4;
L_08946FB4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08946F28; }
    goto L_08946FC0;
L_08946FC0:;
    goto L_08946F34;
L_08946FC8:;
    a0 = s3 + 0;
    v0 = func_08946E50(a0);
    goto L_08946FD0;
L_08946FD0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08946FF0;
L_08946FF0:;
    s2 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947010;
L_08947010:;
    a0 = LD32(s1);
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v1 = LD32(a0-16);
    f5 = BITSF(LD32(s2));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s2+4));
    f3 = BITSF(LD32(s2+8));
    v1 = s1 + v1;
    f1 = f1 - f5;
    f0 = f0 - f2;
    f4 = f4 - f3;
    a1 = LD32(v1+4);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08947060;
L_08947060:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089470EC; }
    goto L_08947068;
L_08947068:;
    v1 = LD32(v0);
    v0 = D_08B1B740 - (-18624);
    f12 = BITSF(LD32(v0-18624));
    v0 = LD32(v1+104);
    s1 = s3 + 40;
    a0 = s0 + 0;
    a1 = sp + 0;
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894708C;
L_0894708C:;
    cnd_ = v0 == 0;
    ST8(s3+36, v0);
    if (cnd_) { goto L_089470C8; }
    goto L_08947094;
L_08947094:;
    f5 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s3+40));
    f4 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s1+8));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    ST32(s3+40, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    ST32(s1+4, FBITS(f2));
    goto L_08946F58;
L_089470C8:;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = s1 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089470E4;
L_089470E4:;
    goto L_08946F5C;
L_089470EC:;
    ST8(s3+36, 0);
    goto L_08946F58;
}

/* 089470F4 */
rv_t func_089470F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089470F4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26880 - (26752);
    t1 = D_08C26890 - (26768);
    t2 = D_08C268A0 - (26784);
    a1 = a1 & a0;
    v1 = t0 + 26752;
    a2 = t1 + 26768;
    cnd_ = a1 == 0;
    a3 = t2 + 26784;
    if (cnd_) { goto L_089471AC; }
    goto L_08947124;
L_08947124:;
    v0 = D_08AEDA60 - (-9632);
    f4 = BITSF(LD32(v0-9632));
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
    ST32(t0+26752, FBITS(f2));
    ST32(t1+26768, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26784, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089471AC;
L_089471AC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089471B4 */
rv_t func_089471B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089471B4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089470F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089471C8;
L_089471C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089471D4 */
u64 func_089471D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089471D4:;
    sp = sp - 16;
    a2 = 1103;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089471EC;
L_089471EC:;
    v0 = D_08AF8C10 - (-29680);
    v0 = v0 - 29680;
    ST32(s0, v0);
    ST32(s0+32, 0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08947210 */
rv_t func_08947210(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947210:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089474D0(a0);
    goto L_08947224;
L_08947224:;
    v1 = LD32(v0+156);
    a0 = s0 + 0;
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    v0 = func_089474D0(a0);
    goto L_08947238;
L_08947238:;
    v1 = LD32(v0+156);
    a0 = v0 + 0;
    v1 = v1 | 0x2;
    v0 = 1;
    ST32(a0+156, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894725C */
rv_t func_0894725C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894725C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089472AC; }
    goto L_08947278;
L_08947278:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08947280;
L_08947280:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_08947288;
L_08947288:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894729C;
L_0894729C:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08947278; }
    goto L_089472AC;
L_089472AC:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_089472B4;
L_089472B4:;
    v1 = LD32(v0+156);
    a0 = s0 + 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v0+156, v1);
    v0 = func_089474D0(a0);
    goto L_089472C8;
L_089472C8:;
    v1 = LD32(v0+156);
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(v0+156, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089472E4 */
rv_t func_089472E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089472E4:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08947358; }
    goto L_08947300;
L_08947300:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_08947358; }
    goto L_08947318;
L_08947318:;
    v0 = v1 << 2;
    v1 = D_08ADA2D8 - (-23848);
    v1 = v1 - 23848;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08947334u: goto L_08947334; case 0x08947358u: goto L_08947358; case 0x08947378u: goto L_08947378; case 0x08947384u: goto L_08947384; default: rs_break(0, 0x0894732c); }
L_08947334:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_0894733C;
L_0894733C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08947344;
L_08947344:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894734C;
L_0894734C:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08947368; }
    goto L_08947358;
L_08947358:;
    goto L_0894735C;
L_0894735C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08947368:;
    { rv_t r_ = func_089474D8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947370;
L_08947370:;
    goto L_0894735C;
L_08947378:;
    a0 = s0 + 0;
    goto L_0894737C;
L_0894737C:;
    a1 = 1;
    goto L_08947368;
L_08947384:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_0894738C;
L_0894738C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08947394;
L_08947394:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894739C;
L_0894739C:;
    v1 = LD32(s0+16);
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089473CC; }
    goto L_089473B0;
L_089473B0:;
    v1 = LD32(v1+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_089473D0; }
    goto L_089473C0;
L_089473C0:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089473D0; }
    goto L_089473CC;
L_089473CC:;
    a1 = 1;
    goto L_089473D0;
L_089473D0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089473E0; }
    goto L_089473D8;
L_089473D8:;
    cnd_ = a1 == 0;
    v0 = D_08AEDA68 - (-9624);
    if (cnd_) { goto L_08947410; }
    goto L_089473E0;
L_089473E0:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_089473E8;
L_089473E8:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089473F0;
L_089473F0:;
    a0 = v0 + 0;
    v0 = D_08AEDA64 - (-9628);
    f12 = BITSF(LD32(v0-9628));
    { rv_t r_ = func_089601D4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947400;
L_08947400:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_089474D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894740C;
L_0894740C:;
    v0 = D_08AEDA68 - (-9624);
    goto L_08947410;
L_08947410:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9624));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0894735C; }
    goto L_08947428;
L_08947428:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_08947430;
L_08947430:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08947438;
L_08947438:;
    a0 = v0 + 0;
    v0 = D_08AEDA64 - (-9628);
    f12 = BITSF(LD32(v0-9628));
    { rv_t r_ = func_089601D4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947448;
L_08947448:;
    a0 = s0 + 0;
    goto L_0894737C;
}

/* 08947450 */
rv_t func_08947450(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947450:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089474D0(a0);
    goto L_08947464;
L_08947464:;
    v1 = D_08B1B5F4 - (-18956);
    a1 = LD32(s0+28);
    v1 = v1 - 18956;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDA6C - (-9620);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9620));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089474A0;
L_089474A0:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_089474A8;
L_089474A8:;
    v0 = v0 + 64;
    v1 = D_08AEDA70 - (-9616);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9616));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089474D0 */
u32 func_089474D0(u32 a0)
{
    u32 v0 = 0;
L_089474D0:;
    v0 = LD32(a0+24);
    return v0;
}

/* 089474D8 */
rv_t func_089474D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089474D8:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08947534; }
    goto L_089474FC;
L_089474FC:;
    v0 = v1 << 2;
    v1 = D_08ADA314 - (-23788);
    v1 = v1 - 23788;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08947518u: goto L_08947518; case 0x08947534u: goto L_08947534; case 0x0894761Cu: goto L_0894761C; default: rs_break(0, 0x08947510); }
L_08947518:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1154;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894752C;
L_0894752C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_089475E0; }
    goto L_08947534;
L_08947534:;
    v0 = s1 < 0x5u;
    goto L_08947538;
L_08947538:;
    ST32(s0+28, s1);
    cnd_ = v0 == 0;
    ST32(s0+32, 0);
    if (cnd_) { goto L_08947578; }
    goto L_08947544;
L_08947544:;
    v1 = D_08ADA328 - (-23768);
    v0 = s1 << 2;
    v1 = v1 - 23768;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08947560u: goto L_08947560; case 0x08947578u: goto L_08947578; case 0x089475ACu: goto L_089475AC; case 0x089475D0u: goto L_089475D0; default: rs_break(0, 0x08947558); }
L_08947560:;
    a0 = s0 + 0;
    a1 = 1154;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947570;
L_08947570:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0894758C; }
    goto L_08947578;
L_08947578:;
    goto L_0894757C;
L_0894757C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894758C:;
    a0 = s0 + 0;
    a1 = 3;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_0894759C;
L_0894759C:;
    { rv_t r_ = func_089474D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089475A4;
L_089475A4:;
    goto L_0894757C;
L_089475AC:;
    a0 = s0 + 0;
    a1 = 1153;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089475BC;
L_089475BC:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0894757C; }
    goto L_089475C4;
L_089475C4:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_0894759C;
L_089475D0:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_08947578;
L_089475E0:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089475EC;
L_089475EC:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089475F4;
L_089475F4:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_089475FC;
L_089475FC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_08947608;
L_08947608:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947614;
L_08947614:;
    v0 = s1 < 0x5u;
    goto L_08947538;
L_0894761C:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1153;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08947630;
L_08947630:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08947534; }
    goto L_08947638;
L_08947638:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08947644;
L_08947644:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894764C;
L_0894764C:;
    a0 = s0 + 0;
    v0 = func_089474D0(a0);
    goto L_08947654;
L_08947654:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 4;
    goto L_08947608;
}

/* 08947664 */
rv_t func_08947664(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08947664:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26930 - (26928);
    t1 = D_08C26940 - (26944);
    t2 = D_08C26950 - (26960);
    a1 = a1 & a0;
    v1 = t0 + 26928;
    a2 = t1 + 26944;
    cnd_ = a1 == 0;
    a3 = t2 + 26960;
    if (cnd_) { goto L_0894771C; }
    goto L_08947694;
L_08947694:;
    v0 = D_08AEDA74 - (-9612);
    f4 = BITSF(LD32(v0-9612));
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
    ST32(t0+26928, FBITS(f2));
    ST32(t1+26944, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+26960, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894771C;
L_0894771C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08947724 */
rv_t func_08947724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947724:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08947664(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947738;
L_08947738:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08947744 */
rv_t func_08947744(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947744:;
    sp = sp - 16;
    a2 = 1154;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894775C;
L_0894775C:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a0 = s0 + 40;
    ST32(s0+36, 0);
    f0 = BITSF(LD32(v0+23196));
    v0 = D_08AF8C48 - (-29624);
    v0 = v0 - 29624;
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(s0+40, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+28, 0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089477A8 */
rv_t func_089477A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089477A8:;
    sp = sp - 96;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_089477F0; }
    goto L_089477D4;
L_089477D4:;
    goto L_089477D8;
L_089477D8:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089477F0:;
    f0 = BITSF(LD32(a0+32));
    a0 = 1;
    f0 = f0 + f12;
    ST32(s0+32, FBITS(f0));
    { u64 r_ = func_08A145E4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08947804;
L_08947804:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08947B38; }
    goto L_0894780C;
L_0894780C:;
    v0 = v0 + 28;
    f0 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+16));
    f3 = BITSF(LD32(a0+28));
    f2 = f2 + f0;
    f1 = f1 + f5;
    f3 = f3 + f4;
    v0 = D_08AEDA78 - (-9608);
    f0 = BITSF(LD32(v0-9608));
    f1 = f1 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f1));
    goto L_08947860;
L_08947860:;
    cnd_ = a0 == 0;
    v0 = a0 + 28;
    if (cnd_) { goto L_08947B18; }
    goto L_08947868;
L_08947868:;
    f4 = BITSF(LD32(a0+28));
    f5 = BITSF(LD32(v0+16));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+20));
    f1 = f1 - f4;
    f2 = f2 - f3;
    f0 = f0 - f5;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    goto L_08947898;
L_08947898:;
    a2 = sp + 16;
    a0 = s0 + 0;
    a1 = sp + 0;
    f0 = func_08947B64(a0, a1, a2);
    goto L_089478A8;
L_089478A8:;
    v1 = LD32(s0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    f2 = f0;
    if (cnd_) { goto L_089478CC; }
    goto L_089478B8;
L_089478B8:;
    a0 = s0 + 0;
    a1 = 1;
    func_08947C80(a0, a1);
    goto L_089478C4;
L_089478C4:;
    goto L_089477D8;
L_089478CC:;
    f0 = BITSF(LD32(s0+36));
    f21 = BITSF(0);
    s1 = s0 + 40;
    f12 = f0 - f20;
    fcc = FCMP(f12, f21, 14);
    cnd_ = !fcc;
    ST32(s0+36, FBITS(f12));
    if (cnd_) { goto L_08947A30; }
    goto L_089478EC;
L_089478EC:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a0 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    a2 = v0 + a0;
    v0 = a2 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEDA88 - (-9592);
    f4 = BITSF(LD32(v0-9592));
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AEDA84 - (-9596);
    f0 = BITSF(LD32(v0-9596));
    a1 = a0 + a2;
    f1 = f1 * f4;
    f0 = f12 + f0;
    ST32(a3+23232, a2);
    fcc = FCMP(f1, f2, 12);
    ST32(s0+36, FBITS(f0));
    cnd_ = fcc;
    ST32(t0+4, a1);
    if (cnd_) { goto L_08947AAC; }
    goto L_08947948;
L_08947948:;
    v1 = (u32)((s32)a2 >> 16);
    v0 = a2 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    a0 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    a1 = a1 + v0;
    v1 = v1 + a0;
    v1 = v1 + a1;
    v0 = v0 >> 1;
    a0 = v1 >> 1;
    f0 = BITSF(v0);
    f3 = BITSF(a0);
    v0 = D_08AEDA8C - (-9588);
    f1 = (float)(s32)FBITS(f0);
    f2 = (float)(s32)FBITS(f3);
    f0 = BITSF(LD32(v0-9588));
    a1 = a1 + v1;
    f1 = f1 * f4;
    f2 = f2 * f4;
    ST32(t0+4, a1);
    s1 = s0 + 40;
    f1 = f1 + f1;
    f2 = f2 + f2;
    ST32(s0+44, FBITS(f21));
    f1 = f1 + f0;
    f2 = f2 + f0;
    ST32(a3+23232, v1);
    ST32(s0+40, FBITS(f1));
    ST32(s0+48, FBITS(f2));
    goto L_089479C0;
L_089479C0:;
    v0 = LD32(s0+40);
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(s1+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    if (cnd_) { goto L_08947A30; }
    goto L_089479FC;
L_089479FC:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    f3 = BITSF(a0);
    {v0=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+32, v0);
    ST32(s1+4, a0);
    ST32(s1+8, FBITS(f3));
    ST32(sp+36, a0);
    ST32(sp+40, FBITS(f3));
    ST32(s0+40, v0);
    goto L_08947A30;
L_08947A30:;
    a0 = s0 + 0;
    v0 = func_08947B5C(a0);
    goto L_08947A38;
L_08947A38:;
    a0 = s0 + 0;
    f21 = BITSF(LD32(v0+124));
    v0 = func_08947B5C(a0);
    goto L_08947A44;
L_08947A44:;
    a0 = s0 + 0;
    f20 = BITSF(LD32(v0+124));
    v0 = func_08947B5C(a0);
    goto L_08947A50;
L_08947A50:;
    f0 = BITSF(LD32(v0+120));
    v0 = D_08AEDA78 - (-9608);
    a0 = s0 + 0;
    f20 = f20 - f0;
    f0 = BITSF(LD32(v0-9608));
    f20 = f20 * f0;
    v0 = func_08947B5C(a0);
    goto L_08947A6C;
L_08947A6C:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+40));
    f21 = f21 - f20;
    f1 = BITSF(LD32(s1+4));
    a0 = v0 + 0;
    a1 = sp + 32;
    f2 = f2 * f21;
    f0 = f0 * f21;
    f1 = f1 * f21;
    a2 = 0 + 0;
    ST32(sp+40, FBITS(f2));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947AA4;
L_08947AA4:;
    goto L_089477D8;
L_08947AAC:;
    a0 = s0 + 0;
    v0 = func_08947B5C(a0);
    goto L_08947AB4;
L_08947AB4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947AD4;
L_08947AD4:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f0 = f0 - f1;
    f2 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    f2 = f2 - f3;
    f1 = f1 - f4;
    ST32(sp+36, FBITS(f0));
    ST32(s0+40, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    ST32(s0+44, FBITS(f21));
    ST32(s1+8, FBITS(f2));
    ST32(sp+32, FBITS(f1));
    goto L_089479C0;
L_08947B18:;
    v0 = D_08AEDA7C - (-9604);
    f1 = BITSF(LD32(v0-9604));
    v0 = D_08AEDA80 - (-9600);
    f0 = BITSF(LD32(v0-9600));
    ST32(sp+24, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    goto L_08947898;
L_08947B38:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    goto L_08947860;
}

/* 08947B5C */
u32 func_08947B5C(u32 a0)
{
    u32 v0 = 0;
L_08947B5C:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08947B64 */
float func_08947B64(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08947B64:;
    sp = sp - 32;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = func_08947B5C(a0);
    goto L_08947B80;
L_08947B80:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947BA0;
L_08947BA0:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+4));
    f4 = f4 - f0;
    v1 = D_08AEDA90 - (-9584);
    f7 = BITSF(LD32(v1-9584));
    f5 = f5 - f1;
    v1 = FBITS(f4);
    f3 = BITSF(LD32(s1));
    f6 = BITSF(LD32(s1+4));
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    v1 = FBITS(f5);
    f3 = f3 * f7;
    f6 = f6 * f7;
    v1 = (v1 >> 0) & 0x7fffffff;
    f8 = BITSF(v1);
    f9 = f2 / f3;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s1+8));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    f8 = f8 / f6;
    f2 = f2 - f0;
    f3 = f3 * f7;
    fcc = FCMP(f8, f9, 14);
    v0 = FBITS(f2);
    ST32(sp+8, FBITS(f2));
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    cnd_ = fcc;
    f1 = f1 / f3;
    if (cnd_) { goto L_08947C2C; }
    goto L_08947C28;
L_08947C28:;
    f9 = f8;
    goto L_08947C2C;
L_08947C2C:;
    fcc = FCMP(f1, f9, 14);
    cnd_ = fcc;
    f0 = f9;
    if (cnd_) { goto L_08947C40; }
    goto L_08947C3C;
L_08947C3C:;
    f0 = f1;
    goto L_08947C40;
L_08947C40:;
    f2 = f0;
    f0 = f0 * f0;
    v0 = D_08AEDA94 - (-9580);
    f0 = f0 * f2;
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-9580));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08947C6C; }
    goto L_08947C68;
L_08947C68:;
    f2 = BITSF(0);
    goto L_08947C6C;
L_08947C6C:;
    f0 = f2;
    sp = sp + 32;
    return f0;
}

/* 08947C80 */
void func_08947C80(u32 a0, u32 a1)
{
L_08947C80:;
    ST32(a0+28, a1);
    ST32(a0+32, 0);
    return;
}

/* 08947C8C */
rv_t func_08947C8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08947C8C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C269E0 - (27104);
    t1 = D_08C269F0 - (27120);
    t2 = D_08C26A00 - (27136);
    a1 = a1 & a0;
    v1 = t0 + 27104;
    a2 = t1 + 27120;
    cnd_ = a1 == 0;
    a3 = t2 + 27136;
    if (cnd_) { goto L_08947D44; }
    goto L_08947CBC;
L_08947CBC:;
    v0 = D_08AEDA98 - (-9576);
    f4 = BITSF(LD32(v0-9576));
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
    ST32(t0+27104, FBITS(f2));
    ST32(t1+27120, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+27136, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08947D44;
L_08947D44:;
    return (rv_t){ v0, v1, f0 };
}

/* 08947D4C */
rv_t func_08947D4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947D4C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08947C8C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947D60;
L_08947D60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08947D6C */
rv_t func_08947D6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947D6C:;
    sp = sp - 16;
    a2 = 1155;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08947D84;
L_08947D84:;
    v0 = D_08AF8C80 - (-29568);
    v0 = v0 - 29568;
    ST32(s0, v0);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    { rv_t r_ = func_08947FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947DA4;
L_08947DA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08947DB4 */
rv_t func_08947DB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947DB4:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_08947DDC; }
    goto L_08947DCC;
L_08947DCC:;
    v0 = 0 + 0;
    goto L_08947DD0;
L_08947DD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08947DDC:;
    v1 = 0xe7a30000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0xa175;
    if (cnd_) { goto L_08947DCC; }
    goto L_08947DE8;
L_08947DE8:;
    v0 = LD32(a1+4);
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_08947DD0; }
    goto L_08947DF4;
L_08947DF4:;
    v1 = LD32(a0+28);
    v0 = 2;
    cnd_ = v1 != v0;
    a1 = 3;
    if (cnd_) { goto L_08947DCC; }
    goto L_08947E04;
L_08947E04:;
    { rv_t r_ = func_08947FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947E0C;
L_08947E0C:;
    v0 = 1;
    goto L_08947DD0;
}

/* 08947E14 */
rv_t func_08947E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947E14:;
    sp = sp - 16;
    v0 = func_08947FC4(a0);
    goto L_08947E24;
L_08947E24:;
    v1 = LD32(v0+156);
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08947E3C */
rv_t func_08947E3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08947E3C:;
    sp = sp - 32;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08947EAC; }
    goto L_08947E58;
L_08947E58:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_08947EAC; }
    goto L_08947E70;
L_08947E70:;
    v0 = v1 << 2;
    v1 = D_08ADA33C - (-23748);
    v1 = v1 - 23748;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08947E8Cu: goto L_08947E8C; case 0x08947EACu: goto L_08947EAC; case 0x08947ECCu: goto L_08947ECC; default: rs_break(0, 0x08947e84); }
L_08947E8C:;
    v0 = D_08AEDA9C - (-9572);
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9572));
    a0 = s0 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 2;
    if (cnd_) { goto L_08947EBC; }
    goto L_08947EAC;
L_08947EAC:;
    goto L_08947EB0;
L_08947EB0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08947EBC:;
    { rv_t r_ = func_08947FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947EC4;
L_08947EC4:;
    goto L_08947EB0;
L_08947ECC:;
    v0 = D_08AEDAA0 - (-9568);
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9568));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08947EF4; }
    goto L_08947EE8;
L_08947EE8:;
    a0 = s0 + 0;
    a1 = 4;
    goto L_08947EBC;
L_08947EF4:;
    a0 = s0 + 0;
    v0 = func_08947FC4(a0);
    goto L_08947EFC;
L_08947EFC:;
    a0 = s0 + 36;
    v1 = D_08AEDAA4 - (-9564);
    f0 = BITSF(LD32(v1-9564));
    f3 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(s0+36));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947F3C;
L_08947F3C:;
    goto L_08947EB0;
}

/* 08947F44 */
rv_t func_08947F44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08947F44:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08947FC4(a0);
    goto L_08947F58;
L_08947F58:;
    v1 = D_08B1B604 - (-18940);
    a1 = LD32(s0+28);
    v1 = v1 - 18940;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDAA8 - (-9560);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9560));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08947F94;
L_08947F94:;
    a0 = s0 + 0;
    v0 = func_08947FC4(a0);
    goto L_08947F9C;
L_08947F9C:;
    v0 = v0 + 64;
    v1 = D_08AEDAAC - (-9556);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9556));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08947FC4 */
u32 func_08947FC4(u32 a0)
{
    u32 v0 = 0;
L_08947FC4:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08947FCC */
rv_t func_08947FCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08947FCC:;
    sp = sp - 112;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0894802C; }
    goto L_08947FFC;
L_08947FFC:;
    v0 = v1 << 2;
    v1 = D_08ADA39C - (-23652);
    v1 = v1 - 23652;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08948018u: goto L_08948018; case 0x0894802Cu: goto L_0894802C; default: rs_break(0, 0x08948010); }
L_08948018:;
    a0 = s1 + 0;
    v0 = func_08947FC4(a0);
    goto L_08948020;
L_08948020:;
    v1 = LD32(v0+156);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v0+156, v1);
    goto L_0894802C;
L_0894802C:;
    v0 = s0 < 0x6u;
    ST32(s1+28, s0);
    cnd_ = v0 == 0;
    ST32(s1+32, 0);
    if (cnd_) { goto L_08948068; }
    goto L_0894803C;
L_0894803C:;
    v1 = D_08ADA3B4 - (-23628);
    v0 = s0 << 2;
    v1 = v1 - 23628;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08948058u: goto L_08948058; case 0x08948068u: goto L_08948068; case 0x08948088u: goto L_08948088; case 0x08948338u: goto L_08948338; default: rs_break(0, 0x08948050); }
L_08948058:;
    a0 = s1 + 0;
    v0 = func_08947FC4(a0);
    goto L_08948060;
L_08948060:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_089D2950(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948068;
L_08948068:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08948088:;
    a0 = s1 + 0;
    v0 = func_08947FC4(a0);
    goto L_08948090;
L_08948090:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s3 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089480B0;
L_089480B0:;
    a2 = D_08C2A204 - (-24060);
    v1 = a2 - 24060;
    s0 = v0 + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    v0 = D_08AEDAB0 - (-9552);
    f20 = BITSF(LD32(v0-9552));
    ST32(sp, v1);
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08948134; }
    goto L_089480E8;
L_089480E8:;
    a2 = LD32(a2-24060);
    a3 = a1 + 0;
    goto L_089480F0;
L_089480F0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08948124; }
    goto L_08948108;
L_08948108:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08948138; }
    goto L_08948118;
L_08948118:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08948108; }
    goto L_08948124;
L_08948124:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089480F0; }
    goto L_08948134;
L_08948134:;
    v0 = LD32(sp+8);
    goto L_08948138;
L_08948138:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp); goto L_089481DC; }
    goto L_08948140;
L_08948140:;
    v1 = LD32(v0);
    goto L_08948144;
L_08948144:;
    v0 = LD32(v1+36);
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089481C4; }
    goto L_08948150;
L_08948150:;
    v0 = v1 + 64;
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(v1+64));
    f5 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f0;
    f2 = f2 - f5;
    f4 = f4 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089481C4; }
    goto L_089481B8;
L_089481B8:;
    f20 = BITSF(v0);
    s3 = v1 + 0;
    a0 = sp + 0;
    goto L_089481C4;
L_089481C4:;
    a1 = 1;
    { u64 r_ = func_08ABDE1C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089481CC;
L_089481CC:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08948144; }
    goto L_089481D8;
L_089481D8:;
    a0 = LD32(sp);
    goto L_089481DC;
L_089481DC:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08948328; }
    goto L_089481EC;
L_089481EC:;
    cnd_ = s3 == 0;
    v0 = D_08AEDAB4 - (-9548);
    if (cnd_) { goto L_08948208; }
    goto L_089481F4;
L_089481F4:;
    f0 = BITSF(LD32(v0-9548));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0894824C; }
    goto L_08948208;
L_08948208:;
    a0 = s1 + 0;
    v0 = func_08947FC4(a0);
    goto L_08948210;
L_08948210:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948230;
L_08948230:;
    f0 = BITSF(LD32(v0+8));
    ST32(s1+36, FBITS(f0));
    f1 = BITSF(LD32(v0+20));
    ST32(s1+40, FBITS(f1));
    f0 = BITSF(LD32(v0+32));
    ST32(s1+44, FBITS(f0));
    goto L_08948068;
L_0894824C:;
    a0 = s1 + 0;
    v0 = func_08947FC4(a0);
    goto L_08948254;
L_08948254:;
    a0 = LD32(v0+48);
    s0 = s3 + 40;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s2 = s1 + 36;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948278;
L_08948278:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s3+40));
    f5 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f1;
    f5 = f5 - f2;
    f3 = f3 - f0;
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
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
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(s1+36, FBITS(f4));
    ST32(s2+4, FBITS(f3));
    cnd_ = fcc;
    ST32(s2+8, FBITS(f5));
    if (cnd_) { goto L_08948068; }
    goto L_089482E8;
L_089482E8:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(s2+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(s1+36, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(s2+4, v0);
    goto L_08948068;
L_08948328:;
    { u64 r_ = func_08ABDEB4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08948330;
L_08948330:;
    goto L_089481EC;
L_08948338:;
    a0 = s1 + 0;
    v0 = func_08947FC4(a0);
    goto L_08948340;
L_08948340:;
    v1 = LD32(v0+156);
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    v0 = LD32(s1+8);
    v0 = v0 | 0x8;
    ST32(s1+8, v0);
    goto L_08948068;
}

/* 0894835C */
rv_t func_0894835C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894835C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26A90 - (27280);
    t1 = D_08C26AA0 - (27296);
    t2 = D_08C26AB0 - (27312);
    a1 = a1 & a0;
    v1 = t0 + 27280;
    a2 = t1 + 27296;
    cnd_ = a1 == 0;
    a3 = t2 + 27312;
    if (cnd_) { goto L_08948414; }
    goto L_0894838C;
L_0894838C:;
    v0 = D_08AEDAB8 - (-9544);
    f4 = BITSF(LD32(v0-9544));
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
    ST32(t0+27280, FBITS(f2));
    ST32(t1+27296, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+27312, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08948414;
L_08948414:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894841C */
rv_t func_0894841C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894841C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894835C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948430;
L_08948430:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894843C */
rv_t func_0894843C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894843C:;
    sp = sp - 16;
    a2 = 1156;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08948454;
L_08948454:;
    v0 = 999;
    ST32(s0+40, v0);
    t0 = D_08B25AC0 - (23232);
    t1 = t0 + 23232;
    ST32(s0+36, v0);
    a2 = D_08B45A9C - (23196);
    a1 = a2 + 23196;
    a0 = LD32(t0+23232);
    a3 = LD32(t1+4);
    ST32(s0+32, 0);
    v0 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v0;
    a0 = a0 + a3;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEDACC - (-9524);
    f2 = BITSF(LD32(a1+8));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-9524));
    v0 = D_08AEDAC8 - (-9528);
    f3 = BITSF(LD32(a1+4));
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-9528));
    f4 = BITSF(LD32(a2+23196));
    v0 = D_08B1B750 - (-18608);
    f1 = f1 * f0;
    v1 = s0 + 48;
    f0 = BITSF(LD32(v0-18608));
    ST32(v1+8, FBITS(f2));
    v0 = D_08AF8CB8 - (-29512);
    fcc = FCMP(f1, f0, 12);
    ST32(v1+4, FBITS(f3));
    a3 = a3 + a0;
    v1 = s0 + 60;
    ST32(s0+48, FBITS(f4));
    v0 = v0 - 29512;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a2+23196));
    ST32(t1+4, a3);
    a1 = 1;
    ST32(v1+8, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+60, FBITS(f2));
    ST32(v1+4, FBITS(f1));
    ST32(t0+23232, a0);
    ST32(s0+28, 0);
    cnd_ = fcc;
    ST8(s0+44, 0);
    if (cnd_) { goto L_08948520; }
    goto L_0894851C;
L_0894851C:;
    a1 = 0 + 0;
    goto L_08948520;
L_08948520:;
    v1 = D_08AEDAD0 - (-9520);
    f0 = BITSF(LD32(v1-9520));
    v0 = 1;
    ST8(s0+72, a1);
    ST32(s0+84, 0);
    ST8(s0+80, v0);
    ST32(s0+76, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894854C */
u64 func_0894854C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894854C:;
    sp = sp - 32;
    a2 = D_08C2AA98 - (-21864);
    v0 = 999;
    v1 = a2 - 21864;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_089485D0; }
    goto L_08948580;
L_08948580:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-21864);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s1+40); goto L_089485D4; }
    goto L_089485A4;
L_089485A4:;
    a0 = LD32(a1);
    goto L_089485A8;
L_089485A8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_089486E8; }
    goto L_089485C0;
L_089485C0:;
    a1 = LD32(a1+4);
    goto L_089485C4;
L_089485C4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089485A8; }
    goto L_089485CC;
L_089485CC:;
    s2 = 0 + 0;
    goto L_089485D0;
L_089485D0:;
    v0 = LD32(s1+40);
    goto L_089485D4;
L_089485D4:;
    cnd_ = v0 == s0;
    if (cnd_) { ST32(s1+40, s0); goto L_08948660; }
    goto L_089485DC;
L_089485DC:;
    cnd_ = s2 == 0;
    v0 = 999;
    if (cnd_) { goto L_08948658; }
    goto L_089485E4;
L_089485E4:;
    a1 = LD32(s2+256);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_089486BC; }
    goto L_089485F0;
L_089485F0:;
    v0 = LD32(s2+160);
    cnd_ = v0 == 0;
    s3 = 0x10000u;
    if (cnd_) { goto L_089486BC; }
    goto L_089485FC;
L_089485FC:;
    v0 = LD32(s2+84);
    s3 = s3 | 0x869e;
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08948634; }
    goto L_08948610;
L_08948610:;
    a0 = a2 - 21864;
    a2 = 1;
    v0 = func_08ABE694(a0, a1, a2);
    goto L_0894861C;
L_0894861C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+80, 0); goto L_0894865C; }
    goto L_08948624;
L_08948624:;
    v0 = LD32(v0+84);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s1+80, 0); goto L_0894865C; }
    goto L_08948634;
L_08948634:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_0894863C;
L_0894863C:;
    a0 = v0 + 0;
    v0 = func_0895990C(a0);
    goto L_08948644;
L_08948644:;
    a1 = LD32(s2+160);
    goto L_08948648;
L_08948648:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948658;
L_08948658:;
    ST8(s1+80, 0);
    goto L_0894865C;
L_0894865C:;
    ST32(s1+40, s0);
    goto L_08948660;
L_08948660:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948668;
L_08948668:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08957648(a0, a1);
    goto L_08948674;
L_08948674:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_0894867C;
L_0894867C:;
    v1 = LD32(v0+48);
    cnd_ = s2 == 0;
    ST32(v1+256, s0);
    if (cnd_) { goto L_089486A0; }
    goto L_08948688;
L_08948688:;
    a0 = s2 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08948690;
L_08948690:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089486A4; }
    goto L_08948698;
L_08948698:;
    v0 = 1;
    ST8(s1+72, v0);
    goto L_089486A0;
L_089486A0:;
    goto L_089486A4;
L_089486A4:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_089486BC:;
    cnd_ = s2 == 0;
    if (cnd_) { ST8(s1+80, 0); goto L_0894865C; }
    goto L_089486C4;
L_089486C4:;
    v0 = LD32(s2+156);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+80, 0); goto L_0894865C; }
    goto L_089486D0;
L_089486D0:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_089486D8;
L_089486D8:;
    a0 = v0 + 0;
    v0 = func_0895990C(a0);
    goto L_089486E0;
L_089486E0:;
    a1 = LD32(s2+156);
    goto L_08948648;
L_089486E8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089485C0; }
    goto L_089486F4;
L_089486F4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089485C4; }
    goto L_08948700;
L_08948700:;
    v0 = LD32(s1+40);
    goto L_089485D4;
}

/* 08948708 */
rv_t func_08948708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08948708:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    t0 = a0 + 0;
    if (cnd_) { goto L_08948730; }
    goto L_08948720;
L_08948720:;
    v0 = 0 + 0;
    goto L_08948724;
L_08948724:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08948730:;
    a1 = LD32(a1+24);
    v1 = 0xcad60000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0xd076;
    if (cnd_) { goto L_08948720; }
    goto L_08948740;
L_08948740:;
    v0 = LD32(a1+4);
    a3 = 0xcad60000u;
    a1 = 1;
    a2 = 0 + 0;
    cnd_ = v0 == v1;
    a3 = a3 | 0xd077;
    if (cnd_) { goto L_0894876C; }
    goto L_08948758;
L_08948758:;
    v1 = 0xcad60000u;
    cnd_ = v0 == a3;
    v1 = v1 | 0xd078;
    if (cnd_) { goto L_0894876C; }
    goto L_08948764;
L_08948764:;
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_08948724; }
    goto L_0894876C;
L_0894876C:;
    v1 = LD32(t0+28);
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = 0 + 0; goto L_08948724; }
    goto L_0894877C;
L_0894877C:;
    { rv_t r_ = func_08949450(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948784;
L_08948784:;
    v0 = 1;
    goto L_08948724;
}

/* 0894878C */
rv_t func_0894878C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894878C:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089487A8;
L_089487A8:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08949448(a0);
    goto L_089487B4;
L_089487B4:;
    a1 = v0 + 0;
    v1 = D_08AEDAD8 - (-9512);
    v0 = D_08AEDAD4 - (-9516);
    f12 = BITSF(LD32(v0-9516));
    f13 = BITSF(LD32(v1-9512));
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08965E64(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089487D4;
L_089487D4:;
    ST32(s1+84, s0);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08948878; }
    goto L_089487E0;
L_089487E0:;
    v0 = LD32(s1+24);
    a0 = D_08C2B0A8 - (-20312);
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08948874; }
    goto L_089487F8;
L_089487F8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08948848; }
    goto L_0894881C;
L_0894881C:;
    a0 = LD32(a1);
    goto L_08948820;
L_08948820:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089488A4; }
    goto L_08948838;
L_08948838:;
    a1 = LD32(a1+4);
    goto L_0894883C;
L_0894883C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08948820; }
    goto L_08948844;
L_08948844:;
    a0 = 0 + 0;
    goto L_08948848;
L_08948848:;
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08948878; }
    goto L_08948850;
L_08948850:;
    ST32(sp, 0);
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_08948858;
L_08948858:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894886C;
L_0894886C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+84); goto L_0894888C; }
    goto L_08948874;
L_08948874:;
    v0 = 1;
    goto L_08948878;
L_08948878:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894888C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(sp);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894889C;
L_0894889C:;
    v0 = 1;
    goto L_08948878;
L_089488A4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894883C; }
    goto L_089488B0;
L_089488B0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894883C; }
    goto L_089488BC;
L_089488BC:;
    goto L_08948848;
}

/* 089488C4 */
rv_t func_089488C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089488C4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+84);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08948980; }
    goto L_089488E0;
L_089488E0:;
    v1 = LD32(s0+28);
    goto L_089488E4;
L_089488E4:;
    v0 = 3;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 0x8033;
    cnd_ = v1 == v0;
    ST32(s0+84, 0);
    if (cnd_) { goto L_08948934; }
    goto L_08948900;
L_08948900:;
    a0 = s0 + 0;
    v0 = func_08949448(a0);
    goto L_08948908;
L_08948908:;
    a0 = v0 + 0;
    func_08957738(a0);
    goto L_08948910;
L_08948910:;
    a0 = s0 + 0;
    v0 = func_08949448(a0);
    goto L_08948918;
L_08948918:;
    v1 = LD32(v0+48);
    v0 = 999;
    ST32(v1+256, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08948934:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894893C;
L_0894893C:;
    t0 = v0 + 0;
    a1 = 1;
    a2 = 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08948968; }
    goto L_08948950;
L_08948950:;
    v0 = LD32(s0+24);
    v1 = 2;
    a3 = LD32(v0+4);
    ST32(t0, v1);
    ST32(t0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948968;
L_08948968:;
    a0 = s0 + 0;
    v0 = func_08949448(a0);
    goto L_08948970;
L_08948970:;
    a0 = v0 + 0;
    { rv_t r_ = func_08959894(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948978;
L_08948978:;
    goto L_08948900;
L_08948980:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948990;
L_08948990:;
    v1 = LD32(s0+28);
    goto L_089488E4;
}

/* 08948998 */
rv_t func_08948998(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08948998:;
    sp = sp - 64;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v1 = (v0 >> 3) & 0x1;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_089489CC; }
    goto L_089489C4;
L_089489C4:;
    cnd_ = v1 == 0;
    s1 = a0 + 48;
    if (cnd_) { goto L_089489E4; }
    goto L_089489CC;
L_089489CC:;
    goto L_089489D0;
L_089489D0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089489E4:;
    v0 = func_08949448(a0);
    goto L_089489EC;
L_089489EC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948A0C;
L_08948A0C:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = s0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08949448(a0);
    goto L_08948A2C;
L_08948A2C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948A4C;
L_08948A4C:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+48));
    f1 = BITSF(LD32(s1+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a3 = LD_U8(s0+44);
    a0 = LD32(s0+84);
    f12 = f20;
    a2 = sp + 16;
    a1 = sp + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = func_08965A70(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948A94;
L_08948A94:;
    goto L_089489D0;
}

/* 08948A9C */
rv_t func_08948A9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_08948A9C:;
    sp = sp - 288;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08948E28; }
    goto L_08948ACC;
L_08948ACC:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08948E2C; }
    goto L_08948AD8;
L_08948AD8:;
    f0 = BITSF(LD32(a0+32));
    f1 = BITSF(LD32(a0+76));
    a1 = LD32(a0+40);
    f0 = f0 + f12;
    f1 = f1 - f12;
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    ST32(s1+32, FBITS(f0));
    v1 = a0 - 19800;
    s2 = 0 + 0;
    cnd_ = a1 == v0;
    ST32(s1+76, FBITS(f1));
    if (cnd_) { goto L_08948B58; }
    goto L_08948B08;
L_08948B08:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_08948B5C; }
    goto L_08948B2C;
L_08948B2C:;
    a0 = LD32(a2);
    goto L_08948B30;
L_08948B30:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089493A8; }
    goto L_08948B48;
L_08948B48:;
    a2 = LD32(a2+4);
    goto L_08948B4C;
L_08948B4C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08948B30; }
    goto L_08948B54;
L_08948B54:;
    s2 = 0 + 0;
    goto L_08948B58;
L_08948B58:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_08948B5C;
L_08948B5C:;
    a0 = a0 - 20312;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08948B68;
L_08948B68:;
    cnd_ = s2 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0894939C; }
    goto L_08948B70;
L_08948B70:;
    v1 = LD32(s2);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_089493A0; }
    goto L_08948B94;
L_08948B94:;
    cnd_ = s0 == 0;
    a1 = 4;
    if (cnd_) { goto L_0894938C; }
    goto L_08948B9C;
L_08948B9C:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948BA4;
L_08948BA4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948BC4;
L_08948BC4:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    s3 = v0 + 0;
    f0 = func_089496E8(a0, a1, a2);
    goto L_08948BD8;
L_08948BD8:;
    v1 = LD32(s1+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08949384; }
    goto L_08948BE8;
L_08948BE8:;
    v1 = D_08ADA3CC - (-23604);
    v1 = v1 - 23604;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08948C00u: goto L_08948C00; case 0x08948E28u: goto L_08948E28; case 0x089491C4u: goto L_089491C4; case 0x08949384u: goto L_08949384; default: rs_break(0, 0x08948bf8); }
L_08948C00:;
    v0 = LD_U8(s1+44);
    cnd_ = v0 == 0;
    s4 = s1 + 48;
    if (cnd_) { goto L_089491A0; }
    goto L_08948C0C;
L_08948C0C:;
    f5 = BITSF(LD32(s3));
    f4 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s4));
    f1 = BITSF(LD32(s4+4));
    f0 = BITSF(LD32(s4+8));
    f2 = f2 - f5;
    f1 = f1 - f4;
    f0 = f0 - f3;
    a1 = s2 + 0;
    a0 = s1 + 0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    f0 = func_08949834(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08948C48;
L_08948C48:;
    a0 = s1 + 0;
    f20 = f0;
    v0 = func_08949448(a0);
    goto L_08948C54;
L_08948C54:;
    a0 = LD32(v0+48);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    v1 = LD32(a0+204);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08948D40; }
    goto L_08948C6C;
L_08948C6C:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948C74;
L_08948C74:;
    a0 = v0 + 0;
    a1 = s1 + 36;
    v0 = func_08959914(a0, a1, 0, 0, 0);
    goto L_08948C80;
L_08948C80:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08948D40; }
    goto L_08948C88;
L_08948C88:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948C90;
L_08948C90:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    f0 = func_08959B7C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08948C9C;
L_08948C9C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948CB0;
L_08948CB0:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    {u32 a_=sp+(64);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[12]=BITSF(v1);}
    f1 = BITSF(0);
    {v[13]=BITSF(v0);}
    v1 = FBITS(f5);
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08948D34; }
    goto L_08948CFC;
L_08948CFC:;
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
    goto L_08948D34;
L_08948D34:;
    a0 = sp + 16;
    a1 = sp + 0;
    func_08959CC8(a0, a1);
    goto L_08948D40;
L_08948D40:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948D48;
L_08948D48:;
    a0 = v0 + 0;
    a1 = sp + 0;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = func_08959780(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948D5C;
L_08948D5C:;
    a0 = s2 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08948D64;
L_08948D64:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08949058; }
    goto L_08948D6C;
L_08948D6C:;
    f3 = BITSF(LD32(s3));
    f0 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s4+8));
    f5 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s4));
    f1 = BITSF(LD32(s4+4));
    f4 = f4 - f5;
    f2 = f2 - f3;
    f1 = f1 - f0;
    ST32(sp+40, FBITS(f4));
    v0 = FBITS(f2);
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    v0 = D_08AEDADC - (-9508);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f0 = BITSF(LD32(v0-9508));
    {v1=FBITS(v[0]);}
    f3 = BITSF(v1);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f3, f0, 12);
    ST32(sp+36, FBITS(f1));
    goto L_08948DCC;
L_08948DCC:;
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s1+72); goto L_08948DE8; }
    goto L_08948DD4;
L_08948DD4:;
    a2 = s2 + 0;
    a0 = s1 + 0;
    a1 = 2;
    { rv_t r_ = func_08949450(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948DE4;
L_08948DE4:;
    v0 = LD_U8(s1+72);
    goto L_08948DE8;
L_08948DE8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+84); goto L_08948E0C; }
    goto L_08948DF0;
L_08948DF0:;
    f0 = BITSF(LD32(s1+76));
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08948E80; }
    goto L_08948E08;
L_08948E08:;
    v1 = LD32(s1+84);
    goto L_08948E0C;
L_08948E0C:;
    v0 = LD32(v1+8);
    v0 = v0 ^ 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08948E2C; }
    goto L_08948E1C;
L_08948E1C:;
    v0 = LD_U8(s1+80);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08948E4C; }
    goto L_08948E28;
L_08948E28:;
    goto L_08948E2C;
L_08948E2C:;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08948E4C:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948E54;
L_08948E54:;
    a0 = v0 + 0;
    v0 = func_0895990C(a0);
    goto L_08948E5C;
L_08948E5C:;
    a1 = 0x34690000u;
    a0 = v0 + 0;
    a1 = a1 | 0x94e9;
    a2 = 1;
    a3 = 1;
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948E74;
L_08948E74:;
    v0 = 1;
    ST8(s1+80, v0);
    goto L_08948E28;
L_08948E80:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08948E88;
L_08948E88:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    s0 = s1 + 48;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948EA8;
L_08948EA8:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = s1 + 0;
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v0 = func_08949448(a0);
    goto L_08948EC8;
L_08948EC8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08948EE8;
L_08948EE8:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s1+48));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f0;
    f3 = f3 - f1;
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+40, FBITS(f4));
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+36, FBITS(f3));
    if (cnd_) { goto L_08948F84; }
    goto L_08948F4C;
L_08948F4C:;
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
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_08948F84;
L_08948F84:;
    a1 = D_08C26BF0 - (27632);
    v0 = (u32)(s32)LD_S8(a1+27632);
    cnd_ = v0 != 0;
    a0 = D_08C26BF8 - (27640);
    if (cnd_) { goto L_08948FD8; }
    goto L_08948F94;
L_08948F94:;
    v0 = D_08AEDAE8 - (-9496);
    v1 = D_08AEDAEC - (-9492);
    f0 = BITSF(LD32(v0-9496));
    f1 = BITSF(LD32(v1-9492));
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = 1;
    f0 = f0 * f1;
    ST8(a1+27632, v0);
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(a0+27640, v0);
    goto L_08948FD8;
L_08948FD8:;
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    f2 = BITSF(LD32(a0+27640));
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+56);
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
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1+84); goto L_08948E0C; }
    goto L_08949030;
L_08949030:;
    v0 = LD32(s1+24);
    a0 = 1;
    a1 = LD32(v0+4);
    v0 = D_08AEDAF0 - (-9488);
    f12 = BITSF(LD32(v0-9488));
    { rv_t r_ = func_08A24358(a0, a1, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949048;
L_08949048:;
    v0 = D_08B1B754 - (-18604);
    f0 = BITSF(LD32(v0-18604));
    ST32(s1+76, FBITS(f0));
    goto L_08948E08;
L_08949058:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949074;
L_08949074:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+32));
    a0 = s1 + 0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    v0 = func_08949448(a0);
    goto L_08949094;
L_08949094:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089490B4;
L_089490B4:;
    f5 = BITSF(LD32(v0+32));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+20));
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    v0 = FBITS(f4);
    {v[4]=BITSF(v1);}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(v0);}
    v1 = FBITS(f5);
    v0 = LD32(sp+32);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+36);
    v0 = LD32(sp+40);
    {v[1]=BITSF(v1);}
    f1 = BITSF(0);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    v0 = 1;
    fcc = FCMP(f0, f1, 12);
    ST32(sp+20, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08949124; }
    goto L_08949120;
L_08949120:;
    v0 = 0 + 0;
    goto L_08949124;
L_08949124:;
    f2 = BITSF(LD32(s4+8));
    f5 = BITSF(LD32(s3+8));
    f0 = BITSF(LD32(s4));
    f3 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s3+4));
    f0 = f0 - f3;
    f2 = f2 - f5;
    f1 = f1 - f4;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    ST32(sp+48, FBITS(f0));
    {v[0]=BITSF(v1);}
    v1 = FBITS(f1);
    ST32(sp+52, FBITS(f1));
    {v[1]=BITSF(v1);}
    v1 = FBITS(f2);
    ST32(sp+56, FBITS(f2));
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    cnd_ = v0 == 0;
    v0 = D_08AEDAE4 - (-9500);
    if (cnd_) { goto L_08949198; }
    goto L_08949184;
L_08949184:;
    v0 = D_08AEDAE0 - (-9504);
    f0 = BITSF(LD32(v0-9504));
    goto L_0894918C;
L_0894918C:;
    fcc = FCMP(f1, f0, 12);
    goto L_08948DCC;
L_08949198:;
    f0 = BITSF(LD32(v0-9500));
    goto L_0894918C;
L_089491A0:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089491BC;
L_089491BC:;
    s4 = v0 + 0;
    goto L_08948C0C;
L_089491C4:;
    v0 = s1 + 60;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+60));
    f1 = BITSF(LD32(v0+4));
    a0 = s1 + 0;
    ST32(sp+48, FBITS(f0));
    s4 = sp + 48;
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v0 = func_08949448(a0);
    goto L_089491EC;
L_089491EC:;
    a0 = s1 + 0;
    f20 = BITSF(LD32(v0+124));
    v0 = func_08949448(a0);
    goto L_089491F8;
L_089491F8:;
    a0 = LD32(v0+48);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    v1 = LD32(a0+204);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089492E4; }
    goto L_08949210;
L_08949210:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08949218;
L_08949218:;
    a0 = v0 + 0;
    a1 = s1 + 36;
    v0 = func_08959914(a0, a1, 0, 0, 0);
    goto L_08949224;
L_08949224:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089492E4; }
    goto L_0894922C;
L_0894922C:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_08949234;
L_08949234:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    f0 = func_08959B7C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08949240;
L_08949240:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949254;
L_08949254:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    {u32 a_=sp+(208);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[12]=BITSF(v1);}
    f1 = BITSF(0);
    {v[13]=BITSF(v0);}
    v1 = FBITS(f5);
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+36, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_089492D8; }
    goto L_089492A0;
L_089492A0:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    goto L_089492D8;
L_089492D8:;
    a0 = sp + 32;
    a1 = s4 + 0;
    func_08959CC8(a0, a1);
    goto L_089492E4;
L_089492E4:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_089492EC;
L_089492EC:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = func_08959780(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949300;
L_08949300:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894931C;
L_0894931C:;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s3));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s3+4));
    f5 = BITSF(LD32(s3+8));
    f2 = f2 - f3;
    f1 = f1 - f0;
    f4 = f4 - f5;
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    v0 = D_08AEDADC - (-9508);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f0 = BITSF(LD32(v0-9508));
    {v1=FBITS(v[0]);}
    f3 = BITSF(v1);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f0, f3, 12);
    ST32(sp+36, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_08948E28; }
    goto L_08949384;
L_08949384:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_0894938C;
L_0894938C:;
    a2 = 0 + 0;
    { rv_t r_ = func_08949450(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949394;
L_08949394:;
    goto L_08948E2C;
L_0894939C:;
    a0 = s1 + 0;
    goto L_089493A0;
L_089493A0:;
    a1 = 4;
    goto L_0894938C;
L_089493A8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08948B4C; }
    goto L_089493B4;
L_089493B4:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08948B48; }
    goto L_089493C0;
L_089493C0:;
    a0 = D_08C2B0A8 - (-20312);
    goto L_08948B5C;
}

/* 089493C8 */
rv_t func_089493C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089493C8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08949448(a0);
    goto L_089493DC;
L_089493DC:;
    v1 = D_08B1B618 - (-18920);
    a1 = LD32(s0+28);
    v1 = v1 - 18920;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDAF4 - (-9484);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9484));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949418;
L_08949418:;
    a0 = s0 + 0;
    v0 = func_08949448(a0);
    goto L_08949420;
L_08949420:;
    v0 = v0 + 64;
    v1 = D_08AEDAF8 - (-9480);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9480));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08949448 */
u32 func_08949448(u32 a0)
{
    u32 v0 = 0;
L_08949448:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08949450 */
rv_t func_08949450(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08949450:;
    sp = sp - 112;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089494A8; }
    goto L_0894947C;
L_0894947C:;
    v0 = v1 << 2;
    v1 = D_08ADA420 - (-23520);
    v1 = v1 - 23520;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08949498u: goto L_08949498; case 0x089494A8u: goto L_089494A8; default: rs_break(0, 0x08949490); }
L_08949498:;
    a0 = s1 + 0;
    v0 = func_08949448(a0);
    goto L_089494A0;
L_089494A0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08959894(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089494A8;
L_089494A8:;
    v0 = s0 < 0x6u;
    ST32(s1+28, s0);
    cnd_ = v0 == 0;
    ST32(s1+32, 0);
    if (cnd_) { goto L_089495E8; }
    goto L_089494B8;
L_089494B8:;
    v1 = D_08ADA438 - (-23496);
    v0 = s0 << 2;
    v1 = v1 - 23496;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089494D4u: goto L_089494D4; case 0x089495E8u: goto L_089495E8; case 0x08949600u: goto L_08949600; case 0x089496D8u: goto L_089496D8; default: rs_break(0, 0x089494cc); }
L_089494D4:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    s0 = s1 + 60;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089494E8;
L_089494E8:;
    v1 = D_08AEDAFC - (-9476);
    f5 = BITSF(0);
    f0 = BITSF(LD32(v1-9476));
    a0 = 0 + 0;
    ST32(sp+16, FBITS(f5));
    v1 = 0xbf800000u;
    {u32 a_=sp+(64);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f0));
    {v[8]=BITSF(a0);}
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f5));
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(a0);}
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[5]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+32, FBITS(f3));
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+36, FBITS(f2));
    fcc = FCMP(f0, f5, 2);
    ST32(sp+40, FBITS(f4));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f4));
    ST32(s1+60, FBITS(f3));
    ST32(s0+4, FBITS(f2));
    cnd_ = fcc;
    ST32(s0+8, FBITS(f4));
    if (cnd_) { goto L_089495E8; }
    goto L_089495AC;
L_089495AC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(s0+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(s1+60, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    ST32(s0+4, v0);
    goto L_089495E8;
L_089495E8:;
    goto L_089495EC;
L_089495EC:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08949600:;
    a0 = 0x8032;
    a1 = 12;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08949614;
L_08949614:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_089495E8; }
    goto L_0894961C;
L_0894961C:;
    t0 = LD32(v0+24);
    a1 = D_08B25AC0 - (23232);
    a3 = a1 + 23232;
    v0 = LD32(t0);
    v1 = LD32(t0+8);
    a2 = 3;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(t0+8, v1);
    ST32(t0, v0);
    v0 = LD32(a1+23232);
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a1+23232, v0);
    v1 = 1;
    v0 = 0xcad60000u;
    ST32(a3+4, a0);
    a2 = hi;
    cnd_ = a2 == v1;
    v0 = v0 | 0xd077;
    if (cnd_) { goto L_089496A0; }
    goto L_08949684;
L_08949684:;
    v0 = (s32)a2 < 2;
    cnd_ = v0 != 0;
    v0 = 0xcad60000u;
    if (cnd_) { goto L_0894969C; }
    goto L_08949690;
L_08949690:;
    v0 = 2;
    cnd_ = a2 == v0;
    v0 = 0xcad60000u;
    if (cnd_) { goto L_089496D0; }
    goto L_0894969C;
L_0894969C:;
    v0 = v0 | 0xd076;
    goto L_089496A0;
L_089496A0:;
    ST32(t0+4, v0);
    v1 = 2;
    a0 = t1 + 0;
    v0 = LD32(s1+24);
    a1 = 1;
    a2 = 1;
    a3 = LD32(v0+4);
    ST32(t1, v1);
    ST32(t1+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089496C8;
L_089496C8:;
    goto L_089495EC;
L_089496D0:;
    v0 = v0 | 0xd078;
    goto L_089496A0;
L_089496D8:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x8;
    ST32(s1+8, v0);
    goto L_089495E8;
}

/* 089496E8 */
float func_089496E8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089496E8:;
    sp = sp - 48;
    s4 = a0 + 0;
    s3 = a1 + 0;
    s2 = s4 + 48;
    s0 = a2 + 0;
    v0 = func_08949448(a0);
    goto L_08949718;
L_08949718:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949738;
L_08949738:;
    s1 = v0 + 0;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949758;
L_08949758:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f0 = f0 - f4;
    f1 = f1 - f2;
    f5 = f5 - f3;
    v1 = LD32(s0);
    v0 = D_08B1B740 - (-18624);
    f12 = BITSF(LD32(v0-18624));
    ST32(sp, FBITS(f0));
    a0 = s0 + 0;
    a1 = sp + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f5));
    v0 = LD32(v1+104);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089497A8;
L_089497A8:;
    cnd_ = v0 == 0;
    ST8(s4+44, v0);
    if (cnd_) { goto L_08949800; }
    goto L_089497B0;
L_089497B0:;
    f5 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s4+48));
    f4 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2+4));
    f3 = BITSF(LD32(s1+4));
    f1 = f1 + f4;
    f0 = f0 + f5;
    f2 = f2 + f3;
    ST32(s4+48, FBITS(f1));
    ST32(s2+8, FBITS(f0));
    goto L_089497DC;
L_089497DC:;
    ST32(s2+4, FBITS(f2));
    sp = sp + 48;
    return f0;
L_08949800:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894981C;
L_0894981C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s2+8, FBITS(f0));
    ST32(s4+48, FBITS(f1));
    goto L_089497DC;
}

/* 08949834 */
float func_08949834(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_08949834:;
    sp = sp - 80;
    s2 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = a1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949870;
L_08949870:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08949448(a0);
    goto L_0894987C;
L_0894987C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894989C;
L_0894989C:;
    f1 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f0 = f0 - f1;
    f3 = f3 - f2;
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(s1);
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+4, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f20 = BITSF(v0);
    v0 = D_08AEDB00 - (-9472);
    f0 = BITSF(LD32(v0-9472));
    v0 = D_08AEDB04 - (-9468);
    ST32(sp+8, FBITS(f4));
    f20 = f20 - f0;
    f0 = BITSF(LD32(v0-9468));
    v0 = LD32(v1+40);
    t_ = v0;
    f20 = f20 * f0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949920;
L_08949920:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    a0 = s2 + 0;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f21 = BITSF(v0);
    v0 = func_08949448(a0);
    goto L_08949958;
L_08949958:;
    f1 = BITSF(LD32(v0+124));
    f0 = BITSF(LD32(v0+120));
    f20 = f20 * f1;
    f21 = f21 + f20;
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08949990; }
    goto L_08949978;
L_08949978:;
    fcc = FCMP(f1, f21, 12);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_08949990; }
    goto L_08949988;
L_08949988:;
    f0 = f21;
    goto L_08949990;
L_08949990:;
    sp = sp + 80;
    { v[0]=vr0;return f0; }
    v[0]=vr0;
}

/* 089499AC */
rv_t func_089499AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089499AC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26B40 - (27456);
    t1 = D_08C26B50 - (27472);
    t2 = D_08C26B60 - (27488);
    a1 = a1 & a0;
    v1 = t0 + 27456;
    a2 = t1 + 27472;
    cnd_ = a1 == 0;
    a3 = t2 + 27488;
    if (cnd_) { goto L_08949A64; }
    goto L_089499DC;
L_089499DC:;
    v0 = D_08AEDB08 - (-9464);
    f4 = BITSF(LD32(v0-9464));
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
    ST32(t0+27456, FBITS(f2));
    ST32(t1+27472, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+27488, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08949A64;
L_08949A64:;
    return (rv_t){ v0, v1, f0 };
}

/* 08949A6C */
rv_t func_08949A6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08949A6C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089499AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949A80;
L_08949A80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08949A8C */
u64 func_08949A8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08949A8C:;
    sp = sp - 16;
    a2 = 1107;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08949AA4;
L_08949AA4:;
    v0 = D_08AF8CF0 - (-29456);
    v0 = v0 - 29456;
    ST32(s0, v0);
    v1 = 999;
    v0 = 1;
    ST32(s0+32, v1);
    ST8(s0+40, v0);
    ST32(s0+44, 0);
    ST32(s0+28, 0);
    ST32(s0+36, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08949ADC */
void func_08949ADC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08949ADC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08949AF0;
L_08949AF0:;
    v0 = D_08AF8CF0 - (-29456);
    v0 = v0 - 29456;
    ST32(s0, v0);
    v1 = 999;
    v0 = 1;
    ST32(s0+32, v1);
    ST8(s0+40, v0);
    ST32(s0+44, 0);
    ST32(s0+28, 0);
    ST32(s0+36, 0);
    sp = sp + 16;
    return;
}

/* 08949B28 */
rv_t func_08949B28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08949B28:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949B44;
L_08949B44:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0894A06C(a0);
    goto L_08949B50;
L_08949B50:;
    a1 = v0 + 0;
    v1 = D_08AEDB10 - (-9456);
    v0 = D_08AEDB0C - (-9460);
    f12 = BITSF(LD32(v0-9460));
    f13 = BITSF(LD32(v1-9456));
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08965E64(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949B70;
L_08949B70:;
    ST32(s1+36, s0);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08949C14; }
    goto L_08949B7C;
L_08949B7C:;
    v0 = LD32(s1+24);
    a0 = D_08C2B0A8 - (-20312);
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08949C10; }
    goto L_08949B94;
L_08949B94:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08949BE4; }
    goto L_08949BB8;
L_08949BB8:;
    a0 = LD32(a1);
    goto L_08949BBC;
L_08949BBC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08949C40; }
    goto L_08949BD4;
L_08949BD4:;
    a1 = LD32(a1+4);
    goto L_08949BD8;
L_08949BD8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08949BBC; }
    goto L_08949BE0;
L_08949BE0:;
    a0 = 0 + 0;
    goto L_08949BE4;
L_08949BE4:;
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08949C14; }
    goto L_08949BEC;
L_08949BEC:;
    ST32(sp, 0);
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_08949BF4;
L_08949BF4:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08949C08;
L_08949C08:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+36); goto L_08949C28; }
    goto L_08949C10;
L_08949C10:;
    v0 = 1;
    goto L_08949C14;
L_08949C14:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08949C28:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(sp);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949C38;
L_08949C38:;
    v0 = 1;
    goto L_08949C14;
L_08949C40:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08949BD8; }
    goto L_08949C4C;
L_08949C4C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08949BD8; }
    goto L_08949C58;
L_08949C58:;
    goto L_08949BE4;
}

/* 08949C60 */
rv_t func_08949C60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08949C60:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08949CB4; }
    goto L_08949C80;
L_08949C80:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08949C88;
L_08949C88:;
    a0 = s0 + 0;
    v0 = func_0894A06C(a0);
    goto L_08949C90;
L_08949C90:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949CA4;
L_08949CA4:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08949C80; }
    goto L_08949CB4;
L_08949CB4:;
    a0 = 0x804f;
    a1 = 16;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08949CC8;
L_08949CC8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08949D24; }
    goto L_08949CD0;
L_08949CD0:;
    v0 = D_08B45A9C - (23196);
    a2 = LD32(s1+24);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    a1 = a2 + 4;
    v0 = 2;
    ST32(a2+4, FBITS(f0));
    a0 = s0 + 0;
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    ST8(a2, 0);
    ST32(s1, v0);
    v0 = func_0894A06C(a0);
    goto L_08949D0C;
L_08949D0C:;
    v1 = LD32(v0+4);
    a0 = s1 + 0;
    a1 = 1;
    ST32(s1+4, v1);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949D24;
L_08949D24:;
    a0 = LD32(s0+36);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08949D48; }
    goto L_08949D30;
L_08949D30:;
    ST32(s0+36, 0);
    goto L_08949D34;
L_08949D34:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08949D48:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949D54;
L_08949D54:;
    ST32(s0+36, 0);
    goto L_08949D34;
}

/* 08949D5C */
rv_t func_08949D5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08949D5C:;
    sp = sp - 64;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08949E9C; }
    goto L_08949D88;
L_08949D88:;
    a0 = LD32(a0+32);
    a1 = D_08C2A204 - (-24060);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 24060;
    if (cnd_) { goto L_08949EB8; }
    goto L_08949D9C;
L_08949D9C:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24060);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08949DE0; }
    goto L_08949DC0;
L_08949DC0:;
    s0 = LD32(v1);
    goto L_08949DC4;
L_08949DC4:;
    v0 = LD32(s0+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08949ED4; }
    goto L_08949DD0;
L_08949DD0:;
    v1 = LD32(v1+4);
    goto L_08949DD4;
L_08949DD4:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08949DC4; }
    goto L_08949DDC;
L_08949DDC:;
    s2 = 0 + 0;
    goto L_08949DE0;
L_08949DE0:;
    cnd_ = s2 == 0;
    a1 = D_08B45A9C - (23196);
    if (cnd_) { goto L_08949EBC; }
    goto L_08949DE8;
L_08949DE8:;
    a0 = s1 + 0;
    v0 = func_0894A06C(a0);
    goto L_08949DF0;
L_08949DF0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    s0 = s2 + 64;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949E10;
L_08949E10:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = s1 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_0894A06C(a0);
    goto L_08949E30;
L_08949E30:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949E50;
L_08949E50:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s2+64));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(v0+4));
    f3 = f3 - f1;
    f4 = f4 - f5;
    f0 = f0 - f2;
    a0 = LD32(s1+36);
    f12 = f20;
    a2 = sp + 16;
    a1 = sp + 0;
    a3 = 1;
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f4));
    goto L_08949E94;
L_08949E94:;
    { rv_t r_ = func_08965A70(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949E9C;
L_08949E9C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08949EB8:;
    a1 = D_08B45A9C - (23196);
    goto L_08949EBC;
L_08949EBC:;
    a0 = LD32(s1+36);
    a1 = a1 + 23196;
    f12 = f20;
    a2 = a1 + 0;
    a3 = 0 + 0;
    goto L_08949E94;
L_08949ED4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = s0 + 0;
    if (cnd_) { goto L_08949DD0; }
    goto L_08949EE0;
L_08949EE0:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08949DD4; }
    goto L_08949EEC;
L_08949EEC:;
    goto L_08949DE0;
}

/* 08949EF4 */
rv_t func_08949EF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08949EF4:;
    sp = sp - 16;
    a1 = LD32(a0+8);
    v0 = (a1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08949F38; }
    goto L_08949F10;
L_08949F10:;
    v1 = LD32(a0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08949F70; }
    goto L_08949F20;
L_08949F20:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08949F48; }
    goto L_08949F28;
L_08949F28:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08949F3C; }
    goto L_08949F30;
L_08949F30:;
    v0 = a1 | 0x10;
    goto L_08949F34;
L_08949F34:;
    ST32(s0+8, v0);
    goto L_08949F38;
L_08949F38:;
    goto L_08949F3C;
L_08949F3C:;
    goto L_08949F40;
L_08949F40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08949F48:;
    cnd_ = v1 != 0;
    v0 = a1 | 0x10;
    if (cnd_) { goto L_08949F34; }
    goto L_08949F50;
L_08949F50:;
    v1 = LD32(a0+32);
    v0 = 999;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08949F38; }
    goto L_08949F60;
L_08949F60:;
    { rv_t r_ = func_0894A074(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949F68;
L_08949F68:;
    goto L_08949F3C;
L_08949F70:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = a1 | 0x10; goto L_08949F90; }
    goto L_08949F7C;
L_08949F7C:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_08949F9C; }
    goto L_08949F8C;
L_08949F8C:;
    v0 = a1 | 0x10;
    goto L_08949F90;
L_08949F90:;
    ST32(s0+8, v0);
    a1 = 2;
    goto L_08949F60;
L_08949F9C:;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08949F60; }
    goto L_08949FA4;
L_08949FA4:;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08949F3C; }
    goto L_08949FB0;
L_08949FB0:;
    v0 = LD32(a0+44);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08949F40; }
    goto L_08949FBC;
L_08949FBC:;
    v0 = LD32(v0+28);
    v0 = v0 ^ 0x3;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08949F40; }
    goto L_08949FCC;
L_08949FCC:;
    v0 = LD32(a0+24);
    a0 = 1;
    a1 = LD32(v0+4);
    v0 = D_08AEDB14 - (-9452);
    f12 = BITSF(LD32(v0-9452));
    { rv_t r_ = func_08A24358(a0, a1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08949FE4;
L_08949FE4:;
    ST8(s0+40, 0);
    goto L_08949F38;
}

/* 08949FEC */
rv_t func_08949FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08949FEC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894A06C(a0);
    goto L_0894A000;
L_0894A000:;
    v1 = D_08B1B62C - (-18900);
    a1 = LD32(s0+28);
    v1 = v1 - 18900;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDB18 - (-9448);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9448));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A03C;
L_0894A03C:;
    a0 = s0 + 0;
    v0 = func_0894A06C(a0);
    goto L_0894A044;
L_0894A044:;
    v0 = v0 + 64;
    v1 = D_08AEDB1C - (-9444);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9444));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A06C */
u32 func_0894A06C(u32 a0)
{
    u32 v0 = 0;
L_0894A06C:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894A074 */
rv_t func_0894A074(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0894A074:;
    sp = sp - 48;
    v0 = 1;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894A1D0; }
    goto L_0894A0A0;
L_0894A0A0:;
    v0 = 1;
    goto L_0894A0A4;
L_0894A0A4:;
    cnd_ = s1 == v0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_0894A0EC; }
    goto L_0894A0AC;
L_0894A0AC:;
    v0 = (s32)s1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0894A0C8; }
    goto L_0894A0B8;
L_0894A0B8:;
    v0 = 2;
    cnd_ = s1 == v0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0894A0E0; }
    goto L_0894A0C4;
L_0894A0C4:;
    goto L_0894A0C8;
L_0894A0C8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0894A0E0:;
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_0894A0C4;
L_0894A0EC:;
    a0 = s0 + 0;
    a1 = 1159;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A0FC;
L_0894A0FC:;
    ST32(s0+44, v0);
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    a1 = LD32(s0+32);
    a2 = 1;
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A114;
L_0894A114:;
    a0 = LD32(s0+44);
    v1 = v0 < 0x1u;
    s2 = v0 + 0;
    v0 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0894A144; }
    goto L_0894A130;
L_0894A130:;
    a1 = LD32(s0+32);
    { u64 r_ = func_0894CD30(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A138;
L_0894A138:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0x804f; goto L_0894A160; }
    goto L_0894A140;
L_0894A140:;
    v0 = LD32(s0+8);
    goto L_0894A144;
L_0894A144:;
    a0 = s0 + 0;
    a1 = 2;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    { rv_t r_ = func_0894A074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A158;
L_0894A158:;
    goto L_0894A0C8;
L_0894A160:;
    a1 = 16;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A170;
L_0894A170:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0894A0C4; }
    goto L_0894A178;
L_0894A178:;
    v1 = LD32(v0+24);
    v0 = s2 + 64;
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+64));
    a1 = v1 + 4;
    v0 = 2;
    ST32(v1+4, FBITS(f0));
    a0 = s0 + 0;
    ST32(a1+8, FBITS(f1));
    ST8(v1, s1);
    ST32(a1+4, FBITS(f2));
    ST32(s3, v0);
    v0 = func_0894A06C(a0);
    goto L_0894A1B0;
L_0894A1B0:;
    v1 = LD32(v0+4);
    a0 = s3 + 0;
    a1 = 1;
    ST32(s3+4, v1);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A1C8;
L_0894A1C8:;
    goto L_0894A0C8;
L_0894A1D0:;
    a1 = a0 + 0;
    a2 = 1159;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A1E0;
L_0894A1E0:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0894A0A0; }
    goto L_0894A1E8;
L_0894A1E8:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894A1F4;
L_0894A1F4:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A1FC;
L_0894A1FC:;
    a0 = s0 + 0;
    v0 = func_0894A06C(a0);
    goto L_0894A204;
L_0894A204:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A218;
L_0894A218:;
    v0 = 1;
    goto L_0894A0A4;
}

/* 0894A220 */
rv_t func_0894A220(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894A220:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26C00 - (27648);
    t1 = D_08C26C10 - (27664);
    t2 = D_08C26C20 - (27680);
    a1 = a1 & a0;
    v1 = t0 + 27648;
    a2 = t1 + 27664;
    cnd_ = a1 == 0;
    a3 = t2 + 27680;
    if (cnd_) { goto L_0894A2D8; }
    goto L_0894A250;
L_0894A250:;
    v0 = D_08AEDB20 - (-9440);
    f4 = BITSF(LD32(v0-9440));
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
    ST32(t0+27648, FBITS(f2));
    ST32(t1+27664, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+27680, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894A2D8;
L_0894A2D8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A2E0 */
rv_t func_0894A2E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894A2E0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894A220(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A2F4;
L_0894A2F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A300 */
u64 func_0894A300(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894A300:;
    sp = sp - 16;
    a2 = 1109;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A318;
L_0894A318:;
    v0 = D_08AF8D30 - (-29392);
    v0 = v0 - 29392;
    v1 = 999;
    ST32(s0, v0);
    ST32(s0+32, v1);
    ST8(s0+36, 0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0894A344 */
rv_t func_0894A344(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894A344:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0894A394; }
    goto L_0894A360;
L_0894A360:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894A368;
L_0894A368:;
    a0 = s0 + 0;
    v0 = func_0894A514(a0);
    goto L_0894A370;
L_0894A370:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A384;
L_0894A384:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0894A360; }
    goto L_0894A394;
L_0894A394:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A3A4 */
rv_t func_0894A3A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894A3A4:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894A41C; }
    goto L_0894A3C0;
L_0894A3C0:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0894A420; }
    goto L_0894A3CC;
L_0894A3CC:;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0894A420; }
    goto L_0894A3DC;
L_0894A3DC:;
    v0 = v1 << 2;
    v1 = D_08ADA47C - (-23428);
    v1 = v1 - 23428;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894A3F8u: goto L_0894A3F8; case 0x0894A41Cu: goto L_0894A41C; case 0x0894A434u: goto L_0894A434; case 0x0894A460u: goto L_0894A460; default: rs_break(0, 0x0894a3f0); }
L_0894A3F8:;
    v0 = LD_U8(s0+36);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0894A42C; }
    goto L_0894A408;
L_0894A408:;
    a2 = LD32(s0+32);
    goto L_0894A40C;
L_0894A40C:;
    a0 = s0 + 0;
    a1 = 2;
    goto L_0894A414;
L_0894A414:;
    { rv_t r_ = func_0894A51C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A41C;
L_0894A41C:;
    goto L_0894A420;
L_0894A420:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894A42C:;
    a2 = 999;
    goto L_0894A414;
L_0894A434:;
    a0 = s0 + 0;
    v0 = func_0894A514(a0);
    goto L_0894A43C;
L_0894A43C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_0894A444;
L_0894A444:;
    a1 = LD32(s0+32);
    a0 = v0 + 0;
    { u64 r_ = func_089600F8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A450;
L_0894A450:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s0+32); goto L_0894A40C; }
    goto L_0894A458;
L_0894A458:;
    goto L_0894A420;
L_0894A460:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894A48C; }
    goto L_0894A46C;
L_0894A46C:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a1 = 3;
    if (cnd_) { goto L_0894A42C; }
    goto L_0894A47C;
L_0894A47C:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894A420; }
    goto L_0894A488;
L_0894A488:;
    a0 = s0 + 0;
    goto L_0894A48C;
L_0894A48C:;
    a1 = 3;
    goto L_0894A42C;
}

/* 0894A494 */
rv_t func_0894A494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894A494:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894A514(a0);
    goto L_0894A4A8;
L_0894A4A8:;
    v1 = D_08B1B638 - (-18888);
    a1 = LD32(s0+28);
    v1 = v1 - 18888;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDB24 - (-9436);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9436));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A4E4;
L_0894A4E4:;
    a0 = s0 + 0;
    v0 = func_0894A514(a0);
    goto L_0894A4EC;
L_0894A4EC:;
    v0 = v0 + 64;
    v1 = D_08AEDB28 - (-9432);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9432));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A514 */
u32 func_0894A514(u32 a0)
{
    u32 v0 = 0;
L_0894A514:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894A51C */
rv_t func_0894A51C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894A51C:;
    sp = sp - 32;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894A580; }
    goto L_0894A548;
L_0894A548:;
    v0 = v1 << 2;
    v1 = D_08ADA4BC - (-23364);
    v1 = v1 - 23364;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894A564u: goto L_0894A564; case 0x0894A580u: goto L_0894A580; case 0x0894A674u: goto L_0894A674; default: rs_break(0, 0x0894a55c); }
L_0894A564:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1157;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A578;
L_0894A578:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0894A638; }
    goto L_0894A580;
L_0894A580:;
    v0 = s1 < 0x5u;
    goto L_0894A584;
L_0894A584:;
    cnd_ = v0 == 0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_0894A5C0; }
    goto L_0894A58C;
L_0894A58C:;
    v1 = D_08ADA4D0 - (-23344);
    v0 = s1 << 2;
    v1 = v1 - 23344;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894A5A8u: goto L_0894A5A8; case 0x0894A5C0u: goto L_0894A5C0; case 0x0894A5F8u: goto L_0894A5F8; case 0x0894A628u: goto L_0894A628; default: rs_break(0, 0x0894a5a0); }
L_0894A5A8:;
    a0 = s0 + 0;
    a1 = 1157;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A5B8;
L_0894A5B8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0894A5D8; }
    goto L_0894A5C0;
L_0894A5C0:;
    goto L_0894A5C4;
L_0894A5C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894A5D8:;
    a0 = s0 + 0;
    a1 = 3;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_0894A5E8;
L_0894A5E8:;
    a2 = 999;
    { rv_t r_ = func_0894A51C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A5F0;
L_0894A5F0:;
    goto L_0894A5C4;
L_0894A5F8:;
    a0 = s0 + 0;
    a1 = 1156;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A608;
L_0894A608:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0894A5E8; }
    goto L_0894A614;
L_0894A614:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_0894854C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A620;
L_0894A620:;
    goto L_0894A5C4;
L_0894A628:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_0894A5C0;
L_0894A638:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894A644;
L_0894A644:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A64C;
L_0894A64C:;
    a0 = s0 + 0;
    v0 = func_0894A514(a0);
    goto L_0894A654;
L_0894A654:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_0894A660;
L_0894A660:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A66C;
L_0894A66C:;
    v0 = s1 < 0x5u;
    goto L_0894A584;
L_0894A674:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1156;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A688;
L_0894A688:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_0894A580; }
    goto L_0894A690;
L_0894A690:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894A69C;
L_0894A69C:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A6A4;
L_0894A6A4:;
    a0 = s0 + 0;
    v0 = func_0894A514(a0);
    goto L_0894A6AC;
L_0894A6AC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 4;
    goto L_0894A660;
}

/* 0894A6BC */
rv_t func_0894A6BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894A6BC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26CB0 - (27824);
    t1 = D_08C26CC0 - (27840);
    t2 = D_08C26CD0 - (27856);
    a1 = a1 & a0;
    v1 = t0 + 27824;
    a2 = t1 + 27840;
    cnd_ = a1 == 0;
    a3 = t2 + 27856;
    if (cnd_) { goto L_0894A774; }
    goto L_0894A6EC;
L_0894A6EC:;
    v0 = D_08AEDB2C - (-9428);
    f4 = BITSF(LD32(v0-9428));
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
    ST32(t0+27824, FBITS(f2));
    ST32(t1+27840, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+27856, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894A774;
L_0894A774:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A77C */
rv_t func_0894A77C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894A77C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894A6BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A790;
L_0894A790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A79C */
rv_t func_0894A79C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894A79C:;
    sp = sp - 16;
    a2 = 1106;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894A7B4;
L_0894A7B4:;
    v0 = D_08B45A9C - (23196);
    f0 = BITSF(LD32(v0+23196));
    v1 = v0 + 23196;
    v0 = D_08AF8D68 - (-29336);
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    v0 = v0 - 29336;
    v1 = 999;
    a0 = s0 + 36;
    ST32(s0+36, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+32, v1);
    ST32(s0+28, 0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A800 */
rv_t func_0894A800(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894A800:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0894A850; }
    goto L_0894A81C;
L_0894A81C:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894A824;
L_0894A824:;
    a0 = s0 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894A82C;
L_0894A82C:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A840;
L_0894A840:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0894A81C; }
    goto L_0894A850;
L_0894A850:;
    a0 = s0 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894A858;
L_0894A858:;
    v1 = LD32(v0+156);
    v1 = (v1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(v0+156, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0894A874 */
rv_t func_0894A874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0894A874:;
    sp = sp - 48;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0894A8D8; }
    goto L_0894A89C;
L_0894A89C:;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0894A8DC; }
    goto L_0894A8AC;
L_0894A8AC:;
    v0 = v1 << 2;
    v1 = D_08ADA4E4 - (-23324);
    v1 = v1 - 23324;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894A8C8u: goto L_0894A8C8; case 0x0894A8D8u: goto L_0894A8D8; case 0x0894A8F4u: goto L_0894A8F4; case 0x0894A9C4u: goto L_0894A9C4; default: rs_break(0, 0x0894a8c0); }
L_0894A8C8:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_0894A8D0;
L_0894A8D0:;
    { rv_t r_ = func_0894AB00(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A8D8;
L_0894A8D8:;
    goto L_0894A8DC;
L_0894A8DC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0894A8F4:;
    a0 = s1 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894A8FC;
L_0894A8FC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 36;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A91C;
L_0894A91C:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+36));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    v0 = func_0894AAF8(a0);
    goto L_0894A954;
L_0894A954:;
    a0 = s1 + 0;
    f21 = BITSF(LD32(v0+124));
    v0 = func_0894AAF8(a0);
    goto L_0894A960;
L_0894A960:;
    a0 = s1 + 0;
    f20 = BITSF(LD32(v0+124));
    v0 = func_0894AAF8(a0);
    goto L_0894A96C;
L_0894A96C:;
    f0 = BITSF(LD32(v0+120));
    v0 = D_08AEDB30 - (-9424);
    a0 = s1 + 0;
    f20 = f20 - f0;
    f0 = BITSF(LD32(v0-9424));
    f20 = f20 * f0;
    v0 = func_0894AAF8(a0);
    goto L_0894A988;
L_0894A988:;
    a0 = v0 + 0;
    a1 = sp + 0;
    f21 = f21 - f20;
    a2 = 0 + 0;
    f12 = f21;
    { rv_t r_ = func_08959780(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A9A0;
L_0894A9A0:;
    a0 = s1 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894A9A8;
L_0894A9A8:;
    v1 = LD32(v0+156);
    v1 = (v1 >> 2) & 0x1;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0894A8DC; }
    goto L_0894A9B8;
L_0894A9B8:;
    a0 = s1 + 0;
    a1 = 2;
    goto L_0894A8D0;
L_0894A9C4:;
    a0 = s1 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894A9CC;
L_0894A9CC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 36;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894A9EC;
L_0894A9EC:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+36));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = func_0894AAF8(a0);
    goto L_0894AA24;
L_0894AA24:;
    a0 = s1 + 0;
    f21 = BITSF(LD32(v0+124));
    v0 = func_0894AAF8(a0);
    goto L_0894AA30;
L_0894AA30:;
    a0 = s1 + 0;
    f20 = BITSF(LD32(v0+124));
    v0 = func_0894AAF8(a0);
    goto L_0894AA3C;
L_0894AA3C:;
    f0 = BITSF(LD32(v0+120));
    v0 = D_08AEDB30 - (-9424);
    a0 = s1 + 0;
    f20 = f20 - f0;
    f0 = BITSF(LD32(v0-9424));
    f20 = f20 * f0;
    v0 = func_0894AAF8(a0);
    goto L_0894AA58;
L_0894AA58:;
    a0 = v0 + 0;
    a1 = sp + 0;
    f21 = f21 - f20;
    a2 = 0 + 0;
    f12 = f21;
    { rv_t r_ = func_08959780(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AA70;
L_0894AA70:;
    goto L_0894A8DC;
}

/* 0894AA78 */
rv_t func_0894AA78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894AA78:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894AA8C;
L_0894AA8C:;
    v1 = D_08B1B648 - (-18872);
    a1 = LD32(s0+28);
    v1 = v1 - 18872;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDB34 - (-9420);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9420));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AAC8;
L_0894AAC8:;
    a0 = s0 + 0;
    v0 = func_0894AAF8(a0);
    goto L_0894AAD0;
L_0894AAD0:;
    v0 = v0 + 64;
    v1 = D_08AEDB38 - (-9416);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9416));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894AAF8 */
u32 func_0894AAF8(u32 a0)
{
    u32 v0 = 0;
L_0894AAF8:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894AB00 */
rv_t func_0894AB00(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0894AB00:;
    sp = sp - 48;
    v0 = a1 < 0x5u;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    ST32(a0+28, a1);
    if (cnd_) { goto L_0894ABE8; }
    goto L_0894AB2C;
L_0894AB2C:;
    v1 = D_08ADA538 - (-23240);
    v0 = a1 << 2;
    v1 = v1 - 23240;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894AB48u: goto L_0894AB48; case 0x0894ABE8u: goto L_0894ABE8; case 0x0894AC48u: goto L_0894AC48; default: rs_break(0, 0x0894ab40); }
L_0894AB48:;
    a2 = LD32(s2+32);
    a0 = D_08C2BF38 - (-16584);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 16584;
    if (cnd_) { goto L_0894AC08; }
    goto L_0894AB5C;
L_0894AB5C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16584);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0894ABAC; }
    goto L_0894AB80;
L_0894AB80:;
    a0 = LD32(a1);
    goto L_0894AB84;
L_0894AB84:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0894AC28; }
    goto L_0894AB9C;
L_0894AB9C:;
    a1 = LD32(a1+4);
    goto L_0894ABA0;
L_0894ABA0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0894AB84; }
    goto L_0894ABA8;
L_0894ABA8:;
    v1 = 0 + 0;
    goto L_0894ABAC;
L_0894ABAC:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0894AC0C; }
    goto L_0894ABB4;
L_0894ABB4:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s2 + 36;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894ABD0;
L_0894ABD0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s2+36, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_0894ABE8;
L_0894ABE8:;
    goto L_0894ABEC;
L_0894ABEC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0894AC08:;
    v0 = LD32(s2+8);
    goto L_0894AC0C;
L_0894AC0C:;
    a0 = s2 + 0;
    a1 = 3;
    v0 = v0 | 0x10;
    ST32(s2+8, v0);
    { rv_t r_ = func_0894AB00(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AC20;
L_0894AC20:;
    goto L_0894ABEC;
L_0894AC28:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894ABA0; }
    goto L_0894AC34;
L_0894AC34:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0894AB9C; }
    goto L_0894AC40;
L_0894AC40:;
    goto L_0894ABAC;
L_0894AC48:;
    a2 = D_08C2BAF8 - (-17672);
    v0 = a2 - 17672;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    s4 = 0 + 0;
    ST32(v0+8, v1);
    a0 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0894ACC4; }
    goto L_0894AC78;
L_0894AC78:;
    a2 = LD32(a2-17672);
    a3 = a1 + 0;
    goto L_0894AC80;
L_0894AC80:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0894ACB4; }
    goto L_0894AC98;
L_0894AC98:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0894ACC8; }
    goto L_0894ACA8;
L_0894ACA8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894AC98; }
    goto L_0894ACB4;
L_0894ACB4:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0894AC80; }
    goto L_0894ACC4;
L_0894ACC4:;
    v0 = LD32(sp+8);
    goto L_0894ACC8;
L_0894ACC8:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp); goto L_0894AD14; }
    goto L_0894ACD0;
L_0894ACD0:;
    s3 = s2 + 36;
    a0 = s2 + 0;
    goto L_0894ACD8;
L_0894ACD8:;
    s1 = LD32(v0);
    v0 = func_0894AAF8(a0);
    goto L_0894ACE0;
L_0894ACE0:;
    v1 = LD32(v0+48);
    s0 = LD32(s1+84);
    a0 = LD32(v1+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894ACF0;
L_0894ACF0:;
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD32(s1); goto L_0894AD44; }
    goto L_0894ACF8;
L_0894ACF8:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABCB74(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894AD04;
L_0894AD04:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0894ACD8; }
    goto L_0894AD10;
L_0894AD10:;
    a0 = LD32(sp);
    goto L_0894AD14;
L_0894AD14:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894AD34; }
    goto L_0894AD24;
L_0894AD24:;
    cnd_ = s4 != 0;
    if (cnd_) {  goto L_0894ABEC; }
    goto L_0894AD2C;
L_0894AD2C:;
    v0 = LD32(s2+8);
    goto L_0894AC0C;
L_0894AD34:;
    { u64 r_ = func_08ABCCBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894AD3C;
L_0894AD3C:;
    goto L_0894AD24;
L_0894AD44:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s4 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AD5C;
L_0894AD5C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s3+8, FBITS(f0));
    ST32(s2+36, FBITS(f1));
    ST32(s3+4, FBITS(f2));
    goto L_0894ACF8;
}

/* 0894AD78 */
rv_t func_0894AD78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894AD78:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26D60 - (28000);
    t1 = D_08C26D70 - (28016);
    t2 = D_08C26D80 - (28032);
    a1 = a1 & a0;
    v1 = t0 + 28000;
    a2 = t1 + 28016;
    cnd_ = a1 == 0;
    a3 = t2 + 28032;
    if (cnd_) { goto L_0894AE30; }
    goto L_0894ADA8;
L_0894ADA8:;
    v0 = D_08AEDB3C - (-9412);
    f4 = BITSF(LD32(v0-9412));
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
    ST32(t0+28000, FBITS(f2));
    ST32(t1+28016, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+28032, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894AE30;
L_0894AE30:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894AE38 */
rv_t func_0894AE38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894AE38:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894AD78(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AE4C;
L_0894AE4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894AE58 */
u64 func_0894AE58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894AE58:;
    sp = sp - 16;
    a2 = 1108;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894AE70;
L_0894AE70:;
    v0 = D_08AF8DA0 - (-29280);
    v1 = 999;
    v0 = v0 - 29280;
    ST32(s0+36, v1);
    ST32(s0, v0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0894AE9C */
rv_t func_0894AE9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894AE9C:;
    sp = sp - 16;
    v0 = func_0894B2BC(a0);
    goto L_0894AEAC;
L_0894AEAC:;
    a0 = v0 + 0;
    v1 = LD32(v0+156);
    v0 = 1;
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(a0+156, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894AECC */
rv_t func_0894AECC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894AECC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0894AF1C; }
    goto L_0894AEE8;
L_0894AEE8:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894AEF0;
L_0894AEF0:;
    a0 = s0 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894AEF8;
L_0894AEF8:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AF0C;
L_0894AF0C:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0894AEE8; }
    goto L_0894AF1C;
L_0894AF1C:;
    a0 = s0 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894AF24;
L_0894AF24:;
    a0 = v0 + 0;
    a1 = 999;
    func_0895988C(a0, a1);
    goto L_0894AF30;
L_0894AF30:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0894AF40 */
rv_t func_0894AF40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894AF40:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_0894AF68; }
    goto L_0894AF58;
L_0894AF58:;
    v0 = 0 + 0;
    goto L_0894AF5C;
L_0894AF5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894AF68:;
    v1 = 0x409b0000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0x8404;
    if (cnd_) { goto L_0894AF58; }
    goto L_0894AF74;
L_0894AF74:;
    v0 = LD32(a1+4);
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_0894AF5C; }
    goto L_0894AF80;
L_0894AF80:;
    v1 = LD32(a0+28);
    v0 = 3;
    cnd_ = v1 != v0;
    a1 = 4;
    if (cnd_) { goto L_0894AF58; }
    goto L_0894AF90;
L_0894AF90:;
    { rv_t r_ = func_0894B2C4(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894AF98;
L_0894AF98:;
    v0 = 1;
    goto L_0894AF5C;
}

/* 0894AFA0 */
rv_t func_0894AFA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0894AFA0:;
    sp = sp - 80;
    a1 = LD32(a0+8);
    v0 = (a1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0894B014; }
    goto L_0894AFC4;
L_0894AFC4:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_0894B230; }
    goto L_0894AFDC;
L_0894AFDC:;
    v0 = v1 << 2;
    v1 = D_08ADA54C - (-23220);
    v1 = v1 - 23220;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894AFF8u: goto L_0894AFF8; case 0x0894B014u: goto L_0894B014; case 0x0894B02Cu: goto L_0894B02C; case 0x0894B208u: goto L_0894B208; case 0x0894B230u: goto L_0894B230; default: rs_break(0, 0x0894aff0); }
L_0894AFF8:;
    v1 = LD32(s1+36);
    v0 = 999;
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_0894B014; }
    goto L_0894B00C;
L_0894B00C:;
    { rv_t r_ = func_0894B2C4(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B014;
L_0894B014:;
    goto L_0894B018;
L_0894B018:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0894B02C:;
    a0 = LD32(s1+36);
    a1 = D_08C2A204 - (-24060);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 24060;
    if (cnd_) { goto L_0894B18C; }
    goto L_0894B040;
L_0894B040:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-24060);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0894B084; }
    goto L_0894B064;
L_0894B064:;
    s0 = LD32(v1);
    goto L_0894B068;
L_0894B068:;
    v0 = LD32(s0+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(s0+16); goto L_0894B1E8; }
    goto L_0894B074;
L_0894B074:;
    v1 = LD32(v1+4);
    goto L_0894B078;
L_0894B078:;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_0894B068; }
    goto L_0894B080;
L_0894B080:;
    s2 = 0 + 0;
    goto L_0894B084;
L_0894B084:;
    cnd_ = s2 == 0;
    v0 = 999;
    if (cnd_) { goto L_0894B18C; }
    goto L_0894B08C;
L_0894B08C:;
    v1 = LD32(s2+88);
    cnd_ = v1 == v0;
    s0 = s2 + 40;
    if (cnd_) { goto L_0894B18C; }
    goto L_0894B098;
L_0894B098:;
    v0 = s2 + 52;
    f5 = BITSF(LD32(s2+40));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s2+52));
    f0 = BITSF(LD32(v0+4));
    f2 = f2 - f4;
    f1 = f1 - f5;
    f0 = f0 - f3;
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    v0 = func_0894B2BC(a0);
    goto L_0894B0D4;
L_0894B0D4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B0F4;
L_0894B0F4:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s2+40));
    f3 = BITSF(LD32(s0+4));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    v1 = LD32(sp+4);
    {v[4]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = FBITS(f3);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f1, f0, 12);
    ST32(sp+20, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0894B1D4; }
    goto L_0894B174;
L_0894B174:;
    a0 = s1 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B17C;
L_0894B17C:;
    a1 = LD32(s2+88);
    a0 = v0 + 0;
    goto L_0894B184;
L_0894B184:;
    func_0895988C(a0, a1);
    goto L_0894B18C;
L_0894B18C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0894B1AC; }
    goto L_0894B198;
L_0894B198:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 3) & 0x1;
    if (cnd_) { goto L_0894B1C0; }
    goto L_0894B1A8;
L_0894B1A8:;
    v0 = LD32(s1+8);
    goto L_0894B1AC;
L_0894B1AC:;
    a0 = s1 + 0;
    a1 = 4;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_0894B00C;
L_0894B1C0:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 2;
    if (cnd_) { goto L_0894B014; }
    goto L_0894B1CC;
L_0894B1CC:;
    goto L_0894B00C;
L_0894B1D4:;
    a0 = s1 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B1DC;
L_0894B1DC:;
    a0 = v0 + 0;
    a1 = 999;
    goto L_0894B184;
L_0894B1E8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0894B078; }
    goto L_0894B1F4;
L_0894B1F4:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    s2 = s0 + 0;
    if (cnd_) { goto L_0894B074; }
    goto L_0894B200;
L_0894B200:;
    goto L_0894B084;
L_0894B208:;
    v0 = D_08AEDB40 - (-9408);
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-9408));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894B018; }
    goto L_0894B224;
L_0894B224:;
    a0 = s1 + 0;
    a1 = 3;
    goto L_0894B00C;
L_0894B230:;
    v0 = a1 | 0x10;
    ST32(s1+8, v0);
    goto L_0894B014;
}

/* 0894B23C */
rv_t func_0894B23C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894B23C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B250;
L_0894B250:;
    v1 = D_08B1B65C - (-18852);
    a1 = LD32(s0+28);
    v1 = v1 - 18852;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDB44 - (-9404);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9404));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B28C;
L_0894B28C:;
    a0 = s0 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B294;
L_0894B294:;
    v0 = v0 + 64;
    v1 = D_08AEDB48 - (-9400);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9400));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894B2BC */
u32 func_0894B2BC(u32 a0)
{
    u32 v0 = 0;
L_0894B2BC:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894B2C4 */
rv_t func_0894B2C4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0894B2C4:;
    sp = sp - 96;
    v0 = 1;
    s2 = a0 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0894B530; }
    goto L_0894B2EC;
L_0894B2EC:;
    v0 = s0 < 0x6u;
    goto L_0894B2F0;
L_0894B2F0:;
    ST32(s2+28, s0);
    cnd_ = v0 == 0;
    ST32(s2+32, 0);
    if (cnd_) { goto L_0894B35C; }
    goto L_0894B2FC;
L_0894B2FC:;
    v1 = D_08ADA5B0 - (-23120);
    v0 = s0 << 2;
    v1 = v1 - 23120;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894B318u: goto L_0894B318; case 0x0894B35Cu: goto L_0894B35C; case 0x0894B374u: goto L_0894B374; case 0x0894B418u: goto L_0894B418; case 0x0894B434u: goto L_0894B434; default: rs_break(0, 0x0894b310); }
L_0894B318:;
    a0 = s2 + 0;
    a1 = 1159;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B328;
L_0894B328:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0894B348; }
    goto L_0894B330;
L_0894B330:;
    a1 = LD32(s2+36);
    a0 = v0 + 0;
    { u64 r_ = func_0894CD30(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894B33C;
L_0894B33C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0894B360; }
    goto L_0894B344;
L_0894B344:;
    v0 = LD32(s2+8);
    goto L_0894B348;
L_0894B348:;
    a0 = s2 + 0;
    a1 = 4;
    v0 = v0 | 0x10;
    ST32(s2+8, v0);
    { rv_t r_ = func_0894B2C4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B35C;
L_0894B35C:;
    goto L_0894B360;
L_0894B360:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0894B374:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B37C;
L_0894B37C:;
    v1 = LD32(v0+156);
    a0 = s2 + 0;
    s0 = D_08B45A9C - (23196);
    v1 = v1 | 0x10;
    ST32(v0+156, v1);
    s0 = s0 + 23196;
    s1 = sp + 16;
    v0 = func_0894B2BC(a0);
    goto L_0894B39C;
L_0894B39C:;
    a0 = v0 + 0;
    a2 = 0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B3AC;
L_0894B3AC:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B3B4;
L_0894B3B4:;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B3C8;
L_0894B3C8:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B3D0;
L_0894B3D0:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+76);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B3E4;
L_0894B3E4:;
    a1 = sp + 0;
    a0 = s1 + 0;
    ST32(sp+4, 0);
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B3F4;
L_0894B3F4:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B3FC;
L_0894B3FC:;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B410;
L_0894B410:;
    goto L_0894B360;
L_0894B418:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B420;
L_0894B420:;
    a0 = LD32(v0+48);
    a1 = 999;
    { rv_t r_ = func_089D1F3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B42C;
L_0894B42C:;
    goto L_0894B360;
L_0894B434:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B43C;
L_0894B43C:;
    v1 = LD32(v0+48);
    s0 = 1;
    a0 = s2 + 0;
    v0 = LD32(v1+232);
    v0 = (v0 & ~(0x1u << 2)) | ((s0 & 0x1) << 2);
    ST32(v1+232, v0);
    v0 = func_0894B2BC(a0);
    goto L_0894B458;
L_0894B458:;
    v1 = LD32(v0+48);
    a0 = s2 + 0;
    v0 = LD32(v1+232);
    v0 = (v0 & ~(0x1u << 3)) | ((s0 & 0x1) << 3);
    ST32(v1+232, v0);
    v0 = func_0894B2BC(a0);
    goto L_0894B470;
L_0894B470:;
    v1 = LD32(v0+48);
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    a2 = LD32(v1+252);
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_0894B4F0; }
    goto L_0894B488;
L_0894B488:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0894B4D8; }
    goto L_0894B4AC;
L_0894B4AC:;
    a0 = LD32(a1);
    goto L_0894B4B0;
L_0894B4B0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0894B510; }
    goto L_0894B4C8;
L_0894B4C8:;
    a1 = LD32(a1+4);
    goto L_0894B4CC;
L_0894B4CC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0894B4B0; }
    goto L_0894B4D4;
L_0894B4D4:;
    a0 = 0 + 0;
    goto L_0894B4D8;
L_0894B4D8:;
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0894B4F0; }
    goto L_0894B4E0;
L_0894B4E0:;
    v0 = LD32(a0+200);
    v0 = (v0 & ~(0x1u << 5)) | ((v1 & 0x1) << 5);
    ST8(a0+329, v1);
    ST32(a0+200, v0);
    goto L_0894B4F0;
L_0894B4F0:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B4F8;
L_0894B4F8:;
    a0 = LD32(v0+48);
    v0 = D_08AEDB4C - (-9396);
    f12 = BITSF(LD32(v0-9396));
    v0 = func_089D29C4(a0, f12);
    goto L_0894B508;
L_0894B508:;
    goto L_0894B360;
L_0894B510:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894B4CC; }
    goto L_0894B51C;
L_0894B51C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894B4CC; }
    goto L_0894B528;
L_0894B528:;
    goto L_0894B4D8;
L_0894B530:;
    a1 = a0 + 0;
    a2 = 1159;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894B540;
L_0894B540:;
    cnd_ = v0 == 0;
    ST32(sp+64, v0);
    if (cnd_) { goto L_0894B2EC; }
    goto L_0894B548;
L_0894B548:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894B554;
L_0894B554:;
    a0 = LD32(sp+64);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B55C;
L_0894B55C:;
    a0 = s2 + 0;
    v0 = func_0894B2BC(a0);
    goto L_0894B564;
L_0894B564:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 64;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B578;
L_0894B578:;
    v0 = s0 < 0x6u;
    goto L_0894B2F0;
}

/* 0894B580 */
rv_t func_0894B580(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894B580:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26E10 - (28176);
    t1 = D_08C26E20 - (28192);
    t2 = D_08C26E30 - (28208);
    a1 = a1 & a0;
    v1 = t0 + 28176;
    a2 = t1 + 28192;
    cnd_ = a1 == 0;
    a3 = t2 + 28208;
    if (cnd_) { goto L_0894B638; }
    goto L_0894B5B0;
L_0894B5B0:;
    v0 = D_08AEDB50 - (-9392);
    f4 = BITSF(LD32(v0-9392));
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
    ST32(t0+28176, FBITS(f2));
    ST32(t1+28192, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+28208, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894B638;
L_0894B638:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894B640 */
rv_t func_0894B640(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894B640:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894B580(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B654;
L_0894B654:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894B660 */
rv_t func_0894B660(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894B660:;
    sp = sp - 16;
    a2 = 1157;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894B678;
L_0894B678:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a0 = s0 + 40;
    ST32(s0+36, 0);
    f2 = BITSF(LD32(v0+23196));
    v0 = D_08AF8DD8 - (-29224);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = v0 - 29224;
    v1 = 999;
    ST32(s0+52, v1);
    ST32(s0, v0);
    ST32(s0+40, FBITS(f2));
    ST32(s0+28, 0);
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894B6CC */
rv_t func_0894B6CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894B6CC:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = a0 + 0;
    if (cnd_) { goto L_0894B6F4; }
    goto L_0894B6E4;
L_0894B6E4:;
    v0 = 0 + 0;
    goto L_0894B6E8;
L_0894B6E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894B6F4:;
    a1 = LD32(a1+24);
    v1 = 0xcad60000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0xd076;
    if (cnd_) { goto L_0894B6E4; }
    goto L_0894B704;
L_0894B704:;
    v0 = LD32(a1+4);
    a2 = 0xcad60000u;
    a1 = 1;
    cnd_ = v0 == v1;
    a2 = a2 | 0xd077;
    if (cnd_) { goto L_0894B72C; }
    goto L_0894B718;
L_0894B718:;
    v1 = 0xcad60000u;
    cnd_ = v0 == a2;
    v1 = v1 | 0xd078;
    if (cnd_) { goto L_0894B72C; }
    goto L_0894B724;
L_0894B724:;
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_0894B6E8; }
    goto L_0894B72C;
L_0894B72C:;
    v1 = LD32(a3+28);
    v0 = 2;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = 0 + 0; goto L_0894B6E8; }
    goto L_0894B73C;
L_0894B73C:;
    { rv_t r_ = func_0894BE68(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B744;
L_0894B744:;
    v0 = 1;
    goto L_0894B6E8;
}

/* 0894B74C */
rv_t func_0894B74C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894B74C:;
    sp = sp - 16;
    v0 = 2;
    s0 = a0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s1 = LD32(a0+28);
    cnd_ = s1 == v0;
    a0 = 0x8033;
    if (cnd_) { goto L_0894B790; }
    goto L_0894B77C;
L_0894B77C:;
    goto L_0894B780;
L_0894B780:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894B790:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894B798;
L_0894B798:;
    a3 = v0 + 0;
    a1 = 1;
    a2 = 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0894B7C0; }
    goto L_0894B7AC;
L_0894B7AC:;
    v0 = LD32(s0+24);
    v1 = LD32(v0+4);
    ST32(a3, s1);
    ST32(a3+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B7C0;
L_0894B7C0:;
    a0 = s0 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894B7C8;
L_0894B7C8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08959894(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B7D0;
L_0894B7D0:;
    goto L_0894B780;
}

/* 0894B7D8 */
rv_t func_0894B7D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_0894B7D8:;
    sp = sp - 144;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    f22 = f12;
    if (cnd_) { goto L_0894B830; }
    goto L_0894B80C;
L_0894B80C:;
    goto L_0894B810;
L_0894B810:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_0894B830:;
    f0 = BITSF(LD32(a0+32));
    a0 = 1;
    f0 = f0 + f12;
    ST32(s0+32, FBITS(f0));
    { u64 r_ = func_08A145E4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894B844;
L_0894B844:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0894BD20; }
    goto L_0894B84C;
L_0894B84C:;
    v0 = v0 + 28;
    f0 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+16));
    f3 = BITSF(LD32(a0+28));
    f2 = f2 + f0;
    f1 = f1 + f5;
    f3 = f3 + f4;
    v0 = D_08AEDB54 - (-9388);
    f0 = BITSF(LD32(v0-9388));
    f1 = f1 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f1));
    goto L_0894B8A0;
L_0894B8A0:;
    cnd_ = a0 == 0;
    v0 = a0 + 28;
    if (cnd_) { goto L_0894BD00; }
    goto L_0894B8A8;
L_0894B8A8:;
    f4 = BITSF(LD32(a0+28));
    f5 = BITSF(LD32(v0+16));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+20));
    f1 = f1 - f4;
    f2 = f2 - f3;
    f0 = f0 - f5;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    goto L_0894B8D8;
L_0894B8D8:;
    a2 = sp + 16;
    a0 = s0 + 0;
    a1 = sp + 0;
    f0 = func_0894BD4C(a0, a1, a2);
    goto L_0894B8E8;
L_0894B8E8:;
    v1 = LD32(s0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    f3 = f0;
    if (cnd_) { goto L_0894B920; }
    goto L_0894B8F8;
L_0894B8F8:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0894B90C; }
    goto L_0894B904;
L_0894B904:;
    cnd_ = v1 == v0;
    if (cnd_) {  goto L_0894B810; }
    goto L_0894B90C;
L_0894B90C:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0894BE68(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894B918;
L_0894B918:;
    goto L_0894B810;
L_0894B920:;
    f0 = BITSF(LD32(s0+36));
    f1 = BITSF(0);
    f2 = f0 - f22;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    ST32(s0+36, FBITS(f2));
    if (cnd_) { goto L_0894BCF4; }
    goto L_0894B93C;
L_0894B93C:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a0 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v1 = v0 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEDB64 - (-9372);
    f5 = BITSF(LD32(v0-9372));
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AEDB60 - (-9376);
    f0 = BITSF(LD32(v0-9376));
    a1 = a0 + v1;
    f1 = f1 * f5;
    f0 = f2 + f0;
    ST32(a3+23232, v1);
    fcc = FCMP(f1, f3, 12);
    ST32(s0+36, FBITS(f0));
    cnd_ = fcc;
    ST32(t0+4, a1);
    if (cnd_) { goto L_0894BC8C; }
    goto L_0894B998;
L_0894B998:;
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a1 = a1 + v1;
    v0 = v0 + a0;
    v0 = v0 + a1;
    a0 = (u32)((s32)v0 >> 16);
    a2 = v0 << 16;
    a1 = a1 + v0;
    a2 = a2 + a0;
    a2 = a2 + a1;
    v0 = v0 >> 1;
    a0 = a2 >> 1;
    v1 = v1 >> 1;
    f3 = BITSF(v0);
    f2 = BITSF(v1);
    f4 = BITSF(a0);
    f1 = (float)(s32)FBITS(f3);
    f0 = (float)(s32)FBITS(f2);
    f2 = (float)(s32)FBITS(f4);
    v0 = D_08AEDB68 - (-9368);
    f1 = f1 * f5;
    f0 = f0 * f5;
    f2 = f2 * f5;
    f3 = BITSF(LD32(v0-9368));
    f1 = f1 + f1;
    f0 = f0 + f0;
    f2 = f2 + f2;
    a1 = a1 + a2;
    f1 = f1 + f3;
    f0 = f0 + f3;
    f2 = f2 + f3;
    ST32(t0+4, a1);
    s1 = s0 + 40;
    ST32(s0+40, FBITS(f0));
    ST32(s0+44, FBITS(f1));
    ST32(a3+23232, a2);
    ST32(s0+48, FBITS(f2));
    goto L_0894BA3C;
L_0894BA3C:;
    f4 = BITSF(LD32(s0+40));
    v1 = LD32(s1+8);
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    f1 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = LD32(s1+4);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s1+8)); goto L_0894BABC; }
    goto L_0894BA7C;
L_0894BA7C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[1]);}
    f4 = f0;
    ST32(s1+4, v1);
    ST32(s1+8, v0);
    ST32(s0+40, a0);
    ST32(sp+36, v1);
    ST32(sp+40, v0);
    ST32(sp+32, a0);
    goto L_0894BAB8;
L_0894BAB8:;
    f1 = BITSF(LD32(s1+8));
    goto L_0894BABC;
L_0894BABC:;
    f0 = BITSF(LD32(s1+4));
    a0 = s0 + 0;
    ST32(sp+32, FBITS(f4));
    s2 = 0 + 0;
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f1));
    v0 = func_0894BD44(a0);
    goto L_0894BAD8;
L_0894BAD8:;
    a0 = s0 + 0;
    f21 = BITSF(LD32(v0+124));
    v0 = func_0894BD44(a0);
    goto L_0894BAE4;
L_0894BAE4:;
    a0 = s0 + 0;
    f20 = BITSF(LD32(v0+124));
    v0 = func_0894BD44(a0);
    goto L_0894BAF0;
L_0894BAF0:;
    f0 = BITSF(LD32(v0+120));
    v0 = D_08AEDB54 - (-9388);
    a0 = s0 + 0;
    f20 = f20 - f0;
    f0 = BITSF(LD32(v0-9388));
    f20 = f20 * f0;
    v0 = func_0894BD44(a0);
    goto L_0894BB0C;
L_0894BB0C:;
    a0 = LD32(v0+48);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    v1 = LD32(a0+204);
    cnd_ = v1 == v0;
    f21 = f21 - f20;
    if (cnd_) { goto L_0894BBF8; }
    goto L_0894BB24;
L_0894BB24:;
    a0 = s0 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894BB2C;
L_0894BB2C:;
    a0 = v0 + 0;
    a1 = s0 + 52;
    v0 = func_08959914(a0, a1, 0, 0, 0);
    goto L_0894BB38;
L_0894BB38:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0894BBF8; }
    goto L_0894BB40;
L_0894BB40:;
    a0 = s0 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894BB48;
L_0894BB48:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    f0 = func_08959B7C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0894BB54;
L_0894BB54:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    f21 = f0;
    v0 = LD32(v1+40);
    t_ = v0;
    s2 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BB6C;
L_0894BB6C:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    {u32 a_=sp+(96);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a0 = FBITS(f4);
    v0 = FBITS(f3);
    {v[12]=BITSF(a0);}
    v1 = FBITS(f5);
    {v[13]=BITSF(v0);}
    f1 = BITSF(0);
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    ST32(sp+48, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f5));
    if (cnd_) { goto L_0894BBEC; }
    goto L_0894BBB8;
L_0894BBB8:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+64, v1);
    ST32(sp+68, a0);
    ST32(sp+72, v0);
    ST32(sp+48, v1);
    ST32(sp+52, a0);
    ST32(sp+56, v0);
    goto L_0894BBEC;
L_0894BBEC:;
    a0 = sp + 48;
    a1 = sp + 32;
    func_08959CC8(a0, a1);
    goto L_0894BBF8;
L_0894BBF8:;
    a0 = s0 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894BC00;
L_0894BC00:;
    f1 = BITSF(LD32(v0+152));
    v1 = v0 + 152;
    cnd_ = s2 != 0;
    f12 = f1 - f22;
    if (cnd_) { goto L_0894BC20; }
    goto L_0894BC10;
L_0894BC10:;
    v0 = D_08AEDB6C - (-9364);
    f0 = BITSF(LD32(v0-9364));
    f0 = f22 * f0;
    f12 = f1 - f0;
    goto L_0894BC20;
L_0894BC20:;
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    ST32(v1, FBITS(f12));
    if (cnd_) { goto L_0894BC78; }
    goto L_0894BC34;
L_0894BC34:;
    a0 = s0 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894BC3C;
L_0894BC3C:;
    f2 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f2 = f2 * f21;
    f1 = f1 * f21;
    f0 = f0 * f21;
    a0 = v0 + 0;
    a1 = sp + 64;
    a2 = 0 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f0));
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BC70;
L_0894BC70:;
    goto L_0894B810;
L_0894BC78:;
    a0 = s0 + 0;
    a1 = 2;
    { rv_t r_ = func_0894BE68(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BC84;
L_0894BC84:;
    goto L_0894BC34;
L_0894BC8C:;
    a0 = s0 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894BC94;
L_0894BC94:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s1 = s0 + 40;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BCB4;
L_0894BCB4:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f1 = f1 - f0;
    f2 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    f2 = f2 - f3;
    f0 = f0 - f4;
    ST32(sp+36, FBITS(f1));
    ST32(s0+40, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(sp+32, FBITS(f0));
    goto L_0894BA3C;
L_0894BCF4:;
    f4 = BITSF(LD32(s0+40));
    s1 = s0 + 40;
    goto L_0894BAB8;
L_0894BD00:;
    v0 = D_08AEDB58 - (-9384);
    f1 = BITSF(LD32(v0-9384));
    v0 = D_08AEDB5C - (-9380);
    f0 = BITSF(LD32(v0-9380));
    ST32(sp+24, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    goto L_0894B8D8;
L_0894BD20:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    goto L_0894B8A0;
}

/* 0894BD44 */
u32 func_0894BD44(u32 a0)
{
    u32 v0 = 0;
L_0894BD44:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894BD4C */
float func_0894BD4C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894BD4C:;
    sp = sp - 32;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = func_0894BD44(a0);
    goto L_0894BD68;
L_0894BD68:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BD88;
L_0894BD88:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0));
    f1 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+4));
    f4 = f4 - f0;
    v1 = D_08AEDB70 - (-9360);
    f7 = BITSF(LD32(v1-9360));
    f5 = f5 - f1;
    v1 = FBITS(f4);
    f3 = BITSF(LD32(s1));
    f6 = BITSF(LD32(s1+4));
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    v1 = FBITS(f5);
    f3 = f3 * f7;
    f6 = f6 * f7;
    v1 = (v1 >> 0) & 0x7fffffff;
    f8 = BITSF(v1);
    f9 = f2 / f3;
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s1+8));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    f8 = f8 / f6;
    f2 = f2 - f0;
    f3 = f3 * f7;
    fcc = FCMP(f8, f9, 14);
    v0 = FBITS(f2);
    ST32(sp+8, FBITS(f2));
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    cnd_ = fcc;
    f1 = f1 / f3;
    if (cnd_) { goto L_0894BE14; }
    goto L_0894BE10;
L_0894BE10:;
    f9 = f8;
    goto L_0894BE14;
L_0894BE14:;
    fcc = FCMP(f1, f9, 14);
    cnd_ = fcc;
    f0 = f9;
    if (cnd_) { goto L_0894BE28; }
    goto L_0894BE24;
L_0894BE24:;
    f0 = f1;
    goto L_0894BE28;
L_0894BE28:;
    f2 = f0;
    f0 = f0 * f0;
    v0 = D_08AEDB74 - (-9356);
    f0 = f0 * f2;
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-9356));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894BE54; }
    goto L_0894BE50;
L_0894BE50:;
    f2 = BITSF(0);
    goto L_0894BE54;
L_0894BE54:;
    f0 = f2;
    sp = sp + 32;
    return f0;
}

/* 0894BE68 */
rv_t func_0894BE68(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894BE68:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = 2;
    v0 = LD32(a0+28);
    cnd_ = v0 == s0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0894BF84; }
    goto L_0894BE90;
L_0894BE90:;
    ST32(s2+28, s1);
    goto L_0894BE94;
L_0894BE94:;
    cnd_ = s1 == s0;
    ST32(s2+32, 0);
    if (cnd_) { goto L_0894BEB4; }
    goto L_0894BE9C;
L_0894BE9C:;
    goto L_0894BEA0;
L_0894BEA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894BEB4:;
    a0 = 0x8032;
    a1 = 12;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894BEC8;
L_0894BEC8:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_0894BE9C; }
    goto L_0894BED0;
L_0894BED0:;
    t0 = LD32(v0+24);
    a1 = D_08B25AC0 - (23232);
    a3 = a1 + 23232;
    v0 = LD32(t0);
    v1 = LD32(t0+8);
    a2 = 3;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(t0+8, v1);
    ST32(t0, v0);
    v0 = LD32(a1+23232);
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a1+23232, v0);
    v1 = 1;
    v0 = 0xcad60000u;
    ST32(a3+4, a0);
    a2 = hi;
    cnd_ = a2 == v1;
    v0 = v0 | 0xd077;
    if (cnd_) { goto L_0894BF54; }
    goto L_0894BF38;
L_0894BF38:;
    v0 = (s32)a2 < 2;
    cnd_ = v0 != 0;
    v0 = 0xcad60000u;
    if (cnd_) { goto L_0894BF50; }
    goto L_0894BF44;
L_0894BF44:;
    cnd_ = a2 == s1;
    v0 = v0 | 0xd078;
    if (cnd_) { goto L_0894BF54; }
    goto L_0894BF4C;
L_0894BF4C:;
    v0 = 0xcad60000u;
    goto L_0894BF50;
L_0894BF50:;
    v0 = v0 | 0xd076;
    goto L_0894BF54;
L_0894BF54:;
    ST32(t0+4, v0);
    v1 = 2;
    a0 = t1 + 0;
    v0 = LD32(s2+24);
    a1 = 1;
    a2 = 1;
    a3 = LD32(v0+4);
    ST32(t1, v1);
    ST32(t1+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BF7C;
L_0894BF7C:;
    goto L_0894BEA0;
L_0894BF84:;
    v0 = func_0894BD44(a0);
    goto L_0894BF8C;
L_0894BF8C:;
    a0 = v0 + 0;
    { rv_t r_ = func_08959894(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894BF94;
L_0894BF94:;
    ST32(s2+28, s1);
    goto L_0894BE94;
}

/* 0894BF9C */
rv_t func_0894BF9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894BF9C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26EC0 - (28352);
    t1 = D_08C26ED0 - (28368);
    t2 = D_08C26EE0 - (28384);
    a1 = a1 & a0;
    v1 = t0 + 28352;
    a2 = t1 + 28368;
    cnd_ = a1 == 0;
    a3 = t2 + 28384;
    if (cnd_) { goto L_0894C054; }
    goto L_0894BFCC;
L_0894BFCC:;
    v0 = D_08AEDB78 - (-9352);
    f4 = BITSF(LD32(v0-9352));
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
    ST32(t0+28352, FBITS(f2));
    ST32(t1+28368, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+28384, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894C054;
L_0894C054:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894C05C */
rv_t func_0894C05C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894C05C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894BF9C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C070;
L_0894C070:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894C07C */
rv_t func_0894C07C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894C07C:;
    sp = sp - 16;
    a2 = 1158;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894C094;
L_0894C094:;
    a3 = D_08B25AC0 - (23232);
    v1 = LD32(a3+23232);
    t4 = a3 + 23232;
    a2 = LD32(t4+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEDB88 - (-9336);
    ST32(s0+32, 0);
    f1 = (float)(s32)FBITS(f0);
    t0 = D_08B45A9C - (23196);
    f0 = BITSF(LD32(v0-9336));
    v0 = D_08AEDB84 - (-9340);
    ST32(s0+40, 0);
    f1 = f1 * f0;
    t1 = t0 + 23196;
    f0 = BITSF(LD32(v0-9340));
    v0 = D_08AF8E10 - (-29168);
    f1 = f1 + f1;
    t2 = s0 + 52;
    t3 = 999;
    a2 = a2 + v1;
    f1 = f1 + f0;
    v0 = v0 - 29168;
    ST32(t4+4, a2);
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+36, FBITS(f1));
    f2 = BITSF(LD32(t0+23196));
    f0 = BITSF(LD32(t1+8));
    f1 = BITSF(LD32(t1+4));
    ST32(a3+23232, v1);
    ST32(s0, v0);
    ST32(s0+48, t3);
    ST32(s0+52, FBITS(f2));
    ST32(s0+44, t3);
    ST32(t2+8, FBITS(f0));
    ST32(t2+4, FBITS(f1));
    ST32(s0+28, 0);
    { rv_t r_ = func_0894C7A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C140;
L_0894C140:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894C150 */
rv_t func_0894C150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894C150:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C168;
L_0894C168:;
    a0 = s1 + 0;
    v1 = LD32(v0+156);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v0+156, v1);
    v0 = 999;
    ST32(s1+44, v0);
    v0 = func_0894C79C(a0);
    goto L_0894C184;
L_0894C184:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C1A4;
L_0894C1A4:;
    a2 = D_08C2C9B8 - (-13896);
    s0 = v0 + 0;
    v0 = a2 - 13896;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0894C220; }
    goto L_0894C1D4;
L_0894C1D4:;
    a2 = LD32(a2-13896);
    a3 = a1 + 0;
    goto L_0894C1DC;
L_0894C1DC:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0894C210; }
    goto L_0894C1F4;
L_0894C1F4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0894C224; }
    goto L_0894C204;
L_0894C204:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894C1F4; }
    goto L_0894C210;
L_0894C210:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0894C1DC; }
    goto L_0894C220;
L_0894C220:;
    v0 = LD32(sp+8);
    goto L_0894C224;
L_0894C224:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0894C2D4; }
    goto L_0894C22C;
L_0894C22C:;
    v1 = LD32(v0);
    goto L_0894C230;
L_0894C230:;
    f1 = BITSF(LD32(s0));
    a0 = sp + 0;
    f0 = BITSF(LD32(v1+28));
    a1 = 1;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = v1 + 28;
    if (cnd_) { goto L_0894C2BC; }
    goto L_0894C250;
L_0894C250:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C2BC; }
    goto L_0894C264;
L_0894C264:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C2BC; }
    goto L_0894C27C;
L_0894C27C:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C2BC; }
    goto L_0894C290;
L_0894C290:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C2BC; }
    goto L_0894C2A8;
L_0894C2A8:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(v1+4); goto L_0894C30C; }
    goto L_0894C2BC;
L_0894C2BC:;
    { u64 r_ = func_08ABE9F8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894C2C4;
L_0894C2C4:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0894C230; }
    goto L_0894C2D0;
L_0894C2D0:;
    a0 = LD32(sp);
    goto L_0894C2D4;
L_0894C2D4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894C2FC; }
    goto L_0894C2E4;
L_0894C2E4:;
    goto L_0894C2E8;
L_0894C2E8:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894C2FC:;
    { u64 r_ = func_08ABEA90(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894C304;
L_0894C304:;
    goto L_0894C2E8;
L_0894C30C:;
    ST32(s1+44, v0);
    goto L_0894C2D0;
}

/* 0894C314 */
rv_t func_0894C314(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894C314:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C328;
L_0894C328:;
    v1 = LD32(v0+156);
    a0 = s0 + 0;
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    v0 = func_0894C79C(a0);
    goto L_0894C33C;
L_0894C33C:;
    v1 = LD32(v0+156);
    a0 = D_08C2A204 - (-24060);
    v1 = v1 | 0x8;
    ST32(v0+156, v1);
    v0 = 999;
    a1 = LD32(s0+48);
    cnd_ = a1 == v0;
    v1 = a0 - 24060;
    if (cnd_) { goto L_0894C3A8; }
    goto L_0894C35C;
L_0894C35C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24060);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0894C3A0; }
    goto L_0894C380;
L_0894C380:;
    v1 = LD32(a0);
    goto L_0894C384;
L_0894C384:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0894C3B8; }
    goto L_0894C390;
L_0894C390:;
    a0 = LD32(a0+4);
    goto L_0894C394;
L_0894C394:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0894C384; }
    goto L_0894C39C;
L_0894C39C:;
    v1 = 0 + 0;
    goto L_0894C3A0;
L_0894C3A0:;
    cnd_ = v1 != 0;
    if (cnd_) { ST8(v1+93, 0); goto L_0894C3A8; }
    goto L_0894C3A8;
L_0894C3A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894C3B8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0894C394; }
    goto L_0894C3C4;
L_0894C3C4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0894C394; }
    goto L_0894C3D0;
L_0894C3D0:;
    goto L_0894C3A0;
}

/* 0894C3D8 */
rv_t func_0894C3D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894C3D8:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_0894C400; }
    goto L_0894C3F0;
L_0894C3F0:;
    v0 = 0 + 0;
    goto L_0894C3F4;
L_0894C3F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894C400:;
    v1 = 0xe7a30000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0xa175;
    if (cnd_) { goto L_0894C3F0; }
    goto L_0894C40C;
L_0894C40C:;
    v0 = LD32(a1+4);
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_0894C3F4; }
    goto L_0894C418;
L_0894C418:;
    v1 = LD32(a0+28);
    v0 = 2;
    cnd_ = v1 != v0;
    a1 = 4;
    if (cnd_) { goto L_0894C3F0; }
    goto L_0894C428;
L_0894C428:;
    { rv_t r_ = func_0894C7A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C430;
L_0894C430:;
    v0 = 1;
    goto L_0894C3F4;
}

/* 0894C438 */
rv_t func_0894C438(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894C438:;
    sp = sp - 32;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894C4AC; }
    goto L_0894C45C;
L_0894C45C:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_0894C4AC; }
    goto L_0894C474;
L_0894C474:;
    v0 = v1 << 2;
    v1 = D_08ADA5C8 - (-23096);
    v1 = v1 - 23096;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894C490u: goto L_0894C490; case 0x0894C4ACu: goto L_0894C4AC; case 0x0894C4D4u: goto L_0894C4D4; case 0x0894C528u: goto L_0894C528; case 0x0894C6CCu: goto L_0894C6CC; default: rs_break(0, 0x0894c488); }
L_0894C490:;
    f1 = BITSF(LD32(s0+32));
    f0 = BITSF(LD32(s0+36));
    a0 = s0 + 0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a1 = 2;
    if (cnd_) { goto L_0894C4C4; }
    goto L_0894C4AC;
L_0894C4AC:;
    goto L_0894C4B0;
L_0894C4B0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894C4C4:;
    { rv_t r_ = func_0894C7A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C4CC;
L_0894C4CC:;
    goto L_0894C4B0;
L_0894C4D4:;
    v0 = D_08AEDB8C - (-9332);
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(v0-9332));
    a0 = s0 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a1 = 4;
    if (cnd_) { goto L_0894C4C4; }
    goto L_0894C4F4;
L_0894C4F4:;
    v0 = D_08AEDB90 - (-9328);
    f0 = BITSF(LD32(v0-9328));
    a0 = s0 + 0;
    ST32(sp, 0);
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, 0);
    v0 = func_0894C79C(a0);
    goto L_0894C510;
L_0894C510:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C520;
L_0894C520:;
    goto L_0894C4B0;
L_0894C528:;
    a0 = s0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C530;
L_0894C530:;
    a0 = s0 + 52;
    v1 = D_08AEDB94 - (-9324);
    f0 = BITSF(LD32(v1-9324));
    f3 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(s0+52));
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C570;
L_0894C570:;
    a0 = D_08C2C9B8 - (-13896);
    a1 = LD32(s0+44);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 13896;
    if (cnd_) { goto L_0894C688; }
    goto L_0894C584;
L_0894C584:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-13896);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0894C5C8; }
    goto L_0894C5A8;
L_0894C5A8:;
    a0 = LD32(v1);
    goto L_0894C5AC;
L_0894C5AC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_0894C6AC; }
    goto L_0894C5B8;
L_0894C5B8:;
    v1 = LD32(v1+4);
    goto L_0894C5BC;
L_0894C5BC:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_0894C5AC; }
    goto L_0894C5C4;
L_0894C5C4:;
    s1 = 0 + 0;
    goto L_0894C5C8;
L_0894C5C8:;
    cnd_ = s1 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+32)); goto L_0894C68C; }
    goto L_0894C5D0;
L_0894C5D0:;
    a0 = s0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C5D8;
L_0894C5D8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s2 = s1 + 28;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C5F8;
L_0894C5F8:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s1+28));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894C680; }
    goto L_0894C610;
L_0894C610:;
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a1 = 5;
    if (cnd_) { goto L_0894C4C4; }
    goto L_0894C624;
L_0894C624:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C4C4; }
    goto L_0894C63C;
L_0894C63C:;
    f0 = BITSF(LD32(s2+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C4C4; }
    goto L_0894C650;
L_0894C650:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s2+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0894C4C4; }
    goto L_0894C668;
L_0894C668:;
    f0 = BITSF(LD32(s2+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_0894C4B0; }
    goto L_0894C67C;
L_0894C67C:;
    a0 = s0 + 0;
    goto L_0894C680;
L_0894C680:;
    a1 = 5;
    goto L_0894C4C4;
L_0894C688:;
    f1 = BITSF(LD32(s0+32));
    goto L_0894C68C;
L_0894C68C:;
    f0 = BITSF(LD32(s0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0894C4B0; }
    goto L_0894C6A0;
L_0894C6A0:;
    a0 = s0 + 0;
    a1 = 6;
    goto L_0894C4C4;
L_0894C6AC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0894C5BC; }
    goto L_0894C6B8;
L_0894C6B8:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0894C5B8; }
    goto L_0894C6C4;
L_0894C6C4:;
    goto L_0894C5C8;
L_0894C6CC:;
    a0 = s0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C6D4;
L_0894C6D4:;
    a0 = s0 + 52;
    v1 = D_08AEDB94 - (-9324);
    f0 = BITSF(LD32(v1-9324));
    f3 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(s0+52));
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    { rv_t r_ = func_0895966C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C714;
L_0894C714:;
    f1 = BITSF(LD32(s0+32));
    goto L_0894C68C;
}

/* 0894C71C */
rv_t func_0894C71C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894C71C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C730;
L_0894C730:;
    v1 = D_08B1B670 - (-18832);
    a1 = LD32(s0+28);
    v1 = v1 - 18832;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDB98 - (-9320);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9320));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C76C;
L_0894C76C:;
    a0 = s0 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C774;
L_0894C774:;
    v0 = v0 + 64;
    v1 = D_08AEDB9C - (-9316);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9316));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894C79C */
u32 func_0894C79C(u32 a0)
{
    u32 v0 = 0;
L_0894C79C:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894C7A4 */
rv_t func_0894C7A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_0894C7A4:;
    sp = sp - 112;
    v0 = a1 < 0x8u;
    s3 = a0 + 0;
    ST32(a0+28, a1);
    cnd_ = v0 == 0;
    ST32(a0+32, 0);
    if (cnd_) { goto L_0894C80C; }
    goto L_0894C7E0;
L_0894C7E0:;
    v1 = D_08ADA664 - (-22940);
    v0 = a1 << 2;
    v1 = v1 - 22940;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894C7FCu: goto L_0894C7FC; case 0x0894C80Cu: goto L_0894C80C; case 0x0894C838u: goto L_0894C838; case 0x0894CB7Cu: goto L_0894CB7C; case 0x0894CBD4u: goto L_0894CBD4; default: rs_break(0, 0x0894c7f4); }
L_0894C7FC:;
    a0 = s3 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C804;
L_0894C804:;
    a0 = LD32(v0+48);
    { rv_t r_ = func_089D2950(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C80C;
L_0894C80C:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0894C838:;
    a0 = s3 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894C840;
L_0894C840:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s6 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894C860;
L_0894C860:;
    a2 = D_08C2A204 - (-24060);
    v1 = a2 - 24060;
    s0 = v0 + 0;
    v0 = LD32(v1+8);
    a1 = LD32(v1+4);
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    v0 = D_08AEDBA0 - (-9312);
    f20 = BITSF(LD32(v0-9312));
    ST32(sp, v1);
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0894C8E4; }
    goto L_0894C898;
L_0894C898:;
    a2 = LD32(a2-24060);
    a3 = a1 + 0;
    goto L_0894C8A0;
L_0894C8A0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0894C8D4; }
    goto L_0894C8B8;
L_0894C8B8:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0894C8E8; }
    goto L_0894C8C8;
L_0894C8C8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894C8B8; }
    goto L_0894C8D4;
L_0894C8D4:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0894C8A0; }
    goto L_0894C8E4;
L_0894C8E4:;
    v0 = LD32(sp+8);
    goto L_0894C8E8;
L_0894C8E8:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_0894C98C; }
    goto L_0894C8F0;
L_0894C8F0:;
    v1 = LD32(v0);
    goto L_0894C8F4;
L_0894C8F4:;
    v0 = LD32(v1+36);
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0894C974; }
    goto L_0894C900;
L_0894C900:;
    v0 = v1 + 64;
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(v1+64));
    f5 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f0;
    f2 = f2 - f5;
    f4 = f4 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0894C974; }
    goto L_0894C968;
L_0894C968:;
    f20 = BITSF(v0);
    s6 = v1 + 0;
    a0 = sp + 0;
    goto L_0894C974;
L_0894C974:;
    a1 = 1;
    { u64 r_ = func_08ABDE1C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894C97C;
L_0894C97C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0894C8F4; }
    goto L_0894C988;
L_0894C988:;
    s1 = LD32(sp);
    goto L_0894C98C;
L_0894C98C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0894CA10; }
    goto L_0894C99C;
L_0894C99C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0894CA10; }
    goto L_0894C9A8;
L_0894C9A8:;
    v0 = LD32(s1);
    goto L_0894C9AC;
L_0894C9AC:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0894CA00; }
    goto L_0894C9C0;
L_0894C9C0:;
    v0 = LD_U8(s0+8);
    goto L_0894C9C4;
L_0894C9C4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0894CB74; }
    goto L_0894C9CC;
L_0894C9CC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894CB64; }
    goto L_0894C9D4;
L_0894C9D4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0894C9DC;
L_0894C9DC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894C9E8;
L_0894C9E8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0894C9F4;
L_0894C9F4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0894C9C4; }
    goto L_0894C9FC;
L_0894C9FC:;
    v1 = LD32(s1+4);
    goto L_0894CA00;
L_0894CA00:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0894C9AC; }
    goto L_0894CA10;
L_0894CA10:;
    cnd_ = s6 == 0;
    v0 = D_08AEDBA4 - (-9308);
    if (cnd_) { goto L_0894CA2C; }
    goto L_0894CA18;
L_0894CA18:;
    f0 = BITSF(LD32(v0-9308));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0894CA7C; }
    goto L_0894CA2C;
L_0894CA2C:;
    a0 = s3 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894CA34;
L_0894CA34:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894CA54;
L_0894CA54:;
    f0 = BITSF(LD32(v0+8));
    ST32(s3+52, FBITS(f0));
    f1 = BITSF(LD32(v0+20));
    ST32(s3+56, FBITS(f1));
    f0 = BITSF(LD32(v0+32));
    ST32(s3+60, FBITS(f0));
    goto L_0894CA6C;
L_0894CA6C:;
    v0 = D_08AEDBA8 - (-9304);
    f0 = BITSF(LD32(v0-9304));
    goto L_0894CA74;
L_0894CA74:;
    ST32(s3+40, FBITS(f0));
    goto L_0894C80C;
L_0894CA7C:;
    a0 = s3 + 0;
    v0 = func_0894C79C(a0);
    goto L_0894CA84;
L_0894CA84:;
    a0 = LD32(v0+48);
    s0 = s6 + 40;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s1 = s3 + 52;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894CAA8;
L_0894CAA8:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s6+40));
    f3 = BITSF(LD32(s0+4));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f5);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(s3+52, FBITS(f4));
    ST32(s1+4, FBITS(f3));
    cnd_ = fcc;
    ST32(s1+8, FBITS(f5));
    if (cnd_) { goto L_0894CB50; }
    goto L_0894CB18;
L_0894CB18:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(s1+8, FBITS(f3));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(s3+52, v0);
    ST32(s1+4, v1);
    goto L_0894CB50;
L_0894CB50:;
    v1 = LD32(s6+4);
    v0 = 1;
    ST8(s6+93, v0);
    ST32(s3+48, v1);
    goto L_0894CA6C;
L_0894CB64:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_0894C9DC;
L_0894CB74:;
    s0 = LD32(s0+4);
    goto L_0894C9F4;
L_0894CB7C:;
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
    v1 = D_08AEDBB0 - (-9296);
    a0 = a0 + v0;
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v1-9296));
    v1 = D_08AEDBAC - (-9300);
    ST32(a2+4, a0);
    f0 = f0 * f1;
    f1 = BITSF(LD32(v1-9300));
    ST32(a1+23232, v0);
    f0 = f0 + f0;
    f0 = f0 + f1;
    goto L_0894CA74;
L_0894CBD4:;
    v0 = LD32(s3+8);
    v0 = v0 | 0x8;
    ST32(s3+8, v0);
    goto L_0894C80C;
}

/* 0894CBE4 */
rv_t func_0894CBE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894CBE4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C26F70 - (28528);
    t1 = D_08C26F80 - (28544);
    t2 = D_08C26F90 - (28560);
    a1 = a1 & a0;
    v1 = t0 + 28528;
    a2 = t1 + 28544;
    cnd_ = a1 == 0;
    a3 = t2 + 28560;
    if (cnd_) { goto L_0894CC9C; }
    goto L_0894CC14;
L_0894CC14:;
    v0 = D_08AEDBB4 - (-9292);
    f4 = BITSF(LD32(v0-9292));
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
    ST32(t0+28528, FBITS(f2));
    ST32(t1+28544, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+28560, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894CC9C;
L_0894CC9C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894CCA4 */
rv_t func_0894CCA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894CCA4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894CBE4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894CCB8;
L_0894CCB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894CCC4 */
rv_t func_0894CCC4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894CCC4:;
    sp = sp - 16;
    a2 = 1159;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894CCDC;
L_0894CCDC:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a0 = 999;
    f2 = BITSF(LD32(v0+23196));
    v0 = D_08AF8E48 - (-29112);
    v0 = v0 - 29112;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0+52, a0);
    v1 = s0 + 40;
    ST32(s0, v0);
    ST32(s0+40, FBITS(f2));
    ST32(s0+28, 0);
    ST32(s0+36, a0);
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894CD30 */
u64 func_0894CD30(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_0894CD30:;
    sp = sp - 336;
    a2 = D_08C2A204 - (-24060);
    v0 = 999;
    v1 = a2 - 24060;
    s1 = a0 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0894D444; }
    goto L_0894CD64;
L_0894CD64:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-24060);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0894CDA8; }
    goto L_0894CD88;
L_0894CD88:;
    v1 = LD32(a0);
    goto L_0894CD8C;
L_0894CD8C:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0894D464; }
    goto L_0894CD98;
L_0894CD98:;
    a0 = LD32(a0+4);
    goto L_0894CD9C;
L_0894CD9C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0894CD8C; }
    goto L_0894CDA4;
L_0894CDA4:;
    s0 = 0 + 0;
    goto L_0894CDA8;
L_0894CDA8:;
    cnd_ = s0 == 0;
    s3 = s0 + 40;
    if (cnd_) { goto L_0894D444; }
    goto L_0894CDB0;
L_0894CDB0:;
    v0 = LD32(s0+36);
    ST32(s1+36, a1);
    cnd_ = v0 == 0;
    s2 = s0 + 52;
    if (cnd_) { goto L_0894D2CC; }
    goto L_0894CDC0;
L_0894CDC0:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894CDC8;
L_0894CDC8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894CDE8;
L_0894CDE8:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    f4 = BITSF(LD32(s0+52));
    f0 = BITSF(LD32(s3+4));
    f1 = BITSF(LD32(s3+8));
    f5 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s0+40));
    f3 = BITSF(LD32(s2+4));
    f5 = f5 - f1;
    f4 = f4 - f2;
    f3 = f3 - f0;
    f1 = BITSF(0);
    v0 = FBITS(f5);
    v1 = FBITS(f4);
    a1 = FBITS(f3);
    {v[12]=BITSF(v1);}
    {v[13]=BITSF(a1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0894CEB0; }
    goto L_0894CE7C;
L_0894CE7C:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {a1=FBITS(vr2);}
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, a1);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    goto L_0894CEB0;
L_0894CEB0:;
    v1 = LD32(sp+16);
    a0 = LD32(sp+20);
    a1 = LD32(sp+24);
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {vr1=BITSF(a0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = LD32(sp);
    {u32 a_=sp+(144);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v1);}
    {v[8]=BITSF(v0);}
    {v[5]=BITSF(a0);}
    v0 = LD32(sp+4);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v[9]=BITSF(v0);}
    {v[6]=BITSF(a1);}
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    v0 = LD32(sp+8);
    {v[10]=BITSF(v0);}
    {float s0=vr4;float s1=v[5];float s2=v[6];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    v0 = D_08AEDBC4 - (-9276);
    f20 = BITSF(LD32(v0-9276));
    f1 = f0 / f2;
    s2 = D_08AEDBC0 - (-9280);
    fcc = FCMP(f1, f20, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(s2-9280));
    if (cnd_) { goto L_0894CF48; }
    goto L_0894CF34;
L_0894CF34:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f20 = f0;
    if (cnd_) { goto L_0894CF48; }
    goto L_0894CF44;
L_0894CF44:;
    f20 = f1;
    goto L_0894CF48;
L_0894CF48:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894CF50;
L_0894CF50:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894CF70;
L_0894CF70:;
    f3 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f7 = BITSF(LD32(sp+8));
    a1 = FBITS(f2);
    v0 = FBITS(f1);
    v1 = FBITS(f3);
    {u32 a_=sp+(192);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(a1);}
    a1 = FBITS(f4);
    {v[5]=BITSF(v0);}
    {vr0=BITSF(a1);}
    {v[6]=BITSF(v1);}
    v0 = FBITS(f5);
    v1 = FBITS(f7);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=v[5];float s2=v[6];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {a1=FBITS(vr4);}
    f0 = BITSF(a1);
    f6 = f20;
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f20, f0, 14);
    ST32(sp+36, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_0894CFE8; }
    goto L_0894CFE4;
L_0894CFE4:;
    f6 = BITSF(a1);
    goto L_0894CFE8;
L_0894CFE8:;
    v0 = FBITS(f6);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    {vr4=1.57079632679f;}
    f20 = BITSF(LD32(s2-9280));
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    f3 = BITSF(FBITS(f7) ^ 0x80000000u);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    s2 = s1 + 40;
    ST32(sp+88, FBITS(f3));
    a0 = s1 + 0;
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f5));
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEDBC8 - (-9272);
    f0 = BITSF(LD32(v0-9272));
    v0 = D_08AEDBCC - (-9268);
    f1 = f1 * f0;
    f1 = f20 - f1;
    f0 = f1 * f1;
    f0 = f0 * f1;
    f1 = f20 - f0;
    f0 = BITSF(LD32(v0-9268));
    f21 = f1 * f0;
    f4 = f4 * f21;
    f5 = f5 * f21;
    f3 = f3 * f21;
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f3));
    f0 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s3+4));
    f2 = BITSF(LD32(s3+8));
    f0 = f0 + f4;
    f1 = f1 + f5;
    f2 = f2 + f3;
    ST32(s1+40, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f2));
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v0 = func_0894E1C8(a0);
    goto L_0894D0AC;
L_0894D0AC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D0CC;
L_0894D0CC:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s1+40));
    f3 = BITSF(LD32(s2+4));
    f4 = BITSF(LD32(s2+8));
    f2 = f2 - f0;
    f3 = f3 - f1;
    f4 = f4 - f5;
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    a0 = FBITS(f4);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    f8 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f5 = sqrtf(f0);
    f7 = BITSF(LD32(sp+8));
    f9 = BITSF(a1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    a1 = FBITS(f7);
    v0 = FBITS(f8);
    {vr1=BITSF(v1);}
    {vr4=BITSF(v0);}
    {vr2=BITSF(a0);}
    v1 = FBITS(f6);
    {v[5]=BITSF(v1);}
    {v[6]=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AEDBD0 - (-9264);
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f3));
    f20 = f20 / f5;
    f1 = f0 * f20;
    f0 = BITSF(LD32(v0-9264));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f4));
    if (cnd_) { goto L_0894D224; }
    goto L_0894D18C;
L_0894D18C:;
    v0 = D_08AEDBD4 - (-9260);
    f0 = BITSF(LD32(v0-9260));
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_0894D228; }
    goto L_0894D1A4;
L_0894D1A4:;
    v0 = D_08AEDBD8 - (-9256);
    f0 = BITSF(LD32(v0-9256));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    v0 = D_08AEDBBC - (-9284);
    if (cnd_) { goto L_0894D260; }
    goto L_0894D1BC;
L_0894D1BC:;
    f0 = BITSF(FBITS(f6) ^ 0x80000000u);
    f1 = BITSF(FBITS(f7) ^ 0x80000000u);
    f4 = BITSF(FBITS(f8) ^ 0x80000000u);
    v0 = D_08AEDBDC - (-9252);
    f3 = BITSF(LD32(v0-9252));
    ST32(sp+104, FBITS(f1));
    f5 = f1 * f3;
    ST32(sp+96, FBITS(f4));
    f4 = f4 * f3;
    f3 = f0 * f3;
    ST32(sp+100, FBITS(f0));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f5));
    f1 = BITSF(LD32(s0+40));
    f2 = BITSF(LD32(s3+8));
    f0 = BITSF(LD32(s3+4));
    f1 = f1 + f4;
    f2 = f2 + f5;
    f0 = f0 + f3;
    ST32(s1+40, FBITS(f1));
    ST32(s2+8, FBITS(f2));
    ST32(s2+4, FBITS(f0));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    goto L_0894D224;
L_0894D224:;
    a0 = s1 + 0;
    goto L_0894D228;
L_0894D228:;
    a1 = 1;
    goto L_0894D22C;
L_0894D22C:;
    { u64 r_ = func_0894E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894D234;
L_0894D234:;
    v1 = 1;
    goto L_0894D238;
L_0894D238:;
    v0 = v1 + 0;
    sp = sp + 336;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;return (u64)v0 | ((u64)v1 << 32); }
L_0894D260:;
    f0 = BITSF(LD32(v0-9284));
    f2 = BITSF(FBITS(f6) ^ 0x80000000u);
    f1 = BITSF(FBITS(f7) ^ 0x80000000u);
    f0 = f21 + f0;
    f4 = BITSF(FBITS(f8) ^ 0x80000000u);
    ST32(sp+52, FBITS(f2));
    f5 = f1 * f0;
    ST32(sp+48, FBITS(f4));
    f4 = f4 * f0;
    f0 = f2 * f0;
    ST32(sp+56, FBITS(f1));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f5));
    f2 = BITSF(LD32(s0+40));
    f3 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(s3+4));
    f2 = f2 + f4;
    f3 = f3 + f5;
    f1 = f1 + f0;
    ST32(s1+40, FBITS(f2));
    ST32(s2+8, FBITS(f3));
    ST32(s2+4, FBITS(f1));
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f3));
    goto L_0894D224;
L_0894D2CC:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894D2D4;
L_0894D2D4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D2F4;
L_0894D2F4:;
    a2 = v0 + 0;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a3 = sp + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;func_08835730(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];});
    goto L_0894D308;
L_0894D308:;
    f1 = BITSF(LD32(s0+40));
    f3 = BITSF(LD32(s3+4));
    f7 = BITSF(LD32(sp));
    f8 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(s3+8));
    f1 = f7 - f1;
    f3 = f8 - f3;
    f6 = BITSF(LD32(sp+8));
    v0 = D_08AEDBB8 - (-9288);
    f0 = f1 * f1;
    f2 = f6 - f2;
    f5 = f3 * f3;
    f9 = BITSF(LD32(v0-9288));
    ST32(sp+16, FBITS(f1));
    f4 = f2 * f2;
    f0 = f0 + f5;
    ST32(sp+20, FBITS(f3));
    f0 = f0 + f4;
    fcc = FCMP(f0, f9, 12);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_0894CDC0; }
    goto L_0894D360;
L_0894D360:;
    f1 = BITSF(LD32(s0+52));
    f2 = BITSF(LD32(s2+4));
    f3 = BITSF(LD32(s2+8));
    f1 = f7 - f1;
    f2 = f8 - f2;
    f3 = f6 - f3;
    f0 = f1 * f1;
    f4 = f2 * f2;
    f5 = f3 * f3;
    ST32(sp+16, FBITS(f1));
    f0 = f0 + f4;
    ST32(sp+20, FBITS(f2));
    f0 = f0 + f5;
    fcc = FCMP(f0, f9, 12);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_0894CDC0; }
    goto L_0894D3A4;
L_0894D3A4:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894D3AC;
L_0894D3AC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D3CC;
L_0894D3CC:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    v1 = FBITS(f2);
    {vr0=BITSF(v0);}
    a1 = FBITS(f1);
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f4 = BITSF(v0);
    v0 = D_08AEDBBC - (-9284);
    f0 = BITSF(LD32(v0-9284));
    a0 = s1 + 0;
    a1 = 3;
    fcc = FCMP(f4, f0, 12);
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_0894CDC0; }
    goto L_0894D43C;
L_0894D43C:;
    goto L_0894D22C;
L_0894D444:;
    a0 = s1 + 0;
    a1 = 4;
    { u64 r_ = func_0894E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894D450;
L_0894D450:;
    v0 = LD32(s1+8);
    v1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_0894D238;
L_0894D464:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_0894CD98; }
    goto L_0894D470;
L_0894D470:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0894CD9C; }
    goto L_0894D47C;
L_0894D47C:;
    goto L_0894CDA8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;
}

/* 0894D484 */
rv_t func_0894D484(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894D484:;
    sp = sp - 16;
    v0 = func_0894E1C8(a0);
    goto L_0894D494;
L_0894D494:;
    v1 = LD32(v0+156);
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894D4AC */
rv_t func_0894D4AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0894D4AC:;
    sp = sp - 48;
    a2 = 1;
    s2 = D_08ADDB2C - (-9428);
    s0 = a0 + 0;
    s0 = s0 + 40;
    a1 = LD32(a0+36);
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894D4E4;
L_0894D4E4:;
    a2 = D_08C29E54 - (-25004);
    s1 = v0 + 0;
    a0 = s0 + 0;
    a2 = a2 - 25004;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0894D554; }
    goto L_0894D500;
L_0894D500:;
    v0 = D_08AEDBE0 - (-9248);
    f20 = BITSF(LD32(v0-9248));
    f12 = BITSF(LD32(s2-9428));
    ST32(sp, FBITS(f20));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D514;
L_0894D514:;
    a2 = D_08C29E64 - (-24988);
    f12 = BITSF(LD32(s2-9428));
    a0 = s1 + 40;
    a2 = a2 - 24988;
    a1 = sp + 4;
    a3 = 0 + 0;
    ST32(sp+4, FBITS(f20));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D534;
L_0894D534:;
    a2 = D_08C29E84 - (-24956);
    f12 = BITSF(LD32(s2-9428));
    a0 = s1 + 52;
    a2 = a2 - 24956;
    a1 = sp + 8;
    a3 = 0 + 0;
    ST32(sp+8, FBITS(f20));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D554;
L_0894D554:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0894D570 */
rv_t func_0894D570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[512] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 512);
L_0894D570:;
    sp = sp - 512;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_0894D5F0; }
    goto L_0894D5B8;
L_0894D5B8:;
    goto L_0894D5BC;
L_0894D5BC:;
    sp = sp + 512;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
L_0894D5F0:;
    f0 = BITSF(LD32(a0+32));
    a1 = LD32(a0+36);
    a0 = D_08C2A204 - (-24060);
    f0 = f0 + f12;
    a0 = a0 - 24060;
    a2 = 1;
    ST32(s1+32, FBITS(f0));
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894D610;
L_0894D610:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0894DE28; }
    goto L_0894D618;
L_0894D618:;
    v1 = LD32(s1+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0894E13C; }
    goto L_0894D628;
L_0894D628:;
    v0 = v1 << 2;
    v1 = D_08ADA688 - (-22904);
    v1 = v1 - 22904;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894D5B8u: goto L_0894D5B8; case 0x0894D644u: goto L_0894D644; case 0x0894D964u: goto L_0894D964; case 0x0894DE48u: goto L_0894DE48; case 0x0894E138u: goto L_0894E138; default: rs_break(0, 0x0894d63c); }
L_0894D644:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894D64C;
L_0894D64C:;
    a0 = LD32(v0+48);
    s0 = s1 + 40;
    f23 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = sp + 16;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D674;
L_0894D674:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s1+40));
    f2 = BITSF(LD32(s0+4));
    f3 = f3 - f5;
    f1 = f1 - f0;
    f2 = f2 - f4;
    a0 = s1 + 0;
    ST32(sp+24, FBITS(f3));
    v0 = FBITS(f1);
    v1 = FBITS(f2);
    ST32(sp+20, FBITS(f2));
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    ST32(sp+4, FBITS(f2));
    v0 = FBITS(f3);
    ST32(sp+8, FBITS(f3));
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    ST32(sp+16, FBITS(f1));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f22 = BITSF(v1);
    ST32(sp, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894D6E0;
L_0894D6E0:;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDBE4 - (-9244);
    f0 = BITSF(LD32(v0-9244));
    a0 = s1 + 0;
    f1 = f1 * f0;
    ST32(sp+112, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894D6FC;
L_0894D6FC:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0+120));
    ST32(sp+116, FBITS(f0));
    v0 = func_0894E1C8(a0);
    goto L_0894D70C;
L_0894D70C:;
    a1 = sp + 116;
    f0 = BITSF(LD32(v0+124));
    a2 = sp + 120;
    a0 = sp + 112;
    ST32(sp+120, FBITS(f0));
    f0 = func_0894E358(a0, a1, a2);
    goto L_0894D724;
L_0894D724:;
    a0 = s1 + 0;
    f21 = f0;
    v0 = func_0894E1C8(a0);
    goto L_0894D730;
L_0894D730:;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDBE8 - (-9240);
    f0 = BITSF(LD32(v0-9240));
    a0 = s1 + 0;
    f1 = f1 * f0;
    ST32(sp+124, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894D74C;
L_0894D74C:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0+120));
    ST32(sp+128, FBITS(f0));
    v0 = func_0894E1C8(a0);
    goto L_0894D75C;
L_0894D75C:;
    a1 = sp + 128;
    f0 = BITSF(LD32(v0+124));
    a2 = sp + 132;
    a0 = sp + 124;
    ST32(sp+132, FBITS(f0));
    f0 = func_0894E358(a0, a1, a2);
    goto L_0894D774;
L_0894D774:;
    a0 = s1 + 0;
    f20 = f0;
    v0 = func_0894E1C8(a0);
    goto L_0894D780;
L_0894D780:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D7A0;
L_0894D7A0:;
    f5 = sqrtf(f22);
    f4 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = FBITS(f2);
    v0 = FBITS(f1);
    {v[4]=BITSF(v1);}
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(v0);}
    v1 = FBITS(f4);
    v0 = LD32(sp);
    {v[6]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = LD32(sp+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    f3 = f0 / f5;
    fcc = FCMP(f23, f3, 14);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_0894D814; }
    goto L_0894D810;
L_0894D810:;
    f3 = f23;
    goto L_0894D814;
L_0894D814:;
    f0 = f3 * f3;
    f1 = f20 - f21;
    a0 = s1 + 0;
    f0 = f0 * f3;
    f0 = f3 * f0;
    f0 = f0 * f1;
    f20 = f21 + f0;
    v0 = func_0894E1C8(a0);
    goto L_0894D834;
L_0894D834:;
    a0 = LD32(v0+48);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    v1 = LD32(a0+204);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0894D91C; }
    goto L_0894D84C;
L_0894D84C:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894D854;
L_0894D854:;
    a0 = v0 + 0;
    a1 = s1 + 52;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08959914(a0, a1, 0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; });
    goto L_0894D860;
L_0894D860:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0894D91C; }
    goto L_0894D868;
L_0894D868:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894D870;
L_0894D870:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08959B7C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; });
    goto L_0894D87C;
L_0894D87C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D890;
L_0894D890:;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    {u32 a_=sp+(224);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    v0 = FBITS(f2);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    fcc = FCMP(f0, f23, 2);
    ST32(sp+52, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f4));
    if (cnd_) { goto L_0894D910; }
    goto L_0894D8D8;
L_0894D8D8:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(vr1);}
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    goto L_0894D910;
L_0894D910:;
    a0 = sp + 48;
    a1 = s2 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_08959CC8(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_0894D91C;
L_0894D91C:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894D924;
L_0894D924:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08959780(a0, a1, a2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894D938;
L_0894D938:;
    v0 = D_08AEDBF0 - (-9232);
    f0 = BITSF(LD32(v0-9232));
    a0 = s1 + 0;
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    a1 = 2;
    if (cnd_) { goto L_0894D5B8; }
    goto L_0894D954;
L_0894D954:;
    { u64 r_ = func_0894E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894D95C;
L_0894D95C:;
    goto L_0894D5BC;
L_0894D964:;
    s3 = s2 + 40;
    s0 = s1 + 40;
    f0 = BITSF(LD32(s1+40));
    f3 = BITSF(LD32(s2+40));
    f4 = BITSF(LD32(s3+4));
    f5 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = f3 - f0;
    f4 = f4 - f1;
    f5 = f5 - f2;
    f25 = BITSF(0);
    a0 = FBITS(f3);
    v0 = FBITS(f4);
    v1 = FBITS(f5);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {vr0=BITSF(a0);}
    {v[12]=BITSF(a0);}
    {vr1=BITSF(v0);}
    {v[13]=BITSF(v0);}
    {vr2=BITSF(v1);}
    {v[14]=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    fcc = FCMP(f0, f25, 2);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    ST32(sp+52, FBITS(f4));
    {v1=FBITS(vr0);}
    f23 = BITSF(v1);
    ST32(sp+56, FBITS(f5));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f5));
    if (cnd_) { goto L_0894DA34; }
    goto L_0894D9FC;
L_0894D9FC:;
    {float s0=v[4];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_0894DA34;
L_0894DA34:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894DA3C;
L_0894DA3C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DA5C;
L_0894DA5C:;
    v1 = D_08AEDBEC - (-9236);
    f24 = BITSF(LD32(v1-9236));
    f5 = BITSF(LD32(sp+72));
    f3 = BITSF(LD32(sp+64));
    f0 = f24 / f23;
    f2 = BITSF(LD32(sp+68));
    f7 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+4));
    f11 = BITSF(LD32(s0+8));
    f9 = BITSF(LD32(s1+40));
    f10 = BITSF(LD32(s0+4));
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f4 = f4 - f9;
    f6 = f6 - f10;
    f5 = f5 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    f7 = f7 - f11;
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {vr1=BITSF(v0);}
    v0 = FBITS(f5);
    {vr2=BITSF(v0);}
    v0 = D_08AEDBF4 - (-9228);
    {v[4]=BITSF(v1);}
    f0 = BITSF(LD32(v0-9228));
    v1 = FBITS(f6);
    {v[5]=BITSF(v1);}
    v1 = FBITS(f7);
    {v[6]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f1 = BITSF(v1);
    ST32(sp+32, FBITS(f4));
    f8 = f1 + f0;
    ST32(sp+36, FBITS(f6));
    fcc = FCMP(f8, f23, 14);
    ST32(sp+40, FBITS(f7));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0894DB18; }
    goto L_0894DB14;
L_0894DB14:;
    f8 = f23;
    goto L_0894DB18;
L_0894DB18:;
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+56));
    f0 = f0 * f8;
    f2 = f2 * f8;
    f1 = f1 * f8;
    a0 = s1 + 0;
    f3 = f9 + f0;
    f4 = f10 + f2;
    f5 = f11 + f1;
    ST32(sp, FBITS(f0));
    ST32(sp+24, FBITS(f5));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894DB5C;
L_0894DB5C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DB7C;
L_0894DB7C:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+20));
    v0 = D_08AEDBF8 - (-9224);
    f0 = f0 - f4;
    f1 = f1 - f3;
    a2 = D_08C29E54 - (-25004);
    f12 = f20;
    ST32(sp+8, FBITS(f0));
    a3 = 0 + 0;
    a2 = a2 - 25004;
    f0 = BITSF(LD32(v0-9224));
    a1 = sp + 136;
    a0 = sp + 16;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+136, FBITS(f0));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_0897B28C(a0, a1, a2, a3, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DBD4;
L_0894DBD4:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894DBDC;
L_0894DBDC:;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDBE4 - (-9244);
    f0 = BITSF(LD32(v0-9244));
    a0 = s1 + 0;
    f1 = f1 * f0;
    ST32(sp+140, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894DBF8;
L_0894DBF8:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0+120));
    ST32(sp+144, FBITS(f0));
    v0 = func_0894E1C8(a0);
    goto L_0894DC08;
L_0894DC08:;
    a1 = sp + 144;
    f0 = BITSF(LD32(v0+124));
    a2 = sp + 148;
    a0 = sp + 140;
    ST32(sp+148, FBITS(f0));
    f0 = func_0894E358(a0, a1, a2);
    goto L_0894DC20;
L_0894DC20:;
    a0 = s1 + 0;
    f22 = f0;
    v0 = func_0894E1C8(a0);
    goto L_0894DC2C;
L_0894DC2C:;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDBE8 - (-9240);
    f0 = BITSF(LD32(v0-9240));
    a0 = s1 + 0;
    f1 = f1 * f0;
    ST32(sp+152, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894DC48;
L_0894DC48:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0+120));
    ST32(sp+156, FBITS(f0));
    v0 = func_0894E1C8(a0);
    goto L_0894DC58;
L_0894DC58:;
    a1 = sp + 156;
    f0 = BITSF(LD32(v0+124));
    a2 = sp + 160;
    a0 = sp + 152;
    ST32(sp+160, FBITS(f0));
    f0 = func_0894E358(a0, a1, a2);
    goto L_0894DC70;
L_0894DC70:;
    a0 = s1 + 0;
    f21 = f0;
    v0 = func_0894E1C8(a0);
    goto L_0894DC7C;
L_0894DC7C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DC9C;
L_0894DC9C:;
    v1 = LD32(sp);
    a1 = LD32(sp+4);
    a0 = LD32(sp+8);
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {vr1=BITSF(a1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f3 = BITSF(LD32(v0+8));
    {u32 a_=sp+(304);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[8]=BITSF(v1);}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f5 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+20));
    f1 = f24 / f0;
    {v[5]=BITSF(a1);}
    v0 = FBITS(f2);
    {v[6]=BITSF(a0);}
    {v[9]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[10]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f2));
    f4 = f0 * f1;
    fcc = FCMP(f25, f4, 14);
    cnd_ = fcc;
    ST32(sp+88, FBITS(f5));
    if (cnd_) { goto L_0894DD30; }
    goto L_0894DD2C;
L_0894DD2C:;
    f4 = f25;
    goto L_0894DD30;
L_0894DD30:;
    f20 = f4 * f4;
    a0 = s1 + 0;
    f20 = f20 * f4;
    f20 = f4 * f20;
    v0 = func_0894E1C8(a0);
    goto L_0894DD44;
L_0894DD44:;
    f0 = f21 - f22;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    f20 = f20 * f0;
    f20 = f22 + f20;
    f12 = f20;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08959780(a0, a1, a2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DD64;
L_0894DD64:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894DD6C;
L_0894DD6C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DD8C;
L_0894DD8C:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s2+40));
    f4 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(s3+4));
    f3 = f3 - f2;
    f4 = f4 - f5;
    f1 = f1 - f0;
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {vr0=BITSF(v0);}
    v1 = FBITS(f1);
    v0 = FBITS(f4);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    v0 = D_08AEDBF0 - (-9232);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f0 = BITSF(LD32(v0-9232));
    {v1=FBITS(vr0);}
    f2 = BITSF(v1);
    ST32(sp+96, FBITS(f3));
    fcc = FCMP(f2, f0, 12);
    ST32(sp+100, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+104, FBITS(f4));
    if (cnd_) { goto L_0894DE34; }
    goto L_0894DDF4;
L_0894DDF4:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894DDFC;
L_0894DDFC:;
    f0 = BITSF(LD32(v0+120));
    v0 = D_08AEDBFC - (-9220);
    f2 = BITSF(LD32(s1+32));
    f0 = f24 / f0;
    f1 = BITSF(LD32(v0-9220));
    f0 = f23 * f0;
    goto L_0894DE14;
L_0894DE14:;
    f0 = f0 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0894D5BC; }
    goto L_0894DE28;
L_0894DE28:;
    a0 = s1 + 0;
    a1 = 4;
    goto L_0894D954;
L_0894DE34:;
    a0 = s1 + 0;
    a1 = 3;
    { u64 r_ = func_0894E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894DE40;
L_0894DE40:;
    goto L_0894DDF4;
L_0894DE48:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894DE50;
L_0894DE50:;
    a0 = LD32(v0+48);
    s0 = s2 + 52;
    s3 = s2 + 40;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s4 = sp + 96;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DE78;
L_0894DE78:;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s2+52));
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f0));
    f1 = BITSF(LD32(s2+52));
    f2 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(s2+40));
    f0 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s3+8));
    f1 = f1 - f5;
    f0 = f0 - f3;
    f2 = f2 - f4;
    v0 = LD32(s2+36);
    v1 = FBITS(f1);
    {vr0=BITSF(v1);}
    v1 = FBITS(f0);
    {vr1=BITSF(v1);}
    v1 = FBITS(f2);
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f0));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    ST32(sp+88, FBITS(f2));
    {v1=FBITS(vr0);}
    f22 = BITSF(v1);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0894E098; }
    goto L_0894DF10;
L_0894DF10:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894DF18;
L_0894DF18:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894DF38;
L_0894DF38:;
    v1 = D_08AEDBEC - (-9236);
    f4 = BITSF(LD32(v1-9236));
    f7 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s3+8));
    f4 = f4 / f22;
    f6 = BITSF(LD32(v0));
    f1 = BITSF(LD32(s2+40));
    f5 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(sp+80));
    {u32 a_=sp+(384);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    f6 = f6 - f1;
    f7 = f7 - f2;
    f1 = BITSF(LD32(sp+88));
    f2 = BITSF(LD32(sp+84));
    f5 = f5 - f0;
    f1 = f1 * f4;
    f3 = f3 * f4;
    f2 = f2 * f4;
    v0 = FBITS(f6);
    {v[4]=BITSF(v0);}
    v1 = FBITS(f3);
    v0 = FBITS(f5);
    {vr0=BITSF(v1);}
    {v[5]=BITSF(v0);}
    v1 = FBITS(f2);
    v0 = FBITS(f7);
    {vr1=BITSF(v1);}
    {v[6]=BITSF(v0);}
    v1 = FBITS(f1);
    {vr2=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+56, FBITS(f1));
    f21 = f0 * f4;
    ST32(sp+64, FBITS(f6));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f7));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    v0 = func_0894E1C8(a0);
    goto L_0894DFE8;
L_0894DFE8:;
    a0 = s1 + 0;
    f20 = BITSF(LD32(v0+120));
    v0 = D_08AEDBFC - (-9220);
    f0 = BITSF(LD32(v0-9220));
    f0 = f20 - f0;
    f0 = f0 * f21;
    f20 = f20 - f0;
    v0 = func_0894E1C8(a0);
    goto L_0894E008;
L_0894E008:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08959780(a0, a1, a2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E01C;
L_0894E01C:;
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+104);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = D_08AEDC00 - (-9216);
    {v1=FBITS(vr0);}
    f0 = BITSF(LD32(v0-9216));
    f1 = BITSF(v1);
    goto L_0894E04C;
L_0894E04C:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_0894E088; }
    goto L_0894E05C;
L_0894E05C:;
    v0 = LD32(s2+36);
    goto L_0894E060;
L_0894E060:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894D5BC; }
    goto L_0894E068;
L_0894E068:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E070;
L_0894E070:;
    f0 = BITSF(LD32(v0+120));
    v0 = D_08AEDC08 - (-9208);
    f2 = BITSF(LD32(s1+32));
    f0 = f22 / f0;
    f1 = BITSF(LD32(v0-9208));
    goto L_0894DE14;
L_0894E088:;
    a1 = 4;
    { u64 r_ = func_0894E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E090;
L_0894E090:;
    v0 = LD32(s2+36);
    goto L_0894E060;
L_0894E098:;
    a0 = s1 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E0A0;
L_0894E0A0:;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDBE8 - (-9240);
    f0 = BITSF(LD32(v0-9240));
    a0 = s1 + 0;
    f1 = f1 * f0;
    ST32(sp+164, FBITS(f1));
    v0 = func_0894E1C8(a0);
    goto L_0894E0BC;
L_0894E0BC:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0+120));
    ST32(sp+168, FBITS(f0));
    v0 = func_0894E1C8(a0);
    goto L_0894E0CC;
L_0894E0CC:;
    a2 = sp + 172;
    f0 = BITSF(LD32(v0+124));
    a1 = sp + 168;
    a0 = sp + 164;
    ST32(sp+172, FBITS(f0));
    f0 = func_0894E358(a0, a1, a2);
    goto L_0894E0E4;
L_0894E0E4:;
    a0 = s1 + 0;
    f20 = f0;
    v0 = func_0894E1C8(a0);
    goto L_0894E0F0;
L_0894E0F0:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08959780(a0, a1, a2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E104;
L_0894E104:;
    v0 = LD32(sp+96);
    {u32 a_=sp+(432);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+100);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+104);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEDC04 - (-9212);
    f0 = BITSF(LD32(v0-9212));
    goto L_0894E04C;
L_0894E138:;
    v0 = LD32(s1+8);
    goto L_0894E13C;
L_0894E13C:;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_0894D5B8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0894E148 */
rv_t func_0894E148(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894E148:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E15C;
L_0894E15C:;
    v1 = D_08B1B68C - (-18804);
    a1 = LD32(s0+28);
    v1 = v1 - 18804;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDC0C - (-9204);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9204));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E198;
L_0894E198:;
    a0 = s0 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E1A0;
L_0894E1A0:;
    v0 = v0 + 64;
    v1 = D_08AEDC10 - (-9200);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9200));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894E1C8 */
u32 func_0894E1C8(u32 a0)
{
    u32 v0 = 0;
L_0894E1C8:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894E1D0 */
u64 func_0894E1D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894E1D0:;
    sp = sp - 16;
    v0 = a1 < 0x6u;
    s0 = a0 + 0;
    ST32(a0+28, a1);
    cnd_ = v0 == 0;
    ST32(a0+32, 0);
    if (cnd_) { goto L_0894E248; }
    goto L_0894E1F0;
L_0894E1F0:;
    v1 = D_08ADA708 - (-22776);
    v0 = a1 << 2;
    v1 = v1 - 22776;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894E20Cu: goto L_0894E20C; case 0x0894E248u: goto L_0894E248; case 0x0894E274u: goto L_0894E274; default: rs_break(0, 0x0894e204); }
L_0894E20C:;
    a0 = s0 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E214;
L_0894E214:;
    v1 = LD32(v0+156);
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v0+156, v1);
    a2 = 1;
    a1 = LD32(s0+36);
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E234;
L_0894E234:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894E24C; }
    goto L_0894E23C;
L_0894E23C:;
    v0 = LD32(v0+36);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894E258; }
    goto L_0894E248;
L_0894E248:;
    goto L_0894E24C;
L_0894E24C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0894E258:;
    a0 = s0 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E260;
L_0894E260:;
    a0 = v0 + 0;
    a1 = 2;
    v0 = func_08959870(a0, a1);
    goto L_0894E26C;
L_0894E26C:;
    goto L_0894E24C;
L_0894E274:;
    a0 = s0 + 0;
    v0 = func_0894E1C8(a0);
    goto L_0894E27C;
L_0894E27C:;
    v1 = LD32(v0+156);
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_0894E248;
}

/* 0894E298 */
rv_t func_0894E298(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894E298:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27020 - (28704);
    t1 = D_08C27030 - (28720);
    t2 = D_08C27040 - (28736);
    a1 = a1 & a0;
    v1 = t0 + 28704;
    a2 = t1 + 28720;
    cnd_ = a1 == 0;
    a3 = t2 + 28736;
    if (cnd_) { goto L_0894E350; }
    goto L_0894E2C8;
L_0894E2C8:;
    v0 = D_08AEDC14 - (-9196);
    f4 = BITSF(LD32(v0-9196));
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
    ST32(t0+28704, FBITS(f2));
    ST32(t1+28720, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+28736, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894E350;
L_0894E350:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894E358 */
float func_0894E358(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0894E358:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0894E384; }
    goto L_0894E370;
L_0894E370:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0894E384; }
    goto L_0894E384;
L_0894E384:;
    return f0;
}

/* 0894E38C */
rv_t func_0894E38C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894E38C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894E298(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E3A0;
L_0894E3A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894E3AC */
rv_t func_0894E3AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894E3AC:;
    sp = sp - 16;
    a2 = 1160;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E3C4;
L_0894E3C4:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a0 = 999;
    f2 = BITSF(LD32(v0+23196));
    v0 = D_08AF8E80 - (-29056);
    v0 = v0 - 29056;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0+52, a0);
    v1 = s0 + 40;
    ST32(s0, v0);
    ST32(s0+40, FBITS(f2));
    ST32(s0+28, 0);
    ST32(s0+36, a0);
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894E418 */
u64 func_0894E418(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894E418:;
    sp = sp - 16;
    a2 = D_08C2A204 - (-24060);
    v0 = 999;
    v1 = a2 - 24060;
    s0 = a0 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0894E4A8; }
    goto L_0894E438;
L_0894E438:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-24060);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0894E47C; }
    goto L_0894E45C;
L_0894E45C:;
    v1 = LD32(a0);
    goto L_0894E460;
L_0894E460:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_0894E4C8; }
    goto L_0894E46C;
L_0894E46C:;
    a0 = LD32(a0+4);
    goto L_0894E470;
L_0894E470:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0894E460; }
    goto L_0894E478;
L_0894E478:;
    v1 = 0 + 0;
    goto L_0894E47C;
L_0894E47C:;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894E4A8; }
    goto L_0894E484;
L_0894E484:;
    ST32(s0+36, a1);
    a1 = 1;
    { u64 r_ = func_0894ECD0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E490;
L_0894E490:;
    v1 = 1;
    goto L_0894E494;
L_0894E494:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0894E4A8:;
    a0 = s0 + 0;
    a1 = 2;
    { u64 r_ = func_0894ECD0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E4B4;
L_0894E4B4:;
    v0 = LD32(s0+8);
    v1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_0894E494;
L_0894E4C8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0894E470; }
    goto L_0894E4D4;
L_0894E4D4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0894E470; }
    goto L_0894E4E0;
L_0894E4E0:;
    goto L_0894E47C;
}

/* 0894E4E8 */
rv_t func_0894E4E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894E4E8:;
    sp = sp - 16;
    v0 = func_0894ECC8(a0);
    goto L_0894E4F8;
L_0894E4F8:;
    v1 = LD32(v0+156);
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894E510 */
rv_t func_0894E510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0894E510:;
    sp = sp - 48;
    a2 = 1;
    s2 = D_08ADDB2C - (-9428);
    s0 = a0 + 0;
    s0 = s0 + 40;
    a1 = LD32(a0+36);
    a0 = D_08C2A204 - (-24060);
    a0 = a0 - 24060;
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E548;
L_0894E548:;
    a2 = D_08C29E54 - (-25004);
    s1 = v0 + 0;
    a0 = s0 + 0;
    a2 = a2 - 25004;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0894E5B8; }
    goto L_0894E564;
L_0894E564:;
    v0 = D_08AEDC18 - (-9192);
    f20 = BITSF(LD32(v0-9192));
    f12 = BITSF(LD32(s2-9428));
    ST32(sp, FBITS(f20));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E578;
L_0894E578:;
    a2 = D_08C29E64 - (-24988);
    f12 = BITSF(LD32(s2-9428));
    a0 = s1 + 40;
    a2 = a2 - 24988;
    a1 = sp + 4;
    a3 = 0 + 0;
    ST32(sp+4, FBITS(f20));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E598;
L_0894E598:;
    a2 = D_08C29E84 - (-24956);
    f12 = BITSF(LD32(s2-9428));
    a0 = s1 + 52;
    a2 = a2 - 24956;
    a1 = sp + 8;
    a3 = 0 + 0;
    ST32(sp+8, FBITS(f20));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E5B8;
L_0894E5B8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0894E5D4 */
rv_t func_0894E5D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_0894E5D4:;
    sp = sp - 288;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_0894E64C; }
    goto L_0894E618;
L_0894E618:;
    goto L_0894E61C;
L_0894E61C:;
    sp = sp + 288;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_0894E64C:;
    f0 = BITSF(LD32(a0+32));
    a1 = LD32(a0+36);
    a0 = D_08C2A204 - (-24060);
    f0 = f0 + f12;
    a0 = a0 - 24060;
    a2 = 1;
    ST32(s0+32, FBITS(f0));
    { u64 r_ = func_08ABE790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894E66C;
L_0894E66C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0894EB2C; }
    goto L_0894E674;
L_0894E674:;
    v1 = LD32(s0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0894E6A8; }
    goto L_0894E684;
L_0894E684:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0894E69C; }
    goto L_0894E68C;
L_0894E68C:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0894E61C; }
    goto L_0894E698;
L_0894E698:;
    v0 = LD32(s0+8);
    goto L_0894E69C;
L_0894E69C:;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_0894E618;
L_0894E6A8:;
    v1 = s1 + 40;
    s2 = s1 + 52;
    f1 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s2+8));
    f5 = BITSF(LD32(s1+40));
    f2 = BITSF(LD32(s1+52));
    f4 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    f1 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f5));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+4, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_0894E750; }
    goto L_0894E714;
L_0894E714:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
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
    goto L_0894E750;
L_0894E750:;
    v0 = D_08AEDC1C - (-9188);
    f0 = BITSF(LD32(v0-9188));
    f5 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    a0 = s0 + 0;
    ST32(sp+48, FBITS(f5));
    s4 = sp + 32;
    s3 = sp + 16;
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f3));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(s1+40));
    f2 = f2 + f4;
    f0 = f0 + f3;
    f1 = f1 + f5;
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    v0 = func_0894ECC8(a0);
    goto L_0894E7B0;
L_0894E7B0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E7D0;
L_0894E7D0:;
    a2 = v0 + 0;
    a1 = s2 + 0;
    a3 = s3 + 0;
    a0 = s4 + 0;
    ({ v[0]=vr0;func_08835730(a0, a1, a2, a3); vr0=v[0];});
    goto L_0894E7E4;
L_0894E7E4:;
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894E7EC;
L_0894E7EC:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E80C;
L_0894E80C:;
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f1 = f7 - f1;
    f2 = f4 - f2;
    f3 = f5 - f3;
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f23 = BITSF(v0);
    v0 = D_08AEDC20 - (-9184);
    f0 = sqrtf(f0);
    f6 = BITSF(LD32(v0-9184));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    fcc = FCMP(f0, f6, 12);
    cnd_ = fcc;
    ST32(sp+56, FBITS(f3));
    if (cnd_) { goto L_0894EB58; }
    goto L_0894E880;
L_0894E880:;
    v0 = D_08AEDC24 - (-9180);
    f0 = BITSF(LD32(v0-9180));
    a2 = D_08C29E54 - (-25004);
    f12 = f20;
    a2 = a2 - 25004;
    a3 = 0 + 0;
    a1 = sp + 112;
    a0 = s3 + 0;
    ST32(sp+112, FBITS(f0));
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_0897B28C(a0, a1, a2, a3, f12); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E8A8;
L_0894E8A8:;
    a0 = s0 + 0;
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    ST32(sp+80, FBITS(f0));
    f0 = BITSF(LD32(sp+56));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    v0 = func_0894ECC8(a0);
    goto L_0894E8C8;
L_0894E8C8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894E8E8;
L_0894E8E8:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a0 = s0 + 0;
    ST32(sp+72, FBITS(f2));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    v0 = func_0894ECC8(a0);
    goto L_0894E908;
L_0894E908:;
    a0 = s0 + 0;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDC28 - (-9176);
    f0 = BITSF(LD32(v0-9176));
    f21 = f1 * f0;
    v0 = func_0894ECC8(a0);
    goto L_0894E920;
L_0894E920:;
    f20 = BITSF(LD32(v0+120));
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894E92C;
L_0894E92C:;
    fcc = FCMP(f21, f20, 12);
    f22 = f20;
    cnd_ = fcc;
    f0 = BITSF(LD32(v0+124));
    if (cnd_) { goto L_0894E950; }
    goto L_0894E93C;
L_0894E93C:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    f22 = f0;
    if (cnd_) { goto L_0894E950; }
    goto L_0894E94C;
L_0894E94C:;
    f22 = f21;
    goto L_0894E950;
L_0894E950:;
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894E958;
L_0894E958:;
    f1 = BITSF(LD32(v0+124));
    v0 = D_08AEDC2C - (-9172);
    f0 = BITSF(LD32(v0-9172));
    a0 = s0 + 0;
    f21 = BITSF(0);
    f1 = f1 * f0;
    ST32(sp+116, FBITS(f1));
    v0 = func_0894ECC8(a0);
    goto L_0894E978;
L_0894E978:;
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0+120));
    ST32(sp+120, FBITS(f0));
    v0 = func_0894ECC8(a0);
    goto L_0894E988;
L_0894E988:;
    a0 = sp + 116;
    f0 = BITSF(LD32(v0+124));
    a1 = sp + 120;
    a2 = sp + 124;
    ST32(sp+124, FBITS(f0));
    f0 = func_0894EE18(a0, a1, a2);
    goto L_0894E9A0;
L_0894E9A0:;
    f2 = sqrtf(f23);
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    f24 = f0;
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+64);
    {v[6]=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    f20 = f0 / f2;
    fcc = FCMP(f21, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f21; goto L_0894EA00; }
    goto L_0894EA00;
L_0894EA00:;
    v0 = D_08AEDC30 - (-9168);
    f0 = BITSF(LD32(v0-9168));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0894EB40; }
    goto L_0894EA18;
L_0894EA18:;
    f0 = f20 * f20;
    f1 = f24 - f22;
    a0 = s0 + 0;
    f0 = f0 * f20;
    f0 = f20 * f0;
    f0 = f0 * f1;
    f20 = f22 + f0;
    v0 = func_0894ECC8(a0);
    goto L_0894EA38;
L_0894EA38:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EA58;
L_0894EA58:;
    f3 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(s1+52));
    f4 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s2+4));
    f1 = f1 - f2;
    f4 = f4 - f5;
    f0 = f0 - f3;
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+100, FBITS(f0));
    ST32(sp+96, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    fcc = FCMP(f21, f0, 14);
    cnd_ = fcc;
    ST32(sp+104, FBITS(f4));
    if (cnd_) { goto L_0894EAC8; }
    goto L_0894EAC4;
L_0894EAC4:;
    f3 = f21;
    goto L_0894EAC8;
L_0894EAC8:;
    v0 = D_08AEDC38 - (-9160);
    f2 = BITSF(LD32(v0-9160));
    v0 = D_08AEDC34 - (-9164);
    f0 = BITSF(LD32(v0-9164));
    f1 = f24 - f2;
    f0 = f3 * f0;
    f0 = f0 * f1;
    f0 = f0 + f2;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_0894EAF8; }
    goto L_0894EAF8;
L_0894EAF8:;
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894EB00;
L_0894EB00:;
    a0 = v0 + 0;
    a1 = sp + 80;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08959780(a0, a1, a2, f12); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EB14;
L_0894EB14:;
    v0 = D_08AEDC3C - (-9156);
    f0 = BITSF(LD32(v0-9156));
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0894E61C; }
    goto L_0894EB2C;
L_0894EB2C:;
    a0 = s0 + 0;
    a1 = 2;
    { u64 r_ = func_0894ECD0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894EB38;
L_0894EB38:;
    goto L_0894E61C;
L_0894EB40:;
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894EB48;
L_0894EB48:;
    v1 = LD32(v0+156);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(v0+156, v1);
    goto L_0894EA18;
L_0894EB58:;
    f0 = f6 - f0;
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    a1 = s2 + 0;
    f0 = f7 - f3;
    f4 = f4 - f2;
    f5 = f5 - f1;
    a2 = s3 + 0;
    a3 = s3 + 0;
    a0 = s4 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f4));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f1));
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+72, FBITS(f5));
    ({ v[0]=vr0;func_08835730(a0, a1, a2, a3); vr0=v[0];});
    goto L_0894EBB8;
L_0894EBB8:;
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894EBC0;
L_0894EBC0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EBE0;
L_0894EBE0:;
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f2 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = f2 - f1;
    f0 = f0 - f4;
    v0 = FBITS(f3);
    ST32(sp+80, FBITS(f3));
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    ST32(sp+84, FBITS(f2));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f0);
    ST32(sp+88, FBITS(f0));
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+48, FBITS(f3));
    {v0=FBITS(vr0);}
    f23 = BITSF(v0);
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f0));
    goto L_0894E880;
    v[0]=vr0;
}

/* 0894EC48 */
rv_t func_0894EC48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894EC48:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894EC5C;
L_0894EC5C:;
    v1 = D_08B1B6A0 - (-18784);
    a1 = LD32(s0+28);
    v1 = v1 - 18784;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDC40 - (-9152);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9152));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EC98;
L_0894EC98:;
    a0 = s0 + 0;
    v0 = func_0894ECC8(a0);
    goto L_0894ECA0;
L_0894ECA0:;
    v0 = v0 + 64;
    v1 = D_08AEDC44 - (-9148);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9148));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894ECC8 */
u32 func_0894ECC8(u32 a0)
{
    u32 v0 = 0;
L_0894ECC8:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0894ECD0 */
u64 func_0894ECD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894ECD0:;
    sp = sp - 16;
    v0 = 1;
    v1 = (s32)a1 < 2;
    s0 = a0 + 0;
    ST32(a0+28, a1);
    cnd_ = a1 == v0;
    ST32(a0+32, 0);
    if (cnd_) { goto L_0894ED3C; }
    goto L_0894ECF4;
L_0894ECF4:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0894ED0C; }
    goto L_0894ECFC;
L_0894ECFC:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0894ED18; }
    goto L_0894ED08;
L_0894ED08:;
    goto L_0894ED0C;
L_0894ED0C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0894ED18:;
    v0 = func_0894ECC8(a0);
    goto L_0894ED20;
L_0894ED20:;
    v1 = LD32(v0+156);
    v1 = v1 | 0x1;
    ST32(v0+156, v1);
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_0894ED08;
L_0894ED3C:;
    v0 = func_0894ECC8(a0);
    goto L_0894ED44;
L_0894ED44:;
    a0 = v0 + 0;
    a1 = 2;
    v0 = func_08959870(a0, a1);
    goto L_0894ED50;
L_0894ED50:;
    goto L_0894ED0C;
}

/* 0894ED58 */
rv_t func_0894ED58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894ED58:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C270D0 - (28880);
    t1 = D_08C270E0 - (28896);
    t2 = D_08C270F0 - (28912);
    a1 = a1 & a0;
    v1 = t0 + 28880;
    a2 = t1 + 28896;
    cnd_ = a1 == 0;
    a3 = t2 + 28912;
    if (cnd_) { goto L_0894EE10; }
    goto L_0894ED88;
L_0894ED88:;
    v0 = D_08AEDC48 - (-9144);
    f4 = BITSF(LD32(v0-9144));
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
    ST32(t0+28880, FBITS(f2));
    ST32(t1+28896, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+28912, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894EE10;
L_0894EE10:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894EE18 */
float func_0894EE18(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0894EE18:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0894EE44; }
    goto L_0894EE30;
L_0894EE30:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0894EE44; }
    goto L_0894EE44;
L_0894EE44:;
    return f0;
}

/* 0894EE4C */
rv_t func_0894EE4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894EE4C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894ED58(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EE60;
L_0894EE60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894EE6C */
u64 func_0894EE6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894EE6C:;
    sp = sp - 16;
    a2 = 1055;
    s0 = a0 + 0;
    { u64 r_ = func_08950BAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894EE84;
L_0894EE84:;
    v0 = D_08AF8EB8 - (-29000);
    v0 = v0 - 29000;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0894EEA0 */
rv_t func_0894EEA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894EEA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08950D44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EEB4;
L_0894EEB4:;
    v0 = LD32(s0+28);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0894EED0; }
    goto L_0894EEC0;
L_0894EEC0:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894EEDC; }
    goto L_0894EECC;
L_0894EECC:;
    goto L_0894EED0;
L_0894EED0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894EEDC:;
    v0 = func_08950E20(a0);
    goto L_0894EEE4;
L_0894EEE4:;
    a0 = v0 + 0;
    a1 = 1;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EEF0;
L_0894EEF0:;
    v0 = 1;
    ST8(s0+36, v0);
    goto L_0894EECC;
}

/* 0894EEFC */
rv_t func_0894EEFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894EEFC:;
    sp = sp - 32;
    v0 = 3;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894EF9C; }
    goto L_0894EF20;
L_0894EF20:;
    v0 = 3;
    goto L_0894EF24;
L_0894EF24:;
    cnd_ = s1 == v0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_0894EF74; }
    goto L_0894EF2C;
L_0894EF2C:;
    v0 = (s32)s1 < 4;
    cnd_ = v0 == 0;
    v0 = s1 < 0x2u;
    if (cnd_) { goto L_0894EF54; }
    goto L_0894EF38;
L_0894EF38:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0894EF58; }
    goto L_0894EF40;
L_0894EF40:;
    goto L_0894EF44;
L_0894EF44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894EF54:;
    v1 = LD32(s0);
    goto L_0894EF58;
L_0894EF58:;
    a0 = s0 + 0;
    a1 = 3;
    goto L_0894EF60;
L_0894EF60:;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EF6C;
L_0894EF6C:;
    goto L_0894EF44;
L_0894EF74:;
    a0 = s0 + 0;
    a1 = 1101;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EF84;
L_0894EF84:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0894EF44; }
    goto L_0894EF8C;
L_0894EF8C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_0894EF60;
L_0894EF9C:;
    a1 = a0 + 0;
    a2 = 1101;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894EFAC;
L_0894EFAC:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0894EF20; }
    goto L_0894EFB4;
L_0894EFB4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894EFC0;
L_0894EFC0:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EFC8;
L_0894EFC8:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_0894EFD0;
L_0894EFD0:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894EFE4;
L_0894EFE4:;
    v0 = 3;
    goto L_0894EF24;
}

/* 0894EFEC */
rv_t func_0894EFEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894EFEC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27180 - (29056);
    t1 = D_08C27190 - (29072);
    t2 = D_08C271A0 - (29088);
    a1 = a1 & a0;
    v1 = t0 + 29056;
    a2 = t1 + 29072;
    cnd_ = a1 == 0;
    a3 = t2 + 29088;
    if (cnd_) { goto L_0894F0A4; }
    goto L_0894F01C;
L_0894F01C:;
    v0 = D_08AEDC4C - (-9140);
    f4 = BITSF(LD32(v0-9140));
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
    ST32(t0+29056, FBITS(f2));
    ST32(t1+29072, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29088, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894F0A4;
L_0894F0A4:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894F0AC */
rv_t func_0894F0AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F0AC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894EFEC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F0C0;
L_0894F0C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894F0CC */
u64 func_0894F0CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F0CC:;
    sp = sp - 16;
    a2 = 1056;
    s0 = a0 + 0;
    { u64 r_ = func_08950BAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F0E4;
L_0894F0E4:;
    v0 = D_08AF8EF8 - (-28936);
    v0 = v0 - 28936;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0894F100 */
rv_t func_0894F100(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F100:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08950D44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F114;
L_0894F114:;
    v0 = LD32(s0+28);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0894F130; }
    goto L_0894F120;
L_0894F120:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894F13C; }
    goto L_0894F12C;
L_0894F12C:;
    goto L_0894F130;
L_0894F130:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894F13C:;
    v0 = func_08950E20(a0);
    goto L_0894F144;
L_0894F144:;
    a0 = v0 + 0;
    a1 = 1;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F150;
L_0894F150:;
    v0 = 1;
    ST8(s0+36, v0);
    goto L_0894F12C;
}

/* 0894F15C */
rv_t func_0894F15C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894F15C:;
    sp = sp - 32;
    v0 = 3;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894F1FC; }
    goto L_0894F180;
L_0894F180:;
    v0 = 3;
    goto L_0894F184;
L_0894F184:;
    cnd_ = s1 == v0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_0894F1D4; }
    goto L_0894F18C;
L_0894F18C:;
    v0 = (s32)s1 < 4;
    cnd_ = v0 == 0;
    v0 = s1 < 0x2u;
    if (cnd_) { goto L_0894F1B4; }
    goto L_0894F198;
L_0894F198:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0894F1B8; }
    goto L_0894F1A0;
L_0894F1A0:;
    goto L_0894F1A4;
L_0894F1A4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0894F1B4:;
    v1 = LD32(s0);
    goto L_0894F1B8;
L_0894F1B8:;
    a0 = s0 + 0;
    a1 = 3;
    goto L_0894F1C0;
L_0894F1C0:;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F1CC;
L_0894F1CC:;
    goto L_0894F1A4;
L_0894F1D4:;
    a0 = s0 + 0;
    a1 = 1110;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F1E4;
L_0894F1E4:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0894F1A4; }
    goto L_0894F1EC;
L_0894F1EC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_0894F1C0;
L_0894F1FC:;
    a1 = a0 + 0;
    a2 = 1110;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F20C;
L_0894F20C:;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0894F180; }
    goto L_0894F214;
L_0894F214:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894F220;
L_0894F220:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F228;
L_0894F228:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_0894F230;
L_0894F230:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F244;
L_0894F244:;
    v0 = 3;
    goto L_0894F184;
}

/* 0894F24C */
rv_t func_0894F24C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894F24C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C271B0 - (29104);
    t1 = D_08C271C0 - (29120);
    t2 = D_08C271D0 - (29136);
    a1 = a1 & a0;
    v1 = t0 + 29104;
    a2 = t1 + 29120;
    cnd_ = a1 == 0;
    a3 = t2 + 29136;
    if (cnd_) { goto L_0894F304; }
    goto L_0894F27C;
L_0894F27C:;
    v0 = D_08AEDC50 - (-9136);
    f4 = BITSF(LD32(v0-9136));
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
    ST32(t0+29104, FBITS(f2));
    ST32(t1+29120, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29136, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894F304;
L_0894F304:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894F30C */
rv_t func_0894F30C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F30C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894F24C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F320;
L_0894F320:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894F32C */
u64 func_0894F32C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F32C:;
    sp = sp - 16;
    a2 = 1110;
    s0 = a0 + 0;
    { u64 r_ = func_08950F08(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F344;
L_0894F344:;
    v0 = D_08AF8F38 - (-28872);
    v0 = v0 - 28872;
    ST32(s0, v0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0894F364 */
rv_t func_0894F364(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894F364:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0894F3B4; }
    goto L_0894F380;
L_0894F380:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894F388;
L_0894F388:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894F390;
L_0894F390:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F3A4;
L_0894F3A4:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0894F380; }
    goto L_0894F3B4;
L_0894F3B4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0894F3C4 */
rv_t func_0894F3C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F3C4:;
    sp = sp - 16;
    v0 = 0x8034;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_0894F3EC; }
    goto L_0894F3DC;
L_0894F3DC:;
    v0 = 0 + 0;
    goto L_0894F3E0;
L_0894F3E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894F3EC:;
    v1 = 0x409b0000u;
    cnd_ = a1 == 0;
    v1 = v1 | 0x8404;
    if (cnd_) { goto L_0894F3DC; }
    goto L_0894F3F8;
L_0894F3F8:;
    v0 = LD32(a1+4);
    cnd_ = v0 != v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_0894F3E0; }
    goto L_0894F404;
L_0894F404:;
    v1 = LD32(a0+28);
    v0 = 2;
    cnd_ = v1 != v0;
    a1 = 3;
    if (cnd_) { goto L_0894F3DC; }
    goto L_0894F414;
L_0894F414:;
    { rv_t r_ = func_0894F4F4(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F41C;
L_0894F41C:;
    v0 = 1;
    goto L_0894F3E0;
}

/* 0894F424 */
rv_t func_0894F424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894F424:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0894F458; }
    goto L_0894F440;
L_0894F440:;
    v1 = LD32(a0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0894F484; }
    goto L_0894F450;
L_0894F450:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0894F468; }
    goto L_0894F458;
L_0894F458:;
    goto L_0894F45C;
L_0894F45C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894F468:;
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_0894F45C; }
    goto L_0894F470;
L_0894F470:;
    a1 = 1;
    goto L_0894F474;
L_0894F474:;
    { rv_t r_ = func_0894F4F4(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F47C;
L_0894F47C:;
    goto L_0894F45C;
L_0894F484:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F4A8; }
    goto L_0894F490;
L_0894F490:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 4) & 0x1;
    if (cnd_) { goto L_0894F4A8; }
    goto L_0894F4A0;
L_0894F4A0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F45C; }
    goto L_0894F4A8;
L_0894F4A8:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894F4B0;
L_0894F4B0:;
    v1 = LD32(v0+48);
    v0 = LD32(v1+232);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894F4E4; }
    goto L_0894F4C4;
L_0894F4C4:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0894F4CC;
L_0894F4CC:;
    a0 = LD32(v0+48);
    v0 = func_089D0B60(a0, 0, 0, 0);
    goto L_0894F4D4;
L_0894F4D4:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_0894F474; }
    goto L_0894F4E0;
L_0894F4E0:;
    a0 = s0 + 0;
    goto L_0894F4E4;
L_0894F4E4:;
    a1 = 3;
    goto L_0894F474;
}

/* 0894F4EC */
rv_t func_0894F4EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0894F4EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894F4F4 */
rv_t func_0894F4F4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_0894F4F4:;
    sp = sp - 128;
    v0 = 1;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0894FAE8; }
    goto L_0894F53C;
L_0894F53C:;
    v0 = s0 < 0x5u;
    goto L_0894F540;
L_0894F540:;
    cnd_ = v0 == 0;
    ST32(s1+28, s0);
    if (cnd_) { goto L_0894F8C8; }
    goto L_0894F548;
L_0894F548:;
    v1 = D_08ADA778 - (-22664);
    v0 = s0 << 2;
    v1 = v1 - 22664;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0894F564u: goto L_0894F564; case 0x0894F8C8u: goto L_0894F8C8; case 0x0894F9D0u: goto L_0894F9D0; case 0x0894F9ECu: goto L_0894F9EC; default: rs_break(0, 0x0894f55c); }
L_0894F564:;
    a0 = s1 + 0;
    a1 = 1152;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F574;
L_0894F574:;
    cnd_ = v0 == 0;
    fp = v0 + 0;
    if (cnd_) { goto L_0894F8BC; }
    goto L_0894F57C;
L_0894F57C:;
    a0 = s1 + 0;
    s3 = D_08C2BA28 - (-17880);
    v0 = func_08950F38(a0);
    goto L_0894F588;
L_0894F588:;
    a0 = s3 - 17880;
    v1 = LD32(a0+8);
    a1 = LD32(v0+48);
    v0 = LD32(a0+4);
    v1 = v1 + 1;
    s0 = LD32(a1+12);
    s4 = 0 + 0;
    ST32(a0+8, v1);
    s2 = 0 + 0;
    ST32(sp, a0);
    a0 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0894F60C; }
    goto L_0894F5C0;
L_0894F5C0:;
    a2 = LD32(s3-17880);
    a3 = v0 + 0;
    goto L_0894F5C8;
L_0894F5C8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0894F5FC; }
    goto L_0894F5E0;
L_0894F5E0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0894F610; }
    goto L_0894F5F0;
L_0894F5F0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894F5E0; }
    goto L_0894F5FC;
L_0894F5FC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0894F5C8; }
    goto L_0894F60C;
L_0894F60C:;
    v0 = LD32(sp+8);
    goto L_0894F610;
L_0894F610:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp); goto L_0894F67C; }
    goto L_0894F618;
L_0894F618:;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = sp + 0; goto L_0894F664; }
    goto L_0894F624;
L_0894F624:;
    v0 = LD32(v1+12);
    cnd_ = v0 == s0;
    a0 = sp + 0;
    if (cnd_) { goto L_0894F664; }
    goto L_0894F630;
L_0894F630:;
    v0 = LD_U8(v1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F664; }
    goto L_0894F63C;
L_0894F63C:;
    v0 = LD_U8(v1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F664; }
    goto L_0894F648;
L_0894F648:;
    v1 = LD32(v1+192);
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_0894F664; }
    goto L_0894F658;
L_0894F658:;
    v0 = v0 < 0x1u;
    s2 = s2 + v0;
    a0 = sp + 0;
    goto L_0894F664;
L_0894F664:;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F66C;
L_0894F66C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0894F618; }
    goto L_0894F678;
L_0894F678:;
    a0 = LD32(sp);
    goto L_0894F67C;
L_0894F67C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894F9C0; }
    goto L_0894F68C;
L_0894F68C:;
    s7 = 0 + 0;
    goto L_0894F690;
L_0894F690:;
    cnd_ = s2 == 0;
    s5 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0894F788; }
    goto L_0894F698;
L_0894F698:;
    v0 = LD32(s5+23232);
    t1 = s5 + 23232;
    v1 = LD32(t1+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a3 = v0 >> 1;
    { u32 x_ = a3, y_ = s2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t0 = s3 - 17880;
    a2 = LD32(t0+8);
    v1 = v1 + v0;
    ST32(t1+4, v1);
    a2 = a2 + 1;
    a0 = sp + 0;
    ST32(t0+8, a2);
    a1 = 1;
    ST32(s5+23232, v0);
    ST32(sp, t0);
    ST32(sp+4, 0);
    s2 = hi;
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F6F4;
L_0894F6F4:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0894F770; }
    goto L_0894F700;
L_0894F700:;
    v1 = LD32(v0);
    goto L_0894F704;
L_0894F704:;
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0894F758; }
    goto L_0894F70C;
L_0894F70C:;
    v0 = LD32(v1+12);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_0894F758; }
    goto L_0894F718;
L_0894F718:;
    v0 = LD_U8(v1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F758; }
    goto L_0894F724;
L_0894F724:;
    v0 = LD_U8(v1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F758; }
    goto L_0894F730;
L_0894F730:;
    a0 = LD32(v1+192);
    v0 = (a0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_0894F758; }
    goto L_0894F740;
L_0894F740:;
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_0894F758; }
    goto L_0894F74C;
L_0894F74C:;
    cnd_ = s2 == 0;
    s2 = s2 - 1;
    if (cnd_) { goto L_0894F97C; }
    goto L_0894F754;
L_0894F754:;
    a0 = sp + 0;
    goto L_0894F758;
L_0894F758:;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F760;
L_0894F760:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0894F704; }
    goto L_0894F76C;
L_0894F76C:;
    a0 = LD32(sp);
    goto L_0894F770;
L_0894F770:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894F96C; }
    goto L_0894F780;
L_0894F780:;
    cnd_ = s7 != 0;
    if (cnd_) { goto L_0894F8CC; }
    goto L_0894F788;
L_0894F788:;
    a0 = s1 + 0;
    v0 = func_08950F38(a0);
    goto L_0894F790;
L_0894F790:;
    a0 = LD32(v0+48);
    s5 = D_08B25AC0 - (23232);
    s3 = 0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s6 = s5 + 23232;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F7B8;
L_0894F7B8:;
    s2 = v0 + 0;
    v1 = D_08AEDC54 - (-9132);
    v0 = D_08AEDC58 - (-9128);
    f20 = BITSF(LD32(v0-9128));
    f21 = BITSF(LD32(v1-9132));
    v0 = LD32(s5+23232);
    goto L_0894F7D0;
L_0894F7D0:;
    a2 = LD32(s6+4);
    a0 = s1 + 0;
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a2;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a2 = a2 + v0;
    ST32(s6+4, a2);
    a1 = hi;
    ST32(s5+23232, v0);
    { u64 r_ = func_0894FB38(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F804;
L_0894F804:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0894F88C; }
    goto L_0894F80C;
L_0894F80C:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F828;
L_0894F828:;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+4));
    f5 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+8));
    f2 = f2 - f0;
    f3 = f3 - f5;
    f4 = f4 - f1;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f2));
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
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0894F930; }
    goto L_0894F88C;
L_0894F88C:;
    cnd_ = s7 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_0894F8C8; }
    goto L_0894F894;
L_0894F894:;
    v0 = (s32)s3 < 5;
    cnd_ = v0 != 0;
    v0 = LD32(s5+23232);
    if (cnd_) { goto L_0894F7D0; }
    goto L_0894F8A0;
L_0894F8A0:;
    a0 = s1 + 0;
    a1 = s1 + 0;
    a2 = 1152;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F8B4;
L_0894F8B4:;
    cnd_ = v0 != 0;
    ST32(sp+36, v0);
    if (cnd_) { goto L_0894F900; }
    goto L_0894F8BC;
L_0894F8BC:;
    a0 = s1 + 0;
    goto L_0894F8C0;
L_0894F8C0:;
    a1 = 3;
    { rv_t r_ = func_0894F4F4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F8C8;
L_0894F8C8:;
    goto L_0894F8CC;
L_0894F8CC:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_0894F900:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894F90C;
L_0894F90C:;
    a0 = LD32(sp+36);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F914;
L_0894F914:;
    a0 = LD32(s1+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 36;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F928;
L_0894F928:;
    a0 = s1 + 0;
    goto L_0894F8C0;
L_0894F930:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F94C;
L_0894F94C:;
    a1 = v0 + 0;
    a0 = fp + 0;
    { rv_t r_ = func_0894483C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F958;
L_0894F958:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894F88C; }
    goto L_0894F960;
L_0894F960:;
    ST32(fp+112, FBITS(f21));
    s7 = 1;
    goto L_0894F88C;
L_0894F96C:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F974;
L_0894F974:;
    goto L_0894F780;
L_0894F97C:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F998;
L_0894F998:;
    a1 = v0 + 0;
    a0 = fp + 0;
    { rv_t r_ = func_0894483C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F9A4;
L_0894F9A4:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0894F770; }
    goto L_0894F9AC;
L_0894F9AC:;
    v0 = D_08AEDC54 - (-9132);
    f0 = BITSF(LD32(v0-9132));
    s7 = 1;
    ST32(fp+112, FBITS(f0));
    goto L_0894F76C;
L_0894F9C0:;
    s7 = 0 + 0;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894F9C8;
L_0894F9C8:;
    goto L_0894F690;
L_0894F9D0:;
    a0 = s1 + 0;
    v0 = func_08950F38(a0);
    goto L_0894F9D8;
L_0894F9D8:;
    a0 = LD32(v0+48);
    a1 = 999;
    { rv_t r_ = func_089D1F3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894F9E4;
L_0894F9E4:;
    goto L_0894F8CC;
L_0894F9EC:;
    a0 = s1 + 0;
    v0 = func_08950F38(a0);
    goto L_0894F9F4;
L_0894F9F4:;
    v1 = LD32(v0+48);
    s0 = 1;
    a0 = s1 + 0;
    v0 = LD32(v1+232);
    v0 = (v0 & ~(0x1u << 2)) | ((s0 & 0x1) << 2);
    ST32(v1+232, v0);
    v0 = func_08950F38(a0);
    goto L_0894FA10;
L_0894FA10:;
    v1 = LD32(v0+48);
    a0 = s1 + 0;
    v0 = LD32(v1+232);
    v0 = (v0 & ~(0x1u << 3)) | ((s0 & 0x1) << 3);
    ST32(v1+232, v0);
    v0 = func_08950F38(a0);
    goto L_0894FA28;
L_0894FA28:;
    v1 = LD32(v0+48);
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    a2 = LD32(v1+252);
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_0894FAA8; }
    goto L_0894FA40;
L_0894FA40:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0894FA90; }
    goto L_0894FA64;
L_0894FA64:;
    a0 = LD32(a1);
    goto L_0894FA68;
L_0894FA68:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0894FAC8; }
    goto L_0894FA80;
L_0894FA80:;
    a1 = LD32(a1+4);
    goto L_0894FA84;
L_0894FA84:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0894FA68; }
    goto L_0894FA8C;
L_0894FA8C:;
    a0 = 0 + 0;
    goto L_0894FA90;
L_0894FA90:;
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0894FAA8; }
    goto L_0894FA98;
L_0894FA98:;
    v0 = LD32(a0+200);
    v0 = (v0 & ~(0x1u << 5)) | ((v1 & 0x1) << 5);
    ST8(a0+329, v1);
    ST32(a0+200, v0);
    goto L_0894FAA8;
L_0894FAA8:;
    a0 = s1 + 0;
    v0 = func_08950F38(a0);
    goto L_0894FAB0;
L_0894FAB0:;
    a0 = LD32(v0+48);
    v0 = D_08AEDC5C - (-9124);
    f12 = BITSF(LD32(v0-9124));
    v0 = func_089D29C4(a0, f12);
    goto L_0894FAC0;
L_0894FAC0:;
    goto L_0894F8CC;
L_0894FAC8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894FA84; }
    goto L_0894FAD4;
L_0894FAD4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0894FA84; }
    goto L_0894FAE0;
L_0894FAE0:;
    goto L_0894FA90;
L_0894FAE8:;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp+32, a1);
    if (cnd_) { goto L_0894F53C; }
    goto L_0894FAF4;
L_0894FAF4:;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_0894FAFC;
L_0894FAFC:;
    a0 = LD32(sp+32);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FB04;
L_0894FB04:;
    a0 = s1 + 0;
    v0 = func_08950F38(a0);
    goto L_0894FB0C;
L_0894FB0C:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FB20;
L_0894FB20:;
    v0 = LD32(s1+16);
    ST32(sp+32, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0894FAF4; }
    goto L_0894FB30;
L_0894FB30:;
    v0 = s0 < 0x5u;
    goto L_0894F540;
}

/* 0894FB38 */
u64 func_0894FB38(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0894FB38:;
    sp = sp - 32;
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    s1 = a1 + 0;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894FB78;
L_0894FB78:;
    v1 = LD32(sp+8);
    goto L_0894FB7C;
L_0894FB7C:;
    s0 = LD32(v1);
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0894FBC8; }
    goto L_0894FB88;
L_0894FB88:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894FBC8; }
    goto L_0894FB94;
L_0894FB94:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0894FBC8; }
    goto L_0894FBA0;
L_0894FBA0:;
    a0 = LD32(s0+192);
    v0 = (a0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_0894FBC8; }
    goto L_0894FBB0;
L_0894FBB0:;
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0894FBC8; }
    goto L_0894FBBC;
L_0894FBBC:;
    cnd_ = s1 == 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_0894FC30; }
    goto L_0894FBC4;
L_0894FBC4:;
    a0 = sp + 0;
    goto L_0894FBC8;
L_0894FBC8:;
    cnd_ = v1 != 0;
    a1 = 1;
    if (cnd_) { goto L_0894FBE0; }
    goto L_0894FBD0;
L_0894FBD0:;
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    goto L_0894FBE0;
L_0894FBE0:;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894FBE8;
L_0894FBE8:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0894FB7C; }
    goto L_0894FBF4;
L_0894FBF4:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894FC20; }
    goto L_0894FC08;
L_0894FC08:;
    v0 = 0 + 0;
    goto L_0894FC0C;
L_0894FC0C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0894FC20:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894FC28;
L_0894FC28:;
    v0 = 0 + 0;
    goto L_0894FC0C;
L_0894FC30:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0894FC4C; }
    goto L_0894FC44;
L_0894FC44:;
    v0 = s0 + 0;
    goto L_0894FC0C;
L_0894FC4C:;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894FC54;
L_0894FC54:;
    v0 = s0 + 0;
    goto L_0894FC0C;
}

/* 0894FC5C */
rv_t func_0894FC5C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894FC5C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C271E0 - (29152);
    t1 = D_08C271F0 - (29168);
    t2 = D_08C27200 - (29184);
    a1 = a1 & a0;
    v1 = t0 + 29152;
    a2 = t1 + 29168;
    cnd_ = a1 == 0;
    a3 = t2 + 29184;
    if (cnd_) { goto L_0894FD14; }
    goto L_0894FC8C;
L_0894FC8C:;
    v0 = D_08AEDC60 - (-9120);
    f4 = BITSF(LD32(v0-9120));
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
    ST32(t0+29152, FBITS(f2));
    ST32(t1+29168, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29184, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894FD14;
L_0894FD14:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894FD1C */
rv_t func_0894FD1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FD1C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894FC5C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FD30;
L_0894FD30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894FD3C */
u64 func_0894FD3C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FD3C:;
    sp = sp - 16;
    a2 = 1057;
    s0 = a0 + 0;
    func_089422F4(a0, a1, a2);
    goto L_0894FD54;
L_0894FD54:;
    v0 = D_08AF8F70 - (-28816);
    v1 = 2;
    v0 = v0 - 28816;
    ST32(s0+32, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0894FD78 */
rv_t func_0894FD78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FD78:;
    sp = sp - 16;
    v0 = 3;
    cnd_ = a1 == v0;
    a2 = 1102;
    if (cnd_) { goto L_0894FD98; }
    goto L_0894FD8C;
L_0894FD8C:;
    { rv_t r_ = func_08942448(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FD94;
L_0894FD94:;
    a2 = v0 + 0;
    goto L_0894FD98;
L_0894FD98:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894FDA8 */
rv_t func_0894FDA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FDA8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089424AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FDBC;
L_0894FDBC:;
    v0 = 1;
    v1 = LD32(s0+28);
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0894FE24; }
    goto L_0894FDCC;
L_0894FDCC:;
    v0 = 2;
    cnd_ = v1 == v0;
    a1 = 2;
    if (cnd_) { goto L_0894FDE8; }
    goto L_0894FDD8;
L_0894FDD8:;
    goto L_0894FDDC;
L_0894FDDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894FDE8:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FDF8;
L_0894FDF8:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894FE0C;
L_0894FE0C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0894FDD8; }
    goto L_0894FE14;
L_0894FE14:;
    v0 = D_08AEDC64 - (-9116);
    f0 = BITSF(LD32(v0-9116));
    ST32(v1+40, FBITS(f0));
    goto L_0894FDD8;
L_0894FE24:;
    v0 = func_08942440(a0);
    goto L_0894FE2C;
L_0894FE2C:;
    a0 = v0 + 0;
    a1 = 2;
    v0 = func_08959870(a0, a1);
    goto L_0894FE38;
L_0894FE38:;
    goto L_0894FDDC;
}

/* 0894FE40 */
rv_t func_0894FE40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0894FE40:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27290 - (29328);
    t1 = D_08C272A0 - (29344);
    t2 = D_08C272B0 - (29360);
    a1 = a1 & a0;
    v1 = t0 + 29328;
    a2 = t1 + 29344;
    cnd_ = a1 == 0;
    a3 = t2 + 29360;
    if (cnd_) { goto L_0894FEF8; }
    goto L_0894FE70;
L_0894FE70:;
    v0 = D_08AEDC68 - (-9112);
    f4 = BITSF(LD32(v0-9112));
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
    ST32(t0+29328, FBITS(f2));
    ST32(t1+29344, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29360, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0894FEF8;
L_0894FEF8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0894FF00 */
rv_t func_0894FF00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FF00:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0894FE40(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FF14;
L_0894FF14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894FF20 */
rv_t func_0894FF20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FF20:;
    sp = sp - 16;
    a2 = 1058;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0894FF38;
L_0894FF38:;
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(a0+8));
    v0 = D_08AF8FB0 - (-28752);
    v0 = v0 - 28752;
    v1 = s0 + 36;
    ST32(s0, v0);
    v0 = D_08AEDC70 - (-9104);
    f1 = BITSF(LD32(a0+4));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-9104));
    ST32(v1+4, FBITS(f1));
    ST32(s0+36, FBITS(f2));
    ST32(s0+52, FBITS(f0));
    ST32(s0+56, 0);
    ST32(s0+28, 0);
    ST8(s0+32, 0);
    ST8(s0+33, 0);
    ST8(s0+34, 0);
    ST8(s0+48, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0894FF9C */
rv_t func_0894FF9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0894FF9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+56);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0894FFE0; }
    goto L_0894FFB8;
L_0894FFB8:;
    ST32(s0+56, 0);
    goto L_0894FFBC;
L_0894FFBC:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_0894FFC4;
L_0894FFC4:;
    v1 = LD32(v0+48);
    v0 = 999;
    ST32(v1+256, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0894FFE0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0894FFF0;
L_0894FFF0:;
    ST32(s0+56, 0);
    goto L_0894FFBC;
}

/* 0894FFF8 */
rv_t func_0894FFF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_0894FFF8:;
    sp = sp - 128;
    s2 = a0 + 0;
    f20 = f12;
    v0 = func_08950764(a0);
    goto L_08950020;
L_08950020:;
    a0 = v0 + 0;
    v1 = LD32(v0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950034;
L_08950034:;
    f2 = BITSF(LD32(s2+36));
    f0 = BITSF(LD32(sp));
    v1 = s2 + 36;
    f4 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v0 = LD_U8(s2+32);
    f3 = f3 - f1;
    f4 = f4 - f0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    cnd_ = v0 != 0;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089500F4; }
    goto L_08950070;
L_08950070:;
    v0 = LD32(s2+24);
    a0 = D_08C2B0A8 - (-20312);
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089500F4; }
    goto L_08950088;
L_08950088:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089500D8; }
    goto L_089500AC;
L_089500AC:;
    a0 = LD32(a1);
    goto L_089500B0;
L_089500B0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089502D0; }
    goto L_089500C8;
L_089500C8:;
    a1 = LD32(a1+4);
    goto L_089500CC;
L_089500CC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089500B0; }
    goto L_089500D4;
L_089500D4:;
    v1 = 0 + 0;
    goto L_089500D8;
L_089500D8:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD_U8(s2+48); goto L_089500F8; }
    goto L_089500E0;
L_089500E0:;
    v0 = LD32(v1+724);
    v1 = 1;
    ST8(s2+32, v1);
    v0 = 0 < v0;
    ST8(s2+33, v0);
    goto L_089500F4;
L_089500F4:;
    v0 = LD_U8(s2+48);
    goto L_089500F8;
L_089500F8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089502B4; }
    goto L_08950100;
L_08950100:;
    v0 = LD32(s2+56);
    goto L_08950104;
L_08950104:;
    cnd_ = v0 != 0;
    a0 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_08950158; }
    goto L_0895010C;
L_0895010C:;
    v0 = LD32(s2+24);
    a0 = a0 - 20312;
    a1 = LD32(v0+4);
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950120;
L_08950120:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895014C; }
    goto L_08950128;
L_08950128:;
    ST32(sp+64, 0);
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_08950130;
L_08950130:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 64;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950144;
L_08950144:;
    cnd_ = v0 != 0;
    s3 = sp + 32;
    if (cnd_) { goto L_089501B0; }
    goto L_0895014C;
L_0895014C:;
    v0 = LD32(s2+56);
    goto L_08950150;
L_08950150:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08950194; }
    goto L_08950158;
L_08950158:;
    a0 = s2 + 0;
    v0 = func_08950764(a0);
    goto L_08950160;
L_08950160:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    s0 = sp + 48;
    v0 = LD32(v1+76);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950178;
L_08950178:;
    a3 = LD_U8(s2+34);
    a0 = LD32(s2+56);
    f12 = f20;
    a1 = s0 + 0;
    a2 = sp + 16;
    { rv_t r_ = func_08965A70(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950190;
L_08950190:;
    goto L_08950194;
L_08950194:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089501B0:;
    a0 = s3 + 0;
    ST32(sp+32, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089501BC;
L_089501BC:;
    a1 = 0x8a940000u;
    a0 = LD32(sp+64);
    a1 = a1 | 0xc9e9;
    a2 = s3 + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089501D0;
L_089501D0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089501F0; }
    goto L_089501D8;
L_089501D8:;
    a0 = s3 + 0;
    v0 = func_0881B5C4(a0);
    goto L_089501E0;
L_089501E0:;
    v1 = 0xf3030000u;
    v1 = v1 | 0x830d;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08950268; }
    goto L_089501F0;
L_089501F0:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089501F8;
L_089501F8:;
    a0 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_08950764(a0);
    goto L_08950204;
L_08950204:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08950764(a0);
    goto L_08950210;
L_08950210:;
    a0 = v0 + 0;
    v0 = func_0895BB70(a0);
    goto L_08950218;
L_08950218:;
    f12 = BITSF(LD32(v0+560));
    v0 = D_08AEDC74 - (-9100);
    f13 = BITSF(LD32(v0-9100));
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08965E64(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950234;
L_08950234:;
    ST32(s2+56, s1);
    goto L_08950238;
L_08950238:;
    a0 = LD32(s2+56);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08950254; }
    goto L_08950244;
L_08950244:;
    a0 = s3 + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895024C;
L_0895024C:;
    v0 = LD32(s2+56);
    goto L_08950150;
L_08950254:;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = LD32(sp+64);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950260;
L_08950260:;
    goto L_08950244;
L_08950268:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950270;
L_08950270:;
    a0 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_08950764(a0);
    goto L_0895027C;
L_0895027C:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08950764(a0);
    goto L_08950288;
L_08950288:;
    a0 = v0 + 0;
    v0 = func_0895BB70(a0);
    goto L_08950290;
L_08950290:;
    f12 = BITSF(LD32(v0+560));
    v0 = D_08AEDC74 - (-9100);
    f13 = BITSF(LD32(v0-9100));
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    v0 = func_08966014(a0, a1, a2, f12, f13);
    goto L_089502AC;
L_089502AC:;
    ST32(s2+56, s1);
    goto L_08950238;
L_089502B4:;
    a0 = s2 + 0;
    v0 = func_08950764(a0);
    goto L_089502BC;
L_089502BC:;
    a0 = v0 + 0;
    a1 = sp + 16;
    func_0895BAA4(a0, a1);
    goto L_089502C8;
L_089502C8:;
    v0 = LD32(s2+56);
    goto L_08950104;
L_089502D0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089500C8; }
    goto L_089502DC;
L_089502DC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089500CC; }
    goto L_089502E8;
L_089502E8:;
    goto L_089500D8;
}

/* 089502F0 */
rv_t func_089502F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_089502F0:;
    sp = sp - 144;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_089506D4; }
    goto L_08950320;
L_08950320:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_08950328;
L_08950328:;
    a0 = LD32(s0+28);
    v1 = LD32(v0+48);
    v0 = a0 < 0x5u;
    cnd_ = v0 == 0;
    a1 = LD32(v1+12);
    if (cnd_) { goto L_08950374; }
    goto L_0895033C;
L_0895033C:;
    v1 = D_08ADA78C - (-22644);
    v0 = a0 << 2;
    v1 = v1 - 22644;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08950358u: goto L_08950358; case 0x08950394u: goto L_08950394; case 0x0895046Cu: goto L_0895046C; case 0x08950478u: goto L_08950478; default: rs_break(0, 0x08950350); }
L_08950358:;
    v0 = 4;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08950378; }
    goto L_08950364;
L_08950364:;
    a0 = s0 + 0;
    goto L_08950368;
L_08950368:;
    a1 = 2;
    goto L_0895036C;
L_0895036C:;
    { u64 r_ = func_089509C0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950374;
L_08950374:;
    goto L_08950378;
L_08950378:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08950394:;
    v0 = 4;
    cnd_ = a1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08950470; }
    goto L_089503A0;
L_089503A0:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_089503A8;
L_089503A8:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089503B0;
L_089503B0:;
    v1 = LD32(v0+24);
    v0 = 999;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    a0 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08950374; }
    goto L_089503C4;
L_089503C4:;
    v1 = a0 - 19252;
    v0 = LD32(v1+4);
    a1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08950418; }
    goto L_089503EC;
L_089503EC:;
    a0 = LD32(a1);
    goto L_089503F0;
L_089503F0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0895044C; }
    goto L_08950408;
L_08950408:;
    a1 = LD32(a1+4);
    goto L_0895040C;
L_0895040C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089503F0; }
    goto L_08950414;
L_08950414:;
    a0 = 0 + 0;
    goto L_08950418;
L_08950418:;
    cnd_ = a0 == 0;
    a1 = 3;
    if (cnd_) { goto L_08950374; }
    goto L_08950420;
L_08950420:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08950374; }
    goto L_08950444;
L_08950444:;
    goto L_0895036C;
L_0895044C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895040C; }
    goto L_08950458;
L_08950458:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895040C; }
    goto L_08950464;
L_08950464:;
    goto L_08950418;
L_0895046C:;
    a0 = s0 + 0;
    goto L_08950470;
L_08950470:;
    a1 = 1;
    goto L_0895036C;
L_08950478:;
    v0 = 4;
    cnd_ = a1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08950470; }
    goto L_08950484;
L_08950484:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_0895048C;
L_0895048C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08950494;
L_08950494:;
    v1 = LD32(v0+24);
    v0 = 999;
    s2 = LD32(v1+4);
    cnd_ = s2 == v0;
    a0 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_08950364; }
    goto L_089504A8;
L_089504A8:;
    a0 = a0 - 19252;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089504B8;
L_089504B8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08950364; }
    goto L_089504C0;
L_089504C0:;
    v0 = LD32(v0);
    f21 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08950368; }
    goto L_089504E4;
L_089504E4:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_089504EC;
L_089504EC:;
    v1 = LD32(v0+48);
    a1 = s1 + 0;
    a0 = s0 + 0;
    ST32(v1+256, s2);
    { rv_t r_ = func_0895076C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950500;
L_08950500:;
    v0 = LD_U8(s0+33);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08950378; }
    goto L_0895050C;
L_0895050C:;
    f0 = BITSF(LD32(s0+52));
    f0 = f0 - f20;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(s0+52, FBITS(f0));
    if (cnd_) { goto L_08950378; }
    goto L_08950524;
L_08950524:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_0895052C;
L_0895052C:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950540;
L_08950540:;
    f2 = BITSF(LD32(s0+36));
    f0 = BITSF(LD32(sp));
    v1 = s0 + 36;
    f4 = BITSF(LD32(v1+8));
    f2 = f2 - f0;
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp+4));
    v0 = FBITS(f2);
    f4 = f4 - f0;
    f3 = f3 - f1;
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    ST32(sp+16, FBITS(f2));
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+20, FBITS(f3));
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089505E4; }
    goto L_089505A8;
L_089505A8:;
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
    goto L_089505E4;
L_089505E4:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_089505EC;
L_089505EC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+76);
    t_ = v0;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950600;
L_08950600:;
    a1 = D_08C27370 - (29552);
    v0 = (u32)(s32)LD_S8(a1+29552);
    cnd_ = v0 != 0;
    a0 = D_08C27378 - (29560);
    if (cnd_) { goto L_08950654; }
    goto L_08950610;
L_08950610:;
    v0 = D_08AEDC78 - (-9096);
    v1 = D_08AEDC7C - (-9092);
    f0 = BITSF(LD32(v0-9096));
    f1 = BITSF(LD32(v1-9092));
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 * f1;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = 1;
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    ST8(a1+29552, v0);
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(a0+29560, v0);
    goto L_08950654;
L_08950654:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    f2 = BITSF(LD32(a0+29560));
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08950378; }
    goto L_089506AC;
L_089506AC:;
    v0 = LD32(s0+24);
    a0 = 1;
    a1 = LD32(v0+4);
    v0 = D_08AEDC80 - (-9088);
    f12 = BITSF(LD32(v0-9088));
    { rv_t r_ = func_08A24358(a0, a1, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089506C4;
L_089506C4:;
    v0 = D_08AEDC84 - (-9084);
    f0 = BITSF(LD32(v0-9084));
    ST32(s0+52, FBITS(f0));
    goto L_08950374;
L_089506D4:;
    a1 = 2;
    { u64 r_ = func_089509C0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089506DC;
L_089506DC:;
    goto L_08950320;
}

/* 089506E4 */
rv_t func_089506E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089506E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08950764(a0);
    goto L_089506F8;
L_089506F8:;
    v1 = D_08B1B6AC - (-18772);
    a1 = LD32(s0+28);
    v1 = v1 - 18772;
    v0 = v0 + 64;
    a1 = a1 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDC88 - (-9080);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9080));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950734;
L_08950734:;
    a0 = s0 + 0;
    v0 = func_08950764(a0);
    goto L_0895073C;
L_0895073C:;
    v0 = v0 + 64;
    v1 = D_08AEDC8C - (-9076);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9076));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08950764 */
u32 func_08950764(u32 a0)
{
    u32 v0 = 0;
L_08950764:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0895076C */
rv_t func_0895076C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0895076C:;
    sp = sp - 48;
    s2 = a0 + 0;
    a3 = LD32(a1);
    v0 = LD32(a3-16);
    a0 = a1 + v0;
    v1 = LD_U16(a0+8);
    v0 = 0x8004;
    cnd_ = v1 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_089508A4; }
    goto L_089507A0;
L_089507A0:;
    v0 = 0x8014;
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_089508A4; }
    goto L_089507AC;
L_089507AC:;
    cnd_ = v1 == v0;
    v0 = 999;
    if (cnd_) { goto L_089508A4; }
    goto L_089507B4;
L_089507B4:;
    a2 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08950850; }
    goto L_089507C4;
L_089507C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08950814; }
    goto L_089507E8;
L_089507E8:;
    a0 = LD32(a1);
    goto L_089507EC;
L_089507EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08950884; }
    goto L_08950804;
L_08950804:;
    a1 = LD32(a1+4);
    goto L_08950808;
L_08950808:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089507EC; }
    goto L_08950810;
L_08950810:;
    a0 = 0 + 0;
    goto L_08950814;
L_08950814:;
    cnd_ = a0 == 0;
    a1 = s2 + 36;
    if (cnd_) { goto L_08950850; }
    goto L_0895081C;
L_0895081C:;
    v0 = LD32(a0);
    f12 = BITSF(0);
    v1 = LD32(v0+56);
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950830;
L_08950830:;
    v0 = 1;
    ST8(s2+34, v0);
    goto L_08950838;
L_08950838:;
    goto L_0895083C;
L_0895083C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08950850:;
    a0 = LD32(a3-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s2 + 36;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950868;
L_08950868:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s2+36, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_08950830;
L_08950884:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08950808; }
    goto L_08950890;
L_08950890:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08950808; }
    goto L_0895089C;
L_0895089C:;
    goto L_08950814;
L_089508A4:;
    a0 = s2 + 0;
    v0 = func_08950764(a0);
    goto L_089508AC;
L_089508AC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089508C0;
L_089508C0:;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089508DC;
L_089508DC:;
    f3 = BITSF(LD32(v0));
    a0 = LD32(s1);
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    v1 = LD32(a0-16);
    f2 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v1 = s1 + v1;
    f2 = f2 - f1;
    f4 = f4 - f0;
    a1 = LD32(v1+4);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f4));
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895092C;
L_0895092C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089509B8; }
    goto L_08950934;
L_08950934:;
    v1 = LD32(v0);
    v0 = D_08B1B740 - (-18624);
    f12 = BITSF(LD32(v0-18624));
    v0 = LD32(v1+104);
    s1 = s2 + 36;
    a1 = sp + 16;
    a0 = s0 + 0;
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950958;
L_08950958:;
    cnd_ = v0 == 0;
    ST8(s2+34, v0);
    if (cnd_) { goto L_08950994; }
    goto L_08950960;
L_08950960:;
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(s2+36));
    f4 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(s2+36, FBITS(f3));
    ST32(s1+8, FBITS(f2));
    ST32(s1+4, FBITS(f4));
    goto L_08950838;
L_08950994:;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = s1 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089509B0;
L_089509B0:;
    goto L_0895083C;
L_089509B8:;
    ST8(s2+34, 0);
    goto L_08950838;
}

/* 089509C0 */
u64 func_089509C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089509C0:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08950A14; }
    goto L_089509E4;
L_089509E4:;
    v0 = v1 << 2;
    v1 = D_08ADA7E0 - (-22560);
    v1 = v1 - 22560;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08950A00u: goto L_08950A00; case 0x08950A14u: goto L_08950A14; case 0x08950AC4u: goto L_08950AC4; default: rs_break(0, 0x089509f8); }
L_08950A00:;
    a0 = s1 + 0;
    v0 = func_08950764(a0);
    goto L_08950A08;
L_08950A08:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0895B9AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950A14;
L_08950A14:;
    v0 = s0 < 0x5u;
    cnd_ = v0 == 0;
    ST32(s1+28, s0);
    if (cnd_) { goto L_08950A88; }
    goto L_08950A20;
L_08950A20:;
    v1 = D_08ADA7F4 - (-22540);
    v0 = s0 << 2;
    v1 = v1 - 22540;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08950A3Cu: goto L_08950A3C; case 0x08950A88u: goto L_08950A88; case 0x08950A9Cu: goto L_08950A9C; case 0x08950AB8u: goto L_08950AB8; default: rs_break(0, 0x08950a34); }
L_08950A3C:;
    a0 = s1 + 0;
    v0 = func_08950764(a0);
    goto L_08950A44;
L_08950A44:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08950A4C;
L_08950A4C:;
    a0 = v0 + 0;
    v0 = D_08AEDC90 - (-9072);
    f12 = BITSF(LD32(v0-9072));
    { rv_t r_ = func_089601D4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950A5C;
L_08950A5C:;
    a0 = s1 + 0;
    v0 = func_08950764(a0);
    goto L_08950A64;
L_08950A64:;
    v1 = LD32(v0+48);
    v0 = 999;
    a0 = s1 + 0;
    ST32(v1+256, v0);
    v0 = func_08950764(a0);
    goto L_08950A78;
L_08950A78:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_08957564(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950A84;
L_08950A84:;
    ST8(s1+34, 0);
    goto L_08950A88;
L_08950A88:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08950A9C:;
    a0 = s1 + 0;
    v0 = func_08950764(a0);
    goto L_08950AA4;
L_08950AA4:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_0895B9AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950AB0;
L_08950AB0:;
    ST8(s1+34, 0);
    goto L_08950A88;
L_08950AB8:;
    v0 = 1;
    ST8(s1+48, v0);
    goto L_08950A88;
L_08950AC4:;
    ST8(s1+48, 0);
    goto L_08950A14;
}

/* 08950ACC */
rv_t func_08950ACC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08950ACC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C272C0 - (29376);
    t1 = D_08C272D0 - (29392);
    t2 = D_08C272E0 - (29408);
    a1 = a1 & a0;
    v1 = t0 + 29376;
    a2 = t1 + 29392;
    cnd_ = a1 == 0;
    a3 = t2 + 29408;
    if (cnd_) { goto L_08950B84; }
    goto L_08950AFC;
L_08950AFC:;
    v0 = D_08AEDC94 - (-9068);
    f4 = BITSF(LD32(v0-9068));
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
    ST32(t0+29376, FBITS(f2));
    ST32(t1+29392, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29408, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08950B84;
L_08950B84:;
    return (rv_t){ v0, v1, f0 };
}

/* 08950B8C */
rv_t func_08950B8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950B8C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08950ACC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950BA0;
L_08950BA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08950BAC */
u64 func_08950BAC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950BAC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950BC0;
L_08950BC0:;
    v0 = D_08AF8FE8 - (-28696);
    v0 = v0 - 28696;
    ST32(s0, v0);
    ST8(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08950BE8 */
rv_t func_08950BE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950BE8:;
    sp = sp - 16;
    v0 = 0x8076;
    a3 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08950C14; }
    goto L_08950C04;
L_08950C04:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08950C14:;
    a2 = LD32(a1+24);
    v1 = LD32(a2);
    v0 = v1 < 0xbu;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08950C04; }
    goto L_08950C28;
L_08950C28:;
    v0 = v1 << 2;
    v1 = D_08ADA808 - (-22520);
    v1 = v1 - 22520;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08950C44u: goto L_08950C44; case 0x08950C60u: goto L_08950C60; case 0x08950C68u: goto L_08950C68; case 0x08950C7Cu: goto L_08950C7C; case 0x08950C8Cu: goto L_08950C8C; case 0x08950C9Cu: goto L_08950C9C; case 0x08950CACu: goto L_08950CAC; default: rs_break(0, 0x08950c3c); }
L_08950C44:;
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = 3;
    v0 = LD32(v1+48);
    a2 = 0 + 0;
    goto L_08950C58;
L_08950C58:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950C60;
L_08950C60:;
    a0 = 1;
    goto L_08950C04;
L_08950C68:;
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = 8;
    goto L_08950C74;
L_08950C74:;
    v0 = LD32(v1+48);
    goto L_08950C58;
L_08950C7C:;
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = 4;
    goto L_08950C74;
L_08950C8C:;
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = 7;
    goto L_08950C74;
L_08950C9C:;
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = 9;
    goto L_08950C74;
L_08950CAC:;
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = 10;
    goto L_08950C74;
}

/* 08950CBC */
rv_t func_08950CBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08950CBC:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_08950D0C; }
    goto L_08950CD8;
L_08950CD8:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08950CE0;
L_08950CE0:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08950CE8;
L_08950CE8:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950CFC;
L_08950CFC:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08950CD8; }
    goto L_08950D0C;
L_08950D0C:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 != 0;
    ST32(s0+28, 0);
    if (cnd_) { goto L_08950D28; }
    goto L_08950D18;
L_08950D18:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08950D28:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08950D30;
L_08950D30:;
    a0 = v0 + 0;
    a1 = 2;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950D3C;
L_08950D3C:;
    ST8(s0+36, 0);
    goto L_08950D18;
}

/* 08950D44 */
rv_t func_08950D44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950D44:;
    sp = sp - 16;
    a2 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08950D74; }
    goto L_08950D64;
L_08950D64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08950D74:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950D84;
L_08950D84:;
    ST32(s0+32, 0);
    goto L_08950D64;
}

/* 08950D8C */
rv_t func_08950D8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950D8C:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08950DB8; }
    goto L_08950DA8;
L_08950DA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08950DB8:;
    v0 = func_08950E20(a0);
    goto L_08950DC0;
L_08950DC0:;
    a1 = LD32(s0+28);
    v1 = D_08B1B6BC - (-18756);
    v1 = v1 - 18756;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDC98 - (-9064);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-9064));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950DFC;
L_08950DFC:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08950E04;
L_08950E04:;
    v0 = v0 + 64;
    v1 = D_08AEDC9C - (-9060);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-9060));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08950DA8;
}

/* 08950E20 */
u32 func_08950E20(u32 a0)
{
    u32 v0 = 0;
L_08950E20:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08950E28 */
rv_t func_08950E28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08950E28:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27380 - (29568);
    t1 = D_08C27390 - (29584);
    t2 = D_08C273A0 - (29600);
    a1 = a1 & a0;
    v1 = t0 + 29568;
    a2 = t1 + 29584;
    cnd_ = a1 == 0;
    a3 = t2 + 29600;
    if (cnd_) { goto L_08950EE0; }
    goto L_08950E58;
L_08950E58:;
    v0 = D_08AEDCA0 - (-9056);
    f4 = BITSF(LD32(v0-9056));
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
    ST32(t0+29568, FBITS(f2));
    ST32(t1+29584, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29600, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08950EE0;
L_08950EE0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08950EE8 */
rv_t func_08950EE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950EE8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08950E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08950EFC;
L_08950EFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08950F08 */
u64 func_08950F08(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08950F08:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08950F1C;
L_08950F1C:;
    v0 = D_08AF8A38 - (-30152);
    v0 = v0 - 30152;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08950F38 */
u32 func_08950F38(u32 a0)
{
    u32 v0 = 0;
L_08950F38:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08950F40 */
rv_t func_08950F40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08950F40:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27430 - (29744);
    t1 = D_08C27440 - (29760);
    t2 = D_08C27450 - (29776);
    a1 = a1 & a0;
    v1 = t0 + 29744;
    a2 = t1 + 29760;
    cnd_ = a1 == 0;
    a3 = t2 + 29776;
    if (cnd_) { goto L_08950FF8; }
    goto L_08950F70;
L_08950F70:;
    v0 = D_08AEDCA4 - (-9052);
    f4 = BITSF(LD32(v0-9052));
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
    ST32(t0+29744, FBITS(f2));
    ST32(t1+29760, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29776, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08950FF8;
L_08950FF8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08951000 */
rv_t func_08951000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08951000:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08950F40(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951014;
L_08951014:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08951020 */
u64 func_08951020(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08951020:;
    sp = sp - 16;
    a2 = 1059;
    s0 = a0 + 0;
    { u64 r_ = func_08950BAC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08951038;
L_08951038:;
    v0 = D_08AF9028 - (-28632);
    v0 = v0 - 28632;
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08951054 */
rv_t func_08951054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08951054:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08950D44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951068;
L_08951068:;
    v0 = LD32(s0+28);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08951080; }
    goto L_08951074;
L_08951074:;
    v0 = LD_U8(s0+36);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089510CC; }
    goto L_08951080;
L_08951080:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089510A8; }
    goto L_0895108C;
L_0895108C:;
    v0 = LD32(v0+8);
    v1 = (v0 >> 4) & 0x1;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089510A8; }
    goto L_089510A0;
L_089510A0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089510C0; }
    goto L_089510A8;
L_089510A8:;
    v0 = func_08950E20(a0);
    goto L_089510B0;
L_089510B0:;
    a0 = v0 + 0;
    a1 = 10;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089510BC;
L_089510BC:;
    goto L_089510C0;
L_089510C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089510CC:;
    v0 = func_08950E20(a0);
    goto L_089510D4;
L_089510D4:;
    a0 = v0 + 0;
    a1 = 1;
    { rv_t r_ = func_0895757C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089510E0;
L_089510E0:;
    v0 = 1;
    ST8(s0+36, v0);
    goto L_089510BC;
}

/* 089510EC */
rv_t func_089510EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089510EC:;
    sp = sp - 32;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0xcu;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08951150; }
    goto L_08951118;
L_08951118:;
    v0 = v1 << 2;
    v1 = D_08ADA934 - (-22220);
    v1 = v1 - 22220;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08951134u: goto L_08951134; case 0x08951150u: goto L_08951150; case 0x089512ECu: goto L_089512EC; default: rs_break(0, 0x0895112c); }
L_08951134:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1111;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08951148;
L_08951148:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_089512B0; }
    goto L_08951150;
L_08951150:;
    v0 = s1 < 0xcu;
    goto L_08951154;
L_08951154:;
    cnd_ = v0 == 0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_089512A0; }
    goto L_0895115C;
L_0895115C:;
    v1 = D_08ADA964 - (-22172);
    v0 = s1 << 2;
    v1 = v1 - 22172;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08951178u: goto L_08951178; case 0x08951190u: goto L_08951190; case 0x089511C4u: goto L_089511C4; case 0x089512A0u: goto L_089512A0; default: rs_break(0, 0x08951170); }
L_08951178:;
    a0 = s0 + 0;
    a1 = 1111;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951188;
L_08951188:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089511A8; }
    goto L_08951190;
L_08951190:;
    goto L_08951194;
L_08951194:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089511A8:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_089511B0;
L_089511B0:;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089511BC;
L_089511BC:;
    goto L_08951194;
L_089511C4:;
    a2 = LD32(s2+4);
    a0 = D_08C2C31C - (-15588);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15588;
    if (cnd_) { goto L_08951190; }
    goto L_089511D8;
L_089511D8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08951228; }
    goto L_089511FC;
L_089511FC:;
    a0 = LD32(a1);
    goto L_08951200;
L_08951200:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08951280; }
    goto L_08951218;
L_08951218:;
    a1 = LD32(a1+4);
    goto L_0895121C;
L_0895121C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08951200; }
    goto L_08951224;
L_08951224:;
    s1 = 0 + 0;
    goto L_08951228;
L_08951228:;
    cnd_ = s1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08951190; }
    goto L_08951230;
L_08951230:;
    a1 = 1163;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895123C;
L_0895123C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08951190; }
    goto L_08951244;
L_08951244:;
    v0 = D_08AEDCA8 - (-9048);
    f0 = BITSF(LD32(v0-9048));
    ST32(s0+116, FBITS(f0));
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895126C;
L_0895126C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_089540F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951278;
L_08951278:;
    goto L_08951194;
L_08951280:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895121C; }
    goto L_0895128C;
L_0895128C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08951218; }
    goto L_08951298;
L_08951298:;
    goto L_08951228;
L_089512A0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 3;
    goto L_089511B0;
L_089512B0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089512BC;
L_089512BC:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089512C4;
L_089512C4:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_089512CC;
L_089512CC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 0;
    goto L_089512D8;
L_089512D8:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089512E4;
L_089512E4:;
    v0 = s1 < 0xcu;
    goto L_08951154;
L_089512EC:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1163;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08951300;
L_08951300:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08951150; }
    goto L_08951308;
L_08951308:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08951314;
L_08951314:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895131C;
L_0895131C:;
    a0 = s0 + 0;
    v0 = func_08950E20(a0);
    goto L_08951324;
L_08951324:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 4;
    goto L_089512D8;
}

/* 08951334 */
rv_t func_08951334(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08951334:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27460 - (29792);
    t1 = D_08C27470 - (29808);
    t2 = D_08C27480 - (29824);
    a1 = a1 & a0;
    v1 = t0 + 29792;
    a2 = t1 + 29808;
    cnd_ = a1 == 0;
    a3 = t2 + 29824;
    if (cnd_) { goto L_089513EC; }
    goto L_08951364;
L_08951364:;
    v0 = D_08AEDCAC - (-9044);
    f4 = BITSF(LD32(v0-9044));
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
    ST32(t0+29792, FBITS(f2));
    ST32(t1+29808, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29824, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089513EC;
L_089513EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089513F4 */
rv_t func_089513F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089513F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08951334(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951408;
L_08951408:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08951414 */
rv_t func_08951414(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08951414:;
    sp = sp - 16;
    a2 = 1161;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895142C;
L_0895142C:;
    v0 = D_08B45A9C - (23196);
    ST32(s0+32, 0);
    v1 = v0 + 23196;
    a0 = s0 + 44;
    ST32(s0+36, 0);
    a1 = s0 + 56;
    a2 = s0 + 76;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(s0+44, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f2));
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(s0+56, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f0));
    ST32(s0+72, 0);
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AF9068 - (-28568);
    v0 = v0 - 28568;
    ST32(s0, v0);
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(s0+76, FBITS(f2));
    ST32(s0+92, 0);
    ST32(s0+28, 0);
    ST8(s0+40, 0);
    ST8(s0+68, 0);
    ST8(s0+69, 0);
    ST32(s0+88, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089514C8 */
rv_t func_089514C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089514C8:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = func_089520B0(a0);
    goto L_089514E0;
L_089514E0:;
    a0 = LD32(v0+48);
    v0 = 0x64e50000u;
    v0 = v0 | 0xf43d;
    v1 = LD32(a0+204);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08951668; }
    goto L_089514F8;
L_089514F8:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951500;
L_08951500:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089520B0(a0);
    goto L_0895150C;
L_0895150C:;
    a1 = v0 + 0;
    v1 = D_08AEDCBC - (-9028);
    v0 = D_08AEDCB8 - (-9032);
    f12 = BITSF(LD32(v0-9032));
    f13 = BITSF(LD32(v1-9028));
    goto L_08951520;
L_08951520:;
    a0 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_08965E64(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895152C;
L_0895152C:;
    ST32(s1+92, s0);
    v0 = LD32(s1+92);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08951604; }
    goto L_0895153C;
L_0895153C:;
    v0 = LD32(s1+24);
    a0 = D_08C2B0A8 - (-20312);
    a2 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089515D0; }
    goto L_08951554;
L_08951554:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089515A4; }
    goto L_08951578;
L_08951578:;
    a0 = LD32(a1);
    goto L_0895157C;
L_0895157C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08951648; }
    goto L_08951594;
L_08951594:;
    a1 = LD32(a1+4);
    goto L_08951598;
L_08951598:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0895157C; }
    goto L_089515A0;
L_089515A0:;
    a0 = 0 + 0;
    goto L_089515A4;
L_089515A4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089515D0; }
    goto L_089515AC;
L_089515AC:;
    ST32(sp, 0);
    v0 = func_089C5F9C(a0, 0, 0, 0);
    goto L_089515B4;
L_089515B4:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089515C8;
L_089515C8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_08951630; }
    goto L_089515D0;
L_089515D0:;
    a0 = s1 + 0;
    v0 = func_089520B0(a0);
    goto L_089515D8;
L_089515D8:;
    a0 = v0 + 0;
    v0 = func_08957638(a0);
    goto L_089515E0;
L_089515E0:;
    cnd_ = v0 == 0;
    v0 = D_08AEDCC4 - (-9020);
    if (cnd_) { goto L_0895161C; }
    goto L_089515E8;
L_089515E8:;
    v0 = D_08AEDCB8 - (-9032);
    f0 = BITSF(LD32(v0-9032));
    v0 = D_08AEDCC0 - (-9024);
    ST32(s1+32, FBITS(f0));
    f0 = BITSF(LD32(v0-9024));
    goto L_089515FC;
L_089515FC:;
    ST32(s1+36, FBITS(f0));
    v1 = 1;
    goto L_08951604;
L_08951604:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895161C:;
    f0 = BITSF(LD32(v0-9020));
    v0 = D_08AEDCC8 - (-9016);
    ST32(s1+32, FBITS(f0));
    f0 = BITSF(LD32(v0-9016));
    goto L_089515FC;
L_08951630:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(sp);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951640;
L_08951640:;
    goto L_089515D0;
L_08951648:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08951598; }
    goto L_08951654;
L_08951654:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08951598; }
    goto L_08951660;
L_08951660:;
    goto L_089515A4;
L_08951668:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951670;
L_08951670:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089520B0(a0);
    goto L_0895167C;
L_0895167C:;
    a1 = v0 + 0;
    v1 = D_08AEDCB4 - (-9036);
    v0 = D_08AEDCB0 - (-9040);
    f12 = BITSF(LD32(v0-9040));
    f13 = BITSF(LD32(v1-9036));
    goto L_08951520;
}

/* 08951694 */
rv_t func_08951694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08951694:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+92);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08951710; }
    goto L_089516B0;
L_089516B0:;
    a1 = LD32(s0+16);
    goto L_089516B4;
L_089516B4:;
    ST32(s0+92, 0);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089516EC; }
    goto L_089516C0;
L_089516C0:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089516C8;
L_089516C8:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089516DC;
L_089516DC:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089516C0; }
    goto L_089516EC;
L_089516EC:;
    a0 = s0 + 0;
    v0 = func_089520B0(a0);
    goto L_089516F4;
L_089516F4:;
    v1 = LD32(v0+48);
    v0 = 999;
    ST32(v1+256, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08951710:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895171C;
L_0895171C:;
    a1 = LD32(s0+16);
    goto L_089516B4;
}

/* 08951724 */
rv_t func_08951724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08951724:;
    sp = sp - 64;
    s1 = a0 + 0;
    s0 = s1 + 44;
    f20 = f12;
    v0 = func_089520B0(a0);
    goto L_08951748;
L_08951748:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951768;
L_08951768:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s1+44));
    f1 = BITSF(LD32(s0+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = func_089520B0(a0);
    goto L_089517A0;
L_089517A0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089517C0;
L_089517C0:;
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+20));
    a3 = LD_U8(s1+40);
    a0 = LD32(s1+92);
    a1 = sp + 16;
    a2 = sp + 0;
    f12 = f20;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = func_08965A70(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089517F0;
L_089517F0:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895180C; }
    goto L_089517FC;
L_089517FC:;
    v0 = LD_U8(s1+69);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08951820; }
    goto L_08951808;
L_08951808:;
    goto L_0895180C;
L_0895180C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08951820:;
    ST32(sp+4, 0);
    v0 = func_089520B0(a0);
    goto L_08951828;
L_08951828:;
    a0 = v0 + 0;
    a1 = sp + 0;
    f12 = f20;
    { rv_t r_ = func_0895D264(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951838;
L_08951838:;
    ST8(s1+69, v0);
    goto L_08951808;
}

/* 08951840 */
rv_t func_08951840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 272);
L_08951840:;
    sp = sp - 272;
    s1 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08951878; }
    goto L_0895186C;
L_0895186C:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08951894; }
    goto L_08951878;
L_08951878:;
    goto L_0895187C;
L_0895187C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_08951894:;
    v0 = func_089520B0(a0);
    goto L_0895189C;
L_0895189C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089518A4;
L_089518A4:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089518AC;
L_089518AC:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0895195C; }
    goto L_089518B4;
L_089518B4:;
    a0 = s1 + 0;
    v0 = func_089520B0(a0);
    goto L_089518BC;
L_089518BC:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089518C4;
L_089518C4:;
    v1 = LD32(v0+24);
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    s0 = LD32(v1+4);
    cnd_ = s0 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08951958; }
    goto L_089518DC;
L_089518DC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0895192C; }
    goto L_08951900;
L_08951900:;
    a1 = LD32(a0);
    goto L_08951904;
L_08951904:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08951FFC; }
    goto L_0895191C;
L_0895191C:;
    a0 = LD32(a0+4);
    goto L_08951920;
L_08951920:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_08951904; }
    goto L_08951928;
L_08951928:;
    s2 = 0 + 0;
    goto L_0895192C;
L_0895192C:;
    cnd_ = s2 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0895195C; }
    goto L_08951934;
L_08951934:;
    v1 = LD32(s2);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08951970; }
    goto L_08951958;
L_08951958:;
    a0 = s1 + 0;
    goto L_0895195C;
L_0895195C:;
    a1 = 6;
    goto L_08951960;
L_08951960:;
    { rv_t r_ = func_08952410(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951968;
L_08951968:;
    goto L_0895187C;
L_08951970:;
    a0 = s1 + 0;
    v0 = func_089520B0(a0);
    goto L_08951978;
L_08951978:;
    v1 = LD32(v0+48);
    a0 = s1 + 0;
    ST32(v1+256, s0);
    v0 = func_089520B0(a0);
    goto L_08951988;
L_08951988:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089519A8;
L_089519A8:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    f0 = func_089520B8(a0, a1);
    goto L_089519B8;
L_089519B8:;
    v1 = LD32(s1+28);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895187C; }
    goto L_089519C8;
L_089519C8:;
    v0 = v1 << 2;
    v1 = D_08ADA994 - (-22124);
    v1 = v1 - 22124;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08951878u: goto L_08951878; case 0x089519E4u: goto L_089519E4; case 0x08951A68u: goto L_08951A68; case 0x08951B6Cu: goto L_08951B6C; case 0x08951BF0u: goto L_08951BF0; case 0x08951C28u: goto L_08951C28; case 0x08951E38u: goto L_08951E38; default: rs_break(0, 0x089519dc); }
L_089519E4:;
    v0 = s1 + 44;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0));
    f3 = BITSF(LD32(v0+4));
    f6 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s1+44));
    f5 = BITSF(LD32(s1+32));
    f4 = f4 - f6;
    f2 = f2 - f0;
    f3 = f3 - f1;
    f5 = f5 * f5;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
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
    fcc = FCMP(f5, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08951A5C; }
    goto L_08951A50;
L_08951A50:;
    a0 = s1 + 0;
    goto L_08951A54;
L_08951A54:;
    a1 = 2;
    goto L_08951960;
L_08951A5C:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08951960;
L_08951A68:;
    f0 = BITSF(LD32(s1+72));
    a0 = s1 + 0;
    a1 = s1 + 0;
    f0 = f0 + f20;
    a2 = 1163;
    a3 = 0 + 0;
    ST32(s1+72, FBITS(f0));
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08951A88;
L_08951A88:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08951B60; }
    goto L_08951A90;
L_08951A90:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08951B64; }
    goto L_08951AA0;
L_08951AA0:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEDCCC - (-9012);
    if (cnd_) { goto L_08951A50; }
    goto L_08951AAC;
L_08951AAC:;
    f0 = BITSF(LD32(s1+72));
    f1 = BITSF(LD32(v0-9012));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0895187C; }
    goto L_08951AC4;
L_08951AC4:;
    s0 = s1 + 44;
    s2 = s1 + 76;
    f4 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s1+44));
    f5 = BITSF(LD32(s1+76));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f5;
    f2 = f2 - f4;
    f3 = f3 - f0;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    v0 = D_08AEDCD0 - (-9008);
    f0 = BITSF(LD32(v0-9008));
    ST32(sp, FBITS(f1));
    fcc = FCMP(f0, f4, 12);
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_08951B3C; }
    goto L_08951B34;
L_08951B34:;
    ST32(s1+72, 0);
    goto L_08951878;
L_08951B3C:;
    a1 = s0 + 0;
    { u64 r_ = func_0895439C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08951B44;
L_08951B44:;
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s1+44));
    f2 = BITSF(LD32(s0+4));
    ST32(s2+8, FBITS(f0));
    ST32(s1+76, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    goto L_08951B34;
L_08951B60:;
    a0 = s1 + 0;
    goto L_08951B64;
L_08951B64:;
    a1 = 3;
    goto L_08951960;
L_08951B6C:;
    v0 = s1 + 56;
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0));
    f3 = BITSF(LD32(v0+4));
    f6 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s1+56));
    f5 = BITSF(LD32(s1+36));
    f4 = f4 - f6;
    f2 = f2 - f0;
    f3 = f3 - f1;
    f5 = f5 * f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
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
    fcc = FCMP(f5, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08951A5C; }
    goto L_08951BD8;
L_08951BD8:;
    v0 = LD_U8(s1+69);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0895187C; }
    goto L_08951BE4;
L_08951BE4:;
    a0 = s1 + 0;
    a1 = 4;
    goto L_08951960;
L_08951BF0:;
    f0 = BITSF(LD32(s1+88));
    v0 = D_08AEDCD4 - (-9004);
    f1 = BITSF(LD32(v0-9004));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(s1+88, FBITS(f0));
    if (cnd_) { goto L_08951A50; }
    goto L_08951C10;
L_08951C10:;
    v0 = LD_U8(s1+69);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 5;
    if (cnd_) { goto L_08951878; }
    goto L_08951C20;
L_08951C20:;
    goto L_08951960;
L_08951C28:;
    v0 = s1 + 56;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s0));
    f6 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s1+56));
    f4 = BITSF(LD32(s1+36));
    f5 = f5 - f0;
    f2 = f2 - f1;
    f3 = f3 - f6;
    f4 = f4 * f4;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f4, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_08951A5C; }
    goto L_08951C94;
L_08951C94:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s1+44));
    f3 = BITSF(LD32(s1+52));
    ST32(sp+4, 0);
    f2 = f2 - f0;
    f3 = f3 - f1;
    s2 = 0 + 0;
    f20 = BITSF(LD32(sp+4));
    v0 = FBITS(f2);
    {u32 a_=sp+(112);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s2);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_08951D2C; }
    goto L_08951CF0;
L_08951CF0:;
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
    goto L_08951D2C;
L_08951D2C:;
    a0 = s1 + 0;
    v0 = func_089520B0(a0);
    goto L_08951D34;
L_08951D34:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951D54;
L_08951D54:;
    f3 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+8));
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f20));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s2);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_08951DD4; }
    goto L_08951D98;
L_08951D98:;
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
    goto L_08951DD4;
L_08951DD4:;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+8);
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
    v0 = D_08AEDCD8 - (-9000);
    f0 = BITSF(LD32(v0-9000));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0895187C; }
    goto L_08951E30;
L_08951E30:;
    a0 = s1 + 0;
    goto L_08951A54;
L_08951E38:;
    f0 = BITSF(LD32(s1+88));
    v0 = D_08AEDCD4 - (-9004);
    f1 = BITSF(LD32(v0-9004));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(s1+88, FBITS(f0));
    if (cnd_) { goto L_08951BE4; }
    goto L_08951E58;
L_08951E58:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s1+44));
    f3 = BITSF(LD32(s1+52));
    ST32(sp+36, 0);
    f2 = f2 - f0;
    f3 = f3 - f1;
    s2 = 0 + 0;
    f20 = BITSF(LD32(sp+36));
    v0 = FBITS(f2);
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s2);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_08951EF0; }
    goto L_08951EB4;
L_08951EB4:;
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
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_08951EF0;
L_08951EF0:;
    a0 = s1 + 0;
    v0 = func_089520B0(a0);
    goto L_08951EF8;
L_08951EF8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08951F18;
L_08951F18:;
    f3 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+8));
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f20));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s2);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_08951F98; }
    goto L_08951F5C;
L_08951F5C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
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
    goto L_08951F98;
L_08951F98:;
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+40);
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
    v0 = D_08AEDCD8 - (-9000);
    f0 = BITSF(LD32(v0-9000));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0895187C; }
    goto L_08951FF4;
L_08951FF4:;
    a0 = s1 + 0;
    goto L_08951B64;
L_08951FFC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08951920; }
    goto L_08952008;
L_08952008:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_0895191C; }
    goto L_08952014;
L_08952014:;
    goto L_0895192C;
}

/* 0895201C */
rv_t func_0895201C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0895201C:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08952048; }
    goto L_08952038;
L_08952038:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08952048:;
    v0 = func_089520B0(a0);
    goto L_08952050;
L_08952050:;
    a1 = LD32(s0+28);
    v1 = D_08B1B6E8 - (-18712);
    v1 = v1 - 18712;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDCDC - (-8996);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8996));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895208C;
L_0895208C:;
    a0 = s0 + 0;
    v0 = func_089520B0(a0);
    goto L_08952094;
L_08952094:;
    v0 = v0 + 64;
    v1 = D_08AEDCE0 - (-8992);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-8992));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08952038;
}

/* 089520B0 */
u32 func_089520B0(u32 a0)
{
    u32 v0 = 0;
L_089520B0:;
    v0 = LD32(a0+24);
    return v0;
}

/* 089520B8 */
float func_089520B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089520B8:;
    sp = sp - 48;
    s4 = a0 + 0;
    s2 = a1 + 0;
    v0 = func_089520B0(a0);
    goto L_089520E0;
L_089520E0:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952100;
L_08952100:;
    a3 = LD32(s2);
    s3 = v0 + 0;
    v0 = LD32(a3-16);
    a0 = s2 + v0;
    v1 = LD_U16(a0+8);
    v0 = 0x8004;
    cnd_ = v1 == v0;
    v0 = 0x8003;
    if (cnd_) { goto L_08952310; }
    goto L_08952120;
L_08952120:;
    cnd_ = v1 == v0;
    v0 = 0x8014;
    if (cnd_) { goto L_08952310; }
    goto L_08952128;
L_08952128:;
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_08952310; }
    goto L_08952130;
L_08952130:;
    cnd_ = v1 == v0;
    v0 = 999;
    if (cnd_) { goto L_08952310; }
    goto L_08952138;
L_08952138:;
    a2 = LD32(a0+4);
    a0 = D_08C2B3A4 - (-19548);
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_089522BC; }
    goto L_08952148;
L_08952148:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08952198; }
    goto L_0895216C;
L_0895216C:;
    a0 = LD32(a1);
    goto L_08952170;
L_08952170:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089522F0; }
    goto L_08952188;
L_08952188:;
    a1 = LD32(a1+4);
    goto L_0895218C;
L_0895218C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08952170; }
    goto L_08952194;
L_08952194:;
    a0 = 0 + 0;
    goto L_08952198;
L_08952198:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(a3-12); goto L_089522C0; }
    goto L_089521A0;
L_089521A0:;
    v0 = LD32(a0);
    f12 = BITSF(0);
    s1 = s4 + 44;
    v1 = LD32(v0+56);
    a1 = s1 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089521BC;
L_089521BC:;
    v0 = 1;
    ST8(s4+40, v0);
    goto L_089521C4;
L_089521C4:;
    v0 = LD32(s2);
    goto L_089521C8;
L_089521C8:;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089521E0;
L_089521E0:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s3+8));
    f0 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s3+4));
    f2 = f2 - f5;
    f0 = f0 - f3;
    f1 = f1 - f4;
    a0 = s4 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = func_089520B0(a0);
    goto L_08952218;
L_08952218:;
    a2 = LD32(v0+56);
    a1 = sp + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08952228;
L_08952228:;
    a1 = v0 + 0;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    v0 = D_08B20494 - (1172);
    if (cnd_) { goto L_0895229C; }
    goto L_08952238;
L_08952238:;
    a2 = v0 + 1172;
    v1 = LD_U16(a2+10);
    a0 = s4 + 56;
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08952264; }
    goto L_08952250;
L_08952250:;
    v1 = LD32(a2+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_08952264;
L_08952264:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    goto L_0895227C;
L_0895227C:;
    sp = sp + 48;
    return f0;
L_0895229C:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s4+44));
    f1 = BITSF(LD32(s1+4));
    v0 = s4 + 56;
    ST32(s4+56, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_0895227C;
L_089522BC:;
    a0 = LD32(a3-12);
    goto L_089522C0;
L_089522C0:;
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = s4 + 44;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089522D4;
L_089522D4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s4+44, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_089521BC;
L_089522F0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895218C; }
    goto L_089522FC;
L_089522FC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895218C; }
    goto L_08952308;
L_08952308:;
    goto L_08952198;
L_08952310:;
    a0 = LD32(a3-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952328;
L_08952328:;
    a0 = LD32(s2);
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v1 = LD32(a0-16);
    f5 = BITSF(LD32(s3));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    v1 = s2 + v1;
    f1 = f1 - f5;
    f0 = f0 - f2;
    f4 = f4 - f3;
    a1 = LD32(v1+4);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08952378;
L_08952378:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08952404; }
    goto L_08952380;
L_08952380:;
    v1 = LD32(v0);
    v0 = D_08B1B740 - (-18624);
    f12 = BITSF(LD32(v0-18624));
    v0 = LD32(v1+104);
    s1 = s4 + 44;
    a0 = s0 + 0;
    a1 = sp + 0;
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089523A4;
L_089523A4:;
    cnd_ = v0 == 0;
    ST8(s4+40, v0);
    if (cnd_) { goto L_089523E0; }
    goto L_089523AC;
L_089523AC:;
    f2 = BITSF(LD32(s4+44));
    f5 = BITSF(LD32(s3));
    f1 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s3+8));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    ST32(s4+44, FBITS(f2));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    goto L_089521C4;
L_089523E0:;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = s1 + 0;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089523FC;
L_089523FC:;
    v0 = LD32(s2);
    goto L_089521C8;
L_08952404:;
    s1 = s4 + 44;
    ST8(s4+40, 0);
    goto L_089521C4;
}

/* 08952410 */
rv_t func_08952410(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08952410:;
    sp = sp - 32;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0895245C; }
    goto L_08952434;
L_08952434:;
    v0 = v1 << 2;
    v1 = D_08ADAA44 - (-21948);
    v1 = v1 - 21948;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08952450u: goto L_08952450; case 0x08952454u: goto L_08952454; case 0x0895245Cu: goto L_0895245C; case 0x08952520u: goto L_08952520; case 0x08952564u: goto L_08952564; default: rs_break(0, 0x08952448); }
L_08952450:;
    ST32(s0+88, 0);
    goto L_08952454;
L_08952454:;
    ST8(s0+68, 0);
    ST8(s0+69, 0);
    goto L_0895245C;
L_0895245C:;
    v0 = s1 < 0x8u;
    goto L_08952460;
L_08952460:;
    cnd_ = v0 == 0;
    ST32(s0+28, s1);
    if (cnd_) { goto L_08952490; }
    goto L_08952468;
L_08952468:;
    v1 = D_08ADAA64 - (-21916);
    v0 = s1 << 2;
    v1 = v1 - 21916;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08952484u: goto L_08952484; case 0x08952490u: goto L_08952490; case 0x089524A4u: goto L_089524A4; case 0x08952510u: goto L_08952510; default: rs_break(0, 0x0895247c); }
L_08952484:;
    v0 = 1;
    ST8(s0+68, v0);
    ST8(s0+69, 0);
    goto L_08952490;
L_08952490:;
    goto L_08952494;
L_08952494:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089524A4:;
    ST32(s0+72, 0);
    a0 = s0 + 0;
    a1 = 1163;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089524B8;
L_089524B8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08952500; }
    goto L_089524C0;
L_089524C0:;
    f0 = BITSF(LD32(s0+32));
    s1 = s0 + 44;
    a0 = v0 + 0;
    ST32(v0+116, FBITS(f0));
    a1 = s1 + 0;
    { rv_t r_ = func_089540F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089524D8;
L_089524D8:;
    cnd_ = v0 == 0;
    v0 = s0 + 76;
    if (cnd_) { goto L_089524FC; }
    goto L_089524E0;
L_089524E0:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+44));
    f1 = BITSF(LD32(s1+4));
    ST32(s0+76, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    goto L_08952490;
L_089524FC:;
    a0 = s0 + 0;
    goto L_08952500;
L_08952500:;
    a1 = 3;
    { rv_t r_ = func_08952410(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952508;
L_08952508:;
    goto L_08952494;
L_08952510:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_08952490;
L_08952520:;
    a1 = LD32(s0+16);
    ST32(s0+88, 0);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_0895245C; }
    goto L_08952530;
L_08952530:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08952538;
L_08952538:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952540;
L_08952540:;
    a0 = s0 + 0;
    v0 = func_089520B0(a0);
    goto L_08952548;
L_08952548:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895255C;
L_0895255C:;
    v0 = s1 < 0x8u;
    goto L_08952460;
L_08952564:;
    ST32(s0+88, 0);
    goto L_0895245C;
}

/* 0895256C */
rv_t func_0895256C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895256C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27490 - (29840);
    t1 = D_08C274A0 - (29856);
    t2 = D_08C274B0 - (29872);
    a1 = a1 & a0;
    v1 = t0 + 29840;
    a2 = t1 + 29856;
    cnd_ = a1 == 0;
    a3 = t2 + 29872;
    if (cnd_) { goto L_08952624; }
    goto L_0895259C;
L_0895259C:;
    v0 = D_08AEDCE4 - (-8988);
    f4 = BITSF(LD32(v0-8988));
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
    ST32(t0+29840, FBITS(f2));
    ST32(t1+29856, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+29872, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08952624;
L_08952624:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895262C */
rv_t func_0895262C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0895262C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895256C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952640;
L_08952640:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895264C */
u64 func_0895264C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0895264C:;
    sp = sp - 16;
    a2 = 1111;
    s0 = a0 + 0;
    { u64 r_ = func_08950F08(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08952664;
L_08952664:;
    v0 = D_08AF90A0 - (-28512);
    v0 = v0 - 28512;
    ST32(s0, v0);
    ST8(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895268C */
rv_t func_0895268C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0895268C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089526DC; }
    goto L_089526A8;
L_089526A8:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089526B0;
L_089526B0:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089526B8;
L_089526B8:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089526CC;
L_089526CC:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089526A8; }
    goto L_089526DC;
L_089526DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089526EC */
rv_t func_089526EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089526EC:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08952778; }
    goto L_08952708;
L_08952708:;
    f0 = BITSF(LD32(a0+32));
    v1 = LD32(a0+28);
    f0 = f0 + f12;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_08952778; }
    goto L_08952720;
L_08952720:;
    v0 = v1 << 2;
    v1 = D_08ADAA84 - (-21884);
    v1 = v1 - 21884;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0895273Cu: goto L_0895273C; case 0x08952778u: goto L_08952778; case 0x089527A0u: goto L_089527A0; case 0x089527ACu: goto L_089527AC; case 0x08952824u: goto L_08952824; default: rs_break(0, 0x08952734); }
L_0895273C:;
    a0 = s0 + 0;
    v0 = func_089528DC(a0);
    goto L_08952744;
L_08952744:;
    v1 = LD32(v0+108);
    v1 = v1 ^ 0x3e7;
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08952798; }
    goto L_08952754;
L_08952754:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_0895275C;
L_0895275C:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08952764;
L_08952764:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895276C;
L_0895276C:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_08952788; }
    goto L_08952778;
L_08952778:;
    goto L_0895277C;
L_0895277C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08952788:;
    { rv_t r_ = func_089528F8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952790;
L_08952790:;
    goto L_0895277C;
L_08952798:;
    a1 = 3;
    goto L_08952788;
L_089527A0:;
    a0 = s0 + 0;
    goto L_089527A4;
L_089527A4:;
    a1 = 1;
    goto L_08952788;
L_089527AC:;
    a0 = s0 + 0;
    v0 = func_089528DC(a0);
    goto L_089527B4;
L_089527B4:;
    v1 = LD32(v0+108);
    v1 = v1 ^ 0x3e7;
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08952798; }
    goto L_089527C4;
L_089527C4:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089527CC;
L_089527CC:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_089527D4;
L_089527D4:;
    a0 = v0 + 0;
    { u64 r_ = func_0895FEF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089527DC;
L_089527DC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08952814; }
    goto L_089527E4;
L_089527E4:;
    v0 = LD32(s0+16);
    goto L_089527E8;
L_089527E8:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_089527A4; }
    goto L_089527F0;
L_089527F0:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089527A4; }
    goto L_08952800;
L_08952800:;
    v0 = (v1 >> 3) & 0x1;
    goto L_08952804;
L_08952804:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0895277C; }
    goto L_0895280C;
L_0895280C:;
    a0 = s0 + 0;
    goto L_089527A4;
L_08952814:;
    a1 = 1;
    { rv_t r_ = func_089528F8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895281C;
L_0895281C:;
    v0 = LD32(s0+16);
    goto L_089527E8;
L_08952824:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089527A4; }
    goto L_08952830;
L_08952830:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08952788; }
    goto L_08952840;
L_08952840:;
    v0 = (v1 >> 4) & 0x1;
    goto L_08952804;
}

/* 08952848 */
rv_t func_08952848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08952848:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08952874; }
    goto L_08952864;
L_08952864:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08952874:;
    v0 = func_08950F38(a0);
    goto L_0895287C;
L_0895287C:;
    a1 = LD32(s0+28);
    v1 = D_08B1B704 - (-18684);
    v1 = v1 - 18684;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDCE8 - (-8984);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8984));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089528B8;
L_089528B8:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_089528C0;
L_089528C0:;
    v0 = v0 + 64;
    v1 = D_08AEDCEC - (-8980);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-8980));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_08952864;
}

/* 089528DC */
u32 func_089528DC(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089528DC:;
    sp = sp - 16;
    v0 = func_08950F38(a0);
    goto L_089528EC;
L_089528EC:;
    sp = sp + 16;
    return v0;
}

/* 089528F8 */
rv_t func_089528F8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089528F8:;
    sp = sp - 48;
    s1 = a1 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08952954; }
    goto L_0895291C;
L_0895291C:;
    v0 = v1 << 2;
    v1 = D_08ADAAD4 - (-21804);
    v1 = v1 - 21804;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08952938u: goto L_08952938; case 0x08952954u: goto L_08952954; case 0x08952A84u: goto L_08952A84; case 0x08952ACCu: goto L_08952ACC; default: rs_break(0, 0x08952930); }
L_08952938:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1162;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895294C;
L_0895294C:;
    cnd_ = v0 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08952A48; }
    goto L_08952954;
L_08952954:;
    v0 = s1 < 0x6u;
    goto L_08952958;
L_08952958:;
    ST32(s0+28, s1);
    cnd_ = v0 == 0;
    ST32(s0+32, 0);
    if (cnd_) { goto L_08952998; }
    goto L_08952964;
L_08952964:;
    v1 = D_08ADAAEC - (-21780);
    v0 = s1 << 2;
    v1 = v1 - 21780;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08952980u: goto L_08952980; case 0x08952998u: goto L_08952998; case 0x089529CCu: goto L_089529CC; case 0x089529F8u: goto L_089529F8; case 0x08952A38u: goto L_08952A38; default: rs_break(0, 0x08952978); }
L_08952980:;
    a0 = s0 + 0;
    a1 = 1162;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952990;
L_08952990:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089529AC; }
    goto L_08952998;
L_08952998:;
    goto L_0895299C;
L_0895299C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089529AC:;
    a0 = s0 + 0;
    a1 = 4;
    v0 = v0 | 0x10;
    ST32(s0+8, v0);
    goto L_089529BC;
L_089529BC:;
    { rv_t r_ = func_089528F8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089529C4;
L_089529C4:;
    goto L_0895299C;
L_089529CC:;
    a0 = s0 + 0;
    a1 = 1161;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089529DC;
L_089529DC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089529EC; }
    goto L_089529E4;
L_089529E4:;
    ST8(s0+36, v0);
    goto L_08952998;
L_089529EC:;
    a0 = s0 + 0;
    goto L_089529F0;
L_089529F0:;
    a1 = 1;
    goto L_089529BC;
L_089529F8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    func_08952CA0(a0, a1);
    goto L_08952A04;
L_08952A04:;
    a0 = s0 + 0;
    a1 = 1163;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952A14;
L_08952A14:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089529F0; }
    goto L_08952A1C;
L_08952A1C:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_089540F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952A28;
L_08952A28:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0895299C; }
    goto L_08952A30;
L_08952A30:;
    a0 = s0 + 0;
    goto L_089529F0;
L_08952A38:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x8;
    ST32(s0+8, v0);
    goto L_08952998;
L_08952A48:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08952A54;
L_08952A54:;
    a0 = LD32(sp+16);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952A5C;
L_08952A5C:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08952A64;
L_08952A64:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 16;
    goto L_08952A70;
L_08952A70:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952A7C;
L_08952A7C:;
    v0 = s1 < 0x6u;
    goto L_08952958;
L_08952A84:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1161;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08952A98;
L_08952A98:;
    cnd_ = v0 == 0;
    ST32(sp+20, v0);
    if (cnd_) { goto L_08952954; }
    goto L_08952AA0;
L_08952AA0:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08952AAC;
L_08952AAC:;
    a0 = LD32(sp+20);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952AB4;
L_08952AB4:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08952ABC;
L_08952ABC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    a1 = sp + 20;
    goto L_08952A70;
L_08952ACC:;
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = 1163;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08952AE0;
L_08952AE0:;
    cnd_ = v0 != 0;
    ST32(sp+24, v0);
    if (cnd_) { goto L_08952B1C; }
    goto L_08952AE8;
L_08952AE8:;
    a0 = s0 + 0;
    v0 = func_089528DC(a0);
    goto L_08952AF0;
L_08952AF0:;
    a0 = v0 + 0;
    v0 = func_089577A8(a0);
    goto L_08952AF8;
L_08952AF8:;
    a0 = v0 + 0;
    v0 = D_08AEDCF0 - (-8976);
    f12 = BITSF(LD32(v0-8976));
    { rv_t r_ = func_089601D4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952B08;
L_08952B08:;
    a0 = s0 + 0;
    v0 = func_089528DC(a0);
    goto L_08952B10;
L_08952B10:;
    v1 = 999;
    ST32(v0+108, v1);
    goto L_08952954;
L_08952B1C:;
    a1 = LD32(s0+16);
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08952B28;
L_08952B28:;
    a0 = LD32(sp+24);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952B30;
L_08952B30:;
    a0 = s0 + 0;
    v0 = func_08950F38(a0);
    goto L_08952B38;
L_08952B38:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 24;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952B4C;
L_08952B4C:;
    goto L_08952AE8;
}

/* 08952B54 */
rv_t func_08952B54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08952B54:;
    v0 = D_08B20494 - (1172);
    v1 = D_08C275FC - (30204);
    a1 = v0 + 1172;
    a2 = v1 + 30204;
    f5 = BITSF(LD32(v1+30204));
    v1 = LD_U16(a1+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    sp = sp - 16;
    v1 = v0 << 3;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08952B90; }
    goto L_08952B88;
L_08952B88:;
    v0 = LD32(a1+12);
    v0 = v0 + v1;
    goto L_08952B90;
L_08952B90:;
    f3 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+4));
    f0 = f0 - f5;
    f3 = f3 - f4;
    f1 = f1 - f2;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08952BEC */
rv_t func_08952BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08952BEC:;
    v0 = D_08C27608 - (30216);
    f0 = BITSF(LD32(v0+30216));
    v0 = D_08B20494 - (1172);
    v1 = D_08C275F0 - (30192);
    a1 = v0 + 1172;
    a2 = v1 + 30192;
    f5 = BITSF(LD32(v1+30192));
    v1 = LD_U16(a1+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    sp = sp - 16;
    v1 = v0 << 3;
    f6 = f0 * f0;
    a3 = 1;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08952C38; }
    goto L_08952C30;
L_08952C30:;
    v0 = LD32(a1+12);
    v0 = v0 + v1;
    goto L_08952C38;
L_08952C38:;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+8));
    f2 = f2 - f5;
    f3 = f3 - f0;
    f4 = f4 - f1;
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
    fcc = FCMP(f6, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08952C94; }
    goto L_08952C90;
L_08952C90:;
    a3 = 0 + 0;
    goto L_08952C94;
L_08952C94:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08952CA0 */
void func_08952CA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_08952CA0:;
    sp = sp - 144;
    s7 = a1 + 0;
    s1 = a0 + 0;
    v0 = func_089528DC(a0);
    goto L_08952CD8;
L_08952CD8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08952CF8;
L_08952CF8:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089528DC(a0);
    goto L_08952D04;
L_08952D04:;
    a1 = LD32(v0+56);
    a0 = s0 + 0;
    v0 = func_0895E284(a0, a1);
    goto L_08952D10;
L_08952D10:;
    s0 = v0 + 0;
    v0 = 0xffff;
    cnd_ = s0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08952F7C; }
    goto L_08952D20;
L_08952D20:;
    a0 = s1 + 0;
    v0 = func_089528DC(a0);
    goto L_08952D28;
L_08952D28:;
    a1 = LD32(v0+108);
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_08952FB0; }
    goto L_08952D3C;
L_08952D3C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    if (cnd_) { s2 = 0 + 0; goto L_08952D8C; }
    goto L_08952D60;
L_08952D60:;
    a2 = LD32(a0);
    goto L_08952D64;
L_08952D64:;
    v0 = LD32(a2);
    v1 = LD32(v0-16);
    v1 = a2 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08952FB8; }
    goto L_08952D7C;
L_08952D7C:;
    a0 = LD32(a0+4);
    goto L_08952D80;
L_08952D80:;
    cnd_ = a0 != 0;
    if (cnd_) { a2 = LD32(a0); goto L_08952D64; }
    goto L_08952D88;
L_08952D88:;
    s2 = 0 + 0;
    goto L_08952D8C;
L_08952D8C:;
    cnd_ = s2 == 0;
    v0 = s0 << 1;
    if (cnd_) { goto L_08952FB0; }
    goto L_08952D94;
L_08952D94:;
    v0 = v0 + s0;
    v0 = v0 << 3;
    ST32(sp+80, 0);
    s6 = D_08C275F0 - (30192);
    s4 = 0 + 0;
    ST32(sp+84, v0);
    v0 = D_08C275FC - (30204);
    s3 = s6 + 30192;
    fp = v0 + 30204;
    s5 = D_08B20494 - (1172);
    goto L_08952DBC;
L_08952DBC:;
    a1 = s4 + 0;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = sp + 16;
    s5 = s5 + 1172;
    func_08952FD8(a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08952DD4;
L_08952DD4:;
    v0 = LD_U16(s5+10);
    a0 = s1 + 0;
    s4 = s4 + 1;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08952DF8; }
    goto L_08952DEC;
L_08952DEC:;
    v0 = LD32(s5+12);
    a1 = LD32(sp+84);
    v1 = v0 + a1;
    goto L_08952DF8;
L_08952DF8:;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    ST32(s3+8, FBITS(f2));
    ST32(s6+30192, FBITS(f0));
    ST32(s3+4, FBITS(f1));
    v0 = func_089528DC(a0);
    goto L_08952E14;
L_08952E14:;
    a0 = s1 + 0;
    v1 = LD32(v0+48);
    f1 = BITSF(LD32(s2+288));
    f3 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(v1+288));
    f2 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(s3+4));
    f0 = f0 + f1;
    f1 = BITSF(LD32(sp+16));
    f6 = BITSF(LD32(s3+8));
    v0 = D_08C27608 - (30216);
    f0 = f0 + f0;
    f4 = BITSF(LD32(s6+30192));
    v1 = D_08C275FC - (30204);
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    ST32(v0+30216, FBITS(f0));
    f8 = f3 + f3;
    f7 = f2 + f2;
    f0 = f1 + f1;
    ST32(sp+68, FBITS(f2));
    f6 = f6 + f8;
    f5 = f5 + f7;
    f4 = f4 + f0;
    ST32(sp+64, FBITS(f1));
    ST32(fp+8, FBITS(f6));
    ST32(fp+4, FBITS(f5));
    ST32(v1+30204, FBITS(f4));
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f7));
    ST32(sp+56, FBITS(f8));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    v0 = func_089528DC(a0);
    goto L_08952EA8;
L_08952EA8:;
    a1 = D_08C27EF8 - (32504);
    v1 = LD32(v0+56);
    a0 = s1 + 0;
    ST32(a1+32504, v1);
    v0 = func_089528DC(a0);
    goto L_08952EBC;
L_08952EBC:;
    v1 = RS_FADDR(func_08AA0FC8, 0x08AA0FC8u) - (4040);
    t1 = LD32(v0+56);
    v0 = RS_FADDR(func_08952B54, 0x08952B54u) - (11092);
    t2 = v0 + 11092;
    t3 = v1 + 4040;
    v0 = RS_FADDR(func_08952BEC, 0x08952BECu) - (11244);
    v1 = RS_FADDR(func_0895E124, 0x0895E124u) - (-7900);
    v0 = v0 + 11244;
    v1 = v1 - 7900;
    a0 = s5 + 0;
    a1 = D_08C27F08 - (32520);
    a1 = a1 + 32520;
    a2 = sp + 80;
    a3 = 128;
    t0 = s0 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_088043E4(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08952F04;
L_08952F04:;
    a0 = D_08C27EF8 - (32504);
    v0 = LD32(sp+80);
    v1 = (s32)s4 < 3;
    cnd_ = v0 != 0;
    ST32(a0+32504, 0);
    if (cnd_) { goto L_08952F20; }
    goto L_08952F18;
L_08952F18:;
    cnd_ = v1 != 0;
    if (cnd_) { s5 = D_08B20494 - (1172); goto L_08952DBC; }
    goto L_08952F20;
L_08952F20:;
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08952F7C; }
    goto L_08952F28;
L_08952F28:;
    a1 = D_08C27F08 - (32520);
    a1 = a1 + 32520;
    v0 = v0 << 1;
    v0 = v0 + a1;
    a1 = LD_U16(v0-2);
    v1 = LD_U16(s5+10);
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08952F60; }
    goto L_08952F4C;
L_08952F4C:;
    v1 = LD32(s5+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_08952F60;
L_08952F60:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s7+8, FBITS(f0));
    v1 = 1;
    ST32(s7, FBITS(f1));
    ST32(s7+4, FBITS(f2));
    goto L_08952F7C;
L_08952F7C:;
    v0 = v1 + 0;
    sp = sp + 144;
    return;
L_08952FB0:;
    v1 = 0 + 0;
    goto L_08952F7C;
L_08952FB8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_08952D7C; }
    goto L_08952FC4;
L_08952FC4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08952D80; }
    goto L_08952FD0;
L_08952FD0:;
    goto L_08952D8C;
}

/* 08952FD8 */
void func_08952FD8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08952FD8:;
    sp = sp - 160;
    s1 = a3 + 0;
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    a0 = a2 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953008;
L_08953008:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v0+8));
    v0 = 1;
    ST32(sp+4, 0);
    ST32(sp, FBITS(f0));
    cnd_ = s0 == v0;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_08953160; }
    goto L_08953024;
L_08953024:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089530D4; }
    goto L_08953030;
L_08953030:;
    f0 = BITSF(LD32(sp));
    goto L_08953034;
L_08953034:;
    f1 = BITSF(LD32(sp+4));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    goto L_08953048;
L_08953048:;
    v0 = LD32(s1);
    {u32 a_=sp+(128);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+4);
    {vr12=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(s1+8);
    {vr13=BITSF(v1);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089530C4; }
    goto L_08953084;
L_08953084:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(s1+8, FBITS(f3));
    {v0=FBITS(vr1);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(s1, FBITS(f2));
    ST32(s1+4, v0);
    goto L_089530C4;
L_089530C4:;
    sp = sp + 160;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;return; }
L_089530D4:;
    cnd_ = s0 != 0;
    if (cnd_) { f0 = BITSF(LD32(sp)); goto L_08953034; }
    goto L_089530DC;
L_089530DC:;
    v0 = FBITS(f0);
    {u32 a_=sp+(80);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr0=BITSF(s0);}
    v0 = FBITS(f1);
    {vr5=BITSF(s0);}
    {vr6=BITSF(v0);}
    v0 = 0x3f800000u;
    {vr1=BITSF(v0);}
    {vr2=BITSF(s0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[10]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr8);}
    f2 = BITSF(v0);
    {v0=FBITS(v[9]);}
    f1 = BITSF(v0);
    v0 = D_08AEDCF4 - (-8972);
    f0 = BITSF(LD32(v0-8972));
    ST32(s1, FBITS(f2));
    ST32(s1+8, FBITS(f3));
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, 0);
    ST32(s1+4, FBITS(f1));
    ST32(sp+40, 0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f3));
    goto L_08953048;
L_08953160:;
    v0 = FBITS(f0);
    v1 = 0 + 0;
    {u32 a_=sp+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = FBITS(f1);
    {vr5=BITSF(v1);}
    {vr6=BITSF(v0);}
    v0 = 0x3f800000u;
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[10]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr8);}
    f2 = BITSF(v0);
    {v0=FBITS(v[9]);}
    f1 = BITSF(v0);
    v0 = D_08AEDCF4 - (-8972);
    f0 = BITSF(LD32(v0-8972));
    ST32(s1, FBITS(f2));
    ST32(s1+8, FBITS(f3));
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, 0);
    ST32(s1+4, FBITS(f1));
    ST32(sp+40, 0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f3));
    goto L_08953048;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 089531E8 */
rv_t func_089531E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
L_089531E8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08B45A9C - (23196);
    t3 = D_08C27540 - (30016);
    t4 = D_08C27550 - (30032);
    t6 = D_08C27560 - (30048);
    t7 = D_08C275F0 - (30192);
    t2 = D_08C275FC - (30204);
    a1 = a1 & a0;
    t1 = t0 + 23196;
    v1 = t3 + 30016;
    a2 = t4 + 30032;
    a3 = t6 + 30048;
    t8 = t7 + 30192;
    cnd_ = a1 == 0;
    t5 = t2 + 30204;
    if (cnd_) { goto L_089532DC; }
    goto L_08953230;
L_08953230:;
    v0 = D_08AEDCF8 - (-8968);
    f4 = BITSF(LD32(v0-8968));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f8 = BITSF(LD32(t1+8));
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f9 = BITSF(LD32(t1+4));
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
    f7 = BITSF(LD32(t0+23196));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(t3+30016, FBITS(f2));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(t4+30032, FBITS(f6));
    ST32(t2+30204, FBITS(f7));
    ST32(t5+8, FBITS(f8));
    ST32(v1+4, FBITS(f5));
    ST32(v1+8, FBITS(f6));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(t6+30048, FBITS(f1));
    ST32(a2+12, FBITS(f1));
    ST32(t7+30192, FBITS(f7));
    ST32(t8+8, FBITS(f8));
    ST32(t5+4, FBITS(f9));
    ST32(a2+8, FBITS(f3));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(t8+4, FBITS(f9));
    goto L_089532DC;
L_089532DC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089532E4 */
rv_t func_089532E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089532E4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089531E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089532F8;
L_089532F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08953304 */
rv_t func_08953304(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08953304:;
    sp = sp - 16;
    a2 = 1162;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895331C;
L_0895331C:;
    a0 = D_08B45A9C - (23196);
    v1 = a0 + 23196;
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    v0 = s0 + 32;
    ST32(v0+4, FBITS(f0));
    a1 = s0 + 52;
    ST32(v0+8, FBITS(f1));
    v0 = D_08AF90D8 - (-28456);
    v0 = v0 - 28456;
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    ST32(s0+32, FBITS(f2));
    f2 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0, v0);
    ST32(s0+52, FBITS(f2));
    ST8(s0+65, 0);
    ST32(s0+28, 0);
    ST8(s0+64, 0);
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895338C */
rv_t func_0895338C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0895338C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089533D4; }
    goto L_089533A8;
L_089533A8:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089533B0;
L_089533B0:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089533C4;
L_089533C4:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089533A8; }
    goto L_089533D4;
L_089533D4:;
    a0 = s0 + 0;
    v0 = func_08953744(a0);
    goto L_089533DC;
L_089533DC:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089533EC;
L_089533EC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089533FC */
rv_t func_089533FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089533FC:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD_U8(a0+64);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08953428; }
    goto L_0895341C;
L_0895341C:;
    v0 = LD_U8(a0+65);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895343C; }
    goto L_08953428;
L_08953428:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895343C:;
    v0 = func_08953744(a0);
    goto L_08953444;
L_08953444:;
    a0 = v0 + 0;
    a1 = s0 + 52;
    f12 = f20;
    { rv_t r_ = func_0895D264(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953454;
L_08953454:;
    ST8(s0+65, v0);
    goto L_08953428;
}

/* 0895345C */
rv_t func_0895345C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0895345C:;
    sp = sp - 64;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_089534C8; }
    goto L_08953480;
L_08953480:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_089534CC; }
    goto L_0895348C;
L_0895348C:;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089534CC; }
    goto L_0895349C;
L_0895349C:;
    v0 = v1 << 2;
    v1 = D_08ADAB04 - (-21756);
    v1 = v1 - 21756;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089534B8u: goto L_089534B8; case 0x089534C8u: goto L_089534C8; case 0x089534DCu: goto L_089534DC; case 0x08953510u: goto L_08953510; case 0x0895352Cu: goto L_0895352C; default: rs_break(0, 0x089534b0); }
L_089534B8:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_089534C0;
L_089534C0:;
    { rv_t r_ = func_08953C0C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089534C8;
L_089534C8:;
    goto L_089534CC;
L_089534CC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089534DC:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08953508; }
    goto L_089534E8;
L_089534E8:;
    v1 = LD32(v0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 2;
    if (cnd_) { goto L_089534C0; }
    goto L_089534F8;
L_089534F8:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089534CC; }
    goto L_08953504;
L_08953504:;
    a0 = s0 + 0;
    goto L_08953508;
L_08953508:;
    a1 = 2;
    goto L_089534C0;
L_08953510:;
    f0 = BITSF(LD32(s0+44));
    f1 = BITSF(0);
    f0 = f0 - f12;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0+44, FBITS(f0));
    if (cnd_) { goto L_0895369C; }
    goto L_0895352C;
L_0895352C:;
    v0 = LD_U8(s0+65);
    goto L_08953530;
L_08953530:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089534CC; }
    goto L_08953538;
L_08953538:;
    f0 = BITSF(LD32(s0+48));
    f3 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    ST32(s0+48, FBITS(f0));
    if (cnd_) { goto L_089534CC; }
    goto L_08953554;
L_08953554:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a1 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + v1;
    a0 = a0 + a1;
    v1 = a0 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    v1 = D_08AEDD00 - (-8960);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f4 = BITSF(LD32(v1-8960));
    v0 = D_08AEDCFC - (-8964);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    f0 = BITSF(LD32(v0-8964));
    ST32(s0+56, FBITS(f3));
    f2 = f2 * f4;
    f1 = f1 + f1;
    a2 = s0 + 52;
    v1 = LD32(a2+4);
    f2 = f2 + f2;
    f1 = f1 + f0;
    {u32 a_=sp+(16);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = a1 + a0;
    f2 = f2 + f0;
    ST32(s0+60, FBITS(f1));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = LD32(a2+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(t0+4, a1);
    fcc = FCMP(f0, f3, 2);
    ST32(s0+52, FBITS(f2));
    cnd_ = fcc;
    ST32(a3+23232, a0);
    if (cnd_) { goto L_0895364C; }
    goto L_08953614;
L_08953614:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(a2+8, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(s0+52, v1);
    ST32(a2+4, v0);
    goto L_0895364C;
L_0895364C:;
    v0 = LD32(a3+23232);
    a0 = LD32(t0+4);
    ST8(s0+65, 0);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f1 = BITSF(v1);
    v1 = D_08AEDD04 - (-8956);
    a0 = a0 + v0;
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v1-8956));
    ST32(t0+4, a0);
    f0 = f0 * f4;
    ST32(a3+23232, v0);
    f0 = f0 * f1;
    f0 = f0 + f1;
    ST32(s0+48, FBITS(f0));
    goto L_089534C8;
L_0895369C:;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_08953C0C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089536A8;
L_089536A8:;
    v0 = LD_U8(s0+65);
    goto L_08953530;
}

/* 089536B0 */
rv_t func_089536B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089536B0:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089536DC; }
    goto L_089536CC;
L_089536CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089536DC:;
    v0 = func_08953744(a0);
    goto L_089536E4;
L_089536E4:;
    a1 = LD32(s0+28);
    v1 = D_08B1B718 - (-18664);
    v1 = v1 - 18664;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDD08 - (-8952);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8952));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953720;
L_08953720:;
    a0 = s0 + 0;
    v0 = func_08953744(a0);
    goto L_08953728;
L_08953728:;
    v0 = v0 + 64;
    v1 = D_08AEDD0C - (-8948);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-8948));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_089536CC;
}

/* 08953744 */
u32 func_08953744(u32 a0)
{
    u32 v0 = 0;
L_08953744:;
    v0 = LD32(a0+24);
    return v0;
}

/* 0895374C */
void func_0895374C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0895374C:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a2 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a2;
    v1 = (u32)((s32)v0 >> 16);
    a1 = v0 << 16;
    a2 = a2 + v0;
    a1 = a1 + v1;
    a1 = a1 + a2;
    v1 = a1 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    v1 = D_08AEDD14 - (-8940);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f3 = BITSF(LD32(v1-8940));
    v0 = D_08AEDD10 - (-8944);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f3;
    f0 = BITSF(LD32(v0-8944));
    ST32(a0+36, 0);
    f2 = f2 * f3;
    f1 = f1 + f1;
    t1 = a0 + 32;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    f2 = f2 + f2;
    f1 = f1 + f0;
    f3 = BITSF(LD32(a0+36));
    a2 = a2 + a1;
    f2 = f2 + f0;
    ST32(a0+40, FBITS(f1));
    sp = sp - 16;
    v0 = FBITS(f2);
    v1 = LD32(t1+8);
    {vr8=BITSF(v0);}
    v0 = LD32(t1+4);
    {vr9=BITSF(v0);}
    {vr10=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(t0+4, a2);
    fcc = FCMP(f0, f3, 2);
    ST32(a3+23232, a1);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    cnd_ = fcc;
    ST32(a0+32, FBITS(f2));
    if (cnd_) { goto L_0895384C; }
    goto L_08953818;
L_08953818:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(t1+8, FBITS(f3));
    ST32(sp+4, v0);
    ST32(a0+32, v1);
    ST32(sp, v1);
    ST32(sp+8, FBITS(f3));
    ST32(t1+4, v0);
    goto L_0895384C;
L_0895384C:;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 08953854 */
rv_t func_08953854(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08953854:;
    v0 = D_08B20494 - (1172);
    v1 = D_08C276C8 - (30408);
    a1 = v0 + 1172;
    a2 = v1 + 30408;
    f5 = BITSF(LD32(v1+30408));
    v1 = LD_U16(a1+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    sp = sp - 16;
    v1 = v0 << 3;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08953890; }
    goto L_08953888;
L_08953888:;
    v0 = LD32(a1+12);
    v0 = v0 + v1;
    goto L_08953890;
L_08953890:;
    f3 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+4));
    f0 = f0 - f5;
    f3 = f3 - f4;
    f1 = f1 - f2;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    {vr1=BITSF(v0);}
    v0 = FBITS(f3);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 089538EC */
rv_t func_089538EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089538EC:;
    v0 = D_08C276D4 - (30420);
    f0 = BITSF(LD32(v0+30420));
    v0 = D_08B20494 - (1172);
    v1 = D_08C276BC - (30396);
    a1 = v0 + 1172;
    a2 = v1 + 30396;
    f5 = BITSF(LD32(v1+30396));
    v1 = LD_U16(a1+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    sp = sp - 16;
    v1 = v0 << 3;
    f6 = f0 * f0;
    a3 = 1;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08953938; }
    goto L_08953930;
L_08953930:;
    v0 = LD32(a1+12);
    v0 = v0 + v1;
    goto L_08953938;
L_08953938:;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+8));
    f2 = f2 - f5;
    f3 = f3 - f0;
    f4 = f4 - f1;
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
    fcc = FCMP(f6, f0, 12);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08953994; }
    goto L_08953990;
L_08953990:;
    a3 = 0 + 0;
    goto L_08953994;
L_08953994:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089539A0 */
u32 func_089539A0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_089539A0:;
    sp = sp - 144;
    s1 = a1 & 0xffff;
    a1 = s1 << 1;
    a1 = a1 + s1;
    a1 = a1 << 3;
    v0 = D_08AEDD18 - (-8936);
    v1 = D_08AEDD1C - (-8932);
    s6 = a2 + 0;
    s4 = a0 + 32;
    s2 = 0 + 0;
    s0 = a0 + 0;
    ST32(sp+64, 0);
    ST32(sp+68, a1);
    f21 = BITSF(LD32(v0-8936));
    f20 = BITSF(LD32(v1-8932));
    v0 = D_08C276BC - (30396);
    v1 = D_08C276C8 - (30408);
    s7 = v0 + 30396;
    s5 = v1 + 30408;
    a0 = s0 + 0;
    goto L_08953A20;
L_08953A20:;
    a1 = D_08C27F08 - (32520);
    fp = a1 + 32520;
    func_0895374C(a0);
    goto L_08953A2C;
L_08953A2C:;
    f1 = BITSF(s2);
    s3 = D_08B20494 - (1172);
    v0 = D_08AEDD20 - (-8928);
    f0 = (float)(s32)FBITS(f1);
    s3 = s3 + 1172;
    f3 = BITSF(LD32(v0-8928));
    v0 = LD_U16(s3+10);
    f0 = f0 * f21;
    a0 = s0 + 0;
    v0 = s1 < v0;
    s2 = s2 + 1;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    f0 = f20 - f0;
    if (cnd_) { goto L_08953A70; }
    goto L_08953A64;
L_08953A64:;
    v0 = LD32(s3+12);
    a1 = LD32(sp+68);
    v1 = v0 + a1;
    goto L_08953A70;
L_08953A70:;
    fcc = FCMP(f0, f3, 14);
    f8 = BITSF(LD32(v1+8));
    f6 = BITSF(LD32(v1));
    f7 = BITSF(LD32(v1+4));
    v0 = D_08C276BC - (30396);
    ST32(v0+30396, FBITS(f6));
    ST32(s7+4, FBITS(f7));
    cnd_ = fcc;
    ST32(s7+8, FBITS(f8));
    if (cnd_) { goto L_08953A98; }
    goto L_08953A94;
L_08953A94:;
    f3 = f0;
    goto L_08953A98;
L_08953A98:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+8));
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    v0 = D_08C276D4 - (30420);
    ST32(v0+30420, FBITS(f3));
    f4 = f1 + f1;
    f5 = f2 + f2;
    f3 = f0 + f0;
    v1 = D_08C276C8 - (30408);
    f7 = f7 + f4;
    f8 = f8 + f5;
    f6 = f6 + f3;
    ST32(sp+48, FBITS(f0));
    ST32(v1+30408, FBITS(f6));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f8));
    ST32(s5+4, FBITS(f7));
    ST32(s5+8, FBITS(f8));
    v0 = func_08953744(a0);
    goto L_08953B08;
L_08953B08:;
    v1 = LD32(v0+56);
    a1 = D_08C27EF8 - (32504);
    a0 = s0 + 0;
    ST32(a1+32504, v1);
    v0 = func_08953744(a0);
    goto L_08953B1C;
L_08953B1C:;
    t1 = LD32(v0+56);
    v1 = RS_FADDR(func_08AA0FC8, 0x08AA0FC8u) - (4040);
    v0 = RS_FADDR(func_08953854, 0x08953854u) - (14420);
    t2 = v0 + 14420;
    t3 = v1 + 4040;
    v0 = RS_FADDR(func_089538EC, 0x089538ECu) - (14572);
    v1 = RS_FADDR(func_0895E124, 0x0895E124u) - (-7900);
    v0 = v0 + 14572;
    v1 = v1 - 7900;
    a0 = s3 + 0;
    a1 = fp + 0;
    a2 = sp + 64;
    a3 = 128;
    t0 = s1 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_088043E4(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08953B60;
L_08953B60:;
    a0 = D_08C27EF8 - (32504);
    v0 = LD32(sp+64);
    v1 = (s32)s2 < 5;
    cnd_ = v0 != 0;
    ST32(a0+32504, 0);
    if (cnd_) { goto L_08953B7C; }
    goto L_08953B74;
L_08953B74:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08953A20; }
    goto L_08953B7C;
L_08953B7C:;
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08953BD0; }
    goto L_08953B84;
L_08953B84:;
    v0 = v0 << 1;
    v0 = v0 + fp;
    a1 = LD_U16(v0-2);
    v1 = LD_U16(s3+10);
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08953BB4; }
    goto L_08953BA0;
L_08953BA0:;
    v1 = LD32(s3+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_08953BB4;
L_08953BB4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s6+8, FBITS(f0));
    v1 = 1;
    ST32(s6, FBITS(f1));
    ST32(s6+4, FBITS(f2));
    goto L_08953BD0;
L_08953BD0:;
    v0 = v1 + 0;
    sp = sp + 144;
    return v0;
}

/* 08953C0C */
rv_t func_08953C0C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08953C0C:;
    sp = sp - 64;
    s1 = a0 + 0;
    v1 = LD32(a0+28);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08953C94; }
    goto L_08953C30;
L_08953C30:;
    v0 = v1 << 2;
    v1 = D_08ADAB54 - (-21676);
    v1 = v1 - 21676;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08953C4Cu: goto L_08953C4C; case 0x08953C94u: goto L_08953C94; case 0x08953F2Cu: goto L_08953F2C; default: rs_break(0, 0x08953c44); }
L_08953C4C:;
    a1 = LD32(s1+16);
    cnd_ = a1 == 0;
    ST32(sp+16, a1);
    if (cnd_) { goto L_08953C94; }
    goto L_08953C58;
L_08953C58:;
    a0 = s1 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08953C60;
L_08953C60:;
    a0 = LD32(sp+16);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953C68;
L_08953C68:;
    a0 = s1 + 0;
    v0 = func_08953744(a0);
    goto L_08953C70;
L_08953C70:;
    a2 = LD32(v0);
    a0 = v0 + 0;
    v1 = LD32(a2+48);
    t_ = v1;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953C84;
L_08953C84:;
    v0 = LD32(s1+16);
    ST32(sp+16, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08953C58; }
    goto L_08953C94;
L_08953C94:;
    v0 = s0 < 0x5u;
    cnd_ = v0 == 0;
    ST32(s1+28, s0);
    if (cnd_) { goto L_08953D54; }
    goto L_08953CA0;
L_08953CA0:;
    v1 = D_08ADAB68 - (-21656);
    v0 = s0 << 2;
    v1 = v1 - 21656;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08953CBCu: goto L_08953CBC; case 0x08953D54u: goto L_08953D54; case 0x08953D70u: goto L_08953D70; case 0x08953F1Cu: goto L_08953F1C; default: rs_break(0, 0x08953cb4); }
L_08953CBC:;
    a0 = s1 + 0;
    v0 = func_08953744(a0);
    goto L_08953CC4;
L_08953CC4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953CE4;
L_08953CE4:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08953744(a0);
    goto L_08953CF0;
L_08953CF0:;
    a1 = LD32(v0+56);
    a0 = s0 + 0;
    v0 = func_0895E284(a0, a1);
    goto L_08953CFC;
L_08953CFC:;
    a1 = v0 + 0;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08953D68; }
    goto L_08953D0C;
L_08953D0C:;
    a2 = sp + 0;
    v0 = func_089539A0(a0, a1, a2);
    goto L_08953D14;
L_08953D14:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08953D48; }
    goto L_08953D1C;
L_08953D1C:;
    a1 = 1163;
    a2 = 0 + 0;
    { rv_t r_ = func_08955410(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953D28;
L_08953D28:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08953D48; }
    goto L_08953D30;
L_08953D30:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_089540F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953D3C;
L_08953D3C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08953D58; }
    goto L_08953D44;
L_08953D44:;
    a0 = s1 + 0;
    goto L_08953D48;
L_08953D48:;
    a1 = 2;
    goto L_08953D4C;
L_08953D4C:;
    { rv_t r_ = func_08953C0C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08953D54;
L_08953D54:;
    goto L_08953D58;
L_08953D58:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08953D68:;
    a1 = 3;
    goto L_08953D4C;
L_08953D70:;
    t0 = D_08B25AC0 - (23232);
    v1 = LD32(t0+23232);
    a1 = t0 + 23232;
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    t1 = D_08AEDD24 - (-8924);
    a2 = D_08AEDD2C - (-8916);
    f1 = (float)(s32)FBITS(f0);
    v0 = D_08AEDD28 - (-8920);
    f3 = BITSF(LD32(t1-8924));
    f2 = BITSF(LD32(a2-8916));
    f0 = BITSF(LD32(v0-8920));
    a0 = a0 + v1;
    f1 = f1 * f2;
    f0 = f0 - f3;
    ST32(a1+4, a0);
    f1 = f1 * f0;
    ST32(t0+23232, v1);
    f1 = f1 + f3;
    ST32(s1+44, FBITS(f1));
    goto L_08953DD4;
L_08953DD4:;
    v0 = LD32(t0+23232);
    a3 = t0 + 23232;
    a1 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a1;
    v1 = (u32)((s32)v0 >> 16);
    a0 = v0 << 16;
    a1 = a1 + v0;
    a0 = a0 + v1;
    a0 = a0 + a1;
    v1 = a0 >> 1;
    f0 = BITSF(v1);
    v0 = v0 >> 1;
    f4 = BITSF(LD32(a2-8916));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = D_08AEDD30 - (-8912);
    ST32(s1+56, 0);
    f2 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    f0 = BITSF(LD32(v0-8912));
    a2 = s1 + 52;
    f2 = f2 * f4;
    f1 = f1 + f1;
    v1 = LD32(a2+4);
    f3 = BITSF(LD32(s1+56));
    f2 = f2 + f2;
    f1 = f1 + f0;
    {u32 a_=sp+(32);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a1 = a1 + a0;
    f2 = f2 + f0;
    ST32(s1+60, FBITS(f1));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = LD32(a2+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(t0+23232, a0);
    t0 = D_08B25AC0 - (23232);
    fcc = FCMP(f0, f3, 2);
    ST32(a3+4, a1);
    cnd_ = fcc;
    ST32(s1+52, FBITS(f2));
    if (cnd_) { goto L_08953EC8; }
    goto L_08953E94;
L_08953E94:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a0=FBITS(v[2]);}
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(a2+8, a0);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(s1+52, v0);
    ST32(a2+4, v1);
    goto L_08953EC8;
L_08953EC8:;
    v0 = LD32(t0+23232);
    v1 = LD32(a3+4);
    f2 = BITSF(LD32(t1-8924));
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    a0 = v0 >> 1;
    f1 = BITSF(a0);
    v1 = v1 + v0;
    ST32(t0+23232, v0);
    f0 = (float)(s32)FBITS(f1);
    v0 = 1;
    ST32(a3+4, v1);
    f0 = f0 * f4;
    ST8(s1+64, v0);
    f0 = f0 * f2;
    ST8(s1+65, 0);
    f0 = f0 + f2;
    ST32(s1+48, FBITS(f0));
    goto L_08953D54;
L_08953F1C:;
    t1 = D_08AEDD24 - (-8924);
    t0 = D_08B25AC0 - (23232);
    a2 = D_08AEDD2C - (-8916);
    goto L_08953DD4;
L_08953F2C:;
    ST8(s1+64, 0);
    ST8(s1+65, 0);
    goto L_08953C94;
}

/* 08953F38 */
rv_t func_08953F38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
L_08953F38:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08B45A9C - (23196);
    t3 = D_08C2760C - (30220);
    t4 = D_08C2761C - (30236);
    t6 = D_08C2762C - (30252);
    t7 = D_08C276BC - (30396);
    t2 = D_08C276C8 - (30408);
    a1 = a1 & a0;
    t1 = t0 + 23196;
    v1 = t3 + 30220;
    a2 = t4 + 30236;
    a3 = t6 + 30252;
    t8 = t7 + 30396;
    cnd_ = a1 == 0;
    t5 = t2 + 30408;
    if (cnd_) { goto L_0895402C; }
    goto L_08953F80;
L_08953F80:;
    v0 = D_08AEDD34 - (-8908);
    f4 = BITSF(LD32(v0-8908));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    f8 = BITSF(LD32(t1+8));
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f9 = BITSF(LD32(t1+4));
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
    f7 = BITSF(LD32(t0+23196));
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    ST32(t3+30220, FBITS(f2));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(t4+30236, FBITS(f6));
    ST32(t2+30408, FBITS(f7));
    ST32(t5+8, FBITS(f8));
    ST32(v1+4, FBITS(f5));
    ST32(v1+8, FBITS(f6));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(t6+30252, FBITS(f1));
    ST32(a2+12, FBITS(f1));
    ST32(t7+30396, FBITS(f7));
    ST32(t8+8, FBITS(f8));
    ST32(t5+4, FBITS(f9));
    ST32(a2+8, FBITS(f3));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(t8+4, FBITS(f9));
    goto L_0895402C;
L_0895402C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08954034 */
rv_t func_08954034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08954034:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08953F38(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954048;
L_08954048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08954054 */
float func_08954054(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08954054:;
    sp = sp - 32;
    a2 = 1163;
    s0 = a0 + 0;
    { u64 r_ = func_08955344(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08954070;
L_08954070:;
    v0 = D_08AF9110 - (-28400);
    v0 = v0 - 28400;
    ST32(s0, v0);
    a0 = s0 + 36;
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    func_0895F0BC(a0);
    goto L_0895408C;
L_0895408C:;
    v0 = D_08B45A9C - (23196);
    f2 = BITSF(LD32(v0+23196));
    v1 = v0 + 23196;
    v0 = D_08AEDD3C - (-8900);
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f20 = BITSF(LD32(v0-8900));
    v0 = s0 + 96;
    ST32(v0+8, FBITS(f1));
    a0 = s0 + 0;
    ST32(v0+4, FBITS(f0));
    ST32(s0+96, FBITS(f2));
    ST32(s0+116, FBITS(f20));
    ST32(s0+80, 0);
    ST8(s0+108, 0);
    ST8(s0+109, 0);
    ST32(s0+120, 0);
    v0 = func_08954C18(a0);
    goto L_089540D4;
L_089540D4:;
    f0 = BITSF(LD32(v0+80));
    ST32(s0+128, FBITS(f20));
    ST32(s0+124, FBITS(f0));
    sp = sp + 32;
    return f0;
}

/* 089540F4 */
rv_t func_089540F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089540F4:;
    sp = sp - 96;
    s4 = 0xffff;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = func_08954C18(a0);
    goto L_08954120;
L_08954120:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954140;
L_08954140:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    a0 = s1 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08954C18(a0);
    goto L_08954178;
L_08954178:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954198;
L_08954198:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08954C18(a0);
    goto L_089541A4;
L_089541A4:;
    a2 = LD32(v0+56);
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089541B4;
L_089541B4:;
    cnd_ = v0 == s4;
    s3 = v0 + 0;
    if (cnd_) { goto L_0895437C; }
    goto L_089541BC;
L_089541BC:;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a0 = s1 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    v0 = func_08954C18(a0);
    goto L_089541E8;
L_089541E8:;
    a0 = s2 + 0;
    a2 = LD32(v0+56);
    a1 = sp + 16;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089541F8;
L_089541F8:;
    cnd_ = v0 == s4;
    s0 = v0 + 0;
    if (cnd_) { goto L_0895437C; }
    goto L_08954200;
L_08954200:;
    ST32(s1+80, 0);
    s2 = s1 + 36;
    a0 = s2 + 0;
    func_0895FB6C(a0);
    goto L_08954210;
L_08954210:;
    a0 = s1 + 0;
    v0 = func_08954C18(a0);
    goto L_08954218;
L_08954218:;
    a3 = D_08B20494 - (1172);
    a2 = a3 + 1172;
    v1 = LD_U16(a2+10);
    a0 = LD32(v0+56);
    a1 = 0 + 0;
    v1 = s3 < v1;
    cnd_ = v1 == 0;
    ST32(sp+32, a0);
    if (cnd_) { goto L_0895424C; }
    goto L_08954238;
L_08954238:;
    v1 = LD32(a2+12);
    v0 = s3 << 1;
    v0 = v0 + s3;
    v0 = v0 << 3;
    a1 = v1 + v0;
    goto L_0895424C;
L_0895424C:;
    a0 = a3 + 1172;
    v0 = LD_U16(a0+10);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08954274; }
    goto L_08954260;
L_08954260:;
    v1 = LD32(a0+12);
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 3;
    a2 = v1 + v0;
    goto L_08954274;
L_08954274:;
    a0 = s2 + 0;
    a3 = sp + 32;
    t0 = 0 + 0;
    t1 = 999;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_08954288;
L_08954288:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08954380; }
    goto L_08954290;
L_08954290:;
    a0 = s1 + 0;
    v0 = func_08954C18(a0);
    goto L_08954298;
L_08954298:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 48;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089542B8;
L_089542B8:;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+48));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(s1+120, v0);
    ST32(sp+24, FBITS(f2));
    v0 = func_08954C18(a0);
    goto L_0895431C;
L_0895431C:;
    a0 = s1 + 0;
    f2 = BITSF(LD32(s1+120));
    f0 = BITSF(LD32(s1+116));
    f1 = BITSF(LD32(v0+80));
    a1 = 5;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    ST32(s1+124, FBITS(f1));
    if (cnd_) { goto L_08954350; }
    goto L_08954340;
L_08954340:;
    a0 = s1 + 0;
    v0 = func_08954D44(a0);
    goto L_08954348;
L_08954348:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_08954350;
L_08954350:;
    { rv_t r_ = func_08954C20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954358;
L_08954358:;
    v0 = 1;
    goto L_0895435C;
L_0895435C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0895437C:;
    v0 = LD32(s1+8);
    goto L_08954380;
L_08954380:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    { rv_t r_ = func_08954C20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954394;
L_08954394:;
    v0 = 0 + 0;
    goto L_0895435C;
}

/* 0895439C */
u64 func_0895439C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0895439C:;
    sp = sp - 96;
    s1 = a0 + 0;
    s3 = s1 + 36;
    s0 = a1 + 0;
    v0 = func_08954C18(a0);
    goto L_089543C4;
L_089543C4:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089543E4;
L_089543E4:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    a1 = LD32(s1+80);
    a0 = s3 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_08954420;
L_08954420:;
    a0 = s1 + 0;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    s2 = v0 + 0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    v0 = func_08954C18(a0);
    goto L_08954450;
L_08954450:;
    a0 = s0 + 0;
    a2 = LD32(v0+56);
    a1 = sp + 16;
    { u64 r_ = func_0895E3A4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08954460;
L_08954460:;
    s0 = v0 + 0;
    v0 = 0xffff;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_089545D8; }
    goto L_08954470;
L_08954470:;
    ST32(s1+80, 0);
    a0 = s3 + 0;
    func_0895FB6C(a0);
    goto L_0895447C;
L_0895447C:;
    a0 = s1 + 0;
    v0 = func_08954C18(a0);
    goto L_08954484;
L_08954484:;
    a3 = D_08B20494 - (1172);
    a2 = a3 + 1172;
    v1 = LD_U16(a2+10);
    a0 = LD32(v0+56);
    a1 = 0 + 0;
    v1 = s2 < v1;
    cnd_ = v1 == 0;
    ST32(sp+32, a0);
    if (cnd_) { goto L_089544B8; }
    goto L_089544A4;
L_089544A4:;
    v1 = LD32(a2+12);
    v0 = s2 << 1;
    v0 = v0 + s2;
    v0 = v0 << 3;
    a1 = v1 + v0;
    goto L_089544B8;
L_089544B8:;
    a0 = a3 + 1172;
    v0 = LD_U16(a0+10);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089544E0; }
    goto L_089544CC;
L_089544CC:;
    v1 = LD32(a0+12);
    v0 = s0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 3;
    a2 = v1 + v0;
    goto L_089544E0;
L_089544E0:;
    a0 = s3 + 0;
    a3 = sp + 32;
    t0 = 0 + 0;
    t1 = 999;
    v0 = func_0895F15C(a0, a1, a2, a3, t0, t1);
    goto L_089544F4;
L_089544F4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0895463C; }
    goto L_089544FC;
L_089544FC:;
    a0 = s1 + 0;
    v0 = func_08954C18(a0);
    goto L_08954504;
L_08954504:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = s1 + 48;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954524;
L_08954524:;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s1+48));
    f2 = f2 - f4;
    f1 = f1 - f3;
    f0 = f0 - f5;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(s1+120, v0);
    ST32(sp+24, FBITS(f2));
    v0 = func_08954C18(a0);
    goto L_08954588;
L_08954588:;
    f2 = BITSF(LD32(s1+120));
    f0 = BITSF(LD32(s1+116));
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    ST32(s1+124, FBITS(f1));
    if (cnd_) { goto L_089545F0; }
    goto L_089545A4;
L_089545A4:;
    v0 = LD32(s1+28);
    a0 = s1 + 0;
    v1 = v0 ^ 0x5;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x2u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a1 = 5;
    if (cnd_) { goto L_089545CC; }
    goto L_089545C4;
L_089545C4:;
    a0 = s1 + 0;
    a1 = 4;
    goto L_089545CC;
L_089545CC:;
    { rv_t r_ = func_08954C20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089545D4;
L_089545D4:;
    goto L_089545D8;
L_089545D8:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_089545F0:;
    a0 = LD32(s1+28);
    v1 = a0 ^ 0x4;
    v1 = v1 < 0x1u;
    v0 = a0 < 0x2u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    v0 = 5;
    if (cnd_) { goto L_08954628; }
    goto L_0895460C;
L_0895460C:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08954628; }
    goto L_08954614;
L_08954614:;
    a0 = s1 + 0;
    v0 = func_08954D44(a0);
    goto L_0895461C;
L_0895461C:;
    a0 = s1 + 0;
    a1 = 2;
    goto L_089545CC;
L_08954628:;
    a0 = s1 + 0;
    v0 = func_08954D44(a0);
    goto L_08954630;
L_08954630:;
    a0 = s1 + 0;
    a1 = 1;
    goto L_089545CC;
L_0895463C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x10;
    ST32(s1+8, v0);
    goto L_089545CC;
}

/* 08954650 */
rv_t func_08954650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08954650:;
    sp = sp - 16;
    v0 = D_08C28038 - (-32712);
    v1 = LD_U8(v0-32712);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0895467C; }
    goto L_0895466C;
L_0895466C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895467C:;
    v0 = func_08954C18(a0);
    goto L_08954684;
L_08954684:;
    a1 = LD32(s0+28);
    v1 = D_08B1B728 - (-18648);
    v1 = v1 - 18648;
    a1 = a1 << 2;
    a1 = a1 + v1;
    v0 = v0 + 64;
    a0 = LD32(a1);
    a1 = v0 + 0;
    v0 = D_08AEDD40 - (-8896);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8896));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089546C0;
L_089546C0:;
    a0 = s0 + 0;
    v0 = func_08954C18(a0);
    goto L_089546C8;
L_089546C8:;
    v0 = v0 + 64;
    v1 = D_08AEDD44 - (-8892);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-8892));
    f0 = f0 + f1;
    ST32(v0+4, FBITS(f0));
    goto L_0895466C;
}

/* 089546E4 */
rv_t func_089546E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089546E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 36;
    func_0895FB6C(a0);
    goto L_089546FC;
L_089546FC:;
    a0 = s0 + 0;
    v0 = func_08954C18(a0);
    goto L_08954704;
L_08954704:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954714;
L_08954714:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08954724 */
rv_t func_08954724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08954724:;
    sp = sp - 64;
    s0 = a0 + 0;
    v0 = LD_U8(a0+108);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08954750; }
    goto L_08954744;
L_08954744:;
    v0 = LD_U8(a0+109);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08954874; }
    goto L_08954750;
L_08954750:;
    v0 = LD32(s0+28);
    v0 = v0 - 2;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08954778; }
    goto L_08954764;
L_08954764:;
    goto L_08954768;
L_08954768:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08954778:;
    v0 = func_08954C18(a0);
    goto L_08954780;
L_08954780:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089547A0;
L_089547A0:;
    v1 = s0 + 48;
    f4 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(s0+48));
    f3 = f3 - f5;
    f2 = f2 - f0;
    f1 = f1 - f4;
    f0 = BITSF(0);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+4, FBITS(f2));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    fcc = FCMP(f0, f20, 12);
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { goto L_08954768; }
    goto L_08954814;
L_08954814:;
    f2 = BITSF(LD32(s0+120));
    f3 = BITSF(LD32(s0+124));
    f1 = f0 - f2;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = D_08AEDD48 - (-8888);
    f1 = BITSF(LD32(v0-8888));
    f0 = f0 / f20;
    v0 = D_08AEDD4C - (-8884);
    f0 = f0 - f3;
    f0 = f0 * f20;
    f0 = f0 * f1;
    f3 = f3 + f0;
    f0 = BITSF(LD32(v0-8884));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    ST32(s0+124, FBITS(f3));
    if (cnd_) { goto L_0895486C; }
    goto L_08954860;
L_08954860:;
    v0 = LD32(s0+8);
    v0 = v0 | 0x18;
    ST32(s0+8, v0);
    goto L_0895486C;
L_0895486C:;
    ST32(s0+120, FBITS(f4));
    goto L_08954764;
L_08954874:;
    v0 = func_08954C18(a0);
    goto L_0895487C;
L_0895487C:;
    a0 = v0 + 0;
    a1 = s0 + 96;
    f12 = f20;
    { rv_t r_ = func_0895D264(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895488C;
L_0895488C:;
    ST8(s0+109, v0);
    goto L_08954750;
}

/* 08954894 */
rv_t func_08954894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08954894:;
    sp = sp - 64;
    v1 = LD32(a0+8);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089549DC; }
    goto L_089548C4;
L_089548C4:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089549E0; }
    goto L_089548D0;
L_089548D0:;
    f0 = BITSF(LD32(a0+128));
    f1 = BITSF(LD32(a0+32));
    f2 = f0 - f12;
    f0 = BITSF(0);
    f1 = f1 + f12;
    fcc = FCMP(f2, f0, 14);
    ST32(a0+128, FBITS(f2));
    cnd_ = !fcc;
    ST32(a0+32, FBITS(f1));
    if (cnd_) { goto L_08954904; }
    goto L_089548F4;
L_089548F4:;
    v0 = D_08AEDD50 - (-8880);
    f0 = BITSF(LD32(v0-8880));
    f0 = f2 + f0;
    ST32(a0+128, FBITS(f0));
    goto L_08954904;
L_08954904:;
    v0 = func_08954C18(a0);
    goto L_0895490C;
L_0895490C:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895492C;
L_0895492C:;
    v1 = LD32(s1+28);
    s2 = v0 + 0;
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089549E0; }
    goto L_08954940;
L_08954940:;
    v0 = v1 << 2;
    v1 = D_08ADABE8 - (-21528);
    v1 = v1 - 21528;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0895495Cu: goto L_0895495C; case 0x089549DCu: goto L_089549DC; case 0x08954A10u: goto L_08954A10; case 0x08954AC8u: goto L_08954AC8; case 0x08954B90u: goto L_08954B90; default: rs_break(0, 0x08954954); }
L_0895495C:;
    v0 = s1 + 84;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s2+4));
    f5 = BITSF(LD32(s2+8));
    f4 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s1+84));
    f2 = f2 - f5;
    f1 = f1 - f3;
    f0 = f0 - f4;
    v1 = LD_U8(s1+109);
    v0 = s1 + 96;
    ST32(v0+4, FBITS(f1));
    a0 = s1 + 0;
    a1 = 2;
    ST32(v0+8, FBITS(f2));
    ST32(s1+96, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    cnd_ = v1 != 0;
    ST32(s1+100, 0);
    if (cnd_) { goto L_08954A00; }
    goto L_089549B4;
L_089549B4:;
    v0 = D_08AEDD54 - (-8876);
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-8876));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089549E0; }
    goto L_089549D0;
L_089549D0:;
    v0 = LD32(s1+8);
    v0 = v0 | 0x18;
    ST32(s1+8, v0);
    goto L_089549DC;
L_089549DC:;
    goto L_089549E0;
L_089549E0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08954A00:;
    { rv_t r_ = func_08954C20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954A08;
L_08954A08:;
    goto L_089549E0;
L_08954A10:;
    a0 = s1 + 0;
    v0 = func_08954D44(a0);
    goto L_08954A18;
L_08954A18:;
    f2 = BITSF(LD32(s2));
    f3 = BITSF(LD32(s2+8));
    f0 = BITSF(LD32(s1+84));
    f1 = BITSF(LD32(s1+92));
    a0 = s1 + 0;
    f0 = f0 - f2;
    f1 = f1 - f3;
    s4 = v0 + 0;
    ST32(sp+4, 0);
    s3 = s1 + 48;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    v0 = func_08954C18(a0);
    goto L_08954A4C;
L_08954A4C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08954C18(a0);
    goto L_08954A58;
L_08954A58:;
    f12 = BITSF(LD32(v0+80));
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0895A8A0(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08954A68;
L_08954A68:;
    v0 = D_08AEDD5C - (-8868);
    f20 = BITSF(LD32(v0-8868));
    v0 = D_08AEDD58 - (-8872);
    f12 = BITSF(LD32(v0-8872));
    a0 = s2 + 0;
    a1 = s3 + 0;
    f13 = f20;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954A88;
L_08954A88:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08954AC0; }
    goto L_08954A90;
L_08954A90:;
    f12 = BITSF(LD32(s1+116));
    a0 = s2 + 0;
    a1 = s3 + 0;
    f12 = f12 * f12;
    f13 = f20;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954AA8;
L_08954AA8:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08954AC0; }
    goto L_08954AB0;
L_08954AB0:;
    cnd_ = s4 == 0;
    a1 = 3;
    if (cnd_) { goto L_089549DC; }
    goto L_08954AB8;
L_08954AB8:;
    goto L_08954A00;
L_08954AC0:;
    a1 = 4;
    goto L_08954A00;
L_08954AC8:;
    f12 = BITSF(LD32(s1+116));
    v0 = D_08AEDD5C - (-8868);
    f20 = BITSF(LD32(v0-8868));
    f12 = f12 * f12;
    s0 = s1 + 48;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f13 = f20;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954AEC;
L_08954AEC:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08954B18; }
    goto L_08954AF4;
L_08954AF4:;
    v0 = D_08AEDD58 - (-8872);
    f12 = BITSF(LD32(v0-8872));
    a1 = s0 + 0;
    f13 = f20;
    a0 = s2 + 0;
    { rv_t r_ = func_0895FBAC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954B0C;
L_08954B0C:;
    cnd_ = v0 == 0;
    if (cnd_) { f3 = BITSF(LD32(s2+8)); goto L_08954B44; }
    goto L_08954B14;
L_08954B14:;
    a0 = s1 + 0;
    goto L_08954B18;
L_08954B18:;
    a1 = 4;
    { rv_t r_ = func_08954C20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954B20;
L_08954B20:;
    v0 = D_08AEDD60 - (-8864);
    goto L_08954B24;
L_08954B24:;
    f0 = BITSF(LD32(s1+32));
    f1 = BITSF(LD32(v0-8864));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_089549E0; }
    goto L_08954B3C;
L_08954B3C:;
    a0 = s1 + 0;
    goto L_08954AC0;
L_08954B44:;
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s1+84));
    f1 = BITSF(LD32(s1+92));
    a0 = s1 + 0;
    f0 = f0 - f2;
    f1 = f1 - f3;
    ST32(sp+4, 0);
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    v0 = func_08954C18(a0);
    goto L_08954B6C;
L_08954B6C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08954C18(a0);
    goto L_08954B78;
L_08954B78:;
    f12 = BITSF(LD32(v0+80));
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0895A8A0(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08954B88;
L_08954B88:;
    v0 = D_08AEDD60 - (-8864);
    goto L_08954B24;
L_08954B90:;
    a0 = s1 + 0;
    v0 = func_08954C18(a0);
    goto L_08954B98;
L_08954B98:;
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954BAC;
L_08954BAC:;
    v1 = D_08B45A9C - (23196);
    a0 = v1 + 23196;
    f4 = BITSF(LD32(v1+23196));
    f0 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(a0+4));
    f0 = f0 - f4;
    f1 = BITSF(LD32(v0+8));
    f3 = f3 - f2;
    f4 = BITSF(LD32(a0+8));
    f2 = f0 * f0;
    v0 = D_08AEDD64 - (-8860);
    f1 = f1 - f4;
    f5 = f3 * f3;
    ST32(sp, FBITS(f0));
    f4 = f1 * f1;
    f2 = f2 + f5;
    f0 = BITSF(LD32(v0-8860));
    ST32(sp+4, FBITS(f3));
    f2 = f2 + f4;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_089549DC; }
    goto L_08954C0C;
L_08954C0C:;
    a0 = s1 + 0;
    a1 = 5;
    goto L_08954A00;
}

/* 08954C18 */
u32 func_08954C18(u32 a0)
{
    u32 v0 = 0;
L_08954C18:;
    v0 = LD32(a0+24);
    return v0;
}

/* 08954C20 */
rv_t func_08954C20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08954C20:;
    sp = sp - 32;
    v0 = 1;
    v1 = LD32(a0+28);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08954D38; }
    goto L_08954C44;
L_08954C44:;
    v0 = a1 < 0x7u;
    ST32(s2+28, a1);
    cnd_ = v0 == 0;
    ST32(s2+32, 0);
    if (cnd_) { goto L_08954CE8; }
    goto L_08954C54;
L_08954C54:;
    v1 = D_08ADAC04 - (-21500);
    v0 = a1 << 2;
    v1 = v1 - 21500;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08954C70u: goto L_08954C70; case 0x08954CE8u: goto L_08954CE8; case 0x08954D00u: goto L_08954D00; case 0x08954D28u: goto L_08954D28; default: rs_break(0, 0x08954c68); }
L_08954C70:;
    a0 = s2 + 0;
    v0 = func_08954C18(a0);
    goto L_08954C78;
L_08954C78:;
    a0 = LD32(v0+48);
    s0 = s2 + 84;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s1 = s2 + 96;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954C9C;
L_08954C9C:;
    f3 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s2+84));
    f1 = f1 - f3;
    f2 = f2 - f5;
    f0 = f0 - f4;
    v0 = 1;
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(s2+96, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST8(s2+108, v0);
    ST8(s2+109, 0);
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(s2+100, 0);
    goto L_08954CE8;
L_08954CE8:;
    goto L_08954CEC;
L_08954CEC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08954D00:;
    a0 = s2 + 36;
    func_0895FB6C(a0);
    goto L_08954D08;
L_08954D08:;
    a0 = s2 + 0;
    v0 = func_08954C18(a0);
    goto L_08954D10;
L_08954D10:;
    a1 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a1 = a1 + 23196;
    { rv_t r_ = func_0895A7AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954D20;
L_08954D20:;
    goto L_08954CEC;
L_08954D28:;
    v0 = LD32(s2+8);
    v0 = v0 | 0x8;
    ST32(s2+8, v0);
    goto L_08954CE8;
L_08954D38:;
    ST8(a0+108, 0);
    ST8(a0+109, 0);
    goto L_08954C44;
}

/* 08954D44 */
u32 func_08954D44(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08954D44:;
    sp = sp - 160;
    s3 = a0 + 36;
    v0 = LD32(s3+24);
    v1 = LD32(a0+80);
    v0 = v0 - 1;
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08954DF0; }
    goto L_08954D94;
L_08954D94:;
    v0 = a0 + 48;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+48));
    v1 = a0 + 84;
    ST32(v1+8, FBITS(f2));
    v0 = 1;
    ST32(a0+84, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    goto L_08954DB8;
L_08954DB8:;
    sp = sp + 160;
    return v0;
L_08954DF0:;
    s6 = D_08B20494 - (1172);
    v0 = func_08954C18(a0);
    goto L_08954DF8;
L_08954DF8:;
    a0 = LD32(v0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08954E18;
L_08954E18:;
    a1 = LD32(s0+80);
    a0 = s3 + 0;
    s7 = v0 + 0;
    v0 = func_08ABD9B0(a0, a1);
    goto L_08954E28;
L_08954E28:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08954E54; }
    goto L_08954E40;
L_08954E40:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_08954E54;
L_08954E54:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    a1 = LD32(s0+80);
    ST32(s1+8, FBITS(f0));
    a0 = s3 + 0;
    a1 = a1 + 1;
    ST32(s1, FBITS(f1));
    s4 = sp + 16;
    ST32(s1+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_08954E80;
L_08954E80:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08954EAC; }
    goto L_08954E98;
L_08954E98:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_08954EAC;
L_08954EAC:;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AEDD68 - (-8856);
    ST32(s4, FBITS(f0));
    s5 = 0 + 0;
    s1 = s0 + 84;
    ST32(s4+4, FBITS(f1));
    fp = s0 + 48;
    ST32(s4+8, FBITS(f2));
    f20 = BITSF(LD32(v0-8856));
    a0 = sp + 0;
    goto L_08954EDC;
L_08954EDC:;
    a2 = s7 + 0;
    a3 = s1 + 0;
    a1 = s4 + 0;
    func_08835730(a0, a1, a2, a3);
    goto L_08954EEC;
L_08954EEC:;
    f1 = BITSF(LD32(s0+84));
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(s1+4));
    f3 = BITSF(LD32(s1+8));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+20));
    a0 = s3 + 0;
    s2 = sp + 0;
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+24));
    f2 = f1 * f1;
    ST32(sp+32, FBITS(f1));
    f3 = f3 - f0;
    f5 = f4 * f4;
    ST32(sp+36, FBITS(f4));
    f0 = f3 * f3;
    f2 = f2 + f5;
    f2 = f2 + f0;
    fcc = FCMP(f2, f20, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_0895525C; }
    goto L_08954F44;
L_08954F44:;
    v1 = LD32(s0+80);
    v1 = v1 + 1;
    ST32(s0+80, v1);
    a1 = v1 + 0;
    v0 = LD32(s3+24);
    v0 = v0 - 1;
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 == 0;
    if (cnd_) { f0 = BITSF(LD32(fp+8)); goto L_08955250; }
    goto L_08954F68;
L_08954F68:;
    v0 = func_08ABD9B0(a0, a1);
    goto L_08954F70;
L_08954F70:;
    a1 = s6 + 1172;
    a0 = LD_U16(a1+10);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v0 = v0 < a0;
    v1 = v1 << 3;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08954F9C; }
    goto L_08954F94;
L_08954F94:;
    v0 = LD32(a1+12);
    a2 = v0 + v1;
    goto L_08954F9C;
L_08954F9C:;
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    a1 = LD32(s0+80);
    ST32(s2+8, FBITS(f0));
    a1 = a1 + 1;
    ST32(s2, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_08954FC0;
L_08954FC0:;
    a1 = s6 + 1172;
    a0 = LD_U16(a1+10);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v0 = v0 < a0;
    v1 = v1 << 3;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08954FE8; }
    goto L_08954FE0;
L_08954FE0:;
    v0 = LD32(a1+12);
    a0 = v0 + v1;
    goto L_08954FE8;
L_08954FE8:;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    goto L_08955000;
L_08955000:;
    cnd_ = s5 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08954EDC; }
    goto L_08955008;
L_08955008:;
    v0 = D_08AEDD6C - (-8852);
    f20 = BITSF(LD32(v0-8852));
    s2 = LD32(s0+80);
    f21 = BITSF(0);
    s5 = s0 + 48;
    goto L_0895501C;
L_0895501C:;
    f8 = BITSF(LD32(sp+16));
    f7 = BITSF(LD32(sp+20));
    f6 = BITSF(LD32(sp+24));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f8 - f4;
    f3 = f7 - f3;
    f2 = f6 - f2;
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
    fcc = FCMP(f0, f21, 2);
    ST32(sp+36, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_089550B8; }
    goto L_0895507C;
L_0895507C:;
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
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_089550B8;
L_089550B8:;
    f3 = BITSF(LD32(s0+84));
    f4 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    f0 = f8 - f3;
    f1 = f7 - f4;
    f2 = f6 - f5;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+48, FBITS(f0));
    f6 = f20;
    ST32(sp+52, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f7 = BITSF(v0);
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    ST32(sp+56, FBITS(f2));
    if (cnd_) { goto L_08955120; }
    goto L_0895511C;
L_0895511C:;
    f6 = f0;
    goto L_08955120;
L_08955120:;
    f2 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f2 = f2 * f6;
    f1 = f1 * f6;
    f0 = f0 * f6;
    f20 = f20 - f7;
    f3 = f3 + f2;
    f4 = f4 + f1;
    f5 = f5 + f0;
    fcc = FCMP(f21, f20, 12);
    ST32(s0+84, FBITS(f3));
    ST32(s1+4, FBITS(f4));
    ST32(s1+8, FBITS(f5));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f0));
    if (cnd_) { goto L_08955228; }
    goto L_08955168;
L_08955168:;
    v0 = LD32(s3+24);
    s2 = s2 + 1;
    v0 = v0 - 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08955230; }
    goto L_08955180;
L_08955180:;
    a1 = s2 + 0;
    v0 = func_08ABD9B0(a0, a1);
    goto L_08955188;
L_08955188:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    a2 = sp + 0;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089551B8; }
    goto L_089551A4;
L_089551A4:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_089551B8;
L_089551B8:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(a2+8, FBITS(f0));
    a1 = s2 + 1;
    a0 = s3 + 0;
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    v0 = func_08ABD9B0(a0, a1);
    goto L_089551DC;
L_089551DC:;
    a1 = s6 + 1172;
    a0 = v0 + 0;
    v0 = LD_U16(a1+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08955208; }
    goto L_089551F4;
L_089551F4:;
    v1 = LD32(a1+12);
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_08955208;
L_08955208:;
    fcc = FCMP(f21, f20, 12);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    cnd_ = fcc;
    ST32(s4+4, FBITS(f2));
    if (cnd_) { goto L_0895501C; }
    goto L_08955228;
L_08955228:;
    v0 = 0 + 0;
    goto L_08954DB8;
L_08955230:;
    f0 = BITSF(LD32(s5+8));
    f1 = BITSF(LD32(s0+48));
    f2 = BITSF(LD32(s5+4));
    goto L_0895523C;
L_0895523C:;
    v0 = 1;
    ST32(s0+84, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    ST32(s1+4, FBITS(f2));
    goto L_08954DB8;
L_08955250:;
    f1 = BITSF(LD32(s0+48));
    f2 = BITSF(LD32(fp+4));
    goto L_0895523C;
L_0895525C:;
    s5 = 1;
    goto L_08955000;
}

/* 08955264 */
rv_t func_08955264(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08955264:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C276E8 - (30440);
    t1 = D_08C276F8 - (30456);
    t2 = D_08C27708 - (30472);
    a1 = a1 & a0;
    v1 = t0 + 30440;
    a2 = t1 + 30456;
    cnd_ = a1 == 0;
    a3 = t2 + 30472;
    if (cnd_) { goto L_0895531C; }
    goto L_08955294;
L_08955294:;
    v0 = D_08AEDD70 - (-8848);
    f4 = BITSF(LD32(v0-8848));
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
    ST32(t0+30440, FBITS(f2));
    ST32(t1+30456, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+30472, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895531C;
L_0895531C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08955324 */
rv_t func_08955324(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955324:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08955264(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955338;
L_08955338:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955344 */
u64 func_08955344(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955344:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a2 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08921E00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955364;
L_08955364:;
    v0 = D_08AF9148 - (-28344);
    v0 = v0 - 28344;
    ST32(s0+24, s1);
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08955388 */
u32 func_08955388(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955388:;
    v0 = D_08AF9148 - (-28344);
    v0 = v0 - 28344;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08921E48(a0);
    goto L_089553A4;
L_089553A4:;
    sp = sp + 16;
    return v0;
}

/* 089553B0 */
rv_t func_089553B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089553B0:;
    v0 = D_08AF9148 - (-28344);
    v0 = v0 - 28344;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08921E48(a0);
    goto L_089553CC;
L_089553CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089553D8 */
rv_t func_089553D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089553D8:;
    v0 = D_08AF9148 - (-28344);
    v0 = v0 - 28344;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08921E48(a0);
    goto L_089553F8;
L_089553F8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955400;
L_08955400:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955410 */
rv_t func_08955410(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08955410:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = LD32(a0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955434;
L_08955434:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08955484; }
    goto L_08955440;
L_08955440:;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955448;
L_08955448:;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08955470; }
    goto L_08955454;
L_08955454:;
    a1 = LD32(sp);
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895545C;
L_0895545C:;
    v0 = LD32(sp);
    goto L_08955460;
L_08955460:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08955470:;
    v0 = LD32(s0+24);
    v1 = LD32(v0);
    a2 = LD32(v1+48);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955484;
L_08955484:;
    v0 = 0 + 0;
    goto L_08955460;
}

/* 0895548C */
rv_t func_0895548C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0895548C:;
    sp = sp - 32;
    a2 = a1 + 0;
    a3 = 0 + 0;
    a1 = a0 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_0892259C(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089554AC;
L_089554AC:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_089554C8; }
    goto L_089554B8;
L_089554B8:;
    goto L_089554BC;
L_089554BC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089554C8:;
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089554D0;
L_089554D0:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089554E4;
L_089554E4:;
    goto L_089554BC;
}

/* 089554EC */
rv_t func_089554EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089554EC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27798 - (30616);
    t1 = D_08C277A8 - (30632);
    t2 = D_08C277B8 - (30648);
    a1 = a1 & a0;
    v1 = t0 + 30616;
    a2 = t1 + 30632;
    cnd_ = a1 == 0;
    a3 = t2 + 30648;
    if (cnd_) { goto L_089555A4; }
    goto L_0895551C;
L_0895551C:;
    v0 = D_08AEDD74 - (-8844);
    f4 = BITSF(LD32(v0-8844));
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
    ST32(t0+30616, FBITS(f2));
    ST32(t1+30632, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+30648, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089555A4;
L_089555A4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089555AC */
rv_t func_089555AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089555AC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089554EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089555C0;
L_089555C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089555CC */
u64 func_089555CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089555CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_0891A5CC(a0, a1);
    goto L_089555E8;
L_089555E8:;
    v0 = D_08AF9180 - (-28288);
    ST32(s1+252, 0);
    v0 = v0 - 28288;
    a0 = D_08C2A880 - (-22400);
    a1 = LD32(s0+4);
    ST32(s1, v0);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895560C;
L_0895560C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08955620; }
    goto L_08955614;
L_08955614:;
    v0 = LD32(s1+252);
    v0 = v0 | 0x1;
    ST32(s1+252, v0);
    goto L_08955620;
L_08955620:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08955630 */
rv_t func_08955630(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955630:;
    v0 = D_08AF9180 - (-28288);
    v0 = v0 - 28288;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_0891A7A4(a0);
    goto L_0895564C;
L_0895564C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955658 */
rv_t func_08955658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955658:;
    v0 = D_08AF9180 - (-28288);
    v0 = v0 - 28288;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0891A7A4(a0);
    goto L_08955678;
L_08955678:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955680;
L_08955680:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955690 */
rv_t func_08955690(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08955690:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = LD32(a0+16);
    cnd_ = a1 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089556D8; }
    goto L_089556AC;
L_089556AC:;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_089556B4;
L_089556B4:;
    a0 = LD32(s0+24);
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089556C8;
L_089556C8:;
    v0 = LD32(s0+16);
    ST32(sp, v0);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089556AC; }
    goto L_089556D8;
L_089556D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0891B39C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089556E0;
L_089556E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089556F0 */
rv_t func_089556F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089556F0:;
    sp = sp - 32;
    v1 = LD32(a0+252);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08955730; }
    goto L_0895570C;
L_0895570C:;
    v0 = LD32(a0+44);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08955734; }
    goto L_08955718;
L_08955718:;
    v0 = LD32(v0+4);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08955794; }
    goto L_08955728;
L_08955728:;
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08955740; }
    goto L_08955730;
L_08955730:;
    goto L_08955734;
L_08955734:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08955740:;
    a2 = 1002;
    a3 = 0 + 0;
    { u64 r_ = func_089223E8(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895574C;
L_0895574C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08955764; }
    goto L_08955754;
L_08955754:;
    v0 = LD32(s0+252);
    goto L_08955758;
L_08955758:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_0895575C;
L_0895575C:;
    ST32(s0+252, v0);
    goto L_08955730;
L_08955764:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_089224D8(a0, a1);
    goto L_08955770;
L_08955770:;
    a0 = LD32(sp);
    { rv_t r_ = func_08922044(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955778;
L_08955778:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895578C;
L_0895578C:;
    v0 = LD32(s0+252);
    goto L_08955758;
L_08955794:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08955734; }
    goto L_0895579C;
L_0895579C:;
    a0 = LD32(a0+24);
    a1 = 1002;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089557B4;
L_089557B4:;
    cnd_ = v0 == 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08955730; }
    goto L_089557BC;
L_089557BC:;
    a0 = v0 + 0;
    { rv_t r_ = func_08921F94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089557C4;
L_089557C4:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+4);
    if (cnd_) { goto L_089557E0; }
    goto L_089557CC;
L_089557CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08922370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089557D4;
L_089557D4:;
    v0 = LD32(s0+252);
    v0 = v0 | 0x2;
    goto L_0895575C;
L_089557E0:;
    a0 = LD32(sp+4);
    { rv_t r_ = func_08922044(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089557E8;
L_089557E8:;
    a0 = LD32(s0+24);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    a1 = sp + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089557FC;
L_089557FC:;
    ST32(sp+4, 0);
    goto L_08955730;
}

/* 08955804 */
rv_t func_08955804(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08955804:;
    sp = sp - 32;
    a2 = 1;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    v0 = LD32(a1+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089558D4; }
    goto L_0895583C;
L_0895583C:;
    v0 = LD32(s1+24);
    s3 = 0 + 0;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895584C;
L_0895584C:;
    a3 = 0 + 0;
    a0 = 0x8035;
    a1 = 20;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089558D0; }
    goto L_08955860;
L_08955860:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955868;
L_08955868:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089558D0; }
    goto L_08955870;
L_08955870:;
    t1 = LD32(v0+24);
    a1 = 1001;
    cnd_ = t1 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089558D0; }
    goto L_08955880;
L_08955880:;
    a3 = LD32(s2+4);
    t0 = LD32(s1+24);
    v0 = 999;
    v1 = a3 + 32;
    f1 = BITSF(LD32(a3+32));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    a3 = LD32(t0);
    ST32(t1+16, v0);
    ST8(t1+12, 0);
    ST8(t1+13, 0);
    ST32(t1, FBITS(f1));
    ST32(t1+4, FBITS(f0));
    ST32(t1+8, FBITS(f2));
    v0 = LD32(a3+44);
    t_ = v0;
    a0 = t0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089558C4;
L_089558C4:;
    a0 = s0 + 0;
    s3 = v0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089558D0;
L_089558D0:;
    v1 = s3 + 0;
    goto L_089558D4;
L_089558D4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089558F4 */
rv_t func_089558F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089558F4:;
    sp = sp - 32;
    v0 = a1 + 0;
    ST32(sp, a1);
    a1 = sp + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08955918; }
    goto L_0895590C;
L_0895590C:;
    goto L_08955910;
L_08955910:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08955918:;
    v0 = LD32(a0+24);
    v1 = LD32(v0);
    a2 = LD32(v1+48);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895592C;
L_0895592C:;
    goto L_08955910;
}

/* 08955934 */
rv_t func_08955934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955934:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = LD32(a0+24);
    a0 = D_08C2B4CC - (-19252);
    a3 = LD32(v0+4);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_089559C0; }
    goto L_08955958;
L_08955958:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089559A8; }
    goto L_0895597C;
L_0895597C:;
    a0 = LD32(a2);
    goto L_08955980;
L_08955980:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089559CC; }
    goto L_08955998;
L_08955998:;
    a2 = LD32(a2+4);
    goto L_0895599C;
L_0895599C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_08955980; }
    goto L_089559A4;
L_089559A4:;
    a0 = 0 + 0;
    goto L_089559A8;
L_089559A8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089559C4; }
    goto L_089559B0;
L_089559B0:;
    v1 = LD32(a0);
    v0 = LD32(v1+140);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089559C0;
L_089559C0:;
    goto L_089559C4;
L_089559C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089559CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0895599C; }
    goto L_089559D8;
L_089559D8:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0895599C; }
    goto L_089559E4;
L_089559E4:;
    goto L_089559A8;
}

/* 089559EC */
rv_t func_089559EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089559EC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089559F4 */
rv_t func_089559F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089559F4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089559FC */
rv_t func_089559FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089559FC:;
    sp = sp - 16;
    a2 = 1;
    v0 = LD32(a0+24);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a1 = LD32(v0+4);
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955A1C;
L_08955A1C:;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08955A54; }
    goto L_08955A2C;
L_08955A2C:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = 0 + 0; goto L_08955A50; }
    goto L_08955A50;
L_08955A50:;
    v0 = a1 ^ 0x1;
    goto L_08955A54;
L_08955A54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955A60 */
rv_t func_08955A60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955A60:;
    sp = sp - 16;
    v0 = LD32(a0+252);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08955A84; }
    goto L_08955A78;
L_08955A78:;
    goto L_08955A7C;
L_08955A7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08955A84:;
    { rv_t r_ = func_0891BCC0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955A8C;
L_08955A8C:;
    goto L_08955A7C;
}

/* 08955A94 */
rv_t func_08955A94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955A94:;
    sp = sp - 16;
    a2 = 1;
    s0 = a1 + 0;
    v0 = LD32(a0+24);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    v1 = LD32(v0+4);
    a1 = v1 + 0;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955AC0;
L_08955AC0:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08955AE4; }
    goto L_08955AD0;
L_08955AD0:;
    v0 = LD32(v0);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955AE0;
L_08955AE0:;
    v1 = 1;
    goto L_08955AE4;
L_08955AE4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955AF8 */
rv_t func_08955AF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08955AF8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08955B00 */
rv_t func_08955B00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955B00:;
    sp = sp - 16;
    a1 = LD32(a0+44);
    v1 = LD32(a1+28);
    v1 = v1 < 0x3e8u;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08955B28; }
    goto L_08955B1C;
L_08955B1C:;
    goto L_08955B20;
L_08955B20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08955B28:;
    { rv_t r_ = func_0891D198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955B30;
L_08955B30:;
    goto L_08955B20;
}

/* 08955B38 */
rv_t func_08955B38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08955B38:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C277C8 - (30664);
    t1 = D_08C277D8 - (30680);
    t2 = D_08C277E8 - (30696);
    a1 = a1 & a0;
    v1 = t0 + 30664;
    a2 = t1 + 30680;
    cnd_ = a1 == 0;
    a3 = t2 + 30696;
    if (cnd_) { goto L_08955BF0; }
    goto L_08955B68;
L_08955B68:;
    v0 = D_08AEDD78 - (-8840);
    f4 = BITSF(LD32(v0-8840));
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
    ST32(t0+30664, FBITS(f2));
    ST32(t1+30680, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+30696, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08955BF0;
L_08955BF0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08955BF8 */
rv_t func_08955BF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955BF8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08955B38(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955C0C;
L_08955C0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955C18 */
u64 func_08955C18(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955C18:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = LD32(a1+4);
    { rv_t r_ = func_08955EDC(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955C38;
L_08955C38:;
    v0 = D_08AF9228 - (-28120);
    v0 = v0 - 28120;
    ST32(s1+48, s0);
    ST32(s1, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08955C5C */
rv_t func_08955C5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955C5C:;
    v0 = D_08AF9228 - (-28120);
    v0 = v0 - 28120;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955C78;
L_08955C78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955C84 */
rv_t func_08955C84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955C84:;
    v0 = D_08AF9228 - (-28120);
    v0 = v0 - 28120;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955CA4;
L_08955CA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955CAC;
L_08955CAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955CBC */
rv_t func_08955CBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955CBC:;
    sp = sp - 16;
    t1 = D_08C278D8 - (30936);
    s2 = a2 + 0;
    t0 = a1 + 0;
    a3 = LD32(t1+30936);
    a2 = LD32(a3+4);
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08955D34; }
    goto L_08955CEC;
L_08955CEC:;
    v0 = LD32(a3+16);
    v1 = LD32(a2);
    a1 = a0 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    v1 = 1018;
    s0 = a2 + 0;
    a0 = a2 + 0;
    s1 = 0 + 0;
    cnd_ = t0 == v1;
    ST32(a3+16, v0);
    if (cnd_) { goto L_08955D4C; }
    goto L_08955D18;
L_08955D18:;
    v1 = LD32(a3+16);
    a0 = LD32(a3+4);
    v1 = v1 - 1;
    ST32(a2, a0);
    ST32(a3+16, v1);
    ST32(a3+4, a2);
    goto L_08955D30;
L_08955D30:;
    v0 = s1 + 0;
    goto L_08955D34;
L_08955D34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08955D4C:;
    s1 = s0 + 0;
    { u64 r_ = func_0892DB3C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08955D54;
L_08955D54:;
    a2 = 1;
    a1 = s2 + 0;
    cnd_ = s2 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08955D30; }
    goto L_08955D64;
L_08955D64:;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955D6C;
L_08955D6C:;
    v0 = s1 + 0;
    goto L_08955D34;
}

/* 08955D74 */
void func_08955D74(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08955D74:;
    sp = sp - 32;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a1 = 1018;
    v0 = LD32(a0+48);
    cnd_ = v0 != 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08955DE4; }
    goto L_08955D98;
L_08955D98:;
    v0 = LD32(sp);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08955DB8; }
    goto L_08955DA8;
L_08955DA8:;
    goto L_08955DAC;
L_08955DAC:;
    sp = sp + 32;
    return;
L_08955DB8:;
    { rv_t r_ = func_089236BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955DC0;
L_08955DC0:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08955DA8; }
    goto L_08955DCC;
L_08955DCC:;
    v0 = LD32(s0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955DDC;
L_08955DDC:;
    goto L_08955DAC;
L_08955DE4:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955DF4;
L_08955DF4:;
    ST32(sp, v0);
    goto L_08955D98;
}

/* 08955DFC */
rv_t func_08955DFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08955DFC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27878 - (30840);
    t1 = D_08C27888 - (30856);
    t2 = D_08C27898 - (30872);
    a1 = a1 & a0;
    v1 = t0 + 30840;
    a2 = t1 + 30856;
    cnd_ = a1 == 0;
    a3 = t2 + 30872;
    if (cnd_) { goto L_08955EB4; }
    goto L_08955E2C;
L_08955E2C:;
    v0 = D_08AEDD80 - (-8832);
    f4 = BITSF(LD32(v0-8832));
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
    ST32(t0+30840, FBITS(f2));
    ST32(t1+30856, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+30872, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08955EB4;
L_08955EB4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08955EBC */
rv_t func_08955EBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955EBC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08955DFC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955ED0;
L_08955ED0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955EDC */
rv_t func_08955EDC(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955EDC:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08922814(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08955EF0;
L_08955EF0:;
    v0 = D_08AF92A0 - (-28000);
    v0 = v0 - 28000;
    v1 = (u32)-1;
    ST32(s0, v0);
    ST32(s0+40, v1);
    ST32(s0+44, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08955F18 */
rv_t func_08955F18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955F18:;
    sp = sp - 16;
    v0 = D_08AF92A0 - (-28000);
    s0 = a0 + 0;
    v0 = v0 - 28000;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08955F58; }
    goto L_08955F40;
L_08955F40:;
    a0 = s0 + 0;
    { rv_t r_ = func_089228D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955F48;
L_08955F48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08955F58:;
    v0 = LD32(v1);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955F68;
L_08955F68:;
    v0 = LD32(s0+44);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08955F40; }
    goto L_08955F74;
L_08955F74:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955F84;
L_08955F84:;
    goto L_08955F40;
}

/* 08955F8C */
rv_t func_08955F8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08955F8C:;
    sp = sp - 16;
    v0 = D_08AF92A0 - (-28000);
    s0 = a0 + 0;
    v0 = v0 - 28000;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08955FCC; }
    goto L_08955FB4;
L_08955FB4:;
    a0 = s0 + 0;
    { rv_t r_ = func_089228D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955FBC;
L_08955FBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08955FCC:;
    v0 = LD32(v1);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955FDC;
L_08955FDC:;
    v0 = LD32(s0+44);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08955FB4; }
    goto L_08955FE8;
L_08955FE8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08955FF8;
L_08955FF8:;
    goto L_08955FB4;
}

/* 08956000 */
rv_t func_08956000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08956000:;
    sp = sp - 16;
    v0 = D_08AF92A0 - (-28000);
    s0 = a0 + 0;
    v0 = v0 - 28000;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08956048; }
    goto L_08956028;
L_08956028:;
    a0 = s0 + 0;
    { rv_t r_ = func_089228D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956030;
L_08956030:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956038;
L_08956038:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08956048:;
    v0 = LD32(v1);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956058;
L_08956058:;
    v0 = LD32(s0+44);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08956028; }
    goto L_08956064;
L_08956064:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956074;
L_08956074:;
    goto L_08956028;
}

/* 0895607C */
rv_t func_0895607C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0895607C:;
    sp = sp - 16;
    v0 = LD32(a0+44);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895609C; }
    goto L_08956090;
L_08956090:;
    goto L_08956094;
L_08956094:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895609C:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089560AC;
L_089560AC:;
    goto L_08956094;
}

/* 089560B4 */
u32 func_089560B4(void)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089560B4:;
    sp = sp - 16;
    v0 = func_089237F4();
    goto L_089560C4;
L_089560C4:;
    s0 = v0 + 0;
    v0 = func_08956D78();
    goto L_089560CC;
L_089560CC:;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    v0 = func_089569E4();
    goto L_089560D4;
L_089560D4:;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    v1 = s0 < 0x26cu;
    v0 = 620;
    if (v1 != 0) s0 = v0;
    v0 = func_08959F28();
    goto L_089560E8;
L_089560E8:;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    v0 = func_0895B334();
    goto L_089560F0;
L_089560F0:;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    v0 = func_0895BE4C();
    goto L_089560F8;
L_089560F8:;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    v0 = func_0895D55C();
    goto L_08956100;
L_08956100:;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08956118 */
static void func_08956118__orig(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08956118:;
    sp = sp - 16;
    v0 = func_089560B4();
    goto L_0895612C;
L_0895612C:;
    s1 = v0 + 0;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956138;
L_08956138:;
    a0 = s1 << 7;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956144;
L_08956144:;
    v1 = 128;
    ST32(s0+12, v1);
    ST32(s0, v0);
    ST32(s0+8, s1);
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_089561B0; }
    goto L_0895615C;
L_0895615C:;
    a2 = s1 + 0;
    t0 = 0 + 0;
    t1 = 127;
    a1 = s1 + 0;
    a3 = 0 + 0;
    goto L_08956170;
L_08956170:;
    v1 = LD32(s0);
    v0 = t0 + 1;
    t0 = v0 + 0;
    a0 = v1 + a1;
    v0 = (s32)v0 < (s32)t1;
    v1 = v1 + a3;
    ST32(v1, a0);
    a3 = a3 + a2;
    cnd_ = v0 != 0;
    a1 = a1 + a2;
    if (cnd_) { goto L_08956170; }
    goto L_08956198;
L_08956198:;
    { s64 p_ = (s64)(s32)t1 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s0);
    ST32(s0+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_089561B0;
L_089561B0:;
    v0 = D_08C278D8 - (30936);
    ST32(v0+30936, s0);
    sp = sp + 16;
    return;
}

void func_08956118(void)
{
    if (rs_ai_pool_init()) return;   /* native hook (tools/dc/hooks.py) */
    func_08956118__orig();
}

/* 089561CC */
void func_089561CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089561CC:;
    sp = sp - 16;
    s1 = D_08C278D8 - (30936);
    s0 = LD32(s1+30936);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08956200; }
    goto L_089561E8;
L_089561E8:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08956214; }
    goto L_089561F4;
L_089561F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089561FC;
L_089561FC:;
    ST32(s1+30936, 0);
    goto L_08956200;
L_08956200:;
    sp = sp + 16;
    return;
L_08956214:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895621C;
L_0895621C:;
    goto L_089561F4;
}

/* 08956224 */
rv_t func_08956224(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08956224:;
    sp = sp - 16;
    s2 = 0 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+44);
    cnd_ = a0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_089562C8; }
    goto L_0895624C;
L_0895624C:;
    v1 = LD_U16(s1+16);
    v0 = 0x8034;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089562B4; }
    goto L_0895625C;
L_0895625C:;
    cnd_ = v0 != 0;
    v0 = 0x806e;
    if (cnd_) { goto L_089562A4; }
    goto L_08956264;
L_08956264:;
    v0 = v1 - 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08956290; }
    goto L_08956274;
L_08956274:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08956290:;
    a1 = s1 + 0;
    { rv_t r_ = func_08923178(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956298;
L_08956298:;
    v0 = s2 | v0;
    s2 = 0 < v0;
    goto L_08956274;
L_089562A4:;
    cnd_ = v1 == v0;
    v0 = 0x8074;
    if (cnd_) { goto L_089562B4; }
    goto L_089562AC;
L_089562AC:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s0 + 0; goto L_08956290; }
    goto L_089562B4;
L_089562B4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08923178(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089562C0;
L_089562C0:;
    s2 = 1;
    goto L_08956274;
L_089562C8:;
    v1 = LD32(a0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089562D8;
L_089562D8:;
    s2 = 0 < v0;
    goto L_0895624C;
}

/* 089562E0 */
rv_t func_089562E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089562E0:;
    sp = sp - 32;
    s3 = D_08C278D8 - (30936);
    t1 = a0 + 0;
    v0 = 0 + 0;
    t0 = LD32(s3+30936);
    a3 = LD32(t0+4);
    cnd_ = a3 == 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_08956384; }
    goto L_08956314;
L_08956314:;
    v0 = LD32(t0+16);
    v1 = LD32(a3);
    a0 = a1 < 0x6u;
    v0 = v0 + 1;
    ST32(t0+4, v1);
    s0 = a3 + 0;
    s1 = 0 + 0;
    cnd_ = a0 == 0;
    ST32(t0+16, v0);
    if (cnd_) { goto L_089563A0; }
    goto L_08956338;
L_08956338:;
    v1 = D_08ADAC24 - (-21468);
    v0 = a1 << 2;
    v1 = v1 - 21468;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08956354u: goto L_08956354; case 0x089563A0u: goto L_089563A0; case 0x089563C0u: goto L_089563C0; case 0x089563D8u: goto L_089563D8; case 0x089563F0u: goto L_089563F0; case 0x08956408u: goto L_08956408; default: rs_break(0, 0x0895634c); }
L_08956354:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08956364; }
    goto L_0895635C;
L_0895635C:;
    a0 = a3 + 0;
    { u64 r_ = func_08920568(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956364;
L_08956364:;
    cnd_ = s0 == 0;
    s1 = s0 + 0;
    if (cnd_) { goto L_089563A0; }
    goto L_0895636C;
L_0895636C:;
    cnd_ = s2 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08956380; }
    goto L_08956374;
L_08956374:;
    a0 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956380;
L_08956380:;
    v0 = s1 + 0;
    goto L_08956384;
L_08956384:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089563A0:;
    v0 = LD32(s3+30936);
    v1 = LD32(v0+16);
    a0 = LD32(v0+4);
    v1 = v1 - 1;
    ST32(s0, a0);
    ST32(v0+16, v1);
    ST32(v0+4, s0);
    goto L_08956380;
L_089563C0:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08956364; }
    goto L_089563C8;
L_089563C8:;
    a0 = a3 + 0;
    { u64 r_ = func_089208B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089563D0;
L_089563D0:;
    goto L_08956364;
L_089563D8:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08956364; }
    goto L_089563E0;
L_089563E0:;
    a0 = a3 + 0;
    { u64 r_ = func_08920CA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089563E8;
L_089563E8:;
    goto L_08956364;
L_089563F0:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08956364; }
    goto L_089563F8;
L_089563F8:;
    a0 = a3 + 0;
    { u64 r_ = func_089211B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956400;
L_08956400:;
    goto L_08956364;
L_08956408:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08956364; }
    goto L_08956410;
L_08956410:;
    a0 = a3 + 0;
    { u64 r_ = func_089555CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956418;
L_08956418:;
    goto L_08956364;
}

/* 08956420 */
rv_t func_08956420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08956420:;
    sp = sp - 16;
    v0 = LD32(a0+44);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08956440; }
    goto L_08956434;
L_08956434:;
    goto L_08956438;
L_08956438:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08956440:;
    v0 = LD32(v0);
    v1 = LD32(v0+24);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956450;
L_08956450:;
    goto L_08956438;
}

/* 08956458 */
rv_t func_08956458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08956458:;
    sp = sp - 48;
    s0 = a0 + 0;
    { rv_t r_ = func_0892308C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895646C;
L_0895646C:;
    a2 = D_08ADAC3C - (-21444);
    v1 = LD32(s0+40);
    a0 = D_08C25280 - (21120);
    v0 = (u32)-1;
    a3 = a2 - 21444;
    a0 = a0 + 21120;
    cnd_ = v1 == v0;
    a1 = sp + 0;
    if (cnd_) { goto L_0895649C; }
    goto L_0895648C;
L_0895648C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0895649C:;
    v1 = D_08AEDD84 - (-8828);
    a2 = LD32(a2-21444);
    a3 = LD32(a3+4);
    f12 = BITSF(LD32(v1-8828));
    v0 = D_08AF9278 - (-28040);
    v0 = v0 - 28040;
    ST32(sp, v0);
    ST32(sp+4, s0);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, a2);
    ST32(sp+20, a3);
    { rv_t r_ = func_08837010(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089564D0;
L_089564D0:;
    ST32(s0+40, v0);
    v0 = D_08AF81A8 - (-32344);
    v0 = v0 - 32344;
    ST32(sp, v0);
    goto L_0895648C;
}

/* 089564E4 */
rv_t func_089564E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089564E4:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+40);
    a0 = D_08C25280 - (21120);
    a0 = a0 + 21120;
    cnd_ = v0 == s1;
    a1 = v0 + 0;
    if (cnd_) { goto L_0895651C; }
    goto L_08956510;
L_08956510:;
    { rv_t r_ = func_08837194(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956518;
L_08956518:;
    ST32(s0+40, s1);
    goto L_0895651C;
L_0895651C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08923120(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956524;
L_08956524:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08956538 */
u64 func_08956538(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08956538:;
    sp = sp - 16;
    v0 = 999;
    s2 = a0 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_089565E4; }
    goto L_0895655C;
L_0895655C:;
    a0 = D_08B28DD8 - (-29224);
    v1 = a0 - 29224;
    v0 = LD32(v1+4);
    a1 = LD32(a0-29224);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089565A8; }
    goto L_08956588;
L_08956588:;
    v1 = LD32(a0);
    goto L_0895658C;
L_0895658C:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089565FC; }
    goto L_08956598;
L_08956598:;
    a0 = LD32(a0+4);
    goto L_0895659C;
L_0895659C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0895658C; }
    goto L_089565A4;
L_089565A4:;
    v1 = 0 + 0;
    goto L_089565A8;
L_089565A8:;
    cnd_ = v1 == 0;
    a1 = 8;
    if (cnd_) { goto L_089565E4; }
    goto L_089565B0;
L_089565B0:;
    a0 = 62;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089565C0;
L_089565C0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089565E4; }
    goto L_089565C8;
L_089565C8:;
    v0 = LD32(v0+24);
    a0 = s2 + 0;
    a1 = s0 + 0;
    ST32(v0+4, s1);
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089565DC;
L_089565DC:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089565E4;
L_089565E4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089565FC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0895659C; }
    goto L_08956608;
L_08956608:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0895659C; }
    goto L_08956614;
L_08956614:;
    goto L_089565A8;
}

/* 0895661C */
u32 func_0895661C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0895661C:;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08956634; }
    goto L_08956628;
L_08956628:;
    v0 = LD_U16(v1+10);
    v0 = v0 ^ 0x5;
    v0 = v0 < 0x1u;
    goto L_08956634;
L_08956634:;
    return v0;
}

/* 0895663C */
rv_t func_0895663C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0895663C:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08956668; }
    goto L_08956658;
L_08956658:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08956668:;
    v0 = LD32(v0);
    v1 = LD32(v0);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956678;
L_08956678:;
    v0 = D_08C278D8 - (30936);
    v1 = LD32(v0+30936);
    a1 = LD32(s0);
    ST32(s0, 0);
    v0 = LD32(v1+16);
    a0 = LD32(v1+4);
    v0 = v0 - 1;
    ST32(a1, a0);
    ST32(v1+16, v0);
    ST32(v1+4, a1);
    goto L_08956658;
}

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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956A54;
L_08956A54:;
    goto L_08956A24;
L_08956A5C:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
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
