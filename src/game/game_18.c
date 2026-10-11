#include "game.h"

/* 0899A970 */
rv_t func_0899A970(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0899A970:;
    sp = sp - 80;
    s2 = a1 & 0xff;
    v0 = LD_U8(a0+196);
    cnd_ = v0 == s2;
    s1 = a0 + 0;
    if (cnd_) { goto L_0899A9A0; }
    goto L_0899A998;
L_0899A998:;
    cnd_ = s2 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0899A9C8; }
    goto L_0899A9A0;
L_0899A9A0:;
    a0 = s1 + 0;
    goto L_0899A9A4;
L_0899A9A4:;
    a1 = s2 + 0;
    { rv_t r_ = func_089DCD00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A9AC;
L_0899A9AC:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0899A9C8:;
    v0 = LD32(v1+112);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A9D4;
L_0899A9D4:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0899A9A4; }
    goto L_0899A9DC;
L_0899A9DC:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0899A9A4; }
    goto L_0899A9EC;
L_0899A9EC:;
    v1 = LD32(s1);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899A9FC;
L_0899A9FC:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_0899AB6C; }
    goto L_0899AA10;
L_0899AA10:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899AA60; }
    goto L_0899AA34;
L_0899AA34:;
    a0 = LD32(a1);
    goto L_0899AA38;
L_0899AA38:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0899AB74; }
    goto L_0899AA50;
L_0899AA50:;
    a1 = LD32(a1+4);
    goto L_0899AA54;
L_0899AA54:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0899AA38; }
    goto L_0899AA5C;
L_0899AA5C:;
    v1 = 0 + 0;
    goto L_0899AA60;
L_0899AA60:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0899AA70; }
    goto L_0899AA68;
L_0899AA68:;
    v0 = LD32(v1+72);
    v0 = (v0 >> 3) & 0x1;
    goto L_0899AA70;
L_0899AA70:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0899A9A4; }
    goto L_0899AA78;
L_0899AA78:;
    v1 = LD32(s1);
    ST32(sp+32, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AA8C;
L_0899AA8C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+260);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AAA0;
L_0899AAA0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = sp + 32;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899AAB0;
L_0899AAB0:;
    a0 = LD32(sp+32);
    a1 = 0xdb040000u;
    a1 = a1 | 0x801c;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899AAC4;
L_0899AAC4:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a1 = 0x5a30000u;
    a1 = a1 | 0xe701;
    a0 = LD32(v0-12);
    a2 = sp + 0;
    a3 = 0 + 0;
    a0 = s1 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AAF8;
L_0899AAF8:;
    cnd_ = s0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0899A9A4; }
    goto L_0899AB00;
L_0899AB00:;
    v0 = D_08AEE828 - (-6104);
    f0 = BITSF(LD32(v0-6104));
    a1 = sp + 16;
    a2 = s0 + 0;
    a0 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AB2C;
L_0899AB2C:;
    cnd_ = v0 == 0;
    ST32(sp+36, v0);
    if (cnd_) { goto L_0899A9A0; }
    goto L_0899AB34;
L_0899AB34:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AB3C;
L_0899AB3C:;
    a3 = LD32(s1+512);
    a0 = v0 + 0;
    a1 = sp + 36;
    s3 = s1 + 512;
    a2 = 0 + 0;
    s0 = v0 + 0;
    func_08AAFA30(a0, a1, a2, a3);
    goto L_0899AB58;
L_0899AB58:;
    v0 = LD32(s3+4);
    cnd_ = v0 != 0;
    ST32(s1+512, s0);
    if (cnd_) { goto L_0899A9A0; }
    goto L_0899AB64;
L_0899AB64:;
    ST32(s3+4, s0);
    goto L_0899A9A0;
L_0899AB6C:;
    v0 = 0 + 0;
    goto L_0899AA70;
L_0899AB74:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0899AA50; }
    goto L_0899AB80;
L_0899AB80:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0899AA54; }
    goto L_0899AB8C;
L_0899AB8C:;
    goto L_0899AA60;
}

/* 0899AB94 */
rv_t func_0899AB94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[496] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 496);
L_0899AB94:;
    sp = sp - 496;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+452);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899ABC8;
L_0899ABC8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899ABF4; }
    goto L_0899ABD0;
L_0899ABD0:;
    goto L_0899ABD4;
L_0899ABD4:;
    sp = sp + 496;
    return (rv_t){ v0, v1, f0 };
L_0899ABF4:;
    a0 = (u32)-1;
    ST32(sp+144, 0);
    v0 = func_08A5FB08(a0);
    goto L_0899AC00;
L_0899AC00:;
    a0 = 0xde350000u;
    a2 = sp + 144;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899AC14;
L_0899AC14:;
    v0 = D_08AEE82C - (-6100);
    f12 = BITSF(LD32(v0-6100));
    a0 = LD32(sp+144);
    a1 = 0x616f0000u;
    a1 = a1 | 0x4a35;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AC2C;
L_0899AC2C:;
    v0 = D_08AEE830 - (-6096);
    f12 = BITSF(LD32(v0-6096));
    a0 = LD32(sp+144);
    a1 = 0x32380000u;
    a1 = a1 | 0xec71;
    f22 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AC48;
L_0899AC48:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899AC5C;
L_0899AC5C:;
    {u32 a_=sp+(256);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
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
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AEE0; }
    goto L_0899AC9C;
L_0899AC9C:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AE20; }
    goto L_0899ACAC;
L_0899ACAC:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899AD44; }
    goto L_0899ACD4;
L_0899ACD4:;
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
    if (cnd_) { goto L_0899AD20; }
    goto L_0899AD10;
L_0899AD10:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899AD20;
L_0899AD20:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AD64; }
    goto L_0899AD30;
L_0899AD30:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899AD64; }
    goto L_0899AD40;
L_0899AD40:;
    goto L_0899AD44;
L_0899AD44:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AD64; }
    goto L_0899AD58;
L_0899AD58:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899AD64;
L_0899AD64:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899ADF4; }
    goto L_0899AD84;
L_0899AD84:;
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
    if (cnd_) { goto L_0899ADD0; }
    goto L_0899ADC0;
L_0899ADC0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899ADD0;
L_0899ADD0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AE14; }
    goto L_0899ADE0;
L_0899ADE0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899AE14; }
    goto L_0899ADF0;
L_0899ADF0:;
    goto L_0899ADF4;
L_0899ADF4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AE14; }
    goto L_0899AE08;
L_0899AE08:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899AE14;
L_0899AE14:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899AF98; }
    goto L_0899AE1C;
L_0899AE1C:;
    goto L_0899AE20;
L_0899AE20:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899AEB4; }
    goto L_0899AE44;
L_0899AE44:;
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
    if (cnd_) { goto L_0899AE90; }
    goto L_0899AE80;
L_0899AE80:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899AE90;
L_0899AE90:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AED4; }
    goto L_0899AEA0;
L_0899AEA0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899AED4; }
    goto L_0899AEB0;
L_0899AEB0:;
    goto L_0899AEB4;
L_0899AEB4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AED4; }
    goto L_0899AEC8;
L_0899AEC8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899AED4;
L_0899AED4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899AF98; }
    goto L_0899AEDC;
L_0899AEDC:;
    goto L_0899AEE0;
L_0899AEE0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899AF74; }
    goto L_0899AF04;
L_0899AF04:;
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
    if (cnd_) { goto L_0899AF50; }
    goto L_0899AF40;
L_0899AF40:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899AF50;
L_0899AF50:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AF94; }
    goto L_0899AF60;
L_0899AF60:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899AF94; }
    goto L_0899AF70;
L_0899AF70:;
    goto L_0899AF74;
L_0899AF74:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899AF94; }
    goto L_0899AF88;
L_0899AF88:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899AF94;
L_0899AF94:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_0899AF98;
L_0899AF98:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    ST32(sp+48, 0);
    {u32 a_=sp+(288);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+56, 0);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
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
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+68, 0);
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {v[64]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = LD32(sp+8);
    {v[65]=BITSF(v1);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[66]=BITSF(v0);}
    v1 = LD32(sp+16);
    v0 = LD32(sp+12);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(320);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+20);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    f21 = BITSF(LD32(sp+68));
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(336);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    v0 = LD32(sp+32);
    {v[1]=BITSF(v1);}
    a0 = LD32(s1+8);
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(272);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(s1);
    v1 = LD32(s1+4);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {v[0]=BITSF(v0);}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {v[1]=BITSF(v1);}
    {float s0=v[84];float s1=v[85];float s2=v[86];float s3=v[87];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {v[2]=BITSF(a0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[6]);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f3 = f0 * f20;
    f2 = BITSF(v0);
    f20 = f1 * f20;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(416);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = FBITS(f20);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s2);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {v0=FBITS(v[5]);}
    fcc = FCMP(f0, f21, 2);
    ST32(sp+84, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+88, FBITS(f4));
    ST32(sp+64, FBITS(f20));
    ST32(sp+72, FBITS(f3));
    ST32(sp+96, FBITS(f20));
    ST32(sp+100, FBITS(f21));
    cnd_ = fcc;
    ST32(sp+104, FBITS(f3));
    if (cnd_) { goto L_0899B1D8; }
    goto L_0899B19C;
L_0899B19C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f3));
    goto L_0899B1D8;
L_0899B1D8:;
    v1 = LD32(s0);
    a1 = sp + 80;
    v0 = LD32(v1+276);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B1EC;
L_0899B1EC:;
    v1 = D_08AEE834 - (-6092);
    f0 = BITSF(LD32(v1-6092));
    f5 = BITSF(LD32(sp+96));
    f6 = BITSF(LD32(sp+104));
    f1 = BITSF(LD32(sp+88));
    f5 = f5 * f0;
    f6 = f6 * f0;
    f3 = BITSF(LD32(sp+80));
    f4 = BITSF(LD32(sp+100));
    {u32 a_=sp+(448);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    f4 = f4 * f0;
    f7 = f1 + f6;
    f3 = f3 + f5;
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(432);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(s2);}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[2]=BITSF(v0);}
    v0 = FBITS(f1);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v[6]=BITSF(v0);}
    {v0=FBITS(v[0]);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    f1 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    ST32(sp+84, FBITS(f21));
    f0 = f22 * f22;
    fcc = FCMP(f1, f2, 12);
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f4));
    ST32(sp+136, FBITS(f6));
    ST32(sp+112, FBITS(f3));
    ST32(sp+116, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+120, FBITS(f7));
    if (cnd_) { goto L_0899B2A0; }
    goto L_0899B290;
L_0899B290:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0899ABD4; }
    goto L_0899B2A0;
L_0899B2A0:;
    a0 = LD32(s0+40);
    v0 = func_088BB194(a0);
    goto L_0899B2A8;
L_0899B2A8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0899B2C8; }
    goto L_0899B2B0;
L_0899B2B0:;
    a0 = LD32(s0+40);
    goto L_0899B2B4;
L_0899B2B4:;
    a1 = sp + 64;
    a2 = 1;
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B2C0;
L_0899B2C0:;
    goto L_0899ABD4;
L_0899B2C8:;
    a0 = LD32(s0+40);
    func_088BB1A4(a0);
    goto L_0899B2D0;
L_0899B2D0:;
    a0 = LD32(s0+40);
    goto L_0899B2B4;
}

/* 0899B2D8 */
rv_t func_0899B2D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899B2D8:;
    sp = sp - 16;
    s1 = a0 + 0;
    { rv_t r_ = func_08A059DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B2F4;
L_0899B2F4:;
    a2 = LD_U8(s1+48);
    v0 = LD_U8(s1+49);
    v1 = a2 & 0xff;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD32(s1+76); goto L_0899B540; }
    goto L_0899B308;
L_0899B308:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s1+76); goto L_0899B510; }
    goto L_0899B310;
L_0899B310:;
    s2 = D_08C2C234 - (-15820);
    v0 = LD32(s2-15820);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_0899B4B8; }
    goto L_0899B320;
L_0899B320:;
    v0 = a2 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+80); goto L_0899B438; }
    goto L_0899B32C;
L_0899B32C:;
    v0 = D_08C2C238 - (-15816);
    a0 = LD32(v0-15816);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0899B3D4; }
    goto L_0899B33C;
L_0899B33C:;
    v0 = D_08C2C240 - (-15808);
    goto L_0899B340;
L_0899B340:;
    a0 = LD32(v0-15808);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0899B36C; }
    goto L_0899B34C;
L_0899B34C:;
    a2 = LD_U8(s1+48);
    goto L_0899B350;
L_0899B350:;
    ST8(s1+49, a2);
    goto L_0899B354;
L_0899B354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0899B36C:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B374;
L_0899B374:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899B34C; }
    goto L_0899B37C;
L_0899B37C:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B38C;
L_0899B38C:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B398;
L_0899B398:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD_U8(s1+48); goto L_0899B350; }
    goto L_0899B3A0;
L_0899B3A0:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B3B0;
L_0899B3B0:;
    a2 = v0 + 0;
    v0 = D_08AEE838 - (-6088);
    f12 = BITSF(LD32(v0-6088));
    a1 = s1 + 80;
    a0 = s0 + 0;
    goto L_0899B3C4;
L_0899B3C4:;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B3CC;
L_0899B3CC:;
    a2 = LD_U8(s1+48);
    goto L_0899B350;
L_0899B3D4:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B3DC;
L_0899B3DC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899B33C; }
    goto L_0899B3E4;
L_0899B3E4:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B3F4;
L_0899B3F4:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B400;
L_0899B400:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2C240 - (-15808); goto L_0899B340; }
    goto L_0899B408;
L_0899B408:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B418;
L_0899B418:;
    a2 = v0 + 0;
    v0 = D_08AEE838 - (-6088);
    f12 = BITSF(LD32(v0-6088));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B430;
L_0899B430:;
    v0 = D_08C2C240 - (-15808);
    goto L_0899B340;
L_0899B438:;
    s0 = (u32)-1;
    cnd_ = v0 == s0;
    if (cnd_) { ST8(s1+49, a2); goto L_0899B354; }
    goto L_0899B444;
L_0899B444:;
    a0 = s1 + 80;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B44C;
L_0899B44C:;
    v0 = D_08C2C23C - (-15812);
    a0 = LD32(v0-15812);
    cnd_ = a0 == 0;
    ST32(s1+80, s0);
    if (cnd_) { goto L_0899B34C; }
    goto L_0899B45C;
L_0899B45C:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B464;
L_0899B464:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899B34C; }
    goto L_0899B46C;
L_0899B46C:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B47C;
L_0899B47C:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B488;
L_0899B488:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD_U8(s1+48); goto L_0899B350; }
    goto L_0899B490;
L_0899B490:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B4A0;
L_0899B4A0:;
    a2 = v0 + 0;
    v0 = D_08AEE838 - (-6088);
    f12 = BITSF(LD32(v0-6088));
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_0899B3C4;
L_0899B4B8:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B4C4;
L_0899B4C4:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B4D8;
L_0899B4D8:;
    a2 = LD32(s2-15820);
    a0 = s0 + 0;
    a1 = v0 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B4F0;
L_0899B4F0:;
    cnd_ = v0 != 0;
    ST32(s1+76, v0);
    if (cnd_) { goto L_0899B508; }
    goto L_0899B4F8;
L_0899B4F8:;
    a2 = LD_U8(s1+48);
    v0 = (u32)-1;
    ST32(s1+76, v0);
    goto L_0899B320;
L_0899B508:;
    a2 = LD_U8(s1+48);
    goto L_0899B320;
L_0899B510:;
    s0 = (u32)-1;
    cnd_ = a1 == s0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_0899B320; }
    goto L_0899B51C;
L_0899B51C:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B524;
L_0899B524:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0899B508; }
    goto L_0899B52C;
L_0899B52C:;
    a1 = 0 + 0;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B534;
L_0899B534:;
    a2 = LD_U8(s1+48);
    ST32(s1+76, s0);
    goto L_0899B320;
L_0899B540:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B54C;
L_0899B54C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899B574; }
    goto L_0899B554;
L_0899B554:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B564;
L_0899B564:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B574;
L_0899B574:;
    v1 = LD32(s1+80);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08C2C240 - (-15808);
    if (cnd_) { goto L_0899B5E8; }
    goto L_0899B584;
L_0899B584:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B594;
L_0899B594:;
    a0 = LD32(s1+80);
    s0 = v0 + 0;
    f0 = func_088E0018(a0);
    goto L_0899B5A0;
L_0899B5A0:;
    f12 = f0;
    a0 = s0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B5AC;
L_0899B5AC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899B5D8; }
    goto L_0899B5B4;
L_0899B5B4:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B5C4;
L_0899B5C4:;
    a0 = LD32(s1+80);
    a1 = v0 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B5D0;
L_0899B5D0:;
    a2 = LD_U8(s1+48);
    goto L_0899B350;
L_0899B5D8:;
    a0 = s1 + 80;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B5E0;
L_0899B5E0:;
    a2 = LD_U8(s1+48);
    goto L_0899B350;
L_0899B5E8:;
    a0 = LD32(v0-15808);
    cnd_ = a0 == 0;
    a2 = LD_U8(s1+48);
    if (cnd_) { goto L_0899B350; }
    goto L_0899B5F4;
L_0899B5F4:;
    cnd_ = a2 == 0;
    if (cnd_) { ST8(s1+49, a2); goto L_0899B354; }
    goto L_0899B5FC;
L_0899B5FC:;
    goto L_0899B36C;
}

/* 0899B604 */
rv_t func_0899B604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899B604:;
    sp = sp - 16;
    a0 = LD32(a0+236);
    { rv_t r_ = func_08985C04(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B614;
L_0899B614:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0899B620 */
rv_t func_0899B620(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0899B620:;
    v1 = LD32(a0+236);
    v0 = LD_U8(v1+122);
    return (rv_t){ v0, v1, f0 };
}

/* 0899B62C */
void func_0899B62C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0899B62C:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = (u32)-1;
    ST32(sp, 0);
    v0 = func_08A5FB08(a0);
    goto L_0899B658;
L_0899B658:;
    a0 = 0xde350000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B66C;
L_0899B66C:;
    v1 = D_08AEE83C - (-6084);
    f21 = BITSF(LD32(v1-6084));
    a0 = LD32(sp);
    a1 = 0x6e6b0000u;
    a1 = a1 | 0x3925;
    f12 = f21;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B688;
L_0899B688:;
    v0 = D_08AEE840 - (-6080);
    f12 = BITSF(LD32(v0-6080));
    a0 = LD32(sp);
    a1 = 0x2af20000u;
    a1 = a1 | 0x554;
    ST32(sp+8, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B6A4;
L_0899B6A4:;
    a0 = D_08C2C21C - (-15844);
    v0 = LD32(s0+520);
    a1 = LD32(s0+424);
    a0 = a0 - 15844;
    v0 = v0 & 0xc;
    a2 = 1;
    f20 = f0;
    s2 = 0 < v0;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B6C8;
L_0899B6C8:;
    a0 = LD32(s0+520);
    s1 = v0 + 0;
    v0 = a0 & 0x2000;
    cnd_ = v0 == 0;
    v1 = LD32(s0+424);
    if (cnd_) { goto L_0899B6E8; }
    goto L_0899B6DC;
L_0899B6DC:;
    v0 = LD32(s0+420);
    cnd_ = v0 == v1;
    v0 = a0 & 0x1000;
    if (cnd_) { goto L_0899B788; }
    goto L_0899B6E8;
L_0899B6E8:;
    ST32(s0+420, v1);
    ST32(s0+376, 0);
    goto L_0899B6F0;
L_0899B6F0:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0899B71C; }
    goto L_0899B6F8;
L_0899B6F8:;
    v0 = LD32(s0);
    a1 = LD32(s1);
    v1 = LD32(v0-16);
    v0 = LD32(a1+24);
    v1 = s0 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B714;
L_0899B714:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0899B76C; }
    goto L_0899B71C;
L_0899B71C:;
    a0 = s0 + 224;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_0899B74C; }
    goto L_0899B72C;
L_0899B72C:;
    a2 = LD32(s0+424);
    v0 = LD32(v1+8);
    goto L_0899B734;
L_0899B734:;
    cnd_ = v0 == a2;
    a1 = v1 + 0;
    if (cnd_) { goto L_0899B74C; }
    goto L_0899B73C;
L_0899B73C:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0899B734; }
    goto L_0899B748;
L_0899B748:;
    a1 = 0 + 0;
    goto L_0899B74C;
L_0899B74C:;
    { u64 r_ = func_08AC3EA4(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899B754;
L_0899B754:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+440);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B768;
L_0899B768:;
    goto L_0899B76C;
L_0899B76C:;
    sp = sp + 48;
    return;
L_0899B788:;
    cnd_ = v0 == 0;
    f12 = f21;
    if (cnd_) { goto L_0899B794; }
    goto L_0899B790;
L_0899B790:;
    f12 = BITSF(LD32(s0+384));
    goto L_0899B794;
L_0899B794:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+376));
    f0 = f12 * f0;
    f0 = f1 + f0;
    cnd_ = s2 == 0;
    ST32(s0+376, FBITS(f0));
    if (cnd_) { goto L_0899B6F0; }
    goto L_0899B7B0;
L_0899B7B0:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a0 = s0 + 376;
    if (cnd_) { goto L_0899B6F0; }
    goto L_0899B7C0;
L_0899B7C0:;
    a1 = sp + 4;
    a2 = sp + 8;
    ST32(sp+4, 0);
    f0 = func_0899F814(a0, a1, a2);
    goto L_0899B7D0;
L_0899B7D0:;
    ST32(s0+376, FBITS(f0));
    goto L_0899B6F0;
}

/* 0899B7D8 */
void func_0899B7D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899B7D8:;
    sp = sp - 16;
    a0 = LD32(a0+236);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_0899B84C; }
    goto L_0899B7F0;
L_0899B7F0:;
    v0 = LD_U8(a0+121);
    v1 = LD_U8(a0+120);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v0 = LD32(v0+48);
    v1 = v1 << 2;
    v1 = v1 + a0;
    s0 = LD32(v1+72);
    cnd_ = v0 == 0;
    v1 = LD32(v1);
    if (cnd_) { goto L_0899B828; }
    goto L_0899B818;
L_0899B818:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899B84C; }
    goto L_0899B828;
L_0899B828:;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0899B838; }
    goto L_0899B830;
L_0899B830:;
    f0 = func_08A17C64(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0899B838;
L_0899B838:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899B848; }
    goto L_0899B840;
L_0899B840:;
    f0 = func_08A17C64(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0899B848;
L_0899B848:;
    goto L_0899B84C;
L_0899B84C:;
    sp = sp + 16;
    return;
}

/* 0899B858 */
void func_0899B858(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899B858:;
    sp = sp - 16;
    a1 = LD32(a0+236);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_0899B8B4; }
    goto L_0899B86C;
L_0899B86C:;
    v0 = LD_U8(a1+121);
    v1 = LD_U8(a1+120);
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0+48);
    v1 = v1 << 2;
    v1 = v1 + a1;
    cnd_ = a0 == 0;
    v0 = LD32(v1);
    if (cnd_) { goto L_0899B8B0; }
    goto L_0899B890;
L_0899B890:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899B8A8; }
    goto L_0899B898;
L_0899B898:;
    v0 = LD32(v0);
    v0 = v0 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899B8B4; }
    goto L_0899B8A8;
L_0899B8A8:;
    f0 = func_08A17C64(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0899B8B0;
L_0899B8B0:;
    goto L_0899B8B4;
L_0899B8B4:;
    sp = sp + 16;
    return;
}

/* 0899B8BC */
rv_t func_0899B8BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0899B8BC:;
    sp = sp - 64;
    s7 = a2 + 0;
    s6 = a3 & 0xff;
    s4 = a1 + 0;
    s2 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    f20 = f12;
    if (cnd_) { goto L_0899BAD0; }
    goto L_0899B910;
L_0899B910:;
    v0 = LD32(v1+248);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B91C;
L_0899B91C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899BAD0; }
    goto L_0899B924;
L_0899B924:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    s5 = 3507;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899B938;
L_0899B938:;
    v1 = v0 + 0;
    v0 = LD32(s0+56);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+28); goto L_0899B988; }
    goto L_0899B94C;
L_0899B94C:;
    v0 = LD32(s0+60);
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+28); goto L_0899B988; }
    goto L_0899B95C;
L_0899B95C:;
    v0 = LD32(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+28); goto L_0899B988; }
    goto L_0899B968;
L_0899B968:;
    v0 = v1 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+4);
    v1 = s4 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    s5 = LD32(v0);
    v1 = LD32(s1+28);
    goto L_0899B988;
L_0899B988:;
    a3 = 0xc0520000u;
    t0 = s1 + 28;
    cnd_ = v1 == 0;
    a3 = a3 | 0xbfb6;
    if (cnd_) { goto L_0899B9C4; }
    goto L_0899B998;
L_0899B998:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0899B9A0;
L_0899B9A0:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = a3 < v1;
    cnd_ = v1 == a3;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0899B9D0; }
    goto L_0899B9B8;
L_0899B9B8:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0899B9A0; }
    goto L_0899B9C4;
L_0899B9C4:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0899BB8C; }
    goto L_0899B9D0;
L_0899B9D0:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0899B9DC; }
    goto L_0899B9D8;
L_0899B9D8:;
    v0 = LD32(a2);
    goto L_0899B9DC;
L_0899B9DC:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_0899BB60; }
    goto L_0899B9E4;
L_0899B9E4:;
    v1 = LD32(s1+52);
    cnd_ = v1 == 0;
    a3 = s1 + 52;
    if (cnd_) { goto L_0899BA1C; }
    goto L_0899B9F0;
L_0899B9F0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0899B9F8;
L_0899B9F8:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s5 < v1;
    cnd_ = v1 == s5;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0899BA28; }
    goto L_0899BA10;
L_0899BA10:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0899B9F8; }
    goto L_0899BA1C;
L_0899BA1C:;
    a0 = LD32(a3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0899BB4C; }
    goto L_0899BA28;
L_0899BA28:;
    cnd_ = a2 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0899BA34; }
    goto L_0899BA30;
L_0899BA30:;
    s0 = LD32(a2);
    goto L_0899BA34;
L_0899BA34:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0899BA78; }
    goto L_0899BA3C;
L_0899BA3C:;
    a0 = LD32(s0+24);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0899BB34; }
    goto L_0899BA48;
L_0899BA48:;
    v0 = v0 & 0xff;
    goto L_0899BA4C;
L_0899BA4C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899BAD4; }
    goto L_0899BA54;
L_0899BA54:;
    cnd_ = s0 == 0;
    a2 = 0x5b2a0000u;
    if (cnd_) { goto L_0899BA78; }
    goto L_0899BA5C;
L_0899BA5C:;
    a2 = a2 | 0x4d03;
    a2 = s5 + a2;
    a0 = s1 + 0;
    a1 = s5 + 0;
    v0 = func_0880AC04(a0, a1, a2);
    goto L_0899BA70;
L_0899BA70:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0899BB24; }
    goto L_0899BA78;
L_0899BA78:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_0899BB00; }
    goto L_0899BA80;
L_0899BA80:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BA88;
L_0899BA88:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = 1;
    s0 = v0 + 0;
    func_08810F04(a0, a1, f12);
    goto L_0899BA9C;
L_0899BA9C:;
    t1 = s0 + 0;
    goto L_0899BAA0;
L_0899BAA0:;
    a1 = s5 + 0;
    a2 = s7 | 0x1;
    a0 = s1 + 0;
    t2 = s3 + 0;
    a3 = 1;
    t0 = s5 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BABC;
L_0899BABC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0899BAD0; }
    goto L_0899BAC4;
L_0899BAC4:;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899BACC;
L_0899BACC:;
    ST32(s2+448, s4);
    goto L_0899BAD0;
L_0899BAD0:;
    goto L_0899BAD4;
L_0899BAD4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0899BB00:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BB08;
L_0899BB08:;
    a0 = v0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    s0 = v0 + 0;
    func_08810BE8(a0, a1, f12);
    goto L_0899BB1C;
L_0899BB1C:;
    t1 = s0 + 0;
    goto L_0899BAA0;
L_0899BB24:;
    a1 = s5 + 0;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BB2C;
L_0899BB2C:;
    goto L_0899BA78;
L_0899BB34:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BB44;
L_0899BB44:;
    v0 = v0 & 0xff;
    goto L_0899BA4C;
L_0899BB4C:;
    a2 = 1;
    a1 = s5 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899BB58;
L_0899BB58:;
    a2 = v0 + 0;
    goto L_0899BA28;
L_0899BB60:;
    a1 = 0xc0520000u;
    a2 = 0x10000u;
    a0 = s1 + 0;
    a1 = a1 | 0xbfb6;
    a2 = a2 | 0x1;
    a3 = 1;
    t0 = 0 + 0;
    t1 = 0 + 0;
    { rv_t r_ = func_0880A92C(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BB84;
L_0899BB84:;
    s3 = v0 + 0;
    goto L_0899B9E4;
L_0899BB8C:;
    a1 = 0xc0520000u;
    a2 = 1;
    a1 = a1 | 0xbfb6;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899BB9C;
L_0899BB9C:;
    a2 = v0 + 0;
    goto L_0899B9D0;
}

/* 0899BBA4 */
rv_t func_0899BBA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_0899BBA4:;
    sp = sp - 304;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+248);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BBE8;
L_0899BBE8:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899BF30; }
    goto L_0899BBF4;
L_0899BBF4:;
    a1 = LD32(s1);
    v0 = LD32(a1-12);
    v0 = s1 + v0;
    s3 = LD32(v0+100);
    cnd_ = s3 == 0;
    v0 = D_08AEE844 - (-6076);
    if (cnd_) { goto L_0899BF30; }
    goto L_0899BC0C;
L_0899BC0C:;
    f0 = BITSF(LD32(s0+8));
    f20 = BITSF(0);
    f1 = BITSF(LD32(s0));
    ST32(sp+8, FBITS(f0));
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0-6076));
    ST32(sp, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    v0 = LD32(a1+92);
    ST32(sp+4, FBITS(f20));
    ST32(sp+32, FBITS(f20));
    t_ = v0;
    ST32(sp+36, FBITS(f20));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BC40;
L_0899BC40:;
    {u32 a_=sp+(240);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(80);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(64);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(96);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {v[16]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[17]=BITSF(v0);}
    v1 = LD32(sp+40);
    {v[33]=BITSF(a0);}
    {v[18]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v1=FBITS(v[22]);}
    f0 = BITSF(v1);
    f3 = BITSF(v1);
    {v1=FBITS(v[20]);}
    f1 = BITSF(v1);
    f2 = BITSF(v1);
    v0 = 0 + 0;
    v1 = FBITS(f1);
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v1);}
    {v[13]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    {v0=FBITS(v[21]);}
    ST32(sp+48, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+20, FBITS(f20));
    if (cnd_) { goto L_0899BD64; }
    goto L_0899BD2C;
L_0899BD2C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    goto L_0899BD64;
L_0899BD64:;
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+48, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f2));
    if (cnd_) { goto L_0899BDE4; }
    goto L_0899BDAC;
L_0899BDAC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_0899BDE4;
L_0899BDE4:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    s4 = 3507;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BDF8;
L_0899BDF8:;
    a0 = v0 + 0;
    v0 = LD32(s2+56);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0899BE44; }
    goto L_0899BE0C;
L_0899BE0C:;
    v1 = LD32(s2+60);
    v0 = 2;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0899BE44; }
    goto L_0899BE20;
L_0899BE20:;
    v0 = LD32(s2+64);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_0899BE44; }
    goto L_0899BE2C;
L_0899BE2C:;
    v0 = a0 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = LD32(v1+8);
    s4 = LD32(a0);
    v1 = LD32(s1);
    goto L_0899BE44;
L_0899BE44:;
    a0 = s1 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    s1 = 3507;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BE54;
L_0899BE54:;
    a0 = v0 + 0;
    v0 = LD32(s2+56);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    s0 = s3 + 52;
    if (cnd_) { goto L_0899BEA0; }
    goto L_0899BE68;
L_0899BE68:;
    v1 = LD32(s2+60);
    v0 = 4;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = D_08AEE848 - (-6072);
    if (cnd_) { goto L_0899BEA4; }
    goto L_0899BE7C;
L_0899BE7C:;
    v0 = LD32(s2+64);
    cnd_ = v0 == 0;
    v0 = D_08AEE848 - (-6072);
    if (cnd_) { goto L_0899BEA4; }
    goto L_0899BE88;
L_0899BE88:;
    v0 = a0 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0+4);
    a0 = LD32(v1+16);
    s1 = LD32(a0);
    s0 = s3 + 52;
    goto L_0899BEA0;
L_0899BEA0:;
    v0 = D_08AEE848 - (-6072);
    goto L_0899BEA4;
L_0899BEA4:;
    a1 = s4 + 0;
    a0 = s0 + 0;
    a2 = 1;
    f20 = BITSF(LD32(v0-6072));
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899BEB8;
L_0899BEB8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899BEC4; }
    goto L_0899BEC0;
L_0899BEC0:;
    v1 = LD32(v0);
    goto L_0899BEC4;
L_0899BEC4:;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899BF58; }
    goto L_0899BECC;
L_0899BECC:;
    v0 = D_08AEE84C - (-6068);
    goto L_0899BED0;
L_0899BED0:;
    f20 = BITSF(LD32(v0-6068));
    v0 = LD32(sp+48);
    goto L_0899BED8;
L_0899BED8:;
    v1 = LD32(sp+52);
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+16);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0899BF2C; }
    goto L_0899BF28;
L_0899BF28:;
    v0 = 0 + 0;
    goto L_0899BF2C;
L_0899BF2C:;
    v1 = v0 + 0;
    goto L_0899BF30;
L_0899BF30:;
    v0 = v1 + 0;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_0899BF58:;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899BF64;
L_0899BF64:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899BF70; }
    goto L_0899BF6C;
L_0899BF6C:;
    v1 = LD32(v0);
    goto L_0899BF70;
L_0899BF70:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = D_08AEE84C - (-6068); goto L_0899BED0; }
    goto L_0899BF78;
L_0899BF78:;
    v0 = LD32(sp+48);
    goto L_0899BED8;
}

/* 0899BF80 */
rv_t func_0899BF80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0899BF80:;
    sp = sp - 80;
    fp = 0 + 0;
    s3 = a0 + 0;
    s0 = a1 + 0;
    f21 = f12;
    v1 = LD32(a0);
    v0 = LD32(v1+248);
    v1 = D_08AEE850 - (-6064);
    t_ = v0;
    f22 = BITSF(LD32(v1-6064));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899BFE8;
L_0899BFE8:;
    s4 = v0 + 0;
    cnd_ = s4 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0899C0C0; }
    goto L_0899BFF4;
L_0899BFF4:;
    v0 = LD32(s3+520);
    v1 = D_08B1BC48 - (-17336);
    v1 = v1 - 17336;
    v0 = v0 & 0x1;
    v0 = v0 << 1;
    v0 = v0 + s0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    s1 = LD32(v0);
    v0 = (u32)-1;
    v1 = LD32(s1);
    cnd_ = v1 == v0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0899C0BC; }
    goto L_0899C028;
L_0899C028:;
    v0 = D_08AEE85C - (-6052);
    f25 = BITSF(LD32(v0-6052));
    f23 = BITSF(0);
    s2 = 0 + 0;
    s7 = D_08AEE854 - (-6060);
    s6 = (u32)-1;
    s0 = s2 + s1;
    goto L_0899C044;
L_0899C044:;
    f20 = BITSF(LD32(s0+4));
    fcc = FCMP(f20, f23, 2);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s7-6060));
    if (cnd_) { goto L_0899C078; }
    goto L_0899C058;
L_0899C058:;
    v0 = LD32(s0+8);
    cnd_ = v0 == s6;
    f20 = BITSF(LD32(s7-6060));
    if (cnd_) { goto L_0899C2D8; }
    goto L_0899C064;
L_0899C064:;
    cnd_ = s5 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_0899C1D8; }
    goto L_0899C06C;
L_0899C06C:;
    v0 = s2 + s1;
    ST32(v0+4, FBITS(f20));
    f0 = BITSF(LD32(s7-6060));
    goto L_0899C078;
L_0899C078:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0899C090; }
    goto L_0899C088;
L_0899C088:;
    f0 = BITSF(LD32(s3+368));
    f20 = f20 * f0;
    goto L_0899C090;
L_0899C090:;
    fcc = FCMP(f22, f21, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s3); goto L_0899C108; }
    goto L_0899C0A0;
L_0899C0A0:;
    s5 = s5 + 1;
    goto L_0899C0A4;
L_0899C0A4:;
    v0 = s5 << 3;
    v1 = v0 + s1;
    s2 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != s6;
    s0 = s2 + s1;
    if (cnd_) { goto L_0899C044; }
    goto L_0899C0BC;
L_0899C0BC:;
    v0 = fp + 0;
    goto L_0899C0C0;
L_0899C0C0:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0899C108:;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C114;
L_0899C114:;
    v1 = LD32(s4+56);
    a0 = v0 + 0;
    v0 = s2 + s1;
    v1 = a0 < v1;
    a1 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 3507;
    if (cnd_) { goto L_0899C168; }
    goto L_0899C130;
L_0899C130:;
    v0 = LD32(s4+60);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    v0 = a2 ^ 0xdb3;
    if (cnd_) { goto L_0899C16C; }
    goto L_0899C140;
L_0899C140:;
    v0 = LD32(s4+64);
    cnd_ = v0 == 0;
    v0 = a2 ^ 0xdb3;
    if (cnd_) { goto L_0899C16C; }
    goto L_0899C14C;
L_0899C14C:;
    v0 = a0 << 2;
    v0 = v0 + s4;
    a0 = LD32(v0+4);
    v1 = a1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a2 = LD32(v0);
    goto L_0899C168;
L_0899C168:;
    v0 = a2 ^ 0xdb3;
    goto L_0899C16C;
L_0899C16C:;
    cnd_ = v0 == 0;
    if (cnd_) { s5 = s5 + 1; goto L_0899C0A4; }
    goto L_0899C174;
L_0899C174:;
    v0 = s2 + s1;
    s0 = LD32(v0);
    v1 = 7;
    cnd_ = s0 == v1;
    if (cnd_) { v0 = LD_U8(s3+195); goto L_0899C194; }
    goto L_0899C188;
L_0899C188:;
    f22 = f20;
    goto L_0899C18C;
L_0899C18C:;
    fp = s0 + 0;
    goto L_0899C0A0;
L_0899C194:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3); goto L_0899C1B4; }
    goto L_0899C19C;
L_0899C19C:;
    v0 = LD32(s3+520);
    goto L_0899C1A0;
L_0899C1A0:;
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { s5 = s5 + 1; goto L_0899C0A4; }
    goto L_0899C1AC;
L_0899C1AC:;
    f22 = f20;
    goto L_0899C18C;
L_0899C1B4:;
    v1 = LD32(v0+344);
    t_ = v1;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C1C0;
L_0899C1C0:;
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s5 = s5 + 1; goto L_0899C0A4; }
    goto L_0899C1D0;
L_0899C1D0:;
    v0 = LD32(s3+520);
    goto L_0899C1A0;
L_0899C1D8:;
    a0 = s3 + 0;
    f20 = BITSF(0);
    v0 = LD32(v1+288);
    t_ = v0;
    f24 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C1EC;
L_0899C1EC:;
    a0 = v0 + 0;
    v0 = LD32(s4+56);
    v1 = LD32(s0-8);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_0899C23C; }
    goto L_0899C204;
L_0899C204:;
    v0 = LD32(s4+60);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    s0 = D_08B204FC - (1276);
    if (cnd_) { goto L_0899C240; }
    goto L_0899C214;
L_0899C214:;
    v0 = LD32(s4+64);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 1276; goto L_0899C244; }
    goto L_0899C220;
L_0899C220:;
    v0 = a0 << 2;
    v0 = v0 + s4;
    a0 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a1 = LD32(v0);
    goto L_0899C23C;
L_0899C23C:;
    s0 = D_08B204FC - (1276);
    goto L_0899C240;
L_0899C240:;
    a0 = s0 + 1276;
    goto L_0899C244;
L_0899C244:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C24C;
L_0899C24C:;
    cnd_ = v0 != 0;
    if (cnd_) { f24 = BITSF(LD32(v0+24)); goto L_0899C254; }
    goto L_0899C254;
L_0899C254:;
    v1 = LD32(s3);
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C264;
L_0899C264:;
    v1 = LD32(s4+56);
    a0 = v0 + 0;
    v0 = s2 + s1;
    v1 = a0 < v1;
    a2 = LD32(v0);
    cnd_ = v1 == 0;
    a1 = 3507;
    if (cnd_) { goto L_0899C2B8; }
    goto L_0899C280;
L_0899C280:;
    v0 = LD32(s4+60);
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 1276; goto L_0899C2BC; }
    goto L_0899C290;
L_0899C290:;
    v0 = LD32(s4+64);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 1276; goto L_0899C2BC; }
    goto L_0899C29C;
L_0899C29C:;
    v0 = a0 << 2;
    v0 = v0 + s4;
    a0 = LD32(v0+4);
    v1 = a2 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a1 = LD32(v0);
    goto L_0899C2B8;
L_0899C2B8:;
    a0 = s0 + 1276;
    goto L_0899C2BC;
L_0899C2BC:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C2C4;
L_0899C2C4:;
    cnd_ = v0 != 0;
    if (cnd_) { f20 = BITSF(LD32(v0+24)); goto L_0899C2CC; }
    goto L_0899C2CC;
L_0899C2CC:;
    f0 = f20 + f24;
    f20 = f0 * f25;
    goto L_0899C06C;
L_0899C2D8:;
    v0 = D_08AEE858 - (-6056);
    f20 = BITSF(LD32(v0-6056));
    goto L_0899C06C;
}

/* 0899C2E4 */
rv_t func_0899C2E4(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0899C2E4:;
    sp = sp - 48;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0899C418; }
    goto L_0899C320;
L_0899C320:;
    s4 = D_08ADE220 - (-7648);
    { rv_t r_ = func_08806700(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C328;
L_0899C328:;
    v1 = LD32(s4-7648);
    s5 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0899C414; }
    goto L_0899C33C;
L_0899C33C:;
    a2 = s4 - 7648;
    a1 = 0 + 0;
    v0 = a1 + a2;
    goto L_0899C348;
L_0899C348:;
    a0 = LD32(v0);
    v1 = s5 & a0;
    cnd_ = v1 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_0899C3F0; }
    goto L_0899C358;
L_0899C358:;
    v0 = a0 < 0x11u;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_0899C3F0; }
    goto L_0899C364;
L_0899C364:;
    v1 = D_08ADE238 - (-7624);
    v0 = a0 << 2;
    v1 = v1 - 7624;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0899C380u: goto L_0899C380; case 0x0899C3ECu: goto L_0899C3EC; case 0x0899C520u: goto L_0899C520; case 0x0899C52Cu: goto L_0899C52C; case 0x0899C538u: goto L_0899C538; default: rs_break(0, 0x0899c378); }
L_0899C380:;
    v1 = LD32(s1);
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C390;
L_0899C390:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_0899C3F0; }
    goto L_0899C398;
L_0899C398:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    v0 = D_08B1BBCC - (-17460);
    if (cnd_) { goto L_0899C518; }
    goto L_0899C3A4;
L_0899C3A4:;
    v0 = D_08B1BBC8 - (-17464);
    a2 = LD32(v0-17464);
    goto L_0899C3AC;
L_0899C3AC:;
    v0 = D_08B309FC - (2556);
    a1 = LD32(v0+2556);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0899C3D0; }
    goto L_0899C3BC;
L_0899C3BC:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_0899C3D0;
L_0899C3D0:;
    v1 = D_08B30A04 - (2564);
    v0 = LD32(v1+2564);
    s2 = 0xf130000u;
    v0 = v0 - a0;
    v0 = (s32)v0 < (s32)a2;
    cnd_ = v0 == 0;
    s2 = s2 | 0x2b51;
    if (cnd_) { goto L_0899C438; }
    goto L_0899C3EC;
L_0899C3EC:;
    s3 = s3 + 1;
    goto L_0899C3F0;
L_0899C3F0:;
    v1 = s3 << 2;
    v0 = s4 - 7648;
    a2 = v0 + 0;
    v0 = v1 + v0;
    a0 = LD32(v0);
    a1 = v1 + 0;
    v1 = (u32)-1;
    cnd_ = a0 != v1;
    v0 = a1 + a2;
    if (cnd_) { goto L_0899C348; }
    goto L_0899C414;
L_0899C414:;
    goto L_0899C418;
L_0899C418:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0899C438:;
    v1 = LD32(s1);
    ST32(sp, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C44C;
L_0899C44C:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_0899C464;
L_0899C464:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C474;
L_0899C474:;
    a0 = LD32(sp);
    a1 = s2 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C484;
L_0899C484:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+468);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C498;
L_0899C498:;
    a0 = v0 + 0;
    v0 = func_08A66D7C(a0);
    goto L_0899C4A0;
L_0899C4A0:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C4B0;
L_0899C4B0:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C4BC;
L_0899C4BC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899C3EC; }
    goto L_0899C4C4;
L_0899C4C4:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C4D4;
L_0899C4D4:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C4E0;
L_0899C4E0:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_0899C3F0; }
    goto L_0899C4E8;
L_0899C4E8:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C4F8;
L_0899C4F8:;
    a2 = v0 + 0;
    v0 = D_08AEE860 - (-6048);
    f12 = BITSF(LD32(v0-6048));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C510;
L_0899C510:;
    s3 = s3 + 1;
    goto L_0899C3F0;
L_0899C518:;
    a2 = LD32(v0-17460);
    goto L_0899C3AC;
L_0899C520:;
    s2 = 0x875e0000u;
    s2 = s2 | 0x6712;
    goto L_0899C438;
L_0899C52C:;
    s2 = 0x55cd0000u;
    s2 = s2 | 0x9f2e;
    goto L_0899C438;
L_0899C538:;
    s2 = 0xdc2a0000u;
    s2 = s2 | 0xab8e;
    goto L_0899C438;
}

/* 0899C544 */
rv_t func_0899C544(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899C544:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A049C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C558;
L_0899C558:;
    a1 = 2;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0899C578; }
    goto L_0899C568;
L_0899C568:;
    goto L_0899C56C;
L_0899C56C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0899C578:;
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C580;
L_0899C580:;
    a0 = LD32(s0+40);
    a1 = 1;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899C58C;
L_0899C58C:;
    a0 = LD32(s0+40);
    v0 = func_088BB4E4(a0);
    goto L_0899C594;
L_0899C594:;
    v0 = v0 | 0x1000;
    a0 = LD32(s0+40);
    v0 = v0 & 0xffff;
    a1 = v0 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C5A8;
L_0899C5A8:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB264(a0, a1);
    goto L_0899C5B4;
L_0899C5B4:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB234(a0, a1);
    goto L_0899C5C0;
L_0899C5C0:;
    a0 = LD32(s0+40);
    a1 = 16;
    v0 = func_088BB56C(a0, a1);
    goto L_0899C5CC;
L_0899C5CC:;
    goto L_0899C56C;
}

/* 0899C5D4 */
rv_t func_0899C5D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899C5D4:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_0899C604;
L_0899C604:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_089DBDBC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C614;
L_0899C614:;
    a2 = LD32(s2+236);
    s0 = s0 ^ s1;
    s0 = 0 < s0;
    v0 = 0 < a2;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899C680; }
    goto L_0899C630;
L_0899C630:;
    v0 = LD_U8(a2+120);
    a1 = 0 + 0;
    v0 = v0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0899C658; }
    goto L_0899C64C;
L_0899C64C:;
    { rv_t r_ = func_08A199D8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C654;
L_0899C654:;
    a2 = LD32(s2+236);
    goto L_0899C658;
L_0899C658:;
    v0 = LD_U8(a2+121);
    a1 = 0 + 0;
    v0 = v0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0+48);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0899C67C; }
    goto L_0899C674;
L_0899C674:;
    { rv_t r_ = func_08A199D8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C67C;
L_0899C67C:;
    goto L_0899C680;
L_0899C680:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0899C694 */
float func_0899C694(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[704] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 704);
L_0899C694:;
    sp = sp - 704;
    a2 = D_08C2A708 - (-22776);
    s3 = D_08AEE864 - (-6044);
    s0 = a0 + 0;
    f24 = f13;
    v0 = (u32)(s32)LD_S8(a2-22776);
    cnd_ = v0 != 0;
    f23 = f12;
    if (cnd_) { goto L_0899C708; }
    goto L_0899C6E8;
L_0899C6E8:;
    f0 = BITSF(LD32(s3-6044));
    v1 = D_08C2A718 - (-22760);
    a1 = v1 - 22760;
    v0 = 1;
    ST8(a2-22776, v0);
    ST32(v1-22760, 0);
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, 0);
    goto L_0899C708;
L_0899C708:;
    a1 = D_08C2A710 - (-22768);
    v0 = (u32)(s32)LD_S8(a1-22768);
    cnd_ = v0 != 0;
    s5 = D_08C2A724 - (-22748);
    if (cnd_) { goto L_0899C734; }
    goto L_0899C718;
L_0899C718:;
    f0 = BITSF(LD32(s3-6044));
    v1 = s5 - 22748;
    v0 = 1;
    ST32(v1+8, FBITS(f0));
    ST32(s5-22748, 0);
    ST8(a1-22768, v0);
    ST32(v1+4, 0);
    goto L_0899C734;
L_0899C734:;
    v1 = LD32(s0);
    v0 = LD32(v1+452);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C744;
L_0899C744:;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(s3-6044));
    if (cnd_) { goto L_0899CA74; }
    goto L_0899C74C;
L_0899C74C:;
    ST32(sp+16, 0);
    ST32(sp+8, FBITS(f0));
    ST32(sp+20, 0);
    ST32(sp+24, FBITS(f0));
    goto L_0899C75C;
L_0899C75C:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    goto L_0899C764;
L_0899C764:;
    f7 = BITSF(LD32(s0+496));
    f2 = BITSF(LD32(sp));
    v0 = D_08AEE874 - (-6028);
    s1 = D_08B285A0 - (-31328);
    f2 = f2 - f7;
    f1 = BITSF(LD32(s1-31328));
    f0 = BITSF(LD32(v0-6028));
    v1 = s0 + 496;
    v0 = FBITS(f2);
    f6 = f1 * f0;
    f3 = BITSF(LD32(v1+4));
    v0 = (v0 >> 0) & 0x7fffffff;
    f4 = BITSF(LD32(v1+8));
    f5 = BITSF(v0);
    f0 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp+4));
    fcc = FCMP(f5, f6, 14);
    f4 = f0 - f4;
    f3 = f1 - f3;
    v0 = FBITS(f2);
    {u32 a_=sp+(512);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+320, FBITS(f2));
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+324, FBITS(f3));
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    cnd_ = fcc;
    ST32(sp+328, FBITS(f4));
    if (cnd_) { goto L_0899C7E4; }
    goto L_0899C7E0;
L_0899C7E0:;
    f5 = f6;
    goto L_0899C7E4;
L_0899C7E4:;
    v0 = FBITS(f3);
    f1 = f0 * f5;
    {u32 a_=sp+(528);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    f5 = f7 + f1;
    v0 = FBITS(f3);
    fcc = FCMP(f2, f6, 14);
    {v[0]=BITSF(v0);}
    ST32(s0+496, FBITS(f5));
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { f2 = f6; goto L_0899C828; }
    goto L_0899C828;
L_0899C828:;
    v0 = FBITS(f4);
    f2 = f0 * f2;
    f1 = BITSF(LD32(s0+500));
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    f1 = f1 + f2;
    v0 = FBITS(f4);
    fcc = FCMP(f3, f6, 14);
    {u32 a_=sp+(544);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(s0+500, FBITS(f1));
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { f3 = f6; goto L_0899C870; }
    goto L_0899C870;
L_0899C870:;
    f1 = f0 * f3;
    f0 = BITSF(LD32(s0+504));
    {u32 a_=sp+(560);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    f0 = f0 + f1;
    {v[12]=BITSF(v0);}
    a2 = LD32(v1+4);
    f1 = BITSF(0);
    ST32(s0+504, FBITS(f0));
    {v[13]=BITSF(a2);}
    a1 = LD32(v1+8);
    {v[14]=BITSF(a1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = s5 - 22748;
    if (cnd_) { goto L_0899C908; }
    goto L_0899C8BC;
L_0899C8BC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    ST32(v1+8, FBITS(f2));
    a1 = FBITS(f2);
    a2 = FBITS(f0);
    ST32(sp+160, FBITS(f3));
    ST32(v1+4, v0);
    ST32(s0+496, FBITS(f3));
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f2));
    a0 = s5 - 22748;
    goto L_0899C908;
L_0899C908:;
    v0 = LD32(s5-22748);
    v1 = LD32(a0+8);
    {u32 a_=sp+(592);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(576);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(s0+496);
    {v[0]=BITSF(v0);}
    v0 = LD32(a0+4);
    {v[1]=BITSF(a2);}
    {v[5]=BITSF(v0);}
    {v[2]=BITSF(a1);}
    {v[6]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    {u32 a_=sp+(608);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    v0 = D_08AEE87C - (-6020);
    v1 = D_08AEE878 - (-6024);
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    f20 = BITSF(LD32(v0-6020));
    f22 = BITSF(LD32(v1-6024));
    {v[4]=1.57079632679f;}
    f21 = f22 - f20;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    f13 = f21;
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899C988;
L_0899C988:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f2 = f0 + f21;
    if (cnd_) { goto L_0899C9AC; }
    goto L_0899C998;
L_0899C998:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f2 = f0 - f21;
    if (cnd_) { goto L_0899C9AC; }
    goto L_0899C9A8;
L_0899C9A8:;
    f2 = f0;
    goto L_0899C9AC;
L_0899C9AC:;
    f1 = BITSF(LD32(s0+500));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(sp+336, FBITS(f2));
    if (cnd_) { goto L_0899C9CC; }
    goto L_0899C9C4;
L_0899C9C4:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    ST32(sp+336, FBITS(f0));
    goto L_0899C9CC;
L_0899C9CC:;
    a1 = D_08ADE2F0 - (-7440);
    a2 = D_08ADE2F4 - (-7436);
    a1 = a1 - 7440;
    a2 = a2 - 7436;
    a0 = sp + 336;
    f0 = func_0899F814(a0, a1, a2);
    goto L_0899C9E4;
L_0899C9E4:;
    f0 = f0 - f23;
    f2 = BITSF(LD32(s1-31328));
    {u32 a_=sp+(624);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    f2 = f2 * f24;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    f1 = BITSF(v0);
    fcc = FCMP(f0, f2, 14);
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_0899CA2C; }
    goto L_0899CA2C;
L_0899CA2C:;
    f0 = f0 * f1;
    f23 = f23 + f0;
    f0 = f23;
    sp = sp + 704;
    return f0;
L_0899CA74:;
    a0 = s0 + 0;
    f22 = BITSF(LD32(s3-6044));
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CA80;
L_0899CA80:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0899CF58; }
    goto L_0899CA88;
L_0899CA88:;
    v1 = LD32(s0);
    goto L_0899CA8C;
L_0899CA8C:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CA98;
L_0899CA98:;
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f0 = f0 - f22;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    ST32(sp+16, FBITS(f1));
    a0 = 0 + 0;
    {u32 a_=sp+(352);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+68, 0);
    v0 = FBITS(f0);
    ST32(sp+64, FBITS(f0));
    {v[12]=BITSF(v0);}
    {v[13]=BITSF(a0);}
    f2 = BITSF(LD32(v1+44));
    f20 = BITSF(LD32(sp+68));
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+72, FBITS(f2));
    if (cnd_) { goto L_0899CB44; }
    goto L_0899CB08;
L_0899CB08:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
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
    goto L_0899CB44;
L_0899CB44:;
    v1 = LD32(s0);
    s4 = D_08AEE868 - (-6040);
    f12 = BITSF(LD32(s4-6040));
    v0 = LD32(v1-16);
    s1 = sp + 96;
    s2 = sp + 16;
    v0 = s0 + v0;
    a3 = LD32(v0+4);
    s6 = sp + 64;
    t2 = 0x20000000u;
    a1 = s2 + 0;
    a2 = s6 + 0;
    t0 = 1;
    t1 = 4100;
    t2 = t2 | 0x10;
    a0 = s1 + 0;
    func_088350C0(a0, a1, a2, a3, t0, t1, t2, f12);
    goto L_0899CB88;
L_0899CB88:;
    a0 = s1 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CB90;
L_0899CB90:;
    f0 = BITSF(LD32(v0));
    f6 = BITSF(LD32(sp+112));
    f5 = BITSF(LD32(sp+116));
    f3 = BITSF(LD32(sp+108));
    f6 = f6 * f0;
    f4 = BITSF(LD32(sp+100));
    f5 = f5 * f0;
    f3 = f3 * f0;
    v1 = v0 + 0;
    f4 = f4 + f6;
    v0 = D_08AEE86C - (-6036);
    f0 = BITSF(LD32(v0-6036));
    f1 = BITSF(LD32(sp+96));
    f2 = BITSF(LD32(sp+104));
    f0 = f4 - f0;
    f1 = f1 + f3;
    f2 = f2 + f5;
    v0 = LD_U8(v1+32);
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+160, FBITS(f3));
    ST32(sp+164, FBITS(f6));
    ST32(sp+168, FBITS(f5));
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, FBITS(f4));
    cnd_ = v0 == 0;
    ST32(sp+88, FBITS(f2));
    if (cnd_) { goto L_0899CF2C; }
    goto L_0899CC00;
L_0899CC00:;
    v0 = 255;
    f0 = BITSF(v0);
    v0 = D_08AEE870 - (-6032);
    ST32(sp+180, FBITS(f20));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6032));
    ST32(sp+184, FBITS(f20));
    f1 = f1 * f0;
    ST32(sp+188, FBITS(f1));
    ST32(sp+176, FBITS(f1));
    goto L_0899CC28;
L_0899CC28:;
    a0 = D_08ADE27C - (-7556);
    a0 = a0 - 7556;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899CC34;
L_0899CC34:;
    f21 = BITSF(LD32(s3-6044));
    a2 = sp + 176;
    a3 = v0 + 0;
    a0 = s1 + 0;
    a1 = s2 + 0;
    f12 = f21;
    func_0897BFA8(a0, a1, a2, a3, f12);
    goto L_0899CC50;
L_0899CC50:;
    v1 = LD32(s0);
    f12 = BITSF(LD32(s4-6040));
    a2 = D_08C2A718 - (-22760);
    v0 = LD32(v1-16);
    f12 = f22 + f12;
    a0 = sp + 192;
    v0 = s0 + v0;
    a3 = LD32(v0+4);
    a2 = a2 - 22760;
    a1 = s2 + 0;
    t0 = 1;
    t1 = 4100;
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_0899CC84;
L_0899CC84:;
    f0 = BITSF(LD32(sp+192));
    f1 = BITSF(LD32(sp+196));
    v0 = LD32(sp+228);
    ST32(sp+96, FBITS(f0));
    a0 = s1 + 0;
    f0 = BITSF(LD32(sp+200));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f0));
    f0 = BITSF(LD32(sp+208));
    f1 = BITSF(LD32(sp+204));
    ST32(sp+132, v0);
    ST32(sp+112, FBITS(f0));
    f0 = BITSF(LD32(sp+216));
    v0 = LD32(sp+236);
    ST32(sp+108, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    f1 = BITSF(LD32(sp+212));
    f0 = BITSF(LD32(sp+224));
    v1 = LD32(sp+240);
    ST32(sp+116, FBITS(f1));
    ST32(sp+128, FBITS(f0));
    f1 = BITSF(LD32(sp+220));
    f0 = BITSF(LD32(sp+232));
    ST32(sp+140, v0);
    v0 = LD32(sp+244);
    ST32(sp+144, v1);
    ST32(sp+124, FBITS(f1));
    ST32(sp+136, FBITS(f0));
    ST32(sp+148, v0);
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CCFC;
L_0899CCFC:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_0899CD20; }
    goto L_0899CD0C;
L_0899CD0C:;
    ST32(sp+8, FBITS(f21));
    ST32(sp+320, 0);
    ST32(sp+324, 0);
    ST32(sp+328, FBITS(f21));
    goto L_0899C75C;
L_0899CD20:;
    f5 = BITSF(LD32(sp+108));
    f4 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(sp+116));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp+96));
    f1 = BITSF(LD32(sp+100));
    f0 = BITSF(LD32(sp+104));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    f20 = BITSF(0);
    a0 = D_08ADE288 - (-7544);
    a0 = a0 - 7544;
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f1));
    ST32(sp+168, FBITS(f0));
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f3));
    ST32(sp+264, FBITS(f20));
    ST32(sp+260, FBITS(f20));
    ST32(sp+256, FBITS(f21));
    ST32(sp+268, FBITS(f21));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899CD88;
L_0899CD88:;
    a3 = v0 + 0;
    a2 = sp + 256;
    f12 = f21;
    a0 = s2 + 0;
    a1 = sp + 160;
    func_0897BFA8(a0, a1, a2, a3, f12);
    goto L_0899CDA0;
L_0899CDA0:;
    a0 = sp + 272;
    a1 = s6 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CDAC;
L_0899CDAC:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CDBC;
L_0899CDBC:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(sp+160));
    f6 = BITSF(LD32(sp+164));
    f4 = BITSF(LD32(sp+168));
    f7 = f7 - f0;
    f6 = f6 - f1;
    f4 = f4 - f2;
    {u32 a_=sp+(416);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a0 = LD32(sp+272);
    v1 = LD32(sp+276);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+300);
    {u32 a_=sp+(432);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(448);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(464);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(sp+280);
    {v[49]=BITSF(v1);}
    v1 = LD32(sp+288);
    {v[50]=BITSF(a0);}
    a0 = LD32(sp+284);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(a0);}
    a0 = LD32(sp+292);
    {v[17]=BITSF(v1);}
    v1 = LD32(sp+296);
    {v[18]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {v[33]=BITSF(v0);}
    v1 = LD32(sp+304);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(v1);}
    {u32 a_=sp+(480);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = FBITS(f7);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[16]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[17]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[4]*t1;o0+=v[8]*t2;float o1=0;o1+=v[1]*t0;o1+=v[5]*t1;o1+=v[9]*t2;float o2=0;o2+=v[2]*t0;o2+=v[6]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(496);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+80, FBITS(f7));
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    fcc = FCMP(f0, f20, 2);
    ST32(sp+320, FBITS(f3));
    ST32(sp+324, FBITS(f2));
    ST32(sp+328, FBITS(f5));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f5));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0899C764; }
    goto L_0899CEEC;
L_0899CEEC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+328, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+320, FBITS(f2));
    ST32(sp+324, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_0899C764;
L_0899CF2C:;
    v0 = 255;
    f0 = BITSF(v0);
    v0 = D_08AEE870 - (-6032);
    ST32(sp+176, FBITS(f20));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-6032));
    ST32(sp+184, FBITS(f20));
    f1 = f1 * f0;
    ST32(sp+188, FBITS(f1));
    ST32(sp+180, FBITS(f1));
    goto L_0899CC28;
L_0899CF58:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CF60;
L_0899CF60:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_0899CA8C; }
    goto L_0899CF6C;
L_0899CF6C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899CF74;
L_0899CF74:;
    a0 = LD32(v0+16);
    v1 = LD32(a0+4);
    a0 = a0 + 4;
    ST32(sp+32, v1);
    v0 = LD32(a0+4);
    f0 = BITSF(LD32(sp+32));
    ST32(sp+36, v0);
    v1 = LD32(a0+8);
    f2 = BITSF(LD32(sp+36));
    ST32(sp+40, v1);
    f2 = f2 - f0;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(sp+40));
    ST32(sp+44, v0);
    v1 = LD32(a0+16);
    f1 = BITSF(LD32(sp+44));
    ST32(sp+48, v1);
    f1 = f1 - f0;
    v0 = LD32(a0+20);
    ST32(sp+16, FBITS(f2));
    f22 = f1;
    ST32(sp+52, v0);
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+48));
    f0 = f0 - f1;
    ST32(sp+24, FBITS(f0));
    goto L_0899CA88;
}

/* 0899CFE4 */
void func_0899CFE4(u32 a0, u32 a1)
{
    u32 t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899CFE4:;
    sp = sp - 16;
    {v[112]=BITSF(LD32(a1+(0)));}
    {v[113]=BITSF(LD32(a1+(4)));}
    {v[114]=BITSF(LD32(a1+(8)));}
    {v[116]=BITSF(LD32(a1+(12)));}
    {v[117]=BITSF(LD32(a1+(16)));}
    {v[118]=BITSF(LD32(a1+(20)));}
    {v[120]=BITSF(LD32(a1+(24)));}
    {v[121]=BITSF(LD32(a1+(28)));}
    {v[122]=BITSF(LD32(a1+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D268; }
    goto L_0899D024;
L_0899D024:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D1A8; }
    goto L_0899D034;
L_0899D034:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899D0CC; }
    goto L_0899D05C;
L_0899D05C:;
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
    if (cnd_) { goto L_0899D0A8; }
    goto L_0899D098;
L_0899D098:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899D0A8;
L_0899D0A8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D0EC; }
    goto L_0899D0B8;
L_0899D0B8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899D0EC; }
    goto L_0899D0C8;
L_0899D0C8:;
    goto L_0899D0CC;
L_0899D0CC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D0EC; }
    goto L_0899D0E0;
L_0899D0E0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899D0EC;
L_0899D0EC:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899D17C; }
    goto L_0899D10C;
L_0899D10C:;
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
    if (cnd_) { goto L_0899D158; }
    goto L_0899D148;
L_0899D148:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899D158;
L_0899D158:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D19C; }
    goto L_0899D168;
L_0899D168:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899D19C; }
    goto L_0899D178;
L_0899D178:;
    goto L_0899D17C;
L_0899D17C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D19C; }
    goto L_0899D190;
L_0899D190:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899D19C;
L_0899D19C:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899D320; }
    goto L_0899D1A4;
L_0899D1A4:;
    goto L_0899D1A8;
L_0899D1A8:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899D23C; }
    goto L_0899D1CC;
L_0899D1CC:;
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
    if (cnd_) { goto L_0899D218; }
    goto L_0899D208;
L_0899D208:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899D218;
L_0899D218:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D25C; }
    goto L_0899D228;
L_0899D228:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899D25C; }
    goto L_0899D238;
L_0899D238:;
    goto L_0899D23C;
L_0899D23C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D25C; }
    goto L_0899D250;
L_0899D250:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899D25C;
L_0899D25C:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899D320; }
    goto L_0899D264;
L_0899D264:;
    goto L_0899D268;
L_0899D268:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899D2FC; }
    goto L_0899D28C;
L_0899D28C:;
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
    if (cnd_) { goto L_0899D2D8; }
    goto L_0899D2C8;
L_0899D2C8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899D2D8;
L_0899D2D8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D31C; }
    goto L_0899D2E8;
L_0899D2E8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899D31C; }
    goto L_0899D2F8;
L_0899D2F8:;
    goto L_0899D2FC;
L_0899D2FC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899D31C; }
    goto L_0899D310;
L_0899D310:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899D31C;
L_0899D31C:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_0899D320;
L_0899D320:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    ST32(sp, 0);
    ST32(sp+8, 0);
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
    {ST32(a0+(240),FBITS(v[96]));}
    {ST32(a0+(244),FBITS(v[97]));}
    {ST32(a0+(248),FBITS(v[98]));}
    {ST32(a0+(252),FBITS(v[100]));}
    {ST32(a0+(256),FBITS(v[101]));}
    {ST32(a0+(260),FBITS(v[102]));}
    {ST32(a0+(264),FBITS(v[104]));}
    {ST32(a0+(268),FBITS(v[105]));}
    {ST32(a0+(272),FBITS(v[106]));}
    sp = sp + 16;
    return;
}

/* 0899D3D0 */
u32 func_0899D3D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_0899D3D0:;
    sp = sp - 192;
    s1 = a1 + 0;
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D3FC;
L_0899D3FC:;
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    f12 = f20;
    a1 = sp + 16;
    ST32(sp, FBITS(f0));
    a0 = s1 + 0;
    a2 = 0 + 0;
    v0 = LD32(v1+56);
    t_ = v0;
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D430;
L_0899D430:;
    v1 = LD32(s0);
    a1 = 0x5a30000u;
    a1 = a1 | 0xe701;
    v0 = LD32(v1-12);
    a2 = sp + 0;
    a3 = 0 + 0;
    s0 = s0 + v0;
    v1 = LD32(s0);
    a0 = s0 + 0;
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D464;
L_0899D464:;
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f12 = f20;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    f2 = f2 - f0;
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    ST32(sp+32, FBITS(f4));
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+36, FBITS(f3));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_0899D510; }
    goto L_0899D4CC;
L_0899D4CC:;
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
    goto L_0899D510;
L_0899D510:;
    s0 = sp + 64;
    a2 = sp + 32;
    a1 = sp + 0;
    a3 = 999;
    t0 = 0 + 0;
    a0 = s0 + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_0899D52C;
L_0899D52C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D534;
L_0899D534:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_0899D614; }
    goto L_0899D544;
L_0899D544:;
    f1 = BITSF(LD32(v1));
    f4 = BITSF(LD32(sp+32));
    v0 = LD32(s1);
    f0 = BITSF(LD32(sp));
    f4 = f4 * f1;
    v1 = LD32(v0-12);
    f3 = BITSF(LD32(sp+40));
    f2 = BITSF(LD32(sp+36));
    f5 = f0 + f4;
    v1 = s1 + v1;
    f0 = BITSF(LD32(v1+120));
    f3 = f3 * f1;
    f2 = f2 * f1;
    fcc = FCMP(f0, f5, 14);
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+128, FBITS(f4));
    f1 = f1 + f2;
    f6 = f0 + f3;
    v0 = v1 + 120;
    ST32(sp+132, FBITS(f2));
    ST32(sp+136, FBITS(f3));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_0899D610; }
    goto L_0899D5AC;
L_0899D5AC:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_0899D614; }
    goto L_0899D5C0;
L_0899D5C0:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_0899D614; }
    goto L_0899D5D4;
L_0899D5D4:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_0899D614; }
    goto L_0899D5E8;
L_0899D5E8:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f6, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = 0 + 0; goto L_0899D614; }
    goto L_0899D5FC;
L_0899D5FC:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f6, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0899D618; }
    goto L_0899D610;
L_0899D610:;
    a0 = 0 + 0;
    goto L_0899D614;
L_0899D614:;
    goto L_0899D618;
L_0899D618:;
    v0 = a0 + 0;
    sp = sp + 192;
    return v0;
}

/* 0899D630 */
u32 func_0899D630(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899D630:;
    sp = sp - 32;
    s1 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+424);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899D658;
L_0899D658:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0899D704; }
    goto L_0899D664;
L_0899D664:;
    v1 = LD32(v0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D674;
L_0899D674:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0899D6AC; }
    goto L_0899D67C;
L_0899D67C:;
    v0 = LD32(s1+520);
    goto L_0899D680;
L_0899D680:;
    v1 = D_08AEE880 - (-6016);
    f0 = BITSF(LD32(v1-6016));
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(s1+520, v0);
    goto L_0899D690;
L_0899D690:;
    ST32(s1+380, FBITS(f0));
    goto L_0899D694;
L_0899D694:;
    v0 = a2 + 0;
    sp = sp + 32;
    return v0;
L_0899D6AC:;
    f1 = BITSF(LD32(s1+380));
    f0 = BITSF(0);
    a1 = s0 + 0;
    a0 = s1 + 0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a2 = 1;
    if (cnd_) { goto L_0899D694; }
    goto L_0899D6CC;
L_0899D6CC:;
    v0 = func_0899D3D0(a0, a1);
    goto L_0899D6D4;
L_0899D6D4:;
    cnd_ = v0 == 0;
    v0 = LD32(s1+520);
    if (cnd_) { goto L_0899D6E4; }
    goto L_0899D6DC;
L_0899D6DC:;
    a2 = 1;
    goto L_0899D680;
L_0899D6E4:;
    a0 = 0xde350000u;
    a1 = 0x203e0000u;
    v1 = v0 | 0x100;
    v0 = v0 & 0x100;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x217d;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0899D70C; }
    goto L_0899D704;
L_0899D704:;
    a2 = 0 + 0;
    goto L_0899D694;
L_0899D70C:;
    ST32(s1+520, v1);
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899D718;
L_0899D718:;
    v0 = D_08AEE884 - (-6012);
    f12 = BITSF(LD32(v0-6012));
    a0 = LD32(sp);
    a1 = 0x53630000u;
    a1 = a1 | 0x9b76;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D730;
L_0899D730:;
    a2 = 1;
    goto L_0899D690;
}

/* 0899D738 */
u64 func_0899D738(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_0899D738:;
    sp = sp - 288;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0899D778; }
    goto L_0899D75C;
L_0899D75C:;
    goto L_0899D760;
L_0899D760:;
    sp = sp + 288;
    return (u64)v0 | ((u64)v1 << 32);
L_0899D778:;
    v0 = LD32(a0+520);
    v1 = LD32(a0);
    v0 = (v0 & ~(0x1u << 17)) | ((0 & 0x1) << 17);
    ST32(a0+520, v0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D794;
L_0899D794:;
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0899D760; }
    goto L_0899D7A0;
L_0899D7A0:;
    v1 = LD32(s1);
    v0 = LD32(v1+268);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D7B0;
L_0899D7B0:;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899D7C4;
L_0899D7C4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899D75C; }
    goto L_0899D7CC;
L_0899D7CC:;
    v1 = LD32(s1);
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D7DC;
L_0899D7DC:;
    cnd_ = v0 == 0;
    v0 = D_08B159FC - (23036);
    if (cnd_) { goto L_0899D75C; }
    goto L_0899D7E4;
L_0899D7E4:;
    v1 = LD32(v0+23036);
    f20 = BITSF(0);
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = BITSF(LD32(v1+20));
    ST32(sp+16, FBITS(f0));
    v0 = FBITS(f0);
    {v[12]=BITSF(v0);}
    f1 = BITSF(LD32(v1+32));
    ST32(sp+20, FBITS(f1));
    v0 = FBITS(f1);
    {v[13]=BITSF(v0);}
    f2 = BITSF(LD32(v1+44));
    v1 = FBITS(f2);
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_0899D888; }
    goto L_0899D850;
L_0899D850:;
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
    goto L_0899D888;
L_0899D888:;
    v0 = LD32(s0);
    a1 = sp + 32;
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    f12 = f20;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899D8A4;
L_0899D8A4:;
    a0 = s1 + 0;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899D8AC;
L_0899D8AC:;
    cnd_ = v0 != 0;
    s2 = D_08AEE888 - (-6008);
    if (cnd_) { goto L_0899DA1C; }
    goto L_0899D8B4;
L_0899D8B4:;
    f0 = BITSF(LD32(sp));
    goto L_0899D8B8;
L_0899D8B8:;
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    f2 = f2 - f0;
    v1 = FBITS(f3);
    {v[13]=BITSF(v1);}
    ST32(sp+112, FBITS(f4));
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+116, FBITS(f3));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+120, FBITS(f2));
    if (cnd_) { goto L_0899D950; }
    goto L_0899D918;
L_0899D918:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+128, v1);
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f3));
    ST32(sp+112, v1);
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f3));
    goto L_0899D950;
L_0899D950:;
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+16);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+20);
    {v[1]=BITSF(v0);}
    v0 = D_08AEE88C - (-6004);
    f2 = BITSF(LD32(s2-6008));
    f0 = BITSF(LD32(v0-6004));
    a0 = sp + 144;
    a1 = sp + 148;
    a2 = sp + 152;
    v1 = LD32(sp+24);
    ST32(sp+152, FBITS(f2));
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    ST32(sp+148, FBITS(f0));
    {v1=FBITS(v[4]);}
    ST32(sp+144, v1);
    f0 = func_0899F814(a0, a1, a2);
    goto L_0899D9B8;
L_0899D9B8:;
    v0 = D_08AEE890 - (-6000);
    v1 = D_08AEE894 - (-5996);
    f1 = BITSF(LD32(v0-6000));
    f2 = BITSF(LD32(v1-5996));
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+144, FBITS(f0));
    f1 = f1 * f2;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0899D760; }
    goto L_0899DA08;
L_0899DA08:;
    v0 = LD32(s1+520);
    v1 = 0x20000u;
    v0 = v0 | v1;
    ST32(s1+520, v0);
    goto L_0899D760;
L_0899DA1C:;
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+40));
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s2-6008));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    f1 = f1 - f0;
    v1 = FBITS(f2);
    {v[1]=BITSF(v1);}
    v1 = LD32(s1);
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = LD32(v1-16);
    s0 = sp + 48;
    a2 = sp + 16;
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    a1 = sp + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    t0 = 0 + 0;
    t1 = 0x8000;
    f12 = f0 + f4;
    a0 = s0 + 0;
    ST32(sp+112, FBITS(f3));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f1));
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_0899DAAC;
L_0899DAAC:;
    a0 = s0 + 0;
    v0 = func_08834F00(a0);
    goto L_0899DAB4;
L_0899DAB4:;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0899D760; }
    goto L_0899DAC0;
L_0899DAC0:;
    f0 = BITSF(LD32(sp));
    goto L_0899D8B8;
}

/* 0899DAC8 */
rv_t func_0899DAC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899DAC8:;
    sp = sp - 32;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0899DAEC; }
    goto L_0899DAE0;
L_0899DAE0:;
    v0 = LD32(a0+92);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0899DB70; }
    goto L_0899DAEC;
L_0899DAEC:;
    v1 = LD32(s0);
    goto L_0899DAF0;
L_0899DAF0:;
    v0 = LD32(v1+200);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899DAFC;
L_0899DAFC:;
    a0 = (u32)-1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899DB1C; }
    goto L_0899DB08;
L_0899DB08:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0899DB1C:;
    ST32(sp, 0);
    v0 = func_08A5FB08(a0);
    goto L_0899DB24;
L_0899DB24:;
    a0 = 0xde350000u;
    a1 = v0 + 0;
    a0 = a0 | 0x46b6;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899DB38;
L_0899DB38:;
    v0 = D_08AEE898 - (-5992);
    f12 = BITSF(LD32(v0-5992));
    a0 = LD32(sp);
    a1 = 0x6e6b0000u;
    a1 = a1 | 0x3925;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899DB50;
L_0899DB50:;
    f1 = BITSF(LD32(s0+376));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0899DB68; }
    goto L_0899DB64;
L_0899DB64:;
    v0 = 0 + 0;
    goto L_0899DB68;
L_0899DB68:;
    v1 = v0 + 0;
    goto L_0899DB08;
L_0899DB70:;
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899DB78;
L_0899DB78:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+520); goto L_0899DB98; }
    goto L_0899DB80;
L_0899DB80:;
    v0 = LD32(s0+92);
    v1 = 1;
    a0 = LD32(v0+12);
    cnd_ = a0 != v1;
    if (cnd_) { v1 = LD32(s0); goto L_0899DAF0; }
    goto L_0899DB94;
L_0899DB94:;
    v0 = LD32(s0+520);
    goto L_0899DB98;
L_0899DB98:;
    v1 = (v0 >> 17) & 0x1;
    goto L_0899DB08;
}

/* 0899DBA0 */
u32 func_0899DBA0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_0899DBA0:;
    sp = sp - 400;
    v1 = LD32(a0+236);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0899E19C; }
    goto L_0899DBC4;
L_0899DBC4:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0899E19C; }
    goto L_0899DBDC;
L_0899DBDC:;
    v0 = LD32(a0);
    f21 = BITSF(0);
    v1 = LD32(v0+56);
    f12 = f21;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899DC04;
L_0899DC04:;
    a1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(a1+244);
    t_ = v0;
    f20 = BITSF(LD32(sp+4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899DC18;
L_0899DC18:;
    f0 = BITSF(LD32(v0+8));
    v1 = LD32(s1);
    f1 = BITSF(LD32(v0));
    ST32(sp+8, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp, FBITS(f1));
    v0 = LD32(v1+92);
    t_ = v0;
    ST32(sp+4, FBITS(f20));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899DC3C;
L_0899DC3C:;
    v1 = LD32(s1);
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
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DEC0; }
    goto L_0899DC7C;
L_0899DC7C:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DE00; }
    goto L_0899DC8C;
L_0899DC8C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899DD24; }
    goto L_0899DCB4;
L_0899DCB4:;
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
    if (cnd_) { goto L_0899DD00; }
    goto L_0899DCF0;
L_0899DCF0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899DD00;
L_0899DD00:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DD44; }
    goto L_0899DD10;
L_0899DD10:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899DD44; }
    goto L_0899DD20;
L_0899DD20:;
    goto L_0899DD24;
L_0899DD24:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DD44; }
    goto L_0899DD38;
L_0899DD38:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899DD44;
L_0899DD44:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899DDD4; }
    goto L_0899DD64;
L_0899DD64:;
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
    if (cnd_) { goto L_0899DDB0; }
    goto L_0899DDA0;
L_0899DDA0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899DDB0;
L_0899DDB0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DDF4; }
    goto L_0899DDC0;
L_0899DDC0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899DDF4; }
    goto L_0899DDD0;
L_0899DDD0:;
    goto L_0899DDD4;
L_0899DDD4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DDF4; }
    goto L_0899DDE8;
L_0899DDE8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899DDF4;
L_0899DDF4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899DF78; }
    goto L_0899DDFC;
L_0899DDFC:;
    goto L_0899DE00;
L_0899DE00:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899DE94; }
    goto L_0899DE24;
L_0899DE24:;
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
    if (cnd_) { goto L_0899DE70; }
    goto L_0899DE60;
L_0899DE60:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899DE70;
L_0899DE70:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DEB4; }
    goto L_0899DE80;
L_0899DE80:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899DEB4; }
    goto L_0899DE90;
L_0899DE90:;
    goto L_0899DE94;
L_0899DE94:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DEB4; }
    goto L_0899DEA8;
L_0899DEA8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899DEB4;
L_0899DEB4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899DF78; }
    goto L_0899DEBC;
L_0899DEBC:;
    goto L_0899DEC0;
L_0899DEC0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899DF54; }
    goto L_0899DEE4;
L_0899DEE4:;
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
    if (cnd_) { goto L_0899DF30; }
    goto L_0899DF20;
L_0899DF20:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899DF30;
L_0899DF30:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DF74; }
    goto L_0899DF40;
L_0899DF40:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899DF74; }
    goto L_0899DF50;
L_0899DF50:;
    goto L_0899DF54;
L_0899DF54:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899DF74; }
    goto L_0899DF68;
L_0899DF68:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899DF74;
L_0899DF74:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_0899DF78;
L_0899DF78:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    ST32(sp+16, FBITS(f21));
    a1 = 0x10000u;
    a2 = sp + 80;
    a0 = LD32(v1-12);
    a1 = a1 | 0xa7d2;
    a3 = 0 + 0;
    a0 = s1 + a0;
    v1 = LD32(a0);
    t0 = 1;
    t1 = (u32)-1;
    v0 = LD32(v1+60);
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
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
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    {ST32(sp+(44),FBITS(v[100]));}
    {ST32(sp+(48),FBITS(v[101]));}
    {ST32(sp+(52),FBITS(v[102]));}
    {ST32(sp+(56),FBITS(v[104]));}
    {ST32(sp+(60),FBITS(v[105]));}
    t_ = v0;
    {ST32(sp+(64),FBITS(v[106]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E048;
L_0899E048:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899E1A4; }
    goto L_0899E050;
L_0899E050:;
    f6 = BITSF(LD32(sp+4));
    goto L_0899E054;
L_0899E054:;
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+80));
    f3 = BITSF(LD32(sp+84));
    f2 = BITSF(LD32(sp+88));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+8));
    f3 = f3 - f6;
    {u32 a_=sp+(288);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = f2 - f0;
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+144, FBITS(f4));
    f12 = BITSF(0);
    fcc = FCMP(f0, f21, 2);
    ST32(sp+148, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+152, FBITS(f2));
    if (cnd_) { goto L_0899E0F8; }
    goto L_0899E0B4;
L_0899E0B4:;
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
    ST32(sp+136, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, v0);
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f3));
    goto L_0899E0F8;
L_0899E0F8:;
    v1 = LD32(s1);
    s0 = sp + 160;
    a2 = sp + 144;
    v0 = LD32(v1-16);
    a1 = sp + 0;
    t0 = 0 + 0;
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    t1 = 0 + 0;
    a0 = s0 + 0;
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_0899E124;
L_0899E124:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E12C;
L_0899E12C:;
    a0 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0899E180; }
    goto L_0899E13C;
L_0899E13C:;
    v1 = a0 + 20;
    f3 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(a0+20));
    v0 = FBITS(f3);
    ST32(sp+132, FBITS(f3));
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    v0 = D_08AEE8A0 - (-5984);
    f0 = BITSF(LD32(v0-5984));
    ST32(sp+128, FBITS(f2));
    v0 = 1;
    fcc = FCMP(f1, f0, 12);
    f0 = BITSF(LD32(v1+8));
    cnd_ = fcc;
    ST32(sp+136, FBITS(f0));
    if (cnd_) { goto L_0899E17C; }
    goto L_0899E178;
L_0899E178:;
    v0 = 0 + 0;
    goto L_0899E17C;
L_0899E17C:;
    v0 = v0 ^ 0x1;
    goto L_0899E180;
L_0899E180:;
    sp = sp + 400;
    return v0;
L_0899E19C:;
    v0 = 1;
    goto L_0899E180;
L_0899E1A4:;
    v0 = LD32(s1);
    a1 = 0x10000u;
    a2 = sp + 96;
    a0 = LD32(v0-12);
    a1 = a1 | 0x9140;
    a3 = 0 + 0;
    a0 = s1 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E1D4;
L_0899E1D4:;
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {u32 a_=sp+(240);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(224);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[49]=BITSF(v0);}
    v1 = LD32(sp+40);
    v0 = LD32(sp+48);
    {v[50]=BITSF(v1);}
    {v[20]=BITSF(s0);}
    v1 = LD32(sp+44);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[21]=BITSF(s0);}
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(sp+60);
    v0 = LD32(sp+64);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(v0);}
    v0 = 0x3f800000u;
    {v[22]=BITSF(v0);}
    v0 = D_08AEE89C - (-5988);
    f0 = BITSF(LD32(v0-5988));
    {u32 a_=sp+(352);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    f6 = BITSF(LD32(sp+4));
    ST32(sp+136, FBITS(f0));
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    f3 = BITSF(LD32(sp+96));
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    f0 = BITSF(LD32(sp+104));
    {v0=FBITS(v[18]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f1 = BITSF(v0);
    f3 = f3 + f2;
    f0 = f0 + f4;
    f5 = f6 + f1;
    ST32(sp+100, FBITS(f6));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f5));
    ST32(sp+88, FBITS(f0));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f4));
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f4));
    ST32(sp+144, FBITS(f3));
    ST32(sp+148, FBITS(f5));
    ST32(sp+152, FBITS(f0));
    goto L_0899E054;
}

/* 0899E2C8 */
void func_0899E2C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899E2C8:;
    sp = sp - 32;
    s3 = a0 + 0;
    v0 = LD32(a0+444);
    cnd_ = a1 == v0;
    s2 = a1 + 0;
    if (cnd_) { goto L_0899E39C; }
    goto L_0899E2F0;
L_0899E2F0:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0899E3A0; }
    goto L_0899E308;
L_0899E308:;
    cnd_ = a1 == 0;
    a1 = 0x300000u;
    if (cnd_) { goto L_0899E554; }
    goto L_0899E310;
L_0899E310:;
    a1 = a1 | 0xcde0;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E318;
L_0899E318:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899E3B8; }
    goto L_0899E320;
L_0899E320:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E334;
L_0899E334:;
    cnd_ = v0 != 0;
    v0 = D_08B3071C - (1820);
    if (cnd_) { goto L_0899E4E4; }
    goto L_0899E33C;
L_0899E33C:;
    v1 = LD32(v0+1820);
    cnd_ = v1 == 0;
    a3 = v0 + 1820;
    if (cnd_) { goto L_0899E374; }
    goto L_0899E348;
L_0899E348:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0899E350;
L_0899E350:;
    a0 = v0 + 40;
    a1 = v0 + 36;
    a2 = v0 + 4;
    v0 = s2 < v1;
    cnd_ = v1 == s2;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0899E380; }
    goto L_0899E368;
L_0899E368:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0899E350; }
    goto L_0899E374;
L_0899E374:;
    a0 = LD32(a3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0899E4D0; }
    goto L_0899E380;
L_0899E380:;
    cnd_ = a2 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899E4C0; }
    goto L_0899E388;
L_0899E388:;
    a1 = s2 + 0;
    func_0880F2E0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0899E390;
L_0899E390:;
    cnd_ = s0 == 0;
    a0 = D_08B3071C - (1820);
    if (cnd_) { goto L_0899E3BC; }
    goto L_0899E398;
L_0899E398:;
    ST32(s3+444, s2);
    goto L_0899E39C;
L_0899E39C:;
    goto L_0899E3A0;
L_0899E3A0:;
    sp = sp + 32;
    return;
L_0899E3B8:;
    a0 = D_08B3071C - (1820);
    goto L_0899E3BC;
L_0899E3BC:;
    a0 = a0 + 1820;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E3CC;
L_0899E3CC:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0899E468; }
    goto L_0899E3D4;
L_0899E3D4:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E3DC;
L_0899E3DC:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    func_0880F08C(a0, a1);
    goto L_0899E3EC;
L_0899E3EC:;
    cnd_ = s0 == 0;
    a2 = 0x300000u;
    if (cnd_) { goto L_0899E424; }
    goto L_0899E3F4;
L_0899E3F4:;
    v0 = LD32(s3);
    a0 = LD32(s0);
    v1 = LD32(v0-12);
    v0 = LD32(a0+12);
    a2 = a2 | 0xcde0;
    v1 = s3 + v1;
    a1 = LD32(v1+100);
    a0 = s0 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E41C;
L_0899E41C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+56); goto L_0899E444; }
    goto L_0899E424;
L_0899E424:;
    cnd_ = s1 == 0;
    if (cnd_) {  goto L_0899E3A0; }
    goto L_0899E42C;
L_0899E42C:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E43C;
L_0899E43C:;
    goto L_0899E3A0;
L_0899E444:;
    v1 = 0x40000000u;
    a1 = 0x300000u;
    v0 = v0 | v1;
    ST32(s0+56, v0);
    a0 = s0 + 0;
    a1 = a1 | 0xcde0;
    func_0880D928(a0, a1);
    goto L_0899E460;
L_0899E460:;
    ST32(s3+444, s2);
    goto L_0899E39C;
L_0899E468:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = s2 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E478;
L_0899E478:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899E3EC; }
    goto L_0899E480;
L_0899E480:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E488;
L_0899E488:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E498;
L_0899E498:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E4A0;
L_0899E4A0:;
    s1 = s0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    s0 = v0 + 0;
    f0 = func_089673C4(a0, a1, a2);
    goto L_0899E4B8;
L_0899E4B8:;
    goto L_0899E3EC;
L_0899E4C0:;
    a1 = 1;
    { rv_t r_ = func_0880D8EC(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E4C8;
L_0899E4C8:;
    s0 = 0 + 0;
    goto L_0899E390;
L_0899E4D0:;
    a2 = 1;
    a1 = s2 + 0;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E4DC;
L_0899E4DC:;
    a2 = v0 + 0;
    goto L_0899E380;
L_0899E4E4:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = s2 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E4F4;
L_0899E4F4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899E514; }
    goto L_0899E4FC;
L_0899E4FC:;
    v1 = LD32(s0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E50C;
L_0899E50C:;
    goto L_0899E390;
L_0899E514:;
    v1 = LD32(s0);
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E524;
L_0899E524:;
    s1 = v0 + 0;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E534;
L_0899E534:;
    cnd_ = s1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0899E3B8; }
    goto L_0899E53C;
L_0899E53C:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E54C;
L_0899E54C:;
    a0 = D_08B3071C - (1820);
    goto L_0899E3BC;
L_0899E554:;
    a1 = a1 | 0xcde0;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E55C;
L_0899E55C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0899E398; }
    goto L_0899E564;
L_0899E564:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E578;
L_0899E578:;
    s1 = v0 + 0;
    a0 = s0 + 0;
    a1 = 1;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E588;
L_0899E588:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s3+444, s2); goto L_0899E39C; }
    goto L_0899E590;
L_0899E590:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E5A0;
L_0899E5A0:;
    ST32(s3+444, s2);
    goto L_0899E39C;
}

/* 0899E5A8 */
float func_0899E5A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0899E5A8:;
    sp = sp - 48;
    s3 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0899E634; }
    goto L_0899E5DC;
L_0899E5DC:;
    a1 = 0x7e770000u;
    a1 = a1 | 0x9b80;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E5E8;
L_0899E5E8:;
    cnd_ = s0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0899E650; }
    goto L_0899E5F0;
L_0899E5F0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0899E638; }
    goto L_0899E5F8;
L_0899E5F8:;
    v1 = LD32(s1);
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E608;
L_0899E608:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E61C;
L_0899E61C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0899E638; }
    goto L_0899E624;
L_0899E624:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E634;
L_0899E634:;
    goto L_0899E638;
L_0899E638:;
    sp = sp + 48;
    return f0;
L_0899E650:;
    a0 = 0xd0cd0000u;
    a1 = s0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E668;
L_0899E668:;
    a1 = 0xe9770000u;
    a0 = LD32(sp);
    a1 = a1 | 0x2a8d;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E67C;
L_0899E67C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899E5F0; }
    goto L_0899E684;
L_0899E684:;
    cnd_ = s1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0899E6A4; }
    goto L_0899E68C;
L_0899E68C:;
    v1 = LD32(s1);
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E69C;
L_0899E69C:;
    goto L_0899E638;
L_0899E6A4:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E6AC;
L_0899E6AC:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E6BC;
L_0899E6BC:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E6C4;
L_0899E6C4:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    f0 = func_089673C4(a0, a1, a2);
    goto L_0899E6D8;
L_0899E6D8:;
    cnd_ = s1 == 0;
    a2 = 0x7e770000u;
    if (cnd_) { goto L_0899E634; }
    goto L_0899E6E0;
L_0899E6E0:;
    v0 = LD32(s3);
    a0 = LD32(s1);
    v1 = LD32(v0-12);
    v0 = LD32(a0+12);
    a2 = a2 | 0x9b80;
    v1 = s3 + v1;
    a1 = LD32(v1+100);
    a0 = s1 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E708;
L_0899E708:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0899E638; }
    goto L_0899E710;
L_0899E710:;
    v0 = LD32(s1+56);
    v1 = 0x40000000u;
    a1 = 0x7e770000u;
    v0 = v0 | v1;
    ST32(s1+56, v0);
    a0 = s1 + 0;
    a1 = a1 | 0x9b80;
    func_0880D928(a0, a1);
    goto L_0899E730;
L_0899E730:;
    goto L_0899E638;
}

/* 0899E738 */
float func_0899E738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0899E738:;
    sp = sp - 48;
    s3 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    s0 = a1 & 0xff;
    if (cnd_) { goto L_0899E7C8; }
    goto L_0899E76C;
L_0899E76C:;
    a1 = 0xae20000u;
    a1 = a1 | 0x6e48;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E778;
L_0899E778:;
    cnd_ = s0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0899E7E4; }
    goto L_0899E780;
L_0899E780:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899E7CC; }
    goto L_0899E788;
L_0899E788:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E79C;
L_0899E79C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E7B0;
L_0899E7B0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0899E7CC; }
    goto L_0899E7B8;
L_0899E7B8:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E7C8;
L_0899E7C8:;
    goto L_0899E7CC;
L_0899E7CC:;
    sp = sp + 48;
    return f0;
L_0899E7E4:;
    a0 = D_08ADE294 - (-7532);
    a0 = a0 - 7532;
    ST32(sp, 0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E7F4;
L_0899E7F4:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E808;
L_0899E808:;
    a0 = LD32(sp);
    a1 = 0xa4000000u;
    a1 = a1 | 0xff36;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899E81C;
L_0899E81C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899E7C8; }
    goto L_0899E824;
L_0899E824:;
    cnd_ = s1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0899E844; }
    goto L_0899E82C;
L_0899E82C:;
    v1 = LD32(s1);
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E83C;
L_0899E83C:;
    goto L_0899E7CC;
L_0899E844:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E84C;
L_0899E84C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E85C;
L_0899E85C:;
    a0 = 84;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E864;
L_0899E864:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    f0 = func_089673C4(a0, a1, a2);
    goto L_0899E878;
L_0899E878:;
    cnd_ = s1 == 0;
    a2 = 0x5a30000u;
    if (cnd_) { goto L_0899E7C8; }
    goto L_0899E880;
L_0899E880:;
    v0 = LD32(s3);
    a0 = LD32(s1);
    v1 = LD32(v0-12);
    v0 = LD32(a0+12);
    a2 = a2 | 0xe701;
    v1 = s3 + v1;
    a1 = LD32(v1+100);
    a0 = s1 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E8A8;
L_0899E8A8:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0899E7CC; }
    goto L_0899E8B0;
L_0899E8B0:;
    v0 = LD32(s1+56);
    v1 = 0x40000000u;
    a1 = 0xae20000u;
    v0 = v0 | v1;
    ST32(s1+56, v0);
    a0 = s1 + 0;
    a1 = a1 | 0x6e48;
    func_0880D928(a0, a1);
    goto L_0899E8D0;
L_0899E8D0:;
    goto L_0899E7CC;
}

/* 0899E8D8 */
void func_0899E8D8(u32 a0, u32 a1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0899E8D8:;
    sp = sp - 64;
    s0 = a1 + 0;
    a1 = 0x5a30000u;
    t1 = (u32)-1;
    a2 = sp + 0;
    a3 = 0 + 0;
    t0 = 1;
    a1 = a1 | 0xe701;
    s1 = a0 + 0;
    cnd_ = s0 != 0;
    s2 = a0 + 512;
    if (cnd_) { goto L_0899E92C; }
    goto L_0899E914;
L_0899E914:;
    sp = sp + 64;
    return;
L_0899E92C:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E948;
L_0899E948:;
    v0 = D_08AEE8A4 - (-5980);
    f0 = BITSF(LD32(v0-5980));
    a2 = s0 + 0;
    a1 = sp + 16;
    a3 = 0 + 0;
    t0 = 15;
    a0 = sp + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E974;
L_0899E974:;
    a0 = 12;
    ST32(sp+32, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E980;
L_0899E980:;
    a0 = v0 + 0;
    a3 = LD32(s1+512);
    a1 = sp + 32;
    a2 = 0 + 0;
    s0 = v0 + 0;
    func_08AAFA30(a0, a1, a2, a3);
    goto L_0899E998;
L_0899E998:;
    v0 = LD32(s2+4);
    cnd_ = v0 != 0;
    ST32(s1+512, s0);
    if (cnd_) { goto L_0899E914; }
    goto L_0899E9A4;
L_0899E9A4:;
    ST32(s2+4, s0);
    goto L_0899E914;
}

/* 0899E9AC */
float func_0899E9AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899E9AC:;
    sp = sp - 16;
    v0 = 4;
    s1 = a1 + 0;
    a1 = 0 + 0;
    ST32(a0+200, v0);
    v0 = LD32(a0);
    v1 = LD32(v0+412);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899E9DC;
L_0899E9DC:;
    v0 = LD32(s0+236);
    a1 = s1 + 0;
    a2 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0899EA04; }
    goto L_0899E9F0;
L_0899E9F0:;
    goto L_0899E9F4;
L_0899E9F4:;
    sp = sp + 16;
    return f0;
L_0899EA04:;
    f0 = func_08985D74(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0899EA0C;
L_0899EA0C:;
    goto L_0899E9F4;
}

/* 0899EA14 */
void func_0899EA14(u32 a0, u32 a1)
{
L_0899EA14:;
    ST8(a0+492, a1);
    return;
}

/* 0899EA1C */
void func_0899EA1C(u32 a0, u32 a1)
{
L_0899EA1C:;
    ST8(a0+493, a1);
    return;
}

/* 0899EA24 */
void func_0899EA24(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0899EA24:;
    v0 = D_08C2A700 - (-22784);
    v1 = LD_U8(v0-22784);
    f1 = BITSF(0);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_0899EA58; }
    goto L_0899EA38;
L_0899EA38:;
    f0 = BITSF(LD32(a0+344));
    f0 = f0 - f12;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(a0+344, FBITS(f0));
    if (cnd_) { goto L_0899EA58; }
    goto L_0899EA50;
L_0899EA50:;
    ST32(a0+344, FBITS(f1));
    v0 = 0 + 0;
    goto L_0899EA58;
L_0899EA58:;
    return;
}

/* 0899EA60 */
float func_0899EA60(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_0899EA60:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899EAB4; }
    goto L_0899EA6C;
L_0899EA6C:;
    v0 = LD32(a0+520);
    v1 = (v0 >> 11) & 0x1;
    v0 = (v0 >> 10) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0899EAB4; }
    goto L_0899EA80;
L_0899EA80:;
    cnd_ = v1 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0899EAB4; }
    goto L_0899EA88;
L_0899EA88:;
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+340));
    f1 = BITSF(LD32(a0+344));
    f3 = BITSF(LD32(a0+348));
    f0 = f0 * f2;
    f1 = f1 + f0;
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    ST32(a0+344, FBITS(f1));
    if (cnd_) { goto L_0899EAB4; }
    goto L_0899EAB0;
L_0899EAB0:;
    ST32(a0+344, FBITS(f3));
    goto L_0899EAB4;
L_0899EAB4:;
    return f0;
}

/* 0899EABC */
rv_t func_0899EABC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_0899EABC:;
    sp = sp - 320;
    s2 = a1 + 0;
    a1 = a2 + 0;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0899EC30; }
    goto L_0899EAE8;
L_0899EAE8:;
    a0 = sp + 16;
    a2 = 1;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899EB04;
L_0899EB04:;
    v0 = D_08AEE8A8 - (-5976);
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0-5976));
    ST32(sp+48, 0);
    a0 = s1 + 0;
    ST32(sp+56, FBITS(f0));
    v0 = LD32(v1+92);
    t_ = v0;
    ST32(sp+52, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EB28;
L_0899EB28:;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    f2 = BITSF(LD32(sp+16));
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(144);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
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
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+56);
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+20));
    ST32(sp+64, FBITS(f4));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(s2, FBITS(f2));
    f0 = f0 + f5;
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f0));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f5));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    goto L_0899EC14;
L_0899EC14:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_0899EC30:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    a1 = LD32(a0);
    s0 = sp + 80;
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(sp+64, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    f1 = BITSF(LD32(v1+20));
    v0 = LD32(a1+244);
    ST32(sp+48, FBITS(f1));
    f0 = BITSF(LD32(v1+32));
    ST32(sp+52, FBITS(f0));
    f1 = BITSF(LD32(v1+44));
    t_ = v0;
    ST32(sp+56, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EC78;
L_0899EC78:;
    f9 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0));
    f8 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp+64));
    f5 = BITSF(LD32(sp+68));
    f6 = BITSF(LD32(sp+72));
    f7 = f4 - f7;
    f8 = f5 - f8;
    f9 = f6 - f9;
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f7);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f9);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f3 = BITSF(LD32(sp+56));
    f2 = BITSF(LD32(sp+48));
    a0 = LD32(s1);
    a1 = sp + 64;
    a2 = sp + 48;
    v1 = LD32(a0-16);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEE8A8 - (-5976);
    f0 = BITSF(LD32(v0-5976));
    v0 = D_08AEE8AC - (-5972);
    v1 = s1 + v1;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+52));
    f20 = BITSF(LD32(v0-5972));
    a3 = LD32(v1+4);
    f3 = f3 * f1;
    f2 = f2 * f1;
    f0 = f0 * f1;
    f12 = f20;
    f6 = f6 + f3;
    f4 = f4 + f2;
    f5 = f5 + f0;
    t0 = 0 + 0;
    t1 = 0x8000;
    a0 = s0 + 0;
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f5));
    ST32(sp+72, FBITS(f6));
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f8));
    ST32(sp+24, FBITS(f9));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f3));
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_0899ED50;
L_0899ED50:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899ED58;
L_0899ED58:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_0899ED78; }
    goto L_0899ED68;
L_0899ED68:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_0899EDD0; }
    goto L_0899ED74;
L_0899ED74:;
    f0 = BITSF(LD32(v1));
    goto L_0899ED78;
L_0899ED78:;
    f2 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp+56));
    f2 = f2 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    goto L_0899ED90;
L_0899ED90:;
    f3 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(sp+72));
    f3 = f3 + f2;
    f1 = f1 + f5;
    f0 = f0 + f4;
    ST32(sp+16, FBITS(f2));
    ST32(s2+8, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    ST32(s2, FBITS(f3));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    goto L_0899EC14;
L_0899EDD0:;
    f5 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp+56));
    f2 = f2 * f20;
    f5 = f5 * f20;
    f4 = f4 * f20;
    goto L_0899ED90;
}

/* 0899EDE8 */
rv_t func_0899EDE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0899EDE8:;
    sp = sp - 112;
    s4 = a3 + 0;
    s3 = 0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EE28;
L_0899EE28:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0899EFF4; }
    goto L_0899EE30;
L_0899EE30:;
    v1 = LD32(s0);
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EE40;
L_0899EE40:;
    v0 = LD32(s2);
    f12 = f0;
    a2 = s3 + 0;
    v1 = LD32(v0+56);
    a0 = s2 + 0;
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EE5C;
L_0899EE5C:;
    v0 = D_08AEE8B0 - (-5968);
    f20 = BITSF(LD32(s4+60));
    f0 = BITSF(LD32(v0-5968));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v1 = LD32(s2);
    if (cnd_) { goto L_0899EE80; }
    goto L_0899EE78;
L_0899EE78:;
    v0 = D_08AEE8B4 - (-5964);
    f20 = BITSF(LD32(v0-5964));
    goto L_0899EE80;
L_0899EE80:;
    v0 = D_08B45A9C - (23196);
    a1 = v0 + 23196;
    a0 = LD32(v1-12);
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(a1+8));
    a0 = s2 + a0;
    v1 = LD32(a0);
    f0 = BITSF(LD32(a1+4));
    ST32(sp+16, FBITS(f1));
    a1 = sp + 16;
    v0 = LD32(v1+20);
    ST32(sp+20, FBITS(f0));
    t_ = v0;
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EEB8;
L_0899EEB8:;
    v1 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v1-31328));
    f6 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+24));
    f6 = f6 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    v0 = D_08AEE8B8 - (-5960);
    f3 = BITSF(LD32(v0-5960));
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f8 = f4 * f3;
    f7 = f6 * f3;
    f3 = f5 * f3;
    f0 = BITSF(LD32(sp+8));
    a0 = sp + 48;
    f2 = f2 + f7;
    f1 = f1 + f3;
    f0 = f0 + f8;
    a1 = s4 + 0;
    a2 = 1;
    ST32(sp+56, FBITS(f4));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+48, FBITS(f6));
    ST32(sp+52, FBITS(f5));
    ST32(sp+32, FBITS(f7));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f8));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899EF38;
L_0899EF38:;
    a0 = s2 + 0;
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+52));
    v1 = LD32(s2);
    a1 = sp + 32;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+56));
    ST32(sp+32, FBITS(f2));
    f12 = f20;
    f1 = f1 - f0;
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f1));
    v0 = LD32(v1+104);
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899EF84;
L_0899EF84:;
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s1, FBITS(f2));
    ST32(s1+4, FBITS(f3));
    cnd_ = v0 != 0;
    ST32(s1+8, FBITS(f4));
    if (cnd_) { goto L_0899EFD0; }
    goto L_0899EFB8;
L_0899EFB8:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    goto L_0899EFD0;
L_0899EFD0:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0899EFF4:;
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F000;
L_0899F000:;
    v1 = LD_U8(v0+324);
    s3 = 0 < v1;
    goto L_0899EE30;
}

/* 0899F00C */
rv_t func_0899F00C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0899F00C:;
    v1 = LD32(a0+236);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0899F028; }
    goto L_0899F018;
L_0899F018:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_0899F028;
L_0899F028:;
    return (rv_t){ v0, v1, f0 };
}

/* 0899F030 */
rv_t func_0899F030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0899F030:;
    v1 = LD32(a0+236);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0899F04C; }
    goto L_0899F03C;
L_0899F03C:;
    v0 = LD_U8(v1+120);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_0899F04C;
L_0899F04C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0899F054 */
void func_0899F054(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0899F054:;
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
    if (cnd_) { goto L_0899F0EC; }
    goto L_0899F0A0;
L_0899F0A0:;
    a2 = LD32(a2-22840);
    a3 = a1 + 0;
    goto L_0899F0A8;
L_0899F0A8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0899F0DC; }
    goto L_0899F0C0;
L_0899F0C0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0899F0F0; }
    goto L_0899F0D0;
L_0899F0D0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0899F0C0; }
    goto L_0899F0DC;
L_0899F0DC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0899F0A8; }
    goto L_0899F0EC;
L_0899F0EC:;
    v0 = LD32(sp+8);
    goto L_0899F0F0;
L_0899F0F0:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_0899F128; }
    goto L_0899F0F8;
L_0899F0F8:;
    v0 = LD32(v0);
    goto L_0899F0FC;
L_0899F0FC:;
    a0 = sp + 0;
    v0 = LD32(v0+92);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0899F110; }
    goto L_0899F10C;
L_0899F10C:;
    ST32(v0+12, s0);
    goto L_0899F110;
L_0899F110:;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F118;
L_0899F118:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v0); goto L_0899F0FC; }
    goto L_0899F124;
L_0899F124:;
    s1 = LD32(sp);
    goto L_0899F128;
L_0899F128:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0899F1AC; }
    goto L_0899F138;
L_0899F138:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0899F1AC; }
    goto L_0899F144;
L_0899F144:;
    v0 = LD32(s1);
    goto L_0899F148;
L_0899F148:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0899F19C; }
    goto L_0899F15C;
L_0899F15C:;
    v0 = LD_U8(s0+8);
    goto L_0899F160;
L_0899F160:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0899F1DC; }
    goto L_0899F168;
L_0899F168:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0899F1CC; }
    goto L_0899F170;
L_0899F170:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0899F178;
L_0899F178:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F184;
L_0899F184:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0899F190;
L_0899F190:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0899F160; }
    goto L_0899F198;
L_0899F198:;
    v1 = LD32(s1+4);
    goto L_0899F19C;
L_0899F19C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0899F148; }
    goto L_0899F1AC;
L_0899F1AC:;
    sp = sp + 48;
    return;
L_0899F1CC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0899F178;
L_0899F1DC:;
    s0 = LD32(s0+4);
    goto L_0899F190;
}

/* 0899F1E4 */
u64 func_0899F1E4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0899F1E4:;
    sp = sp - 48;
    v1 = D_08C2A6C8 - (-22840);
    v1 = v1 - 22840;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F228;
L_0899F228:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08AEE8D4 - (-5932);
    if (cnd_) { goto L_0899F2C0; }
    goto L_0899F234;
L_0899F234:;
    f20 = BITSF(LD32(v0-5932));
    a3 = 0 + 0;
    goto L_0899F23C;
L_0899F23C:;
    a1 = 32;
    a2 = 0 + 0;
    a0 = 0x8001;
    s1 = LD32(v1);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F250;
L_0899F250:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899F290; }
    goto L_0899F258;
L_0899F258:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_0899F264;
L_0899F264:;
    ST32(s0+12, FBITS(f20));
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(s1);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F28C;
L_0899F28C:;
    ST32(s0+8, v0);
    goto L_0899F290;
L_0899F290:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F2A8;
L_0899F2A8:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F2B4;
L_0899F2B4:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0899F23C; }
    goto L_0899F2C0;
L_0899F2C0:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0899F2F0; }
    goto L_0899F2D4;
L_0899F2D4:;
    goto L_0899F2D8;
L_0899F2D8:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0899F2F0:;
    { u64 r_ = func_08AC3F94(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F2F8;
L_0899F2F8:;
    goto L_0899F2D8;
}

/* 0899F300 */
rv_t func_0899F300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F300:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+112);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F324;
L_0899F324:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899F34C; }
    goto L_0899F334;
L_0899F334:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0899F34C:;
    { rv_t r_ = func_089DCAAC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F354;
L_0899F354:;
    v1 = v0 + 0;
    goto L_0899F334;
}

/* 0899F35C */
rv_t func_0899F35C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F35C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = 175;
    a0 = LD32(a0+236);
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F378;
L_0899F378:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899F394; }
    goto L_0899F380;
L_0899F380:;
    f0 = BITSF(LD32(s0+388));
    goto L_0899F388;
L_0899F388:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0899F394:;
    { rv_t r_ = func_08A05038(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F39C;
L_0899F39C:;
    goto L_0899F388;
}

/* 0899F3A4 */
rv_t func_0899F3A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899F3A4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a1 = 175;
    a0 = LD32(a0+236);
    { u64 r_ = func_08985260(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F3C0;
L_0899F3C0:;
    a0 = 0xd0cd0000u;
    a1 = 0xae20000u;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x6e48;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0899F408; }
    goto L_0899F3D8;
L_0899F3D8:;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F3E0;
L_0899F3E0:;
    v0 = D_08AEE8D8 - (-5928);
    f12 = BITSF(LD32(v0-5928));
    a0 = LD32(sp);
    a1 = 0xc88a0000u;
    a1 = a1 | 0xcecf;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F3F8;
L_0899F3F8:;
    goto L_0899F3FC;
L_0899F3FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0899F408:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A0507C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F410;
L_0899F410:;
    goto L_0899F3FC;
}

/* 0899F418 */
void func_0899F418(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F418:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0899F440; }
    goto L_0899F430;
L_0899F430:;
    goto L_0899F434;
L_0899F434:;
    sp = sp + 16;
    return;
L_0899F440:;
    v1 = LD32(a0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F450;
L_0899F450:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899F430; }
    goto L_0899F458;
L_0899F458:;
    v1 = LD32(s0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F468;
L_0899F468:;
    a0 = v0 + 0;
    a1 = 1;
    f0 = func_08A19804(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0899F474;
L_0899F474:;
    goto L_0899F434;
}

/* 0899F47C */
void func_0899F47C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0899F47C:;
    sp = sp - 128;
    v0 = D_08AEE8DC - (-5924);
    v1 = D_08C2A6E0 - (-22816);
    t0 = v1 - 22816;
    a1 = 0 + 0;
    a2 = 999;
    f0 = BITSF(LD32(v0-5924));
    v0 = D_08C2A6F0 - (-22800);
    a3 = v0 - 22800;
    goto L_0899F4CC;
L_0899F4CC:;
    v0 = a1 << 2;
    a1 = a1 + 1;
    a0 = v0 + a3;
    v1 = (s32)a1 < 4;
    v0 = v0 + t0;
    ST32(v0, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(a0, a2);
    if (cnd_) { goto L_0899F4CC; }
    goto L_0899F4EC;
L_0899F4EC:;
    v1 = D_08C2A6C8 - (-22840);
    v1 = v1 - 22840;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F518;
L_0899F518:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = D_08AEE8E0 - (-5920);
    if (cnd_) { goto L_0899F594; }
    goto L_0899F524;
L_0899F524:;
    f20 = BITSF(LD32(v0-5920));
    fp = D_08B30934 - (2356);
    v0 = D_08C2A6E0 - (-22816);
    v1 = D_08C2A6F0 - (-22800);
    s5 = v0 - 22816;
    s6 = v1 - 22800;
    s4 = 1;
    s7 = fp + 2356;
    s0 = LD32(a0);
    goto L_0899F548;
L_0899F548:;
    s3 = 0 + 0;
    s2 = s6 + 0;
    s1 = s5 + 0;
    goto L_0899F554;
L_0899F554:;
    v1 = LD32(s0+452);
    v0 = s4 << (s3 & 31);
    v0 = v1 | v0;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD_U8(s0+195); goto L_0899F5EC; }
    goto L_0899F568;
L_0899F568:;
    s3 = s3 + 1;
    v0 = (s32)s3 < 4;
    s1 = s1 + 4;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_0899F554; }
    goto L_0899F57C;
L_0899F57C:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F588;
L_0899F588:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_0899F548; }
    goto L_0899F594;
L_0899F594:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0899F5DC; }
    goto L_0899F5A8;
L_0899F5A8:;
    goto L_0899F5AC;
L_0899F5AC:;
    sp = sp + 128;
    return;
L_0899F5DC:;
    { u64 r_ = func_08AC3F94(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F5E4;
L_0899F5E4:;
    goto L_0899F5AC;
L_0899F5EC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0899F610; }
    goto L_0899F5F4;
L_0899F5F4:;
    ST32(s1, FBITS(f20));
    goto L_0899F5F8;
L_0899F5F8:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    ST32(s2, v0);
    goto L_0899F568;
L_0899F610:;
    f0 = BITSF(LD32(fp+2356));
    f1 = BITSF(LD32(s7+4));
    f2 = BITSF(LD32(s7+8));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F638;
L_0899F638:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+40));
    f3 = f3 - f0;
    f2 = f2 - f4;
    f1 = f1 - f5;
    f6 = BITSF(LD32(s1));
    v0 = FBITS(f3);
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f6, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_0899F568; }
    goto L_0899F69C;
L_0899F69C:;
    ST32(s1, v0);
    goto L_0899F5F8;
}

/* 0899F6A4 */
rv_t func_0899F6A4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0899F6A4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899F7C8; }
    goto L_0899F6D8;
L_0899F6D8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEE8E4 - (-5916);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-5916));
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
    t0 = D_08C2A618 - (-23016);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A628 - (-23000);
    a3 = D_08C2A638 - (-22984);
    v1 = t0 - 23016;
    a1 = v0 - 23000;
    a2 = a3 - 22984;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A6C8 - (-22840);
    s0 = s3 - 22840;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-23000, FBITS(f5));
    v0 = 32;
    ST32(t0-23016, FBITS(f1));
    ST32(a3-22984, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F790;
L_0899F790:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-22840, v0);
    if (cnd_) { goto L_0899F7BC; }
    goto L_0899F7A0;
L_0899F7A0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0899F7A8;
L_0899F7A8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0899F7A8; }
    goto L_0899F7BC;
L_0899F7BC:;
    v0 = s3 - 22840;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0899F7C8;
L_0899F7C8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0899F7EC; }
    goto L_0899F7DC;
L_0899F7DC:;
    v0 = D_08C2A6C8 - (-22840);
    a0 = LD32(v0-22840);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0899F804; }
    goto L_0899F7EC;
L_0899F7EC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0899F804:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F80C;
L_0899F80C:;
    goto L_0899F7EC;
}

/* 0899F814 */
float func_0899F814(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0899F814:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0899F840; }
    goto L_0899F82C;
L_0899F82C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0899F840; }
    goto L_0899F840;
L_0899F840:;
    return f0;
}

/* 0899F848 */
rv_t func_0899F848(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F848:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0899F6A4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F85C;
L_0899F85C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0899F868 */
rv_t func_0899F868(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F868:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0899F6A4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F87C;
L_0899F87C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0899F888 */
void func_0899F888(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F888:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089DF4EC(a0, a1, a2);
    goto L_0899F89C;
L_0899F89C:;
    v1 = 0xc0520000u;
    v0 = D_08AFC268 - (-15768);
    v1 = v1 | 0xbfb6;
    v0 = v0 - 15768;
    ST32(s0+96, v1);
    v1 = 1;
    ST32(s0, v0);
    v0 = 1;
    ST8(s0+148, v1);
    ST32(s0+76, v0);
    ST32(s0+144, 0);
    sp = sp + 16;
    return;
}

/* 0899F8D8 */
rv_t func_0899F8D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899F8D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    { u64 r_ = func_089DD9AC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899F8F4;
L_0899F8F4:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0899F914; }
    goto L_0899F900;
L_0899F900:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0899F914:;
    { rv_t r_ = func_089DF854(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899F91C;
L_0899F91C:;
    v1 = v0 + 0;
    goto L_0899F900;
}

/* 0899F924 */
rv_t func_0899F924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0899F924:;
    v0 = LD32(a0+12);
    v1 = 0xc0520000u;
    v1 = v1 | 0xbfb6;
    v0 = v0 ^ v1;
    v0 = 0 < v0;
    return (rv_t){ v0, v1, f0 };
}

/* 0899F93C */
rv_t func_0899F93C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0899F93C:;
    sp = sp - 96;
    a2 = 999;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_0899F97C; }
    goto L_0899F96C;
L_0899F96C:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a2 = LD32(v0+4);
    goto L_0899F97C;
L_0899F97C:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22840;
    if (cnd_) { goto L_0899FA40; }
    goto L_0899F98C;
L_0899F98C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0899F9DC; }
    goto L_0899F9B0;
L_0899F9B0:;
    a0 = LD32(a1);
    goto L_0899F9B4;
L_0899F9B4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0899FED0; }
    goto L_0899F9CC;
L_0899F9CC:;
    a1 = LD32(a1+4);
    goto L_0899F9D0;
L_0899F9D0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0899F9B4; }
    goto L_0899F9D8;
L_0899F9D8:;
    s0 = 0 + 0;
    goto L_0899F9DC;
L_0899F9DC:;
    cnd_ = s0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0899FA44; }
    goto L_0899F9E4;
L_0899F9E4:;
    v0 = LD32(s1+112);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_0899FAD0; }
    goto L_0899F9F4;
L_0899F9F4:;
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899FA00;
L_0899FA00:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0899FA40; }
    goto L_0899FA08;
L_0899FA08:;
    v0 = LD32(s0);
    a0 = LD_U8(s1+148);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    cnd_ = a0 != 0;
    v0 = LD32(v1+100);
    if (cnd_) { goto L_0899FA34; }
    goto L_0899FA20;
L_0899FA20:;
    cnd_ = v0 == 0;
    a1 = ((u32)(uintptr_t)func_0899F924) - (-1756);
    if (cnd_) { goto L_0899FA34; }
    goto L_0899FA28;
L_0899FA28:;
    a0 = v0 + 76;
    a1 = a1 - 1756;
    { u64 r_ = func_088154D8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899FA34;
L_0899FA34:;
    v0 = LD32(s1+144);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0899FA68; }
    goto L_0899FA40;
L_0899FA40:;
    a0 = s1 + 0;
    goto L_0899FA44;
L_0899FA44:;
    a1 = s3 + 0;
    { rv_t r_ = func_089DF898(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899FA4C;
L_0899FA4C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0899FA68:;
    ST32(s0+448, v0);
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899FA78;
L_0899FA78:;
    a0 = v0 + 0;
    v0 = LD32(s2+56);
    v1 = LD32(s1+144);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_0899FAC8; }
    goto L_0899FA90;
L_0899FA90:;
    v0 = LD32(s2+60);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+68, a1); goto L_0899FA40; }
    goto L_0899FAA0;
L_0899FAA0:;
    v0 = LD32(s2+64);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+68, a1); goto L_0899FA40; }
    goto L_0899FAAC;
L_0899FAAC:;
    v0 = a0 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a1 = LD32(v0);
    goto L_0899FAC8;
L_0899FAC8:;
    ST32(s1+68, a1);
    goto L_0899FA40;
L_0899FAD0:;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0899FADC;
L_0899FADC:;
    a0 = s0 + 0;
    a1 = sp + 0;
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
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FD64; }
    goto L_0899FB20;
L_0899FB20:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FCA4; }
    goto L_0899FB30;
L_0899FB30:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899FBC8; }
    goto L_0899FB58;
L_0899FB58:;
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
    if (cnd_) { goto L_0899FBA4; }
    goto L_0899FB94;
L_0899FB94:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899FBA4;
L_0899FBA4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FBE8; }
    goto L_0899FBB4;
L_0899FBB4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899FBE8; }
    goto L_0899FBC4;
L_0899FBC4:;
    goto L_0899FBC8;
L_0899FBC8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FBE8; }
    goto L_0899FBDC;
L_0899FBDC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899FBE8;
L_0899FBE8:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899FC78; }
    goto L_0899FC08;
L_0899FC08:;
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
    if (cnd_) { goto L_0899FC54; }
    goto L_0899FC44;
L_0899FC44:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899FC54;
L_0899FC54:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FC98; }
    goto L_0899FC64;
L_0899FC64:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899FC98; }
    goto L_0899FC74;
L_0899FC74:;
    goto L_0899FC78;
L_0899FC78:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FC98; }
    goto L_0899FC8C;
L_0899FC8C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899FC98;
L_0899FC98:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899FE1C; }
    goto L_0899FCA0;
L_0899FCA0:;
    goto L_0899FCA4;
L_0899FCA4:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899FD38; }
    goto L_0899FCC8;
L_0899FCC8:;
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
    if (cnd_) { goto L_0899FD14; }
    goto L_0899FD04;
L_0899FD04:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899FD14;
L_0899FD14:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FD58; }
    goto L_0899FD24;
L_0899FD24:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899FD58; }
    goto L_0899FD34;
L_0899FD34:;
    goto L_0899FD38;
L_0899FD38:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FD58; }
    goto L_0899FD4C;
L_0899FD4C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899FD58;
L_0899FD58:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0899FE1C; }
    goto L_0899FD60;
L_0899FD60:;
    goto L_0899FD64;
L_0899FD64:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0899FDF8; }
    goto L_0899FD88;
L_0899FD88:;
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
    if (cnd_) { goto L_0899FDD4; }
    goto L_0899FDC4;
L_0899FDC4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_0899FDD4;
L_0899FDD4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FE18; }
    goto L_0899FDE4;
L_0899FDE4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_0899FE18; }
    goto L_0899FDF4;
L_0899FDF4:;
    goto L_0899FDF8;
L_0899FDF8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0899FE18; }
    goto L_0899FE0C;
L_0899FE0C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_0899FE18;
L_0899FE18:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_0899FE1C;
L_0899FE1C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    ST32(sp+56, 0);
    ST32(sp+48, 0);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
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
    func_0899CFE4(a0, a1);
    goto L_0899FEC8;
L_0899FEC8:;
    v1 = LD32(s0);
    goto L_0899F9F4;
L_0899FED0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0899F9CC; }
    goto L_0899FEDC;
L_0899FEDC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0899F9D0; }
    goto L_0899FEE8;
L_0899FEE8:;
    goto L_0899F9DC;
}

/* 0899FEF0 */
void func_0899FEF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0899FEF0:;
    sp = sp - 16;
    a2 = 0x86200000u;
    a2 = a2 | 0x5043;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_0899FF0C;
L_0899FF0C:;
    v1 = D_08AFC210 - (-15856);
    v0 = LD32(s0+112);
    v1 = v1 - 15856;
    ST32(s0, v1);
    v0 = v0 | 0x4080;
    ST32(s0+112, v0);
    ST8(s0+148, 0);
    sp = sp + 16;
    return;
}

/* 0899FF38 */
rv_t func_0899FF38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0899FF38:;
    sp = sp - 80;
    v1 = 0 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089A0074; }
    goto L_0899FF68;
L_0899FF68:;
    v0 = LD32(s1);
    ST32(sp+32, 0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_0899FF80;
L_0899FF80:;
    a0 = 0x203e0000u;
    a1 = v0 + 0;
    a0 = a0 | 0x217d;
    a2 = sp + 32;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899FF94;
L_0899FF94:;
    a0 = LD32(sp+32);
    a1 = 0x300000u;
    a1 = a1 | 0x15f2;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0899FFA8;
L_0899FFA8:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089A00BC; }
    goto L_0899FFB0;
L_0899FFB0:;
    v0 = D_08AEE904 - (-5884);
    f0 = BITSF(LD32(v0-5884));
    ST32(s2+84, 0);
    ST32(s2+80, FBITS(f0));
    cnd_ = s0 == 0;
    ST32(s2+144, 0);
    if (cnd_) { goto L_0899FFE4; }
    goto L_0899FFC8;
L_0899FFC8:;
    v0 = LD_U8(s0+44);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+196); goto L_0899FFE8; }
    goto L_0899FFD4;
L_0899FFD4:;
    v0 = D_08AEE908 - (-5880);
    f0 = BITSF(LD32(v0-5880));
    ST32(s2+80, 0);
    ST32(s2+84, FBITS(f0));
    goto L_0899FFE4;
L_0899FFE4:;
    v0 = LD_U8(s1+196);
    goto L_0899FFE8;
L_0899FFE8:;
    cnd_ = v0 != 0;
    a1 = D_08B25AC8 - (23240);
    if (cnd_) { goto L_089A0094; }
    goto L_0899FFF0;
L_0899FFF0:;
    v0 = LD32(a1+23240);
    a2 = a1 + 23240;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = (v0 >> 1) & 0x3;
    a0 = a0 + v0;
    v1 = v1 + 20;
    ST32(a2+4, a0);
    ST32(a1+23240, v0);
    ST32(s2+144, v1);
    goto L_089A0024;
L_089A0024:;
    a1 = 0x84f10000u;
    a0 = s1 + 0;
    a1 = a1 | 0xc863;
    { u64 r_ = func_089DCFAC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0034;
L_089A0034:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A0064; }
    goto L_089A003C;
L_089A003C:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A004C;
L_089A004C:;
    a2 = v0 + 0;
    v0 = D_08AEE908 - (-5880);
    f12 = BITSF(LD32(v0-5880));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0064;
L_089A0064:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0070;
L_089A0070:;
    v1 = v0 + 0;
    goto L_089A0074;
L_089A0074:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089A0094:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DE500(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A009C;
L_089A009C:;
    cnd_ = v0 == 0;
    v0 = 0x7e2f0000u;
    if (cnd_) { goto L_089A00B0; }
    goto L_089A00A4;
L_089A00A4:;
    v0 = 32;
    ST32(s2+144, v0);
    goto L_089A0024;
L_089A00B0:;
    v0 = v0 | 0x1a8a;
    ST32(s2+68, v0);
    goto L_089A0024;
L_089A00BC:;
    v0 = LD32(s1);
    a1 = 1;
    s2 = sp + 16;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08876270(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A00D4;
L_089A00D4:;
    a0 = LD32(sp+32);
    a1 = 0x47280000u;
    a1 = a1 | 0xcc13;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A00E8;
L_089A00E8:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A00FC;
L_089A00FC:;
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f2));
    f12 = BITSF(0);
    ST32(sp+8, FBITS(f0));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp+4, FBITS(f1));
    v0 = LD32(s1);
    v1 = LD32(v0+56);
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0130;
L_089A0130:;
    v0 = D_08AEE8F8 - (-5896);
    f0 = BITSF(LD32(v0-5896));
    a2 = s0 + 0;
    a1 = s2 + 0;
    a3 = 0 + 0;
    t0 = 15;
    a0 = sp + 0;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, 0);
    ST32(sp+24, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A015C;
L_089A015C:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A016C;
L_089A016C:;
    a0 = v0 + 0;
    v0 = D_08AEE8FC - (-5892);
    f12 = BITSF(LD32(v0-5892));
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A017C;
L_089A017C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(sp+16, 0); goto L_089A018C; }
    goto L_089A0184;
L_089A0184:;
    v1 = 0 + 0;
    goto L_089A0074;
L_089A018C:;
    a1 = s2 + 0;
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = LD32(s1);
    v1 = LD32(v0+276);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A01A8;
L_089A01A8:;
    a1 = LD32(s1);
    v0 = LD32(a1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A01B8;
L_089A01B8:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A01CC;
L_089A01CC:;
    a2 = v0 + 0;
    v0 = D_08AEE900 - (-5888);
    f12 = BITSF(LD32(v0-5888));
    a0 = s3 + 0;
    a1 = s0 + 0;
    t0 = s2 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088EDEFC(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A01EC;
L_089A01EC:;
    v1 = 0 + 0;
    goto L_089A0074;
}

/* 089A01F4 */
rv_t func_089A01F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A01F4:;
    sp = sp - 16;
    { rv_t r_ = func_089E0420(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0204;
L_089A0204:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A0210 */
void func_089A0210(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0210:;
    sp = sp - 16;
    a2 = 0x310000u;
    a2 = a2 | 0xf42e;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A022C;
L_089A022C:;
    v0 = 0x20000u;
    v1 = LD32(s0+112);
    v0 = v0 | 0x8010;
    a0 = 8;
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    v1 = v1 | v0;
    v1 = (v1 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    v0 = D_08AFC1B8 - (-15944);
    v1 = v1 | 0x4;
    v0 = v0 - 15944;
    ST32(s0+144, a0);
    ST32(s0, v0);
    ST32(s0+112, v1);
    sp = sp + 16;
    return;
}

/* 089A0270 */
rv_t func_089A0270(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0270:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A02E0; }
    goto L_089A0294;
L_089A0294:;
    v1 = LD32(s0);
    v0 = LD32(v1+452);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A02A4;
L_089A02A4:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A02E4; }
    goto L_089A02AC;
L_089A02AC:;
    v0 = LD32(s0+92);
    a1 = 11;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A02E0; }
    goto L_089A02BC;
L_089A02BC:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A02CC;
L_089A02CC:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A02F8; }
    goto L_089A02E0;
L_089A02E0:;
    v0 = 0 + 0;
    goto L_089A02E4;
L_089A02E4:;
    goto L_089A02E8;
L_089A02E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A02F8:;
    { rv_t r_ = func_0899F8D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0300;
L_089A0300:;
    goto L_089A02E8;
}

/* 089A0308 */
rv_t func_089A0308(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089A0308:;
    sp = sp - 64;
    s2 = a0 + 0;
    a0 = 0xde350000u;
    s1 = a1 + 0;
    a1 = 0x203e0000u;
    a2 = sp + 16;
    a1 = a1 | 0x217d;
    a0 = a0 | 0x46b6;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089A0368; }
    goto L_089A0340;
L_089A0340:;
    a0 = s2 + 0;
    goto L_089A0344;
L_089A0344:;
    a1 = s1 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A034C;
L_089A034C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089A0368:;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0370;
L_089A0370:;
    v0 = D_08AEE90C - (-5876);
    f12 = BITSF(LD32(v0-5876));
    a0 = LD32(sp+16);
    a1 = 0x8c3f0000u;
    a1 = a1 | 0x2703;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0388;
L_089A0388:;
    v0 = LD32(s2+4);
    f20 = f0;
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A0340; }
    goto L_089A039C;
L_089A039C:;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A03A4;
L_089A03A4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A0340; }
    goto L_089A03AC;
L_089A03AC:;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A03B4;
L_089A03B4:;
    f0 = BITSF(FBITS(f20) ^ 0x80000000u);
    a1 = sp + 0;
    a2 = 1;
    a0 = v0 + 0;
    ST32(sp, 0);
    ST32(sp+8, 0);
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A03D4;
L_089A03D4:;
    a0 = s2 + 0;
    goto L_089A0344;
}

/* 089A03DC */
void func_089A03DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A03DC:;
    sp = sp - 32;
    a2 = 0xf0d40000u;
    a2 = a2 | 0x8f47;
    s0 = a0 + 0;
    s1 = D_08C2A760 - (-22688);
    func_0899F888(a0, a1, a2);
    goto L_089A0400;
L_089A0400:;
    v0 = 0x20000u;
    v1 = LD32(s0+112);
    v0 = v0 | 0x8010;
    a3 = LD_U8(s1-22688);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    v1 = v1 | v0;
    v1 = (v1 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    v0 = D_08AFC160 - (-16032);
    v1 = v1 | 0x4;
    v0 = v0 - 16032;
    a0 = 0xd0cd0000u;
    a1 = 0xf0d40000u;
    ST32(s0, v0);
    v0 = 28;
    a0 = a0 | 0xc21c;
    ST32(s0+112, v1);
    v1 = (u32)-1;
    a1 = a1 | 0x8f47;
    a2 = sp + 0;
    ST32(s0+144, v0);
    ST32(s0+152, v1);
    cnd_ = a3 == 0;
    ST32(s0+156, 0);
    if (cnd_) { goto L_089A0470; }
    goto L_089A045C;
L_089A045C:;
    sp = sp + 32;
    return;
L_089A0470:;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0478;
L_089A0478:;
    a1 = 0x734e0000u;
    v0 = LD32(sp);
    a1 = a1 | 0xb3fb;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A049C; }
    goto L_089A0490;
L_089A0490:;
    v0 = 1;
    ST8(s1-22688, v0);
    goto L_089A045C;
L_089A049C:;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A04A4;
L_089A04A4:;
    a0 = LD32(sp);
    a1 = 0xd38e0000u;
    v1 = D_08C2A76C - (-22676);
    a2 = 0 + 0;
    a1 = a1 | 0x50c3;
    ST32(v1-22676, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A04C0;
L_089A04C0:;
    v1 = D_08AEE914 - (-5868);
    f12 = BITSF(LD32(v1-5868));
    a0 = LD32(sp);
    a1 = 0x9b910000u;
    v1 = D_08C2A768 - (-22680);
    a1 = a1 | 0x93cc;
    ST32(v1-22680, v0);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A04E0;
L_089A04E0:;
    a1 = 0xbfba0000u;
    a0 = LD32(sp);
    a2 = 0xe36e0000u;
    v0 = D_08C2A764 - (-22684);
    a1 = a1 | 0xf153;
    a2 = a2 | 0xc5d9;
    ST32(v0-22684, FBITS(f0));
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0500;
L_089A0500:;
    v1 = D_08C2A770 - (-22672);
    ST32(v1-22672, v0);
    goto L_089A0490;
}

/* 089A050C */
rv_t func_089A050C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A050C:;
    sp = sp - 32;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089A0654; }
    goto L_089A0538;
L_089A0538:;
    v0 = LD32(s0+236);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A0564; }
    goto L_089A0544;
L_089A0544:;
    v0 = LD_U8(v0+125);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A0564; }
    goto L_089A0550;
L_089A0550:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A0584; }
    goto L_089A055C;
L_089A055C:;
    v0 = LD32(s0+520);
    v0 = (v0 >> 10) & 0x1;
    goto L_089A0564;
L_089A0564:;
    goto L_089A0568;
L_089A0568:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A0584:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A058C;
L_089A058C:;
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089A05B8; }
    goto L_089A0594;
L_089A0594:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A059C;
L_089A059C:;
    f1 = BITSF(LD32(v0+4));
    v0 = D_08AEE918 - (-5864);
    f0 = BITSF(LD32(v0-5864));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 1; goto L_089A05B8; }
    goto L_089A05B8;
L_089A05B8:;
    a0 = LD32(s0+92);
    cnd_ = a0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089A05E8; }
    goto L_089A05C4;
L_089A05C4:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A05D4;
L_089A05D4:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { s3 = 1; goto L_089A05E8; }
    goto L_089A05E8;
L_089A05E8:;
    v0 = D_08C2A764 - (-22684);
    f1 = BITSF(LD32(v0-22684));
    f0 = BITSF(LD32(s0+344));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s2 = 1;
    if (cnd_) { goto L_089A0608; }
    goto L_089A0604;
L_089A0604:;
    s2 = 0 + 0;
    goto L_089A0608;
L_089A0608:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD748(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0610;
L_089A0610:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_089A0630; }
    goto L_089A0618;
L_089A0618:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A0564; }
    goto L_089A0620;
L_089A0620:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089A0630; }
    goto L_089A0628;
L_089A0628:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A065C; }
    goto L_089A0630;
L_089A0630:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A0564; }
    goto L_089A0638;
L_089A0638:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089A064C; }
    goto L_089A0640;
L_089A0640:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A0564; }
    goto L_089A0648;
L_089A0648:;
    a0 = s1 + 0;
    goto L_089A064C;
L_089A064C:;
    a1 = s0 + 0;
    { rv_t r_ = func_089A0D60(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0654;
L_089A0654:;
    v0 = 0 + 0;
    goto L_089A0564;
L_089A065C:;
    a0 = s1 + 0;
    { rv_t r_ = func_0899F8D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0664;
L_089A0664:;
    goto L_089A0568;
}

/* 089A066C */
rv_t func_089A066C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[528] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 528);
L_089A066C:;
    sp = sp - 528;
    v1 = 0 + 0;
    v0 = LD32(a0+4);
    ST32(sp+164, a0);
    s5 = LD32(v0+52);
    cnd_ = s5 == 0;
    ST32(sp+168, a1);
    if (cnd_) { goto L_089A07D0; }
    goto L_089A06C0;
L_089A06C0:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD_U8(s5+195); goto L_089A0824; }
    goto L_089A06C8;
L_089A06C8:;
    v1 = LD32(s5);
    goto L_089A06CC;
L_089A06CC:;
    v0 = LD32(v1-12);
    v0 = s5 + v0;
    s4 = LD32(v0+100);
    cnd_ = s4 == 0;
    s2 = 0x10000u;
    if (cnd_) { goto L_089A076C; }
    goto L_089A06E0;
L_089A06E0:;
    s2 = s2 | 0x9a99;
    s3 = 0 + 0;
    fp = D_08B45A9C - (23196);
    s7 = D_08B45AA8 - (23208);
    s6 = D_08C2A770 - (-22672);
    a2 = LD32(s6-22672);
    goto L_089A06F8;
L_089A06F8:;
    t0 = 143;
    a3 = 0 + 0;
    a1 = s7 + 23208;
    a0 = fp + 23196;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A070C;
L_089A070C:;
    a0 = 72;
    s1 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0718;
L_089A0718:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    func_0880FBFC(a0, a1, a2);
    goto L_089A072C;
L_089A072C:;
    v1 = LD32(s0);
    a2 = s2 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    a1 = s4 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0748;
L_089A0748:;
    a1 = s2 + 0;
    s2 = 0x6050000u;
    s3 = s3 + 1;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s2 = s2 | 0x5e5a;
    if (cnd_) { goto L_089A0814; }
    goto L_089A0760;
L_089A0760:;
    v0 = s3 < 0x2u;
    goto L_089A0764;
L_089A0764:;
    cnd_ = v0 != 0;
    a2 = LD32(s6-22672);
    if (cnd_) { goto L_089A06F8; }
    goto L_089A076C;
L_089A076C:;
    v0 = D_08C2A768 - (-22680);
    a0 = LD32(v0-22680);
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A077C;
L_089A077C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A07B0; }
    goto L_089A0784;
L_089A0784:;
    v1 = LD32(s5);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0794;
L_089A0794:;
    a2 = v0 + 0;
    v1 = LD32(sp+164);
    v0 = D_08AEE92C - (-5844);
    f12 = BITSF(LD32(v0-5844));
    a1 = v1 + 152;
    a0 = s0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A07B0;
L_089A07B0:;
    v0 = D_08C2A764 - (-22684);
    f12 = BITSF(LD32(v0-22684));
    a0 = s5 + 0;
    func_0899EA24(a0, f12);
    goto L_089A07C0;
L_089A07C0:;
    a0 = LD32(sp+164);
    a1 = LD32(sp+168);
    { rv_t r_ = func_0899F93C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A07CC;
L_089A07CC:;
    v1 = v0 + 0;
    goto L_089A07D0;
L_089A07D0:;
    v0 = v1 + 0;
    sp = sp + 528;
    return (rv_t){ v0, v1, f0 };
L_089A0814:;
    func_0880D928(a0, a1);
    goto L_089A081C;
L_089A081C:;
    v0 = s3 < 0x2u;
    goto L_089A0764;
L_089A0824:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s5); goto L_089A06CC; }
    goto L_089A082C;
L_089A082C:;
    a0 = 0xde350000u;
    a1 = 0x203e0000u;
    a2 = sp + 160;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x217d;
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp+160, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0868;
L_089A0868:;
    v0 = D_08AEE91C - (-5860);
    f12 = BITSF(LD32(v0-5860));
    a0 = LD32(sp+160);
    a1 = 0xa4c50000u;
    a1 = a1 | 0x991c;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0880;
L_089A0880:;
    v0 = D_08AEE920 - (-5856);
    f12 = BITSF(LD32(v0-5856));
    a0 = LD32(sp+160);
    a1 = 0x53d50000u;
    a1 = a1 | 0x343f;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A089C;
L_089A089C:;
    v0 = D_08AEE924 - (-5852);
    f12 = BITSF(LD32(v0-5852));
    a0 = LD32(sp+160);
    a1 = 0xec6f0000u;
    a1 = a1 | 0xa42b;
    f20 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A08B8;
L_089A08B8:;
    v0 = D_08AEE928 - (-5848);
    a0 = LD32(sp+160);
    f12 = BITSF(LD32(v0-5848));
    a1 = 0x44dc0000u;
    a1 = a1 | 0x4985;
    f22 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A08D4;
L_089A08D4:;
    a0 = s5 + 0;
    f23 = f0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A08E0;
L_089A08E0:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s5); goto L_089A06CC; }
    goto L_089A08E8;
L_089A08E8:;
    a0 = s5 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A08F0;
L_089A08F0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    s0 = v0 + 0;
    func_088BB170(a0, a1);
    goto L_089A0900;
L_089A0900:;
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(FBITS(f20) ^ 0x80000000u);
    {u32 a_=sp+(336);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    f0 = f2 - f21;
    {u32 a_=sp+(352);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    fcc = FCMP(f1, f0, 14);
    {u32 a_=sp+(400);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = fcc;
    {u32 a_=sp+(448);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089A093C; }
    goto L_089A0938;
L_089A0938:;
    f0 = f1;
    goto L_089A093C;
L_089A093C:;
    f0 = f0 - f2;
    f20 = BITSF(0);
    a0 = s0 + 0;
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp+20, FBITS(f0));
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    ST32(sp+16, FBITS(f20));
    ST32(sp+24, FBITS(f20));
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0978;
L_089A0978:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    ST32(sp+4, FBITS(f20));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    v1 = LD32(s5);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A099C;
L_089A099C:;
    f8 = BITSF(LD32(v0+4));
    f11 = BITSF(LD32(v0+20));
    f9 = BITSF(LD32(v0+8));
    f10 = BITSF(LD32(v0+12));
    f12 = BITSF(LD32(v0+24));
    f13 = BITSF(LD32(v0+28));
    f14 = BITSF(LD32(v0));
    {u32 a_=sp+(176);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    a3 = FBITS(f8);
    t0 = FBITS(f9);
    t1 = FBITS(f10);
    {v[56]=BITSF(a3);}
    t2 = FBITS(f11);
    t3 = FBITS(f12);
    t4 = FBITS(f13);
    {v[52]=BITSF(t2);}
    {v[57]=BITSF(t0);}
    {v[53]=BITSF(t3);}
    {v[58]=BITSF(t1);}
    {v[54]=BITSF(t4);}
    {v1=FBITS(v[53]);}
    f0 = BITSF(v1);
    f15 = BITSF(v1);
    {v1=FBITS(v[58]);}
    f1 = BITSF(v1);
    f7 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+32));
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v0=FBITS(v[56]);}
    f16 = BITSF(v1);
    a1 = FBITS(f14);
    v1 = FBITS(f1);
    {v[48]=BITSF(a1);}
    {v[49]=BITSF(v1);}
    v1 = FBITS(f0);
    f0 = BITSF(v0);
    {v[50]=BITSF(v1);}
    f6 = BITSF(v0);
    v1 = FBITS(f0);
    {v0=FBITS(v[54]);}
    f0 = BITSF(v0);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f4 = BITSF(v0);
    {u32 a_=sp+(240);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v0=FBITS(v[57]);}
    {v[48]=BITSF(v1);}
    v1 = FBITS(f0);
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    a0 = FBITS(f7);
    {v0=FBITS(v[52]);}
    {v[49]=BITSF(a0);}
    {v[50]=BITSF(v1);}
    v1 = FBITS(f0);
    f0 = BITSF(v0);
    {u32 a_=sp+(384);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f3 = BITSF(v0);
    {v[32]=BITSF(v1);}
    v0 = LD32(sp+4);
    v1 = FBITS(f0);
    {u32 a_=sp+(208);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[33]=BITSF(v1);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(sp);
    a2 = FBITS(f5);
    {v[16]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+8);
    {v[17]=BITSF(v0);}
    {v[34]=BITSF(a2);}
    {v[18]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f0 = BITSF(v0);
    f17 = BITSF(v0);
    {v1=FBITS(v[20]);}
    fcc = FCMP(f20, f0, 12);
    {v0=FBITS(v[21]);}
    ST32(sp+84, FBITS(f8));
    f0 = BITSF(v1);
    f1 = BITSF(v0);
    ST32(sp+32, FBITS(f14));
    ST32(sp+36, FBITS(f8));
    ST32(sp+40, FBITS(f9));
    ST32(sp+44, FBITS(f10));
    ST32(sp+48, FBITS(f7));
    ST32(sp+52, FBITS(f11));
    ST32(sp+56, FBITS(f12));
    ST32(sp+60, FBITS(f13));
    ST32(sp+64, FBITS(f5));
    ST32(sp+80, FBITS(f14));
    ST32(sp+96, FBITS(f7));
    ST32(sp+112, FBITS(f5));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f2));
    {u32 a_=sp+(448);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    ST32(sp+108, FBITS(f3));
    ST32(sp+84, FBITS(f16));
    ST32(sp+88, FBITS(f15));
    ST32(sp+92, FBITS(f6));
    ST32(sp+144, v1);
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f17));
    ST32(sp+128, v1);
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f17));
    ST32(sp, v1);
    ST32(sp+4, v0);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f17));
    if (cnd_) { goto L_089A0C14; }
    goto L_089A0B60;
L_089A0B60:;
    f2 = f17 * f22;
    fcc = FCMP(f2, f23, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f23; goto L_089A0B74; }
    goto L_089A0B74;
L_089A0B74:;
    v1 = FBITS(f0);
    v0 = FBITS(f1);
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a1);}
    {v[52]=BITSF(t1);}
    {v[49]=BITSF(a3);}
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[50]=BITSF(t0);}
    {v[53]=BITSF(a0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[54]=BITSF(t2);}
    {u32 a_=sp+(320);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[48]=BITSF(t3);}
    {u32 a_=sp+(272);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[49]=BITSF(t4);}
    {v[32]=BITSF(v1);}
    {v[50]=BITSF(a2);}
    {v[33]=BITSF(v0);}
    v1 = FBITS(f2);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[34]=BITSF(v1);}
    {float t0=v[32];float t1=v[33];float t2=v[34];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+16, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+128, v1);
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f3));
    ST32(sp+144, v1);
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+8, FBITS(f3));
    goto L_089A0C14;
L_089A0C14:;
    a0 = s0 + 0;
    a1 = sp + 16;
    a2 = 1;
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0C24;
L_089A0C24:;
    v1 = LD32(s5);
    goto L_089A06CC;
}

/* 089A0C2C */
rv_t func_089A0C2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0C2C:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+152);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A0C60; }
    goto L_089A0C50;
L_089A0C50:;
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0C58;
L_089A0C58:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A0C7C; }
    goto L_089A0C60;
L_089A0C60:;
    a0 = s0 + 0;
    { rv_t r_ = func_089E01C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0C68;
L_089A0C68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A0C7C:;
    func_089A0C94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A0C84;
L_089A0C84:;
    a0 = s0 + 152;
    { rv_t r_ = func_088DFEC0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0C8C;
L_089A0C8C:;
    ST32(s0+152, s1);
    goto L_089A0C60;
}

/* 089A0C94 */
void func_089A0C94(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0C94:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089A0D08; }
    goto L_089A0CB4;
L_089A0CB4:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089A0D08; }
    goto L_089A0CCC;
L_089A0CCC:;
    a1 = 0x10000u;
    a1 = a1 | 0x9a99;
    goto L_089A0CD4;
L_089A0CD4:;
    a0 = s1 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0CDC;
L_089A0CDC:;
    s0 = s0 + 1;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089A0CF4; }
    goto L_089A0CEC;
L_089A0CEC:;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0CF4;
L_089A0CF4:;
    a1 = 0x6050000u;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    a1 = a1 | 0x5e5a;
    if (cnd_) { goto L_089A0CD4; }
    goto L_089A0D04;
L_089A0D04:;
    goto L_089A0D08;
L_089A0D08:;
    sp = sp + 16;
    return;
}

/* 089A0D18 */
rv_t func_089A0D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0D18:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+152);
    cnd_ = v1 == v0;
    a0 = a0 + 152;
    if (cnd_) { goto L_089A0D48; }
    goto L_089A0D38;
L_089A0D38:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0D40;
L_089A0D40:;
    a0 = s0 + 0;
    func_089A0C94(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A0D48;
L_089A0D48:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0D50;
L_089A0D50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A0D60 */
rv_t func_089A0D60(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0D60:;
    sp = sp - 16;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089A0DA0; }
    goto L_089A0D78;
L_089A0D78:;
    v1 = D_08AEE930 - (-5840);
    f1 = BITSF(LD32(a0+156));
    f0 = BITSF(LD32(v1-5840));
    v0 = D_08B2858C - (-31348);
    f2 = BITSF(LD32(v0-31348));
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a1 = 1;
    if (cnd_) { goto L_089A0DB4; }
    goto L_089A0DA0;
L_089A0DA0:;
    goto L_089A0DA4;
L_089A0DA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A0DB4:;
    v0 = D_08C2A76C - (-22676);
    ST32(a0+156, FBITS(f2));
    a0 = LD32(v0-22676);
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0DC4;
L_089A0DC4:;
    s1 = v0 + 0;
    v1 = 0 < s0;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A0DA0; }
    goto L_089A0DDC;
L_089A0DDC:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0DEC;
L_089A0DEC:;
    a2 = v0 + 0;
    v0 = D_08AEE934 - (-5836);
    f12 = BITSF(LD32(v0-5836));
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0E04;
L_089A0E04:;
    goto L_089A0DA4;
}

/* 089A0E0C */
void func_089A0E0C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0E0C:;
    sp = sp - 16;
    a2 = 0x9a450000u;
    a2 = a2 | 0x832;
    s0 = a0 + 0;
    s1 = D_08C2A7C0 - (-22592);
    func_0899F888(a0, a1, a2);
    goto L_089A0E30;
L_089A0E30:;
    v0 = s0 + 184;
    v1 = s0 + 196;
    ST32(s0+172, 0);
    a1 = (u32)-1;
    ST32(v0+8, 0);
    ST32(v0+4, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    v1 = 1;
    v0 = LD32(s0+112);
    ST8(s0+212, v1);
    v0 = (v0 & ~(0x3u << 3)) | ((0 & 0x3) << 3);
    v0 = v0 | 0x8000;
    v0 = (v0 & ~(0x3u << 16)) | ((0 & 0x3) << 16);
    v0 = v0 | 0x4;
    ST32(s0+112, v0);
    v0 = D_08AFC108 - (-16120);
    v0 = v0 - 16120;
    ST8(s0+176, 0);
    a0 = LD32(s0+4);
    a2 = LD_U8(s1-22592);
    ST32(s0, v0);
    v0 = 29;
    v1 = LD32(a0+52);
    ST32(s0+144, v0);
    ST32(s0+160, a1);
    ST32(s0+152, v1);
    ST32(s0+184, 0);
    ST32(s0+196, 0);
    ST32(s0+208, 0);
    ST32(s0+164, a1);
    ST32(s0+168, a1);
    cnd_ = a2 == 0;
    ST32(s0+216, 0);
    if (cnd_) { goto L_089A0ED8; }
    goto L_089A0EB8;
L_089A0EB8:;
    v0 = LD32(s0+112);
    v0 = v0 | 0x20;
    ST32(s0+112, v0);
    sp = sp + 16;
    return;
L_089A0ED8:;
    v0 = func_089A0FA0();
    goto L_089A0EE0;
L_089A0EE0:;
    ST8(s1-22592, v0);
    goto L_089A0EB8;
}

/* 089A0EE8 */
rv_t func_089A0EE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0EE8:;
    sp = sp - 16;
    v0 = D_08AFC108 - (-16120);
    s0 = a0 + 0;
    v0 = v0 - 16120;
    v1 = (u32)-1;
    a1 = LD32(a0+160);
    ST32(s0, v0);
    cnd_ = a1 == v1;
    a0 = a0 + 160;
    if (cnd_) { goto L_089A0F1C; }
    goto L_089A0F14;
L_089A0F14:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0F1C;
L_089A0F1C:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0F30;
L_089A0F30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A0F40 */
rv_t func_089A0F40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A0F40:;
    sp = sp - 16;
    v0 = D_08AFC108 - (-16120);
    s0 = a0 + 0;
    v0 = v0 - 16120;
    v1 = (u32)-1;
    a1 = LD32(a0+160);
    ST32(s0, v0);
    cnd_ = a1 == v1;
    a0 = a0 + 160;
    if (cnd_) { goto L_089A0F74; }
    goto L_089A0F6C;
L_089A0F6C:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A0F74;
L_089A0F74:;
    v0 = D_08AFC268 - (-15768);
    v0 = v0 - 15768;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_089DF648(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0F88;
L_089A0F88:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0F90;
L_089A0F90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A0FA0 */
u32 func_089A0FA0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089A0FA0:;
    sp = sp - 48;
    a0 = 0xd0cd0000u;
    a1 = 0x9a450000u;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x832;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A0FDC;
L_089A0FDC:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A100C; }
    goto L_089A0FE8;
L_089A0FE8:;
    sp = sp + 48;
    return v0;
L_089A100C:;
    v0 = D_08AEE938 - (-5832);
    f12 = BITSF(LD32(v0-5832));
    a1 = 0xe7ef0000u;
    a1 = a1 | 0x89a5;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1020;
L_089A1020:;
    v0 = D_08AEE93C - (-5828);
    f12 = BITSF(LD32(v0-5828));
    a0 = LD32(sp);
    a1 = 0x51cf0000u;
    s2 = D_08C2A788 - (-22648);
    a1 = a1 | 0x80d7;
    ST32(s2-22648, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1040;
L_089A1040:;
    v0 = D_08AEE940 - (-5824);
    f22 = BITSF(LD32(v0-5824));
    a0 = LD32(sp);
    a1 = 0xe8f30000u;
    v0 = D_08C2A78C - (-22644);
    a1 = a1 | 0x2104;
    f12 = f22;
    ST32(v0-22644, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1064;
L_089A1064:;
    v0 = D_08AEE944 - (-5820);
    f12 = BITSF(LD32(v0-5820));
    a0 = LD32(sp);
    a1 = 0x863f0000u;
    s1 = D_08C2A790 - (-22640);
    a1 = a1 | 0xc255;
    ST32(s1-22640, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1084;
L_089A1084:;
    v0 = D_08AEE948 - (-5816);
    f21 = BITSF(LD32(v0-5816));
    a0 = LD32(sp);
    a1 = 0xab720000u;
    v0 = D_08C2A794 - (-22636);
    a1 = a1 | 0x1566;
    f12 = f21;
    ST32(v0-22636, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A10A8;
L_089A10A8:;
    v0 = D_08AEE94C - (-5812);
    f20 = BITSF(LD32(v0-5812));
    a0 = LD32(sp);
    a1 = 0x80d0000u;
    f12 = f20;
    v0 = D_08C2A798 - (-22632);
    a1 = a1 | 0x46dd;
    ST32(v0-22632, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A10CC;
L_089A10CC:;
    a1 = 0x4b490000u;
    a0 = LD32(sp);
    f12 = f20;
    v0 = D_08C2A79C - (-22628);
    a1 = a1 | 0x75e2;
    ST32(v0-22628, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A10E8;
L_089A10E8:;
    a1 = 0x49c30000u;
    a0 = LD32(sp);
    f12 = f20;
    v0 = D_08C2A7A0 - (-22624);
    a1 = a1 | 0xbae4;
    ST32(v0-22624, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1104;
L_089A1104:;
    a1 = 0x55e20000u;
    a0 = LD32(sp);
    v0 = D_08C2A7A4 - (-22620);
    a1 = a1 | 0x8870;
    f12 = f21;
    ST32(v0-22620, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1120;
L_089A1120:;
    a1 = 0x65c40000u;
    a0 = LD32(sp);
    v0 = D_08C2A7A8 - (-22616);
    f12 = f21;
    a1 = a1 | 0xecc;
    ST32(v0-22616, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A113C;
L_089A113C:;
    v0 = D_08AEE950 - (-5808);
    f12 = BITSF(LD32(v0-5808));
    a0 = LD32(sp);
    a1 = 0xc0240000u;
    v0 = D_08C2A7AC - (-22612);
    a1 = a1 | 0xd34a;
    ST32(v0-22612, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A115C;
L_089A115C:;
    a1 = 0xf6c0000u;
    a0 = LD32(sp);
    v0 = D_08C2A7B0 - (-22608);
    f12 = f22;
    a1 = a1 | 0x7523;
    ST32(v0-22608, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1178;
L_089A1178:;
    v0 = D_08AEE954 - (-5804);
    f20 = BITSF(LD32(v0-5804));
    a0 = LD32(sp);
    a1 = 0xfc180000u;
    v0 = D_08C2A7B4 - (-22604);
    a1 = a1 | 0x27b9;
    f12 = f20;
    ST32(v0-22604, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A119C;
L_089A119C:;
    v0 = D_08AEE958 - (-5800);
    f12 = BITSF(LD32(v0-5800));
    a0 = LD32(sp);
    a1 = 0xfb140000u;
    v0 = D_08C2A7B8 - (-22600);
    a1 = a1 | 0x905a;
    ST32(v0-22600, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A11BC;
L_089A11BC:;
    a1 = 0xd38e0000u;
    a0 = LD32(sp);
    s0 = D_08C2A7BC - (-22596);
    a1 = a1 | 0x50c3;
    a2 = 0 + 0;
    ST32(s0-22596, FBITS(f0));
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A11D8;
L_089A11D8:;
    a1 = 0x45a60000u;
    a0 = LD32(sp);
    v1 = D_08C2A774 - (-22668);
    a1 = a1 | 0xc0d0;
    a2 = 0 + 0;
    ST32(v1-22668, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A11F4;
L_089A11F4:;
    a1 = 0x90150000u;
    a0 = LD32(sp);
    v1 = D_08C2A778 - (-22664);
    a1 = a1 | 0xce1e;
    a2 = 0 + 0;
    ST32(v1-22664, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A1210;
L_089A1210:;
    a1 = 0x734e0000u;
    a0 = LD32(sp);
    v1 = D_08C2A77C - (-22660);
    a1 = a1 | 0xb3fb;
    a2 = 0 + 0;
    ST32(v1-22660, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A122C;
L_089A122C:;
    a1 = 0xbfba0000u;
    a0 = LD32(sp);
    a2 = 0x62610000u;
    v1 = D_08C2A780 - (-22656);
    a1 = a1 | 0xf153;
    a2 = a2 | 0x61a8;
    ST32(v1-22656, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A124C;
L_089A124C:;
    v1 = D_08AEE95C - (-5796);
    f2 = BITSF(LD32(s2-22648));
    f3 = BITSF(LD32(v1-5796));
    f1 = BITSF(LD32(s0-22596));
    f2 = f2 * f20;
    f0 = BITSF(LD32(s1-22640));
    f1 = f1 * f20;
    v1 = D_08C2A784 - (-22652);
    f2 = f2 * f3;
    f0 = f0 * f3;
    ST32(s0-22596, FBITS(f1));
    ST32(s1-22640, FBITS(f0));
    ST32(s2-22648, FBITS(f2));
    ST32(v1-22652, v0);
    v0 = 1;
    goto L_089A0FE8;
}

/* 089A128C */
rv_t func_089A128C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A128C:;
    sp = sp - 16;
    v1 = D_08AEE960 - (-5792);
    v0 = D_08B2858C - (-31348);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+216));
    f0 = BITSF(LD32(v1-5792));
    f2 = BITSF(LD32(v0-31348));
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a1 = 1;
    if (cnd_) { goto L_089A12DC; }
    goto L_089A12C8;
L_089A12C8:;
    goto L_089A12CC;
L_089A12CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A12DC:;
    v0 = D_08C2A780 - (-22656);
    ST32(a0+216, FBITS(f2));
    a0 = LD32(v0-22656);
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A12EC;
L_089A12EC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089A12C8; }
    goto L_089A12F4;
L_089A12F4:;
    v1 = LD32(s0+152);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089A12C8; }
    goto L_089A1300;
L_089A1300:;
    v1 = LD32(v1);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1310;
L_089A1310:;
    a2 = v0 + 0;
    v0 = D_08AEE964 - (-5788);
    f12 = BITSF(LD32(v0-5788));
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1328;
L_089A1328:;
    goto L_089A12CC;
}

/* 089A1330 */
rv_t func_089A1330(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A1330:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+68);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A134C;
L_089A134C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DFC98(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1354;
L_089A1354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A1364 */
rv_t func_089A1364(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A1364:;
    sp = sp - 16;
    v1 = LD32(a0+152);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089A13FC; }
    goto L_089A1380;
L_089A1380:;
    v0 = LD_U8(v1+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A14B8; }
    goto L_089A138C;
L_089A138C:;
    v0 = LD32(v1+236);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A1400; }
    goto L_089A1398;
L_089A1398:;
    v0 = LD_U8(v0+124);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A1400; }
    goto L_089A13A4;
L_089A13A4:;
    a0 = LD32(v1+92);
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089A13D8; }
    goto L_089A13B0;
L_089A13B0:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A13C0;
L_089A13C0:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v1 = LD32(s0+152);
    if (cnd_) { goto L_089A13D8; }
    goto L_089A13D4;
L_089A13D4:;
    s1 = 1;
    goto L_089A13D8;
L_089A13D8:;
    v0 = D_08C2A7A4 - (-22620);
    f0 = BITSF(LD32(v1+344));
    f1 = BITSF(LD32(v0-22620));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089A1424; }
    goto L_089A13F4;
L_089A13F4:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_089A1414; }
    goto L_089A13FC;
L_089A13FC:;
    v0 = 0 + 0;
    goto L_089A1400;
L_089A1400:;
    goto L_089A1404;
L_089A1404:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A1414:;
    a0 = s0 + 0;
    { rv_t r_ = func_089A128C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A141C;
L_089A141C:;
    v0 = 0 + 0;
    goto L_089A1400;
L_089A1424:;
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD_U8(s0+176); goto L_089A1438; }
    goto L_089A142C;
L_089A142C:;
    v0 = 1;
    ST8(s0+176, v0);
    v0 = LD_U8(s0+176);
    goto L_089A1438;
L_089A1438:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A1400; }
    goto L_089A1440;
L_089A1440:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089A1404; }
    goto L_089A1448;
L_089A1448:;
    a0 = LD32(s0+152);
    { u64 r_ = func_089DD748(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A1450;
L_089A1450:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_089A146C; }
    goto L_089A1458;
L_089A1458:;
    v0 = LD32(s0+152);
    v1 = LD_U8(v0+196);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089A1414; }
    goto L_089A1468;
L_089A1468:;
    v0 = LD32(s0+4);
    goto L_089A146C;
L_089A146C:;
    v0 = LD32(v0+56);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A148C; }
    goto L_089A1478;
L_089A1478:;
    v1 = LD32(v0+36);
    v0 = 0x310000u;
    v0 = v0 | 0xf42e;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = 1; goto L_089A148C; }
    goto L_089A148C;
L_089A148C:;
    ST8(s0+212, a0);
    v0 = D_08C2A7C0 - (-22592);
    v1 = LD_U8(v0-22592);
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A14A8; }
    goto L_089A14A0;
L_089A14A0:;
    v0 = a0 + 0;
    goto L_089A1400;
L_089A14A8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0899F8D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A14B0;
L_089A14B0:;
    a0 = v0 + 0;
    goto L_089A14A0;
L_089A14B8:;
    { rv_t r_ = func_0899F8D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A14C0;
L_089A14C0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A14D4; }
    goto L_089A14C8;
L_089A14C8:;
    v0 = LD32(s0+152);
    v1 = LD32(v0+520);
    v1 = (v1 >> 11) & 0x1;
    goto L_089A14D4;
L_089A14D4:;
    v0 = v1 + 0;
    goto L_089A1400;
}

/* 089A14DC */
rv_t func_089A14DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[480] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 480);
L_089A14DC:;
    sp = sp - 480;
    v0 = 0 + 0;
    s3 = a0 + 0;
    a2 = LD32(a0+152);
    cnd_ = a2 == 0;
    ST32(sp+112, a1);
    if (cnd_) { goto L_089A166C; }
    goto L_089A1520;
L_089A1520:;
    v0 = LD32(a0+112);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_089A19B8; }
    goto L_089A1530;
L_089A1530:;
    v0 = LD32(s3+72);
    v1 = 0x10000u;
    v0 = v0 | v1;
    ST32(s3+72, v0);
    v1 = LD_U8(a2+195);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(a2); goto L_089A16CC; }
    goto L_089A154C;
L_089A154C:;
    a0 = LD32(s3+152);
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1554;
L_089A1554:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A16B0; }
    goto L_089A155C;
L_089A155C:;
    v0 = LD32(s3+152);
    goto L_089A1560;
L_089A1560:;
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    s6 = LD32(v0+100);
    cnd_ = s6 == 0;
    s2 = 0x10000u;
    if (cnd_) { goto L_089A160C; }
    goto L_089A1578;
L_089A1578:;
    s2 = s2 | 0x9a99;
    s5 = 0 + 0;
    fp = D_08B45AA8 - (23208);
    s7 = D_08C2A784 - (-22652);
    s1 = s3 + 164;
    goto L_089A158C;
L_089A158C:;
    a2 = LD32(s7-22652);
    v1 = D_08B45A9C - (23196);
    a0 = v1 + 23196;
    t0 = 143;
    a3 = 0 + 0;
    a1 = fp + 23208;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A15A8;
L_089A15A8:;
    a0 = 72;
    s4 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A15B4;
L_089A15B4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s4 + 0;
    a2 = 1;
    func_0880FBFC(a0, a1, a2);
    goto L_089A15C8;
L_089A15C8:;
    v1 = LD32(s0);
    a2 = s2 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    a1 = s6 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A15E4;
L_089A15E4:;
    a1 = s2 + 0;
    s2 = 0x6050000u;
    s5 = s5 + 1;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s2 = s2 | 0x5e5a;
    if (cnd_) { goto L_089A16A0; }
    goto L_089A15FC;
L_089A15FC:;
    v0 = s5 < 0x2u;
    goto L_089A1600;
L_089A1600:;
    ST32(s1, s4);
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_089A158C; }
    goto L_089A160C;
L_089A160C:;
    v0 = D_08C2A774 - (-22668);
    a0 = LD32(v0-22668);
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A161C;
L_089A161C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A1650; }
    goto L_089A1624;
L_089A1624:;
    a0 = LD32(s3+152);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1638;
L_089A1638:;
    a2 = v0 + 0;
    v0 = D_08AEE968 - (-5784);
    f12 = BITSF(LD32(v0-5784));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1650;
L_089A1650:;
    v0 = D_08C2A7A4 - (-22620);
    a0 = LD32(s3+152);
    f12 = BITSF(LD32(v0-22620));
    func_0899EA24(a0, f12);
    goto L_089A1660;
L_089A1660:;
    a1 = LD32(sp+112);
    a0 = s3 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A166C;
L_089A166C:;
    sp = sp + 480;
    return (rv_t){ v0, v1, f0 };
L_089A16A0:;
    func_0880D928(a0, a1);
    goto L_089A16A8;
L_089A16A8:;
    v0 = s5 < 0x2u;
    goto L_089A1600;
L_089A16B0:;
    a0 = LD32(s3+152);
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A16B8;
L_089A16B8:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A16C4;
L_089A16C4:;
    v0 = LD32(s3+152);
    goto L_089A1560;
L_089A16CC:;
    s1 = s3 + 184;
    a0 = a2 + 0;
    v0 = LD32(v1+276);
    a1 = s1 + 0;
    t_ = v0;
    s0 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A16E4;
L_089A16E4:;
    a0 = LD32(s3+152);
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A16F8;
L_089A16F8:;
    f12 = BITSF(LD32(v0+8));
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = !fcc;
    f13 = BITSF(LD32(v0+32));
    if (cnd_) { goto L_089A1720; }
    goto L_089A1710;
L_089A1710:;
    fcc = FCMP(f13, f0, 2);
    cnd_ = fcc;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    if (cnd_) { goto L_089A172C; }
    goto L_089A1720;
L_089A1720:;
    f0 = func_08A9F5FC(f12, f13);
    goto L_089A1728;
L_089A1728:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    goto L_089A172C;
L_089A172C:;
    {v[20]=0.31830988618f;}
    {u32 a_=sp+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = 0 + 0;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[20];float d0=s0*t0;v[20]=d0;}
    {u32 a_=sp+(128);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = 0x3f800000u;
    {v[16]=BITSF(v1);}
    {v[17]=BITSF(v0);}
    {float s0=v[20];float d0=cosf(s0*1.57079632679f);v[24]=d0;}
    {float s0=v[20];float d0=sinf(s0*1.57079632679f);v[20]=d0;}
    {v[18]=BITSF(v1);}
    v0 = LD32(s3+184);
    f20 = BITSF(0);
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[20];v[16]=s0*t0;v[17]=s1*t0;v[18]=s2*t0;}
    {float s0=v[24];float d0=s0;v[19]=d0;}
    {v1=FBITS(v[19]);}
    f4 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    {v1=FBITS(v[17]);}
    f3 = BITSF(v1);
    ST32(s0, FBITS(f2));
    {v1=FBITS(v[18]);}
    {u32 a_=sp+(192);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    ST32(s0+4, FBITS(f3));
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    ST32(s0+8, v1);
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    ST32(s0+12, FBITS(f4));
    v0 = D_08AEE968 - (-5784);
    {u32 a_=sp+(224);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = LD32(s0);
    a2 = LD32(s0+12);
    a0 = LD32(s0+4);
    a1 = LD32(s0+8);
    f0 = BITSF(LD32(v0-5784));
    ST32(sp+32, v1);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    ST32(sp+20, FBITS(f0));
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+36, a0);
    ST32(sp+40, a1);
    ST32(sp+44, a2);
    ST32(sp+16, FBITS(f20));
    ST32(sp+24, FBITS(f20));
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
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
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    v0 = LD32(sp+60);
    v1 = LD32(sp+64);
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+68);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+72);
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    v0 = LD32(sp+76);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    v1 = LD32(sp+80);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+4);
    v0 = LD32(s1+8);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {v[5]=BITSF(v1);}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {v[6]=BITSF(v0);}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    ST32(sp+100, v0);
    {v1=FBITS(v[0]);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD_U8(s3+212);
    ST32(sp+96, v1);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+104, FBITS(f3));
    ST32(sp+16, v1);
    ST32(s1+8, FBITS(f3));
    ST32(s1+4, FBITS(f0));
    ST32(s3+184, v1);
    ST32(sp+20, FBITS(f0));
    cnd_ = v0 != 0;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_089A1998; }
    goto L_089A196C;
L_089A196C:;
    f0 = BITSF(LD32(s3+188));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEE970 - (-5776);
    if (cnd_) { goto L_089A1990; }
    goto L_089A1980;
L_089A1980:;
    v0 = D_08AEE96C - (-5780);
    f0 = BITSF(LD32(v0-5780));
    goto L_089A1988;
L_089A1988:;
    ST32(s3+208, FBITS(f0));
    goto L_089A154C;
L_089A1990:;
    f0 = BITSF(LD32(v0-5776));
    goto L_089A1988;
L_089A1998:;
    a0 = LD32(s3+152);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A19AC;
L_089A19AC:;
    f0 = BITSF(LD32(v0+4));
    ST32(s3+180, FBITS(f0));
    goto L_089A196C;
L_089A19B8:;
    v1 = LD32(v0+68);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A19C4;
L_089A19C4:;
    a2 = LD32(s3+152);
    goto L_089A1530;
}

/* 089A19CC */
rv_t func_089A19CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[672] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 672);
L_089A19CC:;
    sp = sp - 672;
    s4 = a0 + 0;
    a0 = LD32(a0+152);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089A1A58; }
    goto L_089A1A14;
L_089A1A14:;
    a0 = s4 + 0;
    { rv_t r_ = func_089E01C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1A1C;
L_089A1A1C:;
    sp = sp + 672;
    return (rv_t){ v0, v1, f0 };
L_089A1A58:;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1A60;
L_089A1A60:;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089A1A78; }
    goto L_089A1A68;
L_089A1A68:;
    a0 = LD32(s4+152);
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089A1BC0; }
    goto L_089A1A78;
L_089A1A78:;
    f0 = BITSF(LD32(v0-31328));
    v0 = D_08C2A7A0 - (-22624);
    f12 = BITSF(LD32(v0-22624));
    a0 = LD32(s4+152);
    f12 = f12 * f0;
    func_0899EA24(a0, f12);
    goto L_089A1A90;
L_089A1A90:;
    v1 = LD32(s4+160);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = D_08C2A7A8 - (-22616);
    if (cnd_) { goto L_089A1B4C; }
    goto L_089A1AA0;
L_089A1AA0:;
    a0 = LD32(s4+152);
    f20 = BITSF(LD32(v0-22616));
    v1 = LD32(a0);
    f0 = BITSF(LD32(s4+156));
    v0 = LD32(v1+244);
    f20 = f20 * f0;
    v1 = D_08AEE974 - (-5772);
    f0 = BITSF(LD32(v1-5772));
    t_ = v0;
    f20 = f20 + f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1AC8;
L_089A1AC8:;
    a0 = LD32(s4+160);
    a1 = v0 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1AD4;
L_089A1AD4:;
    a0 = LD32(s4+160);
    f12 = f20;
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1AE0;
L_089A1AE0:;
    a1 = LD32(s4+164);
    goto L_089A1AE4;
L_089A1AE4:;
    s0 = D_08B30B5C - (2908);
    s0 = s0 + 2908;
    a0 = s0 + 0;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A1AF4;
L_089A1AF4:;
    a1 = LD32(s4+168);
    a0 = s0 + 0;
    s2 = v0 + 0;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A1B04;
L_089A1B04:;
    v1 = 0 < v0;
    a0 = v0 + 0;
    v0 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = D_08C2A7AC - (-22612);
    if (cnd_) { goto L_089A1A14; }
    goto L_089A1B1C;
L_089A1B1C:;
    f3 = BITSF(LD32(v0-22612));
    f1 = BITSF(LD32(s4+156));
    v0 = D_08AEE974 - (-5772);
    f2 = BITSF(LD32(v0-5772));
    f1 = f1 * f3;
    f1 = f1 + f2;
    ST32(s2+60, FBITS(f1));
    f0 = BITSF(LD32(s4+156));
    f0 = f0 * f3;
    f0 = f0 + f2;
    ST32(a0+60, FBITS(f0));
    goto L_089A1A14;
L_089A1B4C:;
    v0 = D_08C2A77C - (-22660);
    a0 = LD32(v0-22660);
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A1B5C;
L_089A1B5C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A1AE0; }
    goto L_089A1B64;
L_089A1B64:;
    a0 = LD32(s4+152);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1B78;
L_089A1B78:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1B84;
L_089A1B84:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s4+164); goto L_089A1AE4; }
    goto L_089A1B8C;
L_089A1B8C:;
    a0 = LD32(s4+152);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1BA0;
L_089A1BA0:;
    a2 = v0 + 0;
    v0 = D_08AEE974 - (-5772);
    f12 = BITSF(LD32(v0-5772));
    a1 = s4 + 160;
    a0 = s0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1BB8;
L_089A1BB8:;
    a1 = LD32(s4+164);
    goto L_089A1AE4;
L_089A1BC0:;
    s6 = s4 + 184;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A1BC8;
L_089A1BC8:;
    f7 = BITSF(0);
    f2 = BITSF(LD32(s4+184));
    f1 = BITSF(LD32(s6+8));
    f0 = BITSF(LD32(s6+4));
    ST32(sp+388, v0);
    v0 = D_08C2A78C - (-22644);
    fcc = FCMP(f7, f2, 12);
    f3 = BITSF(LD32(v0-22644));
    v0 = D_08C2A7B4 - (-22604);
    ST32(sp+8, FBITS(f1));
    v1 = D_08C2A7B0 - (-22608);
    f1 = BITSF(LD32(v0-22604));
    v0 = D_08B285A0 - (-31328);
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f2));
    f0 = BITSF(LD32(v0-31328));
    f2 = BITSF(LD32(v1-22608));
    ST32(sp+24, FBITS(f7));
    f1 = f1 * f0;
    f3 = f3 * f0;
    ST32(sp+20, FBITS(f7));
    f2 = f2 * f0;
    cnd_ = !fcc;
    ST32(sp+16, FBITS(f7));
    if (cnd_) { goto L_089A2A64; }
    goto L_089A1C28;
L_089A1C28:;
    v0 = D_08AEE974 - (-5772);
    f6 = BITSF(LD32(v0-5772));
    goto L_089A1C30;
L_089A1C30:;
    f4 = BITSF(LD32(sp));
    fcc = FCMP(f3, f4, 12);
    cnd_ = fcc;
    f0 = f6 * f3;
    if (cnd_) { goto L_089A1C60; }
    goto L_089A1C44;
L_089A1C44:;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    f5 = BITSF(0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(sp+8)); goto L_089A1C68; }
    goto L_089A1C5C;
L_089A1C5C:;
    f0 = f6 * f3;
    goto L_089A1C60;
L_089A1C60:;
    f5 = f4 - f0;
    f4 = BITSF(LD32(sp+8));
    goto L_089A1C68;
L_089A1C68:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    ST32(sp, FBITS(f5));
    if (cnd_) { goto L_089A2A58; }
    goto L_089A1C7C;
L_089A1C7C:;
    v0 = D_08AEE974 - (-5772);
    f5 = BITSF(LD32(v0-5772));
    goto L_089A1C84;
L_089A1C84:;
    fcc = FCMP(f3, f4, 12);
    cnd_ = fcc;
    f0 = f5 * f3;
    if (cnd_) { goto L_089A1CB0; }
    goto L_089A1C94;
L_089A1C94:;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    f6 = BITSF(0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(sp+4)); goto L_089A1CB8; }
    goto L_089A1CAC;
L_089A1CAC:;
    f0 = f5 * f3;
    goto L_089A1CB0;
L_089A1CB0:;
    f6 = f4 - f0;
    f4 = BITSF(LD32(sp+4));
    goto L_089A1CB8;
L_089A1CB8:;
    f5 = BITSF(0);
    fcc = FCMP(f5, f4, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f6));
    if (cnd_) { goto L_089A2A28; }
    goto L_089A1CCC;
L_089A1CCC:;
    fcc = FCMP(f1, f4, 12);
    cnd_ = fcc;
    f1 = f4 - f1;
    if (cnd_) { goto L_089A1CE0; }
    goto L_089A1CDC;
L_089A1CDC:;
    f1 = f5;
    goto L_089A1CE0;
L_089A1CE0:;
    ST32(sp+4, FBITS(f1));
    goto L_089A1CE4;
L_089A1CE4:;
    v0 = D_08B2858C - (-31348);
    goto L_089A1CE8;
L_089A1CE8:;
    f1 = BITSF(LD32(v0-31348));
    f0 = BITSF(LD32(s4+172));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_089A1D04; }
    goto L_089A1D00;
L_089A1D00:;
    v1 = 0 + 0;
    goto L_089A1D04;
L_089A1D04:;
    v0 = LD32(s4+152);
    a0 = LD32(v0+92);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089A1D1C; }
    goto L_089A1D14;
L_089A1D14:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_089A29AC; }
    goto L_089A1D1C;
L_089A1D1C:;
    f7 = BITSF(0);
    ST32(sp+16, FBITS(f7));
    f20 = f7;
    ST32(sp+24, FBITS(f7));
    goto L_089A1D2C;
L_089A1D2C:;
    ST32(sp+20, FBITS(f20));
    goto L_089A1D30;
L_089A1D30:;
    f5 = BITSF(LD32(sp+16));
    f20 = BITSF(LD32(sp+20));
    f7 = BITSF(LD32(sp+24));
    v1 = FBITS(f5);
    v0 = FBITS(f20);
    f9 = BITSF(0);
    {u32 a_=sp+(400);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v1);}
    v1 = FBITS(f7);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f9, 2);
    cnd_ = fcc;
    s5 = D_08C2A790 - (-22640);
    if (cnd_) { goto L_089A1DBC; }
    goto L_089A1D78;
L_089A1D78:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f7 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    f5 = BITSF(v0);
    f20 = BITSF(v1);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f7));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f7));
    s5 = D_08C2A790 - (-22640);
    goto L_089A1DBC;
L_089A1DBC:;
    f4 = BITSF(LD32(s5-22640));
    f6 = BITSF(LD32(s4+204));
    fp = D_08C2A7B8 - (-22600);
    f7 = f7 * f4;
    v0 = FBITS(f6);
    f3 = BITSF(LD32(fp-22600));
    f5 = f5 * f4;
    v1 = FBITS(f7);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    f20 = f20 * f3;
    ST32(sp+24, FBITS(f7));
    fcc = FCMP(f2, f0, 12);
    f8 = f6;
    ST32(sp+16, FBITS(f5));
    cnd_ = !fcc;
    ST32(sp+20, FBITS(f20));
    if (cnd_) { goto L_089A2990; }
    goto L_089A1E08;
L_089A1E08:;
    fcc = FCMP(f9, f7, 12);
    cnd_ = !fcc;
    v0 = D_08AEE978 - (-5768);
    if (cnd_) { goto L_089A2988; }
    goto L_089A1E18;
L_089A1E18:;
    v0 = D_08AEE974 - (-5772);
    f5 = BITSF(LD32(v0-5772));
    goto L_089A1E20;
L_089A1E20:;
    v0 = D_08C2A788 - (-22648);
    f0 = BITSF(LD32(v0-22648));
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f4 = BITSF(LD32(sp+24));
    f0 = f0 * f2;
    v1 = FBITS(f4);
    f0 = f5 * f0;
    v1 = (v1 >> 0) & 0x7fffffff;
    f3 = BITSF(v1);
    f0 = f8 + f0;
    v0 = FBITS(f0);
    ST32(s4+204, FBITS(f0));
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f6 = f0;
    if (cnd_) { goto L_089A1E74; }
    goto L_089A1E6C;
L_089A1E6C:;
    f6 = f4;
    ST32(s4+204, FBITS(f4));
    goto L_089A1E74;
L_089A1E74:;
    f1 = BITSF(LD32(s5-22640));
    goto L_089A1E78;
L_089A1E78:;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f6, f0, 12);
    cnd_ = fcc;
    f5 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_089A1EA4; }
    goto L_089A1E8C;
L_089A1E8C:;
    fcc = FCMP(f1, f6, 12);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089A1EA4; }
    goto L_089A1E9C;
L_089A1E9C:;
    f0 = f6;
    f5 = BITSF(LD32(sp+16));
    goto L_089A1EA4;
L_089A1EA4:;
    f4 = BITSF(LD32(s4+196));
    ST32(s4+204, FBITS(f0));
    v0 = FBITS(f5);
    v1 = FBITS(f4);
    v0 = (v0 >> 0) & 0x7fffffff;
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    f1 = BITSF(v0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f6 = f5;
    if (cnd_) { goto L_089A2970; }
    goto L_089A1ED4;
L_089A1ED4:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f5, 12);
    cnd_ = !fcc;
    v0 = D_08AEE978 - (-5768);
    if (cnd_) { goto L_089A2968; }
    goto L_089A1EE8;
L_089A1EE8:;
    v0 = D_08AEE974 - (-5772);
    f5 = BITSF(LD32(v0-5772));
    goto L_089A1EF0;
L_089A1EF0:;
    v0 = D_08C2A788 - (-22648);
    v1 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v1-31328));
    f0 = BITSF(LD32(v0-22648));
    v0 = FBITS(f6);
    f0 = f0 * f2;
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    f0 = f5 * f0;
    f0 = f4 + f0;
    v1 = FBITS(f0);
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    ST32(s4+196, FBITS(f0));
    if (cnd_) { goto L_089A1F38; }
    goto L_089A1F34;
L_089A1F34:;
    ST32(s4+196, FBITS(f6));
    goto L_089A1F38;
L_089A1F38:;
    f0 = BITSF(LD32(s5-22640));
    goto L_089A1F3C;
L_089A1F3C:;
    s0 = s4 + 196;
    a2 = s5 - 22640;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a0 = s0 + 0;
    a1 = sp + 368;
    ST32(sp+368, FBITS(f0));
    f0 = func_089A5FB0(a0, a1, a2);
    goto L_089A1F58;
L_089A1F58:;
    f20 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(s4+200));
    ST32(s4+196, FBITS(f0));
    v1 = FBITS(f20);
    v0 = FBITS(f4);
    v1 = (v1 >> 0) & 0x7fffffff;
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    f1 = BITSF(v1);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f5 = f20;
    if (cnd_) { goto L_089A2950; }
    goto L_089A1F8C;
L_089A1F8C:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = D_08AEE978 - (-5768);
    if (cnd_) { goto L_089A2948; }
    goto L_089A1FA0;
L_089A1FA0:;
    v0 = D_08AEE974 - (-5772);
    f6 = BITSF(LD32(v0-5772));
    goto L_089A1FA8;
L_089A1FA8:;
    v0 = D_08C2A7BC - (-22596);
    f0 = BITSF(LD32(v0-22596));
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    v1 = FBITS(f5);
    f0 = f0 * f2;
    v1 = (v1 >> 0) & 0x7fffffff;
    f3 = BITSF(v1);
    f0 = f6 * f0;
    f0 = f4 + f0;
    v0 = FBITS(f0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    ST32(s4+200, FBITS(f0));
    if (cnd_) { goto L_089A1FF0; }
    goto L_089A1FEC;
L_089A1FEC:;
    ST32(s4+200, FBITS(f5));
    goto L_089A1FF0;
L_089A1FF0:;
    f0 = BITSF(LD32(fp-22600));
    goto L_089A1FF4;
L_089A1FF4:;
    a0 = s4 + 200;
    a2 = fp - 22600;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a1 = sp + 372;
    ST32(sp+372, FBITS(f0));
    f0 = func_089A5FB0(a0, a1, a2);
    goto L_089A200C;
L_089A200C:;
    ST32(s4+200, FBITS(f0));
    f2 = BITSF(LD32(s4+196));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v0 = LD32(s4+152);
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(sp+32, FBITS(f2));
    a0 = v0 + 0;
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    v1 = LD32(v0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2058;
L_089A2058:;
    f12 = BITSF(LD32(v0+8));
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = !fcc;
    f13 = BITSF(LD32(v0+32));
    if (cnd_) { goto L_089A2080; }
    goto L_089A2070;
L_089A2070:;
    fcc = FCMP(f13, f0, 2);
    cnd_ = fcc;
    f20 = f0;
    if (cnd_) { goto L_089A208C; }
    goto L_089A2080;
L_089A2080:;
    f0 = func_08A9F5FC(f12, f13);
    goto L_089A2088;
L_089A2088:;
    f20 = f0;
    goto L_089A208C;
L_089A208C:;
    a0 = LD32(s4+152);
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    f21 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A20A0;
L_089A20A0:;
    f12 = BITSF(LD32(v0+8));
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = !fcc;
    f13 = BITSF(LD32(v0+32));
    if (cnd_) { goto L_089A20C8; }
    goto L_089A20B8;
L_089A20B8:;
    fcc = FCMP(f13, f0, 2);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_089A20D4; }
    goto L_089A20C8;
L_089A20C8:;
    f0 = func_08A9F5FC(f12, f13);
    goto L_089A20D0;
L_089A20D0:;
    f2 = f0;
    goto L_089A20D4;
L_089A20D4:;
    v1 = D_08AEE97C - (-5764);
    f0 = BITSF(LD32(v1-5764));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    f1 = f2;
    if (cnd_) { goto L_089A2910; }
    goto L_089A20EC;
L_089A20EC:;
    v0 = D_08AEE980 - (-5760);
    f0 = BITSF(LD32(v0-5760));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-5764));
    if (cnd_) { goto L_089A2910; }
    goto L_089A2104;
L_089A2104:;
    v0 = D_08AEE984 - (-5756);
    f0 = BITSF(LD32(v0-5756));
    f21 = f20 + f0;
    goto L_089A2110;
L_089A2110:;
    f20 = f21 - f1;
    goto L_089A2114;
L_089A2114:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = D_08AEE978 - (-5768);
    if (cnd_) { goto L_089A2908; }
    goto L_089A2128;
L_089A2128:;
    v0 = D_08AEE974 - (-5772);
    f21 = BITSF(LD32(v0-5772));
    goto L_089A2130;
L_089A2130:;
    {v[0]=0.63661977236f;}
    a0 = LD32(s4+152);
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    s7 = D_08AEE98C - (-5748);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A214C;
L_089A214C:;
    v1 = FBITS(f20);
    f2 = BITSF(LD32(s7-5748));
    {u32 a_=sp+(416);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = (v1 >> 0) & 0x7fffffff;
    f0 = BITSF(v1);
    v1 = D_08AEE988 - (-5752);
    f1 = BITSF(LD32(v1-5752));
    {u32 a_=sp+(432);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    fcc = FCMP(f2, f20, 12);
    f0 = f0 * f1;
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
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A23F4; }
    goto L_089A21B0;
L_089A21B0:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A2334; }
    goto L_089A21C0;
L_089A21C0:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A2258; }
    goto L_089A21E8;
L_089A21E8:;
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
    if (cnd_) { goto L_089A2234; }
    goto L_089A2224;
L_089A2224:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A2234;
L_089A2234:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A2278; }
    goto L_089A2244;
L_089A2244:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A2278; }
    goto L_089A2254;
L_089A2254:;
    goto L_089A2258;
L_089A2258:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A2278; }
    goto L_089A226C;
L_089A226C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A2278;
L_089A2278:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A2308; }
    goto L_089A2298;
L_089A2298:;
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
    if (cnd_) { goto L_089A22E4; }
    goto L_089A22D4;
L_089A22D4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A22E4;
L_089A22E4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A2328; }
    goto L_089A22F4;
L_089A22F4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A2328; }
    goto L_089A2304;
L_089A2304:;
    goto L_089A2308;
L_089A2308:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A2328; }
    goto L_089A231C;
L_089A231C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A2328;
L_089A2328:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089A24AC; }
    goto L_089A2330;
L_089A2330:;
    goto L_089A2334;
L_089A2334:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A23C8; }
    goto L_089A2358;
L_089A2358:;
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
    if (cnd_) { goto L_089A23A4; }
    goto L_089A2394;
L_089A2394:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A23A4;
L_089A23A4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A23E8; }
    goto L_089A23B4;
L_089A23B4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A23E8; }
    goto L_089A23C4;
L_089A23C4:;
    goto L_089A23C8;
L_089A23C8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A23E8; }
    goto L_089A23DC;
L_089A23DC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A23E8;
L_089A23E8:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089A24AC; }
    goto L_089A23F0;
L_089A23F0:;
    goto L_089A23F4;
L_089A23F4:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A2488; }
    goto L_089A2418;
L_089A2418:;
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
    if (cnd_) { goto L_089A2464; }
    goto L_089A2454;
L_089A2454:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A2464;
L_089A2464:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A24A8; }
    goto L_089A2474;
L_089A2474:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A24A8; }
    goto L_089A2484;
L_089A2484:;
    goto L_089A2488;
L_089A2488:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A24A8; }
    goto L_089A249C;
L_089A249C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A24A8;
L_089A24A8:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089A24AC;
L_089A24AC:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    ST32(sp+48, 0);
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    ST32(sp+56, 0);
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    cnd_ = fcc;
    v0 = D_08C2A79C - (-22628);
    if (cnd_) { goto L_089A2504; }
    goto L_089A24EC;
L_089A24EC:;
    v0 = D_08AEE990 - (-5744);
    f0 = BITSF(LD32(v0-5744));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v0 = D_08C2A79C - (-22628);
    if (cnd_) { goto L_089A2528; }
    goto L_089A2504;
L_089A2504:;
    f0 = BITSF(LD32(v0-22628));
    v1 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v1-31328));
    f0 = f21 * f0;
    f0 = f0 * f1;
    f1 = BITSF(LD32(sp+52));
    f0 = f0 * f2;
    f1 = f1 + f0;
    ST32(sp+52, FBITS(f1));
    goto L_089A2528;
L_089A2528:;
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    f1 = BITSF(LD32(s7-5748));
    f0 = BITSF(LD32(sp+24));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s4+152); goto L_089A28F8; }
    goto L_089A25D0;
L_089A25D0:;
    f0 = BITSF(LD32(sp+32));
    goto L_089A25D4;
L_089A25D4:;
    a0 = LD32(s4+152);
    s2 = sp + 144;
    ST32(s4+184, FBITS(f0));
    f21 = BITSF(0);
    f0 = BITSF(LD32(sp+36));
    ST32(s6+4, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    ST32(s6+8, FBITS(f0));
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    s3 = s5 - 22640;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2604;
L_089A2604:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(528);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a1 = LD32(v0+32);
    v1 = LD32(v0+16);
    {u32 a_=sp+(512);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a0 = LD32(v0+28);
    v1 = LD32(v0+24);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(560);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(464);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v1 = LD32(sp+36);
    v0 = LD32(sp+32);
    {u32 a_=sp+(448);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[16]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[17]=BITSF(v1);}
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f4 = BITSF(v0);
    {v1=FBITS(v[20]);}
    {v0=FBITS(v[21]);}
    ST32(sp+32, v1);
    f3 = BITSF(v0);
    ST32(sp+40, FBITS(f4));
    {u32 a_=sp+(576);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+36, v0);
    ST32(sp+128, v1);
    ST32(sp+132, v0);
    ST32(sp+112, v1);
    v1 = D_08B285A0 - (-31328);
    ST32(sp+116, v0);
    v0 = D_08C2A798 - (-22632);
    f2 = BITSF(LD32(v0-22632));
    f1 = BITSF(LD32(v1-31328));
    ST32(sp+136, FBITS(f4));
    v0 = D_08C2A794 - (-22636);
    f1 = f1 * f2;
    ST32(sp+120, FBITS(f4));
    f0 = BITSF(LD32(s4+208));
    f4 = BITSF(LD32(v0-22636));
    f0 = f0 + f1;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(416);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    ST32(s4+208, FBITS(f0));
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = f0 * f4;
    f3 = f3 + f20;
    f12 = f3;
    ST32(sp+36, FBITS(f3));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2734;
L_089A2734:;
    f12 = f20;
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2744;
L_089A2744:;
    a1 = D_08ADE2F8 - (-7432);
    t3 = v1 + 0;
    t2 = v0 + 0;
    t1 = s1 + 0;
    a0 = s2 + 0;
    a1 = a1 - 7432;
    t0 = s0 + 0;
    a2 = 100;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A276C;
L_089A276C:;
    a3 = D_08C29E94 - (-24940);
    a3 = a3 - 24940;
    f12 = f21;
    t0 = 0 + 0;
    a2 = 5;
    a0 = s2 + 0;
    a1 = 5;
    { rv_t r_ = func_0897CE90(a0, a1, a2, a3, t0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A278C;
L_089A278C:;
    a0 = LD32(sp+388);
    a1 = sp + 32;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2798;
L_089A2798:;
    f0 = BITSF(LD32(s5-22640));
    a0 = s6 + 0;
    a1 = sp + 376;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a2 = s3 + 0;
    ST32(sp+376, FBITS(f0));
    f0 = func_089A5FB0(a0, a1, a2);
    goto L_089A27B4;
L_089A27B4:;
    a0 = s4 + 192;
    f1 = BITSF(LD32(s5-22640));
    ST32(s4+184, FBITS(f0));
    a2 = s3 + 0;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a1 = sp + 380;
    ST32(sp+380, FBITS(f1));
    f0 = func_089A5FB0(a0, a1, a2);
    goto L_089A27D4;
L_089A27D4:;
    a0 = s4 + 188;
    f1 = BITSF(LD32(fp-22600));
    ST32(s4+192, FBITS(f0));
    a2 = fp - 22600;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    a1 = sp + 384;
    ST32(sp+384, FBITS(f1));
    f0 = func_089A5FB0(a0, a1, a2);
    goto L_089A27F4;
L_089A27F4:;
    {u32 a_=sp+(592);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f20 = BITSF(LD32(sp+20));
    v0 = LD32(sp+16);
    v1 = LD32(sp+24);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f20);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    fcc = FCMP(f1, f21, 2);
    cnd_ = fcc;
    ST32(s4+188, FBITS(f0));
    if (cnd_) { goto L_089A2874; }
    goto L_089A2830;
L_089A2830:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f21 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+128, v0);
    f20 = BITSF(v1);
    ST32(sp+136, FBITS(f3));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+132, v1);
    goto L_089A2874;
L_089A2874:;
    f0 = BITSF(LD32(s7-5748));
    f22 = BITSF(0);
    f21 = f21 * f0;
    fcc = FCMP(f22, f20, 12);
    cnd_ = !fcc;
    ST32(s4+156, FBITS(f21));
    if (cnd_) { goto L_089A28A4; }
    goto L_089A2890;
L_089A2890:;
    v0 = D_08AEE994 - (-5740);
    f0 = BITSF(LD32(v0-5740));
    f0 = f20 * f0;
    f0 = f21 - f0;
    ST32(s4+156, FBITS(f0));
    goto L_089A28A4;
L_089A28A4:;
    f12 = BITSF(LD32(s4+156));
    s0 = sp + 256;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A28B0;
L_089A28B0:;
    a1 = D_08ADE30C - (-7412);
    a0 = s0 + 0;
    a1 = a1 - 7412;
    t0 = v0 + 0;
    a2 = 100;
    a3 = 1;
    t1 = v1 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A28D0;
L_089A28D0:;
    a3 = D_08C29E64 - (-24988);
    a0 = s0 + 0;
    a3 = a3 - 24988;
    f12 = f22;
    a1 = 5;
    a2 = 10;
    t0 = 0 + 0;
    { rv_t r_ = func_0897CE90(a0, a1, a2, a3, t0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A28F0;
L_089A28F0:;
    v0 = D_08B285A0 - (-31328);
    goto L_089A1A78;
L_089A28F8:;
    a1 = sp + 64;
    func_0899CFE4(a0, a1);
    goto L_089A2900;
L_089A2900:;
    f0 = BITSF(LD32(sp+32));
    goto L_089A25D4;
L_089A2908:;
    f21 = BITSF(LD32(v0-5768));
    goto L_089A2130;
L_089A2910:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f20 = f21 - f1; goto L_089A2114; }
    goto L_089A2920;
L_089A2920:;
    v0 = D_08AEE980 - (-5760);
    f0 = BITSF(LD32(v0-5760));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    f20 = f21 - f1;
    if (cnd_) { goto L_089A2114; }
    goto L_089A2938;
L_089A2938:;
    v0 = D_08AEE984 - (-5756);
    f0 = BITSF(LD32(v0-5756));
    f1 = f2 + f0;
    goto L_089A2110;
L_089A2948:;
    f6 = BITSF(LD32(v0-5768));
    goto L_089A1FA8;
L_089A2950:;
    fcc = FCMP(f4, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { ST32(s4+200, 0); goto L_089A1FF0; }
    goto L_089A2960;
L_089A2960:;
    f0 = BITSF(LD32(fp-22600));
    goto L_089A1FF4;
L_089A2968:;
    f5 = BITSF(LD32(v0-5768));
    goto L_089A1EF0;
L_089A2970:;
    fcc = FCMP(f4, f5, 2);
    cnd_ = !fcc;
    if (cnd_) { ST32(s4+196, 0); goto L_089A1F38; }
    goto L_089A2980;
L_089A2980:;
    f0 = BITSF(LD32(s5-22640));
    goto L_089A1F3C;
L_089A2988:;
    f5 = BITSF(LD32(v0-5768));
    goto L_089A1E20;
L_089A2990:;
    fcc = FCMP(f6, f7, 2);
    cnd_ = fcc;
    f1 = BITSF(LD32(s5-22640));
    if (cnd_) { goto L_089A1E78; }
    goto L_089A29A0;
L_089A29A0:;
    ST32(s4+204, FBITS(f9));
    f6 = f9;
    goto L_089A1E74;
L_089A29AC:;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A29B8;
L_089A29B8:;
    ST32(sp+16, FBITS(f0));
    v0 = LD32(s4+152);
    a0 = LD32(v0+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A29D4;
L_089A29D4:;
    v0 = D_08C29B58 - (-25768);
    v1 = LD32(v0-25768);
    cnd_ = v1 == 0;
    ST32(sp+24, FBITS(f0));
    if (cnd_) { goto L_089A29EC; }
    goto L_089A29E4;
L_089A29E4:;
    ST32(sp+20, 0);
    goto L_089A1D30;
L_089A29EC:;
    v0 = LD32(s4+152);
    a0 = LD32(v0+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 27;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2A04;
L_089A2A04:;
    v0 = LD32(s4+152);
    a1 = 26;
    a0 = LD32(v0+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2A20;
L_089A2A20:;
    f20 = f20 - f0;
    goto L_089A1D2C;
L_089A2A28:;
    fcc = FCMP(f4, f5, 12);
    cnd_ = !fcc;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_089A1CE8; }
    goto L_089A2A38;
L_089A2A38:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    f2 = f4 + f2;
    if (cnd_) { goto L_089A2A50; }
    goto L_089A2A4C;
L_089A2A4C:;
    f2 = f5;
    goto L_089A2A50;
L_089A2A50:;
    ST32(sp+4, FBITS(f2));
    goto L_089A1CE4;
L_089A2A58:;
    v0 = D_08AEE978 - (-5768);
    f5 = BITSF(LD32(v0-5768));
    goto L_089A1C84;
L_089A2A64:;
    v0 = D_08AEE978 - (-5768);
    f6 = BITSF(LD32(v0-5768));
    goto L_089A1C30;
}

/* 089A2A70 */
rv_t func_089A2A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A2A70:;
    sp = sp - 32;
    v0 = D_08C2A778 - (-22664);
    s1 = a0 + 0;
    a1 = 1;
    a0 = LD32(v0-22664);
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2A98;
L_089A2A98:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A2ACC; }
    goto L_089A2AA0;
L_089A2AA0:;
    a0 = LD32(s1+152);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2AB4;
L_089A2AB4:;
    a2 = v0 + 0;
    v0 = D_08AEE998 - (-5736);
    f12 = BITSF(LD32(v0-5736));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2ACC;
L_089A2ACC:;
    a0 = LD32(s1+160);
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2AD4;
L_089A2AD4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A2BB4; }
    goto L_089A2ADC;
L_089A2ADC:;
    a0 = LD32(s1+152);
    goto L_089A2AE0;
L_089A2AE0:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+72); goto L_089A2B7C; }
    goto L_089A2AE8;
L_089A2AE8:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    a1 = 0x10000u;
    if (cnd_) { goto L_089A2B38; }
    goto L_089A2B00;
L_089A2B00:;
    a1 = a1 | 0x9a99;
    s0 = 0 + 0;
    goto L_089A2B08;
L_089A2B08:;
    a0 = s2 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2B10;
L_089A2B10:;
    s0 = s0 + 1;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089A2B28; }
    goto L_089A2B20;
L_089A2B20:;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2B28;
L_089A2B28:;
    a1 = 0x6050000u;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    a1 = a1 | 0x5e5a;
    if (cnd_) { goto L_089A2B08; }
    goto L_089A2B38;
L_089A2B38:;
    a0 = LD32(s1+152);
    { rv_t r_ = func_08A05694(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2B40;
L_089A2B40:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A2B78; }
    goto L_089A2B48;
L_089A2B48:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2B54;
L_089A2B54:;
    v0 = D_08AEE99C - (-5732);
    f0 = BITSF(LD32(v0-5732));
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 1;
    ST32(sp+4, FBITS(f0));
    ST32(sp, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2B78;
L_089A2B78:;
    v0 = LD32(s1+72);
    goto L_089A2B7C;
L_089A2B7C:;
    v1 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v1-31348));
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s1+72, v0);
    a0 = s1 + 0;
    ST32(s1+172, FBITS(f0));
    ST8(s1+176, 0);
    { rv_t r_ = func_089DFDDC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2B9C;
L_089A2B9C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A2BB4:;
    a0 = s1 + 160;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2BBC;
L_089A2BBC:;
    a0 = LD32(s1+152);
    goto L_089A2AE0;
}

/* 089A2BC4 */
rv_t func_089A2BC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A2BC4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0+152);
    cnd_ = v1 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089A2CB0; }
    goto L_089A2BE4;
L_089A2BE4:;
    v0 = LD_U8(v1+195);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+520); goto L_089A2CCC; }
    goto L_089A2BF0;
L_089A2BF0:;
    a0 = LD32(v1+92);
    cnd_ = a0 == 0;
    if (cnd_) { f1 = BITSF(LD32(a1+344)); goto L_089A2C34; }
    goto L_089A2BFC;
L_089A2BFC:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2C0C;
L_089A2C0C:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s0+152); goto L_089A2CC0; }
    goto L_089A2C20;
L_089A2C20:;
    v0 = LD_U8(s0+176);
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_089A2C48; }
    goto L_089A2C2C;
L_089A2C2C:;
    a1 = LD32(s0+152);
    goto L_089A2C30;
L_089A2C30:;
    f1 = BITSF(LD32(a1+344));
    goto L_089A2C34;
L_089A2C34:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    a0 = 1;
    if (cnd_) { goto L_089A2C60; }
    goto L_089A2C48;
L_089A2C48:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A2C60:;
    a0 = a1 + 0;
    { u64 r_ = func_089DD748(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2C68;
L_089A2C68:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A2C80; }
    goto L_089A2C70;
L_089A2C70:;
    v1 = LD32(s0+152);
    v0 = LD_U8(v1+196);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_089A2C48; }
    goto L_089A2C80;
L_089A2C80:;
    a0 = LD32(s0+152);
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2C88;
L_089A2C88:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089A2CB0; }
    goto L_089A2C90;
L_089A2C90:;
    a0 = v0 + 0;
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2C98;
L_089A2C98:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_089A2C48; }
    goto L_089A2CA0;
L_089A2CA0:;
    a0 = s1 + 0;
    { u64 r_ = func_088BB1F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2CA8;
L_089A2CA8:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_089A2C48; }
    goto L_089A2CB0;
L_089A2CB0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089E0420(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2CB8;
L_089A2CB8:;
    a0 = v0 + 0;
    goto L_089A2C48;
L_089A2CC0:;
    v0 = 1;
    ST8(s0+176, v0);
    goto L_089A2C30;
L_089A2CCC:;
    v0 = (v0 >> 11) & 0x1;
    a0 = v0 ^ 0x1;
    goto L_089A2C48;
}

/* 089A2CD8 */
u32 func_089A2CD8(u32 a0)
{
    u32 v0 = 0;
L_089A2CD8:;
    v0 = a0 + 156;
    return v0;
}

/* 089A2CE0 */
void func_089A2CE0(u32 a0, u32 a1)
{
    float f0 = 0;
L_089A2CE0:;
    f0 = BITSF(LD32(a1));
    ST32(a0+156, FBITS(f0));
    return;
}

/* 089A2CEC */
void func_089A2CEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A2CEC:;
    sp = sp - 16;
    a2 = 0x255a0000u;
    a2 = a2 | 0xfa9d;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A2D08;
L_089A2D08:;
    v0 = D_08AFC0B0 - (-16208);
    a0 = LD32(s0+112);
    v1 = 9;
    v0 = v0 - 16208;
    a0 = (a0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    a0 = a0 | 0x10;
    ST32(s0+144, v1);
    ST32(s0, v0);
    ST32(s0+112, a0);
    ST32(s0+152, 0);
    sp = sp + 16;
    return;
}

/* 089A2D40 */
rv_t func_089A2D40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A2D40:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089A2D48 */
void func_089A2D48(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A2D48:;
    sp = sp - 16;
    a2 = 0x12d90000u;
    a2 = a2 | 0x2df1;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A2D64;
L_089A2D64:;
    v0 = 0x10000u;
    v1 = LD32(s0+112);
    v0 = v0 | 0x202;
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    v1 = v1 | v0;
    ST32(s0+112, v1);
    v1 = D_08AEE9A4 - (-5724);
    v0 = D_08AFC058 - (-16296);
    f0 = BITSF(LD32(v1-5724));
    v0 = v0 - 16296;
    ST32(s0, v0);
    v0 = 999;
    ST32(s0+80, FBITS(f0));
    ST32(s0+152, v0);
    sp = sp + 16;
    return;
}

/* 089A2DAC */
rv_t func_089A2DAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A2DAC:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A2DE4; }
    goto L_089A2DD4;
L_089A2DD4:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a1 = LD32(v0+4);
    goto L_089A2DE4;
L_089A2DE4:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2DF4;
L_089A2DF4:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A2E88; }
    goto L_089A2E00;
L_089A2E00:;
    v0 = LD32(v0+520);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089A2E88; }
    goto L_089A2E10;
L_089A2E10:;
    a2 = LD32(s1+436);
    cnd_ = a2 == v0;
    if (cnd_) { goto L_089A2E8C; }
    goto L_089A2E1C;
L_089A2E1C:;
    a0 = D_08C2C6D4 - (-14636);
    v1 = a0 - 14636;
    v0 = LD32(v1+4);
    a1 = LD32(a0-14636);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089A2E74; }
    goto L_089A2E48;
L_089A2E48:;
    a1 = LD32(a0);
    goto L_089A2E4C;
L_089A2E4C:;
    v0 = LD32(a1);
    v1 = LD32(v0-16);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A2FAC; }
    goto L_089A2E64;
L_089A2E64:;
    a0 = LD32(a0+4);
    goto L_089A2E68;
L_089A2E68:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0); goto L_089A2E4C; }
    goto L_089A2E70;
L_089A2E70:;
    s0 = 0 + 0;
    goto L_089A2E74;
L_089A2E74:;
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A2E88; }
    goto L_089A2E7C;
L_089A2E7C:;
    v0 = LD32(s0+56);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+152, a2); goto L_089A2EA4; }
    goto L_089A2E88;
L_089A2E88:;
    goto L_089A2E8C;
L_089A2E8C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A2EA4:;
    a1 = s0 + 4;
    a2 = s0 + 16;
    a0 = s2 + 0;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2EB4;
L_089A2EB4:;
    v0 = LD32(s0+72);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089A2EC8; }
    goto L_089A2EC0;
L_089A2EC0:;
    ST32(s2+68, v0);
    goto L_089A2E88;
L_089A2EC8:;
    a3 = 0 + 0;
    a0 = 5;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2EDC;
L_089A2EDC:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089A2F10; }
    goto L_089A2EE4;
L_089A2EE4:;
    v1 = LD32(s1);
    a0 = v0 + 0;
    a1 = 1;
    v0 = LD32(v1-16);
    a2 = 1;
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, v1);
    v0 = LD32(s2+152);
    ST32(a3, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2F10;
L_089A2F10:;
    s0 = LD32(s0+60);
    v0 = 999;
    cnd_ = s0 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A2F60; }
    goto L_089A2F20;
L_089A2F20:;
    a0 = 5;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2F30;
L_089A2F30:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089A2F60; }
    goto L_089A2F38;
L_089A2F38:;
    v0 = LD32(s1);
    a0 = a3 + 0;
    a1 = 1;
    v1 = LD32(v0-16);
    a2 = 1;
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    ST32(a3, s0);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2F60;
L_089A2F60:;
    a0 = 0x8077;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A2F74;
L_089A2F74:;
    a3 = v0 + 0;
    v0 = LD32(s2+152);
    a0 = a3 + 0;
    a1 = 1;
    ST32(a3, v0);
    a2 = 1;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2FA4;
L_089A2FA4:;
    v1 = 0 + 0;
    goto L_089A2E88;
L_089A2FAC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089A2E64; }
    goto L_089A2FB8;
L_089A2FB8:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089A2E68; }
    goto L_089A2FC4;
L_089A2FC4:;
    goto L_089A2E74;
}

/* 089A2FCC */
rv_t func_089A2FCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A2FCC:;
    sp = sp - 16;
    { rv_t r_ = func_089E01C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A2FDC;
L_089A2FDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A2FE8 */
rv_t func_089A2FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A2FE8:;
    sp = sp - 16;
    a2 = 1;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a1 = 999;
    v0 = LD32(a0+4);
    a0 = D_08C2A6C8 - (-22840);
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a0 = a0 - 22840;
    if (cnd_) { goto L_089A3030; }
    goto L_089A3020;
L_089A3020:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A3030;
L_089A3030:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3038;
L_089A3038:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A30A8; }
    goto L_089A3040;
L_089A3040:;
    a0 = 5;
    a1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = s2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A305C; }
    goto L_089A3054;
L_089A3054:;
    v0 = LD32(s2+12);
    ST32(s1+68, v0);
    goto L_089A305C;
L_089A305C:;
    v1 = LD32(s1+152);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s1 + 0; goto L_089A30AC; }
    goto L_089A306C;
L_089A306C:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3074;
L_089A3074:;
    a3 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089A30A8; }
    goto L_089A3088;
L_089A3088:;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, v1);
    v0 = LD32(s1+152);
    ST32(a3, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A30A8;
L_089A30A8:;
    a0 = s1 + 0;
    goto L_089A30AC;
L_089A30AC:;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A30B4;
L_089A30B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A30CC */
rv_t func_089A30CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A30CC:;
    sp = sp - 32;
    a2 = 1;
    s3 = 999;
    s1 = a0 + 0;
    a1 = 999;
    v0 = LD32(a0+4);
    a0 = D_08C2A6C8 - (-22840);
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a0 = a0 - 22840;
    if (cnd_) { goto L_089A3118; }
    goto L_089A3108;
L_089A3108:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A3118;
L_089A3118:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3120;
L_089A3120:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A31DC; }
    goto L_089A3128;
L_089A3128:;
    v0 = LD32(s1+152);
    a0 = D_08C2C6D4 - (-14636);
    a2 = 1;
    a0 = a0 - 14636;
    cnd_ = v0 == s3;
    a1 = v0 + 0;
    if (cnd_) { goto L_089A31DC; }
    goto L_089A3140;
L_089A3140:;
    { u64 r_ = func_08AC467C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3148;
L_089A3148:;
    cnd_ = v0 == 0;
    a0 = 5;
    if (cnd_) { goto L_089A31DC; }
    goto L_089A3150;
L_089A3150:;
    s2 = LD32(v0+60);
    a1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = s2 == s3;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A319C; }
    goto L_089A3164;
L_089A3164:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A316C;
L_089A316C:;
    a3 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089A319C; }
    goto L_089A3180;
L_089A3180:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    ST32(a3, s2);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A319C;
L_089A319C:;
    a0 = 0x8077;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A31B0;
L_089A31B0:;
    v1 = LD32(s1+152);
    a0 = v0 + 0;
    a1 = 1;
    ST32(v0, v1);
    a2 = 1;
    a3 = LD32(s0);
    v1 = LD32(a3-16);
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    ST32(v0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A31DC;
L_089A31DC:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A31E4;
L_089A31E4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089A3200 */
rv_t func_089A3200(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A3200:;
    sp = sp - 16;
    a1 = 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8032;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3224;
L_089A3224:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089A32B0; }
    goto L_089A322C;
L_089A322C:;
    t1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    a2 = 1;
    t3 = 999;
    cnd_ = t1 == 0;
    t4 = 999;
    if (cnd_) { goto L_089A32B0; }
    goto L_089A3248;
L_089A3248:;
    v0 = LD32(t1);
    v1 = LD32(s0+36);
    v0 = v0 | 0x1;
    ST32(t1, v0);
    ST32(t1+4, v1);
    t2 = LD32(s0+4);
    v0 = LD32(s0+68);
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t1+12, v0);
    if (cnd_) { goto L_089A3280; }
    goto L_089A3270;
L_089A3270:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t3 = LD32(v0+4);
    goto L_089A3280;
L_089A3280:;
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t0, t3);
    if (cnd_) { goto L_089A329C; }
    goto L_089A328C;
L_089A328C:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t4 = LD32(v0+4);
    goto L_089A329C;
L_089A329C:;
    v0 = LD32(t0+28);
    ST32(t0+4, t4);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A32B0;
L_089A32B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A32C0 */
void func_089A32C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A32C0:;
    sp = sp - 16;
    a2 = 0x687c0000u;
    a2 = a2 | 0x8481;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A32DC;
L_089A32DC:;
    a0 = 0x10000u;
    v0 = LD32(s0+112);
    v1 = D_08AFC000 - (-16384);
    v1 = v1 - 16384;
    v0 = v0 | 0x3;
    v0 = v0 | a0;
    v0 = v0 | 0x400;
    v0 = (v0 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    ST32(s0+112, v0);
    v0 = 999;
    ST32(s0, v1);
    ST32(s0+152, v0);
    ST32(s0+72, a0);
    ST32(s0+156, 0);
    ST8(s0+160, 0);
    sp = sp + 16;
    return;
}

/* 089A3328 */
rv_t func_089A3328(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089A3328:;
    sp = sp - 144;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A3360; }
    goto L_089A3350;
L_089A3350:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a1 = LD32(v0+4);
    goto L_089A3360;
L_089A3360:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3370;
L_089A3370:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A33D4; }
    goto L_089A337C;
L_089A337C:;
    v0 = LD32(v0+520);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089A33D4; }
    goto L_089A338C;
L_089A338C:;
    a1 = LD32(s0+436);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_089A33D8; }
    goto L_089A3398;
L_089A3398:;
    a0 = D_08C2C6D4 - (-14636);
    a0 = a0 - 14636;
    a2 = 1;
    { u64 r_ = func_08AC467C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A33A8;
L_089A33A8:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A33D4; }
    goto L_089A33B4;
L_089A33B4:;
    v1 = LD32(v0+56);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089A33F0; }
    goto L_089A33C4;
L_089A33C4:;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_089A33F0; }
    goto L_089A33CC;
L_089A33CC:;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = LD32(s2+52); goto L_089A33F4; }
    goto L_089A33D4;
L_089A33D4:;
    goto L_089A33D8;
L_089A33D8:;
    v0 = a0 + 0;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_089A33F0:;
    a2 = LD32(s2+52);
    goto L_089A33F4;
L_089A33F4:;
    v1 = LD32(s0+436);
    v0 = 999;
    a0 = 0 + 0;
    cnd_ = a2 == v0;
    ST32(s1+152, v1);
    if (cnd_) { goto L_089A33D4; }
    goto L_089A3408;
L_089A3408:;
    a0 = D_08C2C6E4 - (-14620);
    v1 = a0 - 14620;
    v0 = LD32(v1+4);
    a1 = LD32(a0-14620);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A3460; }
    goto L_089A3434;
L_089A3434:;
    a0 = LD32(a1);
    goto L_089A3438;
L_089A3438:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A35B8; }
    goto L_089A3450;
L_089A3450:;
    a1 = LD32(a1+4);
    goto L_089A3454;
L_089A3454:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A3438; }
    goto L_089A345C;
L_089A345C:;
    a3 = 0 + 0;
    goto L_089A3460;
L_089A3460:;
    ST32(s1+156, a3);
    goto L_089A3464;
L_089A3464:;
    cnd_ = a3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A33D4; }
    goto L_089A346C;
L_089A346C:;
    v0 = LD32(s2+72);
    ST32(s1+68, v0);
    v0 = 2;
    v1 = LD32(s2+56);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_089A3508; }
    goto L_089A3484;
L_089A3484:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_089A3490; }
    goto L_089A348C;
L_089A348C:;
    v0 = 1;
    goto L_089A3490;
L_089A3490:;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A33D4; }
    goto L_089A3498;
L_089A3498:;
    a1 = LD32(s1+156);
    a0 = s1 + 0;
    a2 = a1 + 16;
    a1 = a1 + 4;
    goto L_089A34A8;
L_089A34A8:;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A34B0;
L_089A34B0:;
    v1 = LD32(s2+56);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1); goto L_089A34D4; }
    goto L_089A34C0;
L_089A34C0:;
    v0 = LD32(s0+520);
    goto L_089A34C4;
L_089A34C4:;
    a0 = 1;
    v0 = v0 & 0x1;
    ST8(s1+160, v0);
    goto L_089A33D4;
L_089A34D4:;
    a1 = sp + 80;
    v1 = LD32(v0+40);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A34E4;
L_089A34E4:;
    v0 = LD32(s0);
    a1 = LD32(s1+156);
    a0 = s0 + 0;
    v1 = LD32(v0+144);
    a2 = a1 + 16;
    t_ = v1;
    a1 = a1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3500;
L_089A3500:;
    v0 = LD32(s0+520);
    goto L_089A34C4;
L_089A3508:;
    v0 = s2 + 4;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+4));
    ST32(sp+8, FBITS(f2));
    v0 = a3 + 4;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(a3+4));
    f2 = f5 - f2;
    f1 = f4 - f1;
    f0 = f3 - f0;
    ST32(sp+16, FBITS(f3));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3568;
L_089A3568:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    f2 = f3 + f2;
    f1 = f4 + f1;
    f0 = f5 + f0;
    a2 = LD32(s1+156);
    ST32(sp+64, FBITS(f2));
    a1 = sp + 64;
    a2 = a2 + 16;
    ST32(sp+68, FBITS(f1));
    a0 = s1 + 0;
    ST32(sp+72, FBITS(f0));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    goto L_089A34A8;
L_089A35B8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_089A3450; }
    goto L_089A35C4;
L_089A35C4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A3454; }
    goto L_089A35D0;
L_089A35D0:;
    ST32(s1+156, a3);
    goto L_089A3464;
}

/* 089A35D8 */
rv_t func_089A35D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A35D8:;
    sp = sp - 16;
    a2 = 1;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a1 = 999;
    v0 = LD32(a0+112);
    a0 = LD32(a0+4);
    v1 = LD32(s0+72);
    v0 = (v0 & ~(0x1u << 12)) | ((0 & 0x1) << 12);
    ST32(s0+112, v0);
    v0 = 0x10000u;
    v1 = v1 | v0;
    a3 = LD32(a0+52);
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    cnd_ = a3 == 0;
    ST32(s0+72, v1);
    if (cnd_) { goto L_089A363C; }
    goto L_089A362C;
L_089A362C:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A363C;
L_089A363C:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3644;
L_089A3644:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089A36B4; }
    goto L_089A364C;
L_089A364C:;
    a0 = 5;
    a1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = s2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A3668; }
    goto L_089A3660;
L_089A3660:;
    v0 = LD32(s2+12);
    ST32(s0+68, v0);
    goto L_089A3668;
L_089A3668:;
    v1 = LD32(s0+152);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s0 + 0; goto L_089A36B8; }
    goto L_089A3678;
L_089A3678:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3680;
L_089A3680:;
    a3 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089A36B4; }
    goto L_089A3694;
L_089A3694:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, v1);
    v0 = LD32(s0+152);
    ST32(a3, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A36B4;
L_089A36B4:;
    a0 = s0 + 0;
    goto L_089A36B8;
L_089A36B8:;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A36C0;
L_089A36C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A36D8 */
rv_t func_089A36D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A36D8:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A3714; }
    goto L_089A3704;
L_089A3704:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a1 = LD32(v0+4);
    goto L_089A3714;
L_089A3714:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3724;
L_089A3724:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A37EC; }
    goto L_089A372C;
L_089A372C:;
    a1 = LD32(s1+152);
    s2 = 999;
    cnd_ = a1 == s2;
    a0 = D_08C2C6D4 - (-14636);
    if (cnd_) { goto L_089A37DC; }
    goto L_089A373C;
L_089A373C:;
    a0 = a0 - 14636;
    a2 = 1;
    { u64 r_ = func_08AC467C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3748;
L_089A3748:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s1+160); goto L_089A37E0; }
    goto L_089A3750;
L_089A3750:;
    s3 = LD32(v0+60);
    cnd_ = s3 == s2;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A379C; }
    goto L_089A375C;
L_089A375C:;
    a0 = 5;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A376C;
L_089A376C:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089A379C; }
    goto L_089A3774;
L_089A3774:;
    v0 = LD32(s0);
    a0 = a3 + 0;
    a1 = 1;
    v1 = LD32(v0-16);
    a2 = 1;
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    ST32(a3, s3);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A379C;
L_089A379C:;
    a0 = 0x8077;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A37B0;
L_089A37B0:;
    v1 = LD32(s1+152);
    a0 = v0 + 0;
    a1 = 1;
    ST32(v0, v1);
    a2 = 1;
    a3 = LD32(s0);
    v1 = LD32(a3-16);
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    ST32(v0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A37DC;
L_089A37DC:;
    v1 = LD_U8(s1+160);
    goto L_089A37E0;
L_089A37E0:;
    v0 = LD32(s0+520);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s0+520, v0);
    goto L_089A37EC;
L_089A37EC:;
    ST32(s1+72, 0);
    a0 = s1 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A37F8;
L_089A37F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089A3814 */
rv_t func_089A3814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A3814:;
    sp = sp - 16;
    a1 = 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8032;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3838;
L_089A3838:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089A38C4; }
    goto L_089A3840;
L_089A3840:;
    t1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    a2 = 1;
    t3 = 999;
    cnd_ = t1 == 0;
    t4 = 999;
    if (cnd_) { goto L_089A38C4; }
    goto L_089A385C;
L_089A385C:;
    v0 = LD32(t1);
    v1 = LD32(s0+36);
    v0 = v0 | 0x1;
    ST32(t1, v0);
    ST32(t1+4, v1);
    t2 = LD32(s0+4);
    v0 = LD32(s0+68);
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t1+12, v0);
    if (cnd_) { goto L_089A3894; }
    goto L_089A3884;
L_089A3884:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t3 = LD32(v0+4);
    goto L_089A3894;
L_089A3894:;
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t0, t3);
    if (cnd_) { goto L_089A38B0; }
    goto L_089A38A0;
L_089A38A0:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t4 = LD32(v0+4);
    goto L_089A38B0;
L_089A38B0:;
    v0 = LD32(t0+28);
    ST32(t0+4, t4);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A38C4;
L_089A38C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A38D4 */
void func_089A38D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A38D4:;
    sp = sp - 16;
    a2 = 0x350000u;
    a2 = a2 | 0x807d;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A38F0;
L_089A38F0:;
    v0 = D_08AEE9AC - (-5716);
    v1 = LD32(s0+112);
    f0 = BITSF(LD32(v0-5716));
    v0 = D_08AFBFA8 - (-16472);
    v1 = v1 | 0x40;
    v1 = (v1 & ~(0x1u << 18)) | ((0 & 0x1) << 18);
    v0 = v0 - 16472;
    ST32(s0+88, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+112, v1);
    ST8(s0+148, 0);
    sp = sp + 16;
    return;
}

/* 089A392C */
rv_t func_089A392C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089A392C:;
    sp = sp - 64;
    s1 = a0 + 0;
    { rv_t r_ = func_0899F8D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3950;
L_089A3950:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089A3984; }
    goto L_089A3958;
L_089A3958:;
    v0 = LD32(s1+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089A3988; }
    goto L_089A3968;
L_089A3968:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3978;
L_089A3978:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089A39A8; }
    goto L_089A3980;
L_089A3980:;
    a1 = 0 + 0;
    goto L_089A3984;
L_089A3984:;
    goto L_089A3988;
L_089A3988:;
    v0 = a1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089A39A8:;
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A39B4;
L_089A39B4:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089A3984; }
    goto L_089A39BC;
L_089A39BC:;
    s2 = LD32(s0+92);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089A3988; }
    goto L_089A39C8;
L_089A39C8:;
    v1 = LD32(s2);
    f20 = BITSF(0);
    a0 = s2 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A39E0;
L_089A39E0:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = 0xde350000u;
    if (cnd_) { goto L_089A3A18; }
    goto L_089A39F0;
L_089A39F0:;
    v0 = LD32(s2);
    a0 = s2 + 0;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3A04;
L_089A3A04:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s2); goto L_089A3B74; }
    goto L_089A3A14;
L_089A3A14:;
    a0 = 0xde350000u;
    goto L_089A3A18;
L_089A3A18:;
    a1 = 0x203e0000u;
    a2 = sp + 0;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x217d;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3A30;
L_089A3A30:;
    v0 = D_08AEE9B0 - (-5712);
    f12 = BITSF(LD32(v0-5712));
    a0 = LD32(sp);
    a1 = 0x578c0000u;
    a1 = a1 | 0xbda1;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3A48;
L_089A3A48:;
    f12 = f0;
    a0 = s0 + 0;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3A54;
L_089A3A54:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089A3984; }
    goto L_089A3A5C;
L_089A3A5C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DE500(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3A64;
L_089A3A64:;
    v1 = LD32(s2);
    s3 = v0 + 0;
    f20 = BITSF(0);
    v0 = LD32(v1+8);
    a0 = s2 + 0;
    t_ = v0;
    a1 = 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3A80;
L_089A3A80:;
    fcc = FCMP(f0, f20, 2);
    v0 = 33;
    cnd_ = fcc;
    v1 = 24;
    if (cnd_) { goto L_089A3B20; }
    goto L_089A3A90;
L_089A3A90:;
    if (s3 == 0) v0 = v1;
    ST32(s1+144, v0);
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3AA8;
L_089A3AA8:;
    v1 = LD32(s0);
    s2 = v0 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3ABC;
L_089A3ABC:;
    a1 = v0 + 0;
    v0 = LD32(s2+56);
    v1 = LD32(s1+144);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    a0 = 3507;
    if (cnd_) { goto L_089A3B0C; }
    goto L_089A3AD4;
L_089A3AD4:;
    v0 = LD32(s2+60);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089A3B10; }
    goto L_089A3AE4;
L_089A3AE4:;
    v0 = LD32(s2+64);
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089A3B10; }
    goto L_089A3AF0;
L_089A3AF0:;
    v0 = a1 << 2;
    v0 = v0 + s2;
    a0 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a0 = LD32(v0);
    goto L_089A3B0C;
L_089A3B0C:;
    v0 = 3507;
    goto L_089A3B10;
L_089A3B10:;
    cnd_ = a0 != v0;
    a1 = 1;
    if (cnd_) { goto L_089A3984; }
    goto L_089A3B18;
L_089A3B18:;
    a1 = 0 + 0;
    goto L_089A3984;
L_089A3B20:;
    v0 = LD32(s2);
    a0 = s2 + 0;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3B34;
L_089A3B34:;
    fcc = FCMP(f0, f20, 2);
    v0 = 34;
    cnd_ = !fcc;
    v1 = 25;
    if (cnd_) { goto L_089A3A90; }
    goto L_089A3B44;
L_089A3B44:;
    v0 = LD32(s2);
    a0 = s2 + 0;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 15;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3B58;
L_089A3B58:;
    fcc = FCMP(f0, f20, 2);
    v0 = 36;
    cnd_ = !fcc;
    v1 = 27;
    if (cnd_) { goto L_089A3A90; }
    goto L_089A3B68;
L_089A3B68:;
    v0 = 35;
    v1 = 26;
    goto L_089A3A90;
L_089A3B74:;
    a0 = s2 + 0;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 14;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3B84;
L_089A3B84:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = 0xde350000u;
    if (cnd_) { goto L_089A3A18; }
    goto L_089A3B94;
L_089A3B94:;
    v0 = LD32(s2);
    a0 = s2 + 0;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 15;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3BA8;
L_089A3BA8:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a1 = 0 + 0; goto L_089A3984; }
    goto L_089A3BB8;
L_089A3BB8:;
    a0 = 0xde350000u;
    goto L_089A3A18;
}

/* 089A3BC0 */
rv_t func_089A3BC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A3BC0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08C2A6C8 - (-22840);
    a2 = 1;
    cnd_ = a1 == 0;
    a0 = a0 - 22840;
    if (cnd_) { goto L_089A3BE8; }
    goto L_089A3BE0;
L_089A3BE0:;
    v0 = LD32(a1+12);
    ST32(s0+144, v0);
    goto L_089A3BE8;
L_089A3BE8:;
    v0 = LD32(s0+4);
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A3C08; }
    goto L_089A3BF8;
L_089A3BF8:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A3C08;
L_089A3C08:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3C10;
L_089A3C10:;
    v1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089A3C2C; }
    goto L_089A3C20;
L_089A3C20:;
    v0 = LD32(v0+520);
    v0 = v0 | 0x10;
    ST32(v1+520, v0);
    goto L_089A3C2C;
L_089A3C2C:;
    { rv_t r_ = func_0899F93C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3C34;
L_089A3C34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A3C44 */
rv_t func_089A3C44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A3C44:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3C58;
L_089A3C58:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = LD32(s0+4);
    a0 = a0 - 22840;
    a2 = 1;
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A3C84; }
    goto L_089A3C74;
L_089A3C74:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A3C84;
L_089A3C84:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3C8C;
L_089A3C8C:;
    a0 = 0xde350000u;
    a1 = 0x203e0000u;
    s0 = v0 + 0;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x217d;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_089A3CD8; }
    goto L_089A3CA8;
L_089A3CA8:;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3CB0;
L_089A3CB0:;
    v0 = D_08AEE9B4 - (-5708);
    f12 = BITSF(LD32(v0-5708));
    a0 = LD32(sp);
    a1 = 0xbef90000u;
    a1 = a1 | 0x94d5;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3CC8;
L_089A3CC8:;
    v0 = LD32(s0+520);
    ST32(s0+132, FBITS(f0));
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s0+520, v0);
    goto L_089A3CD8;
L_089A3CD8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089A3CE8 */
rv_t func_089A3CE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A3CE8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFC98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3CFC;
L_089A3CFC:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = LD32(s0+4);
    a0 = a0 - 22840;
    a2 = 1;
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A3D28; }
    goto L_089A3D18;
L_089A3D18:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A3D28;
L_089A3D28:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3D30;
L_089A3D30:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A3D44; }
    goto L_089A3D38;
L_089A3D38:;
    v0 = LD32(v0+520);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1+520, v0);
    goto L_089A3D44;
L_089A3D44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A3D54 */
rv_t func_089A3D54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A3D54:;
    sp = sp - 16;
    a1 = 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8032;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A3D78;
L_089A3D78:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089A3E04; }
    goto L_089A3D80;
L_089A3D80:;
    t1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    a2 = 1;
    t3 = 999;
    cnd_ = t1 == 0;
    t4 = 999;
    if (cnd_) { goto L_089A3E04; }
    goto L_089A3D9C;
L_089A3D9C:;
    v0 = LD32(t1);
    v1 = LD32(s0+36);
    v0 = v0 | 0x1;
    ST32(t1, v0);
    ST32(t1+4, v1);
    t2 = LD32(s0+4);
    v0 = LD32(s0+144);
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t1+12, v0);
    if (cnd_) { goto L_089A3DD4; }
    goto L_089A3DC4;
L_089A3DC4:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t3 = LD32(v0+4);
    goto L_089A3DD4;
L_089A3DD4:;
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t0, t3);
    if (cnd_) { goto L_089A3DF0; }
    goto L_089A3DE0;
L_089A3DE0:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t4 = LD32(v0+4);
    goto L_089A3DF0;
L_089A3DF0:;
    v0 = LD32(t0+28);
    ST32(t0+4, t4);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3E04;
L_089A3E04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A3E14 */
void func_089A3E14(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A3E14:;
    sp = sp - 16;
    a2 = 0x59280000u;
    a2 = a2 | 0x29f2;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A3E30;
L_089A3E30:;
    v0 = 0x80000u;
    v1 = LD32(s0+112);
    v0 = v0 | 0x10;
    v1 = v1 | v0;
    v0 = D_08AFBF50 - (-16560);
    v0 = v0 - 16560;
    ST32(s0+112, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089A3E60 */
rv_t func_089A3E60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089A3E60:;
    sp = sp - 128;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089A3EB8; }
    goto L_089A3E84;
L_089A3E84:;
    v0 = LD32(s0+92);
    f20 = BITSF(0);
    a1 = 19;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A3EB8; }
    goto L_089A3E98;
L_089A3E98:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3EA8;
L_089A3EA8:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A3ED4; }
    goto L_089A3EB8;
L_089A3EB8:;
    v0 = 0 + 0;
    goto L_089A3EC0;
L_089A3EC0:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089A3ED4:;
    v1 = LD32(s0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3EE4;
L_089A3EE4:;
    f3 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+8));
    {u32 a_=sp+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f6 = BITSF(LD32(v0));
    v1 = FBITS(f2);
    {v[8]=BITSF(v1);}
    v1 = 0 + 0;
    {v[9]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[10]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f7 = BITSF(LD32(v0+4));
    f8 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f20, 2);
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+24));
    f5 = BITSF(LD32(v0+28));
    a1 = sp + 64;
    a0 = sp + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp, FBITS(f6));
    ST32(sp+4, FBITS(f7));
    ST32(sp+12, FBITS(f8));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f5));
    ST32(sp+48, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+52, FBITS(f20));
    ST32(sp+8, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+32, FBITS(f3));
    if (cnd_) { goto L_089A3FA8; }
    goto L_089A3F74;
L_089A3F74:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+64, v1);
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_089A3FA8;
L_089A3FA8:;
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f0));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3FD0;
L_089A3FD0:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3FE0;
L_089A3FE0:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3FF0;
L_089A3FF0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0899F8D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A3FF8;
L_089A3FF8:;
    goto L_089A3EC0;
}

/* 089A4000 */
rv_t func_089A4000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A4000:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4014;
L_089A4014:;
    v0 = LD32(s0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A4040; }
    goto L_089A4024;
L_089A4024:;
    v1 = LD32(s0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4034;
L_089A4034:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_0899CFE4(a0, a1);
    goto L_089A4040;
L_089A4040:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A4050 */
void func_089A4050(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A4050:;
    a2 = 0xb1bc0000u;
    sp = sp - 16;
    a2 = a2 | 0x8e33;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A406C;
L_089A406C:;
    v0 = D_08AFBEF8 - (-16648);
    v0 = v0 - 16648;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089A4088 */
rv_t func_089A4088(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A4088:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089A4090 */
rv_t func_089A4090(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A4090:;
    sp = sp - 32;
    s2 = a1 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089A4104; }
    goto L_089A40BC;
L_089A40BC:;
    v1 = LD32(s0);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A40CC;
L_089A40CC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_0899CFE4(a0, a1);
    goto L_089A40D8;
L_089A40D8:;
    v1 = LD32(s0);
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A40E8;
L_089A40E8:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    v1 = LD32(s1+112);
    v1 = (v1 & ~(0x1u << 15)) | ((v0 & 0x1) << 15);
    v0 = (v1 >> 15) & 0x1;
    v1 = (v1 & ~(0x1u << 17)) | ((v0 & 0x1) << 17);
    ST32(s1+112, v1);
    goto L_089A4104;
L_089A4104:;
    cnd_ = s2 == 0;
    v1 = D_08ADE3AC - (-7252);
    if (cnd_) { goto L_089A4114; }
    goto L_089A410C;
L_089A410C:;
    v0 = LD32(s2+12);
    ST32(s1+68, v0);
    goto L_089A4114;
L_089A4114:;
    v0 = LD32(v1-7252);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089A4168; }
    goto L_089A4120;
L_089A4120:;
    s2 = v1 - 7252;
    a0 = 0 + 0;
    s3 = 1;
    v0 = a0 + s2;
    goto L_089A4130;
L_089A4130:;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_089A4C44(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4140;
L_089A4140:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A4150; }
    goto L_089A4148;
L_089A4148:;
    ST8(v0+92, s3);
    func_08968CD4(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A4150;
L_089A4150:;
    v0 = s0 << 2;
    v1 = v0 + s2;
    a0 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    v0 = a0 + s2;
    if (cnd_) { goto L_089A4130; }
    goto L_089A4168;
L_089A4168:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4174;
L_089A4174:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089A4190 */
rv_t func_089A4190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_089A4190:;
    sp = sp - 320;
    v0 = LD32(a0+112);
    v0 = v0 & 0x8000;
    cnd_ = v0 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_089A47F0; }
    goto L_089A41B8;
L_089A41B8:;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089A47F0; }
    goto L_089A41C8;
L_089A41C8:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A47F0; }
    goto L_089A41D4;
L_089A41D4:;
    s0 = LD32(s1+92);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089A47F0; }
    goto L_089A41E0;
L_089A41E0:;
    f20 = BITSF(0);
    v1 = LD32(s0);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp, FBITS(f20));
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    v0 = LD32(v1+8);
    ST32(sp+4, FBITS(f20));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    a0 = s0 + 0;
    ST32(sp+8, FBITS(f20));
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4214;
L_089A4214:;
    v1 = LD32(s0);
    ST32(sp, FBITS(f0));
    a0 = s0 + 0;
    a1 = 4;
    v0 = LD32(v1+8);
    t_ = v0;
    ST32(sp+4, FBITS(f20));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4230;
L_089A4230:;
    a1 = FBITS(f0);
    a0 = LD32(sp);
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[0]=BITSF(a0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    v0 = D_08AEE9B8 - (-5704);
    f1 = BITSF(LD32(v0-5704));
    ST32(sp+8, FBITS(f0));
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    fcc = FCMP(f1, f2, 12);
    {u32 a_=sp+(240);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    cnd_ = !fcc;
    {u32 a_=sp+(272);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089A42E8; }
    goto L_089A4280;
L_089A4280:;
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(a0);}
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s1); goto L_089A42EC; }
    goto L_089A42AC;
L_089A42AC:;
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
    goto L_089A42E8;
L_089A42E8:;
    v1 = LD32(s1);
    goto L_089A42EC;
L_089A42EC:;
    a0 = s1 + 0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    v0 = LD32(v1+92);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    t_ = v0;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4308;
L_089A4308:;
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
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
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A458C; }
    goto L_089A4348;
L_089A4348:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A44CC; }
    goto L_089A4358;
L_089A4358:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A43F0; }
    goto L_089A4380;
L_089A4380:;
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
    if (cnd_) { goto L_089A43CC; }
    goto L_089A43BC;
L_089A43BC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A43CC;
L_089A43CC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A4410; }
    goto L_089A43DC;
L_089A43DC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A4410; }
    goto L_089A43EC;
L_089A43EC:;
    goto L_089A43F0;
L_089A43F0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A4410; }
    goto L_089A4404;
L_089A4404:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A4410;
L_089A4410:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A44A0; }
    goto L_089A4430;
L_089A4430:;
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
    if (cnd_) { goto L_089A447C; }
    goto L_089A446C;
L_089A446C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A447C;
L_089A447C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A44C0; }
    goto L_089A448C;
L_089A448C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A44C0; }
    goto L_089A449C;
L_089A449C:;
    goto L_089A44A0;
L_089A44A0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A44C0; }
    goto L_089A44B4;
L_089A44B4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A44C0;
L_089A44C0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089A4644; }
    goto L_089A44C8;
L_089A44C8:;
    goto L_089A44CC;
L_089A44CC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A4560; }
    goto L_089A44F0;
L_089A44F0:;
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
    if (cnd_) { goto L_089A453C; }
    goto L_089A452C;
L_089A452C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A453C;
L_089A453C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A4580; }
    goto L_089A454C;
L_089A454C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A4580; }
    goto L_089A455C;
L_089A455C:;
    goto L_089A4560;
L_089A4560:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A4580; }
    goto L_089A4574;
L_089A4574:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A4580;
L_089A4580:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089A4644; }
    goto L_089A4588;
L_089A4588:;
    goto L_089A458C;
L_089A458C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089A4620; }
    goto L_089A45B0;
L_089A45B0:;
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
    if (cnd_) { goto L_089A45FC; }
    goto L_089A45EC;
L_089A45EC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089A45FC;
L_089A45FC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A4640; }
    goto L_089A460C;
L_089A460C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089A4640; }
    goto L_089A461C;
L_089A461C:;
    goto L_089A4620;
L_089A4620:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089A4640; }
    goto L_089A4634;
L_089A4634:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089A4640;
L_089A4640:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089A4644;
L_089A4644:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(80),FBITS(v[96]));}
    {ST32(sp+(84),FBITS(v[97]));}
    {ST32(sp+(88),FBITS(v[98]));}
    ST32(sp+80, 0);
    {u32 a_=sp+(272);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    ST32(sp+88, 0);
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
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
    {ST32(sp+(32),FBITS(v[96]));}
    {ST32(sp+(36),FBITS(v[97]));}
    {ST32(sp+(40),FBITS(v[98]));}
    {ST32(sp+(44),FBITS(v[100]));}
    {ST32(sp+(48),FBITS(v[101]));}
    {ST32(sp+(52),FBITS(v[102]));}
    {ST32(sp+(56),FBITS(v[104]));}
    {ST32(sp+(60),FBITS(v[105]));}
    {ST32(sp+(64),FBITS(v[106]));}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {v[32]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(v0);}
    v0 = D_08AEE9BC - (-5700);
    f1 = BITSF(LD32(v0-5700));
    f5 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f5 = f5 * f1;
    f0 = f0 * f1;
    f4 = f4 * f1;
    v1 = LD32(sp+44);
    v0 = LD32(sp+48);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[33]=BITSF(v0);}
    v0 = LD32(sp+60);
    {v[34]=BITSF(v1);}
    v1 = LD32(sp+56);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+64);
    {v[33]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[34]=BITSF(v1);}
    {v[36]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = FBITS(f4);
    {v[37]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[38]=BITSF(v0);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(s2+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    ST32(sp+96, FBITS(f0));
    ST32(s2+4, v0);
    ST32(s2, FBITS(f2));
    ST32(sp+100, FBITS(f4));
    ST32(sp+104, FBITS(f5));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_089A47D8;
L_089A47D8:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_089A47F0:;
    a1 = s2 + 0;
    { rv_t r_ = func_089E0698(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A47F8;
L_089A47F8:;
    goto L_089A47D8;
}

/* 089A4800 */
rv_t func_089A4800(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A4800:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_089DFC98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4820;
L_089A4820:;
    v1 = D_08ADE3AC - (-7252);
    v0 = LD32(v1-7252);
    cnd_ = v0 == 0;
    s1 = v1 - 7252;
    if (cnd_) { goto L_089A486C; }
    goto L_089A4830;
L_089A4830:;
    a0 = 0 + 0;
    v0 = a0 + s1;
    goto L_089A4838;
L_089A4838:;
    a1 = LD32(v0);
    a0 = s2 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_089A4C44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4848;
L_089A4848:;
    v1 = v0 + 0;
    v0 = s0 << 2;
    a0 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = v0 + s1;
    if (cnd_) { goto L_089A4860; }
    goto L_089A485C;
L_089A485C:;
    ST8(v1+92, 0);
    goto L_089A4860;
L_089A4860:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    v0 = a0 + s1;
    if (cnd_) { goto L_089A4838; }
    goto L_089A486C;
L_089A486C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A4884 */
rv_t func_089A4884(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A4884:;
    sp = sp - 16;
    s2 = a0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A48A0;
L_089A48A0:;
    v0 = LD32(s2+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    v1 = D_08ADE3AC - (-7252);
    if (cnd_) { goto L_089A48CC; }
    goto L_089A48B0;
L_089A48B0:;
    v1 = LD32(s0);
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A48C0;
L_089A48C0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089A4930; }
    goto L_089A48C8;
L_089A48C8:;
    v1 = D_08ADE3AC - (-7252);
    goto L_089A48CC;
L_089A48CC:;
    v0 = LD32(v1-7252);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089A4918; }
    goto L_089A48D8;
L_089A48D8:;
    s1 = v1 - 7252;
    a0 = 0 + 0;
    v0 = a0 + s1;
    goto L_089A48E4;
L_089A48E4:;
    a1 = LD32(v0);
    a0 = s2 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_089A4C44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A48F4;
L_089A48F4:;
    v1 = v0 + 0;
    v0 = s0 << 2;
    a0 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = v0 + s1;
    if (cnd_) { goto L_089A490C; }
    goto L_089A4908;
L_089A4908:;
    ST8(v1+92, 0);
    goto L_089A490C;
L_089A490C:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    v0 = a0 + s1;
    if (cnd_) { goto L_089A48E4; }
    goto L_089A4918;
L_089A4918:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A4930:;
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A493C;
L_089A493C:;
    a0 = v0 + 0;
    func_08A207E8(a0);
    goto L_089A4944;
L_089A4944:;
    v1 = D_08ADE3AC - (-7252);
    goto L_089A48CC;
}

/* 089A494C */
rv_t func_089A494C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A494C:;
    sp = sp - 16;
    a1 = 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8032;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A4970;
L_089A4970:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_089A49FC; }
    goto L_089A4978;
L_089A4978:;
    t1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    a2 = 1;
    t3 = 999;
    cnd_ = t1 == 0;
    t4 = 999;
    if (cnd_) { goto L_089A49FC; }
    goto L_089A4994;
L_089A4994:;
    v0 = LD32(t1);
    v1 = LD32(s0+36);
    v0 = v0 | 0x1;
    ST32(t1, v0);
    ST32(t1+4, v1);
    t2 = LD32(s0+4);
    v0 = LD32(s0+68);
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t1+12, v0);
    if (cnd_) { goto L_089A49CC; }
    goto L_089A49BC;
L_089A49BC:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t3 = LD32(v0+4);
    goto L_089A49CC;
L_089A49CC:;
    a3 = LD32(t2+52);
    cnd_ = a3 == 0;
    ST32(t0, t3);
    if (cnd_) { goto L_089A49E8; }
    goto L_089A49D8;
L_089A49D8:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t4 = LD32(v0+4);
    goto L_089A49E8;
L_089A49E8:;
    v0 = LD32(t0+28);
    ST32(t0+4, t4);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A49FC;
L_089A49FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A4A0C */
rv_t func_089A4A0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089A4A0C:;
    sp = sp - 80;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_089A4A5C; }
    goto L_089A4A44;
L_089A4A44:;
    v1 = LD32(s1);
    v0 = LD32(v1+228);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4A54;
L_089A4A54:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A4A90; }
    goto L_089A4A5C;
L_089A4A5C:;
    a0 = s3 + 0;
    { rv_t r_ = func_089E01C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4A64;
L_089A4A64:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089A4A90:;
    a0 = s1 + 0;
    v0 = LD32(v1+228);
    t_ = v0;
    s4 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4AA0;
L_089A4AA0:;
    v1 = D_08ADE3AC - (-7252);
    s6 = v0 + 0;
    v0 = LD32(v1-7252);
    cnd_ = v0 == 0;
    v1 = v1 - 7252;
    if (cnd_) { goto L_089A4A5C; }
    goto L_089A4AB4;
L_089A4AB4:;
    a0 = 0 + 0;
    s5 = v1 + 0;
    goto L_089A4ABC;
L_089A4ABC:;
    v0 = a0 + v1;
    a1 = LD32(v0);
    a0 = s3 + 0;
    { rv_t r_ = func_089A4C44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4ACC;
L_089A4ACC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A4C00; }
    goto L_089A4AD4;
L_089A4AD4:;
    a1 = sp + 0;
    a2 = sp + 16;
    { rv_t r_ = func_08968D74(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4AE0;
L_089A4AE0:;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s4 + 1; goto L_089A4C04; }
    goto L_089A4AE8;
L_089A4AE8:;
    a2 = LD32(sp+16);
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    f20 = BITSF(LD32(s6+40));
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_089A4B74; }
    goto L_089A4B00;
L_089A4B00:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A4B50; }
    goto L_089A4B24;
L_089A4B24:;
    a0 = LD32(a1);
    goto L_089A4B28;
L_089A4B28:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A4C24; }
    goto L_089A4B40;
L_089A4B40:;
    a1 = LD32(a1+4);
    goto L_089A4B44;
L_089A4B44:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A4B28; }
    goto L_089A4B4C;
L_089A4B4C:;
    a0 = 0 + 0;
    goto L_089A4B50;
L_089A4B50:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = 0x8001; goto L_089A4B78; }
    goto L_089A4B58;
L_089A4B58:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = a0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { f20 = BITSF(LD32(s6+36)); goto L_089A4B74; }
    goto L_089A4B74;
L_089A4B74:;
    a0 = 0x8001;
    goto L_089A4B78;
L_089A4B78:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A4B88;
L_089A4B88:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089A4C00; }
    goto L_089A4B90;
L_089A4B90:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089A4B9C;
L_089A4B9C:;
    ST32(s0+12, FBITS(f20));
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(s1);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4BC4;
L_089A4BC4:;
    v1 = 0xf4a20000u;
    v1 = v1 | 0xac2b;
    ST32(s0, v1);
    ST32(s0+8, v0);
    v0 = LD32(sp+16);
    ST32(s2, v0);
    v1 = LD32(s1);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4BEC;
L_089A4BEC:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4C00;
L_089A4C00:;
    s4 = s4 + 1;
    goto L_089A4C04;
L_089A4C04:;
    v0 = s4 << 2;
    v1 = v0 + s5;
    a0 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    v1 = s5 + 0;
    if (cnd_) { goto L_089A4ABC; }
    goto L_089A4C1C;
L_089A4C1C:;
    goto L_089A4A5C;
L_089A4C24:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A4B44; }
    goto L_089A4C30;
L_089A4C30:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A4B44; }
    goto L_089A4C3C;
L_089A4C3C:;
    goto L_089A4B50;
}

/* 089A4C44 */
rv_t func_089A4C44(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A4C44:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089A4C80; }
    goto L_089A4C5C;
L_089A4C5C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A4C80; }
    goto L_089A4C74;
L_089A4C74:;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4C7C;
L_089A4C7C:;
    a2 = v0 + 0;
    goto L_089A4C80;
L_089A4C80:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A4C90 */
void func_089A4C90(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A4C90:;
    sp = sp - 16;
    a2 = 0x5b200000u;
    a2 = a2 | 0xcc85;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A4CAC;
L_089A4CAC:;
    v0 = D_08AFBEA0 - (-16736);
    v1 = LD32(s0+112);
    v0 = v0 - 16736;
    ST32(s0, v0);
    v1 = (v1 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v1);
    ST8(s0+148, 0);
    ST32(s0+68, 0);
    sp = sp + 16;
    return;
}

/* 089A4CDC */
rv_t func_089A4CDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089A4CDC:;
    sp = sp - 144;
    s4 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089A4D34; }
    goto L_089A4D04;
L_089A4D04:;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    v0 = 0 < s1;
    if (cnd_) { goto L_089A4D24; }
    goto L_089A4D14;
L_089A4D14:;
    v0 = LD32(s1+520);
    v0 = v0 | 0x10;
    ST32(s1+520, v0);
    v0 = 0 < s1;
    goto L_089A4D24;
L_089A4D24:;
    v1 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s2+20); goto L_089A4D60; }
    goto L_089A4D34;
L_089A4D34:;
    a0 = s4 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4D40;
L_089A4D40:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_089A4D60:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A4D70;
L_089A4D70:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089A4D98; }
    goto L_089A4D78;
L_089A4D78:;
    v0 = LD_U8(s2+16);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_089A4F80; }
    goto L_089A4D84;
L_089A4D84:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2+36); goto L_089A4D9C; }
    goto L_089A4D8C;
L_089A4D8C:;
    v0 = LD_U8(s2+17);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A4E80; }
    goto L_089A4D98;
L_089A4D98:;
    v0 = LD32(s2+36);
    goto L_089A4D9C;
L_089A4D9C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A4DB0; }
    goto L_089A4DA4;
L_089A4DA4:;
    v0 = LD32(s2+12);
    goto L_089A4DA8;
L_089A4DA8:;
    ST32(s4+68, v0);
    goto L_089A4D34;
L_089A4DB0:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4DBC;
L_089A4DBC:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4DD0;
L_089A4DD0:;
    a2 = LD32(s2+36);
    a0 = s0 + 0;
    a1 = v0 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4DE8;
L_089A4DE8:;
    a0 = 72;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4DF4;
L_089A4DF4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    s3 = v0 + 0;
    func_0880FBFC(a0, a1, a2);
    goto L_089A4E08;
L_089A4E08:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a1 = LD32(v0+100);
    cnd_ = a1 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089A4E34; }
    goto L_089A4E20;
L_089A4E20:;
    v1 = LD32(s3);
    a2 = LD32(s2+32);
    v0 = LD32(v1+12);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4E34;
L_089A4E34:;
    v1 = LD32(s2+36);
    v0 = 0xbb520000u;
    v0 = v0 | 0xd335;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s2+12); goto L_089A4DA8; }
    goto L_089A4E48;
L_089A4E48:;
    v0 = LD32(s1);
    a0 = LD32(s2+20);
    a2 = LD32(s2+24);
    v1 = LD32(v0-16);
    t0 = D_08B1CAA0 - (-13664);
    t1 = D_08ADE364 - (-7324);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    t0 = t0 - 13664;
    t1 = t1 - 7324;
    a3 = 3;
    { rv_t r_ = func_08A68BEC(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4E78;
L_089A4E78:;
    v0 = LD32(s2+12);
    goto L_089A4DA8;
L_089A4E80:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4E8C;
L_089A4E8C:;
    v1 = LD32(s3);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4EA0;
L_089A4EA0:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(96);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f5));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f5));
    if (cnd_) { goto L_089A4F4C; }
    goto L_089A4F10;
L_089A4F10:;
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
    goto L_089A4F4C;
L_089A4F4C:;
    a1 = sp + 64;
    a0 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4F58;
L_089A4F58:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4F68;
L_089A4F68:;
    a1 = v0 + 0;
    a0 = s4 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4F78;
L_089A4F78:;
    v0 = LD32(s2+36);
    goto L_089A4D9C;
L_089A4F80:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4F8C;
L_089A4F8C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A4FA0;
L_089A4FA0:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f5 = f5 - f2;
    f4 = f4 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+64, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f5));
    ST32(sp+48, FBITS(f4));
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f5));
    if (cnd_) { goto L_089A504C; }
    goto L_089A5010;
L_089A5010:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
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
    goto L_089A504C;
L_089A504C:;
    a1 = sp + 48;
    a0 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5058;
L_089A5058:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5068;
L_089A5068:;
    a1 = v0 + 0;
    a0 = s4 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5078;
L_089A5078:;
    goto L_089A4D84;
}

/* 089A5080 */
rv_t func_089A5080(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A5080:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5088 */
rv_t func_089A5088(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5088:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A509C;
L_089A509C:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = LD32(s0+4);
    a0 = a0 - 22840;
    a2 = 1;
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A50C8; }
    goto L_089A50B8;
L_089A50B8:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A50C8;
L_089A50C8:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A50D0;
L_089A50D0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A50E4; }
    goto L_089A50D8;
L_089A50D8:;
    v0 = LD32(v0+520);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1+520, v0);
    goto L_089A50E4;
L_089A50E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A50F4 */
rv_t func_089A50F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A50F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFC98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5108;
L_089A5108:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = LD32(s0+4);
    a0 = a0 - 22840;
    a2 = 1;
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A5134; }
    goto L_089A5124;
L_089A5124:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A5134;
L_089A5134:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A513C;
L_089A513C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A5150; }
    goto L_089A5144;
L_089A5144:;
    v0 = LD32(v0+520);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1+520, v0);
    goto L_089A5150;
L_089A5150:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5160 */
void func_089A5160(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5160:;
    sp = sp - 16;
    a2 = 0x9d4a0000u;
    a2 = a2 | 0x123c;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A517C;
L_089A517C:;
    v0 = D_08AFBE48 - (-16824);
    v1 = LD32(s0+112);
    v0 = v0 - 16824;
    ST32(s0, v0);
    v1 = (v1 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v1);
    ST32(s0+68, 0);
    sp = sp + 16;
    return;
}

/* 089A51A8 */
rv_t func_089A51A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089A51A8:;
    sp = sp - 64;
    s3 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089A5284; }
    goto L_089A51D0;
L_089A51D0:;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    v0 = 0 < s1;
    if (cnd_) { goto L_089A51F0; }
    goto L_089A51E0;
L_089A51E0:;
    v0 = LD32(s1+520);
    v0 = v0 | 0x10;
    ST32(s1+520, v0);
    v0 = 0 < s1;
    goto L_089A51F0;
L_089A51F0:;
    v1 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089A5288; }
    goto L_089A5200;
L_089A5200:;
    v0 = LD32(s2+20);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+24); goto L_089A52B0; }
    goto L_089A520C;
L_089A520C:;
    v1 = LD32(s1);
    goto L_089A5210;
L_089A5210:;
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A521C;
L_089A521C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5230;
L_089A5230:;
    a0 = v0 + 0;
    v0 = LD32(s0+56);
    v1 = LD32(s2+12);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_089A5280; }
    goto L_089A5248;
L_089A5248:;
    v0 = LD32(s0+60);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s3+68, a1); goto L_089A5284; }
    goto L_089A5258;
L_089A5258:;
    v0 = LD32(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s3+68, a1); goto L_089A5284; }
    goto L_089A5264;
L_089A5264:;
    v0 = a0 << 2;
    v0 = v0 + s0;
    a0 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a1 = LD32(v0);
    goto L_089A5280;
L_089A5280:;
    ST32(s3+68, a1);
    goto L_089A5284;
L_089A5284:;
    a0 = s3 + 0;
    goto L_089A5288;
L_089A5288:;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5290;
L_089A5290:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089A52B0:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A52B8;
L_089A52B8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A5318; }
    goto L_089A52C0;
L_089A52C0:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A52D0;
L_089A52D0:;
    v1 = D_08AEE9C0 - (-5696);
    f1 = BITSF(LD32(v1-5696));
    ST32(sp+16, 0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f1));
    a2 = sp + 0;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v0 = D_08AEE9C4 - (-5692);
    f12 = BITSF(LD32(v0-5692));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5318;
L_089A5318:;
    v1 = LD32(s2+20);
    v0 = 0xdbb50000u;
    v0 = v0 | 0xf67f;
    cnd_ = v1 == v0;
    v1 = LD32(s1);
    if (cnd_) { goto L_089A53B8; }
    goto L_089A532C;
L_089A532C:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5338;
L_089A5338:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A534C;
L_089A534C:;
    a2 = LD32(s2+20);
    a0 = s0 + 0;
    a1 = v0 + 0;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5364;
L_089A5364:;
    a0 = 72;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5370;
L_089A5370:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    s4 = v0 + 0;
    func_0880FBFC(a0, a1, a2);
    goto L_089A5384;
L_089A5384:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a1 = LD32(v0+100);
    cnd_ = a1 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_089A5210; }
    goto L_089A539C;
L_089A539C:;
    v1 = LD32(s4);
    a2 = LD32(s2+16);
    v0 = LD32(v1+12);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A53B0;
L_089A53B0:;
    v1 = LD32(s1);
    goto L_089A5210;
L_089A53B8:;
    a1 = LD32(s2+16);
    a3 = D_08B1CAA0 - (-13664);
    v0 = LD32(v1-16);
    t0 = D_08ADE31C - (-7396);
    a3 = a3 - 13664;
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    v0 = D_08AEE9C8 - (-5688);
    f12 = BITSF(LD32(v0-5688));
    t0 = t0 - 7396;
    a2 = 3;
    { rv_t r_ = func_08A68D34(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A53E8;
L_089A53E8:;
    v1 = LD32(s1);
    goto L_089A5210;
}

/* 089A53F0 */
rv_t func_089A53F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A53F0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089A53F8 */
rv_t func_089A53F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A53F8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A540C;
L_089A540C:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = LD32(s0+4);
    a0 = a0 - 22840;
    a2 = 1;
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A5438; }
    goto L_089A5428;
L_089A5428:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A5438;
L_089A5438:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5440;
L_089A5440:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A5454; }
    goto L_089A5448;
L_089A5448:;
    v0 = LD32(v0+520);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1+520, v0);
    goto L_089A5454;
L_089A5454:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5464 */
rv_t func_089A5464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5464:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFC98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5478;
L_089A5478:;
    a0 = D_08C2A6C8 - (-22840);
    v0 = LD32(s0+4);
    a0 = a0 - 22840;
    a2 = 1;
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a1 = 999;
    if (cnd_) { goto L_089A54A4; }
    goto L_089A5494;
L_089A5494:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A54A4;
L_089A54A4:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A54AC;
L_089A54AC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A54C0; }
    goto L_089A54B4;
L_089A54B4:;
    v0 = LD32(v0+520);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1+520, v0);
    goto L_089A54C0;
L_089A54C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A54D0 */
void func_089A54D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A54D0:;
    sp = sp - 16;
    a2 = 0xb4840000u;
    a2 = a2 | 0x3a97;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A54EC;
L_089A54EC:;
    v0 = D_08AFBDF0 - (-16912);
    v1 = LD32(s0+112);
    v0 = v0 - 16912;
    ST32(s0, v0);
    v1 = (v1 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+112, v1);
    ST32(s0+152, 0);
    ST32(s0+68, 0);
    sp = sp + 16;
    return;
}

/* 089A551C */
rv_t func_089A551C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A551C:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = 0 < a1;
    s3 = a0 + 0;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089A5588; }
    goto L_089A5548;
L_089A5548:;
    v1 = LD32(a0+4);
    s1 = LD32(v1+52);
    v0 = 0 < s1;
    v0 = v0 & a1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A5588; }
    goto L_089A5560;
L_089A5560:;
    a1 = LD32(s1);
    v1 = LD32(s2+24);
    v0 = LD32(a1-12);
    v0 = s1 + v0;
    cnd_ = v1 != 0;
    s4 = LD32(v0+100);
    if (cnd_) { goto L_089A55BC; }
    goto L_089A5578;
L_089A5578:;
    f0 = BITSF(LD32(s2+28));
    goto L_089A557C;
L_089A557C:;
    v0 = LD32(s2+12);
    ST32(s3+152, FBITS(f0));
    ST32(s3+68, v0);
    goto L_089A5588;
L_089A5588:;
    a0 = s3 + 0;
    func_089A5704(a0);
    goto L_089A5590;
L_089A5590:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A559C;
L_089A559C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A55BC:;
    v0 = LD32(a1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A55C8;
L_089A55C8:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A55DC;
L_089A55DC:;
    a2 = LD32(s2+24);
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = v0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A55F4;
L_089A55F4:;
    a0 = 72;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5600;
L_089A5600:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 1;
    func_0880FBFC(a0, a1, a2);
    goto L_089A5614;
L_089A5614:;
    a1 = s4 + 0;
    a0 = s1 + 0;
    cnd_ = s4 == 0;
    a3 = 1;
    if (cnd_) { goto L_089A5578; }
    goto L_089A5624;
L_089A5624:;
    v1 = LD32(s1);
    v0 = LD32(v1+12);
    t_ = v0;
    a2 = LD32(s2+20);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5634;
L_089A5634:;
    f0 = BITSF(LD32(s2+28));
    goto L_089A557C;
}

/* 089A563C */
rv_t func_089A563C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A563C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5644 */
rv_t func_089A5644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089A5644:;
    f1 = BITSF(LD32(a0+152));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_089A5660; }
    goto L_089A565C;
L_089A565C:;
    v0 = 0 + 0;
    goto L_089A5660;
L_089A5660:;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5668 */
rv_t func_089A5668(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5668:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A567C;
L_089A567C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089A57F8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5684;
L_089A5684:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5694 */
rv_t func_089A5694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5694:;
    sp = sp - 16;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(0);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+152));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(a0+152, FBITS(f0));
    if (cnd_) { goto L_089A56C4; }
    goto L_089A56C0;
L_089A56C0:;
    ST32(a0+152, FBITS(f2));
    goto L_089A56C4;
L_089A56C4:;
    { rv_t r_ = func_089E01C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A56CC;
L_089A56CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A56D8 */
rv_t func_089A56D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A56D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089DFC98(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A56EC;
L_089A56EC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089A57F8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A56F4;
L_089A56F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5704 */
void func_089A5704(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089A5704:;
    sp = sp - 48;
    v0 = LD32(a0+4);
    t0 = LD32(v0+52);
    cnd_ = t0 == 0;
    t1 = 1;
    if (cnd_) { goto L_089A57E8; }
    goto L_089A5720;
L_089A5720:;
    v0 = LD32(t0);
    v1 = LD32(t0+520);
    v1 = (v1 & ~(0x1u << 4)) | ((t1 & 0x1) << 4);
    a3 = LD32(v0-12);
    ST32(t0+520, v1);
    a0 = 0x8a940000u;
    a3 = t0 + a3;
    ST8(t0+197, t1);
    a1 = 0x84a0000u;
    a0 = a0 | 0xc9e9;
    s0 = LD32(a3+100);
    a1 = a1 | 0xfbe2;
    cnd_ = s0 == 0;
    a2 = sp + 16;
    if (cnd_) { goto L_089A57E8; }
    goto L_089A5758;
L_089A5758:;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5760;
L_089A5760:;
    a1 = 0x15b90000u;
    a0 = LD32(sp+16);
    a2 = 0xff800000u;
    a1 = a1 | 0xf654;
    a2 = a2 | 0x8080;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_089A5778;
L_089A5778:;
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    f1 = BITSF(v1);
    v1 = (v0 >> 16) & 0xff;
    f2 = BITSF(v1);
    v0 = v0 >> 24;
    f3 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f5 = (float)(s32)FBITS(f1);
    f6 = (float)(s32)FBITS(f2);
    v0 = D_08AEE9CC - (-5684);
    f0 = BITSF(LD32(v0-5684));
    f1 = (float)(s32)FBITS(f3);
    a0 = s0 + 0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f6 = f6 * f0;
    f1 = f1 * f0;
    f14 = f4;
    f13 = f5;
    f12 = f6;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f1));
    ST32(sp+8, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    ST32(sp, FBITS(f6));
    { rv_t r_ = func_08809B24(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A57E8;
L_089A57E8:;
    sp = sp + 48;
    return;
}

/* 089A57F8 */
rv_t func_089A57F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A57F8:;
    sp = sp - 16;
    a2 = 1;
    a1 = 999;
    v0 = LD32(a0+4);
    a0 = D_08C2A6C8 - (-22840);
    a3 = LD32(v0+52);
    cnd_ = a3 == 0;
    a0 = a0 - 22840;
    if (cnd_) { goto L_089A582C; }
    goto L_089A581C;
L_089A581C:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    a1 = LD32(v0+4);
    goto L_089A582C;
L_089A582C:;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5834;
L_089A5834:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089A5888; }
    goto L_089A583C;
L_089A583C:;
    v0 = LD32(v0+520);
    a0 = LD32(a2);
    ST8(a2+197, 0);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    a1 = 0 + 0;
    ST32(a2+520, v0);
    v0 = D_08AEE9D0 - (-5680);
    f0 = BITSF(LD32(v0-5680));
    v1 = LD32(a0-12);
    ST32(a2+136, FBITS(f0));
    v1 = a2 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A5888; }
    goto L_089A5874;
L_089A5874:;
    v0 = D_08AEE9D4 - (-5676);
    f12 = BITSF(LD32(v0-5676));
    f13 = f12;
    f14 = f12;
    { rv_t r_ = func_08809B24(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5888;
L_089A5888:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5894 */
void func_089A5894(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A5894:;
    sp = sp - 32;
    a2 = 0x8040000u;
    a2 = a2 | 0x3d02;
    s0 = a0 + 0;
    s1 = D_08C2A7C1 - (-22591);
    func_0899F888(a0, a1, a2);
    goto L_089A58B8;
L_089A58B8:;
    v0 = 0x20000u;
    a3 = LD32(s0+112);
    v0 = v0 | 0x8010;
    t0 = LD_U8(s1-22591);
    a3 = (a3 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    a3 = a3 | v0;
    v0 = D_08AFBD98 - (-17000);
    v0 = v0 - 17000;
    a3 = (a3 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    a0 = 0xd0cd0000u;
    a1 = 0x8040000u;
    a3 = a3 | 0x4;
    v1 = (u32)-1;
    ST32(s0, v0);
    v0 = 8;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x3d02;
    ST32(s0+152, v1);
    ST32(s0+112, a3);
    cnd_ = t0 == 0;
    ST32(s0+144, v0);
    if (cnd_) { goto L_089A5924; }
    goto L_089A5910;
L_089A5910:;
    sp = sp + 32;
    return;
L_089A5924:;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A592C;
L_089A592C:;
    a1 = 0x8ee80000u;
    v0 = LD32(sp);
    a1 = a1 | 0xd26f;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A594C; }
    goto L_089A5940;
L_089A5940:;
    v0 = 1;
    ST8(s1-22591, v0);
    goto L_089A5910;
L_089A594C:;
    v0 = D_08AEE9DC - (-5668);
    f12 = BITSF(LD32(v0-5668));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5958;
L_089A5958:;
    a0 = LD32(sp);
    a1 = 0x7c880000u;
    v0 = D_08C2A7C4 - (-22588);
    a1 = a1 | 0x3e56;
    a2 = 0 + 0;
    ST32(v0-22588, FBITS(f0));
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5974;
L_089A5974:;
    v1 = D_08C2A7C8 - (-22584);
    ST32(v1-22584, v0);
    goto L_089A5940;
}

/* 089A5980 */
rv_t func_089A5980(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A5980:;
    sp = sp - 32;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089A5ACC; }
    goto L_089A59A8;
L_089A59A8:;
    v0 = LD32(s0+236);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A59D4; }
    goto L_089A59B4;
L_089A59B4:;
    v0 = LD_U8(v0+127);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A59D4; }
    goto L_089A59C0;
L_089A59C0:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A59F0; }
    goto L_089A59CC;
L_089A59CC:;
    v0 = LD32(s0+520);
    v0 = (v0 >> 14) & 0x1;
    goto L_089A59D4;
L_089A59D4:;
    goto L_089A59D8;
L_089A59D8:;
    goto L_089A59DC;
L_089A59DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A59F0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A59F8;
L_089A59F8:;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089A5A24; }
    goto L_089A5A00;
L_089A5A00:;
    a0 = v0 + 0;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5A08;
L_089A5A08:;
    f1 = BITSF(LD32(v0+4));
    v0 = D_08AEE9E0 - (-5664);
    f0 = BITSF(LD32(v0-5664));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s3 = 1; goto L_089A5A24; }
    goto L_089A5A24;
L_089A5A24:;
    a0 = LD32(s0+92);
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089A5A54; }
    goto L_089A5A30;
L_089A5A30:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5A40;
L_089A5A40:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { s2 = 1; goto L_089A5A54; }
    goto L_089A5A54;
L_089A5A54:;
    v1 = LD32(s0);
    v0 = LD32(v1+344);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5A64;
L_089A5A64:;
    v0 = D_08C2A7C4 - (-22588);
    f1 = BITSF(LD32(v0-22588));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_089A5A80; }
    goto L_089A5A7C;
L_089A5A7C:;
    a0 = 0 + 0;
    goto L_089A5A80;
L_089A5A80:;
    v0 = LD32(s0+520);
    v0 = (v0 >> 14) & 0x1;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089A5AAC; }
    goto L_089A5A90;
L_089A5A90:;
    v0 = D_08AEE9E4 - (-5660);
    f0 = BITSF(LD32(s1+156));
    f1 = BITSF(LD32(v0-5660));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = 0 + 0; goto L_089A5AAC; }
    goto L_089A5AAC;
L_089A5AAC:;
    cnd_ = s3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A59D4; }
    goto L_089A5AB4;
L_089A5AB4:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089A59D8; }
    goto L_089A5ABC;
L_089A5ABC:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089A59DC; }
    goto L_089A5AC4;
L_089A5AC4:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089A5AD4; }
    goto L_089A5ACC;
L_089A5ACC:;
    v0 = 0 + 0;
    goto L_089A59D4;
L_089A5AD4:;
    a0 = s1 + 0;
    { rv_t r_ = func_0899F8D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5ADC;
L_089A5ADC:;
    goto L_089A59D8;
}

/* 089A5AE4 */
rv_t func_089A5AE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089A5AE4:;
    sp = sp - 96;
    v1 = 0 + 0;
    s3 = a1 + 0;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089A5B88; }
    goto L_089A5B1C;
L_089A5B1C:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD_U8(s1+195); goto L_089A5BB0; }
    goto L_089A5B24;
L_089A5B24:;
    v0 = D_08C2A7C8 - (-22584);
    goto L_089A5B28;
L_089A5B28:;
    a0 = LD32(v0-22584);
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5B34;
L_089A5B34:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A5B64; }
    goto L_089A5B3C;
L_089A5B3C:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5B4C;
L_089A5B4C:;
    a2 = v0 + 0;
    v0 = D_08AEE9F0 - (-5648);
    f12 = BITSF(LD32(v0-5648));
    a1 = s2 + 152;
    a0 = s0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5B64;
L_089A5B64:;
    v0 = D_08C2A7C4 - (-22588);
    f12 = BITSF(LD32(v0-22588));
    a0 = s1 + 0;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5B74;
L_089A5B74:;
    ST32(s2+156, 0);
    a0 = s2 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5B84;
L_089A5B84:;
    v1 = v0 + 0;
    goto L_089A5B88;
L_089A5B88:;
    v0 = v1 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089A5BB0:;
    cnd_ = v0 == 0;
    v0 = D_08C2A7C8 - (-22584);
    if (cnd_) { goto L_089A5B28; }
    goto L_089A5BB8;
L_089A5BB8:;
    a0 = 0xde350000u;
    a1 = 0x203e0000u;
    a2 = sp + 32;
    a0 = a0 | 0x46b6;
    a1 = a1 | 0x217d;
    ST32(sp+32, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5BD4;
L_089A5BD4:;
    v0 = D_08AEE9E8 - (-5656);
    f12 = BITSF(LD32(v0-5656));
    a0 = LD32(sp+32);
    a1 = 0xa4c50000u;
    a1 = a1 | 0x991c;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5BEC;
L_089A5BEC:;
    v0 = D_08AEE9EC - (-5652);
    a0 = LD32(sp+32);
    f12 = BITSF(LD32(v0-5652));
    a1 = 0x53d50000u;
    a1 = a1 | 0x343f;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5C08;
L_089A5C08:;
    a0 = s1 + 0;
    f20 = f0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5C14;
L_089A5C14:;
    cnd_ = v0 == 0;
    v0 = D_08C2A7C8 - (-22584);
    if (cnd_) { goto L_089A5B28; }
    goto L_089A5C1C;
L_089A5C1C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5C24;
L_089A5C24:;
    a0 = v0 + 0;
    a1 = sp + 0;
    s0 = v0 + 0;
    func_088BB170(a0, a1);
    goto L_089A5C34;
L_089A5C34:;
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(FBITS(f20) ^ 0x80000000u);
    f0 = f2 - f21;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089A5C50; }
    goto L_089A5C50;
L_089A5C50:;
    f0 = f0 - f2;
    a0 = s0 + 0;
    a1 = sp + 16;
    a2 = 1;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, 0);
    ST32(sp+24, 0);
    { rv_t r_ = func_088BB040(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5C70;
L_089A5C70:;
    v0 = D_08C2A7C8 - (-22584);
    goto L_089A5B28;
}

/* 089A5C78 */
rv_t func_089A5C78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5C78:;
    sp = sp - 16;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+156));
    f0 = f0 + f1;
    ST32(a0+156, FBITS(f0));
    { rv_t r_ = func_089E01C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5C98;
L_089A5C98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5CA4 */
rv_t func_089A5CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5CA4:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+152);
    cnd_ = v1 == v0;
    a0 = a0 + 152;
    if (cnd_) { goto L_089A5CCC; }
    goto L_089A5CC4;
L_089A5CC4:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5CCC;
L_089A5CCC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DFDDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5CD4;
L_089A5CD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5CE4 */
void func_089A5CE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5CE4:;
    sp = sp - 16;
    a2 = 0x2b850000u;
    a2 = a2 | 0xd92c;
    s0 = a0 + 0;
    func_0899F888(a0, a1, a2);
    goto L_089A5D00;
L_089A5D00:;
    v0 = D_08AFBD40 - (-17088);
    v1 = LD32(s0+112);
    v0 = v0 - 17088;
    ST32(s0, v0);
    v1 = (v1 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    v1 = (v1 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s0+112, v1);
    v1 = 1;
    ST8(s0+148, v1);
    ST32(s0+144, 0);
    sp = sp + 16;
    return;
}

/* 089A5D38 */
rv_t func_089A5D38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5D38:;
    sp = sp - 16;
    v0 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089A5D74; }
    goto L_089A5D5C;
L_089A5D5C:;
    goto L_089A5D60;
L_089A5D60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A5D74:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A5D5C; }
    goto L_089A5D80;
L_089A5D80:;
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089A5D9C; }
    goto L_089A5D8C;
L_089A5D8C:;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5D94;
L_089A5D94:;
    cnd_ = v0 != 0;
    v0 = LD32(s1+4);
    if (cnd_) { goto L_089A5DD8; }
    goto L_089A5D9C;
L_089A5D9C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_089A5D5C; }
    goto L_089A5DA4;
L_089A5DA4:;
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089A5DD0; }
    goto L_089A5DB0;
L_089A5DB0:;
    v0 = LD32(a0+520);
    v0 = (v0 & ~(0x1u << 21)) | ((v1 & 0x1) << 21);
    ST32(a0+520, v0);
    a1 = s2 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0899F93C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5DC8;
L_089A5DC8:;
    goto L_089A5D60;
L_089A5DD0:;
    v0 = 0 + 0;
    goto L_089A5D5C;
L_089A5DD8:;
    s0 = D_08B45A9C - (23196);
    s0 = s0 + 23196;
    a0 = LD32(v0+52);
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5DE8;
L_089A5DE8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5DF4;
L_089A5DF4:;
    v0 = LD32(s1+4);
    a0 = LD32(v0+52);
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5E00;
L_089A5E00:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088BAE28(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5E0C;
L_089A5E0C:;
    v0 = LD32(s1+4);
    goto L_089A5D9C;
}

/* 089A5E14 */
rv_t func_089A5E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5E14:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089A5E4C; }
    goto L_089A5E34;
L_089A5E34:;
    v0 = LD32(v0+56);
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A5E50; }
    goto L_089A5E40;
L_089A5E40:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A5E64; }
    goto L_089A5E4C;
L_089A5E4C:;
    v0 = 0 + 0;
    goto L_089A5E50;
L_089A5E50:;
    goto L_089A5E54;
L_089A5E54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A5E64:;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5E6C;
L_089A5E6C:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A5E50; }
    goto L_089A5E74;
L_089A5E74:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5E7C;
L_089A5E7C:;
    a0 = v0 + 0;
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A5E84;
L_089A5E84:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089A5E50; }
    goto L_089A5E8C;
L_089A5E8C:;
    v0 = LD32(s0+520);
    v0 = (v0 >> 21) & 0x1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A5E4C; }
    goto L_089A5E9C;
L_089A5E9C:;
    { rv_t r_ = func_0899F8D8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5EA4;
L_089A5EA4:;
    goto L_089A5E54;
}

/* 089A5EAC */
rv_t func_089A5EAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089A5EAC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A5ECC; }
    goto L_089A5EB8;
L_089A5EB8:;
    v1 = LD32(v0+52);
    cnd_ = v1 == 0;
    v0 = D_08ADE12C - (-7892);
    if (cnd_) { goto L_089A5ECC; }
    goto L_089A5EC4;
L_089A5EC4:;
    f0 = BITSF(LD32(v0-7892));
    ST32(v1+396, FBITS(f0));
    goto L_089A5ECC;
L_089A5ECC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5ED4 */
rv_t func_089A5ED4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5ED4:;
    sp = sp - 16;
    { rv_t r_ = func_089E0420(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5EE4;
L_089A5EE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5EF0 */
rv_t func_089A5EF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089A5EF0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2A730 - (-22736);
    t1 = D_08C2A740 - (-22720);
    t2 = D_08C2A750 - (-22704);
    a1 = a1 & a0;
    v1 = t0 - 22736;
    a2 = t1 - 22720;
    cnd_ = a1 == 0;
    a3 = t2 - 22704;
    if (cnd_) { goto L_089A5FA8; }
    goto L_089A5F20;
L_089A5F20:;
    v0 = D_08AEE9F4 - (-5644);
    f4 = BITSF(LD32(v0-5644));
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
    ST32(t0-22736, FBITS(f2));
    ST32(t1-22720, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-22704, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089A5FA8;
L_089A5FA8:;
    return (rv_t){ v0, v1, f0 };
}

/* 089A5FB0 */
float func_089A5FB0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089A5FB0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089A5FDC; }
    goto L_089A5FC8;
L_089A5FC8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089A5FDC; }
    goto L_089A5FDC;
L_089A5FDC:;
    return f0;
}

/* 089A5FE4 */
rv_t func_089A5FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A5FE4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089A5EF0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A5FF8;
L_089A5FF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A6004 */
rv_t func_089A6004(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089A6004:;
    sp = sp - 48;
    s3 = a0 + 0;
    s1 = a0 + 420;
    a0 = s1 + 0;
    s0 = D_08AFC550 - (-15024);
    s0 = s0 - 15024;
    s2 = s3 + 344;
    func_08873E94(a0, a1);
    goto L_089A6044;
L_089A6044:;
    a1 = s0 + 36;
    a0 = s2 + 0;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089A6058;
L_089A6058:;
    a2 = 999;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_089E13B8(a0, a1);
    goto L_089A6068;
L_089A6068:;
    v0 = D_08AEE9FC - (-5636);
    v1 = D_08AFC2C8 - (-15672);
    f0 = BITSF(LD32(v0-5636));
    v1 = v1 - 15672;
    v0 = v1 + 372;
    a1 = 999;
    a0 = v1 + 576;
    ST32(s3+344, v0);
    v0 = (u32)-32763;
    s4 = 0 + 0;
    ST32(s3+308, FBITS(f0));
    ST32(s3+212, a1);
    ST32(s3+216, a1);
    ST32(s3+220, a1);
    ST32(s3+224, a1);
    ST32(s3+296, a1);
    ST32(s3+420, a0);
    ST32(s3, v1);
    ST32(s3+200, 0);
    ST32(s3+204, 0);
    ST32(s3+208, 0);
    ST32(s3+228, 0);
    ST8(s3+232, 0);
    ST8(s3+233, 0);
    ST32(s3+240, 0);
    ST32(s3+244, 0);
    ST32(s3+248, 0);
    ST32(s3+252, 0);
    ST32(s3+256, 0);
    ST32(s3+260, 0);
    ST32(s3+264, 0);
    ST32(s3+268, 0);
    ST32(s3+272, 0);
    ST32(s3+276, 0);
    ST32(s3+280, 0);
    ST32(s3+284, 0);
    ST32(s3+288, 0);
    ST32(s3+292, 0);
    ST16(s3+300, 0);
    ST16(s3+302, 0);
    ST32(s3+304, 0);
    ST32(s3+312, FBITS(f0));
    ST32(s3+332, a1);
    ST32(s3+316, 0);
    ST32(s3+320, 0);
    ST32(s3+324, 0);
    ST8(s3+328, 0);
    ST32(s3+336, 0);
    ST8(s3+340, 0);
    ST16(s1+8, v0);
    v0 = 1;
    v1 = LD32(s3+200);
    ST32(s3+236, v0);
    v1 = v1 | 0x28;
    ST32(s3+200, v1);
    ST8(s3+329, 0);
    v0 = func_08986BD8(0, 0, 0);
    goto L_089A614C;
L_089A614C:;
    ST32(s3+204, v0);
    a0 = 64;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6158;
L_089A6158:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s3 + 0;
    func_08956B74(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A6168;
L_089A6168:;
    ST32(s3+176, s0);
    a0 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08864BB0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6178;
L_089A6178:;
    v0 = D_08ADE4C8 - (-6968);
    ST32(sp, 0);
    s6 = v0 - 6968;
    v1 = D_08ADE4B8 - (-6984);
    v0 = D_08ADE4A8 - (-7000);
    s5 = v1 - 6984;
    s2 = v0 - 7000;
    goto L_089A6194;
L_089A6194:;
    s1 = s4 << 2;
    v0 = s1 + s6;
    a1 = LD32(v0);
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A61B0;
L_089A61B0:;
    v1 = s1 + s5;
    a1 = LD32(v1);
    f12 = BITSF(0);
    a0 = LD32(sp);
    s0 = s1 + s3;
    s1 = s1 + s2;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A61CC;
L_089A61CC:;
    ST32(s0+264, FBITS(f0));
    s4 = s4 + 1;
    ST32(s0+248, 0);
    a1 = LD32(s1);
    a0 = LD32(sp);
    f12 = BITSF(LD32(s0+248));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A61E8;
L_089A61E8:;
    v0 = s4 < 0x4u;
    cnd_ = v0 != 0;
    ST32(s0+280, FBITS(f0));
    if (cnd_) { goto L_089A6194; }
    goto L_089A61F4;
L_089A61F4:;
    a0 = LD32(s3);
    s2 = D_08C2A880 - (-22400);
    s1 = s2 - 22400;
    v0 = LD32(a0-16);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6220;
L_089A6220:;
    a0 = LD32(s2-22400);
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
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 089A6274 */
rv_t func_089A6274(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A6274:;
    sp = sp - 16;
    v0 = D_08AFC2C8 - (-15672);
    v0 = v0 - 15672;
    s1 = a0 + 0;
    v1 = v0 + 372;
    a0 = v0 + 576;
    a2 = 1;
    ST32(s1+344, v1);
    ST32(s1+420, a0);
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a1 = LD32(s1+224);
    ST32(s1, v0);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A62B8;
L_089A62B8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A62CC; }
    goto L_089A62C0;
L_089A62C0:;
    v0 = LD32(v0+228);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(v1+228, v0);
    goto L_089A62CC;
L_089A62CC:;
    v0 = LD32(s1+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = LD32(s1+176);
    if (cnd_) { goto L_089A6374; }
    goto L_089A62DC;
L_089A62DC:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A635C; }
    goto L_089A62E4;
L_089A62E4:;
    s0 = LD32(s1+204);
    goto L_089A62E8;
L_089A62E8:;
    ST32(s1+176, 0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A6344; }
    goto L_089A62F4;
L_089A62F4:;
    a0 = D_08C2A880 - (-22400);
    s0 = D_08AFC550 - (-15024);
    a1 = s1 + 0;
    a0 = a0 - 22400;
    s0 = s0 - 15024;
    func_08AC49C8(a0, a1, 0, 0, 0);
    goto L_089A630C;
L_089A630C:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E15D8(a0, a1, 0, 0);
    goto L_089A631C;
L_089A631C:;
    a1 = s0 + 0;
    a0 = s1 + 344;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A6328;
L_089A6328:;
    a0 = s1 + 420;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6330;
L_089A6330:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A6344:;
    func_08986B30(a0, 0, 0, 0);
    goto L_089A634C;
L_089A634C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6354;
L_089A6354:;
    ST32(s1+204, 0);
    goto L_089A62F4;
L_089A635C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A636C;
L_089A636C:;
    s0 = LD32(s1+204);
    goto L_089A62E8;
L_089A6374:;
    v1 = LD32(v0);
    a1 = LD32(v1+16);
    t_ = a1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6384;
L_089A6384:;
    v0 = LD32(s1+176);
    goto L_089A62DC;
}

/* 089A638C */
rv_t func_089A638C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A638C:;
    sp = sp - 16;
    v0 = D_08AFC2C8 - (-15672);
    v0 = v0 - 15672;
    s1 = a0 + 0;
    v1 = v0 + 372;
    a0 = v0 + 576;
    a2 = 1;
    ST32(s1+344, v1);
    ST32(s1+420, a0);
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a1 = LD32(s1+224);
    ST32(s1, v0);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A63D0;
L_089A63D0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089A63E4; }
    goto L_089A63D8;
L_089A63D8:;
    v0 = LD32(v0+228);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(v1+228, v0);
    goto L_089A63E4;
L_089A63E4:;
    v0 = LD32(s1+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = LD32(s1+176);
    if (cnd_) { goto L_089A6494; }
    goto L_089A63F4;
L_089A63F4:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A647C; }
    goto L_089A63FC;
L_089A63FC:;
    s0 = LD32(s1+204);
    goto L_089A6400;
L_089A6400:;
    ST32(s1+176, 0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A6464; }
    goto L_089A640C;
L_089A640C:;
    a0 = D_08C2A880 - (-22400);
    s0 = D_08AFC550 - (-15024);
    a1 = s1 + 0;
    a0 = a0 - 22400;
    s0 = s0 - 15024;
    func_08AC49C8(a0, a1, 0, 0, 0);
    goto L_089A6424;
L_089A6424:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E15D8(a0, a1, 0, 0);
    goto L_089A6434;
L_089A6434:;
    a1 = s0 + 0;
    a0 = s1 + 344;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A6440;
L_089A6440:;
    a0 = s1 + 420;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6448;
L_089A6448:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6450;
L_089A6450:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A6464:;
    func_08986B30(a0, 0, 0, 0);
    goto L_089A646C;
L_089A646C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6474;
L_089A6474:;
    ST32(s1+204, 0);
    goto L_089A640C;
L_089A647C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A648C;
L_089A648C:;
    s0 = LD32(s1+204);
    goto L_089A6400;
L_089A6494:;
    v1 = LD32(v0);
    a1 = LD32(v1+16);
    t_ = a1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A64A4;
L_089A64A4:;
    v0 = LD32(s1+176);
    goto L_089A63F4;
}

/* 089A64AC */
u64 func_089A64AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A64AC:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A64C4;
L_089A64C4:;
    f1 = BITSF(LD32(v0+4));
    v0 = D_08AEEA00 - (-5632);
    f0 = BITSF(LD32(v0-5632));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_089A64E4; }
    goto L_089A64E0;
L_089A64E0:;
    v1 = 0 + 0;
    goto L_089A64E4;
L_089A64E4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089A64F4 */
rv_t func_089A64F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089A64F4:;
    sp = sp - 112;
    v0 = LD32(a0+316);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089A6990; }
    goto L_089A6534;
L_089A6534:;
    v0 = LD32(s1+200);
    goto L_089A6538;
L_089A6538:;
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A694C; }
    goto L_089A6544;
L_089A6544:;
    a0 = s1 + 0;
    { u64 r_ = func_089A64AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A654C;
L_089A654C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A6904; }
    goto L_089A6554;
L_089A6554:;
    v0 = LD_U8(s1+28);
    goto L_089A6558;
L_089A6558:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A65D0; }
    goto L_089A6560;
L_089A6560:;
    a1 = LD32(s1+84);
    a0 = D_08C2A08C - (-24436);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 24436;
    if (cnd_) { goto L_089A65CC; }
    goto L_089A6574;
L_089A6574:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A65B8; }
    goto L_089A6598;
L_089A6598:;
    a0 = LD32(v1);
    goto L_089A659C;
L_089A659C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089A68E4; }
    goto L_089A65A8;
L_089A65A8:;
    v1 = LD32(v1+4);
    goto L_089A65AC;
L_089A65AC:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089A659C; }
    goto L_089A65B4;
L_089A65B4:;
    a0 = 0 + 0;
    goto L_089A65B8;
L_089A65B8:;
    cnd_ = a0 == 0;
    v0 = D_08ADC664 - (-14748);
    if (cnd_) { goto L_089A65CC; }
    goto L_089A65C0;
L_089A65C0:;
    a1 = LD32(v0-14748);
    { u64 r_ = func_089824B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A65C8;
L_089A65C8:;
    ST8(s1+28, v0);
    goto L_089A65CC;
L_089A65CC:;
    v1 = LD32(s1);
    goto L_089A65D0;
L_089A65D0:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    a0 = s1 + v0;
    f1 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1-16); goto L_089A6808; }
    goto L_089A65F0;
L_089A65F0:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089A6838; }
    goto L_089A65FC;
L_089A65FC:;
    v0 = LD32(v1-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1-16); goto L_089A6808; }
    goto L_089A661C;
L_089A661C:;
    v0 = D_08ADE4D8 - (-6952);
    v1 = D_08ADC668 - (-14744);
    s5 = v0 - 6952;
    s7 = v1 - 14744;
    s0 = 0 + 0;
    s3 = 1;
    s4 = D_08C2A08C - (-24436);
    s6 = D_08B285A0 - (-31328);
    v0 = LD32(s1+244);
    goto L_089A6640;
L_089A6640:;
    v1 = s3 << (s0 & 31);
    a2 = 1;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = s4 - 24436;
    if (cnd_) { goto L_089A675C; }
    goto L_089A6654;
L_089A6654:;
    s0 = s0 + 1;
    v0 = s0 < 0x4u;
    goto L_089A665C;
L_089A665C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+244); goto L_089A6640; }
    goto L_089A6664;
L_089A6664:;
    v1 = LD32(s1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f20 = BITSF(LD32(v0+40));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    f21 = BITSF(LD32(s1+8));
    if (cnd_) { goto L_089A6698; }
    goto L_089A6688;
L_089A6688:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(v1+160); goto L_089A66D8; }
    goto L_089A6698;
L_089A6698:;
    a0 = s1 + 0;
    { rv_t r_ = func_089E1890(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A66A0;
L_089A66A0:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089A66D8:;
    a0 = s1 + 0;
    t_ = v0;
    f22 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A66E4;
L_089A66E4:;
    cnd_ = v0 == 0;
    v0 = D_08AEEA08 - (-5624);
    if (cnd_) { goto L_089A673C; }
    goto L_089A66EC;
L_089A66EC:;
    f22 = BITSF(LD32(v0-5624));
    goto L_089A66F0;
L_089A66F0:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f22, 12);
    cnd_ = !fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089A6698; }
    goto L_089A6704;
L_089A6704:;
    f0 = BITSF(LD32(v0-31328));
    f0 = f22 * f0;
    f0 = f20 + f0;
    fcc = FCMP(f21, f0, 14);
    cnd_ = fcc;
    f12 = f21;
    if (cnd_) { goto L_089A6724; }
    goto L_089A6720;
L_089A6720:;
    f12 = f0;
    goto L_089A6724;
L_089A6724:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    func_0886422C(a0, f12);
    goto L_089A6734;
L_089A6734:;
    goto L_089A6698;
L_089A673C:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6744;
L_089A6744:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A66F0; }
    goto L_089A674C;
L_089A674C:;
    a0 = LD32(s1+12);
    f0 = func_08A3CDF0(a0);
    goto L_089A6754;
L_089A6754:;
    f22 = f0;
    goto L_089A66F0;
L_089A675C:;
    a1 = LD32(s1+84);
    s2 = s0 << 2;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6768;
L_089A6768:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = s2 + s5;
    if (cnd_) { goto L_089A6654; }
    goto L_089A6774;
L_089A6774:;
    v0 = LD32(v1);
    v0 = v0 << 2;
    v0 = v0 + s7;
    a1 = LD32(v0);
    { u64 r_ = func_089824B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6788;
L_089A6788:;
    cnd_ = v0 != 0;
    v0 = s2 + s1;
    if (cnd_) { goto L_089A67B0; }
    goto L_089A6790;
L_089A6790:;
    a2 = LD32(s1);
    v0 = LD32(s1+296);
    v1 = LD32(a2-16);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    cnd_ = a1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A67E8; }
    goto L_089A67AC;
L_089A67AC:;
    v0 = s2 + s1;
    goto L_089A67B0;
L_089A67B0:;
    f2 = BITSF(LD32(s6-31328));
    f0 = BITSF(LD32(v0+248));
    f1 = BITSF(LD32(v0+264));
    a1 = s0 + 0;
    f0 = f0 + f2;
    a0 = s1 + 0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(v0+248, FBITS(f0));
    if (cnd_) { goto L_089A6654; }
    goto L_089A67D8;
L_089A67D8:;
    s0 = s0 + 1;
    func_089A8188(a0, a1);
    goto L_089A67E0;
L_089A67E0:;
    v0 = s0 < 0x4u;
    goto L_089A665C;
L_089A67E8:;
    v0 = LD32(a2+168);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A67F4;
L_089A67F4:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089A67AC; }
    goto L_089A6800;
L_089A6800:;
    goto L_089A67D8;
L_089A6808:;
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    v0 = func_08A12950(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A6814;
L_089A6814:;
    ST32(s1+220, v0);
    a1 = s1 + 208;
    a0 = s1 + 0;
    v0 = func_089D5B64(a0, a1);
    goto L_089A6824;
L_089A6824:;
    ST32(s1+212, v0);
    a0 = s1 + 0;
    v0 = func_089A86F8(a0, 0, 0, 0);
    goto L_089A6830;
L_089A6830:;
    ST32(s1+216, v0);
    goto L_089A661C;
L_089A6838:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6840;
L_089A6840:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A6850; }
    goto L_089A6848;
L_089A6848:;
    v1 = LD32(s1);
    goto L_089A65FC;
L_089A6850:;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6860;
L_089A6860:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A6888; }
    goto L_089A6868;
L_089A6868:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6880;
L_089A6880:;
    v1 = LD32(s1);
    goto L_089A65FC;
L_089A6888:;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    s0 = LD32(v1+4);
    a0 = s0 + 0;
    v0 = func_088BB494(a0);
    goto L_089A689C;
L_089A689C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A68B8; }
    goto L_089A68A4;
L_089A68A4:;
    a0 = s0 + 0;
    { u64 r_ = func_088BB4BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A68AC;
L_089A68AC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A65FC; }
    goto L_089A68B4;
L_089A68B4:;
    v0 = LD32(s1);
    goto L_089A68B8;
L_089A68B8:;
    a1 = 1;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    s0 = LD32(v1+4);
    a0 = s0 + 0;
    func_088BB4A4(a0, a1);
    goto L_089A68D0;
L_089A68D0:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A68DC;
L_089A68DC:;
    v1 = LD32(s1);
    goto L_089A65FC;
L_089A68E4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089A65AC; }
    goto L_089A68F0;
L_089A68F0:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089A65AC; }
    goto L_089A68FC;
L_089A68FC:;
    goto L_089A65B8;
L_089A6904:;
    a0 = sp + 0;
    func_0897A7A0(a0);
    goto L_089A690C;
L_089A690C:;
    a3 = LD32(s1);
    v0 = D_08AEEA04 - (-5628);
    a1 = LD32(s1+84);
    v1 = LD32(a3-16);
    f0 = BITSF(LD32(v0-5628));
    v0 = LD32(a3+8);
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    ST32(sp+12, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+8, a1);
    a1 = sp + 0;
    t_ = v0;
    ST32(sp+4, a2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6944;
L_089A6944:;
    v0 = LD_U8(s1+28);
    goto L_089A6558;
L_089A694C:;
    ST32(sp+32, 0);
    a1 = sp + 32;
    v0 = LD32(v1+180);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6960;
L_089A6960:;
    a1 = LD32(sp+32);
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A697C; }
    goto L_089A696C;
L_089A696C:;
    v0 = LD32(s1+200);
    goto L_089A6970;
L_089A6970:;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s1+200, v0);
    goto L_089A6544;
L_089A697C:;
    v0 = LD32(v1+184);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6988;
L_089A6988:;
    v0 = LD32(s1+200);
    goto L_089A6970;
L_089A6990:;
    v0 = func_089A81B4(a0);
    goto L_089A6998;
L_089A6998:;
    ST32(s1+316, v0);
    a0 = s1 + 0;
    { u64 r_ = func_089A82E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A69A4;
L_089A69A4:;
    v0 = LD32(s1+200);
    goto L_089A6538;
}

/* 089A69AC */
rv_t func_089A69AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A69AC:;
    sp = sp - 16;
    v0 = a0 + 0;
    a2 = a1 + 0;
    v1 = LD32(a0);
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a3 = LD32(v1-12);
    v0 = v0 + a3;
    a1 = LD32(v0+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A69D8;
L_089A69D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A69E4 */
rv_t func_089A69E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A69E4:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089E3E38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6A00;
L_089A6A00:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089A6A0C;
L_089A6A0C:;
    a1 = 0xbeeb0000u;
    a0 = s0 + 0;
    a1 = a1 | 0x1a1c;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6A20;
L_089A6A20:;
    cnd_ = v0 == 0;
    a1 = 0x300000u;
    if (cnd_) { goto L_089A6A30; }
    goto L_089A6A28;
L_089A6A28:;
    v0 = LD32(sp+4);
    ST32(s1+12, v0);
    goto L_089A6A30;
L_089A6A30:;
    a0 = s0 + 0;
    a1 = a1 | 0xcffa;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6A40;
L_089A6A40:;
    cnd_ = v0 != 0;
    a1 = LD_U8(sp+4);
    if (cnd_) { goto L_089A6B2C; }
    goto L_089A6A48;
L_089A6A48:;
    a1 = 0xcf930000u;
    goto L_089A6A4C;
L_089A6A4C:;
    a0 = s0 + 0;
    a1 = a1 | 0x7a1e;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6A5C;
L_089A6A5C:;
    cnd_ = v0 == 0;
    a1 = 0x94cc0000u;
    if (cnd_) { goto L_089A6A6C; }
    goto L_089A6A64;
L_089A6A64:;
    f0 = BITSF(LD32(sp+4));
    ST32(s1+304, FBITS(f0));
    goto L_089A6A6C;
L_089A6A6C:;
    a0 = s0 + 0;
    a1 = a1 | 0x818a;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6A7C;
L_089A6A7C:;
    cnd_ = v0 == 0;
    a1 = 0x94cc0000u;
    if (cnd_) { goto L_089A6A8C; }
    goto L_089A6A84;
L_089A6A84:;
    v0 = LD32(sp+4);
    ST16(s1+300, v0);
    goto L_089A6A8C;
L_089A6A8C:;
    a0 = s0 + 0;
    a1 = a1 | 0x818b;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6A9C;
L_089A6A9C:;
    cnd_ = v0 == 0;
    a1 = 0x96dc0000u;
    if (cnd_) { goto L_089A6AAC; }
    goto L_089A6AA4;
L_089A6AA4:;
    v0 = LD32(sp+4);
    ST16(s1+302, v0);
    goto L_089A6AAC;
L_089A6AAC:;
    a0 = s0 + 0;
    a1 = a1 | 0x17db;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6ABC;
L_089A6ABC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A6B1C; }
    goto L_089A6AC4;
L_089A6AC4:;
    a1 = 0xb7350000u;
    a0 = s0 + 0;
    a1 = a1 | 0x25c;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6AD8;
L_089A6AD8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A6B00; }
    goto L_089A6AE0;
L_089A6AE0:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6AE8;
L_089A6AE8:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A6B00:;
    f12 = BITSF(LD32(sp+4));
    a0 = LD32(v0-12);
    ST32(s1+8, FBITS(f12));
    a0 = s1 + a0;
    func_0886422C(a0, f12);
    goto L_089A6B14;
L_089A6B14:;
    goto L_089A6AE0;
L_089A6B1C:;
    a0 = sp + 0;
    v0 = func_0881B5C4(a0);
    goto L_089A6B24;
L_089A6B24:;
    ST32(s1+320, v0);
    goto L_089A6AC4;
L_089A6B2C:;
    a0 = s1 + 0;
    func_089A6C1C(a0, a1, 0, 0, 0);
    goto L_089A6B34;
L_089A6B34:;
    a1 = 0xcf930000u;
    goto L_089A6A4C;
}

/* 089A6B3C */
rv_t func_089A6B3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A6B3C:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a1 & 0xff;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089A6B68; }
    goto L_089A6B60;
L_089A6B60:;
    v0 = LD_U8(a0+64);
    v1 = 0 < v0;
    goto L_089A6B68;
L_089A6B68:;
    cnd_ = s1 == v1;
    if (cnd_) { a0 = s0 + 0; goto L_089A6B84; }
    goto L_089A6B70;
L_089A6B70:;
    cnd_ = s1 != 0;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_089A6BA0; }
    goto L_089A6B78;
L_089A6B78:;
    f0 = BITSF(LD32(v0-31348));
    ST32(s0+336, FBITS(f0));
    goto L_089A6B80;
L_089A6B80:;
    a0 = s0 + 0;
    goto L_089A6B84;
L_089A6B84:;
    a1 = s1 + 0;
    { rv_t r_ = func_089E3AE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6B8C;
L_089A6B8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A6BA0:;
    f12 = BITSF(LD32(v0-31348));
    f0 = BITSF(LD32(s0+336));
    v0 = LD32(s0);
    v1 = LD32(v0+232);
    t_ = v1;
    f12 = f12 - f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6BB8;
L_089A6BB8:;
    ST32(s0+336, 0);
    goto L_089A6B80;
}

/* 089A6BC0 */
rv_t func_089A6BC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089A6BC0:;
    a3 = 0 + 0;
    t1 = 1;
    v1 = a0 + 0;
    goto L_089A6BCC;
L_089A6BCC:;
    a2 = LD32(a0+244);
    a1 = t1 << (a3 & 31);
    a3 = a3 + 1;
    v0 = a2 & a1;
    cnd_ = v0 == 0;
    t0 = a3 < 0x4u;
    if (cnd_) { goto L_089A6C0C; }
    goto L_089A6BE4;
L_089A6BE4:;
    f0 = BITSF(LD32(v1+248));
    f1 = BITSF(LD32(v1+264));
    v0 = a2 ^ a1;
    f0 = f0 + f12;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(v1+248, FBITS(f0));
    if (cnd_) { goto L_089A6C0C; }
    goto L_089A6C04;
L_089A6C04:;
    ST32(a0+244, v0);
    ST32(v1+248, 0);
    goto L_089A6C0C;
L_089A6C0C:;
    cnd_ = t0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089A6BCC; }
    goto L_089A6C14;
L_089A6C14:;
    return (rv_t){ v0, v1, f0 };
}

/* 089A6C1C */
void func_089A6C1C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089A6C1C:;
    sp = sp - 64;
    s1 = a1 & 0xff;
    v0 = LD_U8(a0+340);
    cnd_ = v0 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_089A6C4C; }
    goto L_089A6C44;
L_089A6C44:;
    cnd_ = s1 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089A6C6C; }
    goto L_089A6C4C;
L_089A6C4C:;
    ST8(s0+340, s1);
    goto L_089A6C50;
L_089A6C50:;
    sp = sp + 64;
    return;
L_089A6C6C:;
    ST32(sp+16, 0);
    s3 = 0 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, t1, t2, t3);
    goto L_089A6C7C;
L_089A6C7C:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+180);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6C90;
L_089A6C90:;
    a0 = LD32(sp+16);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = 0xa29e0000u; goto L_089A6D40; }
    goto L_089A6C9C;
L_089A6C9C:;
    v0 = D_08C29328 - (-27864);
    goto L_089A6CA0;
L_089A6CA0:;
    v1 = LD32(v0-27864);
    v0 = 5;
    cnd_ = v1 == v0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089A6D28; }
    goto L_089A6CB0;
L_089A6CB0:;
    s2 = 1;
    goto L_089A6CB4;
L_089A6CB4:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_089A6CC4; }
    goto L_089A6CBC;
L_089A6CBC:;
    cnd_ = s2 != 0;
    if (cnd_) { goto L_089A6CD4; }
    goto L_089A6CC4;
L_089A6CC4:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6CCC;
L_089A6CCC:;
    ST8(s0+340, s1);
    goto L_089A6C50;
L_089A6CD4:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6CDC;
L_089A6CDC:;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_089A6D08; }
    goto L_089A6CE4;
L_089A6CE4:;
    v0 = LD32(s0);
    a1 = 0 + 0;
    goto L_089A6CEC;
L_089A6CEC:;
    v1 = LD32(v0-16);
    a3 = 0 + 0;
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6D00;
L_089A6D00:;
    goto L_089A6CC4;
L_089A6D08:;
    a0 = LD32(s0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6D10;
L_089A6D10:;
    v1 = 1;
    cnd_ = v0 != v1;
    a1 = s3 + 0;
    if (cnd_) { goto L_089A6CC4; }
    goto L_089A6D1C;
L_089A6D1C:;
    v0 = LD32(s0);
    a0 = 0 + 0;
    goto L_089A6CEC;
L_089A6D28:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A6D30;
L_089A6D30:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A6CB4; }
    goto L_089A6D38;
L_089A6D38:;
    s2 = 1;
    goto L_089A6CB4;
L_089A6D40:;
    a1 = a1 | 0x433e;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089A6D4C;
L_089A6D4C:;
    cnd_ = v0 == 0;
    v0 = D_08C29328 - (-27864);
    if (cnd_) { goto L_089A6CA0; }
    goto L_089A6D54;
L_089A6D54:;
    a0 = sp + 0;
    v0 = func_0881B5C4(a0);
    goto L_089A6D5C;
L_089A6D5C:;
    s3 = v0 + 0;
    goto L_089A6C9C;
}

/* 089A6D64 */
rv_t func_089A6D64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A6D64:;
    sp = sp - 16;
    v0 = 1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089A6DD8; }
    goto L_089A6D88;
L_089A6D88:;
    v1 = LD_U16(a1+16);
    v0 = 0x8067;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 0 + 0; goto L_089A6F34; }
    goto L_089A6D98;
L_089A6D98:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x806a;
    if (cnd_) { goto L_089A6F04; }
    goto L_089A6DA4;
L_089A6DA4:;
    v0 = 0x802b;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089A6EE8; }
    goto L_089A6DB0;
L_089A6DB0:;
    cnd_ = v0 != 0;
    v0 = 0x8063;
    if (cnd_) { goto L_089A6ECC; }
    goto L_089A6DB8;
L_089A6DB8:;
    v0 = 63;
    cnd_ = v1 == v0;
    v0 = 0x8025;
    if (cnd_) { goto L_089A6EA8; }
    goto L_089A6DC4;
L_089A6DC4:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a1+24); goto L_089A6DF0; }
    goto L_089A6DCC;
L_089A6DCC:;
    a0 = s1 + 0;
    goto L_089A6DD0;
L_089A6DD0:;
    a1 = s0 + 0;
    { rv_t r_ = func_089E1C74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6DD8;
L_089A6DD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A6DF0:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089A6DD0; }
    goto L_089A6DF8;
L_089A6DF8:;
    v1 = LD32(a0+48);
    v0 = LD32(s1+200);
    a1 = LD32(s1+204);
    v1 = v1 & 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s1+200, v0);
    v1 = LD32(a0+48);
    v1 = (v1 >> 1) & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s1+200, v0);
    v1 = LD32(a0+48);
    v1 = (v1 >> 2) & 0x1;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s1+200, v0);
    v1 = LD32(a0+48);
    v1 = (v1 >> 4) & 0x1;
    v0 = (v0 & ~(0x1u << 6)) | ((v1 & 0x1) << 6);
    ST32(s1+200, v0);
    v1 = LD32(a0+48);
    v1 = (v1 >> 3) & 0x1;
    v0 = (v0 & ~(0x1u << 7)) | ((v1 & 0x1) << 7);
    ST32(s1+200, v0);
    v1 = LD32(a0+48);
    v1 = (v1 >> 5) & 0x1;
    v0 = (v0 & ~(0x1u << 8)) | ((v1 & 0x1) << 8);
    ST32(s1+200, v0);
    f0 = BITSF(LD32(a0+56));
    cnd_ = a1 == 0;
    ST32(s1+324, FBITS(f0));
    if (cnd_) { goto L_089A6E80; }
    goto L_089A6E6C;
L_089A6E6C:;
    v0 = LD_U8(a0+52);
    ST8(a1, v0);
    v1 = LD32(s1+204);
    v0 = LD_U8(a0+53);
    ST8(v1+1, v0);
    goto L_089A6E80;
L_089A6E80:;
    v0 = LD32(a0+48);
    v1 = LD32(s1+200);
    v0 = (v0 >> 6) & 0x1;
    v1 = (v1 & ~(0x1u << 9)) | ((v0 & 0x1) << 9);
    ST32(s1+200, v1);
    v0 = LD32(a0+48);
    v0 = (v0 >> 7) & 0x1;
    v1 = (v1 & ~(0x1u << 10)) | ((v0 & 0x1) << 10);
    ST32(s1+200, v1);
    goto L_089A6DCC;
L_089A6EA8:;
    a0 = LD32(a0+176);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089A6EBC; }
    goto L_089A6EB4;
L_089A6EB4:;
    v0 = 1;
    goto L_089A6DD8;
L_089A6EBC:;
    { rv_t r_ = func_08922AA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6EC4;
L_089A6EC4:;
    v0 = 1;
    goto L_089A6DD8;
L_089A6ECC:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089A6EE8; }
    goto L_089A6ED4;
L_089A6ED4:;
    cnd_ = v0 != 0;
    v0 = 0x8066;
    if (cnd_) { goto L_089A6EE0; }
    goto L_089A6EDC;
L_089A6EDC:;
    v0 = 0x805e;
    goto L_089A6EE0;
L_089A6EE0:;
    cnd_ = v1 != v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A6DD0; }
    goto L_089A6EE8;
L_089A6EE8:;
    a0 = LD32(s1+204);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_089A6DD8; }
    goto L_089A6EF4;
L_089A6EF4:;
    a1 = s0 + 0;
    { rv_t r_ = func_08986C0C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6EFC;
L_089A6EFC:;
    v0 = 1;
    goto L_089A6DD8;
L_089A6F04:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = 3; goto L_089A6F34; }
    goto L_089A6F0C;
L_089A6F0C:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x807e;
    if (cnd_) { goto L_089A6F44; }
    goto L_089A6F18;
L_089A6F18:;
    v0 = 0x8068;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_089A6F34; }
    goto L_089A6F24;
L_089A6F24:;
    v0 = 0x8069;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089A6DD0; }
    goto L_089A6F30;
L_089A6F30:;
    a1 = 2;
    goto L_089A6F34;
L_089A6F34:;
    { rv_t r_ = func_089A7988(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A6F3C;
L_089A6F3C:;
    v0 = 1;
    goto L_089A6DD8;
L_089A6F44:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089A7080; }
    goto L_089A6F4C;
L_089A6F4C:;
    cnd_ = v0 != 0;
    v0 = 0x8084;
    if (cnd_) { goto L_089A7050; }
    goto L_089A6F54;
L_089A6F54:;
    v0 = 0x8073;
    cnd_ = v1 != v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A6DD0; }
    goto L_089A6F60;
L_089A6F60:;
    s2 = LD32(a1+24);
    a0 = LD32(s2+4);
    v0 = a0 ^ 0x2;
    v0 = v0 < 0x1u;
    v1 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A702C; }
    goto L_089A6F80;
L_089A6F80:;
    v0 = a0 - 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089A6DD8; }
    goto L_089A6F90;
L_089A6F90:;
    a1 = LD32(s0+4);
    a0 = D_08C2BFF8 - (-16392);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 16392;
    if (cnd_) { goto L_089A6EB4; }
    goto L_089A6FA4;
L_089A6FA4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16392);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A6FF4; }
    goto L_089A6FC8;
L_089A6FC8:;
    a0 = LD32(a2);
    goto L_089A6FCC;
L_089A6FCC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A700C; }
    goto L_089A6FE4;
L_089A6FE4:;
    a2 = LD32(a2+4);
    goto L_089A6FE8;
L_089A6FE8:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089A6FCC; }
    goto L_089A6FF0;
L_089A6FF0:;
    a0 = 0 + 0;
    goto L_089A6FF4;
L_089A6FF4:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_089A6DD8; }
    goto L_089A6FFC;
L_089A6FFC:;
    a1 = s1 + 0;
    { rv_t r_ = func_089F8EE0(a0, a1, t0, t1, t2, t3, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7004;
L_089A7004:;
    v0 = 1;
    goto L_089A6DD8;
L_089A700C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089A6FE8; }
    goto L_089A7018;
L_089A7018:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089A6FE8; }
    goto L_089A7024;
L_089A7024:;
    goto L_089A6FF4;
L_089A702C:;
    a0 = a1 + 0;
    a3 = 1;
    v1 = LD32(v0-16);
    a1 = 2;
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7048;
L_089A7048:;
    a0 = LD32(s2+4);
    goto L_089A6F80;
L_089A7050:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089A6DD0; }
    goto L_089A7058;
L_089A7058:;
    v1 = LD32(a0);
    a3 = 1;
    a0 = a1 + 0;
    v0 = LD32(v1-16);
    a1 = 2;
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7078;
L_089A7078:;
    v0 = 1;
    goto L_089A6DD8;
L_089A7080:;
    { rv_t r_ = func_089E1C74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7088;
L_089A7088:;
    a0 = LD32(s1+204);
    cnd_ = a0 != 0;
    s1 = v0 & 0x1;
    if (cnd_) { goto L_089A709C; }
    goto L_089A7094;
L_089A7094:;
    v0 = s1 + 0;
    goto L_089A6DD8;
L_089A709C:;
    a1 = s0 + 0;
    { rv_t r_ = func_08986C0C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A70A4;
L_089A70A4:;
    s1 = s1 & v0;
    goto L_089A7094;
}

/* 089A70AC */
rv_t func_089A70AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A70AC:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A70D0;
L_089A70D0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E36F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A70DC;
L_089A70DC:;
    a1 = LD32(s1+200);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A70E8;
L_089A70E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A70FC */
rv_t func_089A70FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A70FC:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = LD32(a1);
    s0 = ~(0 | s0);
    s0 = s0 < 0x1u;
    a1 = s0 + 0;
    func_089D55A0(a0, a1, t1, t2, t3);
    goto L_089A712C;
L_089A712C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089E28B4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7138;
L_089A7138:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089A7278; }
    goto L_089A7140;
L_089A7140:;
    a3 = 0 + 0;
    goto L_089A7144;
L_089A7144:;
    a0 = 0x8032;
    a1 = 48;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7154;
L_089A7154:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089A71F0; }
    goto L_089A715C;
L_089A715C:;
    a2 = LD32(v0+24);
    cnd_ = a2 == 0;
    v0 = 0x86200000u;
    if (cnd_) { goto L_089A71CC; }
    goto L_089A7168;
L_089A7168:;
    a0 = LD32(a2);
    v1 = LD32(a2+8);
    v0 = v0 | 0x5043;
    v1 = v1 | 0x1;
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a2+4, v0);
    ST32(a2, a0);
    ST32(a2+8, v1);
    a0 = LD32(s1);
    ST8(a2+44, 0);
    ST32(a2+12, a0);
    v0 = LD32(s1+4);
    ST32(a2+16, v0);
    v1 = LD32(s1+8);
    ST32(a2+20, v1);
    v0 = LD32(s1+12);
    ST32(a2+24, v0);
    v1 = LD32(s1+16);
    ST32(a2+28, v1);
    v0 = LD32(s1+20);
    ST32(a2+32, v0);
    v1 = LD32(s1+24);
    ST32(a2+36, v1);
    v0 = LD32(s1+28);
    ST32(a2+40, v0);
    goto L_089A71CC;
L_089A71CC:;
    v0 = LD32(a3+28);
    a1 = a3 + 0;
    a2 = 2;
    v0 = v0 | 0x1;
    ST32(a3+28, v0);
    v1 = LD32(s2);
    a0 = LD32(v1-16);
    a0 = s2 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A71F0;
L_089A71F0:;
    v1 = LD32(s2);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089A721C; }
    goto L_089A7208;
L_089A7208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A721C:;
    { u64 r_ = func_088BB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7224;
L_089A7224:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089A724C; }
    goto L_089A722C;
L_089A722C:;
    v1 = LD32(s2);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7244;
L_089A7244:;
    goto L_089A7208;
L_089A724C:;
    a1 = 1;
    v1 = LD32(v0-12);
    v1 = s2 + v1;
    s0 = LD32(v1+4);
    a0 = s0 + 0;
    func_088BB4A4(a0, a1);
    goto L_089A7264;
L_089A7264:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB4CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7270;
L_089A7270:;
    goto L_089A7208;
L_089A7278:;
    a0 = LD_U16(s2+300);
    v0 = func_089F8FAC(a0);
    goto L_089A7280;
L_089A7280:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A72A0;
L_089A72A0:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    f12 = BITSF(LD32(s2+304));
    v0 = LD32(v1-16);
    a0 = s0 + 0;
    v0 = s2 + v0;
    a2 = LD32(v0+4);
    func_089F96C4(a0, a1, a2, f12);
    goto L_089A72C0;
L_089A72C0:;
    a0 = LD_U16(s2+302);
    v0 = func_089F8FAC(a0);
    goto L_089A72C8;
L_089A72C8:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A72E8;
L_089A72E8:;
    a1 = LD32(s2);
    f12 = BITSF(LD32(s2+304));
    a0 = s0 + 0;
    v1 = LD32(a1-16);
    a1 = v0 + 0;
    v1 = s2 + v1;
    a2 = LD32(v1+4);
    func_089F96C4(a0, a1, a2, f12);
    goto L_089A7308;
L_089A7308:;
    a3 = 0 + 0;
    goto L_089A7144;
}

/* 089A7310 */
rv_t func_089A7310(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089A7310:;
    sp = sp - 64;
    s1 = a0 + 0;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089A733C; }
    goto L_089A7330;
L_089A7330:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089A7360; }
    goto L_089A733C;
L_089A733C:;
    v1 = LD32(s0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089A735C; }
    goto L_089A734C;
L_089A734C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089A735C:;
    v0 = LD32(s0);
    goto L_089A7360;
L_089A7360:;
    v1 = LD32(s0+4);
    a2 = LD32(s0+8);
    a3 = LD32(s0+12);
    t0 = LD32(s0+16);
    t1 = LD32(s0+20);
    t2 = LD32(s0+24);
    t3 = LD32(s0+28);
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    ST32(sp+24, t2);
    ST32(sp+28, t3);
    { u64 r_ = func_089A7508(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A73A8;
L_089A73A8:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A74C4; }
    goto L_089A73B0;
L_089A73B0:;
    a1 = LD32(s0+4);
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_089A7440; }
    goto L_089A73C4;
L_089A73C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A7414; }
    goto L_089A73E8;
L_089A73E8:;
    a0 = LD32(a2);
    goto L_089A73EC;
L_089A73EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A74A4; }
    goto L_089A7404;
L_089A7404:;
    a2 = LD32(a2+4);
    goto L_089A7408;
L_089A7408:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089A73EC; }
    goto L_089A7410;
L_089A7410:;
    a0 = 0 + 0;
    goto L_089A7414;
L_089A7414:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A7444; }
    goto L_089A741C;
L_089A741C:;
    v1 = LD32(a0);
    v0 = LD32(v1+152);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A742C;
L_089A742C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A7444; }
    goto L_089A7434;
L_089A7434:;
    f0 = BITSF(LD32(sp+12));
    f0 = f0 + f0;
    ST32(sp+12, FBITS(f0));
    goto L_089A7440;
L_089A7440:;
    v1 = LD32(s1);
    goto L_089A7444;
L_089A7444:;
    v0 = LD32(v1+156);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7450;
L_089A7450:;
    cnd_ = v0 == 0;
    v0 = D_08AEEA10 - (-5616);
    if (cnd_) { goto L_089A7468; }
    goto L_089A7458;
L_089A7458:;
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(v0-5616));
    f0 = f0 * f1;
    ST32(sp+12, FBITS(f0));
    goto L_089A7468;
L_089A7468:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7470;
L_089A7470:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A748C; }
    goto L_089A7478;
L_089A7478:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_089E1FDC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7484;
L_089A7484:;
    goto L_089A734C;
L_089A748C:;
    a0 = LD32(s1+12);
    f0 = func_08A3CCF8(a0);
    goto L_089A7494;
L_089A7494:;
    f1 = BITSF(LD32(sp+12));
    f1 = f1 * f0;
    ST32(sp+12, FBITS(f1));
    goto L_089A7478;
L_089A74A4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089A7408; }
    goto L_089A74B0;
L_089A74B0:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089A7408; }
    goto L_089A74BC;
L_089A74BC:;
    goto L_089A7414;
L_089A74C4:;
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    v0 = LD32(v1-12);
    a2 = sp + 32;
    v0 = s1 + v0;
    a1 = LD32(v0+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A74E0;
L_089A74E0:;
    v0 = D_08AEEA0C - (-5620);
    f12 = BITSF(LD32(v0-5620));
    a0 = LD32(sp+32);
    a1 = 0xb7140000u;
    a1 = a1 | 0xf0c7;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A74F8;
L_089A74F8:;
    f1 = BITSF(LD32(sp+12));
    f1 = f1 * f0;
    ST32(sp+12, FBITS(f1));
    goto L_089A73B0;
}

/* 089A7508 */
u64 func_089A7508(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0;
    int cnd_;
L_089A7508:;
    v1 = LD32(a1+20);
    a0 = 0x300000u;
    v0 = 6;
    a0 = a0 | 0xcde0;
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089A7534; }
    goto L_089A7520;
L_089A7520:;
    v0 = LD32(a1+16);
    cnd_ = v0 == a0;
    if (cnd_) { a2 = 1; goto L_089A752C; }
    goto L_089A752C;
L_089A752C:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_089A7534:;
    a2 = 1;
    goto L_089A752C;
}

/* 089A753C */
rv_t func_089A753C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A753C:;
    v0 = LD32(a0+200);
    v0 = v0 | 0x2;
    ST32(a0+200, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089A754C */
rv_t func_089A754C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A754C:;
    v0 = LD32(a0+200);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(a0+200, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089A755C */
rv_t func_089A755C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089A755C:;
    a1 = a1 & 0xff;
    v0 = LD32(a0+200);
    v0 = (v0 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    ST32(a0+200, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089A7570 */
void func_089A7570(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089A7570:;
    sp = sp - 80;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A75A0;
L_089A75A0:;
    a1 = LD32(s0+12);
    a0 = v0 + 0;
    v0 = func_089EDB40(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A75AC;
L_089A75AC:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = s1 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089A75F4; }
    goto L_089A75C0;
L_089A75C0:;
    v0 = func_089ED36C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A75C8;
L_089A75C8:;
    a3 = 0 + 0;
    if (v0 == 0) a3 = s1;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = sp + 0;
    v0 = func_089E3EEC(a0, a1, a2, a3);
    goto L_089A75E0;
L_089A75E0:;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_089A760C; }
    goto L_089A75F4;
L_089A75F4:;
    v0 = 0 + 0;
    goto L_089A75F8;
L_089A75F8:;
    sp = sp + 80;
    return;
L_089A760C:;
    v0 = LD32(s0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A761C;
L_089A761C:;
    v0 = 1;
    goto L_089A75F8;
}

/* 089A7624 */
rv_t func_089A7624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A7624:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089A7644;
L_089A7644:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089A7644; }
    goto L_089A7668;
L_089A7668:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_089E3748(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7674;
L_089A7674:;
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_089A767C;
L_089A767C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089A767C; }
    goto L_089A76A0;
L_089A76A0:;
    v1 = LD32(sp+4);
    v0 = LD32(s1+200);
    v1 = v1 & 0x1;
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s1+200, v0);
    v1 = LD32(sp);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A76D4; }
    goto L_089A76C0;
L_089A76C0:;
    goto L_089A76C4;
L_089A76C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A76D4:;
    a1 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08864BB0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A76E4;
L_089A76E4:;
    goto L_089A76C4;
}

/* 089A76EC */
rv_t func_089A76EC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A76EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 448;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7708;
L_089A7708:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089A6004(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7718;
L_089A7718:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A7738; }
    goto L_089A7720;
L_089A7720:;
    v0 = s1 + 0;
    goto L_089A7724;
L_089A7724:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A7738:;
    v0 = LD32(s1);
    v1 = LD32(v0+92);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7748;
L_089A7748:;
    v0 = s1 + 0;
    goto L_089A7724;
}

/* 089A7750 */
void func_089A7750(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A7750:;
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_089A76EC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7768;
L_089A7768:;
    s1 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A7798; }
    goto L_089A7778;
L_089A7778:;
    v0 = LD32(v0);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7788;
L_089A7788:;
    a1 = LD32(s1);
    v0 = LD32(a1+92);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7798;
L_089A7798:;
    sp = sp + 16;
    return;
}

/* 089A77AC */
rv_t func_089A77AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A77AC:;
    sp = sp - 16;
    a1 = 168;
    a3 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A77E0;
L_089A77E0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089A7824; }
    goto L_089A77E8;
L_089A77E8:;
    v0 = LD32(v0+24);
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A780C; }
    goto L_089A77F8;
L_089A77F8:;
    func_089A891C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A7800;
L_089A7800:;
    v0 = LD32(s0+200);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s0+200, v0);
    goto L_089A780C;
L_089A780C:;
    v0 = LD32(s0);
    a1 = s1 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7824;
L_089A7824:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A7838 */
rv_t func_089A7838(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A7838:;
    sp = sp - 16;
    a3 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = 20;
    v0 = LD32(a0);
    a0 = 0x807a;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7870;
L_089A7870:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089A78D8; }
    goto L_089A7878;
L_089A7878:;
    a3 = LD32(v0+24);
    cnd_ = a3 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089A78A4; }
    goto L_089A7884;
L_089A7884:;
    v1 = a1 << 2;
    v0 = v1 + s0;
    a0 = LD32(v0+180);
    a1 = a1 + 1;
    v1 = v1 + a3;
    v0 = a1 < 0x5u;
    cnd_ = v0 != 0;
    ST32(v1, a0);
    if (cnd_) { goto L_089A7884; }
    goto L_089A78A4;
L_089A78A4:;
    v1 = LD32(a2+28);
    v0 = 2;
    ST32(a2, v0);
    v1 = v1 | 0x1;
    a0 = a2 + 0;
    ST32(a2+28, v1);
    a1 = s1 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a2+4, v1);
    { rv_t r_ = func_088ACA44(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A78D8;
L_089A78D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A78EC */
rv_t func_089A78EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A78EC:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a1 = 20;
    v0 = LD32(a0);
    a0 = 0x8030;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7928;
L_089A7928:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089A7970; }
    goto L_089A7930;
L_089A7930:;
    v0 = LD32(v0+24);
    a1 = s2 + 0;
    a2 = 20;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A794C; }
    goto L_089A7944;
L_089A7944:;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A794C;
L_089A794C:;
    v0 = LD32(s0+28);
    a1 = s0 + 0;
    a2 = 2;
    v0 = v0 | 0x1;
    ST32(s0+28, v0);
    v1 = LD32(s1);
    a0 = LD32(v1-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7970;
L_089A7970:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A7988 */
rv_t func_089A7988(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089A7988:;
    sp = sp - 96;
    a3 = D_08C2A880 - (-22400);
    v1 = a3 - 22400;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089A7A24; }
    goto L_089A79DC;
L_089A79DC:;
    a3 = LD32(a3-22400);
    goto L_089A79E0;
L_089A79E0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089A7A14; }
    goto L_089A79F8;
L_089A79F8:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089A7A28; }
    goto L_089A7A08;
L_089A7A08:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089A79F8; }
    goto L_089A7A14;
L_089A7A14:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089A79E0; }
    goto L_089A7A24;
L_089A7A24:;
    a0 = LD32(sp+8);
    goto L_089A7A28;
L_089A7A28:;
    cnd_ = a0 == 0;
    v0 = s3 << 2;
    if (cnd_) { goto L_089A7A84; }
    goto L_089A7A30;
L_089A7A30:;
    f20 = BITSF(0);
    s4 = v0 + s2;
    s1 = LD32(a0);
    goto L_089A7A3C;
L_089A7A3C:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7A48;
L_089A7A48:;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    a1 = s1 + v1;
    f0 = BITSF(LD32(a1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089A7A7C; }
    goto L_089A7A68;
L_089A7A68:;
    v1 = LD32(s1+12);
    v0 = LD32(s2+12);
    cnd_ = v1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_089A7B48; }
    goto L_089A7A78;
L_089A7A78:;
    a0 = LD32(sp+8);
    goto L_089A7A7C;
L_089A7A7C:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_089A7A3C; }
    goto L_089A7A84;
L_089A7A84:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089A7B0C; }
    goto L_089A7A98;
L_089A7A98:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089A7B0C; }
    goto L_089A7AA4;
L_089A7AA4:;
    v0 = LD32(s1);
    goto L_089A7AA8;
L_089A7AA8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089A7AFC; }
    goto L_089A7ABC;
L_089A7ABC:;
    v0 = LD_U8(s0+8);
    goto L_089A7AC0;
L_089A7AC0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089A7B40; }
    goto L_089A7AC8;
L_089A7AC8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A7B30; }
    goto L_089A7AD0;
L_089A7AD0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089A7AD8;
L_089A7AD8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7AE4;
L_089A7AE4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089A7AF0;
L_089A7AF0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089A7AC0; }
    goto L_089A7AF8;
L_089A7AF8:;
    v1 = LD32(s1+4);
    goto L_089A7AFC;
L_089A7AFC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089A7AA8; }
    goto L_089A7B0C;
L_089A7B0C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089A7B30:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089A7AD8;
L_089A7B40:;
    s0 = LD32(s0+4);
    goto L_089A7AF0;
L_089A7B48:;
    v1 = LD32(a1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7B58;
L_089A7B58:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7B78;
L_089A7B78:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f2;
    f0 = f0 - f3;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f1));
    a0 = s1 + 0;
    a1 = s3 + 0;
    ST32(sp+20, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    f0 = BITSF(LD32(s4+280));
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(sp+8); goto L_089A7A7C; }
    goto L_089A7BF0;
L_089A7BF0:;
    func_089A816C(a0, a1);
    goto L_089A7BF8;
L_089A7BF8:;
    v0 = LD32(s2);
    v1 = LD32(v0-16);
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    ST32(s1+296, v0);
    goto L_089A7A78;
}

/* 089A7C10 */
rv_t func_089A7C10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A7C10:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E39C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7C24;
L_089A7C24:;
    a1 = 2;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089A7C50; }
    goto L_089A7C40;
L_089A7C40:;
    goto L_089A7C44;
L_089A7C44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A7C50:;
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7C58;
L_089A7C58:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7C70;
L_089A7C70:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB4E4(a0);
    goto L_089A7C84;
L_089A7C84:;
    a0 = LD32(s0);
    v0 = v0 | 0x1000;
    v0 = v0 & 0xffff;
    v1 = LD32(a0-12);
    a1 = v0 + 0;
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7CA4;
L_089A7CA4:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB264(a0, a1);
    goto L_089A7CBC;
L_089A7CBC:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB234(a0, a1);
    goto L_089A7CD4;
L_089A7CD4:;
    v1 = LD32(s0);
    a1 = 16;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB56C(a0, a1);
    goto L_089A7CEC;
L_089A7CEC:;
    goto L_089A7C44;
}

/* 089A7CF4 */
rv_t func_089A7CF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A7CF4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089A7D5C; }
    goto L_089A7D10;
L_089A7D10:;
    s0 = LD32(a0+176);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7D24;
L_089A7D24:;
    a0 = s0 + 0;
    f0 = func_08956F18(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A7D2C;
L_089A7D2C:;
    v1 = LD32(s1+108);
    v0 = 999;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089A7D48; }
    goto L_089A7D40;
L_089A7D40:;
    { u64 r_ = func_08956538(a0, a1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A7D48;
L_089A7D48:;
    goto L_089A7D4C;
L_089A7D4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A7D5C:;
    a0 = LD32(a0+176);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7D70;
L_089A7D70:;
    goto L_089A7D4C;
}

/* 089A7D78 */
rv_t func_089A7D78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A7D78:;
    sp = sp - 32;
    a3 = D_08C2A6C8 - (-22840);
    v1 = 999;
    s0 = a0 + 0;
    s1 = a1 + 0;
    t0 = LD32(a0);
    v0 = LD32(t0-16);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == v1;
    a0 = a3 - 22840;
    if (cnd_) { goto L_089A7E30; }
    goto L_089A7DB0;
L_089A7DB0:;
    v0 = LD32(a0+4);
    v1 = LD32(a3-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A7E00; }
    goto L_089A7DD4;
L_089A7DD4:;
    a0 = LD32(a1);
    goto L_089A7DD8;
L_089A7DD8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A7EE4; }
    goto L_089A7DF0;
L_089A7DF0:;
    a1 = LD32(a1+4);
    goto L_089A7DF4;
L_089A7DF4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A7DD8; }
    goto L_089A7DFC;
L_089A7DFC:;
    a0 = 0 + 0;
    goto L_089A7E00;
L_089A7E00:;
    cnd_ = a0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089A7E30; }
    goto L_089A7E08;
L_089A7E08:;
    v0 = LD32(a0);
    f12 = BITSF(0);
    v1 = LD32(v0+56);
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7E1C;
L_089A7E1C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A7E30:;
    a0 = LD32(t0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7E48;
L_089A7E48:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A7E7C; }
    goto L_089A7E78;
L_089A7E78:;
    a0 = LD32(v0+16);
    goto L_089A7E7C;
L_089A7E7C:;
    cnd_ = a0 == 0;
    v0 = a0 + 4;
    if (cnd_) { goto L_089A7EC4; }
    goto L_089A7E84;
L_089A7E84:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+12));
    v1 = D_08AEEA14 - (-5612);
    v0 = D_08AEEA18 - (-5608);
    f1 = f1 - f0;
    f0 = BITSF(LD32(v1-5612));
    f2 = BITSF(LD32(v0-5608));
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089A7EB4; }
    goto L_089A7EB4;
L_089A7EB4:;
    f0 = BITSF(LD32(s1+4));
    f0 = f0 - f1;
    goto L_089A7EBC;
L_089A7EBC:;
    ST32(s1+4, FBITS(f0));
    goto L_089A7E1C;
L_089A7EC4:;
    v0 = D_08AEEA1C - (-5604);
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0-5604));
    ST32(sp, 0);
    f0 = f0 + f1;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, 0);
    goto L_089A7EBC;
L_089A7EE4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A7DF4; }
    goto L_089A7EF0;
L_089A7EF0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A7DF4; }
    goto L_089A7EFC;
L_089A7EFC:;
    goto L_089A7E00;
}

/* 089A7F04 */
rv_t func_089A7F04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A7F04:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A7F34;
L_089A7F34:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0));
    ST32(s1+8, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    ST32(s1, FBITS(f2));
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A7F68; }
    goto L_089A7F64;
L_089A7F64:;
    a0 = LD32(v0+16);
    goto L_089A7F68;
L_089A7F68:;
    cnd_ = a0 == 0;
    v0 = a0 + 4;
    if (cnd_) { goto L_089A7FC0; }
    goto L_089A7F70;
L_089A7F70:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+12));
    v0 = D_08AEEA24 - (-5596);
    f2 = BITSF(LD32(v0-5596));
    f1 = f1 - f0;
    v0 = D_08AEEA20 - (-5600);
    f0 = BITSF(LD32(v0-5600));
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089A7FA0; }
    goto L_089A7FA0;
L_089A7FA0:;
    f0 = BITSF(LD32(s1+4));
    f0 = f0 - f1;
    ST32(s1+4, FBITS(f0));
    goto L_089A7FAC;
L_089A7FAC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A7FC0:;
    v0 = D_08AEEA28 - (-5592);
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0-5592));
    ST32(sp, 0);
    f0 = f0 + f1;
    ST32(sp+8, 0);
    ST32(s1+4, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    goto L_089A7FAC;
}

/* 089A7FE4 */
rv_t func_089A7FE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089A7FE4:;
    sp = sp - 48;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8014;
L_089A8014:;
    v1 = D_08AEEA2C - (-5588);
    f1 = BITSF(LD32(v1-5588));
    ST32(sp+16, 0);
    a0 = D_08C2B3A4 - (-19548);
    a1 = a0 - 19548;
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    ST32(s1+4, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    v0 = LD32(s0);
    ST32(sp, FBITS(f1));
    v1 = LD32(v0-16);
    v0 = 999;
    ST32(sp+4, FBITS(f0));
    s0 = s0 + v1;
    a2 = LD32(s0+4);
    cnd_ = a2 == v0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_089A80FC; }
    goto L_089A8070;
L_089A8070:;
    v0 = LD32(a1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089A80C0; }
    goto L_089A8094;
L_089A8094:;
    a0 = LD32(a1);
    goto L_089A8098;
L_089A8098:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A8110; }
    goto L_089A80B0;
L_089A80B0:;
    a1 = LD32(a1+4);
    goto L_089A80B4;
L_089A80B4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A8098; }
    goto L_089A80BC;
L_089A80BC:;
    s0 = 0 + 0;
    goto L_089A80C0;
L_089A80C0:;
    cnd_ = s0 == 0;
    a0 = D_08ADE3B8 - (-7240);
    if (cnd_) { goto L_089A80FC; }
    goto L_089A80C8;
L_089A80C8:;
    a0 = a0 - 7240;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A80D0;
L_089A80D0:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a2 = s1 + 0;
    a0 = LD32(v1-12);
    a3 = 0 + 0;
    t0 = 1;
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A80FC;
L_089A80FC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089A8110:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089A80B0; }
    goto L_089A811C;
L_089A811C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A80B4; }
    goto L_089A8128;
L_089A8128:;
    goto L_089A80C0;
}

/* 089A8130 */
rv_t func_089A8130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A8130:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E46F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8144;
L_089A8144:;
    v1 = 999;
    v0 = LD32(s0+200);
    ST32(s0+216, v1);
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    ST32(s0+200, v0);
    ST32(s0+212, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A816C */
void func_089A816C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_089A816C:;
    v1 = a1 << 2;
    v0 = 1;
    v1 = v1 + a0;
    v0 = v0 << (a1 & 31);
    ST32(a0+244, v0);
    ST32(v1+248, 0);
    return;
}

/* 089A8188 */
void func_089A8188(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_089A8188:;
    v1 = LD32(a0+244);
    v0 = 1;
    v0 = v0 << (a1 & 31);
    a1 = a1 << 2;
    v1 = v1 ^ v0;
    a1 = a1 + a0;
    v0 = 999;
    ST32(a0+296, v0);
    ST32(a0+244, v1);
    ST32(a1+248, 0);
    return;
}

/* 089A81B4 */
u32 func_089A81B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089A81B4:;
    sp = sp - 48;
    v0 = a0 + 0;
    a2 = sp + 16;
    v1 = LD32(a0);
    ST32(sp+16, 0);
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    a1 = LD32(v1-12);
    v0 = v0 + a1;
    a1 = LD32(v0+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A81F0;
L_089A81F0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A8280; }
    goto L_089A81F8;
L_089A81F8:;
    v1 = D_08ADE3BC - (-7236);
    v0 = v1 - 7236;
    a2 = LD32(v1-7236);
    a0 = LD32(v0+12);
    v1 = LD32(v0+4);
    a1 = LD32(v0+8);
    ST32(sp+12, a0);
    s0 = 0 + 0;
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    cnd_ = a2 == 0;
    ST32(sp, a2);
    if (cnd_) { goto L_089A823C; }
    goto L_089A8228;
L_089A8228:;
    v1 = sp + 0;
    goto L_089A822C;
L_089A822C:;
    v1 = v1 + 4;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_089A822C; }
    goto L_089A823C;
L_089A823C:;
    a1 = D_08B25AC8 - (23240);
    v0 = LD32(a1+23240);
    a2 = a1 + 23240;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a2+4, a0);
    v1 = 0 + 0;
    s1 = 0 + 0;
    s2 = hi;
    cnd_ = s0 != 0;
    ST32(a1+23240, v0);
    if (cnd_) { goto L_089A829C; }
    goto L_089A8280;
L_089A8280:;
    goto L_089A8284;
L_089A8284:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_089A829C:;
    v0 = s1 + s2;
    goto L_089A82A0;
L_089A82A0:;
    { u32 x_ = v0, y_ = s0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    s1 = s1 + 1;
    v1 = hi;
    v1 = v1 << 2;
    v1 = v1 + sp;
    a1 = LD32(v1);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A82C4;
L_089A82C4:;
    v1 = v0 + 0;
    cnd_ = v1 != 0;
    v0 = s1 < s0;
    if (cnd_) { goto L_089A8280; }
    goto L_089A82D0;
L_089A82D0:;
    cnd_ = v0 != 0;
    v0 = s1 + s2;
    if (cnd_) { goto L_089A82A0; }
    goto L_089A82D8;
L_089A82D8:;
    goto L_089A8284;
}

/* 089A82E0 */
u64 func_089A82E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089A82E0:;
    sp = sp - 64;
    s0 = a0 + 0;
    a2 = sp + 16;
    v1 = LD32(a0);
    ST32(sp+16, 0);
    a0 = 0x203e0000u;
    a0 = a0 | 0x217d;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a1 = LD32(v0+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8320;
L_089A8320:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A83B8; }
    goto L_089A8328;
L_089A8328:;
    v0 = LD32(s0+316);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_089A83B8; }
    goto L_089A8334;
L_089A8334:;
    v1 = D_08ADE3BC - (-7236);
    v0 = v1 - 7236;
    a2 = LD32(v1-7236);
    a0 = LD32(v0+12);
    v1 = LD32(v0+4);
    a1 = LD32(v0+8);
    ST32(sp+12, a0);
    s3 = 0 + 0;
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    cnd_ = a2 == 0;
    ST32(sp, a2);
    if (cnd_) { goto L_089A8378; }
    goto L_089A8364;
L_089A8364:;
    v1 = sp + 0;
    goto L_089A8368;
L_089A8368:;
    v1 = v1 + 4;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_089A8368; }
    goto L_089A8378;
L_089A8378:;
    cnd_ = s3 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089A83B4; }
    goto L_089A8380;
L_089A8380:;
    s1 = sp + 0;
    a1 = LD32(s1);
    goto L_089A8388;
L_089A8388:;
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    s2 = s2 + 1;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8398;
L_089A8398:;
    v1 = LD32(s0+316);
    a1 = s2 < s3;
    s1 = s1 + 4;
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_089A83B8; }
    goto L_089A83AC;
L_089A83AC:;
    cnd_ = a1 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_089A8388; }
    goto L_089A83B4;
L_089A83B4:;
    a0 = 0 + 0;
    goto L_089A83B8;
L_089A83B8:;
    v0 = a0 + 0;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089A83D8 */
rv_t func_089A83D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A83D8:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+168);
    t_ = v0;
    s1 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A83F8;
L_089A83F8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A8570; }
    goto L_089A8400;
L_089A8400:;
    s0 = D_08C2A890 - (-22384);
    v0 = (u32)(s32)LD_S8(s0-22384);
    cnd_ = v0 == 0;
    a0 = D_08ADE3CC - (-7220);
    if (cnd_) { goto L_089A8684; }
    goto L_089A8410;
L_089A8410:;
    s0 = D_08C2A898 - (-22376);
    v0 = (u32)(s32)LD_S8(s0-22376);
    cnd_ = v0 == 0;
    a0 = D_08ADE3E0 - (-7200);
    if (cnd_) { goto L_089A8668; }
    goto L_089A8420;
L_089A8420:;
    s0 = D_08C2A8A0 - (-22368);
    v0 = (u32)(s32)LD_S8(s0-22368);
    cnd_ = v0 == 0;
    a0 = D_08ADE3F8 - (-7176);
    if (cnd_) { goto L_089A864C; }
    goto L_089A8430;
L_089A8430:;
    s0 = D_08C2A8A8 - (-22360);
    v0 = (u32)(s32)LD_S8(s0-22360);
    cnd_ = v0 == 0;
    a0 = D_08ADE408 - (-7160);
    if (cnd_) { goto L_089A8630; }
    goto L_089A8440;
L_089A8440:;
    s0 = D_08C2A8B0 - (-22352);
    v0 = (u32)(s32)LD_S8(s0-22352);
    cnd_ = v0 == 0;
    a0 = D_08ADE41C - (-7140);
    if (cnd_) { goto L_089A8614; }
    goto L_089A8450;
L_089A8450:;
    s0 = D_08C2A8B8 - (-22344);
    v0 = (u32)(s32)LD_S8(s0-22344);
    cnd_ = v0 == 0;
    a0 = D_08ADE434 - (-7116);
    if (cnd_) { goto L_089A85F8; }
    goto L_089A8460;
L_089A8460:;
    s0 = D_08C2A8C0 - (-22336);
    v0 = (u32)(s32)LD_S8(s0-22336);
    cnd_ = v0 == 0;
    a0 = D_08ADE44C - (-7092);
    if (cnd_) { goto L_089A85DC; }
    goto L_089A8470;
L_089A8470:;
    s0 = D_08C2A8C8 - (-22328);
    v0 = (u32)(s32)LD_S8(s0-22328);
    cnd_ = v0 == 0;
    a0 = D_08ADE45C - (-7076);
    if (cnd_) { goto L_089A85C0; }
    goto L_089A8480;
L_089A8480:;
    s0 = D_08C2A8D0 - (-22320);
    v0 = (u32)(s32)LD_S8(s0-22320);
    cnd_ = v0 == 0;
    a0 = D_08ADE470 - (-7056);
    if (cnd_) { goto L_089A85A4; }
    goto L_089A8490;
L_089A8490:;
    s0 = D_08C2A8D8 - (-22312);
    v0 = (u32)(s32)LD_S8(s0-22312);
    cnd_ = v0 == 0;
    a0 = D_08ADE48C - (-7028);
    if (cnd_) { goto L_089A8588; }
    goto L_089A84A0;
L_089A84A0:;
    v0 = D_08C2A8E0 - (-22304);
    t7 = LD32(v0-22304);
    v0 = D_08C2A8E8 - (-22296);
    v1 = D_08C2A8E4 - (-22300);
    t5 = LD32(v0-22296);
    v0 = D_08C2A8F0 - (-22288);
    t6 = LD32(v1-22300);
    t3 = LD32(v0-22288);
    v1 = D_08C2A8EC - (-22292);
    v0 = D_08C2A8F8 - (-22280);
    t4 = LD32(v1-22292);
    t1 = LD32(v0-22280);
    v1 = D_08C2A8F4 - (-22284);
    v0 = D_08C2A900 - (-22272);
    t2 = LD32(v1-22284);
    a3 = LD32(v0-22272);
    v1 = D_08C2A8FC - (-22276);
    t0 = LD32(v1-22276);
    a1 = 0xf4a20000u;
    v1 = D_08C2A904 - (-22268);
    a2 = LD32(v1-22268);
    a0 = 0 + 0;
    v1 = s1 + 180;
    a1 = a1 | 0xac2b;
    goto L_089A8500;
L_089A8500:;
    v0 = LD32(v1);
    cnd_ = v0 == a1;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A850C;
L_089A850C:;
    cnd_ = v0 == t7;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A8514;
L_089A8514:;
    cnd_ = v0 == t6;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A851C;
L_089A851C:;
    cnd_ = v0 == t5;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A8524;
L_089A8524:;
    cnd_ = v0 == t4;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A852C;
L_089A852C:;
    cnd_ = v0 == t3;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A8534;
L_089A8534:;
    cnd_ = v0 == t2;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A853C;
L_089A853C:;
    cnd_ = v0 == t1;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A8544;
L_089A8544:;
    cnd_ = v0 == t0;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A854C;
L_089A854C:;
    cnd_ = v0 == a3;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A8554;
L_089A8554:;
    cnd_ = v0 == a2;
    if (cnd_) { v1 = 1; goto L_089A8570; }
    goto L_089A855C;
L_089A855C:;
    a0 = a0 + 1;
    v0 = a0 < 0x5u;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089A8500; }
    goto L_089A856C;
L_089A856C:;
    v1 = 0 + 0;
    goto L_089A8570;
L_089A8570:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A8588:;
    a0 = a0 - 7028;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8590;
L_089A8590:;
    v1 = D_08C2A904 - (-22268);
    ST32(v1-22268, v0);
    v0 = 1;
    ST8(s0-22312, v0);
    goto L_089A84A0;
L_089A85A4:;
    a0 = a0 - 7056;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A85AC;
L_089A85AC:;
    v1 = D_08C2A900 - (-22272);
    ST32(v1-22272, v0);
    v0 = 1;
    ST8(s0-22320, v0);
    goto L_089A8490;
L_089A85C0:;
    a0 = a0 - 7076;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A85C8;
L_089A85C8:;
    v1 = D_08C2A8FC - (-22276);
    ST32(v1-22276, v0);
    v0 = 1;
    ST8(s0-22328, v0);
    goto L_089A8480;
L_089A85DC:;
    a0 = a0 - 7092;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A85E4;
L_089A85E4:;
    v1 = D_08C2A8F8 - (-22280);
    ST32(v1-22280, v0);
    v0 = 1;
    ST8(s0-22336, v0);
    goto L_089A8470;
L_089A85F8:;
    a0 = a0 - 7116;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8600;
L_089A8600:;
    v1 = D_08C2A8F4 - (-22284);
    ST32(v1-22284, v0);
    v0 = 1;
    ST8(s0-22344, v0);
    goto L_089A8460;
L_089A8614:;
    a0 = a0 - 7140;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A861C;
L_089A861C:;
    v1 = D_08C2A8F0 - (-22288);
    ST32(v1-22288, v0);
    v0 = 1;
    ST8(s0-22352, v0);
    goto L_089A8450;
L_089A8630:;
    a0 = a0 - 7160;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8638;
L_089A8638:;
    v1 = D_08C2A8EC - (-22292);
    ST32(v1-22292, v0);
    v0 = 1;
    ST8(s0-22360, v0);
    goto L_089A8440;
L_089A864C:;
    a0 = a0 - 7176;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8654;
L_089A8654:;
    v1 = D_08C2A8E8 - (-22296);
    ST32(v1-22296, v0);
    v0 = 1;
    ST8(s0-22368, v0);
    goto L_089A8430;
L_089A8668:;
    a0 = a0 - 7200;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8670;
L_089A8670:;
    v1 = D_08C2A8E4 - (-22300);
    ST32(v1-22300, v0);
    v0 = 1;
    ST8(s0-22376, v0);
    goto L_089A8420;
L_089A8684:;
    a0 = a0 - 7220;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A868C;
L_089A868C:;
    v1 = D_08C2A8E0 - (-22304);
    ST32(v1-22304, v0);
    v0 = 1;
    ST8(s0-22384, v0);
    goto L_089A8410;
}

/* 089A86A0 */
u32 func_089A86A0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089A86A0:;
    v1 = LD32(a0+204);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A86C4; }
    goto L_089A86AC;
L_089A86AC:;
    v0 = LD_U8(v1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD_U8(v0+12); goto L_089A86C4; }
    goto L_089A86C4;
L_089A86C4:;
    v0 = a0 + 0;
    return v0;
}

/* 089A86CC */
u32 func_089A86CC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089A86CC:;
    v1 = LD32(a0+204);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089A86F0; }
    goto L_089A86D8;
L_089A86D8:;
    v0 = LD_U8(v1+1);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+52);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD_U8(v0+12); goto L_089A86F0; }
    goto L_089A86F0;
L_089A86F0:;
    v0 = a0 + 0;
    return v0;
}

/* 089A86F8 */
u32 func_089A86F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089A86F8:;
    sp = sp - 80;
    a2 = D_08C2BA28 - (-17880);
    v1 = a2 - 17880;
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
    if (cnd_) { goto L_089A878C; }
    goto L_089A8740;
L_089A8740:;
    a2 = LD32(a2-17880);
    a3 = a1 + 0;
    goto L_089A8748;
L_089A8748:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089A877C; }
    goto L_089A8760;
L_089A8760:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089A8790; }
    goto L_089A8770;
L_089A8770:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089A8760; }
    goto L_089A877C;
L_089A877C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089A8748; }
    goto L_089A878C;
L_089A878C:;
    v1 = LD32(sp+8);
    goto L_089A8790;
L_089A8790:;
    cnd_ = v1 == 0;
    v0 = D_08ADE9F4 - (-5644);
    if (cnd_) { goto L_089A87DC; }
    goto L_089A8798;
L_089A8798:;
    f0 = BITSF(LD32(v0-5644));
    f20 = f0 * f0;
    s1 = LD32(v1);
    goto L_089A87A4;
L_089A87A4:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A87B0;
L_089A87B0:;
    v0 = LD32(s1+192);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_089A87D4; }
    goto L_089A87C0;
L_089A87C0:;
    v1 = LD32(s1+12);
    v0 = LD32(s2+12);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1); goto L_089A8820; }
    goto L_089A87D0;
L_089A87D0:;
    v1 = LD32(sp+8);
    goto L_089A87D4;
L_089A87D4:;
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_089A87A4; }
    goto L_089A87DC;
L_089A87DC:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089A8810; }
    goto L_089A87F0;
L_089A87F0:;
    v0 = 999;
    goto L_089A87F4;
L_089A87F4:;
    sp = sp + 80;
    return v0;
L_089A8810:;
    { u64 r_ = func_08ABC380(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A8818;
L_089A8818:;
    v0 = 999;
    goto L_089A87F4;
L_089A8820:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8838;
L_089A8838:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8858;
L_089A8858:;
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
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+20, FBITS(f2));
    if (cnd_) { goto L_089A87D0; }
    goto L_089A88BC;
L_089A88BC:;
    v0 = LD32(s1);
    a1 = LD32(sp);
    v1 = LD32(v0-16);
    a0 = LD32(a1+8);
    v1 = s1 + v1;
    a0 = a0 - 1;
    s0 = LD32(v1+4);
    cnd_ = a0 == 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_089A88E8; }
    goto L_089A88E0;
L_089A88E0:;
    v0 = s0 + 0;
    goto L_089A87F4;
L_089A88E8:;
    a0 = a1 + 0;
    { u64 r_ = func_08ABC380(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A88F0;
L_089A88F0:;
    v0 = s0 + 0;
    goto L_089A87F4;
}

/* 089A88F8 */
rv_t func_089A88F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089A88F8:;
    v0 = LD32(a0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089A8914; }
    goto L_089A8908;
L_089A8908:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    v1 = v1 ^ 0x1;
    goto L_089A8914;
L_089A8914:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089A891C */
void func_089A891C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A891C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    func_089E47DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089A893C;
L_089A893C:;
    ST32(s2+120, 0);
    v0 = LD32(s1+200);
    v0 = v0 & 0x1;
    ST32(s2+120, v0);
    v1 = LD32(s1+200);
    v1 = v1 & 0x2;
    v1 = v1 | v0;
    ST32(s2+120, v1);
    v0 = LD32(s1+200);
    v0 = v0 & 0x4;
    v0 = v0 | v1;
    ST32(s2+120, v0);
    v1 = LD32(s1+200);
    v1 = (v1 >> 4) & 0x1;
    v0 = (v0 & ~(0x1u << 3)) | ((v1 & 0x1) << 3);
    ST32(s2+120, v0);
    f0 = BITSF(LD32(s1+32));
    ST32(s2+128, FBITS(f0));
    v1 = LD_U8(s1+28);
    v0 = (v0 & ~(0x1u << 4)) | ((v1 & 0x1) << 4);
    ST32(s2+120, v0);
    f0 = BITSF(LD32(s1+312));
    ST32(s2+132, FBITS(f0));
    f1 = BITSF(LD32(s1+308));
    ST32(s2+136, FBITS(f1));
    v0 = LD32(s1+220);
    ST32(s2+156, v0);
    v1 = LD32(s1+316);
    ST32(s2+160, v1);
    a1 = LD32(s1);
    v0 = LD32(a1+168);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A89C0;
L_089A89C0:;
    s0 = LD32(s2+120);
    s0 = (s0 & ~(0x1u << 5)) | ((v0 & 0x1) << 5);
    ST32(s2+120, s0);
    a0 = s1 + 0;
    v0 = LD32(s1+200);
    v0 = (v0 >> 6) & 0x1;
    s0 = (s0 & ~(0x1u << 7)) | ((v0 & 0x1) << 7);
    ST32(s2+120, s0);
    v0 = LD32(s1+200);
    v0 = (v0 >> 7) & 0x1;
    s0 = (s0 & ~(0x1u << 6)) | ((v0 & 0x1) << 6);
    ST32(s2+120, s0);
    v0 = LD32(s1+200);
    v0 = (v0 >> 8) & 0x1;
    s0 = (s0 & ~(0x1u << 8)) | ((v0 & 0x1) << 8);
    ST32(s2+120, s0);
    f0 = BITSF(LD32(s1+324));
    ST32(s2+140, FBITS(f0));
    v0 = LD32(s1+244);
    ST32(s2+124, v0);
    v0 = func_089A86A0(a0);
    goto L_089A8A14;
L_089A8A14:;
    ST8(s2+164, v0);
    a0 = s1 + 0;
    v0 = func_089A86CC(a0);
    goto L_089A8A20;
L_089A8A20:;
    ST8(s2+165, v0);
    v1 = 999;
    v0 = LD32(s1+200);
    v0 = (v0 >> 9) & 0x1;
    s0 = (s0 & ~(0x1u << 9)) | ((v0 & 0x1) << 9);
    ST32(s2+120, s0);
    v0 = LD32(s1+200);
    v0 = (v0 >> 10) & 0x1;
    s0 = (s0 & ~(0x1u << 10)) | ((v0 & 0x1) << 10);
    ST32(s2+120, s0);
    v0 = LD32(s1+212);
    cnd_ = v0 == v1;
    ST32(s2+152, v0);
    if (cnd_) { goto L_089A8A90; }
    goto L_089A8A54;
L_089A8A54:;
    a0 = LD32(s1+216);
    cnd_ = a0 == v1;
    v1 = LD32(s1+208);
    if (cnd_) { goto L_089A8A74; }
    goto L_089A8A60;
L_089A8A60:;
    v0 = v1 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+148, v1); goto L_089A8A78; }
    goto L_089A8A6C;
L_089A8A6C:;
    ST32(s2+152, a0);
    v1 = LD32(s1+208);
    goto L_089A8A74;
L_089A8A74:;
    ST32(s2+148, v1);
    goto L_089A8A78;
L_089A8A78:;
    sp = sp + 16;
    return;
L_089A8A90:;
    a0 = LD32(s1+216);
    goto L_089A8A6C;
}

/* 089A8A98 */
void func_089A8A98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A8A98:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8AC8;
L_089A8AC8:;
    f12 = f20;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089A8AF0; }
    goto L_089A8AD8;
L_089A8AD8:;
    goto L_089A8ADC;
L_089A8ADC:;
    sp = sp + 32;
    return;
L_089A8AF0:;
    f0 = func_089E48B8(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A8AF8;
L_089A8AF8:;
    v0 = LD32(s1+120);
    v1 = LD32(s0+520);
    a0 = s0 + 0;
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s0+520, v1);
    v0 = LD32(s1+120);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s0+520, v1);
    v0 = LD32(s1+120);
    v0 = (v0 >> 2) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+520, v1);
    f0 = BITSF(LD32(s1+132));
    ST32(s0+372, FBITS(f0));
    f1 = BITSF(LD32(s1+136));
    ST32(s0+368, FBITS(f1));
    a1 = LD32(s1+160);
    func_0899E2C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A8B48;
L_089A8B48:;
    v0 = LD32(s1+120);
    v1 = LD32(s0+520);
    a2 = LD32(s0);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 6)) | ((v0 & 0x1) << 6);
    ST32(s0+520, v1);
    a0 = s0 + 0;
    v0 = LD32(s1+120);
    v0 = (v0 >> 4) & 0x1;
    v1 = (v1 & ~(0x1u << 12)) | ((v0 & 0x1) << 12);
    ST32(s0+520, v1);
    f0 = BITSF(LD32(s1+128));
    ST32(s0+388, FBITS(f0));
    a1 = LD32(s1+120);
    v1 = LD32(a2+416);
    t_ = v1;
    a1 = (a1 >> 5) & 0x1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8B8C;
L_089A8B8C:;
    v0 = LD32(s1+124);
    a0 = s0 + 0;
    ST32(s0+452, v0);
    a1 = LD_U8(s1+164);
    func_0899EA14(a0, a1);
    goto L_089A8BA0;
L_089A8BA0:;
    a1 = LD_U8(s1+165);
    a0 = s0 + 0;
    func_0899EA1C(a0, a1);
    goto L_089A8BAC;
L_089A8BAC:;
    v1 = LD32(s1+120);
    a0 = s0 + 0;
    v0 = v1 & 0x200;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089A8BD4; }
    goto L_089A8BC0;
L_089A8BC0:;
    a1 = (v1 >> 10) & 0x1;
    a0 = s0 + 0;
    func_0899F418(a0, a1);
    goto L_089A8BCC;
L_089A8BCC:;
    goto L_089A8ADC;
L_089A8BD4:;
    v0 = LD32(s0);
    v1 = LD32(v0+412);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8BE4;
L_089A8BE4:;
    v1 = LD32(s1+120);
    goto L_089A8BC0;
}

/* 089A8BEC */
void func_089A8BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A8BEC:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8C1C;
L_089A8C1C:;
    cnd_ = v0 != 0;
    f12 = f20;
    if (cnd_) { goto L_089A8C3C; }
    goto L_089A8C24;
L_089A8C24:;
    goto L_089A8C28;
L_089A8C28:;
    sp = sp + 32;
    return;
L_089A8C3C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f0 = func_089E4B1C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A8C48;
L_089A8C48:;
    f1 = BITSF(LD32(s1+132));
    a0 = s0 + 0;
    ST32(s0+372, FBITS(f1));
    f0 = BITSF(LD32(s1+136));
    ST32(s0+368, FBITS(f0));
    a1 = LD32(s1+160);
    func_0899E2C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A8C64;
L_089A8C64:;
    v0 = LD32(s1+120);
    v1 = LD32(s0+520);
    a1 = 999;
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 6)) | ((v0 & 0x1) << 6);
    ST32(s0+520, v1);
    a0 = LD32(s1+156);
    ST32(s0+436, a0);
    v0 = LD32(s1+120);
    v0 = (v0 >> 4) & 0x1;
    v1 = (v1 & ~(0x1u << 12)) | ((v0 & 0x1) << 12);
    ST32(s0+520, v1);
    f0 = BITSF(LD32(s1+128));
    ST32(s0+388, FBITS(f0));
    v0 = LD32(s1+124);
    ST32(s0+452, v0);
    v1 = LD32(s1+148);
    ST32(s0+432, a1);
    ST32(s0+428, v1);
    ST32(s0+440, a1);
    a2 = LD32(s1+152);
    cnd_ = a2 == a1;
    a0 = D_08C2B890 - (-18288);
    if (cnd_) { goto L_089A8C24; }
    goto L_089A8CC0;
L_089A8CC0:;
    v1 = a0 - 18288;
    v0 = LD32(v1+4);
    a1 = LD32(a0-18288);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A8D14; }
    goto L_089A8CE8;
L_089A8CE8:;
    a0 = LD32(a1);
    goto L_089A8CEC;
L_089A8CEC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A8DCC; }
    goto L_089A8D04;
L_089A8D04:;
    a1 = LD32(a1+4);
    goto L_089A8D08;
L_089A8D08:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A8CEC; }
    goto L_089A8D10;
L_089A8D10:;
    v1 = 0 + 0;
    goto L_089A8D14;
L_089A8D14:;
    cnd_ = v1 == 0;
    a0 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_089A8D40; }
    goto L_089A8D1C;
L_089A8D1C:;
    a0 = LD32(s1+120);
    v0 = (a0 >> 7) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08C2B0A8 - (-20312); goto L_089A8D40; }
    goto L_089A8D2C;
L_089A8D2C:;
    v0 = (a0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    a0 = D_08C2B0A8 - (-20312);
    if (cnd_) { goto L_089A8D40; }
    goto L_089A8D38;
L_089A8D38:;
    ST32(s0+440, a2);
    goto L_089A8C24;
L_089A8D40:;
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089A8C24; }
    goto L_089A8D4C;
L_089A8D4C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A8D9C; }
    goto L_089A8D70;
L_089A8D70:;
    a0 = LD32(a1);
    goto L_089A8D74;
L_089A8D74:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A8DAC; }
    goto L_089A8D8C;
L_089A8D8C:;
    a1 = LD32(a1+4);
    goto L_089A8D90;
L_089A8D90:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A8D74; }
    goto L_089A8D98;
L_089A8D98:;
    v1 = 0 + 0;
    goto L_089A8D9C;
L_089A8D9C:;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(s0+432, a2); goto L_089A8C24; }
    goto L_089A8DA4;
L_089A8DA4:;
    goto L_089A8C28;
L_089A8DAC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089A8D8C; }
    goto L_089A8DB8;
L_089A8DB8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A8D90; }
    goto L_089A8DC4;
L_089A8DC4:;
    goto L_089A8D9C;
L_089A8DCC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089A8D04; }
    goto L_089A8DD8;
L_089A8DD8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A8D08; }
    goto L_089A8DE4;
L_089A8DE4:;
    goto L_089A8D14;
}

/* 089A8DEC */
void func_089A8DEC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A8DEC:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A8E10;
L_089A8E10:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 38;
    t0 = 168;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089A8E2C;
L_089A8E2C:;
    a0 = s2 + 0;
    func_089A8E54(a0);
    goto L_089A8E34;
L_089A8E34:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089A8E3C;
L_089A8E3C:;
    sp = sp + 16;
    return;
}

/* 089A8E54 */
void func_089A8E54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_089A8E54:;
    sp = sp - 208;
    f20 = BITSF(0);
    s0 = a0 + 0;
    func_089E4C08(a0);
    goto L_089A8E74;
L_089A8E74:;
    a0 = s0 + 0;
    t3 = 1;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 120;
    t0 = 32;
    t1 = 11;
    t2 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089A8E98;
L_089A8E98:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 124;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089A8EBC;
L_089A8EBC:;
    v1 = D_08AEEA34 - (-5580);
    v0 = D_08AEEA30 - (-5584);
    f14 = BITSF(LD32(v1-5580));
    f13 = BITSF(LD32(v0-5584));
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 128;
    t0 = 32;
    t1 = 6;
    t2 = 1;
    t3 = 2;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089A8EF4;
L_089A8EF4:;
    v0 = D_08AEEA38 - (-5576);
    f21 = BITSF(LD32(v0-5576));
    f12 = f20;
    f14 = f20;
    f13 = f21;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 132;
    t0 = 32;
    t1 = 4;
    t2 = 1;
    t3 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089A8F2C;
L_089A8F2C:;
    a0 = s0 + 0;
    f13 = f21;
    f12 = f20;
    f14 = f20;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 136;
    t0 = 32;
    t1 = 4;
    t2 = 1;
    t3 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089A8F5C;
L_089A8F5C:;
    v0 = D_08AEEA3C - (-5572);
    v1 = D_08AEEA40 - (-5568);
    f13 = BITSF(LD32(v0-5572));
    f14 = BITSF(LD32(v1-5568));
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 140;
    t0 = 32;
    t1 = 4;
    t2 = 1;
    t3 = 0 + 0;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089A8F94;
L_089A8F94:;
    t3 = 1;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 148;
    t0 = 32;
    t1 = 3;
    t2 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089A8FB8;
L_089A8FB8:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 152;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089A8FDC;
L_089A8FDC:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 156;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089A9000;
L_089A9000:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 160;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089A9024;
L_089A9024:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 164;
    t0 = 8;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089A9048;
L_089A9048:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 1;
    a3 = 165;
    t0 = 8;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089A906C;
L_089A906C:;
    sp = sp + 208;
    return;
}

/* 089A9084 */
rv_t func_089A9084(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A9084:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A91A8; }
    goto L_089A90B8;
L_089A90B8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEEA44 - (-5564);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-5564));
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
    t0 = D_08C2A7D0 - (-22576);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A7E0 - (-22560);
    a3 = D_08C2A7F0 - (-22544);
    v1 = t0 - 22576;
    a1 = v0 - 22560;
    a2 = a3 - 22544;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2A880 - (-22400);
    s0 = s3 - 22400;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-22560, FBITS(f5));
    v0 = 32;
    ST32(t0-22576, FBITS(f1));
    ST32(a3-22544, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9170;
L_089A9170:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-22400, v0);
    if (cnd_) { goto L_089A919C; }
    goto L_089A9180;
L_089A9180:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089A9188;
L_089A9188:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089A9188; }
    goto L_089A919C;
L_089A919C:;
    v0 = s3 - 22400;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089A91A8;
L_089A91A8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A91CC; }
    goto L_089A91BC;
L_089A91BC:;
    v0 = D_08C2A880 - (-22400);
    a0 = LD32(v0-22400);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089A91E4; }
    goto L_089A91CC;
L_089A91CC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A91E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A91EC;
L_089A91EC:;
    goto L_089A91CC;
}

/* 089A91F4 */
rv_t func_089A91F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A91F4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089A9084(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9208;
L_089A9208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A9214 */
rv_t func_089A9214(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A9214:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089A9084(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9228;
L_089A9228:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089A9234 */
void func_089A9234(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A9234:;
    sp = sp - 32;
    s5 = a0 + 1164;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08AFCEB0 - (-12624);
    s0 = s0 - 12624;
    s4 = s1 + 900;
    s3 = D_08C2A9D8 - (-22056);
    func_08873BF8(a0);
    goto L_089A9274;
L_089A9274:;
    a1 = s0 + 48;
    a0 = s4 + 0;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089A9284;
L_089A9284:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089C3E24(a0, a1);
    goto L_089A9290;
L_089A9290:;
    v1 = D_08AFCBD0 - (-13360);
    v1 = v1 - 13360;
    v0 = v1 + 596;
    ST32(s1, v1);
    a0 = v1 + 708;
    v1 = 1;
    ST32(s1+900, v0);
    v0 = (u32)-32764;
    s2 = s3 - 22056;
    ST16(s5+8, v0);
    ST32(s1+1164, a0);
    a0 = 12;
    ST8(s4+246, v1);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A92E4;
L_089A92E4:;
    a0 = LD32(s3-22056);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(v0+4, a1);
    ST32(s2+12, v1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    v0 = D_08AEEA4C - (-5556);
    v1 = LD32(s1+856);
    f0 = BITSF(LD32(v0-5556));
    ST32(s1+860, 0);
    v1 = (v1 & ~(0x3fu << 0)) | ((0 & 0x3f) << 0);
    ST32(s1+896, FBITS(f0));
    ST32(s1+856, v1);
    ST32(s1+888, 0);
    ST32(s1+892, 0);
    sp = sp + 32;
    return;
}

/* 089A9358 */
rv_t func_089A9358(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A9358:;
    v1 = D_08AFCBD0 - (-13360);
    sp = sp - 32;
    v1 = v1 - 13360;
    v0 = v1 + 596;
    s1 = a0 + 0;
    a0 = v1 + 708;
    ST32(s1+1164, a0);
    a0 = D_08C2A9D8 - (-22056);
    a0 = a0 - 22056;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+900, v0);
    s3 = s1 + 1164;
    s2 = s1 + 900;
    func_08AC4CDC(a0, a1, t1, t2, t3);
    goto L_089A93A8;
L_089A93A8:;
    v1 = LD_U8(s1+195);
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A93FC; }
    goto L_089A93B4;
L_089A93B4:;
    s0 = D_08AFCEB0 - (-12624);
    s0 = s0 - 12624;
    goto L_089A93BC;
L_089A93BC:;
    a0 = s1 + 0;
    a1 = s0 + 4;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089A93CC;
L_089A93CC:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A93D8;
L_089A93D8:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A93E0;
L_089A93E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A93FC:;
    s0 = D_08AFCEB0 - (-12624);
    { rv_t r_ = func_089AE7DC(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9404;
L_089A9404:;
    s0 = s0 - 12624;
    goto L_089A93BC;
}

/* 089A940C */
rv_t func_089A940C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089A940C:;
    v1 = D_08AFCBD0 - (-13360);
    sp = sp - 32;
    v1 = v1 - 13360;
    v0 = v1 + 596;
    s1 = a0 + 0;
    a0 = v1 + 708;
    ST32(s1+1164, a0);
    a0 = D_08C2A9D8 - (-22056);
    a0 = a0 - 22056;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+900, v0);
    s3 = s1 + 1164;
    s2 = s1 + 900;
    func_08AC4CDC(a0, a1, t1, t2, t3);
    goto L_089A945C;
L_089A945C:;
    v1 = LD_U8(s1+195);
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A94B8; }
    goto L_089A9468;
L_089A9468:;
    s0 = D_08AFCEB0 - (-12624);
    s0 = s0 - 12624;
    goto L_089A9470;
L_089A9470:;
    a0 = s1 + 0;
    a1 = s0 + 4;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089A9480;
L_089A9480:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A948C;
L_089A948C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A9494;
L_089A9494:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A949C;
L_089A949C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089A94B8:;
    s0 = D_08AFCEB0 - (-12624);
    { rv_t r_ = func_089AE7DC(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A94C0;
L_089A94C0:;
    s0 = s0 - 12624;
    goto L_089A9470;
}

/* 089A94C8 */
u32 func_089A94C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A94C8:;
    sp = sp - 16;
    a1 = 0xa25f0000u;
    a1 = a1 | 0x3bb9;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A94E4;
L_089A94E4:;
    v1 = 0xf5ec0000u;
    v1 = v1 | 0xfc51;
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 089A9500 */
u32 func_089A9500(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A9500:;
    sp = sp - 16;
    a1 = 0xa25f0000u;
    a1 = a1 | 0x3bb9;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A951C;
L_089A951C:;
    v1 = 0x3fbe0000u;
    v1 = v1 | 0x8126;
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return v0;
}

/* 089A9538 */
u32 func_089A9538(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A9538:;
    sp = sp - 16;
    a1 = 0x4bcf0000u;
    a1 = a1 | 0x276;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, t1, t2, t3);
    goto L_089A9554;
L_089A9554:;
    sp = sp + 16;
    return v0;
}

/* 089A9560 */
u32 func_089A9560(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A9560:;
    sp = sp - 16;
    a1 = 0x77fb0000u;
    a1 = a1 | 0xc6bf;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A957C;
L_089A957C:;
    sp = sp + 16;
    return v0;
}

/* 089A9588 */
rv_t func_089A9588(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A9588:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089A9500(a0, t1, t2, t3);
    goto L_089A959C;
L_089A959C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089A95D4; }
    goto L_089A95A4;
L_089A95A4:;
    v0 = LD32(s0+852);
    v1 = LD32(s0+856);
    v0 = v0 & 0x1;
    v0 = v0 ^ 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s0+856, v1);
    goto L_089A95BC;
L_089A95BC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089C4A2C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A95C4;
L_089A95C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A95D4:;
    v0 = func_089A94C8(a0, 0, 0, 0);
    goto L_089A95DC;
L_089A95DC:;
    cnd_ = v0 == 0;
    v0 = LD32(s0+856);
    if (cnd_) { goto L_089A95F0; }
    goto L_089A95E4;
L_089A95E4:;
    v0 = v0 | 0x1;
    goto L_089A95E8;
L_089A95E8:;
    ST32(s0+856, v0);
    goto L_089A95BC;
L_089A95F0:;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_089A95E8;
}

/* 089A95F8 */
rv_t func_089A95F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089A95F8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 1184;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9614;
L_089A9614:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    func_089A9234(a0);
    goto L_089A9620;
L_089A9620:;
    v1 = LD32(s1);
    a1 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9634;
L_089A9634:;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    { rv_t r_ = func_0885E738(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9644;
L_089A9644:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089A9658;
L_089A9658:;
    a0 = 0x5d00000u;
    a2 = s1 + 588;
    a1 = v0 + 0;
    a0 = a0 | 0x4860;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A966C;
L_089A966C:;
    v1 = LD32(s1);
    v0 = LD32(v1+456);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A967C;
L_089A967C:;
    v0 = LD32(s1+88);
    cnd_ = v0 != 0;
    a0 = 144;
    if (cnd_) { goto L_089A96AC; }
    goto L_089A9688;
L_089A9688:;
    v1 = LD32(s1);
    goto L_089A968C;
L_089A968C:;
    v0 = LD32(v1+480);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9698;
L_089A9698:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089A96AC:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A96B4;
L_089A96B4:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D8EAC(a0, a1);
    goto L_089A96C0;
L_089A96C0:;
    a0 = 144;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A96C8;
L_089A96C8:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D9008(a0, a1);
    goto L_089A96D4;
L_089A96D4:;
    a0 = s1 + 0;
    { u64 r_ = func_089CBD38(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089A96DC;
L_089A96DC:;
    cnd_ = v0 == 0;
    a0 = 144;
    if (cnd_) { goto L_089A9688; }
    goto L_089A96E4;
L_089A96E4:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A96EC;
L_089A96EC:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D95A8(a0, a1);
    goto L_089A96F8;
L_089A96F8:;
    a0 = 144;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9700;
L_089A9700:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D9724(a0, a1);
    goto L_089A970C;
L_089A970C:;
    a0 = 144;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9714;
L_089A9714:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D9898(a0, a1);
    goto L_089A9720;
L_089A9720:;
    v1 = LD32(s1);
    goto L_089A968C;
}

/* 089A9728 */
rv_t func_089A9728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089A9728:;
    sp = sp - 48;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089AA0F0; }
    goto L_089A9750;
L_089A9750:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DBCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9758;
L_089A9758:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089A9770; }
    goto L_089A9768;
L_089A9768:;
    v0 = LD_U8(v0+68);
    s0 = 0 < v0;
    goto L_089A9770;
L_089A9770:;
    a1 = LD32(s1+844);
    v0 = a1 & 0x20;
    cnd_ = v0 != 0;
    ST32(s1+488, 0);
    if (cnd_) { goto L_089A9788; }
    goto L_089A9780;
L_089A9780:;
    ST32(s1+480, 0);
    ST32(s1+484, 0);
    goto L_089A9788;
L_089A9788:;
    v0 = a1 & 0x8;
    cnd_ = v0 == 0;
    ST32(s1+492, 0);
    if (cnd_) { goto L_089A97B4; }
    goto L_089A9794;
L_089A9794:;
    goto L_089A9798;
L_089A9798:;
    goto L_089A979C;
L_089A979C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089A97B4:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 8;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A97C8;
L_089A97C8:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v1 = LD32(s1);
    if (cnd_) { goto L_089A9810; }
    goto L_089A97DC;
L_089A97DC:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A97E8;
L_089A97E8:;
    cnd_ = v0 != 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_089AA0E0; }
    goto L_089A97F0;
L_089A97F0:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089AA07C; }
    goto L_089A97FC;
L_089A97FC:;
    v1 = LD32(s1+852);
    goto L_089A9800;
L_089A9800:;
    v0 = v1 & 0x1;
    goto L_089A9804;
L_089A9804:;
    cnd_ = v0 == 0;
    a0 = 0x8041;
    if (cnd_) { goto L_089AA040; }
    goto L_089A980C;
L_089A980C:;
    v1 = LD32(s1);
    goto L_089A9810;
L_089A9810:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A981C;
L_089A981C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A9798; }
    goto L_089A9824;
L_089A9824:;
    a0 = LD32(s1+92);
    a1 = 7;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A983C;
L_089A983C:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { s2 = 1; goto L_089A9850; }
    goto L_089A9850;
L_089A9850:;
    v0 = LD32(s1+844);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089AA01C; }
    goto L_089A9860;
L_089A9860:;
    cnd_ = s2 != 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9FF8; }
    goto L_089A9868;
L_089A9868:;
    v0 = LD32(s1+844);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9FD4; }
    goto L_089A9878;
L_089A9878:;
    v0 = LD32(s1+856);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9894; }
    goto L_089A9888;
L_089A9888:;
    ST32(s1+480, 0);
    ST32(s1+488, 0);
    a0 = LD32(s1+92);
    goto L_089A9894;
L_089A9894:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 17;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A98A4;
L_089A98A4:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = LD32(s1+92);
    if (cnd_) { goto L_089A98D4; }
    goto L_089A98B8;
L_089A98B8:;
    v0 = LD32(s1+844);
    v0 = v0 | 0x80;
    ST32(s1+844, v0);
    v0 = 1;
    v1 = LD32(a0+12);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089A9FB8; }
    goto L_089A98D4;
L_089A98D4:;
    v1 = LD32(a0);
    f20 = BITSF(0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 10;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A98E8;
L_089A98E8:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+848); goto L_089A9908; }
    goto L_089A98F8;
L_089A98F8:;
    v0 = LD32(s1+844);
    v0 = v0 | 0x80;
    ST32(s1+844, v0);
    v0 = LD32(s1+848);
    goto L_089A9908;
L_089A9908:;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A9920; }
    goto L_089A9914;
L_089A9914:;
    ST32(s1+488, FBITS(f20));
    ST32(s1+480, FBITS(f20));
    ST32(s1+484, FBITS(f20));
    goto L_089A9920;
L_089A9920:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9F30; }
    goto L_089A9928;
L_089A9928:;
    a0 = LD32(s1+92);
    goto L_089A992C;
L_089A992C:;
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9940;
L_089A9940:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+844); goto L_089A9960; }
    goto L_089A9950;
L_089A9950:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    ST32(s1+740, FBITS(f0));
    v0 = LD32(s1+844);
    goto L_089A9960;
L_089A9960:;
    a2 = LD32(s1+92);
    a1 = 4;
    s2 = (v0 >> 2) & 0x1;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(s1+844, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9988;
L_089A9988:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+844); goto L_089A99FC; }
    goto L_089A9998;
L_089A9998:;
    v0 = D_08B285B4 - (-31308);
    f1 = BITSF(LD32(v0-31308));
    f0 = BITSF(LD32(s1+740));
    v0 = D_08AEEA5C - (-5540);
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-5540));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = LD32(s1+844);
    if (cnd_) { goto L_089A99C8; }
    goto L_089A99C0;
L_089A99C0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089A99FC; }
    goto L_089A99C8;
L_089A99C8:;
    v1 = LD32(s1+848);
    v0 = v0 | 0x100;
    v1 = (v1 >> 3) & 0x1;
    cnd_ = v1 != 0;
    ST32(s1+844, v0);
    if (cnd_) { goto L_089A9F20; }
    goto L_089A99DC;
L_089A99DC:;
    a0 = s1 + 0;
    v0 = func_089CABFC(a0);
    goto L_089A99E4;
L_089A99E4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+844); goto L_089A99FC; }
    goto L_089A99EC;
L_089A99EC:;
    v0 = LD32(s1+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = LD32(s1+844);
    if (cnd_) { goto L_089A9EF8; }
    goto L_089A99FC;
L_089A99FC:;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+848); goto L_089A9A14; }
    goto L_089A9A08;
L_089A9A08:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089A9EE8; }
    goto L_089A9A10;
L_089A9A10:;
    v0 = LD32(s1+848);
    goto L_089A9A14;
L_089A9A14:;
    a2 = LD32(s1+92);
    a1 = 12;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+848, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9A34;
L_089A9A34:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+848); goto L_089A9A68; }
    goto L_089A9A48;
L_089A9A48:;
    v0 = LD32(s1+852);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A9ECC; }
    goto L_089A9A58;
L_089A9A58:;
    v0 = LD32(s1+848);
    v0 = v0 | 0x1;
    goto L_089A9A60;
L_089A9A60:;
    ST32(s1+848, v0);
    v0 = LD32(s1+848);
    goto L_089A9A68;
L_089A9A68:;
    a2 = LD32(s1+92);
    a1 = 13;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+848, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9A88;
L_089A9A88:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089A9AB8; }
    goto L_089A9A9C;
L_089A9A9C:;
    v0 = LD32(s1+852);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A9EB0; }
    goto L_089A9AAC;
L_089A9AAC:;
    v0 = LD32(s1+848);
    goto L_089A9AB0;
L_089A9AB0:;
    v0 = v0 | 0x2;
    ST32(s1+848, v0);
    goto L_089A9AB8;
L_089A9AB8:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9DC8; }
    goto L_089A9AC0;
L_089A9AC0:;
    a0 = LD32(s1+92);
    goto L_089A9AC4;
L_089A9AC4:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9AD4;
L_089A9AD4:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_089A9B1C; }
    goto L_089A9AE8;
L_089A9AE8:;
    v0 = LD32(s1+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089A9B10; }
    goto L_089A9AF8;
L_089A9AF8:;
    v1 = LD32(s1);
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9B08;
L_089A9B08:;
    cnd_ = v0 == 0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_089A9B1C; }
    goto L_089A9B10;
L_089A9B10:;
    a0 = s1 + 0;
    func_089AEA7C(a0);
    goto L_089A9B18;
L_089A9B18:;
    v0 = D_08B2BB6D - (-17555);
    goto L_089A9B1C;
L_089A9B1C:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9D50; }
    goto L_089A9B28;
L_089A9B28:;
    v0 = func_08979DF4();
    goto L_089A9B30;
L_089A9B30:;
    v1 = 2;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9D50; }
    goto L_089A9B3C;
L_089A9B3C:;
    v0 = LD32(s1+856);
    a2 = LD32(s1+92);
    f20 = BITSF(0);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+856, v0);
    a0 = a2 + 0;
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 15;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9B64;
L_089A9B64:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9BC4; }
    goto L_089A9B74;
L_089A9B74:;
    a1 = LD32(s1+844);
    v0 = a1 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9D44; }
    goto L_089A9B84;
L_089A9B84:;
    v1 = LD32(s1+448);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9D44; }
    goto L_089A9B94;
L_089A9B94:;
    v0 = LD32(s1+852);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089A9D2C; }
    goto L_089A9BA4;
L_089A9BA4:;
    a0 = LD32(s1+92);
    goto L_089A9BA8;
L_089A9BA8:;
    v0 = 1;
    v1 = LD32(a0+12);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_089A9D08; }
    goto L_089A9BB8;
L_089A9BB8:;
    v0 = LD32(s1+844);
    goto L_089A9BBC;
L_089A9BBC:;
    v0 = v0 | 0x20;
    ST32(s1+844, v0);
    goto L_089A9BC4;
L_089A9BC4:;
    a1 = LD32(s1+844);
    v0 = a1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+476, 0); goto L_089A9C20; }
    goto L_089A9BD4;
L_089A9BD4:;
    v1 = LD32(s1+448);
    v0 = 999;
    cnd_ = v1 == v0;
    v0 = a1 + 0;
    if (cnd_) { goto L_089A9CF8; }
    goto L_089A9BE4;
L_089A9BE4:;
    v0 = LD32(s1+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = a1 & 0x20;
    if (cnd_) { goto L_089A9C08; }
    goto L_089A9BF4;
L_089A9BF4:;
    v0 = a1 + 0;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+844, v0);
    a1 = v0 + 0;
    v0 = a1 & 0x20;
    goto L_089A9C08;
L_089A9C08:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1+476, 0); goto L_089A9C20; }
    goto L_089A9C10;
L_089A9C10:;
    v0 = LD32(s1+856);
    v0 = v0 | 0x20;
    ST32(s1+856, v0);
    ST8(s1+476, 0);
    goto L_089A9C20;
L_089A9C20:;
    v1 = LD32(a0);
    f21 = BITSF(0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9C34;
L_089A9C34:;
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089A9798; }
    goto L_089A9C44;
L_089A9C44:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9C58;
L_089A9C58:;
    a0 = LD32(s1+92);
    a1 = 1;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9C70;
L_089A9C70:;
    f2 = f0 * f0;
    f1 = f20 * f20;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEEA60 - (-5536);
    if (cnd_) { goto L_089A9CC4; }
    goto L_089A9C88;
L_089A9C88:;
    f0 = BITSF(LD32(v0-5536));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_089A9CC4; }
    goto L_089A9C9C;
L_089A9C9C:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_089A9CB4; }
    goto L_089A9CAC;
L_089A9CAC:;
    a0 = s1 + 0;
    a1 = 2;
    goto L_089A9CB4;
L_089A9CB4:;
    { rv_t r_ = func_089AE48C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9CBC;
L_089A9CBC:;
    goto L_089A9798;
L_089A9CC4:;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089A9798; }
    goto L_089A9CD4;
L_089A9CD4:;
    v0 = D_08AEEA60 - (-5536);
    f0 = BITSF(LD32(v0-5536));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089A979C; }
    goto L_089A9CEC;
L_089A9CEC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    goto L_089A9CB4;
L_089A9CF8:;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+844, v0);
    a1 = v0 + 0;
    goto L_089A9BE4;
L_089A9D08:;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9D14;
L_089A9D14:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = LD32(s1+92);
    if (cnd_) { goto L_089A9BC4; }
    goto L_089A9D24;
L_089A9D24:;
    v0 = LD32(s1+844);
    goto L_089A9BBC;
L_089A9D2C:;
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9D38;
L_089A9D38:;
    cnd_ = v0 != 0;
    a0 = LD32(s1+92);
    if (cnd_) { goto L_089A9BA8; }
    goto L_089A9D40;
L_089A9D40:;
    a1 = LD32(s1+844);
    goto L_089A9D44;
L_089A9D44:;
    a1 = (a1 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+844, a1);
    goto L_089A9BC4;
L_089A9D50:;
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 15;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9D64;
L_089A9D64:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    a0 = LD32(s1+92);
    if (cnd_) { goto L_089A9D94; }
    goto L_089A9D74;
L_089A9D74:;
    v0 = 1;
    v1 = LD32(a0+12);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0); goto L_089A9DA4; }
    goto L_089A9D84;
L_089A9D84:;
    v0 = LD_U8(s1+476);
    goto L_089A9D88;
L_089A9D88:;
    v0 = v0 ^ 0x1;
    v0 = 0 < v0;
    ST8(s1+476, v0);
    goto L_089A9D94;
L_089A9D94:;
    v0 = LD32(s1+844);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+844, v0);
    goto L_089A9C20;
L_089A9DA4:;
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9DB0;
L_089A9DB0:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = LD32(s1+92);
    if (cnd_) { goto L_089A9D94; }
    goto L_089A9DC0;
L_089A9DC0:;
    v0 = LD_U8(s1+476);
    goto L_089A9D88;
L_089A9DC8:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 9;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9DD8;
L_089A9DD8:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9AC4; }
    goto L_089A9DEC;
L_089A9DEC:;
    a2 = LD32(s1+448);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2A9D8 - (-22056);
    if (cnd_) { goto L_089A9AC0; }
    goto L_089A9DFC;
L_089A9DFC:;
    v1 = a0 - 22056;
    v0 = LD32(v1+4);
    a1 = LD32(a0-22056);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089A9E50; }
    goto L_089A9E24;
L_089A9E24:;
    a0 = LD32(a1);
    goto L_089A9E28;
L_089A9E28:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089A9E90; }
    goto L_089A9E40;
L_089A9E40:;
    a1 = LD32(a1+4);
    goto L_089A9E44;
L_089A9E44:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089A9E28; }
    goto L_089A9E4C;
L_089A9E4C:;
    v1 = 0 + 0;
    goto L_089A9E50;
L_089A9E50:;
    cnd_ = v1 == 0;
    a0 = v1 + 540;
    if (cnd_) { goto L_089A9AC0; }
    goto L_089A9E58;
L_089A9E58:;
    v0 = LD32(v1+540);
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+8);
    {v[0]=BITSF(v0);}
    v0 = LD32(a0+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = 1;
    ST8(s1+469, v0);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(s1+472, v0);
    goto L_089A9AC0;
L_089A9E90:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089A9E40; }
    goto L_089A9E9C;
L_089A9E9C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089A9E44; }
    goto L_089A9EA8;
L_089A9EA8:;
    goto L_089A9E50;
L_089A9EB0:;
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9EBC;
L_089A9EBC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089A9AB8; }
    goto L_089A9EC4;
L_089A9EC4:;
    v0 = LD32(s1+848);
    goto L_089A9AB0;
L_089A9ECC:;
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9ED8;
L_089A9ED8:;
    cnd_ = v0 == 0;
    v0 = LD32(s1+848);
    if (cnd_) { goto L_089A9A68; }
    goto L_089A9EE0;
L_089A9EE0:;
    v0 = v0 | 0x1;
    goto L_089A9A60;
L_089A9EE8:;
    a0 = s1 + 0;
    func_089C9FFC(a0, 0, 0, 0);
    goto L_089A9EF0;
L_089A9EF0:;
    v0 = LD32(s1+848);
    goto L_089A9A14;
L_089A9EF8:;
    ST8(s1+469, 0);
    a0 = s1 + 0;
    v0 = v0 | 0x4;
    ST32(s1+844, v0);
    v0 = D_08AEEA54 - (-5548);
    f0 = BITSF(LD32(v0-5548));
    ST32(s1+492, FBITS(f0));
    func_089CAC4C(a0);
    goto L_089A9F18;
L_089A9F18:;
    v0 = LD32(s1+844);
    goto L_089A99FC;
L_089A9F20:;
    a0 = s1 + 0;
    { rv_t r_ = func_089C9548(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9F28;
L_089A9F28:;
    goto L_089A99DC;
L_089A9F30:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9F40;
L_089A9F40:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A9F70; }
    goto L_089A9F50;
L_089A9F50:;
    v0 = LD32(s1+848);
    v1 = D_08AEEA54 - (-5548);
    f0 = BITSF(LD32(v1-5548));
    v0 = (v0 >> 3) & 0x1;
    ST8(s1+469, 0);
    cnd_ = v0 != 0;
    ST32(s1+492, FBITS(f0));
    if (cnd_) { goto L_089A9FA8; }
    goto L_089A9F6C;
L_089A9F6C:;
    a0 = LD32(s1+92);
    goto L_089A9F70;
L_089A9F70:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9F80;
L_089A9F80:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+92); goto L_089A992C; }
    goto L_089A9F94;
L_089A9F94:;
    v0 = D_08AEEA58 - (-5544);
    f0 = BITSF(LD32(v0-5544));
    ST8(s1+469, 0);
    ST32(s1+492, FBITS(f0));
    goto L_089A9928;
L_089A9FA8:;
    a0 = s1 + 0;
    { rv_t r_ = func_089C9548(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9FB0;
L_089A9FB0:;
    a0 = LD32(s1+92);
    goto L_089A9F70;
L_089A9FB8:;
    a1 = 14;
    func_08A5E390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A9FC0;
L_089A9FC0:;
    a0 = LD32(s1+92);
    a1 = 15;
    func_08A5E390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089A9FCC;
L_089A9FCC:;
    a0 = LD32(s1+92);
    goto L_089A98D4;
L_089A9FD4:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089A9FE4;
L_089A9FE4:;
    a0 = LD32(s1+92);
    f12 = f0;
    f0 = func_08A5FC28(a0, f12);
    goto L_089A9FF0;
L_089A9FF0:;
    ST32(s1+484, FBITS(f0));
    goto L_089A9878;
L_089A9FF8:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA008;
L_089AA008:;
    a0 = LD32(s1+92);
    f12 = f0;
    f0 = func_08A5FC28(a0, f12);
    goto L_089AA014;
L_089AA014:;
    ST32(s1+488, FBITS(f0));
    goto L_089A9878;
L_089AA01C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA02C;
L_089AA02C:;
    a0 = LD32(s1+92);
    f12 = f0;
    f0 = func_08A5FC28(a0, f12);
    goto L_089AA038;
L_089AA038:;
    ST32(s1+480, FBITS(f0));
    goto L_089A9860;
L_089AA040:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA050;
L_089AA050:;
    a0 = LD32(v0+24);
    v1 = LD32(s1+524);
    a1 = v0 + 0;
    ST32(a0, v1);
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA074;
L_089AA074:;
    goto L_089A9798;
L_089AA07C:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA088;
L_089AA088:;
    cnd_ = v0 != 0;
    v1 = LD32(s1+852);
    if (cnd_) { goto L_089A9800; }
    goto L_089AA090;
L_089AA090:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0x8041; goto L_089AA040; }
    goto L_089AA09C;
L_089AA09C:;
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_089A9804; }
    goto L_089AA0A8;
L_089AA0A8:;
    v0 = LD_U8(s1+444);
    cnd_ = v0 == 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_089A9804; }
    goto L_089AA0B4;
L_089AA0B4:;
    v0 = LD32(s1+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_089A9804; }
    goto L_089AA0C4;
L_089AA0C4:;
    v0 = LD_U8(s1+196);
    cnd_ = v0 != 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_089A9804; }
    goto L_089AA0D0;
L_089AA0D0:;
    a0 = s1 + 0;
    { rv_t r_ = func_089AE808(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA0D8;
L_089AA0D8:;
    goto L_089A9798;
L_089AA0E0:;
    a0 = s1 + 0;
    { rv_t r_ = func_089AE8DC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA0E8;
L_089AA0E8:;
    goto L_089A9798;
L_089AA0F0:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA0F8;
L_089AA0F8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A5E408(a0);
    goto L_089AA104;
L_089AA104:;
    ST32(s1+92, s0);
    goto L_089A9750;
}

/* 089AA10C */
rv_t func_089AA10C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_089AA10C:;
    sp = sp - 240;
    v1 = LD32(a0);
    v0 = LD32(v1+460);
    t_ = v0;
    s1 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA138;
L_089AA138:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089AA668; }
    goto L_089AA140;
L_089AA140:;
    a0 = s1 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA148;
L_089AA148:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AA18C; }
    goto L_089AA150;
L_089AA150:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AA658; }
    goto L_089AA15C;
L_089AA15C:;
    v1 = LD32(s1);
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA16C;
L_089AA16C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AA658; }
    goto L_089AA174;
L_089AA174:;
    v0 = LD32(s1+856);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AA648; }
    goto L_089AA184;
L_089AA184:;
    a0 = s1 + 0;
    func_089C8798(a0);
    goto L_089AA18C;
L_089AA18C:;
    a0 = s1 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA194;
L_089AA194:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AA1A8; }
    goto L_089AA19C;
L_089AA19C:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089AA3E4; }
    goto L_089AA1A8;
L_089AA1A8:;
    a0 = s1 + 0;
    func_089CB450(a0);
    goto L_089AA1B0;
L_089AA1B0:;
    a0 = s1 + 0;
    func_089AF6F0(a0, 0, 0, 0);
    goto L_089AA1B8;
L_089AA1B8:;
    a0 = s1 + 0;
    func_089C9F48(a0);
    goto L_089AA1C0;
L_089AA1C0:;
    a0 = s1 + 0;
    func_089CA734(a0);
    goto L_089AA1C8;
L_089AA1C8:;
    a0 = s1 + 0;
    func_089C9978(a0, 0, 0, 0);
    goto L_089AA1D0;
L_089AA1D0:;
    a0 = s1 + 0;
    func_089AF8B8(a0, 0, 0, 0);
    goto L_089AA1D8;
L_089AA1D8:;
    s0 = D_08B2C1BC - (-15940);
    a0 = s1 + 0;
    func_089AE1A4(a0);
    goto L_089AA1E4;
L_089AA1E4:;
    v0 = LD_U8(s0-15940);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+848); goto L_089AA200; }
    goto L_089AA1F0;
L_089AA1F0:;
    a0 = LD32(s1+40);
    cnd_ = a0 != 0;
    a1 = sp + 48;
    if (cnd_) { goto L_089AA3CC; }
    goto L_089AA1FC;
L_089AA1FC:;
    v0 = LD32(s1+848);
    goto L_089AA200;
L_089AA200:;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+856); goto L_089AA238; }
    goto L_089AA20C;
L_089AA20C:;
    v0 = LD32(s1+844);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+856); goto L_089AA238; }
    goto L_089AA21C;
L_089AA21C:;
    v0 = LD_U8(s0-15940);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+856); goto L_089AA238; }
    goto L_089AA228;
L_089AA228:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089AA328; }
    goto L_089AA234;
L_089AA234:;
    v0 = LD32(s1+856);
    goto L_089AA238;
L_089AA238:;
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    v0 = LD32(s1+852);
    if (cnd_) { goto L_089AA30C; }
    goto L_089AA244;
L_089AA244:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AA2FC; }
    goto L_089AA250;
L_089AA250:;
    a1 = LD32(s1+892);
    goto L_089AA254;
L_089AA254:;
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_089AA2BC; }
    goto L_089AA25C;
L_089AA25C:;
    v0 = LD32(s1+852);
    goto L_089AA260;
L_089AA260:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089AA294; }
    goto L_089AA26C;
L_089AA26C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089C71EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA274;
L_089AA274:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_089AA294:;
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA2A0;
L_089AA2A0:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089AA26C; }
    goto L_089AA2A8;
L_089AA2A8:;
    f12 = BITSF(0);
    a1 = 999;
    func_089CE510(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089AA2B4;
L_089AA2B4:;
    goto L_089AA26C;
L_089AA2BC:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA2C4;
L_089AA2C4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089AA2F4; }
    goto L_089AA2CC;
L_089AA2CC:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA2DC;
L_089AA2DC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088E4910(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA2EC;
L_089AA2EC:;
    v0 = LD32(s1+852);
    goto L_089AA260;
L_089AA2F4:;
    ST32(s1+892, 0);
    goto L_089AA25C;
L_089AA2FC:;
    a0 = s1 + 0;
    { u64 r_ = func_089AE790(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA304;
L_089AA304:;
    a1 = LD32(s1+892);
    goto L_089AA254;
L_089AA30C:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+892); goto L_089AA254; }
    goto L_089AA318;
L_089AA318:;
    a0 = s1 + 0;
    { u64 r_ = func_089AE744(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA320;
L_089AA320:;
    a1 = LD32(s1+892);
    goto L_089AA254;
L_089AA328:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA334;
L_089AA334:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+856); goto L_089AA238; }
    goto L_089AA33C;
L_089AA33C:;
    v0 = LD32(s1+844);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AA35C; }
    goto L_089AA34C;
L_089AA34C:;
    a0 = s1 + 0;
    func_089CDD90(a0);
    goto L_089AA354;
L_089AA354:;
    a0 = s1 + 0;
    func_089CD950(a0);
    goto L_089AA35C;
L_089AA35C:;
    a0 = s1 + 0;
    func_089AA9EC(a0);
    goto L_089AA364;
L_089AA364:;
    a0 = s1 + 0;
    func_089AA884(a0);
    goto L_089AA36C;
L_089AA36C:;
    a0 = s1 + 0;
    func_089B01C0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089AA374;
L_089AA374:;
    a0 = s1 + 0;
    func_089AAB54(a0);
    goto L_089AA37C;
L_089AA37C:;
    a0 = s1 + 0;
    func_089AB3F8(a0);
    goto L_089AA384;
L_089AA384:;
    s0 = sp + 64;
    a0 = s1 + 0;
    f0 = func_089C8410(a0);
    goto L_089AA390;
L_089AA390:;
    a1 = s1 + 552;
    a0 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA39C;
L_089AA39C:;
    a0 = LD32(s1);
    v0 = D_08B285B4 - (-31308);
    f12 = BITSF(LD32(v0-31308));
    v1 = LD32(a0-12);
    a1 = s1 + 528;
    a2 = s0 + 0;
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    a3 = 0 + 0;
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA3C4;
L_089AA3C4:;
    v0 = LD32(s1+856);
    goto L_089AA238;
L_089AA3CC:;
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA3DC;
L_089AA3DC:;
    v0 = LD32(s1+848);
    goto L_089AA200;
L_089AA3E4:;
    a0 = s1 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    s2 = s1 + 552;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA3F4;
L_089AA3F4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s1 + 528;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(v0));
    v1 = LD32(s1);
    ST32(s1+528, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA420;
L_089AA420:;
    f0 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(s2+4, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    ST32(s2+12, FBITS(f2));
    ST32(s2+16, FBITS(f3));
    ST32(s2+20, FBITS(f4));
    ST32(s2+24, FBITS(f5));
    ST32(s2+28, FBITS(f6));
    ST32(s2+32, FBITS(f7));
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    v0 = LD32(v1-12);
    ST32(s1+552, FBITS(f0));
    v0 = s1 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089AA1A8; }
    goto L_089AA480;
L_089AA480:;
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s3 = s0 + 76;
    if (cnd_) { goto L_089AA4B4; }
    goto L_089AA48C;
L_089AA48C:;
    v0 = D_08B285AC - (-31316);
    s4 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s4;
    a0 = s3 + 0;
    if (cnd_) { goto L_089AA4B8; }
    goto L_089AA4A0;
L_089AA4A0:;
    v0 = LD32(s3+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEEA64 - (-5532);
    if (cnd_) { goto L_089AA630; }
    goto L_089AA4B0;
L_089AA4B0:;
    ST32(s0+220, s4);
    goto L_089AA4B4;
L_089AA4B4:;
    a0 = s3 + 0;
    goto L_089AA4B8;
L_089AA4B8:;
    a1 = sp + 0;
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA4C0;
L_089AA4C0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = s1 + 760;
    if (cnd_) { goto L_089AA1A8; }
    goto L_089AA4CC;
L_089AA4CC:;
    v1 = LD32(s1+732);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+760));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    cnd_ = (s32)v1 <= 0;
    ST32(sp+20, FBITS(f1));
    if (cnd_) { goto L_089AA500; }
    goto L_089AA4EC;
L_089AA4EC:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 != 0;
    v0 = 3;
    if (cnd_) { goto L_089AA620; }
    goto L_089AA4F8;
L_089AA4F8:;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s1+552); goto L_089AA550; }
    goto L_089AA500;
L_089AA500:;
    v0 = LD32(s1+88);
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(v0+72));
    v1 = v0 + 72;
    f4 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+24));
    f2 = f2 + f1;
    a0 = LD32(s1+40);
    f4 = f4 + f0;
    ST32(sp+48, FBITS(f3));
    a1 = sp + 48;
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f4));
    goto L_089AA540;
L_089AA540:;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA548;
L_089AA548:;
    goto L_089AA1A8;
L_089AA550:;
    v0 = LD32(s2+4);
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s2+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    v1 = LD32(s2+12);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s2+16);
    a0 = LD32(s2+32);
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s2+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(s2+24);
    v1 = LD32(s2+28);
    a1 = s1 + 540;
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v0);}
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(s1+40);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a2 = LD32(a1+8);
    v0 = LD32(s1+540);
    v1 = LD32(a1+4);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v0);}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a2);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    a1 = sp + 32;
    {v0=FBITS(v[17]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_089AA540;
L_089AA620:;
    a1 = LD32(s1+88);
    a0 = LD32(s1+40);
    a1 = a1 + 72;
    goto L_089AA540;
L_089AA630:;
    f12 = BITSF(LD32(v0-5532));
    a0 = s3 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA640;
L_089AA640:;
    ST32(s0+220, s4);
    goto L_089AA4B4;
L_089AA648:;
    a0 = s1 + 0;
    func_089AFB3C(a0);
    goto L_089AA650;
L_089AA650:;
    goto L_089AA184;
L_089AA658:;
    a0 = s1 + 0;
    func_089C852C(a0);
    goto L_089AA660;
L_089AA660:;
    goto L_089AA18C;
L_089AA668:;
    a0 = s1 + 0;
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA678;
L_089AA678:;
    a0 = LD32(s1+40);
    a1 = sp + 0;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA684;
L_089AA684:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA694;
L_089AA694:;
    a0 = LD32(s1+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA6A0;
L_089AA6A0:;
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA6B0;
L_089AA6B0:;
    a0 = LD32(s1+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA6BC;
L_089AA6BC:;
    goto L_089AA140;
}

/* 089AA6C4 */
rv_t func_089AA6C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AA6C4:;
    sp = sp - 16;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AA788; }
    goto L_089AA6E0;
L_089AA6E0:;
    a1 = LD32(a0+104);
    cnd_ = a1 != 0;
    v1 = LD32(a0);
    if (cnd_) { goto L_089AA75C; }
    goto L_089AA6EC;
L_089AA6EC:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = 32;
    if (cnd_) { goto L_089AA720; }
    goto L_089AA70C;
L_089AA70C:;
    goto L_089AA710;
L_089AA710:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089AA720:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA728;
L_089AA728:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A5DDC8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA738;
L_089AA738:;
    a0 = s1 + 0;
    cnd_ = s1 == 0;
    ST32(s0+104, s1);
    if (cnd_) { goto L_089AA70C; }
    goto L_089AA744;
L_089AA744:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    goto L_089AA74C;
L_089AA74C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA754;
L_089AA754:;
    goto L_089AA710;
L_089AA75C:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = a1 + 0;
    if (cnd_) { goto L_089AA70C; }
    goto L_089AA77C;
L_089AA77C:;
    v1 = LD32(a1);
    goto L_089AA780;
L_089AA780:;
    v0 = LD32(v1+12);
    goto L_089AA74C;
L_089AA788:;
    v0 = LD32(a0+104);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089AA70C; }
    goto L_089AA794;
L_089AA794:;
    v1 = LD32(v0);
    goto L_089AA780;
}

/* 089AA79C */
rv_t func_089AA79C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089AA79C:;
    sp = sp - 32;
    v0 = 0x8057;
    s1 = a0 + 540;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AA7DC; }
    goto L_089AA7C0;
L_089AA7C0:;
    { rv_t r_ = func_089C7A00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA7C8;
L_089AA7C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089AA7DC:;
    ST32(s1+4, 0);
    a1 = sp + 0;
    ST32(s1+8, 0);
    ST32(a0+540, 0);
    a0 = LD32(a0+40);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA800;
L_089AA800:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA814;
L_089AA814:;
    v1 = LD32(s0+856);
    a2 = 0 + 0;
    a0 = 3;
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+856, v1);
    a1 = 181;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AA830;
L_089AA830:;
    f12 = BITSF(0);
    a2 = 0 + 0;
    a3 = 1;
    a0 = 3;
    cnd_ = v0 == 0;
    a1 = 181;
    if (cnd_) { goto L_089AA874; }
    goto L_089AA848;
L_089AA848:;
    ST32(s1+8, 0);
    goto L_089AA84C;
L_089AA84C:;
    a1 = sp + 0;
    ST32(s1+4, 0);
    ST32(s0+540, 0);
    ST32(sp+4, 0);
    ST32(sp, 0);
    ST32(sp+8, 0);
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA86C;
L_089AA86C:;
    v0 = 1;
    goto L_089AA7C8;
L_089AA874:;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AA87C;
L_089AA87C:;
    ST32(s1+8, 0);
    goto L_089AA84C;
}

/* 089AA884 */
void func_089AA884(u32 a0)
{
    u32 v0 = 0, a1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089AA884:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+496));
    sp = sp - 80;
    v0 = D_08B285A0 - (-31328);
    fcc = FCMP(f0, f1, 12);
    f4 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+236));
    f5 = BITSF(LD32(a0+240));
    cnd_ = !fcc;
    f2 = BITSF(LD32(a0+244));
    if (cnd_) { goto L_089AA9CC; }
    goto L_089AA8B0;
L_089AA8B0:;
    f3 = f0 * f4;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089AA8C8; }
    goto L_089AA8C4;
L_089AA8C4:;
    f0 = f3;
    goto L_089AA8C8;
L_089AA8C8:;
    f0 = f1 - f0;
    goto L_089AA8CC;
L_089AA8CC:;
    ST32(a0+496, FBITS(f0));
    f0 = BITSF(LD32(a0+480));
    f1 = BITSF(LD32(a0+496));
    f0 = f0 * f5;
    f0 = f0 * f4;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(a0+496, FBITS(f1));
    if (cnd_) { goto L_089AA8F8; }
    goto L_089AA8F4;
L_089AA8F4:;
    ST32(a0+496, FBITS(f2));
    goto L_089AA8F8;
L_089AA8F8:;
    f1 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(LD32(a0+496));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = f0 * f4;
    if (cnd_) { goto L_089AA91C; }
    goto L_089AA910;
L_089AA910:;
    ST32(a0+496, FBITS(f1));
    f0 = f1;
    f0 = f0 * f4;
    goto L_089AA91C;
L_089AA91C:;
    a1 = sp + 16;
    ST32(sp+4, 0);
    ST32(sp, FBITS(f0));
    ST32(sp+8, 0);
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
    func_089C884C(a0, a1);
    goto L_089AA9C0;
L_089AA9C0:;
    sp = sp + 80;
    return;
L_089AA9CC:;
    f3 = f0 * f4;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089AA9E4; }
    goto L_089AA9E4;
L_089AA9E4:;
    f0 = f1 + f0;
    goto L_089AA8CC;
}

/* 089AA9EC */
void func_089AA9EC(u32 a0)
{
    u32 v0 = 0, a1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089AA9EC:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+500));
    sp = sp - 80;
    v0 = D_08B285A0 - (-31328);
    fcc = FCMP(f0, f1, 12);
    f4 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+248));
    f5 = BITSF(LD32(a0+252));
    cnd_ = !fcc;
    f2 = BITSF(LD32(a0+256));
    if (cnd_) { goto L_089AAB34; }
    goto L_089AAA18;
L_089AAA18:;
    f3 = f0 * f4;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089AAA30; }
    goto L_089AAA2C;
L_089AAA2C:;
    f0 = f3;
    goto L_089AAA30;
L_089AAA30:;
    f0 = f1 - f0;
    goto L_089AAA34;
L_089AAA34:;
    ST32(a0+500, FBITS(f0));
    f0 = BITSF(LD32(a0+484));
    f1 = BITSF(LD32(a0+500));
    f0 = f0 * f5;
    f0 = f0 * f4;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(a0+500, FBITS(f1));
    if (cnd_) { goto L_089AAA60; }
    goto L_089AAA5C;
L_089AAA5C:;
    ST32(a0+500, FBITS(f2));
    goto L_089AAA60;
L_089AAA60:;
    f1 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(LD32(a0+500));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = f0 * f4;
    if (cnd_) { goto L_089AAA84; }
    goto L_089AAA78;
L_089AAA78:;
    ST32(a0+500, FBITS(f1));
    f0 = f1;
    f0 = f0 * f4;
    goto L_089AAA84;
L_089AAA84:;
    a1 = sp + 16;
    ST32(sp, 0);
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, 0);
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
    func_089C884C(a0, a1);
    goto L_089AAB28;
L_089AAB28:;
    sp = sp + 80;
    return;
L_089AAB34:;
    f3 = f0 * f4;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089AAB4C; }
    goto L_089AAB4C;
L_089AAB4C:;
    f0 = f1 + f0;
    goto L_089AAA34;
}

/* 089AAB54 */
void func_089AAB54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089AAB54:;
    sp = sp - 112;
    f0 = BITSF(0);
    s4 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+504));
    f3 = BITSF(LD32(a0+260));
    f4 = BITSF(LD32(a0+264));
    fcc = FCMP(f0, f1, 12);
    f20 = BITSF(LD32(s4-31328));
    cnd_ = !fcc;
    f2 = BITSF(LD32(a0+268));
    if (cnd_) { goto L_089AB3D8; }
    goto L_089AABA8;
L_089AABA8:;
    f3 = f3 * f20;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089AABC0; }
    goto L_089AABBC;
L_089AABBC:;
    f0 = f3;
    goto L_089AABC0;
L_089AABC0:;
    f0 = f1 - f0;
    goto L_089AABC4;
L_089AABC4:;
    ST32(s0+504, FBITS(f0));
    f0 = BITSF(LD32(s0+488));
    f1 = BITSF(LD32(s0+504));
    f0 = f0 * f4;
    f0 = f0 * f20;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(s0+504, FBITS(f1));
    if (cnd_) { goto L_089AABF0; }
    goto L_089AABEC;
L_089AABEC:;
    ST32(s0+504, FBITS(f2));
    goto L_089AABF0;
L_089AABF0:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f2 = BITSF(LD32(s0+504));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2 * f20; goto L_089AAC14; }
    goto L_089AAC08;
L_089AAC08:;
    ST32(s0+504, FBITS(f0));
    f2 = f0;
    f0 = f2 * f20;
    goto L_089AAC14;
L_089AAC14:;
    f1 = BITSF(LD32(s0+512));
    v0 = LD32(s0+852);
    f1 = f1 + f0;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST32(s0+512, FBITS(f1));
    if (cnd_) { goto L_089AB3B8; }
    goto L_089AAC2C;
L_089AAC2C:;
    f0 = f2 * f20;
    a1 = sp + 16;
    a0 = s0 + 0;
    ST32(sp, 0);
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, 0);
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
    func_089C884C(a0, a1);
    goto L_089AACD8;
L_089AACD8:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s3 = D_08AEEA68 - (-5528);
    if (cnd_) { goto L_089AACFC; }
    goto L_089AACE8;
L_089AACE8:;
    v0 = LD32(s0+844);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AB37C; }
    goto L_089AACF8;
L_089AACF8:;
    s3 = D_08AEEA68 - (-5528);
    goto L_089AACFC;
L_089AACFC:;
    s2 = D_08AEEA6C - (-5524);
    f20 = BITSF(LD32(s2-5524));
    f22 = BITSF(LD32(s3-5528));
    {v[112]=BITSF(LD32(s0+(552)));}
    {v[113]=BITSF(LD32(s0+(556)));}
    {v[114]=BITSF(LD32(s0+(560)));}
    {v[116]=BITSF(LD32(s0+(564)));}
    {v[117]=BITSF(LD32(s0+(568)));}
    {v[118]=BITSF(LD32(s0+(572)));}
    {v[120]=BITSF(LD32(s0+(576)));}
    {v[121]=BITSF(LD32(s0+(580)));}
    {v[122]=BITSF(LD32(s0+(584)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAF88; }
    goto L_089AAD44;
L_089AAD44:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAEC8; }
    goto L_089AAD54;
L_089AAD54:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AADEC; }
    goto L_089AAD7C;
L_089AAD7C:;
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
    if (cnd_) { goto L_089AADC8; }
    goto L_089AADB8;
L_089AADB8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AADC8;
L_089AADC8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAE0C; }
    goto L_089AADD8;
L_089AADD8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AAE0C; }
    goto L_089AADE8;
L_089AADE8:;
    goto L_089AADEC;
L_089AADEC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAE0C; }
    goto L_089AAE00;
L_089AAE00:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AAE0C;
L_089AAE0C:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AAE9C; }
    goto L_089AAE2C;
L_089AAE2C:;
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
    if (cnd_) { goto L_089AAE78; }
    goto L_089AAE68;
L_089AAE68:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AAE78;
L_089AAE78:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAEBC; }
    goto L_089AAE88;
L_089AAE88:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AAEBC; }
    goto L_089AAE98;
L_089AAE98:;
    goto L_089AAE9C;
L_089AAE9C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAEBC; }
    goto L_089AAEB0;
L_089AAEB0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AAEBC;
L_089AAEBC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AB040; }
    goto L_089AAEC4;
L_089AAEC4:;
    goto L_089AAEC8;
L_089AAEC8:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AAF5C; }
    goto L_089AAEEC;
L_089AAEEC:;
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
    if (cnd_) { goto L_089AAF38; }
    goto L_089AAF28;
L_089AAF28:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AAF38;
L_089AAF38:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAF7C; }
    goto L_089AAF48;
L_089AAF48:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AAF7C; }
    goto L_089AAF58;
L_089AAF58:;
    goto L_089AAF5C;
L_089AAF5C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AAF7C; }
    goto L_089AAF70;
L_089AAF70:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AAF7C;
L_089AAF7C:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AB040; }
    goto L_089AAF84;
L_089AAF84:;
    goto L_089AAF88;
L_089AAF88:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AB01C; }
    goto L_089AAFAC;
L_089AAFAC:;
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
    if (cnd_) { goto L_089AAFF8; }
    goto L_089AAFE8;
L_089AAFE8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AAFF8;
L_089AAFF8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AB03C; }
    goto L_089AB008;
L_089AB008:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AB03C; }
    goto L_089AB018;
L_089AB018:;
    goto L_089AB01C;
L_089AB01C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AB03C; }
    goto L_089AB030;
L_089AB030:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AB03C;
L_089AB03C:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089AB040;
L_089AB040:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    f12 = BITSF(LD32(sp));
    f21 = f22 - f20;
    s1 = sp + 0;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB064;
L_089AB064:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089AB088; }
    goto L_089AB074;
L_089AB074:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089AB088; }
    goto L_089AB084;
L_089AB084:;
    f1 = f0;
    goto L_089AB088;
L_089AB088:;
    f20 = BITSF(LD32(s2-5524));
    f22 = BITSF(LD32(s3-5528));
    ST32(s1, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+4));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB0A4;
L_089AB0A4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089AB0C8; }
    goto L_089AB0B4;
L_089AB0B4:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089AB0C8; }
    goto L_089AB0C4;
L_089AB0C4:;
    f1 = f0;
    goto L_089AB0C8;
L_089AB0C8:;
    f20 = BITSF(LD32(s2-5524));
    f22 = BITSF(LD32(s3-5528));
    f12 = BITSF(LD32(s1+8));
    ST32(s1+4, FBITS(f1));
    f21 = f22 - f20;
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB0E4;
L_089AB0E4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f2 = f0 + f21;
    if (cnd_) { goto L_089AB108; }
    goto L_089AB0F4;
L_089AB0F4:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f2 = f0 - f21;
    if (cnd_) { goto L_089AB108; }
    goto L_089AB104;
L_089AB104:;
    f2 = f0;
    goto L_089AB108;
L_089AB108:;
    f1 = BITSF(LD32(sp));
    f3 = BITSF(0);
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    ST32(s1+8, FBITS(f2));
    if (cnd_) { goto L_089AB124; }
    goto L_089AB120;
L_089AB120:;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_089AB124;
L_089AB124:;
    v0 = D_08AEEA70 - (-5520);
    f0 = BITSF(LD32(v0-5520));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089AB37C; }
    goto L_089AB13C;
L_089AB13C:;
    v0 = D_08AEEA74 - (-5516);
    f0 = BITSF(LD32(v0-5516));
    f23 = f1 - f0;
    fcc = FCMP(f23, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f23 = f3; goto L_089AB158; }
    goto L_089AB158;
L_089AB158:;
    v0 = LD32(s0+844);
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+512, FBITS(f3)); goto L_089AB168; }
    goto L_089AB168;
L_089AB168:;
    f20 = BITSF(LD32(s2-5524));
    f22 = BITSF(LD32(s3-5528));
    f1 = BITSF(LD32(s0+512));
    f0 = BITSF(LD32(sp+8));
    f21 = f22 - f20;
    f12 = BITSF(LD32(sp));
    f0 = f0 - f1;
    s1 = sp + 0;
    f13 = f21;
    ST32(sp+8, FBITS(f0));
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB194;
L_089AB194:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089AB1B8; }
    goto L_089AB1A4;
L_089AB1A4:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089AB1B8; }
    goto L_089AB1B4;
L_089AB1B4:;
    f1 = f0;
    goto L_089AB1B8;
L_089AB1B8:;
    f20 = BITSF(LD32(s2-5524));
    f22 = BITSF(LD32(s3-5528));
    ST32(s1, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+4));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB1D4;
L_089AB1D4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089AB1F8; }
    goto L_089AB1E4;
L_089AB1E4:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089AB1F8; }
    goto L_089AB1F4;
L_089AB1F4:;
    f1 = f0;
    goto L_089AB1F8;
L_089AB1F8:;
    f20 = BITSF(LD32(s2-5524));
    f22 = BITSF(LD32(s3-5528));
    ST32(s1+4, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+8));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB214;
L_089AB214:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089AB238; }
    goto L_089AB224;
L_089AB224:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089AB238; }
    goto L_089AB234;
L_089AB234:;
    f1 = f0;
    goto L_089AB238;
L_089AB238:;
    ST32(s1+8, FBITS(f1));
    v0 = D_08AEEA78 - (-5512);
    f4 = BITSF(0);
    f2 = BITSF(LD32(s4-31328));
    f1 = BITSF(LD32(s0+272));
    f3 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(v0-5512));
    f1 = f1 * f2;
    fcc = FCMP(f4, f3, 12);
    f0 = f0 - f23;
    cnd_ = !fcc;
    f0 = f1 * f0;
    if (cnd_) { goto L_089AB3A8; }
    goto L_089AB268;
L_089AB268:;
    f0 = f3 - f0;
    fcc = FCMP(f0, f4, 14);
    goto L_089AB274;
L_089AB274:;
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f0));
    if (cnd_) { goto L_089AB28C; }
    goto L_089AB27C;
L_089AB27C:;
    v0 = LD32(s0+844);
    ST32(sp+8, FBITS(f4));
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(s0+844, v0);
    goto L_089AB28C;
L_089AB28C:;
    f1 = BITSF(LD32(s0+512));
    f0 = BITSF(LD32(sp+8));
    v0 = s0 + 552;
    f0 = f0 + f1;
    ST32(sp+8, FBITS(f0));
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
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+48));
    ST32(s0+552, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(v0+32, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    ST32(v0+16, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(v0+24, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    goto L_089AB37C;
L_089AB37C:;
    sp = sp + 112;
    return;
L_089AB3A8:;
    f0 = f3 + f0;
    fcc = FCMP(f4, f0, 14);
    goto L_089AB274;
L_089AB3B8:;
    v1 = LD32(s0);
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB3C8;
L_089AB3C8:;
    cnd_ = v0 != 0;
    f2 = BITSF(LD32(s0+504));
    if (cnd_) { goto L_089AAC2C; }
    goto L_089AB3D0;
L_089AB3D0:;
    ST32(s0+512, 0);
    goto L_089AAC2C;
L_089AB3D8:;
    f3 = f3 * f20;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089AB3F0; }
    goto L_089AB3F0;
L_089AB3F0:;
    f0 = f1 + f0;
    goto L_089AABC4;
}

/* 089AB3F8 */
void func_089AB3F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089AB3F8:;
    sp = sp - 128;
    s2 = D_08B285A0 - (-31328);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    s1 = a0 + 540;
    s0 = a0 + 0;
    f3 = BITSF(LD32(a0+276));
    f11 = BITSF(LD32(a0+540));
    f10 = BITSF(LD32(s1+4));
    f9 = BITSF(LD32(s1+8));
    f6 = f11 * f3;
    f7 = f10 * f3;
    f3 = f9 * f3;
    f2 = BITSF(LD32(s2-31328));
    v0 = FBITS(f11);
    {v[4]=BITSF(v0);}
    f8 = f3 * f2;
    f4 = f6 * f2;
    f2 = f7 * f2;
    v0 = FBITS(f10);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f5 = BITSF(v0);
    v0 = FBITS(f9);
    {v[6]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f6));
    fcc = FCMP(f0, f5, 12);
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f8));
    cnd_ = !fcc;
    f20 = BITSF(LD32(a0+492));
    if (cnd_) { goto L_089AB4D0; }
    goto L_089AB4C4;
L_089AB4C4:;
    ST32(sp, FBITS(f11));
    ST32(sp+4, FBITS(f10));
    ST32(sp+8, FBITS(f9));
    goto L_089AB4D0;
L_089AB4D0:;
    f8 = BITSF(LD32(sp+8));
    f0 = BITSF(0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_089AB4F4; }
    goto L_089AB4E8;
L_089AB4E8:;
    ST32(sp+8, FBITS(f0));
    f8 = f0;
    f1 = BITSF(LD32(sp+4));
    goto L_089AB4F4;
L_089AB4F4:;
    f2 = f9 - f8;
    f0 = BITSF(LD32(sp));
    f1 = f10 - f1;
    ST32(s1+8, FBITS(f2));
    f0 = f11 - f0;
    ST32(s1+4, FBITS(f1));
    f11 = f0;
    v0 = LD_U8(s0+469);
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    cnd_ = v0 == 0;
    ST32(s0+540, FBITS(f0));
    if (cnd_) { goto L_089AB5C8; }
    goto L_089AB528;
L_089AB528:;
    a1 = LD32(s0+448);
    v0 = 999;
    cnd_ = a1 == v0;
    a0 = D_08C2A9D8 - (-22056);
    if (cnd_) { goto L_089AB5C8; }
    goto L_089AB538;
L_089AB538:;
    a0 = a0 - 22056;
    a2 = 1;
    v0 = func_08AC4D98(a0, a1, a2);
    goto L_089AB544;
L_089AB544:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AB824; }
    goto L_089AB54C;
L_089AB54C:;
    f11 = BITSF(LD32(s0+540));
    v1 = LD32(s1+8);
    v0 = FBITS(f11);
    {v[0]=BITSF(v0);}
    v0 = LD32(s1+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08AEEA80 - (-5504);
    f4 = BITSF(LD32(v0-5504));
    f5 = BITSF(LD32(s0+472));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    f1 = f5 - f0;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v0 = D_08AEEA7C - (-5508);
    f0 = BITSF(LD32(v0-5508));
    f2 = f2 * f0;
    fcc = FCMP(f4, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f4 = f2; goto L_089AB5B4; }
    goto L_089AB5B4;
L_089AB5B4:;
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    f20 = f4;
    if (cnd_) { goto L_089AB5C8; }
    goto L_089AB5C4;
L_089AB5C4:;
    f20 = BITSF(FBITS(f4) ^ 0x80000000u);
    goto L_089AB5C8;
L_089AB5C8:;
    v1 = LD32(s0+844);
    f21 = BITSF(LD32(s0+280));
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089AB610; }
    goto L_089AB5DC;
L_089AB5DC:;
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    f0 = f20;
    if (cnd_) { goto L_089AB610; }
    goto L_089AB5F0;
L_089AB5F0:;
    f1 = BITSF(LD32(s0+288));
    fcc = FCMP(f20, f1, 14);
    cnd_ = fcc;
    s4 = 1;
    if (cnd_) { goto L_089AB608; }
    goto L_089AB604;
L_089AB604:;
    f0 = f1;
    goto L_089AB608;
L_089AB608:;
    f20 = f0;
    v0 = v1 & 0x4;
    goto L_089AB610;
L_089AB610:;
    cnd_ = v0 != 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089AB62C; }
    goto L_089AB618;
L_089AB618:;
    f0 = BITSF(LD32(s1+8));
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    if (cnd_) { s3 = 1; goto L_089AB62C; }
    goto L_089AB62C;
L_089AB62C:;
    f0 = BITSF(LD32(s0+284));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f3 = f11 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f6 = BITSF(LD32(s2-31328));
    ST32(sp+48, FBITS(f3));
    v0 = v1 & 0x4;
    f3 = f3 * f6;
    f4 = f1 * f6;
    f5 = f2 * f6;
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s0+292));
    if (cnd_) { goto L_089AB688; }
    goto L_089AB684;
L_089AB684:;
    f0 = BITSF(LD32(s0+300));
    goto L_089AB688;
L_089AB688:;
    f0 = f0 * f20;
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    ST32(sp+48, 0);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f0 = f0 * f6;
    f6 = BITSF(LD32(sp+48));
    ST32(sp+48, FBITS(f1));
    f2 = f11 + f1;
    f3 = f0 - f5;
    ST32(s0+508, FBITS(f0));
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1+4));
    ST32(sp+32, FBITS(f2));
    f5 = f1 + f3;
    f0 = f0 + f4;
    ST32(sp+52, FBITS(f4));
    fcc = FCMP(f5, f6, 2);
    ST32(sp+36, FBITS(f0));
    ST32(sp+56, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_089AB6F4; }
    goto L_089AB6DC;
L_089AB6DC:;
    f5 = BITSF(LD32(s0+304));
    fcc = FCMP(f5, f6, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_089AB6F4; }
    goto L_089AB6F0;
L_089AB6F0:;
    ST32(sp+40, FBITS(f6));
    goto L_089AB6F4;
L_089AB6F4:;
    v1 = LD32(s0+852);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    f20 = BITSF(LD32(s0+308));
    if (cnd_) { goto L_089AB7F4; }
    goto L_089AB704;
L_089AB704:;
    v0 = D_08AEEA84 - (-5500);
    f0 = BITSF(LD32(v0-5500));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f20; goto L_089AB71C; }
    goto L_089AB71C;
L_089AB71C:;
    f1 = BITSF(LD32(sp+40));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089AB730; }
    goto L_089AB730;
L_089AB730:;
    ST32(sp+40, FBITS(f0));
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    f20 = BITSF(LD32(s0+304));
    if (cnd_) { goto L_089AB74C; }
    goto L_089AB740;
L_089AB740:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+40));
    if (cnd_) { goto L_089AB76C; }
    goto L_089AB74C;
L_089AB74C:;
    v1 = LD32(s0);
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB75C;
L_089AB75C:;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+40));
    if (cnd_) { goto L_089AB76C; }
    goto L_089AB764;
L_089AB764:;
    v0 = D_08AEEA88 - (-5496);
    f20 = BITSF(LD32(v0-5496));
    goto L_089AB76C;
L_089AB76C:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    f1 = f20;
    if (cnd_) { goto L_089AB780; }
    goto L_089AB77C;
L_089AB77C:;
    f1 = f0;
    goto L_089AB780;
L_089AB780:;
    cnd_ = s4 == 0;
    ST32(sp+40, FBITS(f1));
    if (cnd_) { goto L_089AB798; }
    goto L_089AB788;
L_089AB788:;
    fcc = FCMP(f1, f21, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+40, FBITS(f21)); goto L_089AB798; }
    goto L_089AB798;
L_089AB798:;
    cnd_ = s3 == 0;
    f5 = BITSF(LD32(sp+40));
    if (cnd_) { goto L_089AB7B8; }
    goto L_089AB7A0;
L_089AB7A0:;
    fcc = FCMP(f21, f5, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_089AB7BC; }
    goto L_089AB7B0;
L_089AB7B0:;
    f5 = f21;
    ST32(sp+40, FBITS(f21));
    goto L_089AB7B8;
L_089AB7B8:;
    f0 = BITSF(LD32(sp+32));
    goto L_089AB7BC;
L_089AB7BC:;
    f1 = BITSF(LD32(sp+36));
    ST32(s1+8, FBITS(f5));
    ST32(s0+540, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    sp = sp + 128;
    return;
L_089AB7F4:;
    v1 = LD32(s0);
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB804;
L_089AB804:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AB814; }
    goto L_089AB80C;
L_089AB80C:;
    v1 = LD32(s0+852);
    goto L_089AB704;
L_089AB814:;
    a0 = s0 + 0;
    f0 = func_089C5898(a0, 0, 0, 0);
    goto L_089AB81C;
L_089AB81C:;
    f20 = f0;
    goto L_089AB80C;
L_089AB824:;
    f11 = BITSF(LD32(s0+540));
    goto L_089AB5C8;
}

/* 089AB82C */
rv_t func_089AB82C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[1344] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1344);
L_089AB82C:;
    sp = sp - 1344;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a0 + 552;
    s1 = a0 + 0;
    f0 = BITSF(LD32(a0+552));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f3 = BITSF(LD32(s2+12));
    f4 = BITSF(LD32(s2+16));
    f5 = BITSF(LD32(s2+20));
    f6 = BITSF(LD32(s2+24));
    f7 = BITSF(LD32(s2+28));
    f8 = BITSF(LD32(s2+32));
    ST32(sp, FBITS(f0));
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AB8CC;
L_089AB8CC:;
    {u32 a_=sp+(1232);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1248);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1264);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(1280);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089ABF60; }
    goto L_089AB8E0;
L_089AB8E0:;
    v0 = LD_U8(s1+801);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089ABF64; }
    goto L_089AB8EC;
L_089AB8EC:;
    v1 = LD32(s1+732);
    v0 = 4;
    a0 = s1 + 772;
    cnd_ = v1 == v0;
    s6 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089ABF0C; }
    goto L_089AB900;
L_089AB900:;
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(s1+772));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB928;
L_089AB928:;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s4+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4));
    f4 = f4 - f5;
    f1 = f1 - f3;
    f0 = f0 - f2;
    a0 = sp + 48;
    a1 = sp + 128;
    ST32(sp+132, FBITS(f1));
    ST32(sp+128, FBITS(f0));
    ST32(sp+136, FBITS(f4));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AB964;
L_089AB964:;
    v0 = D_08AEEA8C - (-5492);
    f9 = BITSF(LD32(s1+784));
    f1 = BITSF(LD32(v0-5492));
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[116]=BITSF(LD32(sp+(60)));}
    {v[117]=BITSF(LD32(sp+(64)));}
    {v[118]=BITSF(LD32(sp+(68)));}
    {v[120]=BITSF(LD32(sp+(72)));}
    {v[121]=BITSF(LD32(sp+(76)));}
    {v[122]=BITSF(LD32(sp+(80)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABBF0; }
    goto L_089AB9AC;
L_089AB9AC:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABB30; }
    goto L_089AB9BC;
L_089AB9BC:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ABA54; }
    goto L_089AB9E4;
L_089AB9E4:;
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
    if (cnd_) { goto L_089ABA30; }
    goto L_089ABA20;
L_089ABA20:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ABA30;
L_089ABA30:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABA74; }
    goto L_089ABA40;
L_089ABA40:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ABA74; }
    goto L_089ABA50;
L_089ABA50:;
    goto L_089ABA54;
L_089ABA54:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABA74; }
    goto L_089ABA68;
L_089ABA68:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ABA74;
L_089ABA74:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ABB04; }
    goto L_089ABA94;
L_089ABA94:;
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
    if (cnd_) { goto L_089ABAE0; }
    goto L_089ABAD0;
L_089ABAD0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ABAE0;
L_089ABAE0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABB24; }
    goto L_089ABAF0;
L_089ABAF0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ABB24; }
    goto L_089ABB00;
L_089ABB00:;
    goto L_089ABB04;
L_089ABB04:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABB24; }
    goto L_089ABB18;
L_089ABB18:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ABB24;
L_089ABB24:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089ABCA8; }
    goto L_089ABB2C;
L_089ABB2C:;
    goto L_089ABB30;
L_089ABB30:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ABBC4; }
    goto L_089ABB54;
L_089ABB54:;
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
    if (cnd_) { goto L_089ABBA0; }
    goto L_089ABB90;
L_089ABB90:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ABBA0;
L_089ABBA0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABBE4; }
    goto L_089ABBB0;
L_089ABBB0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ABBE4; }
    goto L_089ABBC0;
L_089ABBC0:;
    goto L_089ABBC4;
L_089ABBC4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABBE4; }
    goto L_089ABBD8;
L_089ABBD8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ABBE4;
L_089ABBE4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089ABCA8; }
    goto L_089ABBEC;
L_089ABBEC:;
    goto L_089ABBF0;
L_089ABBF0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ABC84; }
    goto L_089ABC14;
L_089ABC14:;
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
    if (cnd_) { goto L_089ABC60; }
    goto L_089ABC50;
L_089ABC50:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ABC60;
L_089ABC60:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABCA4; }
    goto L_089ABC70;
L_089ABC70:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ABCA4; }
    goto L_089ABC80;
L_089ABC80:;
    goto L_089ABC84;
L_089ABC84:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ABCA4; }
    goto L_089ABC98;
L_089ABC98:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ABCA4;
L_089ABCA4:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089ABCA8;
L_089ABCA8:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(96),FBITS(v[96]));}
    {ST32(sp+(100),FBITS(v[97]));}
    {ST32(sp+(104),FBITS(v[98]));}
    f5 = BITSF(LD32(sp+96));
    f0 = f9 + f1;
    f6 = BITSF(LD32(s1+792));
    fcc = FCMP(f0, f5, 12);
    ST32(sp+104, FBITS(f6));
    cnd_ = !fcc;
    f3 = f6;
    if (cnd_) { goto L_089ABCE4; }
    goto L_089ABCD4;
L_089ABCD4:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f5 = f5 - f0;
    ST32(sp+96, FBITS(f5));
    goto L_089ABCE4;
L_089ABCE4:;
    f2 = BITSF(LD32(s1+788));
    f8 = BITSF(LD32(sp+100));
    f0 = f2 + f1;
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    f0 = f6 + f1;
    if (cnd_) { goto L_089ABD14; }
    goto L_089ABD00;
L_089ABD00:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f8 = f8 - f0;
    ST32(sp+100, FBITS(f8));
    f0 = f6 + f1;
    goto L_089ABD14;
L_089ABD14:;
    f6 = BITSF(LD32(sp+104));
    fcc = FCMP(f0, f6, 12);
    cnd_ = !fcc;
    f0 = f9 - f1;
    if (cnd_) { goto L_089ABD3C; }
    goto L_089ABD28;
L_089ABD28:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f6 = f6 - f0;
    ST32(sp+104, FBITS(f6));
    f0 = f9 - f1;
    goto L_089ABD3C;
L_089ABD3C:;
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    f0 = f2 - f1;
    if (cnd_) { goto L_089ABD60; }
    goto L_089ABD4C;
L_089ABD4C:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f5 = f5 + f0;
    ST32(sp+96, FBITS(f5));
    f0 = f2 - f1;
    goto L_089ABD60;
L_089ABD60:;
    fcc = FCMP(f8, f0, 12);
    cnd_ = !fcc;
    f0 = f3 - f1;
    if (cnd_) { goto L_089ABD84; }
    goto L_089ABD70;
L_089ABD70:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f8 = f8 + f0;
    ST32(sp+100, FBITS(f8));
    f0 = f3 - f1;
    goto L_089ABD84;
L_089ABD84:;
    fcc = FCMP(f6, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEEA94 - (-5484);
    if (cnd_) { goto L_089ABDA8; }
    goto L_089ABD94;
L_089ABD94:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f6 = f6 + f0;
    ST32(sp+104, FBITS(f6));
    v0 = D_08AEEA94 - (-5484);
    goto L_089ABDA8;
L_089ABDA8:;
    f1 = BITSF(LD32(s1+796));
    f4 = BITSF(LD32(v0-5484));
    v0 = s1 + 784;
    f2 = BITSF(LD32(v0+8));
    f0 = f4 - f1;
    f3 = BITSF(LD32(v0+4));
    f5 = f5 * f1;
    f6 = f6 * f1;
    f9 = f9 * f0;
    f7 = f2 * f0;
    f10 = f3 * f0;
    f1 = f8 * f1;
    f2 = f9 + f5;
    f3 = f7 + f6;
    ST32(sp+160, FBITS(f9));
    f0 = f10 + f1;
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f0));
    ST32(sp+152, FBITS(f3));
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    ST32(sp+180, FBITS(f1));
    ST32(sp+112, v0);
    v0 = LD32(sp+152);
    ST32(sp+116, v1);
    ST32(sp+120, v0);
    ST32(sp+164, FBITS(f10));
    ST32(sp+168, FBITS(f7));
    ST32(sp+176, FBITS(f5));
    ST32(sp+184, FBITS(f6));
    {v[112]=BITSF(LD32(sp+(112)));}
    {v[113]=BITSF(LD32(sp+(116)));}
    {v[114]=BITSF(LD32(sp+(120)));}
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
    {ST32(s3+(0),FBITS(v[96]));}
    {ST32(s3+(4),FBITS(v[97]));}
    {ST32(s3+(8),FBITS(v[98]));}
    {ST32(s3+(12),FBITS(v[100]));}
    {ST32(s3+(16),FBITS(v[101]));}
    {ST32(s3+(20),FBITS(v[102]));}
    {ST32(s3+(24),FBITS(v[104]));}
    {ST32(s3+(28),FBITS(v[105]));}
    {ST32(s3+(32),FBITS(v[106]));}
    f1 = BITSF(LD32(s6-31328));
    f0 = BITSF(LD32(s1+796));
    f0 = f0 + f1;
    fcc = FCMP(f4, f0, 14);
    cnd_ = fcc;
    ST32(s1+796, FBITS(f0));
    if (cnd_) { goto L_089ABED0; }
    goto L_089ABECC;
L_089ABECC:;
    f4 = f0;
    goto L_089ABED0;
L_089ABED0:;
    ST32(s1+796, FBITS(f4));
    goto L_089ABED4;
L_089ABED4:;
    goto L_089ABED8;
L_089ABED8:;
    sp = sp + 1344;
    return (rv_t){ v0, v1, f0 };
L_089ABF0C:;
    v0 = s1 + 760;
    f0 = BITSF(LD32(s6-31328));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s1+760));
    f5 = f5 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(s1+772));
    ST32(sp+136, FBITS(f5));
    f0 = f0 + f4;
    ST32(sp+132, FBITS(f3));
    f2 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    ST32(sp+128, FBITS(f4));
    f2 = f2 + f5;
    f1 = f1 + f3;
    ST32(s1+772, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    goto L_089AB900;
L_089ABF60:;
    v1 = LD32(s1);
    goto L_089ABF64;
L_089ABF64:;
    f22 = BITSF(LD32(s1+312));
    a0 = s1 + 0;
    v0 = LD32(v1+244);
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ABF84;
L_089ABF84:;
    {u32 a_=sp+(1280);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+552);
    v1 = LD32(s2+4);
    {u32 a_=sp+(432);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(464);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(s2+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(416);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = LD32(s2+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(s2+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(448);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(s2+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(s2+28);
    {v[50]=BITSF(a0);}
    a0 = LD32(s2+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(a0);}
    a0 = LD32(s2+32);
    {v[33]=BITSF(v1);}
    ST32(sp+208, 0);
    v1 = 0 + 0;
    {v[34]=BITSF(a0);}
    {v[16]=BITSF(v1);}
    ST32(sp+212, 0);
    {v[17]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = FBITS(f22);
    ST32(sp+216, FBITS(f22));
    {v[18]=BITSF(v1);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {a1=FBITS(v[22]);}
    {t0=FBITS(v[20]);}
    {v1=FBITS(v[21]);}
    ST32(sp+224, t0);
    f5 = BITSF(a1);
    f4 = BITSF(t0);
    ST32(sp+228, v1);
    f3 = BITSF(v1);
    ST32(sp+232, a1);
    ST32(sp+192, t0);
    ST32(sp+196, v1);
    ST32(sp+200, a1);
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = f1 + f4;
    f0 = f0 + f5;
    f2 = f2 + f3;
    v0 = LD_U8(s1+476);
    ST32(sp+128, FBITS(f1));
    ST32(sp+136, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(sp+132, FBITS(f2));
    if (cnd_) { goto L_089AE09C; }
    goto L_089AC070;
L_089AC070:;
    a2 = LD32(s1+448);
    v0 = 999;
    cnd_ = a2 == v0;
    s6 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089AE060; }
    goto L_089AC080;
L_089AC080:;
    f0 = BITSF(LD32(s6-31328));
    f1 = BITSF(LD32(s1+376));
    f2 = BITSF(LD32(s1+728));
    s5 = D_08AEEA94 - (-5484);
    f0 = f0 * f1;
    f1 = BITSF(LD32(s5-5484));
    f2 = f2 + f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    ST32(s1+728, FBITS(f2));
    if (cnd_) { goto L_089AC0B0; }
    goto L_089AC0AC;
L_089AC0AC:;
    f1 = f2;
    goto L_089AC0B0;
L_089AC0B0:;
    ST32(s1+728, FBITS(f1));
    goto L_089AC0B4;
L_089AC0B4:;
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2C200 - (-15872);
    if (cnd_) { goto L_089AC990; }
    goto L_089AC0C0;
L_089AC0C0:;
    v1 = a0 - 15872;
    v0 = LD32(v1+4);
    a1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089AC114; }
    goto L_089AC0E8;
L_089AC0E8:;
    a0 = LD32(a1);
    goto L_089AC0EC;
L_089AC0EC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089AE040; }
    goto L_089AC104;
L_089AC104:;
    a1 = LD32(a1+4);
    goto L_089AC108;
L_089AC108:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089AC0EC; }
    goto L_089AC110;
L_089AC110:;
    v1 = 0 + 0;
    goto L_089AC114;
L_089AC114:;
    cnd_ = v1 == 0;
    if (cnd_) { f5 = BITSF(LD32(s1+480)); goto L_089AC994; }
    goto L_089AC11C;
L_089AC11C:;
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
    if (cnd_) { goto L_089AC39C; }
    goto L_089AC158;
L_089AC158:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC2DC; }
    goto L_089AC168;
L_089AC168:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC200; }
    goto L_089AC190;
L_089AC190:;
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
    if (cnd_) { goto L_089AC1DC; }
    goto L_089AC1CC;
L_089AC1CC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC1DC;
L_089AC1DC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC220; }
    goto L_089AC1EC;
L_089AC1EC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC220; }
    goto L_089AC1FC;
L_089AC1FC:;
    goto L_089AC200;
L_089AC200:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC220; }
    goto L_089AC214;
L_089AC214:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC220;
L_089AC220:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC2B0; }
    goto L_089AC240;
L_089AC240:;
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
    if (cnd_) { goto L_089AC28C; }
    goto L_089AC27C;
L_089AC27C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC28C;
L_089AC28C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC2D0; }
    goto L_089AC29C;
L_089AC29C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC2D0; }
    goto L_089AC2AC;
L_089AC2AC:;
    goto L_089AC2B0;
L_089AC2B0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC2D0; }
    goto L_089AC2C4;
L_089AC2C4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC2D0;
L_089AC2D0:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AC454; }
    goto L_089AC2D8;
L_089AC2D8:;
    goto L_089AC2DC;
L_089AC2DC:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC370; }
    goto L_089AC300;
L_089AC300:;
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
    if (cnd_) { goto L_089AC34C; }
    goto L_089AC33C;
L_089AC33C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC34C;
L_089AC34C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC390; }
    goto L_089AC35C;
L_089AC35C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC390; }
    goto L_089AC36C;
L_089AC36C:;
    goto L_089AC370;
L_089AC370:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC390; }
    goto L_089AC384;
L_089AC384:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC390;
L_089AC390:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AC454; }
    goto L_089AC398;
L_089AC398:;
    goto L_089AC39C;
L_089AC39C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC430; }
    goto L_089AC3C0;
L_089AC3C0:;
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
    if (cnd_) { goto L_089AC40C; }
    goto L_089AC3FC;
L_089AC3FC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC40C;
L_089AC40C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC450; }
    goto L_089AC41C;
L_089AC41C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC450; }
    goto L_089AC42C;
L_089AC42C:;
    goto L_089AC430;
L_089AC430:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC450; }
    goto L_089AC444;
L_089AC444:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC450;
L_089AC450:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089AC454;
L_089AC454:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(176),FBITS(v[96]));}
    {ST32(sp+(180),FBITS(v[97]));}
    {ST32(sp+(184),FBITS(v[98]));}
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = BITSF(LD32(sp+184));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AC480;
L_089AC480:;
    f0 = BITSF(LD32(s1+728));
    f1 = BITSF(LD32(s5-5484));
    f6 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f1 = f1 - f0;
    f6 = f6 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = BITSF(LD32(sp+136));
    f2 = BITSF(LD32(sp+128));
    f0 = BITSF(LD32(sp+132));
    f5 = f5 * f1;
    f2 = f2 * f1;
    f0 = f0 * f1;
    v1 = LD32(s1);
    f8 = f6 + f5;
    f1 = f3 + f2;
    f7 = f4 + f0;
    ST32(sp+216, FBITS(f6));
    ST32(sp+132, FBITS(f7));
    ST32(sp+136, FBITS(f8));
    ST32(sp+200, FBITS(f5));
    ST32(sp+228, FBITS(f7));
    ST32(sp+232, FBITS(f8));
    ST32(sp+208, FBITS(f3));
    ST32(sp+128, FBITS(f1));
    ST32(sp+212, FBITS(f4));
    ST32(sp+192, FBITS(f2));
    ST32(sp+196, FBITS(f0));
    ST32(sp+224, FBITS(f1));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AC508;
L_089AC508:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+128));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f0 = f0 - f2;
    f1 = BITSF(LD32(sp+132));
    f2 = BITSF(LD32(sp+136));
    {u32 a_=sp+(480);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 - f3;
    f2 = f2 - f4;
    a1 = FBITS(f0);
    {v[0]=BITSF(a1);}
    t0 = FBITS(f1);
    v0 = FBITS(f2);
    {v[1]=BITSF(t0);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    ST32(sp+224, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+228, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+232, FBITS(f2));
    {a1=FBITS(v[0]);}
    f22 = BITSF(a1);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AC578;
L_089AC578:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(sp+128));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    a1 = sp + 224;
    f1 = f1 - f3;
    f0 = f0 - f4;
    a0 = sp + 0;
    ST32(sp+224, FBITS(f2));
    ST32(sp+228, FBITS(f1));
    ST32(sp+232, FBITS(f0));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AC5B4;
L_089AC5B4:;
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
    if (cnd_) { goto L_089AC834; }
    goto L_089AC5F0;
L_089AC5F0:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC774; }
    goto L_089AC600;
L_089AC600:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC698; }
    goto L_089AC628;
L_089AC628:;
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
    if (cnd_) { goto L_089AC674; }
    goto L_089AC664;
L_089AC664:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC674;
L_089AC674:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC6B8; }
    goto L_089AC684;
L_089AC684:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC6B8; }
    goto L_089AC694;
L_089AC694:;
    goto L_089AC698;
L_089AC698:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC6B8; }
    goto L_089AC6AC;
L_089AC6AC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC6B8;
L_089AC6B8:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC748; }
    goto L_089AC6D8;
L_089AC6D8:;
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
    if (cnd_) { goto L_089AC724; }
    goto L_089AC714;
L_089AC714:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC724;
L_089AC724:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC768; }
    goto L_089AC734;
L_089AC734:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC768; }
    goto L_089AC744;
L_089AC744:;
    goto L_089AC748;
L_089AC748:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC768; }
    goto L_089AC75C;
L_089AC75C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC768;
L_089AC768:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AC8EC; }
    goto L_089AC770;
L_089AC770:;
    goto L_089AC774;
L_089AC774:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC808; }
    goto L_089AC798;
L_089AC798:;
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
    if (cnd_) { goto L_089AC7E4; }
    goto L_089AC7D4;
L_089AC7D4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC7E4;
L_089AC7E4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC828; }
    goto L_089AC7F4;
L_089AC7F4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC828; }
    goto L_089AC804;
L_089AC804:;
    goto L_089AC808;
L_089AC808:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC828; }
    goto L_089AC81C;
L_089AC81C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC828;
L_089AC828:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AC8EC; }
    goto L_089AC830;
L_089AC830:;
    goto L_089AC834;
L_089AC834:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AC8C8; }
    goto L_089AC858;
L_089AC858:;
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
    if (cnd_) { goto L_089AC8A4; }
    goto L_089AC894;
L_089AC894:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AC8A4;
L_089AC8A4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC8E8; }
    goto L_089AC8B4;
L_089AC8B4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AC8E8; }
    goto L_089AC8C4;
L_089AC8C4:;
    goto L_089AC8C8;
L_089AC8C8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AC8E8; }
    goto L_089AC8DC;
L_089AC8DC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AC8E8;
L_089AC8E8:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089AC8EC;
L_089AC8EC:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(176),FBITS(v[96]));}
    {ST32(sp+(180),FBITS(v[97]));}
    {ST32(sp+(184),FBITS(v[98]));}
    ST32(sp+184, FBITS(f20));
    {v[112]=BITSF(LD32(sp+(176)));}
    {v[113]=BITSF(LD32(sp+(180)));}
    {v[114]=BITSF(LD32(sp+(184)));}
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
    goto L_089AC990;
L_089AC990:;
    f5 = BITSF(LD32(s1+480));
    goto L_089AC994;
L_089AC994:;
    f3 = BITSF(0);
    fcc = FCMP(f5, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(s1+484)); goto L_089AC9EC; }
    goto L_089AC9A8;
L_089AC9A8:;
    f2 = BITSF(LD32(s1+592));
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s6-31328));
    if (cnd_) { goto L_089AE024; }
    goto L_089AC9BC;
L_089AC9BC:;
    f1 = BITSF(LD32(s1+316));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f3, 14);
    goto L_089AC9D4;
L_089AC9D4:;
    cnd_ = fcc;
    ST32(s1+592, FBITS(f0));
    if (cnd_) { goto L_089AC9E0; }
    goto L_089AC9DC;
L_089AC9DC:;
    f3 = f0;
    goto L_089AC9E0;
L_089AC9E0:;
    ST32(s1+592, FBITS(f3));
    f4 = BITSF(LD32(s1+484));
    f3 = BITSF(0);
    goto L_089AC9EC;
L_089AC9EC:;
    fcc = FCMP(f4, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s1+324)); goto L_089ACA3C; }
    goto L_089AC9FC;
L_089AC9FC:;
    f2 = BITSF(LD32(s1+596));
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s6-31328));
    if (cnd_) { goto L_089AE008; }
    goto L_089ACA10;
L_089ACA10:;
    f1 = BITSF(LD32(s1+320));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f3, 14);
    goto L_089ACA28;
L_089ACA28:;
    cnd_ = fcc;
    ST32(s1+596, FBITS(f0));
    if (cnd_) { goto L_089ACA34; }
    goto L_089ACA30;
L_089ACA30:;
    f3 = f0;
    goto L_089ACA34;
L_089ACA34:;
    ST32(s1+596, FBITS(f3));
    f0 = BITSF(LD32(s1+324));
    goto L_089ACA3C;
L_089ACA3C:;
    f2 = BITSF(LD32(s6-31328));
    f1 = BITSF(LD32(s1+328));
    f0 = f5 * f0;
    f3 = BITSF(LD32(s1+592));
    f1 = f4 * f1;
    f5 = BITSF(LD32(s1+336));
    f0 = f0 * f2;
    f4 = BITSF(LD32(s1+596));
    f1 = f1 * f2;
    f6 = BITSF(LD32(s1+340));
    f0 = f3 - f0;
    f2 = BITSF(LD32(s1+332));
    f1 = f4 - f1;
    fcc = FCMP(f5, f0, 14);
    ST32(s1+592, FBITS(f0));
    cnd_ = fcc;
    ST32(s1+596, FBITS(f1));
    if (cnd_) { goto L_089ACA84; }
    goto L_089ACA80;
L_089ACA80:;
    f5 = f0;
    goto L_089ACA84;
L_089ACA84:;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    fcc = FCMP(f5, f2, 14);
    cnd_ = fcc;
    ST32(s1+592, FBITS(f5));
    if (cnd_) { goto L_089ACA9C; }
    goto L_089ACA98;
L_089ACA98:;
    f2 = f5;
    goto L_089ACA9C;
L_089ACA9C:;
    fcc = FCMP(f6, f1, 14);
    f0 = f6;
    cnd_ = fcc;
    ST32(s1+592, FBITS(f2));
    if (cnd_) { goto L_089ACAB0; }
    goto L_089ACAAC;
L_089ACAAC:;
    f0 = f1;
    goto L_089ACAB0;
L_089ACAB0:;
    f1 = BITSF(FBITS(f6) ^ 0x80000000u);
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s1+596, FBITS(f0));
    if (cnd_) { goto L_089ACAC8; }
    goto L_089ACAC4;
L_089ACAC4:;
    f1 = f0;
    goto L_089ACAC8;
L_089ACAC8:;
    f3 = BITSF(LD32(s1+728));
    f21 = BITSF(LD32(s5-5484));
    v0 = LD32(s1+856);
    ST32(sp+184, 0);
    f0 = f21 - f3;
    v0 = (v0 >> 3) & 0x1;
    ST32(s1+596, FBITS(f1));
    f1 = f1 * f0;
    f0 = f2 * f0;
    f20 = BITSF(LD32(s1+348));
    ST32(sp+180, FBITS(f1));
    ST32(sp+176, FBITS(f0));
    {v[112]=BITSF(LD32(sp+(176)));}
    {v[113]=BITSF(LD32(sp+(180)));}
    {v[114]=BITSF(LD32(sp+(184)));}
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
    if (cnd_) { f20 = f20 + f20; goto L_089ACB90; }
    goto L_089ACB90;
L_089ACB90:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089ADFD4; }
    goto L_089ACB9C;
L_089ACB9C:;
    f0 = BITSF(LD32(s1+836));
    f2 = BITSF(LD32(s1+372));
    f1 = BITSF(LD32(s5-5484));
    f0 = f0 * f2;
    f1 = f1 - f3;
    f0 = f0 * f1;
    f0 = f20 + f0;
    goto L_089ACBB8;
L_089ACBB8:;
    {u32 a_=sp+(560);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    f17 = BITSF(FBITS(f22) ^ 0x80000000u);
    f5 = BITSF(LD32(s1+356));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {u32 a_=sp+(816);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {u32 a_=sp+(944);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    a3 = LD32(sp+48);
    a1 = LD32(sp+52);
    a2 = LD32(sp+56);
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    {u32 a_=sp+(832);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {v[96]=BITSF(a3);}
    {v[97]=BITSF(a1);}
    {v[98]=BITSF(a2);}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    f6 = f17 - f0;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    t0 = LD32(sp+12);
    t1 = LD32(sp+16);
    t2 = LD32(sp+20);
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    {u32 a_=sp+(720);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(960);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {v[104]=BITSF(t0);}
    {v[100]=BITSF(v0);}
    {v[105]=BITSF(t1);}
    {v[101]=BITSF(v1);}
    {v[106]=BITSF(t2);}
    {v[102]=BITSF(a0);}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(768);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    t6 = LD32(sp+60);
    t3 = LD32(sp+64);
    t4 = LD32(sp+68);
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {u32 a_=sp+(592);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {v[108]=BITSF(t6);}
    {v[109]=BITSF(t3);}
    {v[110]=BITSF(t4);}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(896);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    t5 = LD32(sp+80);
    {u32 a_=sp+(576);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(a3);}
    {v[64]=BITSF(v0);}
    a3 = LD32(sp+76);
    {v[69]=BITSF(a1);}
    {v[65]=BITSF(v1);}
    a1 = LD32(sp+28);
    v1 = LD32(sp+72);
    {v[70]=BITSF(a2);}
    {v[66]=BITSF(a0);}
    a2 = LD32(sp+32);
    a0 = LD32(sp+24);
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(608);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {v[100]=BITSF(v1);}
    {u32 a_=sp+(736);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {u32 a_=sp+(848);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {v[101]=BITSF(a3);}
    {v[102]=BITSF(t5);}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(512);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {u32 a_=sp+(656);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = 0 + 0;
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[108]=BITSF(t0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    t0 = FBITS(f5);
    {u32 a_=sp+(496);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[36]=BITSF(v0);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[37]=BITSF(t0);}
    t0 = FBITS(f6);
    {v[38]=BITSF(t0);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {t0=FBITS(v[34]);}
    f4 = BITSF(t0);
    {t0=FBITS(v[32]);}
    f1 = BITSF(t0);
    f2 = BITSF(t0);
    {u32 a_=sp+(624);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    t0 = FBITS(f1);
    {v[0]=BITSF(t0);}
    {t0=FBITS(v[33]);}
    f0 = BITSF(t0);
    {v[96]=BITSF(a0);}
    {v[97]=BITSF(a1);}
    {v[98]=BITSF(a2);}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(672);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    f3 = BITSF(t0);
    f22 = BITSF(0);
    t0 = FBITS(f0);
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {v[1]=BITSF(t0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    t0 = FBITS(f4);
    {v[2]=BITSF(t0);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {t0=FBITS(v[6]);}
    f16 = BITSF(t0);
    {t0=FBITS(v[4]);}
    f1 = BITSF(t0);
    ST32(sp+256, FBITS(f2));
    {t0=FBITS(v[5]);}
    {u32 a_=sp+(864);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    ST32(sp+260, FBITS(f3));
    {v[72]=BITSF(v1);}
    {v[104]=BITSF(t6);}
    ST32(sp+264, FBITS(f4));
    {v[105]=BITSF(t3);}
    {v[109]=BITSF(t1);}
    ST32(sp+244, FBITS(f5));
    {v[106]=BITSF(t4);}
    {v[110]=BITSF(t2);}
    ST32(sp+248, FBITS(f6));
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    ST32(sp+192, FBITS(f2));
    {v[73]=BITSF(a3);}
    {v[74]=BITSF(t5);}
    ST32(sp+196, FBITS(f3));
    {u32 a_=sp+(800);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    ST32(sp+200, FBITS(f4));
    f14 = BITSF(t0);
    {u32 a_=sp+(752);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+256, FBITS(f1));
    {v[68]=BITSF(v0);}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(sp+260, t0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+264, FBITS(f16));
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(992);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    ST32(sp+208, FBITS(f1));
    {v[64]=BITSF(a0);}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    ST32(sp+212, t0);
    {v[65]=BITSF(a1);}
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+216, FBITS(f16));
    {v[66]=BITSF(a2);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    ST32(sp+240, FBITS(f22));
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    f0 = BITSF(LD32(s1+344));
    f10 = BITSF(LD32(s1+352));
    f9 = BITSF(LD32(sp+128));
    f17 = f17 - f0;
    f10 = BITSF(FBITS(f10) ^ 0x80000000u);
    f11 = f9 + f1;
    f6 = BITSF(LD32(sp+132));
    v1 = FBITS(f17);
    v0 = FBITS(f10);
    {v[69]=BITSF(v0);}
    {v[70]=BITSF(v1);}
    {float t0=v[68];float t1=v[69];float t2=v[70];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v1=FBITS(v[32]);}
    {t0=FBITS(v[33]);}
    f1 = BITSF(v1);
    f0 = BITSF(t0);
    {v0=FBITS(v[34]);}
    f8 = BITSF(v0);
    f7 = BITSF(LD32(sp+136));
    f5 = BITSF(v1);
    {u32 a_=sp+(928);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    a1 = FBITS(f1);
    v0 = FBITS(f0);
    v1 = FBITS(f8);
    {u32 a_=sp+(880);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a1);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v1=FBITS(v[4]);}
    {a1=FBITS(v[5]);}
    {v0=FBITS(v[6]);}
    f0 = BITSF(a1);
    f15 = BITSF(v0);
    f1 = BITSF(v1);
    f12 = f6 + f0;
    f13 = f7 + f15;
    f9 = f9 + f1;
    f6 = f6 + f14;
    f7 = f7 + f16;
    f4 = BITSF(t0);
    f18 = f11 - f9;
    f14 = f6 - f12;
    f16 = f7 - f13;
    f3 = BITSF(v1);
    a0 = FBITS(f18);
    {u32 a_=sp+(1008);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f14);
    {v[0]=BITSF(a0);}
    v1 = FBITS(f16);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {t0=FBITS(v[0]);}
    f0 = BITSF(t0);
    f2 = BITSF(a1);
    ST32(sp+272, FBITS(f5));
    fcc = FCMP(f22, f0, 12);
    a1 = D_08B1BC58 - (-17320);
    ST32(sp+224, FBITS(f11));
    ST32(sp+228, FBITS(f6));
    ST32(sp+232, FBITS(f7));
    ST32(sp+192, FBITS(f22));
    ST32(sp+196, FBITS(f10));
    ST32(sp+200, FBITS(f17));
    ST32(sp+208, FBITS(f5));
    ST32(sp+212, FBITS(f4));
    ST32(sp+216, FBITS(f8));
    ST32(sp+240, FBITS(f3));
    ST32(sp+244, FBITS(f2));
    ST32(sp+248, FBITS(f15));
    ST32(sp+256, FBITS(f9));
    ST32(sp+260, FBITS(f12));
    ST32(sp+264, FBITS(f13));
    ST32(sp+272, FBITS(f18));
    ST32(sp+276, FBITS(f14));
    ST32(sp+280, FBITS(f16));
    cnd_ = fcc;
    f21 = BITSF(LD32(s5-5484));
    if (cnd_) { goto L_089ADE98; }
    goto L_089ACF8C;
L_089ACF8C:;
    f0 = BITSF(LD32(a1-17320));
    goto L_089ACF90;
L_089ACF90:;
    f14 = BITSF(LD32(s5-5484));
    f3 = BITSF(LD32(sp+224));
    f4 = BITSF(LD32(sp+228));
    f2 = BITSF(LD32(sp+232));
    f5 = f14 - f0;
    f6 = BITSF(LD32(sp+264));
    f1 = BITSF(LD32(sp+256));
    f4 = f4 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f0 = BITSF(LD32(sp+260));
    f6 = f6 * f5;
    f1 = f1 * f5;
    f0 = f0 * f5;
    ST32(sp+208, FBITS(f3));
    f8 = f2 + f6;
    f3 = f3 + f1;
    f7 = f4 + f0;
    ST32(sp+212, FBITS(f4));
    ST32(sp+216, FBITS(f2));
    ST32(sp+192, FBITS(f1));
    ST32(sp+196, FBITS(f0));
    ST32(sp+200, FBITS(f6));
    ST32(sp+240, FBITS(f3));
    ST32(sp+244, FBITS(f7));
    ST32(sp+248, FBITS(f8));
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[116]=BITSF(LD32(sp+(60)));}
    {v[117]=BITSF(LD32(sp+(64)));}
    {v[118]=BITSF(LD32(sp+(68)));}
    {v[120]=BITSF(LD32(sp+(72)));}
    {v[121]=BITSF(LD32(sp+(76)));}
    {v[122]=BITSF(LD32(sp+(80)));}
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
    {ST32(sp+(352),FBITS(v[80]));}
    {ST32(sp+(356),FBITS(v[81]));}
    {ST32(sp+(360),FBITS(v[82]));}
    {ST32(sp+(364),FBITS(v[84]));}
    {ST32(sp+(368),FBITS(v[85]));}
    {ST32(sp+(372),FBITS(v[86]));}
    {ST32(sp+(376),FBITS(v[88]));}
    {ST32(sp+(380),FBITS(v[89]));}
    {ST32(sp+(384),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+352));
    f1 = BITSF(LD32(sp+356));
    f2 = BITSF(LD32(sp+360));
    f4 = BITSF(LD32(sp+364));
    f5 = BITSF(LD32(sp+368));
    f6 = BITSF(LD32(sp+372));
    ST32(s4, FBITS(f3));
    ST32(s4+4, FBITS(f7));
    ST32(s4+8, FBITS(f8));
    ST32(s3, FBITS(f0));
    ST32(s3+4, FBITS(f1));
    ST32(s3+8, FBITS(f2));
    ST32(s3+12, FBITS(f4));
    ST32(s3+16, FBITS(f5));
    f0 = BITSF(LD32(sp+376));
    f1 = BITSF(LD32(sp+380));
    ST32(s3+20, FBITS(f6));
    ST32(s3+24, FBITS(f0));
    f0 = BITSF(LD32(sp+384));
    ST32(s3+28, FBITS(f1));
    ST32(s3+32, FBITS(f0));
    v0 = LD_U8(s1+800);
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s4+8)); goto L_089ADA1C; }
    goto L_089AD0C8;
L_089AD0C8:;
    v0 = LD_U8(s1+801);
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s4+8)); goto L_089ADA1C; }
    goto L_089AD0D4;
L_089AD0D4:;
    f8 = BITSF(LD32(s1+796));
    a0 = s1 + 772;
    f2 = BITSF(LD32(s1+772));
    f0 = f14 - f8;
    f5 = BITSF(LD32(a0+4));
    f6 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(s4));
    f0 = f0 * f0;
    f3 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s4+8));
    v0 = D_08AEEA8C - (-5492);
    f8 = f14 - f0;
    f13 = BITSF(LD32(v0-5492));
    f11 = f14 - f8;
    f1 = f1 * f8;
    f3 = f3 * f8;
    f4 = f4 * f8;
    f2 = f2 * f11;
    f5 = f5 * f11;
    f6 = f6 * f11;
    ST32(sp+192, FBITS(f1));
    f1 = f2 + f1;
    f0 = f5 + f3;
    f7 = f6 + f4;
    ST32(sp+208, FBITS(f2));
    ST32(s4+4, FBITS(f0));
    ST32(s4+8, FBITS(f7));
    ST32(s4, FBITS(f1));
    f12 = BITSF(LD32(s1+784));
    ST32(sp+212, FBITS(f5));
    f2 = f12 + f13;
    ST32(sp+216, FBITS(f6));
    ST32(sp+196, FBITS(f3));
    ST32(sp+200, FBITS(f4));
    ST32(sp+240, FBITS(f1));
    ST32(sp+244, FBITS(f0));
    ST32(sp+248, FBITS(f7));
    {v[112]=BITSF(LD32(s3+(0)));}
    {v[113]=BITSF(LD32(s3+(4)));}
    {v[114]=BITSF(LD32(s3+(8)));}
    {v[116]=BITSF(LD32(s3+(12)));}
    {v[117]=BITSF(LD32(s3+(16)));}
    {v[118]=BITSF(LD32(s3+(20)));}
    {v[120]=BITSF(LD32(s3+(24)));}
    {v[121]=BITSF(LD32(s3+(28)));}
    {v[122]=BITSF(LD32(s3+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD3E8; }
    goto L_089AD1A4;
L_089AD1A4:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD328; }
    goto L_089AD1B4;
L_089AD1B4:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD24C; }
    goto L_089AD1DC;
L_089AD1DC:;
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
    if (cnd_) { goto L_089AD228; }
    goto L_089AD218;
L_089AD218:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD228;
L_089AD228:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD26C; }
    goto L_089AD238;
L_089AD238:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD26C; }
    goto L_089AD248;
L_089AD248:;
    goto L_089AD24C;
L_089AD24C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD26C; }
    goto L_089AD260;
L_089AD260:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD26C;
L_089AD26C:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD2FC; }
    goto L_089AD28C;
L_089AD28C:;
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
    if (cnd_) { goto L_089AD2D8; }
    goto L_089AD2C8;
L_089AD2C8:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD2D8;
L_089AD2D8:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD31C; }
    goto L_089AD2E8;
L_089AD2E8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD31C; }
    goto L_089AD2F8;
L_089AD2F8:;
    goto L_089AD2FC;
L_089AD2FC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD31C; }
    goto L_089AD310;
L_089AD310:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD31C;
L_089AD31C:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AD4A0; }
    goto L_089AD324;
L_089AD324:;
    goto L_089AD328;
L_089AD328:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD3BC; }
    goto L_089AD34C;
L_089AD34C:;
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
    if (cnd_) { goto L_089AD398; }
    goto L_089AD388;
L_089AD388:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD398;
L_089AD398:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD3DC; }
    goto L_089AD3A8;
L_089AD3A8:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD3DC; }
    goto L_089AD3B8;
L_089AD3B8:;
    goto L_089AD3BC;
L_089AD3BC:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD3DC; }
    goto L_089AD3D0;
L_089AD3D0:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD3DC;
L_089AD3DC:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AD4A0; }
    goto L_089AD3E4;
L_089AD3E4:;
    goto L_089AD3E8;
L_089AD3E8:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD47C; }
    goto L_089AD40C;
L_089AD40C:;
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
    if (cnd_) { goto L_089AD458; }
    goto L_089AD448;
L_089AD448:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD458;
L_089AD458:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD49C; }
    goto L_089AD468;
L_089AD468:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD49C; }
    goto L_089AD478;
L_089AD478:;
    goto L_089AD47C;
L_089AD47C:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD49C; }
    goto L_089AD490;
L_089AD490:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD49C;
L_089AD49C:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089AD4A0;
L_089AD4A0:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(160),FBITS(v[96]));}
    {ST32(sp+(164),FBITS(v[97]));}
    {ST32(sp+(168),FBITS(v[98]));}
    f9 = BITSF(LD32(sp+160));
    fcc = FCMP(f2, f9, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s1+788)); goto L_089AD4D8; }
    goto L_089AD4C4;
L_089AD4C4:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f9 = f9 - f0;
    ST32(sp+160, FBITS(f9));
    f2 = BITSF(LD32(s1+788));
    goto L_089AD4D8;
L_089AD4D8:;
    f10 = BITSF(LD32(sp+164));
    f0 = f2 + f13;
    fcc = FCMP(f0, f10, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s1+792)); goto L_089AD504; }
    goto L_089AD4F0;
L_089AD4F0:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f10 = f10 - f0;
    ST32(sp+164, FBITS(f10));
    f1 = BITSF(LD32(s1+792));
    goto L_089AD504;
L_089AD504:;
    f7 = BITSF(LD32(sp+168));
    f0 = f1 + f13;
    fcc = FCMP(f0, f7, 12);
    cnd_ = !fcc;
    f0 = f12 - f13;
    if (cnd_) { goto L_089AD530; }
    goto L_089AD51C;
L_089AD51C:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f7 = f7 - f0;
    ST32(sp+168, FBITS(f7));
    f0 = f12 - f13;
    goto L_089AD530;
L_089AD530:;
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    f0 = f2 - f13;
    if (cnd_) { goto L_089AD554; }
    goto L_089AD540;
L_089AD540:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f9 = f9 + f0;
    ST32(sp+160, FBITS(f9));
    f0 = f2 - f13;
    goto L_089AD554;
L_089AD554:;
    fcc = FCMP(f10, f0, 12);
    cnd_ = !fcc;
    f0 = f1 - f13;
    if (cnd_) { goto L_089AD578; }
    goto L_089AD564;
L_089AD564:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f10 = f10 + f0;
    ST32(sp+164, FBITS(f10));
    f0 = f1 - f13;
    goto L_089AD578;
L_089AD578:;
    fcc = FCMP(f7, f0, 12);
    cnd_ = !fcc;
    v0 = s1 + 784;
    if (cnd_) { goto L_089AD59C; }
    goto L_089AD588;
L_089AD588:;
    v0 = D_08AEEA90 - (-5488);
    f0 = BITSF(LD32(v0-5488));
    f7 = f7 + f0;
    ST32(sp+168, FBITS(f7));
    v0 = s1 + 784;
    goto L_089AD59C;
L_089AD59C:;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f0 = f12 * f11;
    f5 = f9 * f8;
    f7 = f7 * f8;
    f4 = f4 * f11;
    f2 = f2 * f11;
    f6 = f10 * f8;
    ST32(sp+96, FBITS(f0));
    f0 = f0 + f5;
    f3 = f4 + f7;
    f1 = f2 + f6;
    ST32(sp+100, FBITS(f2));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f3));
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    ST32(sp+104, FBITS(f4));
    ST32(sp+144, v0);
    v0 = LD32(sp+120);
    ST32(sp+148, v1);
    ST32(sp+152, v0);
    ST32(sp+400, FBITS(f5));
    ST32(sp+404, FBITS(f6));
    ST32(sp+408, FBITS(f7));
    {v[112]=BITSF(LD32(sp+(144)));}
    {v[113]=BITSF(LD32(sp+(148)));}
    {v[114]=BITSF(LD32(sp+(152)));}
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
    {ST32(s3+(0),FBITS(v[96]));}
    {ST32(s3+(4),FBITS(v[97]));}
    {ST32(s3+(8),FBITS(v[98]));}
    {ST32(s3+(12),FBITS(v[100]));}
    {ST32(s3+(16),FBITS(v[101]));}
    {ST32(s3+(20),FBITS(v[102]));}
    {ST32(s3+(24),FBITS(v[104]));}
    {ST32(s3+(28),FBITS(v[105]));}
    {ST32(s3+(32),FBITS(v[106]));}
    f1 = BITSF(LD32(s6-31328));
    f0 = BITSF(LD32(s1+796));
    f0 = f0 + f1;
    fcc = FCMP(f14, f0, 12);
    cnd_ = !fcc;
    ST32(s1+796, FBITS(f0));
    if (cnd_) { goto L_089AD6B4; }
    goto L_089AD6B0;
L_089AD6B0:;
    ST8(s1+800, 0);
    goto L_089AD6B4;
L_089AD6B4:;
    f0 = BITSF(LD32(s4+8));
    f1 = BITSF(LD32(s4));
    f2 = BITSF(LD32(s4+4));
    ST32(a0+8, FBITS(f0));
    ST32(s1+772, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    {v[112]=BITSF(LD32(s3+(0)));}
    {v[113]=BITSF(LD32(s3+(4)));}
    {v[114]=BITSF(LD32(s3+(8)));}
    {v[116]=BITSF(LD32(s3+(12)));}
    {v[117]=BITSF(LD32(s3+(16)));}
    {v[118]=BITSF(LD32(s3+(20)));}
    {v[120]=BITSF(LD32(s3+(24)));}
    {v[121]=BITSF(LD32(s3+(28)));}
    {v[122]=BITSF(LD32(s3+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD94C; }
    goto L_089AD708;
L_089AD708:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD88C; }
    goto L_089AD718;
L_089AD718:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD7B0; }
    goto L_089AD740;
L_089AD740:;
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
    if (cnd_) { goto L_089AD78C; }
    goto L_089AD77C;
L_089AD77C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD78C;
L_089AD78C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD7D0; }
    goto L_089AD79C;
L_089AD79C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD7D0; }
    goto L_089AD7AC;
L_089AD7AC:;
    goto L_089AD7B0;
L_089AD7B0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD7D0; }
    goto L_089AD7C4;
L_089AD7C4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD7D0;
L_089AD7D0:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD860; }
    goto L_089AD7F0;
L_089AD7F0:;
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
    if (cnd_) { goto L_089AD83C; }
    goto L_089AD82C;
L_089AD82C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD83C;
L_089AD83C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD880; }
    goto L_089AD84C;
L_089AD84C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD880; }
    goto L_089AD85C;
L_089AD85C:;
    goto L_089AD860;
L_089AD860:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD880; }
    goto L_089AD874;
L_089AD874:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD880;
L_089AD880:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089ADA04; }
    goto L_089AD888;
L_089AD888:;
    goto L_089AD88C;
L_089AD88C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD920; }
    goto L_089AD8B0;
L_089AD8B0:;
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
    if (cnd_) { goto L_089AD8FC; }
    goto L_089AD8EC;
L_089AD8EC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD8FC;
L_089AD8FC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD940; }
    goto L_089AD90C;
L_089AD90C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AD940; }
    goto L_089AD91C;
L_089AD91C:;
    goto L_089AD920;
L_089AD920:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AD940; }
    goto L_089AD934;
L_089AD934:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AD940;
L_089AD940:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089ADA04; }
    goto L_089AD948;
L_089AD948:;
    goto L_089AD94C;
L_089AD94C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AD9E0; }
    goto L_089AD970;
L_089AD970:;
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
    if (cnd_) { goto L_089AD9BC; }
    goto L_089AD9AC;
L_089AD9AC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AD9BC;
L_089AD9BC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADA00; }
    goto L_089AD9CC;
L_089AD9CC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ADA00; }
    goto L_089AD9DC;
L_089AD9DC:;
    goto L_089AD9E0;
L_089AD9E0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADA00; }
    goto L_089AD9F4;
L_089AD9F4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ADA00;
L_089ADA00:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089ADA04;
L_089ADA04:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s1+(784),FBITS(v[96]));}
    {ST32(s1+(788),FBITS(v[97]));}
    {ST32(s1+(792),FBITS(v[98]));}
    goto L_089ABED8;
L_089ADA1C:;
    f2 = BITSF(LD32(s4));
    f1 = BITSF(LD32(s4+4));
    v0 = s1 + 772;
    ST32(v0+8, FBITS(f0));
    {u32 a_=sp+(1072);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(v0+4, FBITS(f1));
    {u32 a_=sp+(1088);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    ST32(s1+772, FBITS(f2));
    {v[112]=BITSF(LD32(s3+(0)));}
    {v[113]=BITSF(LD32(s3+(4)));}
    {v[114]=BITSF(LD32(s3+(8)));}
    {v[116]=BITSF(LD32(s3+(12)));}
    {v[117]=BITSF(LD32(s3+(16)));}
    {v[118]=BITSF(LD32(s3+(20)));}
    {v[120]=BITSF(LD32(s3+(24)));}
    {v[121]=BITSF(LD32(s3+(28)));}
    {v[122]=BITSF(LD32(s3+(32)));}
    {v[124]=1.57079632679f;}
    {float s0=v[0];v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADCC4; }
    goto L_089ADA80;
L_089ADA80:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADC04; }
    goto L_089ADA90;
L_089ADA90:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ADB28; }
    goto L_089ADAB8;
L_089ADAB8:;
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
    if (cnd_) { goto L_089ADB04; }
    goto L_089ADAF4;
L_089ADAF4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ADB04;
L_089ADB04:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADB48; }
    goto L_089ADB14;
L_089ADB14:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ADB48; }
    goto L_089ADB24;
L_089ADB24:;
    goto L_089ADB28;
L_089ADB28:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADB48; }
    goto L_089ADB3C;
L_089ADB3C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ADB48;
L_089ADB48:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ADBD8; }
    goto L_089ADB68;
L_089ADB68:;
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
    if (cnd_) { goto L_089ADBB4; }
    goto L_089ADBA4;
L_089ADBA4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ADBB4;
L_089ADBB4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADBF8; }
    goto L_089ADBC4;
L_089ADBC4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ADBF8; }
    goto L_089ADBD4;
L_089ADBD4:;
    goto L_089ADBD8;
L_089ADBD8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADBF8; }
    goto L_089ADBEC;
L_089ADBEC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ADBF8;
L_089ADBF8:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089ADD7C; }
    goto L_089ADC00;
L_089ADC00:;
    goto L_089ADC04;
L_089ADC04:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ADC98; }
    goto L_089ADC28;
L_089ADC28:;
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
    if (cnd_) { goto L_089ADC74; }
    goto L_089ADC64;
L_089ADC64:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ADC74;
L_089ADC74:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADCB8; }
    goto L_089ADC84;
L_089ADC84:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ADCB8; }
    goto L_089ADC94;
L_089ADC94:;
    goto L_089ADC98;
L_089ADC98:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADCB8; }
    goto L_089ADCAC;
L_089ADCAC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ADCB8;
L_089ADCB8:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089ADD7C; }
    goto L_089ADCC0;
L_089ADCC0:;
    goto L_089ADCC4;
L_089ADCC4:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ADD58; }
    goto L_089ADCE8;
L_089ADCE8:;
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
    if (cnd_) { goto L_089ADD34; }
    goto L_089ADD24;
L_089ADD24:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089ADD34;
L_089ADD34:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADD78; }
    goto L_089ADD44;
L_089ADD44:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089ADD78; }
    goto L_089ADD54;
L_089ADD54:;
    goto L_089ADD58;
L_089ADD58:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ADD78; }
    goto L_089ADD6C;
L_089ADD6C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089ADD78;
L_089ADD78:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089ADD7C;
L_089ADD7C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s1+(784),FBITS(v[96]));}
    {ST32(s1+(788),FBITS(v[97]));}
    {ST32(s1+(792),FBITS(v[98]));}
    {u32 a_=sp+(1120);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v1 = LD32(s2+4);
    a0 = LD32(s2+8);
    v0 = LD32(s1+552);
    {v[64]=BITSF(v0);}
    {v[65]=BITSF(v1);}
    v1 = LD32(s2+12);
    {v[66]=BITSF(a0);}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    v0 = LD32(s2+16);
    a0 = LD32(s2+32);
    {u32 a_=sp+(1136);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    v1 = LD32(s2+20);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(s2+24);
    v1 = LD32(s2+28);
    a2 = s1 + 540;
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(1152);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    a0 = LD32(a2+8);
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {float s0=v[84];float s1=v[85];float s2=v[86];float s3=v[87];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = LD32(a2+4);
    v0 = LD32(s1+540);
    {u32 a_=sp+(1040);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(v0);}
    {v[17]=BITSF(v1);}
    {v[18]=BITSF(a0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f3 = BITSF(v0);
    a1 = s1 + 760;
    ST32(a1+8, v0);
    v0 = 1;
    {v1=FBITS(v[20]);}
    {t0=FBITS(v[21]);}
    ST32(s1+760, v1);
    ST32(a1+4, t0);
    ST8(s1+801, v0);
    ST32(s1+796, 0);
    ST32(sp+208, v1);
    ST32(sp+212, t0);
    ST32(sp+216, FBITS(f3));
    ST32(sp+240, v1);
    ST32(sp+244, t0);
    ST32(sp+248, FBITS(f3));
    goto L_089ABED4;
L_089ADE98:;
    {u32 a_=sp+(1024);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a0);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    s0 = sp + 288;
    a1 = sp + 256;
    v0 = LD32(v1-16);
    a2 = sp + 272;
    t0 = 0 + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    v0 = s1 + v0;
    f12 = BITSF(v1);
    f20 = f21 / f0;
    a3 = LD32(v0+4);
    t1 = 2048;
    a0 = s0 + 0;
    f23 = f21;
    f0 = f18 * f20;
    f1 = f14 * f20;
    f2 = f16 * f20;
    ST32(sp+272, FBITS(f0));
    ST32(sp+276, FBITS(f1));
    ST32(sp+280, FBITS(f2));
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_089ADF08;
L_089ADF08:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ADF10;
L_089ADF10:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a1 = D_08B1BC58 - (-17320);
    if (cnd_) { goto L_089ADF64; }
    goto L_089ADF20;
L_089ADF20:;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(s1+364));
    f21 = f1 * f20;
    f0 = f0 * f20;
    f21 = f21 - f0;
    fcc = FCMP(f21, f22, 14);
    cnd_ = fcc;
    f2 = f22;
    if (cnd_) { goto L_089ADF48; }
    goto L_089ADF44;
L_089ADF44:;
    f2 = f21;
    goto L_089ADF48;
L_089ADF48:;
    fcc = FCMP(f23, f2, 14);
    cnd_ = fcc;
    f0 = f23;
    if (cnd_) { goto L_089ADF5C; }
    goto L_089ADF58;
L_089ADF58:;
    f0 = f2;
    goto L_089ADF5C;
L_089ADF5C:;
    f21 = f0;
    a1 = D_08B1BC58 - (-17320);
    goto L_089ADF64;
L_089ADF64:;
    f2 = BITSF(LD32(a1-17320));
    fcc = FCMP(f21, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089ADF80; }
    goto L_089ADF78;
L_089ADF78:;
    ST32(a1-17320, FBITS(f21));
    goto L_089ACF8C;
L_089ADF80:;
    fcc = FCMP(f2, f21, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a1-17320));
    if (cnd_) { goto L_089ACF90; }
    goto L_089ADF90;
L_089ADF90:;
    f0 = BITSF(LD32(s1+368));
    f1 = BITSF(LD32(s6-31328));
    f0 = f0 * f1;
    f0 = f2 + f0;
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    ST32(a1-17320, FBITS(f0));
    if (cnd_) { goto L_089ADFB4; }
    goto L_089ADFB0;
L_089ADFB0:;
    ST32(a1-17320, FBITS(f21));
    goto L_089ADFB4;
L_089ADFB4:;
    f1 = BITSF(LD32(a1-17320));
    f0 = BITSF(LD32(s5-5484));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089ADFCC; }
    goto L_089ADFCC;
L_089ADFCC:;
    ST32(a1-17320, FBITS(f0));
    goto L_089ACF8C;
L_089ADFD4:;
    v0 = LD32(v1+460);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ADFE0;
L_089ADFE0:;
    cnd_ = v0 != 0;
    if (cnd_) { f3 = BITSF(LD32(s1+728)); goto L_089ACB9C; }
    goto L_089ADFE8;
L_089ADFE8:;
    f2 = BITSF(LD32(s1+372));
    f1 = BITSF(LD32(s1+548));
    f0 = BITSF(LD32(s1+728));
    f1 = f1 * f2;
    f0 = f21 - f0;
    f1 = f1 * f0;
    f0 = f20 + f1;
    goto L_089ACBB8;
L_089AE008:;
    f1 = BITSF(LD32(s1+320));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f3, f0, 14);
    goto L_089ACA28;
L_089AE024:;
    f1 = BITSF(LD32(s1+316));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f3, f0, 14);
    goto L_089AC9D4;
L_089AE040:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089AC104; }
    goto L_089AE04C;
L_089AE04C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089AC108; }
    goto L_089AE058;
L_089AE058:;
    goto L_089AC114;
L_089AE060:;
    s6 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(s6-31328));
    f1 = BITSF(LD32(s1+376));
    f2 = BITSF(LD32(s1+728));
    f3 = BITSF(0);
    f0 = f0 * f1;
    f2 = f2 - f0;
    fcc = FCMP(f2, f3, 14);
    cnd_ = fcc;
    ST32(s1+728, FBITS(f2));
    if (cnd_) { goto L_089AE090; }
    goto L_089AE08C;
L_089AE08C:;
    f3 = f2;
    goto L_089AE090;
L_089AE090:;
    ST32(s1+728, FBITS(f3));
    s5 = D_08AEEA94 - (-5484);
    goto L_089AC0B4;
L_089AE09C:;
    a2 = LD32(s1+448);
    goto L_089AE060;
}

/* 089AE0A4 */
rv_t func_089AE0A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE0A4:;
    v0 = 1;
    ST8(a0+670, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089C83F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE0C0;
L_089AE0C0:;
    ST8(s0+670, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089AE0D4 */
rv_t func_089AE0D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE0D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089CB944(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE0E8;
L_089AE0E8:;
    a1 = 0 + 0;
    a0 = LD32(s0+40);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE0F4;
L_089AE0F4:;
    v0 = D_08AEEA98 - (-5480);
    f12 = BITSF(LD32(v0-5480));
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE104;
L_089AE104:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB27C(a0, a1);
    goto L_089AE110;
L_089AE110:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB2A0(a0, a1);
    goto L_089AE11C;
L_089AE11C:;
    v1 = LD32(s0);
    a0 = LD32(s0+40);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    func_088BB2C4(a0, a1);
    goto L_089AE134;
L_089AE134:;
    a0 = LD32(s0+40);
    v0 = func_088BB4E4(a0);
    goto L_089AE13C;
L_089AE13C:;
    v0 = v0 | 0x4000;
    a0 = LD32(s0+40);
    v0 = v0 & 0xffff;
    a1 = v0 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE150;
L_089AE150:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089AE160 */
rv_t func_089AE160(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE160:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE17C;
L_089AE17C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089AE1A4 */
void func_089AE1A4(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE1A4:;
    v0 = D_08AEEA9C - (-5476);
    f1 = BITSF(LD32(v0-5476));
    v0 = D_08AEEAA0 - (-5472);
    f0 = BITSF(LD32(v0-5472));
    f2 = BITSF(LD32(a0+532));
    v0 = D_08AEEAA4 - (-5468);
    f0 = f1 * f0;
    f2 = f2 * f2;
    f1 = f1 * f1;
    f3 = BITSF(LD32(v0-5468));
    f0 = f0 * f0;
    sp = sp - 16;
    f4 = BITSF(0);
    f1 = f1 - f0;
    f2 = f2 - f0;
    f2 = f2 / f1;
    fcc = FCMP(f3, f2, 14);
    cnd_ = fcc;
    f0 = f3;
    if (cnd_) { goto L_089AE1F8; }
    goto L_089AE1F4;
L_089AE1F4:;
    f0 = f2;
    goto L_089AE1F8;
L_089AE1F8:;
    fcc = FCMP(f0, f4, 14);
    cnd_ = !fcc;
    if (cnd_) { f4 = f0; goto L_089AE208; }
    goto L_089AE208;
L_089AE208:;
    f2 = f3 - f4;
    ST32(a0+736, FBITS(f2));
    sp = sp + 16;
    return;
}

/* 089AE218 */
rv_t func_089AE218(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_089AE218:;
    sp = sp - 224;
    s1 = a1 + 0;
    a1 = a2 + 0;
    v0 = LD32(a0+844);
    v0 = v0 & 0x400;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AE270; }
    goto L_089AE240;
L_089AE240:;
    v0 = a0 + 748;
    f0 = BITSF(LD32(a0+748));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(s1, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_089AE25C;
L_089AE25C:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_089AE270:;
    a0 = sp + 16;
    a2 = 1;
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE28C;
L_089AE28C:;
    v0 = D_08AEEAA8 - (-5464);
    v1 = LD32(s0);
    f0 = BITSF(LD32(v0-5464));
    ST32(sp+48, 0);
    a0 = s0 + 0;
    ST32(sp+56, FBITS(f0));
    v0 = LD32(v1+92);
    t_ = v0;
    ST32(sp+52, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE2B0;
L_089AE2B0:;
    {u32 a_=sp+(192);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    f2 = BITSF(LD32(sp+16));
    {u32 a_=sp+(96);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+56);
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+20));
    ST32(sp+64, FBITS(f4));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(s1, FBITS(f2));
    f0 = f0 + f5;
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f5));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    goto L_089AE25C;
}

/* 089AE3A0 */
rv_t func_089AE3A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE3A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089CBD38(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE3B4;
L_089AE3B4:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089AE414; }
    goto L_089AE3BC;
L_089AE3BC:;
    v0 = LD32(s0+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AE418; }
    goto L_089AE3CC;
L_089AE3CC:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089AE470; }
    goto L_089AE3DC;
L_089AE3DC:;
    v1 = LD32(s0+844);
    goto L_089AE3E0;
L_089AE3E0:;
    v0 = v1 & 0x8;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089AE414; }
    goto L_089AE3EC;
L_089AE3EC:;
    v0 = LD32(s0+732);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AE418; }
    goto L_089AE3F8;
L_089AE3F8:;
    v0 = (v1 >> 13) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AE460; }
    goto L_089AE404;
L_089AE404:;
    v0 = LD32(s0+856);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AE428; }
    goto L_089AE414;
L_089AE414:;
    goto L_089AE418;
L_089AE418:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089AE428:;
    a0 = s0 + 0;
    v0 = func_089C6C50(a0, 0, 0, 0);
    goto L_089AE430;
L_089AE430:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_089C931C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE43C;
L_089AE43C:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089AE414; }
    goto L_089AE444;
L_089AE444:;
    a0 = s0 + 0;
    v0 = func_089C6C28(a0, 0, 0, 0);
    goto L_089AE44C;
L_089AE44C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_089C931C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE458;
L_089AE458:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089AE414; }
    goto L_089AE460;
L_089AE460:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CAB78(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE468;
L_089AE468:;
    a0 = 0 < v0;
    goto L_089AE414;
L_089AE470:;
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE47C;
L_089AE47C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089AE414; }
    goto L_089AE484;
L_089AE484:;
    v1 = LD32(s0+844);
    goto L_089AE3E0;
}

/* 089AE48C */
rv_t func_089AE48C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE48C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089AE3A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE4AC;
L_089AE4AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AE4CC; }
    goto L_089AE4B4;
L_089AE4B4:;
    goto L_089AE4B8;
L_089AE4B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089AE4CC:;
    a0 = s1 + 0;
    func_089CABCC(a0, 0, 0, 0);
    goto L_089AE4D4;
L_089AE4D4:;
    a0 = 0x8032;
    a1 = 12;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE4E8;
L_089AE4E8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089AE4B4; }
    goto L_089AE4F0;
L_089AE4F0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_089C9BFC(a0, a1);
    goto L_089AE4FC;
L_089AE4FC:;
    a0 = LD32(s2+24);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089AE53C; }
    goto L_089AE508;
L_089AE508:;
    cnd_ = s0 == v0;
    v0 = 0xcad60000u;
    if (cnd_) { goto L_089AE570; }
    goto L_089AE510;
L_089AE510:;
    cnd_ = s0 == 0;
    v0 = v0 | 0xd076;
    if (cnd_) { goto L_089AE568; }
    goto L_089AE518;
L_089AE518:;
    v0 = 2;
    cnd_ = s0 == v0;
    v0 = 0xcad60000u;
    if (cnd_) { goto L_089AE564; }
    goto L_089AE524;
L_089AE524:;
    v1 = LD32(a0);
    v0 = LD32(a0+8);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+8, v0);
    ST32(a0, v1);
    goto L_089AE53C;
L_089AE53C:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE554;
L_089AE554:;
    a0 = s1 + 0;
    { u64 r_ = func_089AF0A4(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE55C;
L_089AE55C:;
    goto L_089AE4B8;
L_089AE564:;
    v0 = v0 | 0xd078;
    goto L_089AE568;
L_089AE568:;
    ST32(a0+4, v0);
    goto L_089AE524;
L_089AE570:;
    v0 = v0 | 0xd077;
    goto L_089AE568;
}

/* 089AE578 */
rv_t func_089AE578(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE578:;
    sp = sp - 16;
    s1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AE5B8; }
    goto L_089AE59C;
L_089AE59C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC280(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE5A4;
L_089AE5A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089AE5B8:;
    func_089C9D08(a0);
    goto L_089AE5C0;
L_089AE5C0:;
    a0 = s0 + 0;
    func_089C9870(a0, 0, 0, 0);
    goto L_089AE5C8;
L_089AE5C8:;
    a0 = s0 + 0;
    func_089CB260(a0);
    goto L_089AE5D0;
L_089AE5D0:;
    v0 = LD32(s0+844);
    v0 = v0 | s1;
    ST32(s0+844, v0);
    goto L_089AE59C;
}

/* 089AE5E0 */
rv_t func_089AE5E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE5E0:;
    sp = sp - 16;
    v1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AE618; }
    goto L_089AE600;
L_089AE600:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC288(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE608;
L_089AE608:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089AE618:;
    func_089C9BC4(a0);
    goto L_089AE620;
L_089AE620:;
    a0 = s0 + 0;
    func_089C9E28(a0);
    goto L_089AE628;
L_089AE628:;
    a0 = s0 + 0;
    func_089CB2E0(a0);
    goto L_089AE630;
L_089AE630:;
    v0 = LD32(s0+844);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s0+844, v0);
    goto L_089AE600;
}

/* 089AE640 */
rv_t func_089AE640(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089AE640:;
    sp = sp - 32;
    v0 = LD32(a0+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089AE710; }
    goto L_089AE660;
L_089AE660:;
    v0 = func_089C5CBC(a0, t1, t2, t3);
    goto L_089AE668;
L_089AE668:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 1;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089AE678;
L_089AE678:;
    a0 = s1 + 0;
    func_089CB0CC(a0, 0, 0, 0);
    goto L_089AE680;
L_089AE680:;
    v1 = LD32(s1);
    ST32(sp, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE694;
L_089AE694:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089AE6AC;
L_089AE6AC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE6BC;
L_089AE6BC:;
    a0 = LD32(sp);
    a1 = 0xa25f0000u;
    a1 = a1 | 0x3bb9;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE6D0;
L_089AE6D0:;
    a0 = LD32(s1);
    v1 = 0x300000u;
    v1 = v1 | 0xcffa;
    v0 = v0 ^ v1;
    a2 = LD32(a0+416);
    v0 = v0 < 0x1u;
    a1 = v0 + 0;
    t_ = a2;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE6F4;
L_089AE6F4:;
    a0 = s1 + 0;
    { rv_t r_ = func_089CC290(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE6FC;
L_089AE6FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089AE710:;
    v0 = func_089C5CE4(a0, t1, t2, t3);
    goto L_089AE718;
L_089AE718:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 1;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089AE728;
L_089AE728:;
    a0 = s1 + 0;
    func_089C9870(a0, 0, 0, 0);
    goto L_089AE730;
L_089AE730:;
    v0 = LD32(s1+844);
    v1 = 0x10000u;
    v0 = v0 | v1;
    ST32(s1+844, v0);
    goto L_089AE678;
}

/* 089AE744 */
u64 func_089AE744(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE744:;
    sp = sp - 16;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AE768; }
    goto L_089AE75C;
L_089AE75C:;
    v0 = LD_U8(a0+444);
    cnd_ = v0 != 0;
    v0 = D_08AEEAAC - (-5460);
    if (cnd_) { goto L_089AE778; }
    goto L_089AE768;
L_089AE768:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089AE778:;
    f12 = BITSF(LD32(v0-5460));
    { u64 r_ = func_0881D060(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE780;
L_089AE780:;
    v0 = LD32(s0+856);
    v0 = v0 | 0x10;
    ST32(s0+856, v0);
    goto L_089AE768;
}

/* 089AE790 */
u64 func_089AE790(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE790:;
    sp = sp - 16;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AE7B4; }
    goto L_089AE7A8;
L_089AE7A8:;
    v0 = LD_U8(a0+444);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AE7C4; }
    goto L_089AE7B4;
L_089AE7B4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089AE7C4:;
    { rv_t r_ = func_089AE7DC(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE7CC;
L_089AE7CC:;
    v0 = LD32(s0+856);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s0+856, v0);
    goto L_089AE7B4;
}

/* 089AE7DC */
rv_t func_089AE7DC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE7DC:;
    v0 = D_08B159FC - (23036);
    a0 = LD32(v0+23036);
    sp = sp - 16;
    f0 = func_088F5900(a0);
    goto L_089AE7F4;
L_089AE7F4:;
    { rv_t r_ = func_0881D358(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE7FC;
L_089AE7FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089AE808 */
rv_t func_089AE808(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089AE808:;
    sp = sp - 32;
    v0 = a0 + 540;
    a1 = 3;
    s0 = a0 + 0;
    ST32(v0+8, 0);
    ST32(v0+4, 0);
    v1 = LD32(a0);
    ST32(sp, 0);
    v0 = LD32(v1+124);
    ST32(a0+540, 0);
    ST32(sp+4, 0);
    t_ = v0;
    ST32(sp+8, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE844;
L_089AE844:;
    a3 = 0 + 0;
    a0 = 0x8056;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE858;
L_089AE858:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE870;
L_089AE870:;
    v1 = LD32(s0+856);
    v0 = LD32(s0+844);
    ST32(s0+496, 0);
    v1 = v1 | 0x2;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s0+844, v0);
    a0 = 3;
    a1 = 180;
    ST32(s0+856, v1);
    a2 = 0 + 0;
    ST32(s0+500, 0);
    ST32(s0+504, 0);
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE8A4;
L_089AE8A4:;
    f12 = BITSF(0);
    a0 = 3;
    a1 = 180;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_089AE8CC; }
    goto L_089AE8BC;
L_089AE8BC:;
    goto L_089AE8C0;
L_089AE8C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089AE8CC:;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE8D4;
L_089AE8D4:;
    goto L_089AE8C0;
}

/* 089AE8DC */
rv_t func_089AE8DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089AE8DC:;
    sp = sp - 32;
    s1 = a0 + 540;
    a1 = sp + 0;
    s0 = a0 + 0;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    ST32(a0+540, 0);
    a0 = LD32(a0+40);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE918;
L_089AE918:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE92C;
L_089AE92C:;
    a3 = 0 + 0;
    a0 = 0x8057;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE940;
L_089AE940:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE958;
L_089AE958:;
    v0 = LD32(s0+856);
    a0 = 3;
    a1 = 181;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+856, v0);
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AE974;
L_089AE974:;
    f12 = BITSF(0);
    a0 = 3;
    a1 = 181;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_089AE9C4; }
    goto L_089AE98C;
L_089AE98C:;
    ST32(s1+8, 0);
    goto L_089AE990;
L_089AE990:;
    a1 = sp + 0;
    ST32(s1+4, 0);
    ST32(s0+540, 0);
    ST32(sp+4, 0);
    ST32(sp, 0);
    ST32(sp+8, 0);
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE9B0;
L_089AE9B0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089AE9C4:;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AE9CC;
L_089AE9CC:;
    ST32(s1+8, 0);
    goto L_089AE990;
}

/* 089AE9D4 */
rv_t func_089AE9D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089AE9D4:;
    ST32(a0+448, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 089AE9DC */
rv_t func_089AE9DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AE9DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+448);
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AEA00;
L_089AEA00:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089AEA30; }
    goto L_089AEA0C;
L_089AEA0C:;
    v0 = LD32(s0);
    a1 = LD32(a1);
    v1 = LD32(v0-16);
    v0 = LD32(a1+24);
    v1 = s0 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEA28;
L_089AEA28:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089AEA64; }
    goto L_089AEA30;
L_089AEA30:;
    v1 = LD32(s0+448);
    v0 = 999;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = 999;
    if (cnd_) { goto L_089AEA54; }
    goto L_089AEA44;
L_089AEA44:;
    v0 = LD32(s0);
    v1 = LD32(v0+440);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEA54;
L_089AEA54:;
    goto L_089AEA58;
L_089AEA58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089AEA64:;
    v0 = LD32(s0);
    v1 = LD32(v0+488);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEA74;
L_089AEA74:;
    goto L_089AEA58;
}

/* 089AEA7C */
void func_089AEA7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_089AEA7C:;
    sp = sp - 400;
    v0 = D_08AEEAB0 - (-5456);
    s5 = 1;
    s4 = 999;
    s2 = a0 + 0;
    v1 = LD32(a0);
    f22 = BITSF(LD32(v0-5456));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+268);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEAE0;
L_089AEAE0:;
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AEAF4;
L_089AEAF4:;
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AEB24; }
    goto L_089AEB08;
L_089AEB08:;
    a0 = v0 + 0;
    v0 = func_08A05AA0(a0, 0, 0, 0);
    goto L_089AEB10;
L_089AEB10:;
    s5 = v0 < 0x1u;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_089AEB24;
L_089AEB24:;
    a2 = D_08C2C21C - (-15844);
    v0 = a2 - 15844;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089AEB9C; }
    goto L_089AEB50;
L_089AEB50:;
    a2 = LD32(a2-15844);
    a3 = a1 + 0;
    goto L_089AEB58;
L_089AEB58:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089AEB8C; }
    goto L_089AEB70;
L_089AEB70:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089AEBA0; }
    goto L_089AEB80;
L_089AEB80:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089AEB70; }
    goto L_089AEB8C;
L_089AEB8C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089AEB58; }
    goto L_089AEB9C;
L_089AEB9C:;
    a0 = LD32(sp+8);
    goto L_089AEBA0;
L_089AEBA0:;
    a1 = a0 < 0x1u;
    cnd_ = a1 != 0;
    v1 = D_08AEEAC0 - (-5440);
    if (cnd_) { goto L_089AEF78; }
    goto L_089AEBAC;
L_089AEBAC:;
    {v[0]=1.57079632679f;}
    f24 = BITSF(LD32(v1-5440));
    v0 = D_08AEEABC - (-5444);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    f23 = BITSF(LD32(v0-5444));
    {u32 a_=sp+(64);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = 0x3f800000u;
    {v[12]=BITSF(a1);}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[13]=BITSF(a1);}
    s3 = s2 + 552;
    {v[14]=BITSF(v0);}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    s1 = LD32(a0);
    goto L_089AEBE8;
L_089AEBE8:;
    a1 = 1;
    a0 = sp + 0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    func_08AC4E2C(a0, a1);
    goto L_089AEC04;
L_089AEC04:;
    a2 = LD32(s1);
    v0 = LD32(s2+448);
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v1 = LD32(a2-16);
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    cnd_ = a0 == v0;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AEF6C; }
    goto L_089AEC2C;
L_089AEC2C:;
    a1 = LD32(s2);
    v0 = LD32(a2+24);
    a0 = s1 + 0;
    v1 = LD32(a1-16);
    v1 = s2 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEC48;
L_089AEC48:;
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AEF6C; }
    goto L_089AEC5C;
L_089AEC5C:;
    v1 = LD32(s2+552);
    v0 = LD32(s3+4);
    {u32 a_=sp+(96);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s3+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(s3+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s3+12);
    {v[16]=BITSF(v1);}
    v1 = LD32(s3+20);
    {v[17]=BITSF(v0);}
    {v[18]=BITSF(v1);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    v0 = LD32(s3+24);
    v1 = LD32(s3+28);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {v[32]=BITSF(v0);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = LD32(s3+32);
    {v[33]=BITSF(v1);}
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[34]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(144);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[8]=BITSF(v0);}
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    f20 = BITSF(0);
    f2 = BITSF(v0);
    v0 = FBITS(f0);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AEEAB4 - (-5452);
    f21 = BITSF(LD32(v0-5452));
    fcc = FCMP(f0, f20, 2);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, FBITS(f20));
    ST32(sp+40, FBITS(f21));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089AED90; }
    goto L_089AED54;
L_089AED54:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_089AED90;
L_089AED90:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+12);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEDB8;
L_089AEDB8:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEDCC;
L_089AEDCC:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f0;
    f3 = f3 - f1;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f4);
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {v[0]=BITSF(v1);}
    {u32 a_=sp+(192);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[1]=BITSF(v0);}
    {v[8]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {v[9]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v[10]=BITSF(a0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f2));
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f20, 2);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+52, FBITS(f3));
    {v0=FBITS(v[0]);}
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    f5 = BITSF(v0);
    ST32(sp+56, FBITS(f4));
    {u32 a_=sp+(304);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = fcc;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AEE9C; }
    goto L_089AEE60;
L_089AEE60:;
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_089AEE9C;
L_089AEE9C:;
    v1 = D_08AEEAB8 - (-5448);
    v0 = LD32(sp+16);
    f1 = BITSF(LD32(v1-5448));
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+24);
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+20);
    {v[5]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089AEF0C; }
    goto L_089AEEF8;
L_089AEEF8:;
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    f1 = f21;
    if (cnd_) { goto L_089AEF0C; }
    goto L_089AEF08;
L_089AEF08:;
    f1 = BITSF(v0);
    goto L_089AEF0C;
L_089AEF0C:;
    v0 = FBITS(f1);
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f2 = f5 * f23;
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = BITSF(FBITS(f0) ^ 0x80000000u);
    cnd_ = s5 != 0;
    f20 = f20 - f2;
    if (cnd_) { goto L_089AF070; }
    goto L_089AEF48;
L_089AEF48:;
    fcc = FCMP(f22, f20, 12);
    cnd_ = !fcc;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089AEF70; }
    goto L_089AEF58;
L_089AEF58:;
    v1 = LD32(s1);
    f22 = f20;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    s4 = LD32(v0+4);
    goto L_089AEF6C;
L_089AEF6C:;
    a0 = LD32(sp+8);
    goto L_089AEF70;
L_089AEF70:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_089AEBE8; }
    goto L_089AEF78;
L_089AEF78:;
    v0 = 999;
    cnd_ = s4 == v0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089AEF9C; }
    goto L_089AEF84;
L_089AEF84:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+440);
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AEF98;
L_089AEF98:;
    s1 = LD32(sp);
    goto L_089AEF9C;
L_089AEF9C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089AF020; }
    goto L_089AEFAC;
L_089AEFAC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089AF020; }
    goto L_089AEFB8;
L_089AEFB8:;
    v0 = LD32(s1);
    goto L_089AEFBC;
L_089AEFBC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089AF010; }
    goto L_089AEFD0;
L_089AEFD0:;
    v0 = LD_U8(s0+8);
    goto L_089AEFD4;
L_089AEFD4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089AF068; }
    goto L_089AEFDC;
L_089AEFDC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089AF058; }
    goto L_089AEFE4;
L_089AEFE4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089AEFEC;
L_089AEFEC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AEFF8;
L_089AEFF8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089AF004;
L_089AF004:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089AEFD4; }
    goto L_089AF00C;
L_089AF00C:;
    v1 = LD32(s1+4);
    goto L_089AF010;
L_089AF010:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089AEFBC; }
    goto L_089AF020;
L_089AF020:;
    sp = sp + 400;
    return;
L_089AF058:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089AEFEC;
L_089AF068:;
    s0 = LD32(s0+4);
    goto L_089AF004;
L_089AF070:;
    a0 = s1 + 0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = func_08A05AA0(a0, 0, 0, 0);
    goto L_089AF088;
L_089AF088:;
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(320);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AEF48; }
    goto L_089AF09C;
L_089AF09C:;
    f20 = f20 + f24;
    goto L_089AEF48;
}
