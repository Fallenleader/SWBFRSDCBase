#include "game.h"

/* 088488F4 */
rv_t func_088488F4(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_088488F4:;
    sp = sp - 128;
    s0 = a0 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    f21 = f12;
    { rv_t r_ = func_08848010(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08848924;
L_08848924:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08848954; }
    goto L_08848934;
L_08848934:;
    goto L_08848938;
L_08848938:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08848954:;
    f0 = func_08848BB8(a0);
    goto L_0884895C;
L_0884895C:;
    fcc = FCMP(f0, f21, 12);
    f20 = f0;
    v1 = 1;
    v0 = 0 < s1;
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_08848978; }
    goto L_08848974;
L_08848974:;
    v1 = 0 + 0;
    goto L_08848978;
L_08848978:;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08848938; }
    goto L_08848984;
L_08848984:;
    { rv_t r_ = func_08848BAC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884898C;
L_0884898C:;
    fcc = FCMP(f20, f0, 12);
    f2 = f0 - f20;
    f1 = f21 - f20;
    f12 = f0;
    a0 = s1 + 0;
    cnd_ = !fcc;
    a1 = sp + 0;
    if (cnd_) { goto L_08848934; }
    goto L_088489A8;
L_088489A8:;
    f20 = f1 / f2;
    v0 = D_08AEB9B0 - (-18000);
    f0 = BITSF(LD32(v0-18000));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_088489C4; }
    goto L_088489C4;
L_088489C4:;
    { rv_t r_ = func_08848010(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088489CC;
L_088489CC:;
    a0 = sp + 48;
    a1 = s2 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088489D8;
L_088489D8:;
    a0 = sp + 64;
    a1 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088489E4;
L_088489E4:;
    v0 = D_08AEB9B4 - (-17996);
    f0 = BITSF(LD32(v0-17996));
    v0 = FBITS(f20);
    v1 = FBITS(f0);
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[115]=BITSF(LD32(sp+(60)));}
    {v[116]=BITSF(LD32(sp+(64)));}
    {v[117]=BITSF(LD32(sp+(68)));}
    {v[118]=BITSF(LD32(sp+(72)));}
    {v[119]=BITSF(LD32(sp+(76)));}
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
    if (cnd_) { goto L_08848A60; }
    goto L_08848A40;
L_08848A40:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_08848A60;
L_08848A60:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848A74; }
    goto L_08848A6C;
L_08848A6C:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_08848A74;
L_08848A74:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08848A9C; }
    goto L_08848A90;
L_08848A90:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_08848A9C;
L_08848A9C:;
    {ST32(sp+(80),FBITS(v[120]));}
    {ST32(sp+(84),FBITS(v[121]));}
    {ST32(sp+(88),FBITS(v[122]));}
    {ST32(sp+(92),FBITS(v[123]));}
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
    {ST32(s2+(0),FBITS(v[96]));}
    {ST32(s2+(4),FBITS(v[97]));}
    {ST32(s2+(8),FBITS(v[98]));}
    {ST32(s2+(12),FBITS(v[100]));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(v[106]));}
    goto L_08848938;
}

/* 08848B2C */
float func_08848B2C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08848B2C:;
    sp = sp - 32;
    a1 = sp + 0;
    a2 = sp + 4;
    a3 = 64;
    v0 = LD32(a0+4);
    f0 = BITSF(0);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08848B88; }
    goto L_08848B58;
L_08848B58:;
    { u64 r_ = func_088490B4(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08848B60;
L_08848B60:;
    v0 = LD32(sp+4);
    v1 = LD32(s0+36);
    f1 = BITSF(LD32(sp));
    v0 = v0 << 2;
    v0 = v0 + v1;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f0 = f0 - f2;
    f0 = f0 * f1;
    f0 = f2 + f0;
    goto L_08848B88;
L_08848B88:;
    sp = sp + 32;
    return f0;
}

/* 08848B98 */
u32 func_08848B98(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08848B98:;
    v0 = LD32(a0+4);
    a0 = (s32)v0 < 2;
    v1 = v0 - 2;
    if (a0 == 0) v0 = v1;
    return v0;
}

/* 08848BAC */
rv_t func_08848BAC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08848BAC:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(v0));
    return (rv_t){ v0, v1, f0 };
}

/* 08848BB8 */
float func_08848BB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08848BB8:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_08848B98(a0);
    goto L_08848BD0;
L_08848BD0:;
    v1 = LD32(s0+12);
    a0 = s0 + 0;
    s0 = LD32(s0+16);
    v0 = v0 << 2;
    v0 = v0 + v1;
    cnd_ = s0 == 0;
    f20 = BITSF(LD32(v0-4));
    if (cnd_) { goto L_08848C04; }
    goto L_08848BEC;
L_08848BEC:;
    v0 = func_08848B98(a0);
    goto L_08848BF4;
L_08848BF4:;
    v0 = v0 << 2;
    v0 = v0 + s0;
    f0 = BITSF(LD32(v0-4));
    f20 = f20 + f0;
    goto L_08848C04;
L_08848C04:;
    f0 = f20;
    sp = sp + 32;
    return f0;
}

/* 08848C1C */
float func_08848C1C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08848C1C:;
    sp = sp - 48;
    v0 = 1;
    f2 = BITSF(0);
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08848DA8; }
    goto L_08848C40;
L_08848C40:;
    f0 = func_08848E14(a0, f12);
    goto L_08848C48;
L_08848C48:;
    f12 = f0;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = sp + 4;
    a3 = 192;
    f20 = f0;
    { u64 r_ = func_088490B4(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08848C64;
L_08848C64:;
    a1 = LD32(sp+4);
    v0 = LD32(s0+32);
    f2 = BITSF(0);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08848DAC; }
    goto L_08848C78;
L_08848C78:;
    a2 = LD32(s0+16);
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08848CB4; }
    goto L_08848C84;
L_08848C84:;
    v1 = LD32(s0+12);
    v0 = a1 << 2;
    a0 = v0 + a2;
    v0 = v0 + v1;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a0));
    f0 = f0 + f1;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) {  goto L_08848DB0; }
    goto L_08848CB0;
L_08848CB0:;
    v0 = LD32(s0+28);
    goto L_08848CB4;
L_08848CB4:;
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+12); goto L_08848DC0; }
    goto L_08848CC0;
L_08848CC0:;
    v0 = LD32(s0+36);
    a0 = a1 << 2;
    f8 = BITSF(0);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    v1 = LD32(s0+24);
    f2 = f8;
    f5 = f0 - f1;
    v1 = a0 + v1;
    f4 = BITSF(LD32(v1+4));
    fcc = FCMP(f5, f8, 14);
    cnd_ = fcc;
    f6 = BITSF(LD32(v1));
    if (cnd_) { goto L_08848DA8; }
    goto L_08848CFC;
L_08848CFC:;
    v0 = LD32(s0+12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    cnd_ = a2 == 0;
    f7 = f0 - f1;
    if (cnd_) { goto L_08848D20; }
    goto L_08848D14;
L_08848D14:;
    v0 = a0 + a2;
    f0 = BITSF(LD32(v0));
    f7 = f7 - f0;
    goto L_08848D20;
L_08848D20:;
    fcc = FCMP(f7, f8, 14);
    cnd_ = fcc;
    f2 = f8;
    if (cnd_) { goto L_08848DA8; }
    goto L_08848D30;
L_08848D30:;
    f6 = f6 * f7;
    f4 = f4 * f7;
    v0 = D_08AEB9B8 - (-17992);
    f0 = BITSF(LD32(v0-17992));
    v0 = D_08AEB9BC - (-17988);
    f3 = f6 + f4;
    f2 = BITSF(LD32(v0-17988));
    v0 = D_08AEB9C0 - (-17984);
    f1 = BITSF(LD32(v0-17984));
    f0 = f5 * f0;
    f2 = f5 * f2;
    f1 = f6 * f1;
    f3 = f3 + f3;
    f4 = f4 + f4;
    f5 = BITSF(LD32(sp));
    f2 = f2 - f1;
    f0 = f0 + f3;
    v0 = D_08AEB9C4 - (-17980);
    f1 = BITSF(LD32(v0-17980));
    f2 = f2 - f4;
    f0 = f0 * f5;
    f6 = f6 + f6;
    f3 = f7 + f7;
    f2 = f2 + f2;
    f0 = f0 * f5;
    f2 = f2 * f5;
    f0 = f0 * f1;
    f0 = f0 + f2;
    f0 = f0 + f6;
    f2 = f0 / f3;
    goto L_08848DA8;
L_08848DA8:;
    goto L_08848DAC;
L_08848DAC:;
    goto L_08848DB0;
L_08848DB0:;
    f0 = f2;
    sp = sp + 48;
    return f0;
L_08848DC0:;
    v0 = LD32(s0+36);
    a1 = a1 << 2;
    v1 = a1 + v1;
    v0 = a1 + v0;
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1+4));
    f5 = f0 - f2;
    cnd_ = a2 == 0;
    f1 = f1 - f3;
    if (cnd_) { goto L_08848DF8; }
    goto L_08848DEC;
L_08848DEC:;
    v0 = a1 + a2;
    f0 = BITSF(LD32(v0));
    f1 = f1 - f0;
    goto L_08848DF8;
L_08848DF8:;
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { f2 = f5 / f1; goto L_08848DA8; }
    goto L_08848E0C;
L_08848E0C:;
    goto L_08848DAC;
}

/* 08848E14 */
float func_08848E14(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08848E14:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08848BAC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08848E34;
L_08848E34:;
    f21 = f0;
    a0 = s0 + 0;
    f0 = func_08848BB8(a0);
    goto L_08848E40;
L_08848E40:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = !fcc;
    f3 = f0;
    if (cnd_) { goto L_08848E54; }
    goto L_08848E50;
L_08848E50:;
    f20 = f21;
    goto L_08848E54;
L_08848E54:;
    fcc = FCMP(f3, f20, 12);
    cnd_ = !fcc;
    f0 = f20;
    if (cnd_) { goto L_08848ECC; }
    goto L_08848E64;
L_08848E64:;
    v0 = LD32(s0+28);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    f4 = f3 - f21;
    if (cnd_) { goto L_08848EC4; }
    goto L_08848E74;
L_08848E74:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { f20 = f3; goto L_08848EC8; }
    goto L_08848E88;
L_08848E88:;
    f0 = f20 - f21;
    f0 = f0 / f4;
    f1 = BITSF(F2I(f0, 1));
    f2 = (float)(s32)FBITS(f1);
    f0 = f0 - f2;
    f0 = f4 * f0;
    f20 = f21 + f0;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f21; goto L_08848EB4; }
    goto L_08848EB4;
L_08848EB4:;
    fcc = FCMP(f3, f20, 12);
    cnd_ = !fcc;
    f0 = f20;
    if (cnd_) { goto L_08848ECC; }
    goto L_08848EC4;
L_08848EC4:;
    f20 = f3;
    goto L_08848EC8;
L_08848EC8:;
    f0 = f20;
    goto L_08848ECC;
L_08848ECC:;
    sp = sp + 32;
    return f0;
}

/* 08848EE4 */
void func_08848EE4(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
L_08848EE4:;
    t0 = LD32(a0+36);
    f0 = BITSF(LD32(t0));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f3 = f12;
    if (cnd_) { goto L_08848F1C; }
    goto L_08848EFC;
L_08848EFC:;
    v0 = LD32(a0+32);
    v0 = v0 << 2;
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a2, 0); goto L_08848F24; }
    goto L_08848F1C;
L_08848F1C:;
    f3 = f0;
    ST32(a2, 0);
    goto L_08848F24;
L_08848F24:;
    v0 = LD32(a0+32);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { a3 = LD32(a2); goto L_08848F64; }
    goto L_08848F30;
L_08848F30:;
    a3 = LD32(a2);
    v0 = a3 << 2;
    v0 = v0 + t0;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    v1 = a3 + 1;
    if (cnd_) { goto L_08848F64; }
    goto L_08848F50;
L_08848F50:;
    ST32(a2, v1);
    v0 = LD32(a0+32);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08848F30; }
    goto L_08848F64;
L_08848F64:;
    v0 = a3 << 2;
    v0 = v0 + t0;
    f1 = BITSF(LD32(v0+4));
    f12 = BITSF(LD32(v0));
    f0 = BITSF(0);
    f1 = f1 - f12;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088490A8; }
    goto L_08848F8C;
L_08848F8C:;
    fcc = FCMP(f12, f3, 12);
    cnd_ = !fcc;
    f0 = f3 - f12;
    if (cnd_) { goto L_088490A8; }
    goto L_08848F9C;
L_08848F9C:;
    f2 = f0 / f1;
    v0 = LD32(a0+28);
    goto L_08848FA4;
L_08848FA4:;
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088490A0; }
    goto L_08848FB0;
L_08848FB0:;
    t1 = LD32(a0+48);
    cnd_ = t1 == 0;
    if (cnd_) { goto L_088490A0; }
    goto L_08848FBC;
L_08848FBC:;
    v1 = LD32(a0+20);
    a0 = a3 << 2;
    v1 = a0 + v1;
    v0 = LD_U8(v1);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = a0 + t0;
    if (cnd_) { goto L_088490A0; }
    goto L_08848FDC;
L_08848FDC:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    v1 = a0 + a3;
    v0 = v1 << 4;
    f0 = f0 - f1;
    v0 = v0 + t1;
    a0 = v0 + 4;
    a2 = 0 + 0;
    f0 = f0 * f2;
    v1 = v1 << 2;
    f12 = f1 + f0;
    f0 = BITSF(LD32(a0));
    goto L_0884900C;
L_0884900C:;
    v0 = v1 << 2;
    a0 = a0 + 4;
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    v1 = v1 + 1;
    if (cnd_) { goto L_08849038; }
    goto L_08849024;
L_08849024:;
    a2 = a2 + 1;
    v0 = (s32)a2 < 20;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(a0)); goto L_0884900C; }
    goto L_08849034;
L_08849034:;
    v0 = v1 << 2;
    goto L_08849038;
L_08849038:;
    v0 = v0 + t1;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f3 = BITSF(a2);
    f4 = BITSF(0);
    v0 = D_08AEB9DC - (-17956);
    f2 = (float)(s32)FBITS(f3);
    f3 = f0 - f1;
    f5 = BITSF(LD32(v0-17956));
    f0 = f12 - f1;
    fcc = FCMP(f4, f3, 12);
    cnd_ = !fcc;
    f2 = f2 * f5;
    if (cnd_) { goto L_088490A0; }
    goto L_08849070;
L_08849070:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEB9D8 - (-17960);
    if (cnd_) { goto L_088490A0; }
    goto L_08849080;
L_08849080:;
    f0 = f0 / f3;
    f1 = BITSF(LD32(v0-17960));
    f0 = f0 * f5;
    f2 = f2 + f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f1; goto L_088490A0; }
    goto L_088490A0;
L_088490A0:;
    ST32(a1, FBITS(f2));
    return;
L_088490A8:;
    f2 = BITSF(0);
    v0 = LD32(a0+28);
    goto L_08848FA4;
}

/* 088490B4 */
u64 func_088490B4(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088490B4:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    f0 = func_08848E14(a0, f12);
    goto L_088490E0;
L_088490E0:;
    a0 = LD32(s1+12);
    f3 = f0;
    f0 = BITSF(LD32(a0));
    fcc = FCMP(f3, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f0; goto L_08849120; }
    goto L_088490FC;
L_088490FC:;
    v0 = LD32(s1+32);
    v0 = v0 << 2;
    v0 = v0 + a0;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0, 0); goto L_08849124; }
    goto L_0884911C;
L_0884911C:;
    f3 = f0;
    goto L_08849120;
L_08849120:;
    ST32(s0, 0);
    goto L_08849124;
L_08849124:;
    v0 = LD32(s1+32);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { a1 = LD32(s0); goto L_08849164; }
    goto L_08849130;
L_08849130:;
    a1 = LD32(s0);
    v0 = a1 << 2;
    v0 = v0 + a0;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    v1 = a1 + 1;
    if (cnd_) { goto L_08849164; }
    goto L_08849150;
L_08849150:;
    ST32(s0, v1);
    v0 = LD32(s1+32);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08849130; }
    goto L_08849164;
L_08849164:;
    a2 = LD32(s1+16);
    v0 = a1 << 2;
    v1 = v0 + a0;
    cnd_ = a2 == 0;
    f4 = BITSF(LD32(v1));
    if (cnd_) { goto L_08849184; }
    goto L_08849178;
L_08849178:;
    v0 = v0 + a2;
    f0 = BITSF(LD32(v0));
    f4 = f4 + f0;
    goto L_08849184;
L_08849184:;
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(0);
    f2 = f0 - f4;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088493D4; }
    goto L_088491A0;
L_088491A0:;
    fcc = FCMP(f4, f3, 12);
    cnd_ = !fcc;
    f0 = f3 - f4;
    if (cnd_) { goto L_088493D4; }
    goto L_088491B0;
L_088491B0:;
    f6 = f0 / f2;
    goto L_088491B4;
L_088491B4:;
    f8 = BITSF(0);
    v1 = LD32(s1+28);
    v0 = ~(0 | s2);
    fcc = FCMP(f8, f2, 12);
    cnd_ = !fcc;
    a3 = v1 & v0;
    if (cnd_) { goto L_088492AC; }
    goto L_088491D0;
L_088491D0:;
    v0 = a3 & 0x80;
    cnd_ = v0 == 0;
    v0 = a3 & 0x40;
    if (cnd_) { goto L_088492B0; }
    goto L_088491DC;
L_088491DC:;
    v0 = LD32(s1+36);
    v1 = a1 << 2;
    a0 = LD32(s1+24);
    v0 = v1 + v0;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    v1 = v1 + a0;
    f4 = BITSF(LD32(v1+4));
    f7 = f0 - f1;
    fcc = FCMP(f8, f7, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1));
    if (cnd_) { goto L_088492AC; }
    goto L_08849210;
L_08849210:;
    v0 = D_08AEB9E8 - (-17944);
    f4 = f4 * f2;
    f1 = BITSF(LD32(v0-17944));
    f2 = f0 * f2;
    v0 = D_08AEB9EC - (-17940);
    f0 = BITSF(LD32(v0-17940));
    f1 = f7 * f1;
    f3 = f2 + f4;
    f0 = f2 * f0;
    v0 = D_08AEB9E4 - (-17948);
    f5 = f6 * f6;
    f4 = f4 + f4;
    f1 = f1 - f0;
    f0 = BITSF(LD32(v0-17948));
    f3 = f3 + f3;
    f2 = f2 + f2;
    f0 = f7 * f0;
    f1 = f1 - f4;
    f4 = f5 * f6;
    f2 = f2 * f6;
    f0 = f0 + f3;
    f1 = f1 * f5;
    v0 = D_08AEB9E0 - (-17952);
    f3 = BITSF(LD32(v0-17952));
    f0 = f0 * f4;
    v0 = D_08AEB9F0 - (-17936);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-17936));
    f0 = f0 + f2;
    f6 = f0 * f1;
    f6 = f6 / f7;
    fcc = FCMP(f3, f6, 12);
    cnd_ = fcc;
    if (cnd_) { f6 = f3; goto L_0884929C; }
    goto L_0884929C;
L_0884929C:;
    fcc = FCMP(f6, f8, 12);
    cnd_ = fcc;
    if (cnd_) { f6 = f8; goto L_088492AC; }
    goto L_088492AC;
L_088492AC:;
    v0 = a3 & 0x40;
    goto L_088492B0;
L_088492B0:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s3, FBITS(f6)); goto L_088493B8; }
    goto L_088492B8;
L_088492B8:;
    a3 = LD32(s1+48);
    cnd_ = a3 == 0;
    if (cnd_) { ST32(s3, FBITS(f6)); goto L_088493B8; }
    goto L_088492C4;
L_088492C4:;
    v1 = LD32(s1+20);
    a2 = a1 << 2;
    v1 = a2 + v1;
    v0 = LD_U8(v1);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s3, FBITS(f6)); goto L_088493B8; }
    goto L_088492E4;
L_088492E4:;
    v0 = LD32(s1+36);
    a0 = a2 + a1;
    v1 = a0 << 4;
    v0 = a2 + v0;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    v1 = v1 + a3;
    a1 = v1 + 4;
    f0 = f0 - f1;
    a2 = 0 + 0;
    v1 = a0 << 2;
    f0 = f0 * f6;
    f4 = f1 + f0;
    f0 = BITSF(LD32(a1));
    goto L_0884931C;
L_0884931C:;
    v0 = v1 << 2;
    a1 = a1 + 4;
    fcc = FCMP(f4, f0, 14);
    cnd_ = fcc;
    v1 = v1 + 1;
    if (cnd_) { goto L_08849348; }
    goto L_08849334;
L_08849334:;
    a2 = a2 + 1;
    v0 = (s32)a2 < 20;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(a1)); goto L_0884931C; }
    goto L_08849344;
L_08849344:;
    v0 = v1 << 2;
    goto L_08849348;
L_08849348:;
    v0 = v0 + a3;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(a2);
    f3 = BITSF(0);
    v0 = D_08AEB9F4 - (-17932);
    f2 = (float)(s32)FBITS(f5);
    f5 = f0 - f1;
    f7 = BITSF(LD32(v0-17932));
    f0 = f4 - f1;
    fcc = FCMP(f3, f5, 12);
    cnd_ = !fcc;
    f6 = f2 * f7;
    if (cnd_) { goto L_088493B4; }
    goto L_08849380;
L_08849380:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s3, FBITS(f6)); goto L_088493B8; }
    goto L_08849390;
L_08849390:;
    f0 = f0 / f5;
    v0 = D_08AEB9E0 - (-17952);
    f1 = BITSF(LD32(v0-17952));
    f0 = f0 * f7;
    f6 = f6 + f0;
    fcc = FCMP(f1, f6, 12);
    cnd_ = fcc;
    if (cnd_) { f6 = f1; goto L_088493B4; }
    goto L_088493B4;
L_088493B4:;
    ST32(s3, FBITS(f6));
    goto L_088493B8;
L_088493B8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088493D4:;
    f6 = BITSF(0);
    goto L_088491B4;
}

/* 088493E0 */
rv_t func_088493E0(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088493E0:;
    sp = sp - 112;
    a3 = a1 << 2;
    t0 = LD32(a0+20);
    v1 = a3 + t0;
    v0 = LD32(v1);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = a1 << 1;
    if (cnd_) { goto L_088494A0; }
    goto L_08849404;
L_08849404:;
    a0 = LD32(a0+8);
    v1 = D_08AEB9F8 - (-17928);
    v0 = v0 + a1;
    f0 = BITSF(LD32(v1-17928));
    v0 = v0 << 2;
    a0 = a0 + v0;
    f0 = f0 - f12;
    v0 = a0 + 12;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a0+12));
    f4 = f4 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    v0 = a0 + 24;
    ST32(sp+24, FBITS(f4));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    f0 = BITSF(LD32(a0+24));
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f0 = f0 * f12;
    f5 = f5 * f12;
    f3 = f3 * f12;
    f1 = f1 + f0;
    f4 = f4 + f5;
    f2 = f2 + f3;
    ST32(sp+32, FBITS(f0));
    ST32(a2+8, FBITS(f4));
    ST32(a2, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f5));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f4));
    goto L_08849498;
L_08849498:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_088494A0:;
    cnd_ = (s32)a1 <= 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088494B0; }
    goto L_088494A8;
L_088494A8:;
    v0 = LD32(v1-4);
    t1 = v0 & 0x1;
    goto L_088494B0;
L_088494B0:;
    v0 = LD32(a0+32);
    v0 = v0 - 1;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088494D0; }
    goto L_088494C4;
L_088494C4:;
    v0 = a3 + t0;
    v1 = LD32(v0+4);
    v1 = v1 & 0x1;
    goto L_088494D0;
L_088494D0:;
    cnd_ = t1 != 0;
    a0 = LD32(a0+8);
    if (cnd_) { goto L_088494E0; }
    goto L_088494D8;
L_088494D8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08849660; }
    goto L_088494E0;
L_088494E0:;
    t2 = a1 << 1;
    v0 = t2 + a1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    t0 = v0 + 12;
    f0 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    ST32(sp+60, FBITS(f0));
    a3 = v0 + 24;
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f2));
    f0 = BITSF(LD32(v0+24));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    ST32(sp+72, FBITS(f0));
    ST32(sp+76, FBITS(f1));
    cnd_ = t1 == 0;
    ST32(sp+80, FBITS(f2));
    if (cnd_) { goto L_08849644; }
    goto L_0884952C;
L_0884952C:;
    f5 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(v0+24));
    f0 = BITSF(LD32(a3+4));
    f2 = f2 + f4;
    f1 = f1 + f5;
    f0 = f0 + f3;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(t0+8));
    f5 = BITSF(LD32(t0+4));
    f1 = f1 - f3;
    f2 = f2 - f4;
    f0 = f0 - f5;
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f2));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    goto L_0884958C;
L_0884958C:;
    cnd_ = v1 == 0;
    v0 = t2 + a1;
    if (cnd_) { goto L_0884961C; }
    goto L_08849594;
L_08849594:;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v1 = v0 + 12;
    a0 = v0 + 36;
    f2 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(v0+36));
    f0 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(v0+12));
    f2 = f2 + f5;
    f0 = f0 + f4;
    f1 = f1 + f3;
    v1 = v0 + 24;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    f3 = BITSF(LD32(v0+24));
    f4 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(v1+4));
    f1 = f1 - f3;
    f2 = f2 - f4;
    f0 = f0 - f5;
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+92, FBITS(f2));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    goto L_08849608;
L_08849608:;
    a0 = sp + 48;
    goto L_0884960C;
L_0884960C:;
    a1 = a2 + 0;
    { rv_t r_ = func_088497D8(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08849614;
L_08849614:;
    goto L_08849498;
L_0884961C:;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v1 = v0 + 36;
    f1 = BITSF(LD32(v0+36));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+92, FBITS(f2));
    goto L_08849608;
L_08849644:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+56, FBITS(f0));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    goto L_0884958C;
L_08849660:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    a0 = a0 + v0;
    goto L_0884960C;
}

/* 08849674 */
float func_08849674(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08849674:;
    sp = sp - 336;
    a1 = a1 & 0x1;
    s2 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0884971C; }
    goto L_0884969C;
L_0884969C:;
    v0 = a0 + 24;
    v1 = a0 + 12;
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a0+24));
    f3 = f3 - f4;
    f1 = f1 - f2;
    f0 = f0 - f5;
    ST32(sp+8, FBITS(f3));
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    goto L_088496FC;
L_088496FC:;
    sp = sp + 336;
    return f0;
L_0884971C:;
    v0 = D_08AEB9FC - (-17924);
    f20 = BITSF(LD32(v0-17924));
    s3 = sp + 16;
    s0 = 0 + 0;
    s1 = s3 + 0;
    goto L_08849730;
L_08849730:;
    f0 = BITSF(s0);
    a1 = s1 + 0;
    a0 = s2 + 0;
    f12 = (float)(s32)FBITS(f0);
    s0 = s0 + 1;
    s1 = s1 + 12;
    f12 = f12 * f20;
    { rv_t r_ = func_088497D8(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08849750;
L_08849750:;
    v0 = (s32)s0 < 21;
    cnd_ = v0 != 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_08849730; }
    goto L_0884975C;
L_0884975C:;
    f6 = BITSF(0);
    s0 = 19;
    goto L_08849764;
L_08849764:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+20));
    f0 = f0 - f5;
    f1 = f1 - f4;
    f2 = f2 - f3;
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f1);
    {v[1]=BITSF(v1);}
    v1 = FBITS(f2);
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f0));
    s0 = s0 - 1;
    v0 = v0 + 12;
    ST32(sp+4, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+8, FBITS(f2));
    cnd_ = (s32)s0 >= 0;
    f6 = f6 + f0;
    if (cnd_) { goto L_08849764; }
    goto L_088497D0;
L_088497D0:;
    f0 = f6;
    goto L_088496FC;
}

/* 088497D8 */
rv_t func_088497D8(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088497D8:;
    sp = sp - 16;
    v0 = D_08AEBA00 - (-17920);
    a2 = a0 + 0;
    a0 = a0 + 12;
    f0 = BITSF(LD32(v0-17920));
    v0 = D_08AEBA04 - (-17916);
    f21 = BITSF(LD32(a0+8));
    f20 = BITSF(LD32(a0));
    f19 = BITSF(LD32(a0+4));
    f18 = BITSF(LD32(a2+8));
    f8 = BITSF(LD32(v0-17916));
    f15 = BITSF(LD32(a2));
    f14 = BITSF(LD32(a2+4));
    a0 = a0 + 12;
    f16 = f21 * f8;
    f13 = f20 * f8;
    f3 = f20 * f0;
    f2 = f19 * f0;
    f8 = f19 * f8;
    f1 = f21 * f0;
    f7 = f15 + f15;
    f6 = f14 + f14;
    f4 = f18 + f18;
    v0 = D_08AEBA08 - (-17912);
    f11 = BITSF(LD32(a0+8));
    f9 = BITSF(LD32(a0));
    f10 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(v0-17912));
    f7 = f7 - f13;
    f6 = f6 - f8;
    f17 = f11 * f5;
    f8 = f9 * f0;
    f13 = f9 * f5;
    f4 = f4 - f16;
    f5 = f10 * f5;
    f16 = f11 * f0;
    f3 = f3 - f15;
    f0 = f10 * f0;
    f2 = f2 - f14;
    f1 = f1 - f18;
    a0 = a0 + 12;
    f3 = f3 - f8;
    f7 = f7 + f13;
    f8 = f12 * f12;
    f2 = f2 - f0;
    f6 = f6 + f5;
    f1 = f1 - f16;
    f4 = f4 + f17;
    f0 = BITSF(LD32(a0));
    f13 = BITSF(LD32(a0+8));
    f5 = BITSF(LD32(a0+4));
    f7 = f7 - f0;
    f4 = f4 - f13;
    f6 = f6 - f5;
    f3 = f3 + f0;
    f2 = f2 + f5;
    f0 = f8 * f12;
    f1 = f1 + f13;
    f9 = f9 - f15;
    f10 = f10 - f14;
    f11 = f11 - f18;
    f1 = f1 * f0;
    f4 = f4 * f8;
    f3 = f3 * f0;
    f7 = f7 * f8;
    f2 = f2 * f0;
    f6 = f6 * f8;
    f1 = f1 + f4;
    f3 = f3 + f7;
    f11 = f11 * f12;
    f2 = f2 + f6;
    f9 = f9 * f12;
    f10 = f10 * f12;
    f1 = f1 + f11;
    v0 = D_08AEBA0C - (-17908);
    f3 = f3 + f9;
    f2 = f2 + f10;
    f0 = BITSF(LD32(v0-17908));
    f1 = f1 * f0;
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 + f21;
    f3 = f3 + f20;
    f2 = f2 + f19;
    ST32(a1+8, FBITS(f1));
    ST32(a1, FBITS(f3));
    ST32(a1+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884994C */
void func_0884994C(void)
{
L_0884994C:;
    return;
}

/* 08849954 */
void func_08849954(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08849954:;
    sp = sp - 16;
    s0 = D_08B28BE0 - (-29728);
    v0 = LD32(s0-29728);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0884998C; }
    goto L_08849970;
L_08849970:;
    ST32(s0-29728, 0);
    goto L_08849974;
L_08849974:;
    v0 = D_08B28BDC - (-29732);
    ST32(v0-29732, 0);
    sp = sp + 16;
    return;
L_0884998C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849994;
L_08849994:;
    ST32(s0-29728, 0);
    goto L_08849974;
}

/* 0884999C */
rv_t func_0884999C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884999C:;
    sp = sp - 16;
    v0 = D_08B28BDC - (-29732);
    a1 = 0 + 0;
    v1 = LD32(v0-29732);
    cnd_ = (s32)v1 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08849A0C; }
    goto L_088499B8;
L_088499B8:;
    v0 = D_08B28BE0 - (-29728);
    v0 = LD32(v0-29728);
    a3 = v1 + 0;
    goto L_088499C4;
L_088499C4:;
    f0 = BITSF(LD32(v0));
    a2 = a2 + 1;
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    v1 = (s32)a2 < (s32)a3;
    if (cnd_) { goto L_088499F0; }
    goto L_088499DC;
L_088499DC:;
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f12, f1, 12);
    cnd_ = fcc;
    f2 = f12 - f0;
    if (cnd_) { goto L_08849A2C; }
    goto L_088499F0;
L_088499F0:;
    cnd_ = v1 != 0;
    v0 = v0 + 12;
    if (cnd_) { goto L_088499C4; }
    goto L_088499F8;
L_088499F8:;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08849A10; }
    goto L_08849A00;
L_08849A00:;
    a1 = LD32(a1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = 0x25c20000u; goto L_08849A1C; }
    goto L_08849A0C;
L_08849A0C:;
    v0 = 0 + 0;
    goto L_08849A10;
L_08849A10:;
    goto L_08849A14;
L_08849A14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08849A1C:;
    a0 = a0 | 0xaf8a;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08849A24;
L_08849A24:;
    goto L_08849A14;
L_08849A2C:;
    f12 = f1 - f12;
    fcc = FCMP(f2, f12, 14);
    cnd_ = fcc;
    a1 = v0 + 0;
    if (cnd_) { goto L_08849A44; }
    goto L_08849A40;
L_08849A40:;
    f2 = f12;
    goto L_08849A44;
L_08849A44:;
    v0 = D_08AEBA18 - (-17896);
    f0 = BITSF(LD32(v0-17896));
    v0 = D_08AEBA1C - (-17892);
    f1 = f2 * f0;
    f0 = BITSF(LD32(v0-17892));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08849A68; }
    goto L_08849A68;
L_08849A68:;
    ST32(a0, FBITS(f0));
    goto L_088499F8;
}

/* 08849A70 */
rv_t func_08849A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08849A70:;
    sp = sp - 32;
    v0 = D_08AEBA20 - (-17888);
    a0 = sp + 0;
    f0 = BITSF(LD32(v0-17888));
    ST32(sp, FBITS(f0));
    { rv_t r_ = func_0884999C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08849A8C;
L_08849A8C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08849A9C; }
    goto L_08849A94;
L_08849A94:;
    f12 = BITSF(LD32(sp));
    { u64 r_ = func_08849AA8(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849A9C;
L_08849A9C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08849AA8 */
u64 func_08849AA8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08849AA8:;
    sp = sp - 64;
    s1 = a0 + 0;
    f20 = f12;
    v0 = LD_U16(a0);
    v1 = v0 ^ 0x7d;
    v0 = v0 ^ 0x7b;
    cnd_ = v0 == 0;
    v1 = v1 < 0x1u;
    if (cnd_) { goto L_08849AE4; }
    goto L_08849ADC;
L_08849ADC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08849BE4; }
    goto L_08849AE4;
L_08849AE4:;
    s1 = s1 + 2;
    a1 = sp + 16;
    goto L_08849AEC;
L_08849AEC:;
    a0 = sp + 0;
    v0 = 4;
    ST32(sp+16, v0);
    func_08A6994C(a0, a1);
    goto L_08849AFC;
L_08849AFC:;
    v0 = func_08A69920();
    goto L_08849B04;
L_08849B04:;
    a0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_08849B0C;
L_08849B0C:;
    v0 = LD32(sp+16);
    s2 = v0 | 0x2181;
    v0 = func_0897A35C();
    goto L_08849B18;
L_08849B18:;
    s0 = v0 + 0;
    v0 = func_0897A35C();
    goto L_08849B20;
L_08849B20:;
    v1 = v0 + 0;
    v0 = v0 >> 24;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08849BC8; }
    goto L_08849B34;
L_08849B34:;
    f12 = f0 * f20;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    s0 = (s0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    if (cnd_) { goto L_08849BB8; }
    goto L_08849B4C;
L_08849B4C:;
    v0 = D_08AEBA24 - (-17884);
    f0 = BITSF(LD32(v0-17884));
    f0 = f12 + f0;
    goto L_08849B58;
L_08849B58:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    v0 = v0 << 24;
    s0 = s0 | v0;
    f0 = func_08A69940();
    goto L_08849B6C;
L_08849B6C:;
    f12 = BITSF(0);
    v0 = D_08AEBA28 - (-17880);
    f14 = BITSF(LD32(v0-17880));
    a0 = s1 + 0;
    f15 = f0;
    a2 = s0 + 0;
    a3 = s2 + 0;
    a1 = sp + 0;
    f13 = f12;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08849B94;
L_08849B94:;
    v0 = func_08901790();
    goto L_08849B9C;
L_08849B9C:;
    goto L_08849BA0;
L_08849BA0:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_08849BB8:;
    v0 = D_08AEBA24 - (-17884);
    f0 = BITSF(LD32(v0-17884));
    f0 = f12 - f0;
    goto L_08849B58;
L_08849BC8:;
    v0 = v0 & 0x1;
    v1 = v1 >> 25;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08849B34;
L_08849BE4:;
    { u64 r_ = func_0897A350(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849BEC;
L_08849BEC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08849BA0; }
    goto L_08849BF4;
L_08849BF4:;
    a1 = sp + 16;
    goto L_08849AEC;
}

/* 08849BFC */
void func_08849BFC(u32 a0, float f12)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08849BFC:;
    sp = sp - 32;
    s2 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08849C50; }
    goto L_08849C28;
L_08849C28:;
    s1 = 0 + 0;
    goto L_08849C2C;
L_08849C2C:;
    a0 = LD32(s0+12);
    f12 = f20;
    s2 = s2 + 1;
    a0 = a0 + s1;
    func_08849C6C(a0, f12);
    goto L_08849C40;
L_08849C40:;
    v0 = LD32(s0+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 28;
    if (cnd_) { goto L_08849C2C; }
    goto L_08849C50;
L_08849C50:;
    sp = sp + 32;
    return;
}

/* 08849C6C */
void func_08849C6C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08849C6C:;
    sp = sp - 16;
    a3 = a0 + 0;
    v0 = LD32(a0+24);
    v1 = v0 + 0;
    v1 = (v1 & ~(0xffffffu << 0)) | ((0 & 0xffffff) << 0);
    a0 = v1 >> 25;
    v1 = v1 >> 24;
    f1 = BITSF(v1);
    a1 = v1 & 0x1;
    t0 = v0 + 0;
    a1 = a1 | a0;
    f0 = (float)(s32)FBITS(f1);
    cnd_ = (s32)v1 < 0;
    t0 = (t0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    if (cnd_) { goto L_08849CFC; }
    goto L_08849CA8;
L_08849CA8:;
    f12 = f0 * f12;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    v0 = D_08AEBA2C - (-17876);
    if (cnd_) { goto L_08849CF0; }
    goto L_08849CC0;
L_08849CC0:;
    f0 = BITSF(LD32(v0-17876));
    f0 = f12 + f0;
    goto L_08849CC8;
L_08849CC8:;
    f0 = BITSF(F2I(f0, 1));
    a1 = a3 + 12;
    a0 = a3 + 0;
    v0 = FBITS(f0);
    a2 = v0 << 24;
    a2 = t0 + a2;
    func_088CF39C();
    goto L_08849CE4;
L_08849CE4:;
    sp = sp + 16;
    return;
L_08849CF0:;
    f0 = BITSF(LD32(v0-17876));
    f0 = f12 - f0;
    goto L_08849CC8;
L_08849CFC:;
    f1 = BITSF(a1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08849CA8;
}

/* 08849D0C */
void func_08849D0C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08849D0C:;
    sp = sp - 16;
    v0 = D_08AF19A8 - (6568);
    v0 = v0 + 6568;
    s1 = a0 + 0;
    ST32(s1, v0);
    a0 = a1 << 3;
    a0 = a0 - a1;
    ST32(s1+4, 0);
    a0 = a0 << 2;
    ST32(s1+8, a1);
    ST32(s1+16, 0);
    s0 = a1 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08849D4C;
L_08849D4C:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08849D64; }
    goto L_08849D54;
L_08849D54:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_08849D5C;
L_08849D5C:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_08849D5C; }
    goto L_08849D64;
L_08849D64:;
    ST32(s1+12, v0);
    sp = sp + 16;
    return;
}

/* 08849D7C */
u64 func_08849D7C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08849D7C:;
    sp = sp - 16;
    v1 = D_08AF19A8 - (6568);
    v0 = a0 + 0;
    a1 = LD32(a0+12);
    v1 = v1 + 6568;
    ST32(v0, v1);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08849DAC; }
    goto L_08849DA0;
L_08849DA0:;
    goto L_08849DA4;
L_08849DA4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08849DAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849DB4;
L_08849DB4:;
    goto L_08849DA4;
}

/* 08849DBC */
rv_t func_08849DBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08849DBC:;
    sp = sp - 16;
    v1 = D_08AF19A8 - (6568);
    v0 = a0 + 0;
    a1 = LD32(a0+12);
    v1 = v1 + 6568;
    ST32(v0, v1);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08849DEC; }
    goto L_08849DE0;
L_08849DE0:;
    goto L_08849DE4;
L_08849DE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08849DEC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849DF4;
L_08849DF4:;
    goto L_08849DE4;
}

/* 08849DFC */
rv_t func_08849DFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08849DFC:;
    sp = sp - 16;
    v0 = D_08AF19A8 - (6568);
    s0 = a0 + 0;
    v0 = v0 + 6568;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08849E3C; }
    goto L_08849E24;
L_08849E24:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849E2C;
L_08849E2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08849E3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08849E44;
L_08849E44:;
    goto L_08849E24;
}

/* 08849E4C */
rv_t func_08849E4C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08849E4C:;
    v0 = LD32(a0+4);
    t0 = a0 + 0;
    a0 = LD32(a0+8);
    v1 = v0 << 3;
    v1 = v1 - v0;
    t1 = v0 + 1;
    v0 = v0 < a0;
    sp = sp - 32;
    v1 = v1 << 2;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08849EE8; }
    goto L_08849E78;
L_08849E78:;
    v0 = LD32(t0+12);
    f0 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a1));
    v0 = v0 + v1;
    f1 = BITSF(LD32(a2+4));
    f5 = BITSF(LD32(a1+8));
    f4 = BITSF(LD32(a2+8));
    f3 = BITSF(LD32(a1+4));
    ST32(sp+12, FBITS(f0));
    v1 = v0 + 12;
    a0 = 1;
    ST32(sp, FBITS(f2));
    ST32(v0, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f5));
    ST32(v0+4, FBITS(f3));
    ST32(v0+8, FBITS(f5));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+20));
    ST32(t0+4, t1);
    ST32(v0+12, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    ST32(sp+24, a3);
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(v0+24, a3);
    goto L_08849EE8;
L_08849EE8:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08849EF4 */
void func_08849EF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_08849EF4:;
    v0 = D_08AD4714 - (18196);
    t1 = v0 + 18196;
    sp = sp - 224;
    v1 = t1 & 0x3;
    t2 = a1 + 0;
    s5 = a0 + 0;
    t3 = t1 + 48;
    s4 = t0 + 0;
    t0 = sp + 0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0884A160; }
    goto L_08849F38;
L_08849F38:;
    v0 = t3 + 0;
    goto L_08849F3C;
L_08849F3C:;
    v1 = LDU32(t1);
    a0 = LDU32(t1+4);
    a1 = LDU32(t1+8);
    t3 = LDU32(t1+12);
    STU32(t0, v1);
    STU32(t0+4, a0);
    STU32(t0+8, a1);
    STU32(t0+12, t3);
    t1 = t1 + 16;
    cnd_ = t1 != v0;
    t0 = t0 + 16;
    if (cnd_) { goto L_08849F3C; }
    goto L_08849F88;
L_08849F88:;
    s2 = sp + 48;
    goto L_08849F8C;
L_08849F8C:;
    f8 = BITSF(LD32(a2+8));
    f7 = BITSF(LD32(a2));
    f6 = BITSF(LD32(a2+4));
    s3 = 0 + 0;
    a2 = 0 + 0;
    a1 = s2 + 0;
    t1 = sp + 56;
    t0 = sp + 52;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+32);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[104]=d0;v[105]=d1;v[106]=d2;v[107]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    {v[104]=BITSF(v0);}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {v[105]=BITSF(v1);}
    v0 = LD32(a3+8);
    v1 = LD32(a3+12);
    {v[106]=BITSF(v0);}
    {v[100]=BITSF(v1);}
    v0 = LD32(a3+16);
    v1 = LD32(a3+20);
    {v[101]=BITSF(v0);}
    v0 = LD32(a3+24);
    {v[102]=BITSF(v1);}
    {v[96]=BITSF(v0);}
    v1 = LD32(a3+28);
    {v[97]=BITSF(v1);}
    {v[98]=BITSF(a0);}
    goto L_0884A000;
L_0884A000:;
    v0 = a2 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(t2+4)); goto L_0884A010; }
    goto L_0884A00C;
L_0884A00C:;
    f0 = BITSF(LD32(t2));
    goto L_0884A010;
L_0884A010:;
    v0 = a2 & 0x2;
    ST32(a1, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = t0 + 0;
    if (cnd_) { goto L_0884A158; }
    goto L_0884A020;
L_0884A020:;
    f0 = BITSF(LD32(t2+8));
    goto L_0884A024;
L_0884A024:;
    v0 = a2 & 0x4;
    ST32(v1, FBITS(f0));
    cnd_ = v0 != 0;
    v1 = t1 + 0;
    if (cnd_) { goto L_0884A150; }
    goto L_0884A034;
L_0884A034:;
    f0 = BITSF(LD32(t2+16));
    goto L_0884A038;
L_0884A038:;
    ST32(v1, FBITS(f0));
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
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
    f4 = f2 + f7;
    f5 = f3 + f8;
    f0 = f0 + f6;
    a2 = a2 + 1;
    v0 = a2 < 0x8u;
    ST32(sp+176, v1);
    t0 = t0 + 12;
    t1 = t1 + 12;
    ST32(sp+180, a0);
    ST32(sp+184, FBITS(f3));
    ST32(sp+160, v1);
    ST32(sp+164, a0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+144, FBITS(f4));
    ST32(sp+148, FBITS(f0));
    ST32(a1, FBITS(f4));
    ST32(a1+4, FBITS(f0));
    ST32(sp+152, FBITS(f5));
    ST32(a1+8, FBITS(f5));
    cnd_ = v0 != 0;
    a1 = a1 + 12;
    if (cnd_) { goto L_0884A000; }
    goto L_0884A0D8;
L_0884A0D8:;
    s1 = 0 + 0;
    s0 = sp + 0;
    goto L_0884A0E0;
L_0884A0E0:;
    v1 = LD_U16(s0+2);
    v0 = LD_U16(s0);
    a0 = s5 + 0;
    a2 = v1 << 1;
    a1 = v0 << 1;
    a2 = a2 + v1;
    a1 = a1 + v0;
    a1 = a1 << 2;
    a2 = a2 << 2;
    a1 = s2 + a1;
    a2 = s2 + a2;
    a3 = s4 + 0;
    s1 = s1 + 2;
    { rv_t r_ = func_08849E4C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A118;
L_0884A118:;
    v1 = s1 < 0x18u;
    s3 = s3 + v0;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0884A0E0; }
    goto L_0884A128;
L_0884A128:;
    v0 = s3 + 0;
    sp = sp + 224;
    return;
L_0884A150:;
    f0 = BITSF(LD32(t2+20));
    goto L_0884A038;
L_0884A158:;
    f0 = BITSF(LD32(t2+12));
    goto L_0884A024;
L_0884A160:;
    v0 = LD32(t1);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    a1 = LD32(t1+12);
    ST32(t0, v0);
    t1 = t1 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = t1 != t3;
    ST32(t0-4, a1);
    if (cnd_) { goto L_0884A160; }
    goto L_0884A18C;
L_0884A18C:;
    s2 = sp + 48;
    goto L_08849F8C;
}

/* 0884A194 */
rv_t func_0884A194(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0884A194:;
    v0 = t0 < 0x1u;
    v1 = a3 < 0x1u;
    sp = sp - 160;
    v1 = v1 | v0;
    v0 = 0 + 0;
    fp = a2 + 0;
    s5 = t0 + 0;
    s3 = a3 + 0;
    s1 = a1 + 0;
    f20 = f12;
    cnd_ = v1 == 0;
    ST32(sp, a0);
    if (cnd_) { goto L_0884A224; }
    goto L_0884A1F0;
L_0884A1F0:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_0884A224:;
    s0 = t0 + 1;
    { s64 p_ = (s64)(s32)a3 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = lo;
    a0 = s0 << 1;
    a0 = a0 + s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A240;
L_0884A240:;
    s4 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_0884A25C; }
    goto L_0884A24C;
L_0884A24C:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_0884A254;
L_0884A254:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_0884A254; }
    goto L_0884A25C;
L_0884A25C:;
    v0 = D_08AEBA38 - (-17864);
    f10 = BITSF(LD32(v0-17864));
    v0 = D_08AEBA40 - (-17856);
    t2 = v0 - 17856;
    v0 = 0 < s3;
    {v[8]=0.63661977236f;}
    ST32(sp+80, v0);
    a0 = D_08AEBA3C - (-17860);
    v1 = s5 >> 1;
    t1 = s5 & 0x1;
    f11 = BITSF(LD32(a0-17860));
    t1 = t1 | v1;
    a0 = a0 - 17860;
    a2 = s4 + 0;
    s6 = 0 + 0;
    t0 = 0 + 0;
    goto L_0884A29C;
L_0884A29C:;
    f1 = BITSF(t0);
    cnd_ = (s32)t0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0884A52C; }
    goto L_0884A2A8;
L_0884A2A8:;
    f2 = BITSF(s5);
    f1 = f0 * f10;
    cnd_ = (s32)s5 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_0884A51C; }
    goto L_0884A2B8;
L_0884A2B8:;
    f0 = f11 / f0;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f3 = BITSF(LD32(s1+4));
    a1 = 0 + 0;
    f1 = f1 * f0;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[4];float t0=v[8];float d0=s0*t0;v[4]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[4]);}
    f1 = f20 * f0;
    f0 = BITSF(v0);
    v0 = LD32(sp+80);
    f7 = f3 + f1;
    cnd_ = v0 == 0;
    f6 = f20 * f0;
    if (cnd_) { goto L_0884A3CC; }
    goto L_0884A318;
L_0884A318:;
    f9 = BITSF(LD32(t2));
    f8 = BITSF(LD32(a0));
    v0 = s3 >> 1;
    a3 = s3 & 0x1;
    a3 = a3 | v0;
    goto L_0884A32C;
L_0884A32C:;
    f1 = BITSF(a1);
    v1 = a1 & 0x1;
    v0 = a1 >> 1;
    v1 = v1 | v0;
    cnd_ = (s32)a1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0884A50C; }
    goto L_0884A344;
L_0884A344:;
    f2 = BITSF(s3);
    a1 = a1 + 1;
    f1 = f0 * f9;
    v1 = a1 < s3;
    cnd_ = (s32)s3 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_0884A4FC; }
    goto L_0884A35C;
L_0884A35C:;
    f0 = f8 / f0;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s1));
    f5 = BITSF(LD32(s1+8));
    ST32(a2+4, FBITS(f7));
    f1 = f1 * f0;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v[4]=BITSF(v0);}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[0];float t0=v[8];float d0=s0*t0;v[0]=d0;}
    {float s0=v[4];float t0=v[8];float d0=s0*t0;v[4]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f3 = BITSF(v0);
    f1 = f6 * f2;
    f0 = f6 * f3;
    f5 = f5 + f1;
    f4 = f4 + f0;
    ST32(a2+8, FBITS(f5));
    ST32(a2, FBITS(f4));
    cnd_ = v1 != 0;
    a2 = a2 + 12;
    if (cnd_) { goto L_0884A32C; }
    goto L_0884A3CC;
L_0884A3CC:;
    t0 = t0 + 1;
    v0 = s5 < t0;
    cnd_ = v0 == 0;
    s7 = 1;
    if (cnd_) { goto L_0884A29C; }
    goto L_0884A3DC;
L_0884A3DC:;
    v0 = s7 < s5;
    cnd_ = v0 == 0;
    v0 = LD32(sp+80);
    if (cnd_) { goto L_0884A460; }
    goto L_0884A3E8;
L_0884A3E8:;
    s2 = s3 + 0;
    goto L_0884A3EC;
L_0884A3EC:;
    v0 = LD32(sp+80);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0884A44C; }
    goto L_0884A3F8;
L_0884A3F8:;
    s1 = s2 + 0;
    goto L_0884A3FC;
L_0884A3FC:;
    s0 = a0 + 1;
    { u32 x_ = s0, y_ = s3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = s1 + a0;
    a1 = v0 << 1;
    a1 = a1 + v0;
    a0 = LD32(sp);
    a1 = a1 << 2;
    a1 = s4 + a1;
    a3 = fp + 0;
    v1 = hi;
    v1 = s1 + v1;
    a2 = v1 << 1;
    a2 = a2 + v1;
    a2 = a2 << 2;
    a2 = s4 + a2;
    { rv_t r_ = func_08849E4C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A43C;
L_0884A43C:;
    v1 = s0 < s3;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s6 = s6 + v0;
    if (cnd_) { goto L_0884A3FC; }
    goto L_0884A44C;
L_0884A44C:;
    s7 = s7 + 1;
    v0 = s7 < s5;
    cnd_ = v0 != 0;
    s2 = s2 + s3;
    if (cnd_) { goto L_0884A3EC; }
    goto L_0884A45C;
L_0884A45C:;
    v0 = LD32(sp+80);
    goto L_0884A460;
L_0884A460:;
    cnd_ = v0 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_0884A4DC; }
    goto L_0884A468;
L_0884A468:;
    v0 = 0 < s5;
    ST32(sp+84, v0);
    v0 = LD32(sp+84);
    goto L_0884A474;
L_0884A474:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0884A4CC; }
    goto L_0884A47C;
L_0884A47C:;
    v0 = s3 + s7;
    v1 = v0 << 1;
    a0 = s7 << 1;
    s2 = v1 + v0;
    s1 = a0 + s7;
    goto L_0884A490;
L_0884A490:;
    a0 = LD32(sp);
    a1 = s1 << 2;
    a2 = s2 << 2;
    a1 = s4 + a1;
    a2 = s4 + a2;
    a3 = fp + 0;
    { rv_t r_ = func_08849E4C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A4AC;
L_0884A4AC:;
    s0 = s0 + 1;
    v1 = s3 << 1;
    v1 = v1 + s3;
    a0 = s0 < s5;
    s6 = s6 + v0;
    s2 = s2 + v1;
    cnd_ = a0 != 0;
    s1 = s1 + v1;
    if (cnd_) { goto L_0884A490; }
    goto L_0884A4CC;
L_0884A4CC:;
    s7 = s7 + 1;
    v0 = s7 < s3;
    cnd_ = v0 != 0;
    v0 = LD32(sp+84);
    if (cnd_) { goto L_0884A474; }
    goto L_0884A4DC;
L_0884A4DC:;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_0884A4EC; }
    goto L_0884A4E4;
L_0884A4E4:;
    v0 = s6 + 0;
    goto L_0884A1F0;
L_0884A4EC:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884A4F4;
L_0884A4F4:;
    v0 = s6 + 0;
    goto L_0884A1F0;
L_0884A4FC:;
    f2 = BITSF(a3);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0884A35C;
L_0884A50C:;
    f2 = BITSF(v1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0884A344;
L_0884A51C:;
    f2 = BITSF(t1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0884A2B8;
L_0884A52C:;
    v0 = t0 & 0x1;
    v1 = t0 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0884A2A8;
}

/* 0884A548 */
rv_t func_0884A548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0884A548:;
    return (rv_t){ v0, v1, f0 };
}

/* 0884A550 */
rv_t func_0884A550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884A550:;
    sp = sp - 16;
    v0 = D_08AEBA44 - (-17852);
    s0 = a0 + 0;
    f12 = BITSF(LD32(v0-17852));
    func_08849BFC(a0, f12);
    goto L_0884A56C;
L_0884A56C:;
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A57C;
L_0884A57C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884A58C */
void func_0884A58C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884A58C:;
    sp = sp - 16;
    s0 = D_08B28BE8 - (-29720);
    a0 = 1024;
    v0 = LD32(s0-29720);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884A5C4; }
    goto L_0884A5A8;
L_0884A5A8:;
    v0 = func_0884A6C0(a0, t1, t2, t3);
    goto L_0884A5B0;
L_0884A5B0:;
    ST32(s0-29720, v0);
    goto L_0884A5B8;
L_0884A5B8:;
    sp = sp + 16;
    return;
L_0884A5C4:;
    func_0884A624(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884A5CC;
L_0884A5CC:;
    goto L_0884A5B8;
}

/* 0884A5D4 */
void func_0884A5D4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884A5D4:;
    sp = sp - 16;
    v0 = D_08B28BE4 - (-29724);
    v0 = LD32(v0-29724);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0884A618; }
    goto L_0884A5F0;
L_0884A5F0:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    s0 = LD32(v0+16);
    if (cnd_) { goto L_0884A60C; }
    goto L_0884A5FC;
L_0884A5FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A60C;
L_0884A60C:;
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_0884A5F0; }
    goto L_0884A614;
L_0884A614:;
    goto L_0884A618;
L_0884A618:;
    sp = sp + 16;
    return;
}

/* 0884A624 */
void func_0884A624(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0884A624:;
    sp = sp - 32;
    s3 = D_08B28BE4 - (-29724);
    s0 = LD32(s3-29724);
    s2 = 0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0884A684; }
    goto L_0884A64C;
L_0884A64C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    s1 = LD32(s0+16);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A660;
L_0884A660:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A670;
L_0884A670:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0884A6A0; }
    goto L_0884A678;
L_0884A678:;
    s2 = s0 + 0;
    goto L_0884A67C;
L_0884A67C:;
    cnd_ = s1 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_0884A64C; }
    goto L_0884A684;
L_0884A684:;
    sp = sp + 32;
    return;
L_0884A6A0:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A6B0;
L_0884A6B0:;
    cnd_ = s2 == 0;
    if (cnd_) { ST32(s3-29724, s1); goto L_0884A67C; }
    goto L_0884A6B8;
L_0884A6B8:;
    ST32(s2+16, s1);
    goto L_0884A67C;
}

/* 0884A6C0 */
u32 func_0884A6C0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884A6C0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A6DC;
L_0884A6DC:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    s1 = v0 + 0;
    func_08849D0C(a0, a1, 0, 0, 0);
    goto L_0884A6EC;
L_0884A6EC:;
    v0 = D_08AF1988 - (6536);
    v0 = v0 + 6536;
    v1 = D_08B28BE4 - (-29724);
    cnd_ = s1 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0884A70C; }
    goto L_0884A700;
L_0884A700:;
    v0 = LD32(v1-29724);
    ST32(s1+16, v0);
    ST32(v1-29724, s1);
    goto L_0884A70C;
L_0884A70C:;
    v0 = s1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0884A724 */
void func_0884A724(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0884A724:;
    sp = sp - 48;
    s3 = D_08B28BE4 - (-29724);
    v0 = D_08B285A0 - (-31328);
    s2 = 0 + 0;
    s0 = LD32(s3-29724);
    cnd_ = s0 == 0;
    f20 = BITSF(LD32(v0-31328));
    if (cnd_) { goto L_0884A794; }
    goto L_0884A758;
L_0884A758:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    f12 = f20;
    v0 = LD32(v1+12);
    t_ = v0;
    s1 = LD32(s0+16);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A770;
L_0884A770:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A780;
L_0884A780:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0884A7B4; }
    goto L_0884A788;
L_0884A788:;
    s2 = s0 + 0;
    goto L_0884A78C;
L_0884A78C:;
    cnd_ = s1 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_0884A758; }
    goto L_0884A794;
L_0884A794:;
    sp = sp + 48;
    return;
L_0884A7B4:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A7C4;
L_0884A7C4:;
    cnd_ = s2 == 0;
    if (cnd_) { ST32(s3-29724, s1); goto L_0884A78C; }
    goto L_0884A7CC;
L_0884A7CC:;
    ST32(s2+16, s1);
    goto L_0884A78C;
}

/* 0884A7D4 */
void func_0884A7D4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884A7D4:;
    sp = sp - 16;
    v0 = D_08B28BE4 - (-29724);
    a0 = LD32(v0-29724);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884A80C; }
    goto L_0884A7F0;
L_0884A7F0:;
    v0 = LD32(a0);
    v1 = LD32(v0+16);
    t_ = v1;
    s0 = LD32(a0+16);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884A800;
L_0884A800:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0884A7F0; }
    goto L_0884A808;
L_0884A808:;
    goto L_0884A80C;
L_0884A80C:;
    sp = sp + 16;
    return;
}

/* 0884A818 */
void func_0884A818(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0884A818:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    v1 = (u32)-1;
    ST32(a0, v0);
    ST16(a0+34, v1);
    ST32(a0+36, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    ST16(a0+32, 0);
    return;
}

/* 0884A854 */
void func_0884A854(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0884A854:;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a0+16)); goto L_0884A880; }
    goto L_0884A86C;
L_0884A86C:;
    v0 = D_08AEBA4C - (-17844);
    f0 = BITSF(LD32(v0-17844));
    f0 = f1 + f0;
    ST32(a0+8, FBITS(f0));
    f1 = BITSF(LD32(a0+16));
    goto L_0884A880;
L_0884A880:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a0+24)); goto L_0884A8A8; }
    goto L_0884A894;
L_0884A894:;
    v0 = D_08AEBA4C - (-17844);
    f0 = BITSF(LD32(v0-17844));
    f0 = f1 + f0;
    ST32(a0+16, FBITS(f0));
    f1 = BITSF(LD32(a0+24));
    goto L_0884A8A8;
L_0884A8A8:;
    f0 = BITSF(LD32(a0+20));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = D_08AEBA4C - (-17844);
    if (cnd_) { goto L_0884A8C8; }
    goto L_0884A8BC;
L_0884A8BC:;
    f0 = BITSF(LD32(v0-17844));
    f0 = f1 + f0;
    ST32(a0+24, FBITS(f0));
    goto L_0884A8C8;
L_0884A8C8:;
    return;
}

/* 0884A8D0 */
rv_t func_0884A8D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0884A8D0:;
    sp = sp - 160;
    t5 = a1 + 0;
    t4 = a2 + 0;
    cnd_ = (s32)a1 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884AC74; }
    goto L_0884A8E4;
L_0884A8E4:;
    v0 = LD32(a2);
    cnd_ = v0 == 0;
    v0 = v1 + 0;
    if (cnd_) { goto L_0884AC78; }
    goto L_0884A8F0;
L_0884A8F0:;
    f6 = BITSF(LD32(a3+8));
    f5 = BITSF(LD32(a3));
    f4 = BITSF(LD32(a3+4));
    t2 = 0 + 0;
    t3 = 0 + 0;
    v0 = t2 << 1;
    goto L_0884A908;
L_0884A908:;
    v0 = v0 + t2;
    a2 = v0 << 2;
    t1 = 0 + 0;
    a3 = 0 + 0;
    goto L_0884A918;
L_0884A918:;
    a1 = a2 + sp;
    goto L_0884A91C;
L_0884A91C:;
    cnd_ = t3 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+4)); goto L_0884A928; }
    goto L_0884A924;
L_0884A924:;
    f0 = BITSF(LD32(a0+8));
    goto L_0884A928;
L_0884A928:;
    ST32(a1, FBITS(f0));
    cnd_ = t1 == 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_0884AC88; }
    goto L_0884A934;
L_0884A934:;
    f0 = BITSF(LD32(a0+16));
    goto L_0884A938;
L_0884A938:;
    ST32(v0+4, FBITS(f0));
    cnd_ = a3 == 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_0884AC80; }
    goto L_0884A944;
L_0884A944:;
    f0 = BITSF(LD32(a0+24));
    goto L_0884A948;
L_0884A948:;
    cnd_ = t0 == 0;
    ST32(v0+8, FBITS(f0));
    if (cnd_) { goto L_0884AA08; }
    goto L_0884A950;
L_0884A950:;
    v1 = LD32(t0);
    v0 = LD32(t0+4);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    v1 = LD32(t0+8);
    {v[49]=BITSF(v0);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = LD32(t0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(t0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {v[48]=BITSF(v1);}
    v1 = LD32(t0+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(t0+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(t0+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(t0+32);
    {v[33]=BITSF(v0);}
    v0 = LD32(a1+4);
    {v[34]=BITSF(v1);}
    v1 = LD32(a1);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(a1+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(sp+112, v1);
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f3));
    ST32(sp+96, v1);
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f3));
    ST32(a1, v1);
    ST32(a1+4, v0);
    ST32(a1+8, FBITS(f3));
    goto L_0884AA08;
L_0884AA08:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f0 = f0 + f5;
    f1 = f1 + f4;
    f2 = f2 + f6;
    a3 = a3 + 1;
    v0 = (s32)a3 < 2;
    ST32(a1, FBITS(f0));
    t2 = t2 + 1;
    a2 = a2 + 12;
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    cnd_ = v0 != 0;
    a1 = a1 + 12;
    if (cnd_) { goto L_0884A91C; }
    goto L_0884AA44;
L_0884AA44:;
    t1 = t1 + 1;
    v0 = (s32)t1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = 0 + 0; goto L_0884A918; }
    goto L_0884AA54;
L_0884AA54:;
    t3 = t3 + 1;
    v0 = (s32)t3 < 2;
    cnd_ = v0 != 0;
    v0 = t2 << 1;
    if (cnd_) { goto L_0884A908; }
    goto L_0884AA64;
L_0884AA64:;
    f8 = BITSF(0);
    v0 = D_08B15AF8 - (23288);
    t1 = v0 + 23288;
    t2 = 0 + 0;
    t3 = 0 + 0;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[12]=(float)1;v[13]=(float)1;v[14]=(float)1;v[15]=(float)1;}
    goto L_0884AA7C;
L_0884AA7C:;
    cnd_ = t5 == t2;
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    if (cnd_) { goto L_0884AC70; }
    goto L_0884AA84;
L_0884AA84:;
    v1 = LD32(t1);
    a0 = LD32(t1+4);
    t0 = LD32(t4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    a2 = sp + v0;
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+4));
    v0 = a0 << 1;
    ST32(t0+8, FBITS(f0));
    v0 = v0 + a0;
    v0 = v0 << 2;
    ST32(t0+4, FBITS(f1));
    a1 = sp + v0;
    a0 = t0 + 12;
    v1 = LD32(t1+8);
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    v0 = v1 << 1;
    ST32(a0+8, FBITS(f0));
    v0 = v0 + v1;
    v0 = v0 << 2;
    ST32(a0+4, FBITS(f1));
    v1 = sp + v0;
    a3 = t0 + 24;
    f5 = BITSF(LD32(a2));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(t0, FBITS(f5));
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(a3+4, FBITS(f0));
    v0 = t0 + 36;
    ST32(a3+8, FBITS(f2));
    f1 = BITSF(LD32(a1));
    f3 = BITSF(LD32(t0+4));
    f4 = BITSF(LD32(t0+8));
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+4));
    ST32(t0+12, FBITS(f1));
    f2 = f2 - f4;
    f1 = f1 - f5;
    f0 = f0 - f3;
    f3 = BITSF(LD32(v1));
    ST32(sp+104, FBITS(f2));
    v1 = FBITS(f1);
    ST32(t0+24, FBITS(f3));
    {v[8]=BITSF(v1);}
    v1 = FBITS(f0);
    ST32(sp+96, FBITS(f1));
    {v[9]=BITSF(v1);}
    v1 = FBITS(f2);
    ST32(sp+100, FBITS(f0));
    {v[10]=BITSF(v1);}
    f2 = BITSF(LD32(t0));
    f0 = BITSF(LD32(t0+4));
    f1 = BITSF(LD32(t0+8));
    f7 = BITSF(LD32(a3+8));
    f6 = BITSF(LD32(t0+24));
    f5 = BITSF(LD32(a3+4));
    f7 = f7 - f1;
    f6 = f6 - f2;
    f5 = f5 - f0;
    v1 = FBITS(f6);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f5);
    {v[1]=BITSF(v1);}
    v1 = FBITS(f7);
    {v[2]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v1=FBITS(v[6]);}
    f4 = BITSF(v1);
    {v1=FBITS(v[4]);}
    f1 = BITSF(v1);
    f3 = BITSF(v1);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v1 = FBITS(f1);
    {v[8]=BITSF(v1);}
    {v1=FBITS(v[5]);}
    f0 = BITSF(v1);
    f2 = BITSF(v1);
    ST32(sp+128, FBITS(f6));
    v1 = FBITS(f0);
    {v[9]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[10]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+132, FBITS(f5));
    fcc = FCMP(f0, f8, 2);
    ST32(sp+136, FBITS(f7));
    ST32(sp+144, FBITS(f3));
    ST32(sp+148, FBITS(f2));
    ST32(sp+152, FBITS(f4));
    ST32(sp+112, FBITS(f3));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f4));
    ST32(t0+36, FBITS(f3));
    ST32(v0+4, FBITS(f2));
    cnd_ = fcc;
    ST32(v0+8, FBITS(f4));
    if (cnd_) { goto L_0884AC54; }
    goto L_0884AC1C;
L_0884AC1C:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f2 = BITSF(v1);
    {v1=FBITS(v[0]);}
    f3 = BITSF(v1);
    ST32(v0+8, FBITS(f2));
    {v1=FBITS(v[1]);}
    ST32(t0+36, FBITS(f3));
    ST32(v0+4, v1);
    ST32(sp+152, FBITS(f2));
    ST32(sp+144, FBITS(f3));
    ST32(sp+148, v1);
    goto L_0884AC54;
L_0884AC54:;
    t3 = t3 + 1;
    v0 = t0 + 48;
    v1 = (s32)t3 < 12;
    ST32(t4, v0);
    t2 = t2 + 1;
    cnd_ = v1 != 0;
    t1 = t1 + 12;
    if (cnd_) { goto L_0884AA7C; }
    goto L_0884AC70;
L_0884AC70:;
    v1 = t2 + 0;
    goto L_0884AC74;
L_0884AC74:;
    v0 = v1 + 0;
    goto L_0884AC78;
L_0884AC78:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_0884AC80:;
    f0 = BITSF(LD32(a0+20));
    goto L_0884A948;
L_0884AC88:;
    f0 = BITSF(LD32(a0+12));
    goto L_0884A938;
}

/* 0884AC90 */
rv_t func_0884AC90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[656] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 656);
L_0884AC90:;
    sp = sp - 656;
    s6 = t0 + 0;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a2 + 0;
    v0 = LD32(a3+48);
    v1 = LD_U16(a0+32);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0884AD48; }
    goto L_0884ACFC;
L_0884ACFC:;
    v0 = a3 + 0;
    sp = sp + 656;
    return (rv_t){ v0, v1, f0 };
L_0884AD48:;
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
    v0 = D_08AEBA50 - (-17840);
    f0 = BITSF(LD32(v0-17840));
    v1 = LD32(a2+20);
    v0 = LD32(a2+28);
    f4 = f4 * f0;
    f6 = f6 * f0;
    f5 = f5 * f0;
    f7 = BITSF(LD32(a1));
    f8 = BITSF(LD32(a1+4));
    f9 = BITSF(LD32(a1+8));
    {v[34]=BITSF(v1);}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(a2+24);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(a2+32);
    {v[33]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[34]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = FBITS(f5);
    {v[21]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[22]=BITSF(v0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f7 = f7 + f2;
    f9 = f9 + f3;
    f8 = f8 + f0;
    f12 = BITSF(LD32(a0+28));
    s5 = s1 + 12;
    a0 = s1 + 0;
    a1 = s5 + 0;
    a2 = sp + 0;
    a3 = sp + 160;
    ST32(sp, FBITS(f7));
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    ST32(sp+4, FBITS(f8));
    ST32(sp+8, FBITS(f9));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f4));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { rv_t r_ = func_088347A0(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884AEB4;
L_0884AEB4:;
    {u32 a_=sp+(448);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(512);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0884AED8; }
    goto L_0884AEC0;
L_0884AEC0:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+160));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = BITSF(LD32(s0+20)); goto L_0884AEE0; }
    goto L_0884AED8;
L_0884AED8:;
    a3 = 0 + 0;
    goto L_0884ACFC;
L_0884AEE0:;
    f18 = BITSF(LD32(s0+4));
    f13 = BITSF(LD32(s0+8));
    f14 = BITSF(LD32(s0+12));
    f16 = BITSF(LD32(s0+24));
    f17 = BITSF(LD32(s0+28));
    v0 = FBITS(f18);
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {v[76]=BITSF(v0);}
    v0 = FBITS(f13);
    {v[77]=BITSF(v0);}
    v0 = FBITS(f14);
    {v[78]=BITSF(v0);}
    v0 = FBITS(f15);
    {v[72]=BITSF(v0);}
    v0 = FBITS(f16);
    {v[73]=BITSF(v0);}
    v0 = FBITS(f17);
    {v[74]=BITSF(v0);}
    {v0=FBITS(v[73]);}
    f0 = BITSF(v0);
    f26 = BITSF(v0);
    {v0=FBITS(v[78]);}
    f1 = BITSF(v0);
    f25 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s2+8));
    f10 = BITSF(LD32(s1));
    f2 = BITSF(LD32(s2+4));
    f11 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s1+8));
    f27 = BITSF(v0);
    v0 = FBITS(f1);
    f1 = BITSF(LD32(s2));
    v1 = FBITS(f0);
    f23 = BITSF(LD32(s0+16));
    a0 = FBITS(f25);
    {u32 a_=sp+(288);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(a0);}
    {v[64]=BITSF(a0);}
    {v[69]=BITSF(v0);}
    {v[65]=BITSF(v0);}
    {v0=FBITS(v[76]);}
    f24 = BITSF(v0);
    {v0=FBITS(v[74]);}
    f0 = BITSF(v0);
    f10 = f10 - f1;
    f11 = f11 - f2;
    f12 = f12 - f3;
    f9 = BITSF(LD32(s1+12));
    f8 = BITSF(LD32(s5+8));
    f7 = BITSF(LD32(s5+4));
    f21 = BITSF(LD32(s0+32));
    {v[70]=BITSF(v1);}
    {v[66]=BITSF(v1);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    v1 = FBITS(f0);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a0 = FBITS(f24);
    f22 = BITSF(v0);
    {u32 a_=sp+(304);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = FBITS(f23);
    {v[68]=BITSF(a0);}
    {u32 a_=sp+(240);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[69]=BITSF(v0);}
    {v[64]=BITSF(a0);}
    {v[65]=BITSF(v0);}
    {v0=FBITS(v[77]);}
    f0 = BITSF(v0);
    f19 = BITSF(v0);
    {v0=FBITS(v[72]);}
    f1 = BITSF(v0);
    {v[70]=BITSF(v1);}
    {v[66]=BITSF(v1);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = FBITS(f1);
    a0 = FBITS(f21);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    f20 = BITSF(v0);
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(256);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(v0);}
    {v[64]=BITSF(v0);}
    {v[69]=BITSF(v1);}
    v0 = FBITS(f10);
    {v[70]=BITSF(a0);}
    {v[65]=BITSF(v1);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {v[66]=BITSF(a0);}
    {u32 a_=sp+(208);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[36]=BITSF(v0);}
    {u32 a_=sp+(272);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    v0 = FBITS(f9);
    {v[40]=BITSF(v0);}
    v0 = FBITS(f11);
    {v[37]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[41]=BITSF(v0);}
    v0 = FBITS(f12);
    {v[38]=BITSF(v0);}
    v0 = FBITS(f8);
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v[42]=BITSF(v0);}
    {v0=FBITS(v[34]);}
    {float t0=v[40];float t1=v[41];float t2=v[42];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    f5 = BITSF(v0);
    {v0=FBITS(v[32]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[33]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[2]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f4 = BITSF(v0);
    a0 = sp + 48;
    a1 = sp + 32;
    a2 = s4 + 0;
    t1 = sp + 128;
    t2 = sp + 112;
    a3 = sp + 160;
    t0 = 0 + 0;
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f3));
    ST32(sp+64, FBITS(f25));
    ST32(sp+80, FBITS(f23));
    ST32(sp+96, FBITS(f21));
    ST32(sp+84, FBITS(f22));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f5));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f6));
    ST32(sp+88, FBITS(f19));
    ST32(sp+92, FBITS(f20));
    ST32(sp+68, FBITS(f27));
    ST32(sp+72, FBITS(f26));
    ST32(sp+76, FBITS(f24));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f6));
    ST32(sp+112, FBITS(f4));
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f6));
    { rv_t r_ = func_08834B8C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B130;
L_0884B130:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(576);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0884AED8; }
    goto L_0884B138;
L_0884B138:;
    f1 = BITSF(LD32(sp+160));
    f0 = BITSF(LD32(s6));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = 0 + 0; goto L_0884ACFC; }
    goto L_0884B150;
L_0884B150:;
    v0 = LD_U16(s3+32);
    v1 = (u32)-1;
    ST32(s6, FBITS(f1));
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST16(s6+16, v0);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[108]=d0;v[109]=d1;v[110]=d2;v[111]=d3;}
    a1 = s6 + 20;
    v0 = LD_U16(s3+34);
    ST32(s6+12, v1);
    a3 = 1;
    ST16(s6+18, v0);
    v0 = LD_U8(sp+128);
    ST32(s6+8, v1);
    ST8(s6+33, v0);
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(s0+8);
    {v[1]=BITSF(v1);}
    v1 = LD32(s0+16);
    {v[2]=BITSF(v0);}
    v0 = LD32(s0+12);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {u32 a_=sp+(368);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(s0+20);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    a0 = LD32(s0+32);
    v0 = LD32(s0+24);
    v1 = LD32(s0+28);
    {u32 a_=sp+(384);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {v[0]=BITSF(v0);}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    v0 = LD32(sp+112);
    {v[1]=BITSF(v1);}
    {v[4]=BITSF(v0);}
    {v[2]=BITSF(a0);}
    v1 = LD32(sp+116);
    a0 = LD32(sp+120);
    {v[5]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[104]=d0;v[105]=d1;v[106]=d2;v[107]=d3;}
    {v[6]=BITSF(a0);}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[96]*t0;o0+=v[97]*t1;o0+=v[98]*t2;float o1=0;o1+=v[100]*t0;o1+=v[101]*t1;o1+=v[102]*t2;float o2=0;o2+=v[104]*t0;o2+=v[105]*t1;o2+=v[106]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(a1+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(s6+20, FBITS(f2));
    ST32(a1+4, v0);
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_0884ACFC;
}

/* 0884B248 */
rv_t func_0884B248(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0884B248:;
    sp = sp - 112;
    s3 = a3 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    v1 = LD_U16(a0+32);
    v0 = LD32(a2+48);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884B2A0; }
    goto L_0884B280;
L_0884B280:;
    v0 = v1 + 0;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0884B2A0:;
    v0 = a0 + 4;
    f2 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+16));
    f5 = f5 + f1;
    f4 = f4 + f0;
    f3 = f3 + f2;
    v0 = D_08AEBA54 - (-17836);
    f0 = BITSF(LD32(v0-17836));
    f6 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f1 = BITSF(LD32(a1+4));
    f6 = f6 + f3;
    f2 = f2 + f5;
    f1 = f1 + f4;
    f12 = BITSF(LD32(a0+28));
    s2 = a2 + 12;
    a0 = a2 + 0;
    a1 = s2 + 0;
    a2 = sp + 0;
    a3 = sp + 48;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f6));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f3));
    { rv_t r_ = func_088347A0(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B328;
L_0884B328:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884B280; }
    goto L_0884B330;
L_0884B330:;
    f9 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(s3));
    fcc = FCMP(f9, f0, 12);
    cnd_ = !fcc;
    f5 = BITSF(LD32(sp));
    if (cnd_) { goto L_0884B280; }
    goto L_0884B348;
L_0884B348:;
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(s0+12));
    f2 = BITSF(LD32(s2+4));
    f0 = f0 * f9;
    f1 = f1 * f9;
    f2 = f2 * f9;
    f8 = BITSF(LD32(s0+8));
    f6 = BITSF(LD32(s0));
    f7 = BITSF(LD32(s0+4));
    f8 = f8 + f0;
    f6 = f6 + f1;
    f7 = f7 + f2;
    f4 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f5 = f6 - f5;
    f4 = f7 - f4;
    f3 = f8 - f3;
    v0 = LD_U16(s1+32);
    {u32 a_=sp+(64);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    ST16(s3+16, v0);
    v0 = FBITS(f5);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = LD_U16(s1+34);
    v1 = (u32)-1;
    fcc = FCMP(f0, f1, 2);
    a0 = s3 + 20;
    ST32(s3, FBITS(f9));
    ST32(s3+12, v1);
    ST32(sp+16, FBITS(f6));
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f8));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f3));
    ST16(s3+18, v0);
    ST32(s3+8, v1);
    ST32(s3+20, FBITS(f5));
    ST32(a0+4, FBITS(f4));
    cnd_ = fcc;
    ST32(a0+8, FBITS(f3));
    if (cnd_) { goto L_0884B444; }
    goto L_0884B408;
L_0884B408:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(a0+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(s3+20, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    ST32(a0+4, v0);
    goto L_0884B444;
L_0884B444:;
    v1 = 1;
    goto L_0884B280;
}

/* 0884B44C */
float func_0884B44C(u32 a0, float f12, float f13, float f14, float f15, float f16, float f17)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0884B44C:;
    sp = sp - 48;
    s0 = a0 + 0;
    f25 = f17;
    f24 = f16;
    f23 = f15;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    func_0884A818(a0);
    goto L_0884B490;
L_0884B490:;
    v0 = D_08AF19F8 - (6648);
    v0 = v0 + 6648;
    ST32(s0, v0);
    a0 = s0 + 0;
    ST32(s0+4, FBITS(f20));
    ST32(s0+8, FBITS(f21));
    ST32(s0+12, FBITS(f22));
    ST32(s0+16, FBITS(f23));
    ST32(s0+20, FBITS(f24));
    ST32(s0+24, FBITS(f25));
    func_0884A854(a0);
    goto L_0884B4BC;
L_0884B4BC:;
    a0 = s0 + 0;
    f0 = func_0884B5C4(a0);
    goto L_0884B4C4;
L_0884B4C4:;
    sp = sp + 48;
    return f0;
}

/* 0884B4EC */
void func_0884B4EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B4EC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_0884A818(a0);
    goto L_0884B508;
L_0884B508:;
    v0 = LD32(s1);
    a0 = s0 + 0;
    ST32(s0+4, v0);
    v0 = D_08AF19F8 - (6648);
    v0 = v0 + 6648;
    v1 = LD32(s1+4);
    ST32(s0, v0);
    ST32(s0+8, v1);
    v0 = LD32(s1+8);
    ST32(s0+12, v0);
    v1 = LD32(s1+12);
    ST32(s0+16, v1);
    v0 = LD32(s1+16);
    ST32(s0+20, v0);
    v1 = LD32(s1+20);
    ST32(s0+24, v1);
    func_0884A854(a0);
    goto L_0884B54C;
L_0884B54C:;
    a0 = s0 + 0;
    f0 = func_0884B5C4(a0);
    goto L_0884B554;
L_0884B554:;
    sp = sp + 16;
    return;
}

/* 0884B568 */
void func_0884B568(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B568:;
    v1 = LD32(a1);
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0+4, v1);
    v0 = LD32(a1+4);
    ST32(a0+8, v0);
    v1 = LD32(a1+8);
    ST32(a0+12, v1);
    v0 = LD32(a1+12);
    ST32(a0+16, v0);
    v1 = LD32(a1+16);
    ST32(a0+20, v1);
    v0 = LD32(a1+20);
    ST32(a0+24, v0);
    func_0884A854(a0);
    goto L_0884B5AC;
L_0884B5AC:;
    a0 = s0 + 0;
    f0 = func_0884B5C4(a0);
    goto L_0884B5B4;
L_0884B5B4:;
    sp = sp + 16;
    return;
}

/* 0884B5C4 */
float func_0884B5C4(u32 a0)
{
    u32 v0 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0884B5C4:;
    v0 = a0 + 4;
    f3 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(a0+4));
    f4 = f4 + f0;
    f1 = f1 + f3;
    f2 = f2 + f5;
    v0 = D_08AEBA58 - (-17832);
    f0 = BITSF(LD32(v0-17832));
    f5 = BITSF(LD32(a0+8));
    f6 = BITSF(LD32(a0+16));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f4 = f4 * f0;
    f3 = BITSF(LD32(a0+24));
    sp = sp - 32;
    f5 = f5 - f2;
    f6 = f6 - f4;
    f3 = f3 - f1;
    ST32(sp+8, FBITS(f1));
    v0 = FBITS(f5);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+16, FBITS(f5));
    {v0=FBITS(v[0]);}
    ST32(sp+20, FBITS(f6));
    ST32(a0+28, v0);
    ST32(sp+24, FBITS(f3));
    sp = sp + 32;
    return f0;
}

/* 0884B664 */
rv_t func_0884B664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0884B664:;
    sp = sp - 128;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    v1 = D_08AEBA70 - (-17808);
    f2 = BITSF(0);
    {a1=FBITS(v[54]);}
    v0 = D_08AEBA6C - (-17812);
    f8 = BITSF(LD32(v1-17808));
    f12 = BITSF(a1);
    {v1=FBITS(v[50]);}
    {a1=FBITS(v[48]);}
    f11 = BITSF(v1);
    f10 = BITSF(a1);
    {v1=FBITS(v[58]);}
    {a1=FBITS(v[49]);}
    f9 = BITSF(v1);
    f5 = BITSF(a1);
    {a1=FBITS(v[52]);}
    f6 = BITSF(a1);
    {a1=FBITS(v[53]);}
    f3 = BITSF(a1);
    {a1=FBITS(v[56]);}
    f4 = BITSF(a1);
    f7 = BITSF(LD32(v0-17812));
    s0 = a0 + 0;
    v0 = a0 + 20;
    v1 = a0 + 56;
    a0 = a0 + 8;
    ST32(a0+4, FBITS(f2));
    {a1=FBITS(v[57]);}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    ST32(s0+8, FBITS(f2));
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(sp, FBITS(f10));
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f11));
    ST32(sp+12, FBITS(f6));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f12));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, a1);
    ST32(sp+32, FBITS(f9));
    ST32(a0+8, FBITS(f2));
    ST32(v0+32, FBITS(f9));
    ST32(v0+4, FBITS(f5));
    ST32(v0+8, FBITS(f11));
    ST32(v0+12, FBITS(f6));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f12));
    ST32(v0+24, FBITS(f4));
    ST32(v0+28, a1);
    v0 = D_08AEBA74 - (-17804);
    ST32(s0+20, FBITS(f10));
    ST32(s0+56, FBITS(f7));
    ST32(v1+20, FBITS(f8));
    ST32(v1+16, FBITS(f7));
    ST32(v1+8, FBITS(f7));
    ST32(v1+4, FBITS(f8));
    f0 = BITSF(LD32(v0-17804));
    ST32(v1+12, FBITS(f8));
    ST32(s0+80, FBITS(f0));
    v0 = func_0885F000();
    goto L_0884B768;
L_0884B768:;
    v1 = LD32(s0+88);
    ST32(s0+84, v0);
    v0 = (u32)-24576;
    v1 = v1 & v0;
    v1 = v1 | 0x2000;
    ST32(s0+88, v1);
    v0 = func_0897D99C();
    goto L_0884B784;
L_0884B784:;
    ST16(s0+90, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_0884B900(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B790;
L_0884B790:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 0884B7A0 */
rv_t func_0884B7A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B7A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0884B664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B7B4;
L_0884B7B4:;
    v1 = LD32(s0);
    v0 = LD32(v1+60);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B7C4;
L_0884B7C4:;
    v1 = (u32)-1;
    ST32(s0+148, v1);
    ST32(s0+144, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884B7E0 */
rv_t func_0884B7E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0884B7E0:;
    f0 = BITSF(0);
    v0 = a0 + 92;
    v1 = a0 + 104;
    a1 = a0 + 116;
    a2 = a0 + 128;
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f0));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f0));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f0));
    ST32(a0+92, FBITS(f0));
    ST32(a0+104, FBITS(f0));
    ST32(a0+116, FBITS(f0));
    ST32(a0+140, FBITS(f0));
    ST32(a0+128, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 0884B82C */
rv_t func_0884B82C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B82C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0884B664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B840;
L_0884B840:;
    v1 = LD32(s0);
    v0 = LD32(v1+60);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B850;
L_0884B850:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884B860 */
rv_t func_0884B860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0884B860:;
    f0 = BITSF(0);
    v0 = a0 + 92;
    ST32(a0+92, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 0884B878 */
rv_t func_0884B878(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B878:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0884B664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B88C;
L_0884B88C:;
    v0 = LD32(s0+88);
    v0 = v0 | 0x200;
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(s0+88, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884B8AC */
rv_t func_0884B8AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B8AC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0884B664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B8C0;
L_0884B8C0:;
    v0 = LD32(s0+88);
    v0 = v0 | 0x200;
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(s0+88, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0884B8E0 */
void func_0884B8E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884B8E0:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0884B8F4; }
    goto L_0884B8EC;
L_0884B8EC:;
    ST32(a0+84, a1);
    { rv_t r_ = func_0884B900(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884B8F4;
L_0884B8F4:;
    sp = sp + 16;
    return;
}

/* 0884B900 */
rv_t func_0884B900(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_0884B900:;
    sp = sp - 240;
    a1 = LD32(a0+84);
    cnd_ = a1 == 0;
    s4 = a0 + 0;
    if (cnd_) { goto L_0884BBCC; }
    goto L_0884B938;
L_0884B938:;
    a0 = a1 + 4;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+4));
    v0 = D_08AEBA78 - (-17800);
    f2 = BITSF(LD32(a0+12));
    f4 = f1 - f0;
    f3 = BITSF(LD32(a0+20));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+16));
    f5 = BITSF(LD32(v0-17800));
    f2 = f2 - f0;
    f3 = f3 - f1;
    fcc = FCMP(f5, f4, 14);
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_0884B980; }
    goto L_0884B97C;
L_0884B97C:;
    f5 = f4;
    goto L_0884B980;
L_0884B980:;
    fcc = FCMP(f5, f2, 14);
    f0 = f5;
    cnd_ = fcc;
    ST32(s4+80, FBITS(f5));
    if (cnd_) { goto L_0884B994; }
    goto L_0884B990;
L_0884B990:;
    f0 = f2;
    goto L_0884B994;
L_0884B994:;
    fcc = FCMP(f0, f3, 14);
    f1 = f0;
    cnd_ = fcc;
    ST32(s4+80, FBITS(f0));
    if (cnd_) { goto L_0884B9A8; }
    goto L_0884B9A4;
L_0884B9A4:;
    f1 = f3;
    goto L_0884B9A8;
L_0884B9A8:;
    v1 = D_08AEBA7C - (-17796);
    f0 = BITSF(LD32(v1-17796));
    v0 = D_08AEBA80 - (-17792);
    f2 = BITSF(LD32(v0-17792));
    f0 = f1 * f0;
    fcc = FCMP(f2, f0, 14);
    cnd_ = fcc;
    ST32(s4+80, FBITS(f1));
    if (cnd_) { goto L_0884B9D0; }
    goto L_0884B9CC;
L_0884B9CC:;
    f0 = f2;
    goto L_0884B9D0;
L_0884B9D0:;
    v0 = LD32(s4+88);
    v0 = v0 & 0x200;
    cnd_ = v0 == 0;
    ST32(s4+80, FBITS(f0));
    if (cnd_) { goto L_0884BBFC; }
    goto L_0884B9E0;
L_0884B9E0:;
    v0 = D_08AEBA84 - (-17788);
    v1 = D_08AEBA88 - (-17784);
    f1 = BITSF(LD32(v0-17788));
    f0 = BITSF(LD32(v1-17784));
    fp = s4 + 56;
    ST32(fp+16, FBITS(f1));
    s7 = fp + 0;
    s6 = 0 + 0;
    ST32(fp+20, FBITS(f0));
    s3 = sp + 16;
    s0 = s4 + 20;
    ST32(fp+8, FBITS(f1));
    ST32(fp+4, FBITS(f0));
    ST32(fp+12, FBITS(f0));
    v0 = LD32(s4+84);
    ST32(s4+56, FBITS(f1));
    s1 = v0 + 4;
    s5 = 0 + 0;
    s2 = 0 + 0;
    goto L_0884BA2C;
L_0884BA2C:;
    cnd_ = s6 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+4)); goto L_0884BA38; }
    goto L_0884BA34;
L_0884BA34:;
    f0 = BITSF(LD32(s1));
    goto L_0884BA38;
L_0884BA38:;
    cnd_ = s5 == 0;
    if (cnd_) { f1 = BITSF(LD32(s1+12)); goto L_0884BA44; }
    goto L_0884BA40;
L_0884BA40:;
    f1 = BITSF(LD32(s1+8));
    goto L_0884BA44;
L_0884BA44:;
    cnd_ = s2 == 0;
    if (cnd_) { f2 = BITSF(LD32(s1+20)); goto L_0884BA50; }
    goto L_0884BA4C;
L_0884BA4C:;
    f2 = BITSF(LD32(s1+16));
    goto L_0884BA50;
L_0884BA50:;
    v1 = LD32(s4+20);
    v0 = LD32(s0+4);
    {u32 a_=sp+(80);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s0+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(s0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+12);
    {v[16]=BITSF(v1);}
    v1 = LD32(s0+20);
    ST32(s3+8, FBITS(f2));
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    ST32(s3, FBITS(f0));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {v[17]=BITSF(v0);}
    ST32(s3+4, FBITS(f1));
    {v[18]=BITSF(v1);}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v0 = LD32(s0+24);
    v1 = LD32(s0+28);
    {v[48]=BITSF(v0);}
    {u32 a_=sp+(64);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(s0+32);
    {v[49]=BITSF(v1);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {v[50]=BITSF(v0);}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[4]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    v1 = LD32(sp+24);
    {v[5]=BITSF(v0);}
    {v[6]=BITSF(v1);}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[32]*t0;o0+=v[33]*t1;o0+=v[34]*t2;float o1=0;o1+=v[36]*t0;o1+=v[37]*t1;o1+=v[38]*t2;float o2=0;o2+=v[40]*t0;o2+=v[41]*t1;o2+=v[42]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    a0 = s7 + 0;
    a1 = s3 + 0;
    s2 = s2 + 1;
    {v0=FBITS(v[1]);}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+20, v0);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    ST32(sp+52, v0);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp+36, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    f0 = func_08AA0F30(a0, a1);
    goto L_0884BB3C;
L_0884BB3C:;
    v0 = (s32)s2 < 2;
    cnd_ = v0 != 0;
    {u32 a_=sp+(176);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0884BA2C; }
    goto L_0884BB48;
L_0884BB48:;
    s5 = s5 + 1;
    v0 = (s32)s5 < 2;
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0884BA2C; }
    goto L_0884BB58;
L_0884BB58:;
    s6 = s6 + 1;
    v0 = (s32)s6 < 2;
    cnd_ = v0 != 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0884BA2C; }
    goto L_0884BB68;
L_0884BB68:;
    f1 = BITSF(LD32(s4+8));
    f0 = BITSF(LD32(fp+4));
    f2 = BITSF(LD32(s4+56));
    v0 = s4 + 8;
    f0 = f0 + f1;
    f3 = BITSF(LD32(fp+12));
    f4 = BITSF(LD32(fp+8));
    f5 = BITSF(LD32(fp+20));
    ST32(fp+4, FBITS(f0));
    f1 = BITSF(LD32(s4+8));
    f6 = BITSF(LD32(fp+16));
    f2 = f2 + f1;
    ST32(s4+56, FBITS(f2));
    f0 = BITSF(LD32(v0+4));
    f3 = f3 + f0;
    ST32(fp+12, FBITS(f3));
    f0 = BITSF(LD32(v0+4));
    f4 = f4 + f0;
    ST32(fp+8, FBITS(f4));
    f0 = BITSF(LD32(v0+8));
    f5 = f5 + f0;
    ST32(fp+20, FBITS(f5));
    f0 = BITSF(LD32(v0+8));
    f6 = f6 + f0;
    ST32(fp+16, FBITS(f6));
    goto L_0884BBCC;
L_0884BBCC:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_0884BBFC:;
    v1 = LD32(a1+4);
    fp = s4 + 56;
    ST32(s4+56, v1);
    v0 = LD32(a0+4);
    ST32(s4+60, v0);
    v1 = LD32(a0+8);
    ST32(s4+64, v1);
    v0 = LD32(a0+12);
    ST32(s4+68, v0);
    v1 = LD32(a0+16);
    ST32(s4+72, v1);
    v0 = LD32(a0+20);
    ST32(s4+76, v0);
    goto L_0884BB68;
}

/* 0884BC34 */
void func_0884BC34(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884BC34:;
    f2 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+4));
    f8 = BITSF(LD32(a1+8));
    v0 = a0 + 8;
    f6 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0+4));
    ST32(a0+8, FBITS(f2));
    f6 = f2 - f6;
    f7 = f0 - f7;
    ST32(v0+8, FBITS(f8));
    f8 = f8 - f1;
    sp = sp - 16;
    ST32(v0+4, FBITS(f0));
    v0 = a0 + 56;
    f1 = BITSF(LD32(a0+56));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v0+16));
    f1 = f1 + f6;
    f4 = f4 + f7;
    f0 = f0 + f8;
    f2 = f2 + f6;
    f3 = f3 + f7;
    f5 = f5 + f8;
    ST32(a0+56, FBITS(f1));
    ST32(v0+16, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+8, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    sp = sp + 16;
    return;
}

/* 0884BCC0 */
rv_t func_0884BCC0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884BCC0:;
    f0 = BITSF(LD32(a1+32));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+12));
    f4 = BITSF(LD32(a1+16));
    f5 = BITSF(LD32(a1+20));
    f6 = BITSF(LD32(a1+24));
    f7 = BITSF(LD32(a1+28));
    v0 = a0 + 20;
    sp = sp - 16;
    ST32(v0+32, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    v1 = LD32(a0+88);
    f0 = BITSF(LD32(a1));
    v1 = v1 & 0x200;
    cnd_ = v1 != 0;
    ST32(a0+20, FBITS(f0));
    if (cnd_) { goto L_0884BD2C; }
    goto L_0884BD20;
L_0884BD20:;
    goto L_0884BD24;
L_0884BD24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884BD2C:;
    { rv_t r_ = func_0884B900(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884BD34;
L_0884BD34:;
    goto L_0884BD24;
}

/* 0884BD3C */
void func_0884BD3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884BD3C:;
    sp = sp - 16;
    v0 = (u32)-1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0884BD74; }
    goto L_0884BD5C;
L_0884BD5C:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884BD6C;
L_0884BD6C:;
    v0 = v0 << 24;
    s0 = s0 | v0;
    goto L_0884BD74;
L_0884BD74:;
    ST32(s1+4, s0);
    sp = sp + 16;
    return;
}

/* 0884BD8C */
void func_0884BD8C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0884BD8C:;
    sp = sp - 32;
    s2 = D_08B28C00 - (-29696);
    s1 = LD32(s2-29696);
    cnd_ = s1 == 0;
    if (cnd_) { s3 = D_08B28C14 - (-29676); goto L_0884BE24; }
    goto L_0884BDB8;
L_0884BDB8:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0884BE04; }
    goto L_0884BDC4;
L_0884BDC4:;
    v0 = LD32(a0-4);
    v1 = 152;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_0884BDD8;
L_0884BDD8:;
    cnd_ = a0 == s0;
    s0 = s0 - 152;
    if (cnd_) { goto L_0884BDF8; }
    goto L_0884BDE0;
L_0884BDE0:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884BDF0;
L_0884BDF0:;
    a0 = LD32(s1);
    goto L_0884BDD8;
L_0884BDF8:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BE00;
L_0884BE00:;
    a0 = LD32(s1+4);
    goto L_0884BE04;
L_0884BE04:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0884C094; }
    goto L_0884BE0C;
L_0884BE0C:;
    s0 = LD32(s1+12);
    goto L_0884BE10;
L_0884BE10:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884C07C; }
    goto L_0884BE18;
L_0884BE18:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BE20;
L_0884BE20:;
    s3 = D_08B28C14 - (-29676);
    goto L_0884BE24;
L_0884BE24:;
    s1 = LD32(s3-29676);
    v1 = s2 - 29696;
    v0 = (u32)-1;
    ST32(v1+12, v0);
    cnd_ = s1 == 0;
    ST32(s2-29696, 0);
    if (cnd_) { goto L_0884BEA4; }
    goto L_0884BE3C;
L_0884BE3C:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0884BE88; }
    goto L_0884BE48;
L_0884BE48:;
    v0 = LD32(a0-4);
    v1 = 92;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_0884BE5C;
L_0884BE5C:;
    cnd_ = a0 == s0;
    s0 = s0 - 92;
    if (cnd_) { goto L_0884BE7C; }
    goto L_0884BE64;
L_0884BE64:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884BE74;
L_0884BE74:;
    a0 = LD32(s1);
    goto L_0884BE5C;
L_0884BE7C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BE84;
L_0884BE84:;
    a0 = LD32(s1+4);
    goto L_0884BE88;
L_0884BE88:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0884C068; }
    goto L_0884BE90;
L_0884BE90:;
    s0 = LD32(s1+12);
    goto L_0884BE94;
L_0884BE94:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884C050; }
    goto L_0884BE9C;
L_0884BE9C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BEA4;
L_0884BEA4:;
    s4 = D_08B28C28 - (-29656);
    s1 = LD32(s4-29656);
    v1 = s3 - 29676;
    v0 = (u32)-1;
    ST32(v1+12, v0);
    cnd_ = s1 == 0;
    ST32(s3-29676, 0);
    if (cnd_) { goto L_0884BF28; }
    goto L_0884BEC0;
L_0884BEC0:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0884BF0C; }
    goto L_0884BECC;
L_0884BECC:;
    v0 = LD32(a0-4);
    v1 = 104;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_0884BEE0;
L_0884BEE0:;
    cnd_ = a0 == s0;
    s0 = s0 - 104;
    if (cnd_) { goto L_0884BF00; }
    goto L_0884BEE8;
L_0884BEE8:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884BEF8;
L_0884BEF8:;
    a0 = LD32(s1);
    goto L_0884BEE0;
L_0884BF00:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BF08;
L_0884BF08:;
    a0 = LD32(s1+4);
    goto L_0884BF0C;
L_0884BF0C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0884C03C; }
    goto L_0884BF14;
L_0884BF14:;
    s0 = LD32(s1+12);
    goto L_0884BF18;
L_0884BF18:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884C024; }
    goto L_0884BF20;
L_0884BF20:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BF28;
L_0884BF28:;
    s2 = D_08B28C3C - (-29636);
    s1 = LD32(s2-29636);
    v1 = s4 - 29656;
    v0 = (u32)-1;
    ST32(v1+12, v0);
    cnd_ = s1 == 0;
    ST32(s4-29656, 0);
    if (cnd_) { goto L_0884BFAC; }
    goto L_0884BF44;
L_0884BF44:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0884BF90; }
    goto L_0884BF50;
L_0884BF50:;
    v0 = LD32(a0-4);
    v1 = 92;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_0884BF64;
L_0884BF64:;
    cnd_ = a0 == s0;
    s0 = s0 - 92;
    if (cnd_) { goto L_0884BF84; }
    goto L_0884BF6C;
L_0884BF6C:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884BF7C;
L_0884BF7C:;
    a0 = LD32(s1);
    goto L_0884BF64;
L_0884BF84:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BF8C;
L_0884BF8C:;
    a0 = LD32(s1+4);
    goto L_0884BF90;
L_0884BF90:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0884C010; }
    goto L_0884BF98;
L_0884BF98:;
    s0 = LD32(s1+12);
    goto L_0884BF9C;
L_0884BF9C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884BFF8; }
    goto L_0884BFA4;
L_0884BFA4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884BFAC;
L_0884BFAC:;
    ST32(s2-29636, 0);
    v0 = s2 - 29636;
    v1 = (u32)-1;
    a0 = D_08B28BF0 - (-29712);
    ST32(v0+12, v1);
    a0 = a0 - 29712;
    v0 = 3;
    goto L_0884BFC8;
L_0884BFC8:;
    v0 = v0 - 1;
    ST32(a0, 0);
    cnd_ = (s32)v0 >= 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0884BFC8; }
    goto L_0884BFD8;
L_0884BFD8:;
    sp = sp + 32;
    return;
L_0884BFF8:;
    a0 = s0 + 0;
    func_08AA9F08(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884C000;
L_0884C000:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C008;
L_0884C008:;
    goto L_0884BFA4;
L_0884C010:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C01C;
L_0884C01C:;
    s0 = LD32(s1+12);
    goto L_0884BF9C;
L_0884C024:;
    a0 = s0 + 0;
    func_08AA9E54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884C02C;
L_0884C02C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C034;
L_0884C034:;
    goto L_0884BF20;
L_0884C03C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C048;
L_0884C048:;
    s0 = LD32(s1+12);
    goto L_0884BF18;
L_0884C050:;
    a0 = s0 + 0;
    func_08AA9DA0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884C058;
L_0884C058:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C060;
L_0884C060:;
    goto L_0884BE9C;
L_0884C068:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C074;
L_0884C074:;
    s0 = LD32(s1+12);
    goto L_0884BE94;
L_0884C07C:;
    a0 = s0 + 0;
    func_08AA9CEC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884C084;
L_0884C084:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C08C;
L_0884C08C:;
    goto L_0884BE18;
L_0884C094:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C0A0;
L_0884C0A0:;
    s0 = LD32(s1+12);
    goto L_0884BE10;
}

/* 0884C0A8 */
void func_0884C0A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0884C0A8:;
    sp = sp - 80;
    v0 = D_08B28D44 - (-29372);
    s6 = a0 + 0;
    v1 = LD32(v0-29372);
    v0 = a1 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = 0 < v1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    s4 = a1 + 0;
    if (cnd_) { goto L_0884C350; }
    goto L_0884C0F8;
L_0884C0F8:;
    a0 = LD32(a0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    cnd_ = a0 != 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_0884CD50; }
    goto L_0884C114;
L_0884C114:;
    v0 = 1;
    goto L_0884C118;
L_0884C118:;
    cnd_ = s4 == v0;
    s7 = 0 + 0;
    if (cnd_) { goto L_0884CA84; }
    goto L_0884C120;
L_0884C120:;
    v0 = (s32)s4 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0884C7B0; }
    goto L_0884C12C;
L_0884C12C:;
    cnd_ = s4 == v0;
    v0 = 3;
    if (cnd_) { goto L_0884C4D8; }
    goto L_0884C134;
L_0884C134:;
    cnd_ = s4 == v0;
    fp = D_08B28C3C - (-29636);
    if (cnd_) { goto L_0884C16C; }
    goto L_0884C13C;
L_0884C13C:;
    goto L_0884C140;
L_0884C140:;
    sp = sp + 80;
    return;
L_0884C16C:;
    a1 = LD32(fp-29636);
    cnd_ = a1 == 0;
    v1 = LD32(fp-29636);
    if (cnd_) { goto L_0884C1CC; }
    goto L_0884C178;
L_0884C178:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_0884C180;
L_0884C180:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_0884C1B4; }
    goto L_0884C19C;
L_0884C19C:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_0884C1B4;
L_0884C1B4:;
    cnd_ = a2 != t1;
    a3 = a2 + 0;
    if (cnd_) { goto L_0884C214; }
    goto L_0884C1BC;
L_0884C1BC:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_0884C180; }
    goto L_0884C1C8;
L_0884C1C8:;
    v1 = LD32(fp-29636);
    goto L_0884C1CC;
L_0884C1CC:;
    s5 = fp - 29636;
    cnd_ = v1 == 0;
    s0 = LD32(s5+16);
    if (cnd_) { goto L_0884C4D0; }
    goto L_0884C1D8;
L_0884C1D8:;
    s1 = LD32(s5+4);
    v0 = LD32(v1+8);
    goto L_0884C1E0;
L_0884C1E0:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(s5); goto L_0884C4C8; }
    goto L_0884C1E8;
L_0884C1E8:;
    v1 = LD32(v1+12);
    goto L_0884C1EC;
L_0884C1EC:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0884C1E0; }
    goto L_0884C1F4;
L_0884C1F4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C1FC;
L_0884C1FC:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_0884C378; }
    goto L_0884C210;
L_0884C210:;
    a3 = (u32)-1;
    goto L_0884C214;
L_0884C214:;
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    s0 = a3 + 0;
    if (cnd_) { goto L_0884C2D4; }
    goto L_0884C220;
L_0884C220:;
    v1 = fp - 29636;
    v0 = LD32(v1+12);
    cnd_ = a3 == v0;
    v0 = D_08B28C3C - (-29636);
    if (cnd_) { goto L_0884C370; }
    goto L_0884C230;
L_0884C230:;
    a0 = LD32(v0-29636);
    cnd_ = a0 == 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0884C26C; }
    goto L_0884C23C;
L_0884C23C:;
    a1 = LD32(a0+8);
    goto L_0884C240;
L_0884C240:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0884C260; }
    goto L_0884C24C;
L_0884C24C:;
    v0 = LD32(a2+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884C270; }
    goto L_0884C260;
L_0884C260:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0884C240; }
    goto L_0884C26C;
L_0884C26C:;
    v1 = 0 + 0;
    goto L_0884C270;
L_0884C270:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0884C2CC; }
    goto L_0884C278;
L_0884C278:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    t1 = a3 - v0;
    if (cnd_) { goto L_0884C2B0; }
    goto L_0884C290;
L_0884C290:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0884C298;
L_0884C298:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == t1;
    a0 = a0 + 4;
    if (cnd_) { goto L_0884C358; }
    goto L_0884C2A8;
L_0884C2A8:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0884C298; }
    goto L_0884C2B0;
L_0884C2B0:;
    v1 = 0 + 0;
    goto L_0884C2B4;
L_0884C2B4:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0884C2CC; }
    goto L_0884C2BC;
L_0884C2BC:;
    v0 = fp - 29636;
    a0 = v1 + 0;
    goto L_0884C2C4;
L_0884C2C4:;
    ST32(v0+12, a3);
    ST32(v0+8, v1);
    goto L_0884C2CC;
L_0884C2CC:;
    s7 = a0 + 0;
    v0 = (u32)-1;
    goto L_0884C2D4;
L_0884C2D4:;
    cnd_ = s0 == v0;
    v1 = D_08B28BF0 - (-29712);
    if (cnd_) { goto L_0884C350; }
    goto L_0884C2DC;
L_0884C2DC:;
    v0 = s4 << 2;
    v1 = v1 - 29712;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a0 = a0 + 1;
    cnd_ = s7 == 0;
    ST32(v0, a0);
    if (cnd_) { goto L_0884C348; }
    goto L_0884C2F8;
L_0884C2F8:;
    v1 = LD32(s7);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C308;
L_0884C308:;
    a0 = s7 + 0;
    a1 = s0 + 0;
    func_0884BD3C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884C314;
L_0884C314:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s6, s7); goto L_0884C13C; }
    goto L_0884C320;
L_0884C320:;
    v1 = LD32(sp+4);
    v0 = LD32(s7+88);
    v0 = (v0 & ~(0x1u << 10)) | ((v1 & 0x1) << 10);
    v1 = LD32(sp+8);
    v0 = (v0 & ~(0x1u << 5)) | ((v1 & 0x1) << 5);
    v1 = LD32(sp+12);
    v0 = (v0 & ~(0x1u << 6)) | ((v1 & 0x1) << 6);
    v1 = LD32(sp+16);
    v0 = (v0 & ~(0x1u << 7)) | ((v1 & 0x1) << 7);
    ST32(s7+88, v0);
    goto L_0884C348;
L_0884C348:;
    ST32(s6, s7);
    goto L_0884C13C;
L_0884C350:;
    ST32(s6, 0);
    goto L_0884C13C;
L_0884C358:;
    v0 = 92;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v1 = v1 + v0;
    goto L_0884C2B4;
L_0884C370:;
    a0 = LD32(v1+8);
    goto L_0884C2CC;
L_0884C378:;
    a0 = 92;
    { s64 p_ = (s64)(s32)s1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C38C;
L_0884C38C:;
    a2 = v0 + 4;
    ST32(a2-4, s1);
    a0 = a2 + 0;
    cnd_ = s1 == 0;
    v1 = s1 - 1;
    if (cnd_) { goto L_0884C3BC; }
    goto L_0884C3A0;
L_0884C3A0:;
    v0 = D_08AF1A18 - (6680);
    v0 = v0 + 6680;
    a1 = (u32)-1;
    goto L_0884C3AC;
L_0884C3AC:;
    v1 = v1 - 1;
    ST32(a0, v0);
    cnd_ = v1 != a1;
    a0 = a0 + 92;
    if (cnd_) { goto L_0884C3AC; }
    goto L_0884C3BC;
L_0884C3BC:;
    ST32(s2, a2);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C3C8;
L_0884C3C8:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s1 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C3E0;
L_0884C3E0:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s1 <= 0;
    ST32(s3+8, s1);
    if (cnd_) { goto L_0884C40C; }
    goto L_0884C3F4;
L_0884C3F4:;
    v1 = v0 + 0;
    goto L_0884C3F8;
L_0884C3F8:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s1;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0884C3F8; }
    goto L_0884C40C;
L_0884C40C:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_0884C470; }
    goto L_0884C424;
L_0884C424:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_0884C460; }
    goto L_0884C42C;
L_0884C42C:;
    s0 = LD32(s2+12);
    goto L_0884C430;
L_0884C430:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884C448; }
    goto L_0884C438;
L_0884C438:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C440;
L_0884C440:;
    a3 = (u32)-1;
    goto L_0884C214;
L_0884C448:;
    a0 = s0 + 0;
    func_08AA9F08(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884C450;
L_0884C450:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C458;
L_0884C458:;
    goto L_0884C438;
L_0884C460:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C468;
L_0884C468:;
    s0 = LD32(s2+12);
    goto L_0884C430;
L_0884C470:;
    cnd_ = s2 == 0;
    ST32(s2+8, s0);
    if (cnd_) { goto L_0884C210; }
    goto L_0884C478;
L_0884C478:;
    v0 = LD32(s5);
    ST32(s2+12, v0);
    ST32(s5, s2);
    a3 = LD32(fp-29636);
    a1 = LD32(a3+4);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_0884C4C0; }
    goto L_0884C4A0;
L_0884C4A0:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(a3+8);
    a0 = a0 + v1;
    goto L_0884C4C0;
L_0884C4C0:;
    a3 = a0 + 0;
    goto L_0884C214;
L_0884C4C8:;
    s0 = s0 + s1;
    goto L_0884C1EC;
L_0884C4D0:;
    s1 = LD32(s5+4);
    goto L_0884C1F4;
L_0884C4D8:;
    fp = D_08B28C28 - (-29656);
    a1 = LD32(fp-29656);
    cnd_ = a1 == 0;
    v1 = LD32(fp-29656);
    if (cnd_) { goto L_0884C53C; }
    goto L_0884C4E8;
L_0884C4E8:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_0884C4F0;
L_0884C4F0:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_0884C524; }
    goto L_0884C50C;
L_0884C50C:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_0884C524;
L_0884C524:;
    cnd_ = a2 != t1;
    a3 = a2 + 0;
    if (cnd_) { goto L_0884C584; }
    goto L_0884C52C;
L_0884C52C:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_0884C4F0; }
    goto L_0884C538;
L_0884C538:;
    v1 = LD32(fp-29656);
    goto L_0884C53C;
L_0884C53C:;
    s5 = fp - 29656;
    cnd_ = v1 == 0;
    s0 = LD32(s5+16);
    if (cnd_) { goto L_0884C7A8; }
    goto L_0884C548;
L_0884C548:;
    s1 = LD32(s5+4);
    v0 = LD32(v1+8);
    goto L_0884C550;
L_0884C550:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(s5); goto L_0884C7A0; }
    goto L_0884C558;
L_0884C558:;
    v1 = LD32(v1+12);
    goto L_0884C55C;
L_0884C55C:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0884C550; }
    goto L_0884C564;
L_0884C564:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C56C;
L_0884C56C:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_0884C650; }
    goto L_0884C580;
L_0884C580:;
    a3 = (u32)-1;
    goto L_0884C584;
L_0884C584:;
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    s0 = a3 + 0;
    if (cnd_) { goto L_0884C2D4; }
    goto L_0884C590;
L_0884C590:;
    v1 = fp - 29656;
    v0 = LD32(v1+12);
    cnd_ = a3 == v0;
    v0 = D_08B28C28 - (-29656);
    if (cnd_) { goto L_0884C370; }
    goto L_0884C5A0;
L_0884C5A0:;
    a0 = LD32(v0-29656);
    cnd_ = a0 == 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0884C5DC; }
    goto L_0884C5AC;
L_0884C5AC:;
    a1 = LD32(a0+8);
    goto L_0884C5B0;
L_0884C5B0:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0884C5D0; }
    goto L_0884C5BC;
L_0884C5BC:;
    v0 = LD32(a2+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884C5E0; }
    goto L_0884C5D0;
L_0884C5D0:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0884C5B0; }
    goto L_0884C5DC;
L_0884C5DC:;
    v1 = 0 + 0;
    goto L_0884C5E0;
L_0884C5E0:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0884C2CC; }
    goto L_0884C5E8;
L_0884C5E8:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    t1 = a3 - v0;
    if (cnd_) { goto L_0884C620; }
    goto L_0884C600;
L_0884C600:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0884C608;
L_0884C608:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == t1;
    a0 = a0 + 4;
    if (cnd_) { goto L_0884C638; }
    goto L_0884C618;
L_0884C618:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0884C608; }
    goto L_0884C620;
L_0884C620:;
    v1 = 0 + 0;
    goto L_0884C624;
L_0884C624:;
    v0 = fp - 29656;
    goto L_0884C628;
L_0884C628:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = v1 + 0; goto L_0884C2C4; }
    goto L_0884C630;
L_0884C630:;
    a0 = 0 + 0;
    goto L_0884C2CC;
L_0884C638:;
    v0 = 104;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v1 = v1 + v0;
    goto L_0884C624;
L_0884C650:;
    a0 = 104;
    { s64 p_ = (s64)(s32)s1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C664;
L_0884C664:;
    a2 = v0 + 4;
    ST32(a2-4, s1);
    a0 = a2 + 0;
    cnd_ = s1 == 0;
    v1 = s1 - 1;
    if (cnd_) { goto L_0884C694; }
    goto L_0884C678;
L_0884C678:;
    v0 = D_08AF1AC8 - (6856);
    v0 = v0 + 6856;
    a1 = (u32)-1;
    goto L_0884C684;
L_0884C684:;
    v1 = v1 - 1;
    ST32(a0, v0);
    cnd_ = v1 != a1;
    a0 = a0 + 104;
    if (cnd_) { goto L_0884C684; }
    goto L_0884C694;
L_0884C694:;
    ST32(s2, a2);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C6A0;
L_0884C6A0:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s1 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C6B8;
L_0884C6B8:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s1 <= 0;
    ST32(s3+8, s1);
    if (cnd_) { goto L_0884C6E4; }
    goto L_0884C6CC;
L_0884C6CC:;
    v1 = v0 + 0;
    goto L_0884C6D0;
L_0884C6D0:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s1;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0884C6D0; }
    goto L_0884C6E4;
L_0884C6E4:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_0884C748; }
    goto L_0884C6FC;
L_0884C6FC:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_0884C738; }
    goto L_0884C704;
L_0884C704:;
    s0 = LD32(s2+12);
    goto L_0884C708;
L_0884C708:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884C720; }
    goto L_0884C710;
L_0884C710:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C718;
L_0884C718:;
    a3 = (u32)-1;
    goto L_0884C584;
L_0884C720:;
    a0 = s0 + 0;
    func_08AA9E54(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884C728;
L_0884C728:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C730;
L_0884C730:;
    goto L_0884C710;
L_0884C738:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C740;
L_0884C740:;
    s0 = LD32(s2+12);
    goto L_0884C708;
L_0884C748:;
    cnd_ = s2 == 0;
    ST32(s2+8, s0);
    if (cnd_) { goto L_0884C580; }
    goto L_0884C750;
L_0884C750:;
    v0 = LD32(s5);
    ST32(s2+12, v0);
    ST32(s5, s2);
    a3 = LD32(fp-29656);
    a1 = LD32(a3+4);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_0884C798; }
    goto L_0884C778;
L_0884C778:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(a3+8);
    a0 = a0 + v1;
    goto L_0884C798;
L_0884C798:;
    a3 = a0 + 0;
    goto L_0884C584;
L_0884C7A0:;
    s0 = s0 + s1;
    goto L_0884C55C;
L_0884C7A8:;
    s1 = LD32(s5+4);
    goto L_0884C564;
L_0884C7B0:;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_0884C140; }
    goto L_0884C7B8;
L_0884C7B8:;
    fp = D_08B28C00 - (-29696);
    a1 = LD32(fp-29696);
    cnd_ = a1 == 0;
    v1 = LD32(fp-29696);
    if (cnd_) { goto L_0884C81C; }
    goto L_0884C7C8;
L_0884C7C8:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_0884C7D0;
L_0884C7D0:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_0884C804; }
    goto L_0884C7EC;
L_0884C7EC:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_0884C804;
L_0884C804:;
    cnd_ = a2 != t1;
    a3 = a2 + 0;
    if (cnd_) { goto L_0884C864; }
    goto L_0884C80C;
L_0884C80C:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_0884C7D0; }
    goto L_0884C818;
L_0884C818:;
    v1 = LD32(fp-29696);
    goto L_0884C81C;
L_0884C81C:;
    s5 = fp - 29696;
    cnd_ = v1 == 0;
    s0 = LD32(s5+16);
    if (cnd_) { goto L_0884CA7C; }
    goto L_0884C828;
L_0884C828:;
    s1 = LD32(s5+4);
    v0 = LD32(v1+8);
    goto L_0884C830;
L_0884C830:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(s5); goto L_0884CA74; }
    goto L_0884C838;
L_0884C838:;
    v1 = LD32(v1+12);
    goto L_0884C83C;
L_0884C83C:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0884C830; }
    goto L_0884C844;
L_0884C844:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C84C;
L_0884C84C:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_0884C924; }
    goto L_0884C860;
L_0884C860:;
    a3 = (u32)-1;
    goto L_0884C864;
L_0884C864:;
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    s0 = a3 + 0;
    if (cnd_) { goto L_0884C2D4; }
    goto L_0884C870;
L_0884C870:;
    v1 = fp - 29696;
    v0 = LD32(v1+12);
    cnd_ = a3 == v0;
    v0 = D_08B28C00 - (-29696);
    if (cnd_) { goto L_0884C370; }
    goto L_0884C880;
L_0884C880:;
    a0 = LD32(v0-29696);
    cnd_ = a0 == 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0884C8BC; }
    goto L_0884C88C;
L_0884C88C:;
    a1 = LD32(a0+8);
    goto L_0884C890;
L_0884C890:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0884C8B0; }
    goto L_0884C89C;
L_0884C89C:;
    v0 = LD32(a2+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884C8C0; }
    goto L_0884C8B0;
L_0884C8B0:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0884C890; }
    goto L_0884C8BC;
L_0884C8BC:;
    v1 = 0 + 0;
    goto L_0884C8C0;
L_0884C8C0:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0884C2CC; }
    goto L_0884C8C8;
L_0884C8C8:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    t1 = a3 - v0;
    if (cnd_) { goto L_0884C900; }
    goto L_0884C8E0;
L_0884C8E0:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0884C8E8;
L_0884C8E8:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == t1;
    a0 = a0 + 4;
    if (cnd_) { goto L_0884C90C; }
    goto L_0884C8F8;
L_0884C8F8:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0884C8E8; }
    goto L_0884C900;
L_0884C900:;
    v1 = 0 + 0;
    goto L_0884C904;
L_0884C904:;
    v0 = fp - 29696;
    goto L_0884C628;
L_0884C90C:;
    v0 = 152;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v1 = v1 + v0;
    goto L_0884C904;
L_0884C924:;
    a0 = 152;
    { s64 p_ = (s64)(s32)s1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C938;
L_0884C938:;
    a2 = v0 + 4;
    ST32(a2-4, s1);
    a0 = a2 + 0;
    cnd_ = s1 == 0;
    v1 = s1 - 1;
    if (cnd_) { goto L_0884C968; }
    goto L_0884C94C;
L_0884C94C:;
    v0 = D_08AF1B20 - (6944);
    v0 = v0 + 6944;
    a1 = (u32)-1;
    goto L_0884C958;
L_0884C958:;
    v1 = v1 - 1;
    ST32(a0, v0);
    cnd_ = v1 != a1;
    a0 = a0 + 152;
    if (cnd_) { goto L_0884C958; }
    goto L_0884C968;
L_0884C968:;
    ST32(s2, a2);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C974;
L_0884C974:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s1 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884C98C;
L_0884C98C:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s1 <= 0;
    ST32(s3+8, s1);
    if (cnd_) { goto L_0884C9B8; }
    goto L_0884C9A0;
L_0884C9A0:;
    v1 = v0 + 0;
    goto L_0884C9A4;
L_0884C9A4:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s1;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0884C9A4; }
    goto L_0884C9B8;
L_0884C9B8:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_0884CA1C; }
    goto L_0884C9D0;
L_0884C9D0:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_0884CA0C; }
    goto L_0884C9D8;
L_0884C9D8:;
    s0 = LD32(s2+12);
    goto L_0884C9DC;
L_0884C9DC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884C9F4; }
    goto L_0884C9E4;
L_0884C9E4:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884C9EC;
L_0884C9EC:;
    a3 = (u32)-1;
    goto L_0884C864;
L_0884C9F4:;
    a0 = s0 + 0;
    func_08AA9CEC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884C9FC;
L_0884C9FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884CA04;
L_0884CA04:;
    goto L_0884C9E4;
L_0884CA0C:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CA14;
L_0884CA14:;
    s0 = LD32(s2+12);
    goto L_0884C9DC;
L_0884CA1C:;
    cnd_ = s2 == 0;
    ST32(s2+8, s0);
    if (cnd_) { goto L_0884C860; }
    goto L_0884CA24;
L_0884CA24:;
    v0 = LD32(s5);
    ST32(s2+12, v0);
    ST32(s5, s2);
    a3 = LD32(fp-29696);
    a1 = LD32(a3+4);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_0884CA6C; }
    goto L_0884CA4C;
L_0884CA4C:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(a3+8);
    a0 = a0 + v1;
    goto L_0884CA6C;
L_0884CA6C:;
    a3 = a0 + 0;
    goto L_0884C864;
L_0884CA74:;
    s0 = s0 + s1;
    goto L_0884C83C;
L_0884CA7C:;
    s1 = LD32(s5+4);
    goto L_0884C844;
L_0884CA84:;
    fp = D_08B28C14 - (-29676);
    a1 = LD32(fp-29676);
    cnd_ = a1 == 0;
    v1 = LD32(fp-29676);
    if (cnd_) { goto L_0884CAE8; }
    goto L_0884CA94;
L_0884CA94:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_0884CA9C;
L_0884CA9C:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_0884CAD0; }
    goto L_0884CAB8;
L_0884CAB8:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_0884CAD0;
L_0884CAD0:;
    cnd_ = a2 != t1;
    a3 = a2 + 0;
    if (cnd_) { goto L_0884CB30; }
    goto L_0884CAD8;
L_0884CAD8:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_0884CA9C; }
    goto L_0884CAE4;
L_0884CAE4:;
    v1 = LD32(fp-29676);
    goto L_0884CAE8;
L_0884CAE8:;
    s5 = fp - 29676;
    cnd_ = v1 == 0;
    s0 = LD32(s5+16);
    if (cnd_) { goto L_0884CD48; }
    goto L_0884CAF4;
L_0884CAF4:;
    s1 = LD32(s5+4);
    v0 = LD32(v1+8);
    goto L_0884CAFC;
L_0884CAFC:;
    cnd_ = v0 == s0;
    if (cnd_) { v1 = LD32(s5); goto L_0884CD40; }
    goto L_0884CB04;
L_0884CB04:;
    v1 = LD32(v1+12);
    goto L_0884CB08;
L_0884CB08:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0884CAFC; }
    goto L_0884CB10;
L_0884CB10:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CB18;
L_0884CB18:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_0884CBF0; }
    goto L_0884CB2C;
L_0884CB2C:;
    a3 = (u32)-1;
    goto L_0884CB30;
L_0884CB30:;
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    s0 = a3 + 0;
    if (cnd_) { goto L_0884C2D4; }
    goto L_0884CB3C;
L_0884CB3C:;
    v1 = fp - 29676;
    v0 = LD32(v1+12);
    cnd_ = a3 == v0;
    v0 = D_08B28C14 - (-29676);
    if (cnd_) { goto L_0884C370; }
    goto L_0884CB4C;
L_0884CB4C:;
    a0 = LD32(v0-29676);
    cnd_ = a0 == 0;
    a2 = v1 + 0;
    if (cnd_) { goto L_0884CB88; }
    goto L_0884CB58;
L_0884CB58:;
    a1 = LD32(a0+8);
    goto L_0884CB5C;
L_0884CB5C:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0884CB7C; }
    goto L_0884CB68;
L_0884CB68:;
    v0 = LD32(a2+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884CB8C; }
    goto L_0884CB7C;
L_0884CB7C:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0884CB5C; }
    goto L_0884CB88;
L_0884CB88:;
    v1 = 0 + 0;
    goto L_0884CB8C;
L_0884CB8C:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0884C2CC; }
    goto L_0884CB94;
L_0884CB94:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t0 = LD32(a0+12);
    cnd_ = (s32)t0 <= 0;
    t1 = a3 - v0;
    if (cnd_) { goto L_0884CBCC; }
    goto L_0884CBAC;
L_0884CBAC:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0884CBB4;
L_0884CBB4:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == t1;
    a0 = a0 + 4;
    if (cnd_) { goto L_0884CBD8; }
    goto L_0884CBC4;
L_0884CBC4:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0884CBB4; }
    goto L_0884CBCC;
L_0884CBCC:;
    v1 = 0 + 0;
    goto L_0884CBD0;
L_0884CBD0:;
    v0 = fp - 29676;
    goto L_0884C628;
L_0884CBD8:;
    v0 = 92;
    { s64 p_ = (s64)(s32)t1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v1 = v1 + v0;
    goto L_0884CBD0;
L_0884CBF0:;
    a0 = 92;
    { s64 p_ = (s64)(s32)s1 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CC04;
L_0884CC04:;
    a2 = v0 + 4;
    ST32(a2-4, s1);
    a0 = a2 + 0;
    cnd_ = s1 == 0;
    v1 = s1 - 1;
    if (cnd_) { goto L_0884CC34; }
    goto L_0884CC18;
L_0884CC18:;
    v0 = D_08AF1A70 - (6768);
    v0 = v0 + 6768;
    a1 = (u32)-1;
    goto L_0884CC24;
L_0884CC24:;
    v1 = v1 - 1;
    ST32(a0, v0);
    cnd_ = v1 != a1;
    a0 = a0 + 92;
    if (cnd_) { goto L_0884CC24; }
    goto L_0884CC34;
L_0884CC34:;
    ST32(s2, a2);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CC40;
L_0884CC40:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s1 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CC58;
L_0884CC58:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s1 <= 0;
    ST32(s3+8, s1);
    if (cnd_) { goto L_0884CC84; }
    goto L_0884CC6C;
L_0884CC6C:;
    v1 = v0 + 0;
    goto L_0884CC70;
L_0884CC70:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s1;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0884CC70; }
    goto L_0884CC84;
L_0884CC84:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_0884CCE8; }
    goto L_0884CC9C;
L_0884CC9C:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_0884CCD8; }
    goto L_0884CCA4;
L_0884CCA4:;
    s0 = LD32(s2+12);
    goto L_0884CCA8;
L_0884CCA8:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0884CCC0; }
    goto L_0884CCB0;
L_0884CCB0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884CCB8;
L_0884CCB8:;
    a3 = (u32)-1;
    goto L_0884CB30;
L_0884CCC0:;
    a0 = s0 + 0;
    func_08AA9DA0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884CCC8;
L_0884CCC8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884CCD0;
L_0884CCD0:;
    goto L_0884CCB0;
L_0884CCD8:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CCE0;
L_0884CCE0:;
    s0 = LD32(s2+12);
    goto L_0884CCA8;
L_0884CCE8:;
    cnd_ = s2 == 0;
    ST32(s2+8, s0);
    if (cnd_) { goto L_0884CB2C; }
    goto L_0884CCF0;
L_0884CCF0:;
    v0 = LD32(s5);
    ST32(s2+12, v0);
    ST32(s5, s2);
    a3 = LD32(fp-29676);
    a1 = LD32(a3+4);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_0884CD38; }
    goto L_0884CD18;
L_0884CD18:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(a3+8);
    a0 = a0 + v1;
    goto L_0884CD38;
L_0884CD38:;
    a3 = a0 + 0;
    goto L_0884CB30;
L_0884CD40:;
    s0 = s0 + s1;
    goto L_0884CB08;
L_0884CD48:;
    s1 = LD32(s5+4);
    goto L_0884CB10;
L_0884CD50:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CD60;
L_0884CD60:;
    cnd_ = v0 == s4;
    v0 = 1;
    if (cnd_) { goto L_0884C13C; }
    goto L_0884CD68;
L_0884CD68:;
    v1 = LD32(s6);
    ST32(sp, v0);
    a0 = s6 + 0;
    v0 = LD32(v1+88);
    v1 = (v0 >> 7) & 0x1;
    ST32(sp+16, v1);
    v1 = (v0 >> 10) & 0x1;
    ST32(sp+4, v1);
    v1 = (v0 >> 5) & 0x1;
    v0 = (v0 >> 6) & 0x1;
    ST32(sp+8, v1);
    ST32(sp+12, v0);
    func_0884CDA4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884CD9C;
L_0884CD9C:;
    v0 = 1;
    goto L_0884C118;
}

/* 0884CDA4 */
void func_0884CDA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0884CDA4:;
    sp = sp - 80;
    s1 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0884CDE8; }
    goto L_0884CDCC;
L_0884CDCC:;
    goto L_0884CDD0;
L_0884CDD0:;
    sp = sp + 80;
    return;
L_0884CDE8:;
    s3 = LD32(a0+4);
    v0 = LD32(v1+12);
    s0 = s3 + 0;
    t_ = v0;
    s0 = (s0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CDFC;
L_0884CDFC:;
    s2 = v0 + 0;
    v0 = 1;
    cnd_ = s2 == v0;
    v0 = (s32)s2 < 2;
    if (cnd_) { goto L_0884D068; }
    goto L_0884CE0C;
L_0884CE0C:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0884D034; }
    goto L_0884CE14;
L_0884CE14:;
    cnd_ = s2 == v0;
    v0 = 3;
    if (cnd_) { goto L_0884D008; }
    goto L_0884CE1C;
L_0884CE1C:;
    cnd_ = s2 == v0;
    a1 = (u32)-1;
    if (cnd_) { goto L_0884CE2C; }
    goto L_0884CE24;
L_0884CE24:;
    ST32(s1, 0);
    goto L_0884CDCC;
L_0884CE2C:;
    cnd_ = s0 == a1;
    v0 = D_08B28C3C - (-29636);
    if (cnd_) { goto L_0884CE6C; }
    goto L_0884CE34;
L_0884CE34:;
    a0 = v0 - 29636;
    v1 = LD32(a0+12);
    cnd_ = s0 == v1;
    if (cnd_) { ST32(a0+12, a1); goto L_0884CE44; }
    goto L_0884CE44;
L_0884CE44:;
    a1 = s0 + 0;
    v0 = func_08AAA164(a0, a1);
    goto L_0884CE4C;
L_0884CE4C:;
    cnd_ = v0 == 0;
    v1 = D_08B28BF0 - (-29712);
    if (cnd_) { goto L_0884CE70; }
    goto L_0884CE54;
L_0884CE54:;
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s0 - a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CE6C;
L_0884CE6C:;
    v1 = D_08B28BF0 - (-29712);
    goto L_0884CE70;
L_0884CE70:;
    v0 = s2 << 2;
    v1 = v1 - 29712;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = (u32)-1;
    ST32(s1, 0);
    a0 = a0 - 1;
    cnd_ = s3 == a1;
    ST32(v0, a0);
    if (cnd_) { goto L_0884CDCC; }
    goto L_0884CE94;
L_0884CE94:;
    v0 = D_08B28C00 - (-29696);
    v1 = LD32(v0-29696);
    v0 = v0 - 29696;
    ST32(sp, v0);
    a2 = sp + 0;
    ST32(sp+16, a1);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0884CEFC; }
    goto L_0884CEC0;
L_0884CEC0:;
    ST32(sp+4, v1);
    a0 = sp + 8;
    goto L_0884CEC8;
L_0884CEC8:;
    a1 = LD32(a2+4);
    ST32(sp+36, 0);
    v1 = LD32(a1+4);
    ST32(a2+12, 0);
    ST32(a2+8, v1);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884CFD8; }
    goto L_0884CEF0;
L_0884CEF0:;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_0884CEC8; }
    goto L_0884CEFC;
L_0884CEFC:;
    s1 = 152;
    goto L_0884CF00;
L_0884CF00:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884CDCC; }
    goto L_0884CF0C;
L_0884CF0C:;
    cnd_ = (s32)v0 < 0;
    s0 = LD32(sp+20);
    if (cnd_) { goto L_0884CDCC; }
    goto L_0884CF14;
L_0884CF14:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0884CDD0; }
    goto L_0884CF1C;
L_0884CF1C:;
    v1 = LD32(s0);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CF2C;
L_0884CF2C:;
    cnd_ = v0 == s3;
    if (cnd_) { v1 = LD32(s0); goto L_0884CFC0; }
    goto L_0884CF34;
L_0884CF34:;
    v0 = LD32(sp+12);
    goto L_0884CF38;
L_0884CF38:;
    a3 = sp + 0;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_0884CFB8; }
    goto L_0884CF48;
L_0884CF48:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_0884CF00; }
    goto L_0884CF5C;
L_0884CF5C:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884CF48; }
    goto L_0884CF80;
L_0884CF80:;
    v1 = LD32(a3+8);
    v0 = LD32(a0+4);
    a1 = LD32(a3+4);
    a2 = LD32(v1+4);
    v0 = v0 << 2;
    a0 = LD32(a1);
    v0 = v0 + a2;
    v1 = LD32(v0);
    { s64 p_ = (s64)(s32)v1 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a3+16, v1);
    a1 = lo;
    a0 = a0 + a1;
    ST32(a3+20, a0);
    goto L_0884CF00;
L_0884CFB8:;
    a0 = sp + 8;
    goto L_0884CF80;
L_0884CFC0:;
    a0 = s0 + 0;
    v0 = LD32(v1+56);
    t_ = v0;
    a1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884CFD0;
L_0884CFD0:;
    v0 = LD32(sp+12);
    goto L_0884CF38;
L_0884CFD8:;
    v1 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 152;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_0884CEFC;
L_0884D008:;
    a1 = (u32)-1;
    cnd_ = s0 == a1;
    v0 = D_08B28C28 - (-29656);
    if (cnd_) { goto L_0884CE6C; }
    goto L_0884D014;
L_0884D014:;
    a0 = v0 - 29656;
    v1 = LD32(a0+12);
    cnd_ = s0 == v1;
    if (cnd_) { ST32(a0+12, a1); goto L_0884D024; }
    goto L_0884D024;
L_0884D024:;
    a1 = s0 + 0;
    v0 = func_08AAA11C(a0, a1);
    goto L_0884D02C;
L_0884D02C:;
    goto L_0884CE4C;
L_0884D034:;
    cnd_ = s2 != 0;
    if (cnd_) { ST32(s1, 0); goto L_0884CDCC; }
    goto L_0884D03C;
L_0884D03C:;
    a1 = (u32)-1;
    cnd_ = s0 == a1;
    v0 = D_08B28C00 - (-29696);
    if (cnd_) { goto L_0884CE6C; }
    goto L_0884D048;
L_0884D048:;
    a0 = v0 - 29696;
    v1 = LD32(a0+12);
    cnd_ = s0 == v1;
    if (cnd_) { ST32(a0+12, a1); goto L_0884D058; }
    goto L_0884D058;
L_0884D058:;
    a1 = s0 + 0;
    v0 = func_08AAA08C(a0, a1);
    goto L_0884D060;
L_0884D060:;
    goto L_0884CE4C;
L_0884D068:;
    a1 = (u32)-1;
    cnd_ = s0 == a1;
    v0 = D_08B28C14 - (-29676);
    if (cnd_) { goto L_0884CE6C; }
    goto L_0884D074;
L_0884D074:;
    a0 = v0 - 29676;
    v1 = LD32(a0+12);
    cnd_ = s0 == v1;
    if (cnd_) { ST32(a0+12, a1); goto L_0884D084; }
    goto L_0884D084;
L_0884D084:;
    a1 = s0 + 0;
    v0 = func_08AAA0D4(a0, a1);
    goto L_0884D08C;
L_0884D08C:;
    goto L_0884CE4C;
}

/* 0884D094 */
void func_0884D094(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884D094:;
    sp = sp - 16;
    v0 = D_08AEBA8C - (-17780);
    a0 = 0x10000u;
    f0 = BITSF(LD32(v0-17780));
    v1 = D_08B28CA4 - (-29532);
    a0 = a0 | 0x7700;
    ST32(v1-29532, FBITS(f0));
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D0B8;
L_0884D0B8:;
    a1 = v0 + 0;
    v1 = (u32)-1;
    v0 = 1999;
    v0 = v0 - 1;
    goto L_0884D0C8;
L_0884D0C8:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_0884D0C8; }
    goto L_0884D0D0;
L_0884D0D0:;
    v0 = D_08B28C6C - (-29588);
    a0 = 0xbb80;
    ST32(v0-29588, a1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D0E0;
L_0884D0E0:;
    a1 = v0 + 0;
    v1 = (u32)-1;
    v0 = 999;
    v0 = v0 - 1;
    goto L_0884D0F0;
L_0884D0F0:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_0884D0F0; }
    goto L_0884D0F8;
L_0884D0F8:;
    v0 = D_08B28C80 - (-29568);
    a0 = 0 + 0;
    ST32(v0-29568, a1);
    func_0884BD8C(a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884D108;
L_0884D108:;
    sp = sp + 16;
    return;
}

/* 0884D114 */
void func_0884D114(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884D114:;
    sp = sp - 16;
    v0 = D_08B28C80 - (-29568);
    v1 = LD32(v0-29568);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0884D168; }
    goto L_0884D12C;
L_0884D12C:;
    v0 = D_08B28C6C - (-29588);
    goto L_0884D130;
L_0884D130:;
    v1 = LD32(v0-29588);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0884D158; }
    goto L_0884D13C;
L_0884D13C:;
    a0 = 1;
    func_0884BD8C(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884D144;
L_0884D144:;
    func_08850A64();
    goto L_0884D14C;
L_0884D14C:;
    sp = sp + 16;
    return;
L_0884D158:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884D160;
L_0884D160:;
    goto L_0884D13C;
L_0884D168:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884D170;
L_0884D170:;
    v0 = D_08B28C6C - (-29588);
    goto L_0884D130;
}

/* 0884D178 */
void func_0884D178(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884D178:;
    sp = sp - 16;
    a0 = 0 + 0;
    func_0884BD8C(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884D188;
L_0884D188:;
    func_08850A64();
    goto L_0884D190;
L_0884D190:;
    sp = sp + 16;
    return;
}

/* 0884D19C */
u32 func_0884D19C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0884D19C:;
    sp = sp - 80;
    v1 = 0 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884D32C; }
    goto L_0884D1C4;
L_0884D1C4:;
    v0 = D_08B28C28 - (-29656);
    v1 = LD32(v0-29656);
    v0 = v0 - 29656;
    ST32(sp, v0);
    v0 = (u32)-1;
    a2 = sp + 0;
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0884D230; }
    goto L_0884D1F4;
L_0884D1F4:;
    ST32(sp+4, v1);
    a0 = sp + 8;
    goto L_0884D1FC;
L_0884D1FC:;
    a1 = LD32(a2+4);
    ST32(sp+36, 0);
    v1 = LD32(a1+4);
    ST32(a2+12, 0);
    ST32(a2+8, v1);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884D354; }
    goto L_0884D224;
L_0884D224:;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_0884D1FC; }
    goto L_0884D230;
L_0884D230:;
    s2 = 104;
    goto L_0884D234;
L_0884D234:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D34C; }
    goto L_0884D240;
L_0884D240:;
    cnd_ = (s32)v0 < 0;
    s0 = LD32(sp+20);
    if (cnd_) { goto L_0884D34C; }
    goto L_0884D248;
L_0884D248:;
    cnd_ = s0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_0884D268; }
    goto L_0884D250;
L_0884D250:;
    v1 = LD32(s0+88);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    v0 = v1 & 0x80;
    if (cnd_) { goto L_0884D2EC; }
    goto L_0884D260;
L_0884D260:;
    v0 = LD32(sp+12);
    goto L_0884D264;
L_0884D264:;
    a3 = sp + 0;
    goto L_0884D268;
L_0884D268:;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_0884D2E4; }
    goto L_0884D274;
L_0884D274:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_0884D234; }
    goto L_0884D288;
L_0884D288:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884D274; }
    goto L_0884D2AC;
L_0884D2AC:;
    v1 = LD32(a3+8);
    v0 = LD32(a0+4);
    a1 = LD32(a3+4);
    a2 = LD32(v1+4);
    v0 = v0 << 2;
    a0 = LD32(a1);
    v0 = v0 + a2;
    v1 = LD32(v0);
    { s64 p_ = (s64)(s32)v1 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a3+16, v1);
    a1 = lo;
    a0 = a0 + a1;
    ST32(a3+20, a0);
    goto L_0884D234;
L_0884D2E4:;
    a0 = sp + 8;
    goto L_0884D2AC;
L_0884D2EC:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D264; }
    goto L_0884D2F4;
L_0884D2F4:;
    cnd_ = s0 == s1;
    a3 = sp + 0;
    if (cnd_) { goto L_0884D268; }
    goto L_0884D2FC;
L_0884D2FC:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D30C;
L_0884D30C:;
    v1 = LD32(s0+4);
    cnd_ = v0 == v1;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D264; }
    goto L_0884D318;
L_0884D318:;
    a1 = s0 + 0;
    t_ = s3;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D324;
L_0884D324:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884D260; }
    goto L_0884D32C;
L_0884D32C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
L_0884D34C:;
    v1 = 1;
    goto L_0884D32C;
L_0884D354:;
    v1 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 104;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_0884D230;
}

/* 0884D384 */
void func_0884D384(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0884D384:;
    sp = sp - 80;
    v1 = 0 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884D534; }
    goto L_0884D3AC;
L_0884D3AC:;
    v0 = D_08B28C3C - (-29636);
    v1 = LD32(v0-29636);
    v0 = v0 - 29636;
    ST32(sp, v0);
    v0 = (u32)-1;
    a2 = sp + 0;
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0884D418; }
    goto L_0884D3DC;
L_0884D3DC:;
    ST32(sp+4, v1);
    a0 = sp + 8;
    goto L_0884D3E4;
L_0884D3E4:;
    a1 = LD32(a2+4);
    ST32(sp+36, 0);
    v1 = LD32(a1+4);
    ST32(a2+12, 0);
    ST32(a2+8, v1);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884D55C; }
    goto L_0884D40C;
L_0884D40C:;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_0884D3E4; }
    goto L_0884D418;
L_0884D418:;
    s2 = 92;
    goto L_0884D41C;
L_0884D41C:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D554; }
    goto L_0884D428;
L_0884D428:;
    cnd_ = (s32)v0 < 0;
    s0 = LD32(sp+20);
    if (cnd_) { goto L_0884D554; }
    goto L_0884D430;
L_0884D430:;
    cnd_ = s0 == 0;
    a3 = sp + 0;
    if (cnd_) { goto L_0884D450; }
    goto L_0884D438;
L_0884D438:;
    v1 = LD32(s0+88);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    v0 = v1 & 0x80;
    if (cnd_) { goto L_0884D4D4; }
    goto L_0884D448;
L_0884D448:;
    v0 = LD32(sp+12);
    goto L_0884D44C;
L_0884D44C:;
    a3 = sp + 0;
    goto L_0884D450;
L_0884D450:;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_0884D4CC; }
    goto L_0884D45C;
L_0884D45C:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_0884D41C; }
    goto L_0884D470;
L_0884D470:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884D45C; }
    goto L_0884D494;
L_0884D494:;
    v1 = LD32(a3+8);
    v0 = LD32(a0+4);
    a1 = LD32(a3+4);
    a2 = LD32(v1+4);
    v0 = v0 << 2;
    a0 = LD32(a1);
    v0 = v0 + a2;
    v1 = LD32(v0);
    { s64 p_ = (s64)(s32)v1 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a3+16, v1);
    a1 = lo;
    a0 = a0 + a1;
    ST32(a3+20, a0);
    goto L_0884D41C;
L_0884D4CC:;
    a0 = sp + 8;
    goto L_0884D494;
L_0884D4D4:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D44C; }
    goto L_0884D4DC;
L_0884D4DC:;
    cnd_ = s0 == s1;
    a3 = sp + 0;
    if (cnd_) { goto L_0884D450; }
    goto L_0884D4E4;
L_0884D4E4:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D4F4;
L_0884D4F4:;
    v1 = LD32(s0+4);
    cnd_ = v0 == v1;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D44C; }
    goto L_0884D500;
L_0884D500:;
    v0 = LD32(s0+88);
    v0 = (v0 >> 12) & 0x1;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0884D524; }
    goto L_0884D510;
L_0884D510:;
    v0 = LD32(s1+88);
    v0 = (v0 >> 12) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D44C; }
    goto L_0884D520;
L_0884D520:;
    a1 = s0 + 0;
    goto L_0884D524;
L_0884D524:;
    t_ = s3;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D52C;
L_0884D52C:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884D448; }
    goto L_0884D534;
L_0884D534:;
    v0 = v1 + 0;
    sp = sp + 80;
    return;
L_0884D554:;
    v1 = 1;
    goto L_0884D534;
L_0884D55C:;
    v1 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = 92;
    v1 = LD32(a1);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a0);
    v0 = lo;
    v1 = v1 + v0;
    ST32(a2+20, v1);
    goto L_0884D418;
}

/* 0884D58C */
u32 func_0884D58C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0884D58C:;
    sp = sp - 64;
    v1 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884D67C; }
    goto L_0884D5B4;
L_0884D5B4:;
    v0 = D_08B28C00 - (-29696);
    v1 = LD32(v0-29696);
    v0 = v0 - 29696;
    ST32(sp, v0);
    a0 = sp + 0;
    v0 = (u32)-1;
    s3 = (u32)-1;
    ST32(sp+4, v1);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    func_08AAA1AC(a0);
    goto L_0884D5E4;
L_0884D5E4:;
    v0 = LD32(sp+4);
    goto L_0884D5E8;
L_0884D5E8:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884D6AC; }
    goto L_0884D5F0;
L_0884D5F0:;
    cnd_ = (s32)v0 < 0;
    s0 = LD32(sp+20);
    if (cnd_) { goto L_0884D6AC; }
    goto L_0884D5F8;
L_0884D5F8:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0884D610; }
    goto L_0884D600;
L_0884D600:;
    v1 = LD32(s0+88);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = v1 & 0x80; goto L_0884D620; }
    goto L_0884D610;
L_0884D610:;
    a0 = sp + 0;
    func_08AAA240(a0);
    goto L_0884D618;
L_0884D618:;
    v0 = LD32(sp+4);
    goto L_0884D5E8;
L_0884D620:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884D610; }
    goto L_0884D628;
L_0884D628:;
    cnd_ = s0 == s1;
    if (cnd_) { goto L_0884D610; }
    goto L_0884D630;
L_0884D630:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D640;
L_0884D640:;
    v1 = LD32(s0+4);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0884D610; }
    goto L_0884D64C;
L_0884D64C:;
    v1 = LD32(s0);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D65C;
L_0884D65C:;
    v1 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0884D69C; }
    goto L_0884D66C;
L_0884D66C:;
    t_ = s2;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D674;
L_0884D674:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884D610; }
    goto L_0884D67C;
L_0884D67C:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_0884D69C:;
    cnd_ = v1 != s3;
    if (cnd_) { goto L_0884D610; }
    goto L_0884D6A4;
L_0884D6A4:;
    goto L_0884D66C;
L_0884D6AC:;
    v1 = 1;
    goto L_0884D67C;
}

/* 0884D6B4 */
void func_0884D6B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884D6B4:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s1 = a1 + 0;
    a1 = D_08B45A9C - (23196);
    a1 = a1 + 23196;
    s0 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_0884D70C; }
    goto L_0884D6DC;
L_0884D6DC:;
    v1 = LD32(s0);
    goto L_0884D6E0;
L_0884D6E0:;
    a1 = s1 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D6F0;
L_0884D6F0:;
    a0 = s0 + 0;
    func_0884D83C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884D6F8;
L_0884D6F8:;
    sp = sp + 16;
    return;
L_0884D70C:;
    v0 = LD32(a0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D71C;
L_0884D71C:;
    v1 = LD32(s0);
    goto L_0884D6E0;
}

/* 0884D724 */
void func_0884D724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_0884D724:;
    sp = sp - 208;
    v0 = D_08AF1B20 - (6944);
    v0 = v0 + 6944;
    s1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s0 = t0 + 0;
    { rv_t r_ = func_0884B7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D768;
L_0884D768:;
    a0 = sp + 0;
    a1 = (u32)-1;
    func_0884BD3C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884D774;
L_0884D774:;
    v0 = LD32(sp+88);
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    v0 = v0 | 0xc6;
    a1 = s1 + 0;
    a0 = sp + 0;
    ST32(sp+88, v0);
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    ST32(sp+16, FBITS(f2));
    ST32(sp+148, s0);
    func_0884B8E0(a0, a1);
    goto L_0884D7A8;
L_0884D7A8:;
    a0 = sp + 0;
    a1 = s3 + 0;
    a2 = 1;
    func_0884D6B4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884D7B8;
L_0884D7B8:;
    v0 = LD32(sp+88);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_0884D824; }
    goto L_0884D7C8;
L_0884D7C8:;
    f3 = BITSF(LD32(s2+8));
    f5 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(s2));
    f4 = BITSF(LD32(s3));
    f0 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s3+4));
    f1 = f1 + f4;
    f3 = f3 + f5;
    f0 = f0 + f2;
    ST32(s4, FBITS(f1));
    ST32(s4+8, FBITS(f3));
    ST32(s4+4, FBITS(f0));
    ST32(sp+160, FBITS(f1));
    ST32(sp+164, FBITS(f0));
    ST32(sp+168, FBITS(f3));
    goto L_0884D804;
L_0884D804:;
    sp = sp + 208;
    return;
L_0884D824:;
    f1 = BITSF(LD32(sp+8));
    ST32(s4+8, FBITS(f0));
    f0 = BITSF(LD32(sp+12));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f0));
    goto L_0884D804;
}

/* 0884D83C */
void func_0884D83C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0884D83C:;
    sp = sp - 144;
    v0 = a0 + 8;
    s5 = D_08B28C8C - (-29556);
    v1 = D_08B28CB4 - (-29516);
    s0 = a0 + 0;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a0+8));
    ST32(sp+32, v0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(v1-29516, a0);
    func_0884DD28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884D8A0;
L_0884D8A0:;
    a1 = s5 - 29556;
    v0 = D_08AEBAB0 - (-17744);
    f0 = BITSF(LD32(v0-17744));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1+12));
    f3 = BITSF(LD32(s5-29556));
    f4 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(a1+16));
    f6 = BITSF(LD32(a1+20));
    f1 = f1 - f0;
    f2 = f2 + f0;
    f6 = f6 + f0;
    f3 = f3 - f0;
    f4 = f4 + f0;
    f5 = f5 - f0;
    v0 = D_08B28D60 - (-29344);
    v0 = LD32(v0-29344);
    ST32(a1+8, FBITS(f1));
    ST32(a1+12, FBITS(f2));
    ST32(s5-29556, FBITS(f3));
    ST32(a1+4, FBITS(f4));
    ST32(a1+16, FBITS(f5));
    cnd_ = v0 == 0;
    ST32(a1+20, FBITS(f6));
    if (cnd_) { goto L_0884DD10; }
    goto L_0884D900;
L_0884D900:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D908;
L_0884D908:;
    v0 = LD32(s0+88);
    goto L_0884D90C;
L_0884D90C:;
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B15B88 - (23432); goto L_0884DCE0; }
    goto L_0884D918;
L_0884D918:;
    a0 = s0 + 128;
    goto L_0884D91C;
L_0884D91C:;
    v1 = LD32(a0+4);
    v0 = LD32(s0+128);
    ST32(sp+36, a0);
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    a0 = LD32(a0+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s0+88);
    v0 = (u32)-16412;
    s2 = 10;
    a0 = (v1 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((a0 & 0x1) << 2);
    a0 = D_08B28C5C - (-29604);
    v1 = v1 & v0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    v0 = a0 - 29604;
    ST32(s0+88, v1);
    {a2=FBITS(v[0]);}
    fp = D_08B28C70 - (-29584);
    ST32(s0+140, a2);
    s7 = D_08B28C6C - (-29588);
    s6 = D_08B28C7C - (-29572);
    ST32(v0+8, 0);
    s4 = D_08B28D64 - (-29340);
    s3 = D_08B28C68 - (-29592);
    f20 = BITSF(LD32(v0+8));
    ST32(v0+4, FBITS(f20));
    ST32(a0-29604, FBITS(f20));
    f0 = BITSF(LD32(s0+140));
    goto L_0884D998;
L_0884D998:;
    a0 = s0 + 0;
    v1 = 0 < s2;
    fcc = FCMP(f0, f20, 2);
    s1 = D_08B28C74 - (-29580);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_0884D9B4; }
    goto L_0884D9B0;
L_0884D9B0:;
    v0 = 0 + 0;
    goto L_0884D9B4;
L_0884D9B4:;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s0+88); goto L_0884DA64; }
    goto L_0884D9C0;
L_0884D9C0:;
    func_0884DD28(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884D9C8;
L_0884D9C8:;
    v0 = LD32(s7-29588);
    v1 = LD32(s4-29340);
    a0 = s0 + 0;
    a1 = s5 - 29556;
    a3 = 2000;
    ST32(s1-29580, 0);
    a2 = v0 + 0;
    ST32(fp-29584, v0);
    cnd_ = v1 == 0;
    ST32(s6-29572, 0);
    if (cnd_) { goto L_0884DA24; }
    goto L_0884D9F0;
L_0884D9F0:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884D9F8;
L_0884D9F8:;
    v1 = LD32(s1-29580);
    v1 = v1 + v0;
    ST32(s1-29580, v1);
    goto L_0884DA04;
L_0884DA04:;
    a0 = s0 + 0;
    goto L_0884DA08;
L_0884DA08:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    ST32(s3-29592, 0);
    s2 = s2 - 1;
    func_0884EE14(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DA1C;
L_0884DA1C:;
    f0 = BITSF(LD32(s0+140));
    goto L_0884D998;
L_0884DA24:;
    func_0884E1CC(0, 0, 0);
    goto L_0884DA2C;
L_0884DA2C:;
    a0 = s0 + 0;
    func_0884E894(0, 0, 0);
    goto L_0884DA34;
L_0884DA34:;
    a0 = s0 + 0;
    func_0884ECD0();
    goto L_0884DA3C;
L_0884DA3C:;
    v0 = LD32(s0+88);
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0884DA04; }
    goto L_0884DA4C;
L_0884DA4C:;
    func_0884EB4C(0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DA54;
L_0884DA54:;
    a0 = s0 + 0;
    func_0884E6AC(a0);
    goto L_0884DA5C;
L_0884DA5C:;
    a0 = s0 + 0;
    goto L_0884DA08;
L_0884DA64:;
    v0 = (a0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08B15B88 - (23432);
    if (cnd_) { goto L_0884DB50; }
    goto L_0884DA70;
L_0884DA70:;
    v0 = a0 & 0x8;
    cnd_ = v0 == 0;
    v1 = D_08B28C5C - (-29604);
    if (cnd_) { goto L_0884DA84; }
    goto L_0884DA7C;
L_0884DA7C:;
    ST32(s0+104, 0);
    ST32(s0+112, 0);
    goto L_0884DA84;
L_0884DA84:;
    v0 = v1 - 29604;
    f0 = BITSF(LD32(v0+4));
    v1 = s0 + 116;
    a0 = LD32(sp+32);
    ST32(v1+4, FBITS(f0));
    a2 = D_08B28C5C - (-29604);
    f3 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(v0+8));
    v0 = D_08AEBABC - (-17732);
    f3 = f3 - f0;
    ST32(v1+8, FBITS(f1));
    f0 = BITSF(LD32(v0-17732));
    f1 = BITSF(LD32(sp));
    f4 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(s0+8));
    fcc = FCMP(f3, f0, 12);
    f0 = BITSF(LD32(sp+8));
    f2 = f2 - f1;
    f1 = BITSF(LD32(a2-29604));
    f4 = f4 - f0;
    ST32(sp+20, FBITS(f3));
    ST32(s0+116, FBITS(f1));
    ST32(sp+24, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+16, FBITS(f2));
    if (cnd_) { goto L_0884DB14; }
    goto L_0884DAEC;
L_0884DAEC:;
    v0 = D_08AEBAC0 - (-17728);
    f0 = BITSF(LD32(s0+108));
    f1 = BITSF(LD32(v0-17728));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884DB18; }
    goto L_0884DB08;
L_0884DB08:;
    v0 = D_08AEBAC4 - (-17724);
    f0 = BITSF(LD32(v0-17724));
    ST32(s0+108, FBITS(f0));
    goto L_0884DB14;
L_0884DB14:;
    goto L_0884DB18;
L_0884DB18:;
    v0 = D_08B28CB4 - (-29516);
    ST32(v0-29516, 0);
    sp = sp + 144;
    return;
L_0884DB50:;
    f1 = BITSF(LD32(v0+23432));
    v0 = D_08AEBAB4 - (-17740);
    f0 = BITSF(LD32(v0-17740));
    a2 = LD32(sp+36);
    ST32(s0+136, 0);
    f1 = f1 + f0;
    v0 = D_08B28C5C - (-29604);
    a1 = v0 - 29604;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(s0+132, FBITS(f1));
    {v[0]=BITSF(v1);}
    a0 = s0 + 0;
    v1 = LD32(a2+8);
    v0 = LD32(a2+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(s0+128, 0);
    a2 = D_08B28C5C - (-29604);
    s1 = D_08B28C74 - (-29580);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    ST32(s0+140, v1);
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(a2-29604, 0);
    func_0884DD28(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DBBC;
L_0884DBBC:;
    a1 = s5 - 29556;
    v0 = D_08AEBAB8 - (-17736);
    f0 = BITSF(LD32(v0-17736));
    f5 = BITSF(LD32(a1+8));
    f6 = BITSF(LD32(a1+12));
    f1 = BITSF(LD32(s5-29556));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+16));
    f4 = BITSF(LD32(a1+20));
    v0 = D_08B28C6C - (-29588);
    v1 = D_08B28D64 - (-29340);
    f5 = f5 - f0;
    f6 = f6 + f0;
    f4 = f4 + f0;
    f1 = f1 - f0;
    f2 = f2 + f0;
    f3 = f3 - f0;
    a2 = LD32(v0-29588);
    t0 = LD32(v1-29340);
    v0 = D_08B28C70 - (-29584);
    v1 = D_08B28C7C - (-29572);
    ST32(s5-29556, FBITS(f1));
    ST32(a1+8, FBITS(f5));
    ST32(a1+12, FBITS(f6));
    ST32(a1+4, FBITS(f2));
    ST32(a1+16, FBITS(f3));
    ST32(a1+20, FBITS(f4));
    ST32(v0-29584, a2);
    ST32(v1-29572, 0);
    cnd_ = t0 == 0;
    ST32(s1-29580, 0);
    if (cnd_) { goto L_0884DCA0; }
    goto L_0884DC38;
L_0884DC38:;
    a0 = s0 + 0;
    t_ = t0;
    a3 = 2000;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884DC44;
L_0884DC44:;
    v1 = LD32(s1-29580);
    v1 = v1 + v0;
    ST32(s1-29580, v1);
    s1 = D_08B28C68 - (-29592);
    goto L_0884DC54;
L_0884DC54:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    ST32(s1-29592, 0);
    func_0884EE14(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DC68;
L_0884DC68:;
    f1 = BITSF(0);
    f0 = BITSF(LD32(s0+140));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { a0 = s0 + 0; goto L_0884DC88; }
    goto L_0884DC80;
L_0884DC80:;
    a0 = LD32(s0+88);
    goto L_0884DA70;
L_0884DC88:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    ST32(s1-29592, FBITS(f1));
    func_0884EE14(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DC98;
L_0884DC98:;
    a0 = LD32(s0+88);
    goto L_0884DA70;
L_0884DCA0:;
    func_0884E1CC(0, 0, 0);
    goto L_0884DCA8;
L_0884DCA8:;
    a0 = s0 + 0;
    func_0884E894(0, 0, 0);
    goto L_0884DCB0;
L_0884DCB0:;
    a0 = s0 + 0;
    func_0884ECD0();
    goto L_0884DCB8;
L_0884DCB8:;
    v0 = LD32(s0+88);
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = D_08B28C68 - (-29592); goto L_0884DC54; }
    goto L_0884DCC8;
L_0884DCC8:;
    a0 = s0 + 0;
    func_0884EB4C(0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DCD0;
L_0884DCD0:;
    a0 = s0 + 0;
    func_0884E6AC(a0);
    goto L_0884DCD8;
L_0884DCD8:;
    s1 = D_08B28C68 - (-29592);
    goto L_0884DC54;
L_0884DCE0:;
    f0 = BITSF(LD32(v0+23432));
    v1 = D_08B28C50 - (-29616);
    a1 = v1 - 29616;
    v0 = D_08B28C68 - (-29592);
    ST32(v0-29592, FBITS(f0));
    a0 = s0 + 0;
    ST32(a1+4, 0);
    ST32(a1+8, 0);
    ST32(v1-29616, 0);
    v0 = func_0884F924(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DD08;
L_0884DD08:;
    a0 = s0 + 128;
    goto L_0884D91C;
L_0884DD10:;
    a0 = s0 + 0;
    func_0884E4F8(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DD18;
L_0884DD18:;
    a0 = s0 + 0;
    func_0884E564(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884DD20;
L_0884DD20:;
    v0 = LD32(s0+88);
    goto L_0884D90C;
}

/* 0884DD28 */
void func_0884DD28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884DD28:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884DD44;
L_0884DD44:;
    a2 = v0 + 0;
    v0 = LD32(s0+56);
    a1 = D_08B28C8C - (-29556);
    s0 = s0 + 56;
    ST32(a1-29556, v0);
    a0 = a1 - 29556;
    f0 = BITSF(0);
    v0 = LD32(s0+4);
    ST32(a0+4, v0);
    v1 = LD32(s0+8);
    ST32(a0+8, v1);
    v0 = LD32(s0+12);
    ST32(a0+12, v0);
    v1 = LD32(s0+16);
    ST32(a0+16, v1);
    v0 = LD32(s0+20);
    ST32(a0+20, v0);
    f1 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a1-29556));
    if (cnd_) { goto L_0884DE20; }
    goto L_0884DD9C;
L_0884DD9C:;
    f0 = BITSF(LD32(a0+4));
    f0 = f0 + f1;
    ST32(a0+4, FBITS(f0));
    goto L_0884DDA8;
L_0884DDA8:;
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v1 = a1 - 29556;
    if (cnd_) { goto L_0884DE10; }
    goto L_0884DDC0;
L_0884DDC0:;
    f0 = BITSF(LD32(v1+12));
    f0 = f0 + f1;
    ST32(v1+12, FBITS(f0));
    goto L_0884DDCC;
L_0884DDCC:;
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v1 = a1 - 29556;
    if (cnd_) { goto L_0884DE00; }
    goto L_0884DDE4;
L_0884DDE4:;
    f0 = BITSF(LD32(v1+20));
    f0 = f0 + f1;
    ST32(v1+20, FBITS(f0));
    goto L_0884DDF0;
L_0884DDF0:;
    sp = sp + 16;
    return;
L_0884DE00:;
    f0 = BITSF(LD32(v1+16));
    f0 = f0 + f1;
    ST32(v1+16, FBITS(f0));
    goto L_0884DDF0;
L_0884DE10:;
    f0 = BITSF(LD32(v1+8));
    f0 = f0 + f1;
    ST32(v1+8, FBITS(f0));
    goto L_0884DDCC;
L_0884DE20:;
    f0 = f0 + f1;
    ST32(a1-29556, FBITS(f0));
    goto L_0884DDA8;
}

/* 0884DE2C */
void func_0884DE2C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_0884DE2C:;
    sp = sp - 176;
    s0 = LD32(a0+24);
    cnd_ = s0 == 0;
    s2 = D_08B2BDB4 - (-16972);
    if (cnd_) { goto L_0884E1A0; }
    goto L_0884DE60;
L_0884DE60:;
    s4 = D_08B28C70 - (-29584);
    s3 = D_08B28C74 - (-29580);
    s5 = s2 - 16972;
    s6 = 2;
    s7 = 2000;
    a2 = LD32(s0);
    goto L_0884DE78;
L_0884DE78:;
    a0 = LD32(s2-16972);
    a1 = LD32(s5+44);
    v1 = a2 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    t4 = v0 + a0;
    v1 = LD32(t4);
    v0 = (a2 >> 1) & 0x7fff;
    t1 = LD32(s4-29584);
    v1 = v1 + v0;
    v1 = v1 << 3;
    t6 = a1 + v1;
    t0 = 0 + 0;
    t5 = a2 & 0x1;
    t2 = 0 + 0;
    goto L_0884DEB8;
L_0884DEB8:;
    a0 = t0 + 2;
    v0 = t0 ^ s6;
    v1 = t0 + 0;
    t0 = t0 + 1;
    a3 = t1 + t2;
    t3 = (s32)t0 < 3;
    cnd_ = t5 == 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_0884DEE0; }
    goto L_0884DED8;
L_0884DED8:;
    v1 = 0 + 0;
    if (v0 != 0) v1 = a0;
    goto L_0884DEE0;
L_0884DEE0:;
    v1 = v1 << 1;
    v1 = v1 + t6;
    a0 = LD_U16(v1);
    v0 = LD32(t4+4);
    a1 = LD32(s5+56);
    v0 = v0 + a0;
    v0 = v0 << 4;
    a1 = a1 + v0;
    v1 = LD32(a1);
    ST32(sp, v1);
    v0 = LD32(a1+4);
    f0 = BITSF(LD32(sp));
    ST32(sp+4, v0);
    v1 = LD32(a1+8);
    ST32(sp+8, v1);
    v0 = LD32(a1+12);
    ST32(sp+12, v0);
    ST32(a3, FBITS(f0));
    f1 = BITSF(LD32(sp+4));
    ST32(a3+4, FBITS(f1));
    f0 = BITSF(LD32(sp+8));
    cnd_ = t3 != 0;
    ST32(a3+8, FBITS(f0));
    if (cnd_) { goto L_0884DEB8; }
    goto L_0884DF3C;
L_0884DF3C:;
    v0 = t1 + 12;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(t1+4));
    f5 = BITSF(LD32(t1+8));
    f3 = BITSF(LD32(t1));
    f0 = BITSF(LD32(t1+12));
    f1 = f1 - f4;
    f2 = f2 - f5;
    f0 = f0 - f3;
    v0 = t1 + 24;
    ST32(sp+36, FBITS(f1));
    {u32 a_=sp+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    ST32(sp+32, FBITS(f0));
    {v[8]=BITSF(v1);}
    v1 = FBITS(f1);
    ST32(sp+40, FBITS(f2));
    {v[9]=BITSF(v1);}
    v1 = FBITS(f2);
    f8 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    f0 = BITSF(LD32(t1));
    f5 = BITSF(LD32(t1+24));
    f7 = f7 - f1;
    f8 = f8 - f2;
    f5 = f5 - f0;
    {v[10]=BITSF(v1);}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[2]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    v1 = t1 + 36;
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[5]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    f1 = BITSF(0);
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f5));
    s1 = D_08B28C70 - (-29584);
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f7));
    ST32(sp+56, FBITS(f8));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f6));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f6));
    ST32(t1+36, FBITS(f4));
    ST32(v1+4, FBITS(f3));
    cnd_ = fcc;
    ST32(v1+8, FBITS(f6));
    if (cnd_) { goto L_0884E09C; }
    goto L_0884E060;
L_0884E060:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(v1+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(t1+36, FBITS(f2));
    ST32(v1+4, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f3));
    ST32(sp+68, v0);
    goto L_0884E09C;
L_0884E09C:;
    v1 = a2 >> 16;
    v0 = v1 << 3;
    a1 = LD32(s2-16972);
    v0 = v0 - v1;
    v0 = v0 << 3;
    a1 = a1 + v0;
    a2 = (a2 >> 1) & 0x7fff;
    a0 = s2 - 16972;
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E0C0;
L_0884E0C0:;
    a1 = LD32(s1-29584);
    v1 = LD32(s3-29580);
    v0 = v0 & 0xffff;
    a2 = a1 + 48;
    v1 = v1 + 1;
    ST32(s1-29584, a2);
    cnd_ = v1 == s7;
    ST32(s3-29580, v1);
    if (cnd_) { goto L_0884E1A0; }
    goto L_0884E0E0;
L_0884E0E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+12); goto L_0884E198; }
    goto L_0884E0EC;
L_0884E0EC:;
    v1 = a2 + 0;
    a0 = 2;
    v0 = a1 + 0;
    a3 = (u32)-1;
    goto L_0884E0FC;
L_0884E0FC:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    a0 = a0 - 1;
    ST32(v1, FBITS(f0));
    v0 = v0 + 12;
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    cnd_ = a0 != a3;
    v1 = v1 + 12;
    if (cnd_) { goto L_0884E0FC; }
    goto L_0884E124;
L_0884E124:;
    v0 = a1 + 36;
    f0 = BITSF(LD32(a1+36));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    v1 = LD32(s4-29584);
    v0 = a2 + 36;
    ST32(v0+8, FBITS(f1));
    a0 = v1 + 36;
    a1 = v1 + 48;
    ST32(v0+4, FBITS(f2));
    ST32(a2+36, FBITS(f0));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+36));
    f2 = BITSF(LD32(a0+8));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    v0 = LD32(s3-29580);
    ST32(sp+68, FBITS(f1));
    v0 = v0 + 1;
    ST32(sp+64, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    ST32(s4-29584, a1);
    ST32(v1+36, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    cnd_ = v0 == s7;
    ST32(s3-29580, v0);
    if (cnd_) { goto L_0884E1A0; }
    goto L_0884E194;
L_0884E194:;
    s0 = LD32(s0+12);
    goto L_0884E198;
L_0884E198:;
    cnd_ = s0 != 0;
    if (cnd_) { a2 = LD32(s0); goto L_0884DE78; }
    goto L_0884E1A0;
L_0884E1A0:;
    sp = sp + 176;
    return;
}

/* 0884E1CC */
void func_0884E1CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0884E1CC:;
    sp = sp - 64;
    v0 = D_08B28CB4 - (-29516);
    s2 = D_08B28C74 - (-29580);
    s1 = D_08B28C78 - (-29576);
    a0 = sp + 0;
    s0 = 4;
    v1 = LD32(s2-29580);
    v0 = LD32(v0-29516);
    cnd_ = v0 == 0;
    ST32(s1-29576, v1);
    if (cnd_) { goto L_0884E208; }
    goto L_0884E204;
L_0884E204:;
    s0 = LD_U16(v0+90);
    goto L_0884E208;
L_0884E208:;
    ST32(sp+24, 0);
    ST32(sp+28, 0);
    ST32(sp+32, 0);
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E218;
L_0884E218:;
    f12 = BITSF(0);
    v1 = LD32(sp+36);
    v0 = 0x10000u;
    a1 = D_08B28C8C - (-29556);
    v1 = v1 | v0;
    a0 = sp + 0;
    a1 = a1 - 29556;
    ST32(sp+36, v1);
    ST16(sp+36, s0);
    { rv_t r_ = func_088B8958(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E240;
L_0884E240:;
    a0 = sp + 0;
    a1 = 0 + 0;
    func_0884DE2C(a0);
    goto L_0884E24C;
L_0884E24C:;
    a1 = LD32(s1-29576);
    v1 = LD32(s2-29580);
    v0 = D_08B28C7C - (-29572);
    a0 = sp + 0;
    v1 = v1 - a1;
    ST32(v0-29572, v1);
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E268;
L_0884E268:;
    sp = sp + 64;
    return;
}

/* 0884E280 */
rv_t func_0884E280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0884E280:;
    sp = sp - 80;
    s1 = D_08B28C14 - (-29676);
    v0 = s1 - 29676;
    v1 = LD32(s1-29676);
    ST32(sp, v0);
    v0 = (u32)-1;
    a2 = sp + 0;
    s2 = a1 + 0;
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0884E308; }
    goto L_0884E2CC;
L_0884E2CC:;
    ST32(sp+4, v1);
    a3 = sp + 8;
    goto L_0884E2D4;
L_0884E2D4:;
    a0 = LD32(a2+4);
    ST32(sp+36, 0);
    a1 = LD32(a0+4);
    ST32(a2+12, 0);
    ST32(a2+8, a1);
    v0 = LD32(a1+12);
    ST32(sp+32, a1);
    v1 = v0 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a3+4, v1);
    if (cnd_) { goto L_0884E420; }
    goto L_0884E2FC;
L_0884E2FC:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_0884E2D4; }
    goto L_0884E308;
L_0884E308:;
    s3 = 92;
    goto L_0884E30C;
L_0884E30C:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884E400; }
    goto L_0884E318;
L_0884E318:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_0884E400; }
    goto L_0884E320;
L_0884E320:;
    v0 = LD32(v1+8);
    a0 = s1 - 29676;
    a1 = a1 + v0;
    s0 = a1 << 1;
    s0 = s0 + a1;
    v0 = func_08AA9FBC(a0, a1);
    goto L_0884E338;
L_0884E338:;
    v1 = LD32(v0+56);
    s0 = s0 << 3;
    s0 = s0 + s2;
    ST32(s0, v1);
    v0 = v0 + 56;
    a3 = sp + 0;
    a0 = LD32(v0+4);
    a1 = LD32(sp+12);
    ST32(s0+4, a0);
    a1 = a1 - 1;
    v1 = LD32(v0+8);
    ST32(sp+12, a1);
    ST32(s0+8, v1);
    a0 = LD32(v0+12);
    ST32(s0+12, a0);
    v1 = LD32(v0+16);
    ST32(s0+16, v1);
    a0 = LD32(v0+20);
    cnd_ = (s32)a1 >= 0;
    ST32(s0+20, a0);
    if (cnd_) { goto L_0884E3F8; }
    goto L_0884E388;
L_0884E388:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_0884E30C; }
    goto L_0884E39C;
L_0884E39C:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884E388; }
    goto L_0884E3C0;
L_0884E3C0:;
    v1 = LD32(a3+8);
    v0 = LD32(a0+4);
    a1 = LD32(a3+4);
    a2 = LD32(v1+4);
    v0 = v0 << 2;
    a0 = LD32(a1);
    v0 = v0 + a2;
    v1 = LD32(v0);
    { s64 p_ = (s64)(s32)v1 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a3+16, v1);
    a1 = lo;
    a0 = a0 + a1;
    ST32(a3+20, a0);
    goto L_0884E30C;
L_0884E3F8:;
    a0 = sp + 8;
    goto L_0884E3C0;
L_0884E400:;
    v0 = 0 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0884E420:;
    v0 = LD32(a1+4);
    v1 = v1 << 2;
    a0 = LD32(a0);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 92;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2+16, a1);
    v0 = lo;
    a0 = a0 + v0;
    ST32(a2+20, a0);
    goto L_0884E308;
}

/* 0884E450 */
void func_0884E450(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0884E450:;
    sp = sp - 48;
    v0 = D_08B28BF4 - (-29708);
    v1 = LD32(v0-29708);
    cnd_ = v1 != 0;
    v0 = D_08B28C14 - (-29676);
    if (cnd_) { goto L_0884E47C; }
    goto L_0884E46C;
L_0884E46C:;
    sp = sp + 48;
    return;
L_0884E47C:;
    v1 = LD32(v0-29676);
    v0 = v0 - 29676;
    ST32(sp, v0);
    a0 = sp + 0;
    v0 = (u32)-1;
    s0 = 0 + 0;
    ST32(sp+4, v1);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    func_08AAA3FC(a0);
    goto L_0884E4A8;
L_0884E4A8:;
    v1 = LD32(sp+4);
    goto L_0884E4AC;
L_0884E4AC:;
    cnd_ = v1 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0884E4D8; }
    goto L_0884E4B4;
L_0884E4B4:;
    v0 = LD32(sp+12);
    cnd_ = (s32)v0 < 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_0884E4D8; }
    goto L_0884E4C0;
L_0884E4C0:;
    v1 = LD32(v1+8);
    v0 = v0 + v1;
    s0 = (s32)s0 > (s32)v0 ? s0 : v0;
    func_08AAA490(a0);
    goto L_0884E4D0;
L_0884E4D0:;
    v1 = LD32(sp+4);
    goto L_0884E4AC;
L_0884E4D8:;
    s0 = s0 + 1;
    a1 = ((u32)(uintptr_t)func_0884E280) - (-7552);
    a0 = s0 + 0;
    a1 = a1 - 7552;
    v0 = func_0882FD00(a0, a1);
    goto L_0884E4EC;
L_0884E4EC:;
    v1 = D_08B28D44 - (-29372);
    ST32(v1-29372, v0);
    goto L_0884E46C;
}

/* 0884E4F8 */
void func_0884E4F8(u32 a0, u32 a3, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884E4F8:;
    sp = sp - 16;
    v0 = D_08B28CBC - (-29508);
    cnd_ = a0 == 0;
    ST32(v0-29508, 0);
    if (cnd_) { goto L_0884E544; }
    goto L_0884E510;
L_0884E510:;
    v0 = D_08B28BF4 - (-29708);
    v1 = LD32(v0-29708);
    cnd_ = v1 == 0;
    s0 = D_08B28D44 - (-29372);
    if (cnd_) { goto L_0884E544; }
    goto L_0884E520;
L_0884E520:;
    v0 = LD32(s0-29372);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0884E554; }
    goto L_0884E52C;
L_0884E52C:;
    a0 = LD32(s0-29372);
    goto L_0884E530;
L_0884E530:;
    a1 = D_08B28C8C - (-29556);
    a2 = ((u32)(uintptr_t)func_0884E594) - (-6764);
    a1 = a1 - 29556;
    a2 = a2 - 6764;
    func_0882F89C(a0, a1, a2, a3, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884E544;
L_0884E544:;
    sp = sp + 16;
    return;
L_0884E554:;
    func_0884E450();
    goto L_0884E55C;
L_0884E55C:;
    a0 = LD32(s0-29372);
    goto L_0884E530;
}

/* 0884E564 */
void func_0884E564(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884E564:;
    sp = sp - 16;
    a1 = ((u32)(uintptr_t)func_0884E5A4) - (-6748);
    v0 = D_08B28CC0 - (-29504);
    a1 = a1 - 6748;
    cnd_ = a0 == 0;
    ST32(v0-29504, 0);
    if (cnd_) { goto L_0884E588; }
    goto L_0884E580;
L_0884E580:;
    func_0884D384(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0884E588;
L_0884E588:;
    sp = sp + 16;
    return;
}

/* 0884E594 */
rv_t func_0884E594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0884E594:;
    v1 = D_08B28CBC - (-29508);
    v0 = LD32(v1-29508);
    v0 = (s32)v0 < 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0884E5A4 */
rv_t func_0884E5A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0884E5A4:;
    sp = sp - 16;
    a0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E5C4;
L_0884E5C4:;
    a0 = D_08B28C8C - (-29556);
    v1 = 3;
    a1 = a0 - 29556;
    cnd_ = v0 == v1;
    a2 = 1;
    if (cnd_) { goto L_0884E5EC; }
    goto L_0884E5D8;
L_0884E5D8:;
    goto L_0884E5DC;
L_0884E5DC:;
    goto L_0884E5E0;
L_0884E5E0:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0884E5EC:;
    f1 = BITSF(LD32(s0+56));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = s0 + 56;
    if (cnd_) { goto L_0884E6A4; }
    goto L_0884E604;
L_0884E604:;
    f1 = BITSF(LD32(a0-29556));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a2 = 1;
    if (cnd_) { goto L_0884E5D8; }
    goto L_0884E61C;
L_0884E61C:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E5DC; }
    goto L_0884E634;
L_0884E634:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(a1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0884E5E0; }
    goto L_0884E64C;
L_0884E64C:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(a1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a3 = D_08B28CC0 - (-29504);
    if (cnd_) { goto L_0884E5DC; }
    goto L_0884E664;
L_0884E664:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(a1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_0884E6A4; }
    goto L_0884E67C;
L_0884E67C:;
    v1 = LD32(a3-29504);
    v0 = D_08B28CC4 - (-29500);
    v0 = v0 - 29500;
    a1 = v1 + 1;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = (s32)a1 < 32;
    ST32(v1, s0);
    cnd_ = a0 == 0;
    ST32(a3-29504, a1);
    if (cnd_) { goto L_0884E5DC; }
    goto L_0884E6A4;
L_0884E6A4:;
    a2 = 1;
    goto L_0884E5D8;
}

/* 0884E6AC */
void func_0884E6AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0884E6AC:;
    sp = sp - 64;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884E870; }
    goto L_0884E6D4;
L_0884E6D4:;
    v0 = D_08B28C00 - (-29696);
    v1 = LD32(v0-29696);
    v0 = v0 - 29696;
    ST32(sp, v0);
    a0 = sp + 0;
    v0 = (u32)-1;
    s3 = (u32)-1;
    s2 = D_08B28C74 - (-29580);
    ST32(sp+4, v1);
    s4 = 2000;
    s5 = D_08B28C70 - (-29584);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    func_08AAA1AC(a0);
    goto L_0884E710;
L_0884E710:;
    v0 = LD32(sp+4);
    goto L_0884E714;
L_0884E714:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0884E870; }
    goto L_0884E71C;
L_0884E71C:;
    cnd_ = (s32)v0 < 0;
    s0 = LD32(sp+20);
    if (cnd_) { goto L_0884E870; }
    goto L_0884E724;
L_0884E724:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E72C;
L_0884E72C:;
    v1 = LD32(s0+88);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = v1 & 0x80; goto L_0884E74C; }
    goto L_0884E73C;
L_0884E73C:;
    a0 = sp + 0;
    func_08AAA240(a0);
    goto L_0884E744;
L_0884E744:;
    v0 = LD32(sp+4);
    goto L_0884E714;
L_0884E74C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E754;
L_0884E754:;
    cnd_ = s0 == s1;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E75C;
L_0884E75C:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E76C;
L_0884E76C:;
    v1 = LD32(s0+4);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E778;
L_0884E778:;
    v1 = LD32(s0);
    v0 = LD32(v1+24);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E788;
L_0884E788:;
    v1 = v0 + 0;
    v0 = LD32(s1+4);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0884E860; }
    goto L_0884E798;
L_0884E798:;
    v1 = D_08B28C8C - (-29556);
    a0 = v1 - 29556;
    goto L_0884E7A0;
L_0884E7A0:;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(s0+56));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = s0 + 56;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E7B8;
L_0884E7B8:;
    f1 = BITSF(LD32(v1-29556));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E7D0;
L_0884E7D0:;
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E7E8;
L_0884E7E8:;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E800;
L_0884E800:;
    f1 = BITSF(LD32(a0+20));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E818;
L_0884E818:;
    f1 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E830;
L_0884E830:;
    a0 = LD32(s0+84);
    cnd_ = a0 == 0;
    a1 = LD32(s2-29580);
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E83C;
L_0884E83C:;
    a3 = s0 + 8;
    a2 = s5 - 29584;
    a1 = s4 - a1;
    t0 = 0 + 0;
    { rv_t r_ = func_0884A8D0(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884E850;
L_0884E850:;
    v1 = LD32(s2-29580);
    v1 = v1 + v0;
    ST32(s2-29580, v1);
    goto L_0884E73C;
L_0884E860:;
    cnd_ = v1 != s3;
    v1 = D_08B28C8C - (-29556);
    if (cnd_) { goto L_0884E73C; }
    goto L_0884E868;
L_0884E868:;
    a0 = v1 - 29556;
    goto L_0884E7A0;
L_0884E870:;
    sp = sp + 64;
    return;
}

/* 0884E894 */
void func_0884E894(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0884E894:;
    sp = sp - 48;
    a2 = D_08B28F04 - (-28924);
    v0 = a2 - 28924;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0884E928; }
    goto L_0884E8DC;
L_0884E8DC:;
    a2 = LD32(a2-28924);
    a3 = a1 + 0;
    goto L_0884E8E4;
L_0884E8E4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0884E918; }
    goto L_0884E8FC;
L_0884E8FC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0884E92C; }
    goto L_0884E90C;
L_0884E90C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0884E8FC; }
    goto L_0884E918;
L_0884E918:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0884E8E4; }
    goto L_0884E928;
L_0884E928:;
    v0 = LD32(sp+8);
    goto L_0884E92C;
L_0884E92C:;
    cnd_ = v0 == 0;
    s2 = D_08B28C74 - (-29580);
    if (cnd_) { goto L_0884E974; }
    goto L_0884E934;
L_0884E934:;
    s4 = D_08B28C70 - (-29584);
    s1 = LD32(v0);
    goto L_0884E93C;
L_0884E93C:;
    a0 = sp + 0;
    a1 = 1;
    func_08AAA524(a0, a1);
    goto L_0884E948;
L_0884E948:;
    cnd_ = s1 == 0;
    v1 = 7;
    if (cnd_) { goto L_0884E968; }
    goto L_0884E950;
L_0884E950:;
    a1 = LD32(s1);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v1 = LD32(a1-12); goto L_0884E9B8; }
    goto L_0884E968;
L_0884E968:;
    v0 = LD32(sp+8);
    goto L_0884E96C;
L_0884E96C:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_0884E93C; }
    goto L_0884E974;
L_0884E974:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0884E9A8; }
    goto L_0884E988;
L_0884E988:;
    goto L_0884E98C;
L_0884E98C:;
    sp = sp + 48;
    return;
L_0884E9A8:;
    func_08AAA5C8(a0, t1, t2, t3);
    goto L_0884E9B0;
L_0884E9B0:;
    goto L_0884E98C;
L_0884E9B8:;
    a0 = s1 + v1;
    v0 = LD32(a0+8);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0884E96C; }
    goto L_0884E9CC;
L_0884E9CC:;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0884E96C; }
    goto L_0884E9D8;
L_0884E9D8:;
    cnd_ = a0 != 0;
    v0 = 1;
    if (cnd_) { goto L_0884EB3C; }
    goto L_0884E9E0;
L_0884E9E0:;
    v0 = v0 & 0xff;
    goto L_0884E9E4;
L_0884E9E4:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0884E96C; }
    goto L_0884E9EC;
L_0884E9EC:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0884EA08; }
    goto L_0884EA04;
L_0884EA04:;
    s3 = LD32(v0+16);
    goto L_0884EA08;
L_0884EA08:;
    cnd_ = s3 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0884E96C; }
    goto L_0884EA10;
L_0884EA10:;
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EA28;
L_0884EA28:;
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s3+28));
    v1 = D_08B28C8C - (-29556);
    a0 = v1 - 29556;
    f1 = f2 - f3;
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(sp+8); goto L_0884E96C; }
    goto L_0884EA50;
L_0884EA50:;
    f1 = f2 + f3;
    f0 = BITSF(LD32(v1-29556));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(sp+8); goto L_0884E96C; }
    goto L_0884EA68;
L_0884EA68:;
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a0+12));
    f0 = f2 - f3;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(sp+8); goto L_0884E96C; }
    goto L_0884EA84;
L_0884EA84:;
    f1 = f2 + f3;
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(sp+8); goto L_0884E96C; }
    goto L_0884EA9C;
L_0884EA9C:;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a0+20));
    f0 = f2 - f3;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_0884E96C; }
    goto L_0884EAB8;
L_0884EAB8:;
    f1 = f2 + f3;
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884E96C; }
    goto L_0884EAD0;
L_0884EAD0:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EAEC;
L_0884EAEC:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EB0C;
L_0884EB0C:;
    v1 = LD32(s2-29580);
    a1 = 2000;
    a0 = s3 + 0;
    a1 = a1 - v1;
    a3 = s0 + 0;
    t0 = v0 + 0;
    a2 = s4 - 29584;
    { rv_t r_ = func_0884A8D0(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EB2C;
L_0884EB2C:;
    v1 = LD32(s2-29580);
    v1 = v1 + v0;
    ST32(s2-29580, v1);
    goto L_0884E968;
L_0884EB3C:;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0884EB44;
L_0884EB44:;
    v0 = v0 & 0xff;
    goto L_0884E9E4;
}

/* 0884EB4C */
void func_0884EB4C(u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0884EB4C:;
    sp = sp - 32;
    s2 = D_08B28CC0 - (-29504);
    v0 = LD32(s2-29504);
    s1 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_0884EC8C; }
    goto L_0884EB7C;
L_0884EB7C:;
    v0 = D_08B28CC4 - (-29500);
    s0 = v0 - 29500;
    s3 = D_08B28C74 - (-29580);
    s5 = 2000;
    s4 = D_08B28C70 - (-29584);
    goto L_0884EB90;
L_0884EB90:;
    a3 = LD32(s0);
    cnd_ = a3 == 0;
    v1 = D_08B28C8C - (-29556);
    if (cnd_) { goto L_0884EC78; }
    goto L_0884EB9C;
L_0884EB9C:;
    a0 = v1 - 29556;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a3+56));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = a3 + 56;
    if (cnd_) { goto L_0884EC78; }
    goto L_0884EBB8;
L_0884EBB8:;
    f1 = BITSF(LD32(v1-29556));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2-29504); goto L_0884EC7C; }
    goto L_0884EBD0;
L_0884EBD0:;
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2-29504); goto L_0884EC7C; }
    goto L_0884EBE8;
L_0884EBE8:;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2-29504); goto L_0884EC7C; }
    goto L_0884EC00;
L_0884EC00:;
    f1 = BITSF(LD32(a0+20));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2-29504); goto L_0884EC7C; }
    goto L_0884EC18;
L_0884EC18:;
    f1 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = LD32(s2-29504);
    if (cnd_) { goto L_0884EC7C; }
    goto L_0884EC30;
L_0884EC30:;
    v0 = LD32(a3+88);
    v1 = a3 + 20;
    t0 = 0 + 0;
    a0 = (v0 >> 8) & 0x1;
    v0 = (v0 >> 9) & 0x1;
    cnd_ = a0 == 0;
    if (v0 != 0) t0 = v1;
    if (cnd_) { goto L_0884ECB0; }
    goto L_0884EC4C;
L_0884EC4C:;
    a0 = LD32(a3+84);
    a1 = LD32(s3-29580);
    a3 = a3 + 8;
    v1 = LD32(a0);
    a1 = s5 - a1;
    v0 = LD32(v1);
    t_ = v0;
    a2 = s4 - 29584;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EC6C;
L_0884EC6C:;
    v1 = LD32(s3-29580);
    goto L_0884EC70;
L_0884EC70:;
    v1 = v1 + v0;
    ST32(s3-29580, v1);
    goto L_0884EC78;
L_0884EC78:;
    v0 = LD32(s2-29504);
    goto L_0884EC7C;
L_0884EC7C:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0884EB90; }
    goto L_0884EC8C;
L_0884EC8C:;
    sp = sp + 32;
    return;
L_0884ECB0:;
    a1 = LD32(s3-29580);
    a0 = LD32(a3+84);
    a2 = s4 - 29584;
    a3 = a3 + 8;
    a1 = s5 - a1;
    { rv_t r_ = func_0884A8D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884ECC8;
L_0884ECC8:;
    v1 = LD32(s3-29580);
    goto L_0884EC70;
}

/* 0884ECD0 */
void func_0884ECD0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0884ECD0:;
    sp = sp - 48;
    v0 = D_08B28C28 - (-29656);
    a0 = sp + 0;
    s2 = 2000;
    s1 = D_08B28C70 - (-29584);
    s0 = D_08B28C74 - (-29580);
    v1 = LD32(v0-29656);
    v0 = v0 - 29656;
    ST32(sp, v0);
    v0 = (u32)-1;
    ST32(sp+4, v1);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    func_08AAA2D4(a0);
    goto L_0884ED1C;
L_0884ED1C:;
    v0 = LD32(sp+4);
    goto L_0884ED20;
L_0884ED20:;
    a0 = D_08B28C8C - (-29556);
    cnd_ = v0 == 0;
    a1 = a0 - 29556;
    if (cnd_) { goto L_0884EDFC; }
    goto L_0884ED2C;
L_0884ED2C:;
    v0 = LD32(sp+12);
    cnd_ = (s32)v0 < 0;
    v0 = LD32(sp+20);
    if (cnd_) { goto L_0884EDFC; }
    goto L_0884ED38;
L_0884ED38:;
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(v0+56));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = v0 + 56;
    if (cnd_) { goto L_0884EDCC; }
    goto L_0884ED50;
L_0884ED50:;
    f1 = BITSF(LD32(a0-29556));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884EDCC; }
    goto L_0884ED68;
L_0884ED68:;
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(v1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884EDCC; }
    goto L_0884ED80;
L_0884ED80:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(v1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884EDCC; }
    goto L_0884ED98;
L_0884ED98:;
    f1 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a3 = v0 + 8;
    if (cnd_) { goto L_0884EDCC; }
    goto L_0884EDB0;
L_0884EDB0:;
    f1 = BITSF(LD32(a1+16));
    f0 = BITSF(LD32(v1+20));
    a2 = s1 - 29584;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    t0 = 0 + 0;
    if (cnd_) { goto L_0884EDDC; }
    goto L_0884EDCC;
L_0884EDCC:;
    a0 = sp + 0;
    func_08AAA368(a0);
    goto L_0884EDD4;
L_0884EDD4:;
    v0 = LD32(sp+4);
    goto L_0884ED20;
L_0884EDDC:;
    a1 = LD32(s0-29580);
    a0 = LD32(v0+84);
    a1 = s2 - a1;
    { rv_t r_ = func_0884A8D0(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EDEC;
L_0884EDEC:;
    v1 = LD32(s0-29580);
    v1 = v1 + v0;
    ST32(s0-29580, v1);
    goto L_0884EDCC;
L_0884EDFC:;
    sp = sp + 48;
    return;
}

/* 0884EE14 */
void func_0884EE14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_0884EE14:;
    sp = sp - 400;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EE5C;
L_0884EE5C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0884EEA4; }
    goto L_0884EE64;
L_0884EE64:;
    v0 = v1 + 0;
    sp = sp + 400;
    return;
L_0884EEA4:;
    v1 = LD32(s0);
    s6 = D_08AEBAC8 - (-17720);
    a0 = s0 + 0;
    v0 = LD32(v1);
    f23 = BITSF(0);
    t_ = v0;
    f21 = BITSF(LD32(s6-17720));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884EEC0;
L_0884EEC0:;
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    v1 = FBITS(f2);
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[12]=BITSF(v1);}
    a2 = FBITS(f3);
    {v[13]=BITSF(a2);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    s3 = D_08B28C50 - (-29616);
    v0 = s3 - 29616;
    fcc = FCMP(f0, f23, 2);
    ST32(s3-29616, FBITS(f2));
    f22 = f21;
    s2 = 0 + 0;
    ST32(v0+4, FBITS(f3));
    cnd_ = fcc;
    ST32(v0+8, FBITS(f4));
    if (cnd_) { goto L_0884EF50; }
    goto L_0884EF18;
L_0884EF18:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a2=FBITS(v[2]);}
    f3 = BITSF(a2);
    {v1=FBITS(v[0]);}
    {a2=FBITS(v[1]);}
    ST32(v0+8, FBITS(f3));
    ST32(sp+4, a2);
    ST32(sp, v1);
    ST32(sp+8, FBITS(f3));
    ST32(s3-29616, v1);
    ST32(v0+4, a2);
    goto L_0884EF50;
L_0884EF50:;
    f1 = BITSF(LD32(s0+80));
    f12 = BITSF(LD32(s0+140));
    fcc = FCMP(f1, f12, 12);
    cnd_ = !fcc;
    s5 = D_08AEBACC - (-17716);
    if (cnd_) { goto L_0884EF74; }
    goto L_0884EF68;
L_0884EF68:;
    f0 = f21 / f12;
    f21 = f1 * f0;
    f22 = f21;
    goto L_0884EF74;
L_0884EF74:;
    f1 = BITSF(LD32(s5-17716));
    f0 = BITSF(LD32(s6-17720));
    f20 = f1 / f12;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    f12 = f21;
    if (cnd_) { goto L_0884EFAC; }
    goto L_0884EF90;
L_0884EF90:;
    f12 = f20;
    a0 = s0 + 0;
    v0 = func_0884FBB4(a0, f12);
    goto L_0884EF9C;
L_0884EF9C:;
    cnd_ = v0 != 0;
    if (cnd_) { f21 = f23; goto L_0884F020; }
    goto L_0884EFA4;
L_0884EFA4:;
    f23 = f20;
    f12 = f21;
    goto L_0884EFAC;
L_0884EFAC:;
    a0 = s0 + 0;
    v0 = func_0884FBB4(a0, f12);
    goto L_0884EFB4;
L_0884EFB4:;
    cnd_ = v0 == 0;
    f1 = f23 + f22;
    if (cnd_) { goto L_0884F024; }
    goto L_0884EFBC;
L_0884EFBC:;
    v0 = D_08AEBAD0 - (-17712);
    f0 = BITSF(LD32(v0-17712));
    v1 = D_08AEBACC - (-17716);
    f24 = BITSF(LD32(v1-17716));
    f21 = f1 * f0;
    f20 = f0;
    f12 = f21;
    goto L_0884EFD8;
L_0884EFD8:;
    a0 = s0 + 0;
    v0 = func_0884FBB4(a0, f12);
    goto L_0884EFE0;
L_0884EFE0:;
    cnd_ = v0 == 0;
    if (cnd_) { f23 = f21; goto L_0884EFEC; }
    goto L_0884EFE8;
L_0884EFE8:;
    f22 = f21;
    goto L_0884EFEC;
L_0884EFEC:;
    f0 = f23 + f22;
    f1 = BITSF(LD32(s0+140));
    f21 = f0 * f20;
    f0 = f22 - f23;
    f0 = f0 * f1;
    fcc = FCMP(f0, f24, 14);
    cnd_ = !fcc;
    f12 = f21;
    if (cnd_) { goto L_0884EFD8; }
    goto L_0884F010;
L_0884F010:;
    f12 = f22;
    a0 = s0 + 0;
    v0 = func_0884FBB4(a0, f12);
    goto L_0884F01C;
L_0884F01C:;
    f21 = f23;
    goto L_0884F020;
L_0884F020:;
    s2 = 1;
    goto L_0884F024;
L_0884F024:;
    f0 = BITSF(0);
    fcc = FCMP(f21, f0, 2);
    cnd_ = fcc;
    s1 = s0 + 128;
    if (cnd_) { goto L_0884F0F4; }
    goto L_0884F038;
L_0884F038:;
    f5 = BITSF(LD32(s1+4));
    f6 = BITSF(LD32(s1+8));
    f7 = BITSF(LD32(s0+128));
    f5 = f5 * f21;
    f6 = f6 * f21;
    f7 = f7 * f21;
    v1 = s0 + 8;
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 + f5;
    f1 = f1 + f6;
    f2 = f2 + f7;
    v0 = s0 + 56;
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    f8 = BITSF(LD32(s0+56));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v0+16));
    f1 = f1 + f7;
    f2 = f2 + f5;
    f0 = f0 + f6;
    f8 = f8 + f7;
    f3 = f3 + f5;
    f4 = f4 + f6;
    ST32(v0+4, FBITS(f1));
    ST32(v0+16, FBITS(f0));
    ST32(v0+12, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+20, FBITS(f4));
    ST32(s0+56, FBITS(f8));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    f0 = BITSF(LD32(s0+128));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f0 = f0 - f7;
    f1 = f1 - f5;
    f2 = f2 - f6;
    ST32(sp+16, FBITS(f7));
    ST32(s1+4, FBITS(f1));
    ST32(s0+128, FBITS(f0));
    ST32(s1+8, FBITS(f2));
    goto L_0884F0F4;
L_0884F0F4:;
    v0 = LD_U8(s0+88);
    v1 = LD32(s0+88);
    v0 = v0 & 0x1;
    v0 = v0 | s2;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    cnd_ = s2 == 0;
    ST32(s0+88, v1);
    if (cnd_) { goto L_0884F8D8; }
    goto L_0884F110;
L_0884F110:;
    f0 = BITSF(0);
    f1 = BITSF(LD32(s3-29616));
    v0 = D_08AEBAE0 - (-17696);
    ST32(sp+8, FBITS(f0));
    fcc = FCMP(f0, f1, 12);
    t2 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f0));
    cnd_ = !fcc;
    f21 = BITSF(LD32(v0-17696));
    if (cnd_) { goto L_0884F8A8; }
    goto L_0884F138;
L_0884F138:;
    f0 = BITSF(LD32(s0+60));
    goto L_0884F13C;
L_0884F13C:;
    v0 = s3 - 29616;
    ST32(sp+48, FBITS(f0));
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884F878; }
    goto L_0884F15C;
L_0884F15C:;
    f0 = BITSF(LD32(s0+68));
    goto L_0884F160;
L_0884F160:;
    v0 = s3 - 29616;
    ST32(sp+52, FBITS(f0));
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884F848; }
    goto L_0884F180;
L_0884F180:;
    f0 = BITSF(LD32(s0+76));
    goto L_0884F184;
L_0884F184:;
    s4 = D_08B28C84 - (-29564);
    a3 = LD32(s4-29564);
    v0 = (u32)-1;
    ST32(sp+56, FBITS(f0));
    a3 = a3 - 1;
    cnd_ = a3 == v0;
    s2 = D_08B28C68 - (-29592);
    if (cnd_) { goto L_0884F2B8; }
    goto L_0884F1A0;
L_0884F1A0:;
    v0 = D_08B28C80 - (-29568);
    a1 = LD32(v0-29568);
    v0 = D_08B28C58 - (-29608);
    v1 = D_08AEBAE4 - (-17692);
    f3 = BITSF(LD32(v0-29608));
    v0 = D_08AEBAE8 - (-17688);
    a0 = a3 << 1;
    f4 = BITSF(LD32(v1-17692));
    f5 = BITSF(LD32(v0-17688));
    v1 = D_08AEBAD0 - (-17712);
    v0 = D_08AEBAEC - (-17684);
    a0 = a0 + a3;
    f6 = BITSF(LD32(v1-17712));
    f7 = BITSF(LD32(v0-17684));
    f2 = BITSF(LD32(s3-29616));
    a0 = a0 << 4;
    a0 = a0 + a1;
    a1 = (u32)-1;
    goto L_0884F1E8;
L_0884F1E8:;
    f1 = BITSF(LD32(a0+36));
    f0 = BITSF(LD32(a0+44));
    f1 = f1 * f2;
    f0 = f0 * f3;
    f1 = f1 + f0;
    fcc = FCMP(f1, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = a3 - 1; goto L_0884F2B0; }
    goto L_0884F20C;
L_0884F20C:;
    v0 = LD32(s0+88);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 - 1; goto L_0884F2B0; }
    goto L_0884F21C;
L_0884F21C:;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = a3 - 1; goto L_0884F2B0; }
    goto L_0884F230;
L_0884F230:;
    fcc = FCMP(f0, f6, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = a3 - 1; goto L_0884F2B0; }
    goto L_0884F240;
L_0884F240:;
    f1 = BITSF(LD32(a0+4));
    v0 = a0 + 28;
    v1 = 2;
    f0 = BITSF(LD32(v0));
    goto L_0884F250;
L_0884F250:;
    v1 = v1 - 1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 - 12;
    if (cnd_) { goto L_0884F268; }
    goto L_0884F264;
L_0884F264:;
    f1 = f0;
    goto L_0884F268;
L_0884F268:;
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(LD32(v0)); goto L_0884F250; }
    goto L_0884F270;
L_0884F270:;
    f0 = BITSF(LD32(s0+68));
    f1 = f0 - f1;
    fcc = FCMP(f7, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = a3 - 1; goto L_0884F2B0; }
    goto L_0884F288;
L_0884F288:;
    f0 = BITSF(LD32(s2-29592));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a3 = a3 - 1; goto L_0884F2B0; }
    goto L_0884F29C;
L_0884F29C:;
    fcc = FCMP(f1, f6, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s2-29592, FBITS(f1)); goto L_0884F2AC; }
    goto L_0884F2AC;
L_0884F2AC:;
    a3 = a3 - 1;
    goto L_0884F2B0;
L_0884F2B0:;
    cnd_ = a3 != a1;
    a0 = a0 - 48;
    if (cnd_) { goto L_0884F1E8; }
    goto L_0884F2B8;
L_0884F2B8:;
    f1 = BITSF(LD32(s2-29592));
    f20 = BITSF(0);
    fcc = FCMP(f1, f20, 2);
    cnd_ = !fcc;
    v0 = D_08AEBAF0 - (-17680);
    if (cnd_) { goto L_0884F7D0; }
    goto L_0884F2D0;
L_0884F2D0:;
    a3 = LD32(s4-29564);
    v0 = (u32)-1;
    a3 = a3 - 1;
    cnd_ = a3 == v0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0884F6E8; }
    goto L_0884F2E4;
L_0884F2E4:;
    v0 = D_08B28C80 - (-29568);
    a1 = LD32(v0-29568);
    v1 = a3 << 1;
    f3 = BITSF(0);
    f6 = BITSF(LD32(sp+48));
    f5 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(sp+56));
    v1 = v1 + a3;
    a0 = D_08B28C50 - (-29616);
    v0 = D_08AEBAF4 - (-17676);
    v1 = v1 << 4;
    a0 = a0 - 29616;
    t1 = (u32)-1;
    a2 = v1 + a1;
    f7 = BITSF(LD32(v0-17676));
    a1 = LD32(a0+8);
    v0 = LD32(s3-29616);
    {u32 a_=sp+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+4);
    {v[8]=BITSF(v0);}
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(a1);}
    goto L_0884F33C;
L_0884F33C:;
    v0 = LD32(a2+36);
    v1 = LD32(a2+40);
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(a2+44);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    a3 = a3 - 1;
    if (cnd_) { goto L_0884F73C; }
    goto L_0884F374;
L_0884F374:;
    cnd_ = a3 != t1;
    a2 = a2 - 48;
    if (cnd_) { goto L_0884F33C; }
    goto L_0884F37C;
L_0884F37C:;
    cnd_ = t0 == 0;
    if (cnd_) { a0 = LD32(s1+8); goto L_0884F6EC; }
    goto L_0884F384;
L_0884F384:;
    t1 = t0 + 36;
    f1 = BITSF(LD32(t0+36));
    f8 = BITSF(LD32(t1+4));
    f0 = BITSF(LD32(t1+8));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    cnd_ = t2 != 0;
    ST32(sp+4, FBITS(f8));
    if (cnd_) { goto L_0884F6E8; }
    goto L_0884F3A4;
L_0884F3A4:;
    v0 = D_08B28CB8 - (-29512);
    v1 = LD_U8(v0-29512);
    t3 = 0 + 0;
    cnd_ = v1 == 0;
    t2 = D_08AEBADC - (-17700);
    if (cnd_) { goto L_0884F450; }
    goto L_0884F3B8;
L_0884F3B8:;
    f0 = BITSF(LD32(t2-17700));
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    a1 = s0 + 104;
    if (cnd_) { goto L_0884F454; }
    goto L_0884F3CC;
L_0884F3CC:;
    f1 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(t0+16));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f2 = f1;
    if (cnd_) { goto L_0884F3E8; }
    goto L_0884F3E4;
L_0884F3E4:;
    f1 = f0;
    goto L_0884F3E8;
L_0884F3E8:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f0; goto L_0884F3F8; }
    goto L_0884F3F8;
L_0884F3F8:;
    f0 = BITSF(LD32(t0+28));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f0; goto L_0884F40C; }
    goto L_0884F40C;
L_0884F40C:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f0; goto L_0884F41C; }
    goto L_0884F41C;
L_0884F41C:;
    f0 = BITSF(LD32(s0+68));
    v0 = D_08B15B8C - (23436);
    f3 = BITSF(LD32(v0+23436));
    f0 = f0 - f1;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { a1 = s0 + 104; goto L_0884F454; }
    goto L_0884F43C;
L_0884F43C:;
    f0 = f2 - f1;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    f8 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_0884F734; }
    goto L_0884F450;
L_0884F450:;
    a1 = s0 + 104;
    goto L_0884F454;
L_0884F454:;
    f8 = BITSF(LD32(sp+4));
    f5 = BITSF(LD32(sp+8));
    f6 = BITSF(LD32(sp));
    f4 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f7 = BITSF(LD32(s0+104));
    f1 = BITSF(LD32(s0+144));
    v0 = FBITS(f6);
    a2 = FBITS(f7);
    v1 = FBITS(f8);
    a0 = FBITS(f5);
    {u32 a_=sp+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a2);}
    {v[0]=BITSF(v0);}
    a2 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[5]=BITSF(a2);}
    {v[2]=BITSF(a0);}
    a2 = FBITS(f3);
    {v[6]=BITSF(a2);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    a2 = D_08B28C5C - (-29604);
    a3 = a2 - 29604;
    f1 = f1 * f0;
    ST32(sp+72, FBITS(f5));
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 + f0;
    ST32(sp+68, FBITS(f8));
    {v[4]=BITSF(v0);}
    {v[5]=BITSF(v1);}
    f0 = f5 * f1;
    f2 = f6 * f1;
    f1 = f8 * f1;
    {v[6]=BITSF(a0);}
    f3 = f3 - f0;
    f7 = f7 - f2;
    f4 = f4 - f1;
    ST32(a1+8, FBITS(f3));
    ST32(a1+4, FBITS(f4));
    ST32(a3+8, FBITS(f5));
    ST32(s0+104, FBITS(f7));
    ST32(a3+4, FBITS(f8));
    ST32(a2-29604, FBITS(f6));
    f4 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s0+128));
    f3 = BITSF(LD32(s1+4));
    a2 = FBITS(f4);
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a2);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    v0 = D_08AEBAD4 - (-17708);
    f1 = BITSF(LD32(v0-17708));
    ST32(sp+64, FBITS(f6));
    f0 = f0 * f1;
    f5 = f5 * f0;
    f6 = f6 * f0;
    f0 = f8 * f0;
    f4 = f4 - f5;
    f2 = f2 - f6;
    f3 = f3 - f0;
    ST32(sp+36, FBITS(f0));
    ST32(s0+128, FBITS(f2));
    ST32(sp+40, FBITS(f5));
    ST32(s1+4, FBITS(f3));
    ST32(s1+8, FBITS(f4));
    ST32(sp+32, FBITS(f6));
    goto L_0884F580;
L_0884F580:;
    v0 = D_08AEBAD8 - (-17704);
    f0 = BITSF(LD32(v0-17704));
    fcc = FCMP(f8, f0, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(t2-17700));
    if (cnd_) { goto L_0884F5A0; }
    goto L_0884F598;
L_0884F598:;
    cnd_ = t3 == 0;
    if (cnd_) { goto L_0884F5C0; }
    goto L_0884F5A0;
L_0884F5A0:;
    v1 = LD32(s0+88);
    fcc = FCMP(f8, f0, 12);
    v0 = v1 | 0x2;
    cnd_ = !fcc;
    ST32(s0+88, v0);
    if (cnd_) { goto L_0884F5BC; }
    goto L_0884F5B4;
L_0884F5B4:;
    v0 = v1 | 0xa;
    ST32(s0+88, v0);
    goto L_0884F5BC;
L_0884F5BC:;
    f0 = BITSF(LD32(t2-17700));
    goto L_0884F5C0;
L_0884F5C0:;
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+8); goto L_0884F6EC; }
    goto L_0884F5D0;
L_0884F5D0:;
    a0 = s3 - 29616;
    v0 = D_08AEBAD0 - (-17712);
    f5 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v0-17712));
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+8); goto L_0884F6EC; }
    goto L_0884F5F0;
L_0884F5F0:;
    cnd_ = t3 != 0;
    if (cnd_) { a0 = LD32(s1+8); goto L_0884F6EC; }
    goto L_0884F5F8;
L_0884F5F8:;
    f2 = BITSF(LD32(t0));
    f0 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(t0+4));
    f4 = BITSF(LD32(t0+8));
    f0 = f0 - f2;
    f1 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f1 = f1 - f3;
    f2 = f2 - f4;
    ST32(sp+64, FBITS(f0));
    v1 = FBITS(f0);
    ST32(sp+68, FBITS(f1));
    {v[4]=BITSF(v1);}
    a2 = FBITS(f1);
    ST32(sp+72, FBITS(f2));
    v0 = FBITS(f2);
    {v[5]=BITSF(a2);}
    v1 = LD32(t1+8);
    {v[6]=BITSF(v0);}
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(t0+36);
    f1 = BITSF(0);
    {v[0]=BITSF(v0);}
    v0 = LD32(t1+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+8); goto L_0884F6EC; }
    goto L_0884F680;
L_0884F680:;
    v0 = LD32(s3-29616);
    {u32 a_=sp+(288);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[1]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[2]=BITSF(v0);}
    v0 = D_08AEBAF8 - (-17672);
    v1 = LD32(a0+8);
    a2 = FBITS(f5);
    f0 = BITSF(LD32(v0-17672));
    {v[5]=BITSF(a2);}
    {v[6]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+8); goto L_0884F6EC; }
    goto L_0884F6DC;
L_0884F6DC:;
    v0 = LD32(s0+88);
    v0 = v0 | 0x10;
    ST32(s0+88, v0);
    goto L_0884F6E8;
L_0884F6E8:;
    a0 = LD32(s1+8);
    goto L_0884F6EC;
L_0884F6EC:;
    v1 = LD32(s1+4);
    v0 = LD32(s0+128);
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s5-17716));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a2=FBITS(v[0]);}
    f0 = BITSF(a2);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+140, a2);
    if (cnd_) { goto L_0884F72C; }
    goto L_0884F728;
L_0884F728:;
    ST32(s0+140, 0);
    goto L_0884F72C;
L_0884F72C:;
    v1 = 1;
    goto L_0884EE64;
L_0884F734:;
    t3 = 1;
    goto L_0884F580;
L_0884F73C:;
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    f0 = f6 - f0;
    f1 = f5 - f1;
    f2 = f4 - f2;
    {u32 a_=sp+(144);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+32, FBITS(f0));
    v0 = FBITS(f0);
    ST32(sp+40, FBITS(f2));
    {v[4]=BITSF(v0);}
    v1 = FBITS(f1);
    ST32(sp+36, FBITS(f1));
    {v[5]=BITSF(v1);}
    v0 = FBITS(f2);
    v1 = LD32(a2+40);
    {v[6]=BITSF(v0);}
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(a2+36);
    {v[0]=BITSF(v0);}
    v0 = LD32(a2+44);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 + f7; goto L_0884F7B4; }
    goto L_0884F7B4;
L_0884F7B4:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884F374; }
    goto L_0884F7C4;
L_0884F7C4:;
    f21 = f0;
    t0 = a2 + 0;
    goto L_0884F374;
L_0884F7D0:;
    f0 = BITSF(LD32(v0-17680));
    a0 = s0 + 0;
    f0 = f1 + f0;
    ST32(s2-29592, FBITS(f0));
    v0 = func_0884F924(a0, 0, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884F7E4;
L_0884F7E4:;
    cnd_ = v0 != 0;
    t2 = v0 + 0;
    if (cnd_) { goto L_0884F7F4; }
    goto L_0884F7EC;
L_0884F7EC:;
    ST32(s2-29592, FBITS(f20));
    goto L_0884F2D0;
L_0884F7F4:;
    v1 = LD32(s0+88);
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(s0+128);
    v1 = v1 | 0x4002;
    ST32(s0+88, v1);
    {v[0]=BITSF(v0);}
    a0 = LD32(s1+8);
    v0 = LD32(s1+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s5-17716));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+140, v0);
    if (cnd_) { goto L_0884F72C; }
    goto L_0884F840;
L_0884F840:;
    ST32(s0+140, FBITS(f20));
    goto L_0884F72C;
L_0884F848:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+72)); goto L_0884F860; }
    goto L_0884F858;
L_0884F858:;
    f0 = BITSF(LD32(s0+72));
    goto L_0884F184;
L_0884F860:;
    f0 = BITSF(LD32(s0+76));
    v0 = D_08AEBAD0 - (-17712);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-17712));
    f0 = f0 * f1;
    goto L_0884F184;
L_0884F878:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+64)); goto L_0884F890; }
    goto L_0884F888;
L_0884F888:;
    f0 = BITSF(LD32(s0+64));
    goto L_0884F160;
L_0884F890:;
    f0 = BITSF(LD32(s0+68));
    v0 = D_08AEBAD0 - (-17712);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-17712));
    f0 = f0 * f1;
    goto L_0884F160;
L_0884F8A8:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+56)); goto L_0884F8C0; }
    goto L_0884F8B8;
L_0884F8B8:;
    f0 = BITSF(LD32(s0+56));
    goto L_0884F13C;
L_0884F8C0:;
    f0 = BITSF(LD32(s0+60));
    v0 = D_08AEBAD0 - (-17712);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-17712));
    f0 = f0 * f1;
    goto L_0884F13C;
L_0884F8D8:;
    a0 = LD32(s1+8);
    v1 = LD32(s1+4);
    v0 = LD32(s0+128);
    {u32 a_=sp+(320);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(s5-17716));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+140, v0);
    if (cnd_) { goto L_0884F91C; }
    goto L_0884F918;
L_0884F918:;
    ST32(s0+140, 0);
    goto L_0884F91C;
L_0884F91C:;
    v1 = 0 + 0;
    goto L_0884EE64;
}

/* 0884F924 */
u32 func_0884F924(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0884F924:;
    sp = sp - 80;
    v1 = D_08B28C50 - (-29616);
    v0 = D_08AEBAFC - (-17668);
    s5 = D_08B28C8C - (-29556);
    s3 = D_08B28C6C - (-29588);
    s2 = a0 + 0;
    s0 = D_08B28C74 - (-29580);
    a1 = LD32(a0+56);
    a2 = LD32(a0+60);
    f6 = BITSF(LD32(v1-29616));
    f2 = BITSF(LD32(v0-17668));
    ST32(sp+16, a1);
    v1 = v1 - 29616;
    f6 = f6 * f2;
    ST32(sp+20, a2);
    v0 = D_08B28C68 - (-29592);
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    a1 = LD32(a0+64);
    a2 = LD32(a0+68);
    t0 = LD32(a0+76);
    f4 = BITSF(LD32(v0-29592));
    f5 = BITSF(LD32(v1+8));
    f1 = f1 + f6;
    f0 = f0 + f6;
    a3 = LD32(a0+72);
    ST32(sp+24, a1);
    f5 = f5 * f2;
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    ST32(sp+28, a2);
    a1 = s5 - 29556;
    v1 = D_08B28D64 - (-29340);
    ST32(sp+36, t0);
    f2 = BITSF(LD32(sp+24));
    ST32(sp+20, FBITS(f0));
    f2 = f2 + f4;
    f0 = BITSF(LD32(sp+28));
    ST32(sp+16, FBITS(f1));
    f0 = f0 + f4;
    f1 = BITSF(LD32(sp+36));
    ST32(sp+32, a3);
    f1 = f1 + f5;
    f3 = BITSF(LD32(sp+32));
    ST32(sp+28, FBITS(f0));
    f3 = f3 + f5;
    ST32(sp+24, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    v0 = LD32(sp+16);
    ST32(sp+32, FBITS(f3));
    ST32(s5-29556, v0);
    v0 = LD32(sp+20);
    ST32(sp, FBITS(f6));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(a1+4, v0);
    v0 = LD32(sp+24);
    t0 = LD32(v1-29340);
    a2 = LD32(s3-29588);
    ST32(a1+8, v0);
    v1 = LD32(sp+28);
    ST32(s0-29580, 0);
    ST32(a1+12, v1);
    v0 = LD32(sp+32);
    ST32(a1+16, v0);
    v0 = D_08B28C70 - (-29584);
    v1 = LD32(sp+36);
    ST32(v0-29584, a2);
    ST32(a1+20, v1);
    v1 = D_08B28C7C - (-29572);
    cnd_ = t0 == 0;
    ST32(v1-29572, 0);
    if (cnd_) { goto L_0884FB8C; }
    goto L_0884FA5C;
L_0884FA5C:;
    t_ = t0;
    a3 = 2000;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0884FA64;
L_0884FA64:;
    v1 = LD32(s0-29580);
    v1 = v1 + v0;
    ST32(s0-29580, v1);
    s1 = LD32(s0-29580);
    goto L_0884FA74;
L_0884FA74:;
    cnd_ = s1 == 0;
    s0 = LD32(s3-29588);
    if (cnd_) { goto L_0884FAB4; }
    goto L_0884FA7C;
L_0884FA7C:;
    s3 = sp + 16;
    s4 = 2;
    a0 = s0 + 0;
    goto L_0884FA88;
L_0884FA88:;
    a1 = s3 + 0;
    v0 = func_0884FDF4(a0, a1);
    goto L_0884FA90;
L_0884FA90:;
    s1 = s1 - 1;
    a0 = s0 + 0;
    a1 = s3 + 0;
    cnd_ = v0 == s4;
    s0 = s0 + 48;
    if (cnd_) { goto L_0884FB7C; }
    goto L_0884FAA4;
L_0884FAA4:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0884FAD0; }
    goto L_0884FAAC;
L_0884FAAC:;
    cnd_ = s1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0884FA88; }
    goto L_0884FAB4;
L_0884FAB4:;
    v0 = ((u32)(uintptr_t)func_088509C0) - (2496);
    s0 = v0 + 2496;
    a1 = s0 + 0;
    a0 = s2 + 0;
    v0 = func_0884D19C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884FAC8;
L_0884FAC8:;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0884FAF8; }
    goto L_0884FAD0;
L_0884FAD0:;
    v0 = a1 + 0;
    sp = sp + 80;
    return v0;
L_0884FAF8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    v0 = func_0884D58C(a0, a1);
    goto L_0884FB04;
L_0884FB04:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0884FAD0; }
    goto L_0884FB0C;
L_0884FB0C:;
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(s2+8));
    v1 = s2 + 8;
    f4 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(sp+4));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f1;
    a0 = s5 - 29556;
    f3 = f3 + f0;
    ST32(s2+8, FBITS(f2));
    a1 = 1;
    ST32(v1+8, FBITS(f3));
    ST32(v1+4, FBITS(f4));
    v0 = LD32(s5-29556);
    ST32(s2+56, v0);
    v1 = LD32(a0+4);
    ST32(s2+60, v1);
    v0 = LD32(a0+8);
    ST32(s2+64, v0);
    v1 = LD32(a0+12);
    ST32(s2+68, v1);
    v0 = LD32(a0+16);
    ST32(s2+72, v0);
    v1 = LD32(a0+20);
    ST32(s2+76, v1);
    goto L_0884FAD0;
L_0884FB7C:;
    v0 = func_08850070(a0, a1);
    goto L_0884FB84;
L_0884FB84:;
    goto L_0884FAA4;
L_0884FB8C:;
    func_0884E1CC(t1, t2, t3);
    goto L_0884FB94;
L_0884FB94:;
    a0 = s2 + 0;
    func_0884E894(0, 0, 0);
    goto L_0884FB9C;
L_0884FB9C:;
    a0 = s2 + 0;
    func_0884EB4C(0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0884FBA4;
L_0884FBA4:;
    a0 = s2 + 0;
    func_0884ECD0();
    goto L_0884FBAC;
L_0884FBAC:;
    s1 = LD32(s0-29580);
    goto L_0884FA74;
}

/* 0884FBB4 */
u32 func_0884FBB4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0884FBB4:;
    sp = sp - 96;
    f0 = BITSF(0);
    t0 = a0 + 0;
    fcc = FCMP(f12, f0, 2);
    v0 = LD32(a0+56);
    v1 = LD32(a0+60);
    a1 = LD32(t0+68);
    a0 = LD32(a0+64);
    a2 = LD32(t0+72);
    a3 = LD32(t0+76);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    ST32(sp+16, a2);
    cnd_ = fcc;
    ST32(sp+20, a3);
    if (cnd_) { goto L_0884FC90; }
    goto L_0884FC20;
L_0884FC20:;
    v0 = t0 + 128;
    f7 = BITSF(LD32(t0+128));
    f8 = BITSF(LD32(v0+8));
    f6 = BITSF(LD32(v0+4));
    f7 = f7 * f12;
    f8 = f8 * f12;
    f6 = f6 * f12;
    f3 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+8));
    f5 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+20));
    f3 = f3 + f7;
    f4 = f4 + f6;
    f5 = f5 + f8;
    f2 = f2 + f7;
    f0 = f0 + f6;
    f1 = f1 + f8;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    ST32(sp+12, FBITS(f0));
    ST32(sp+8, FBITS(f4));
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    ST32(sp+32, FBITS(f7));
    ST32(sp+36, FBITS(f6));
    ST32(sp+40, FBITS(f8));
    goto L_0884FC90;
L_0884FC90:;
    s7 = D_08B28C74 - (-29580);
    s1 = LD32(s7-29580);
    s2 = D_08B28C84 - (-29564);
    s3 = D_08B28C88 - (-29560);
    v0 = D_08B28C6C - (-29588);
    s0 = LD32(v0-29588);
    ST32(s2-29564, 0);
    cnd_ = s1 == 0;
    ST8(s3-29560, 0);
    if (cnd_) { goto L_0884FDB0; }
    goto L_0884FCB4;
L_0884FCB4:;
    s4 = 2;
    fp = D_08B28C78 - (-29576);
    s6 = D_08B28C80 - (-29568);
    s5 = 1000;
    goto L_0884FCC4;
L_0884FCC4:;
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = func_0884FDF4(a0, a1);
    goto L_0884FCD0;
L_0884FCD0:;
    cnd_ = v0 == s4;
    a0 = s0 + 0;
    if (cnd_) { goto L_0884FDE4; }
    goto L_0884FCD8;
L_0884FCD8:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 - 1; goto L_0884FDA8; }
    goto L_0884FCE0;
L_0884FCE0:;
    v0 = LD_U8(s3-29560);
    cnd_ = v0 != 0;
    v0 = LD32(s2-29564);
    if (cnd_) { goto L_0884FD28; }
    goto L_0884FCEC;
L_0884FCEC:;
    v1 = LD32(s7-29580);
    a0 = LD32(fp-29576);
    v1 = v1 - s1;
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 != 0;
    v0 = LD32(s2-29564);
    if (cnd_) { goto L_0884FD28; }
    goto L_0884FD04;
L_0884FD04:;
    a1 = D_08B28C7C - (-29572);
    v0 = LD32(a1-29572);
    v0 = a0 + v0;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = LD32(s2-29564);
    if (cnd_) { goto L_0884FD28; }
    goto L_0884FD1C;
L_0884FD1C:;
    v0 = 1;
    ST8(s3-29560, v0);
    v0 = LD32(s2-29564);
    goto L_0884FD28;
L_0884FD28:;
    a0 = LD32(s6-29568);
    a1 = 2;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 4;
    v0 = v0 + 1;
    a0 = a0 + v1;
    ST32(s2-29564, v0);
    v1 = a0 + 0;
    v0 = s0 + 0;
    a2 = (u32)-1;
    goto L_0884FD54;
L_0884FD54:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    a1 = a1 - 1;
    ST32(v1, FBITS(f0));
    v0 = v0 + 12;
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    cnd_ = a1 != a2;
    v1 = v1 + 12;
    if (cnd_) { goto L_0884FD54; }
    goto L_0884FD7C;
L_0884FD7C:;
    v0 = s0 + 36;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+36));
    v1 = LD32(s2-29564);
    v0 = a0 + 36;
    ST32(a0+36, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    cnd_ = v1 == s5;
    ST32(v0+4, FBITS(f1));
    if (cnd_) { goto L_0884FDB0; }
    goto L_0884FDA4;
L_0884FDA4:;
    s1 = s1 - 1;
    goto L_0884FDA8;
L_0884FDA8:;
    cnd_ = s1 != 0;
    s0 = s0 + 48;
    if (cnd_) { goto L_0884FCC4; }
    goto L_0884FDB0;
L_0884FDB0:;
    v0 = LD32(s2-29564);
    sp = sp + 96;
    return v0;
L_0884FDE4:;
    a1 = sp + 0;
    v0 = func_08850070(a0, a1);
    goto L_0884FDEC;
L_0884FDEC:;
    goto L_0884FCD8;
}

/* 0884FDF4 */
u32 func_0884FDF4(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
    int fcc = 0;
    int cnd_;
L_0884FDF4:;
    f3 = BITSF(LD32(a0));
    f6 = BITSF(LD32(a1));
    f11 = BITSF(LD32(a0+12));
    fcc = FCMP(f3, f6, 12);
    cnd_ = !fcc;
    f13 = BITSF(LD32(a0+24));
    if (cnd_) { goto L_0884FE30; }
    goto L_0884FE10;
L_0884FE10:;
    fcc = FCMP(f11, f6, 12);
    cnd_ = !fcc;
    if (cnd_) { f5 = BITSF(LD32(a0+8)); goto L_0884FE34; }
    goto L_0884FE20;
L_0884FE20:;
    fcc = FCMP(f13, f6, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850068; }
    goto L_0884FE30;
L_0884FE30:;
    f5 = BITSF(LD32(a0+8));
    goto L_0884FE34;
L_0884FE34:;
    f8 = BITSF(LD32(a1+16));
    f12 = BITSF(LD32(a0+20));
    fcc = FCMP(f5, f8, 12);
    cnd_ = !fcc;
    f14 = BITSF(LD32(a0+32));
    if (cnd_) { goto L_0884FE6C; }
    goto L_0884FE4C;
L_0884FE4C:;
    fcc = FCMP(f12, f8, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+4)); goto L_0884FE70; }
    goto L_0884FE5C;
L_0884FE5C:;
    fcc = FCMP(f14, f8, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850068; }
    goto L_0884FE6C;
L_0884FE6C:;
    f0 = BITSF(LD32(a0+4));
    goto L_0884FE70;
L_0884FE70:;
    f2 = BITSF(LD32(a1+8));
    f10 = BITSF(LD32(a0+28));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    f4 = BITSF(LD32(a0+16));
    if (cnd_) { goto L_0884FEA8; }
    goto L_0884FE88;
L_0884FE88:;
    fcc = FCMP(f4, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f7 = BITSF(LD32(a1+4)); goto L_0884FEAC; }
    goto L_0884FE98;
L_0884FE98:;
    fcc = FCMP(f10, f2, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850068; }
    goto L_0884FEA8;
L_0884FEA8:;
    f7 = BITSF(LD32(a1+4));
    goto L_0884FEAC;
L_0884FEAC:;
    fcc = FCMP(f7, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { f9 = BITSF(LD32(a1+20)); goto L_0884FEE0; }
    goto L_0884FEBC;
L_0884FEBC:;
    fcc = FCMP(f7, f11, 12);
    cnd_ = !fcc;
    if (cnd_) { f9 = BITSF(LD32(a1+20)); goto L_0884FEE0; }
    goto L_0884FECC;
L_0884FECC:;
    fcc = FCMP(f7, f13, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850068; }
    goto L_0884FEDC;
L_0884FEDC:;
    f9 = BITSF(LD32(a1+20));
    goto L_0884FEE0;
L_0884FEE0:;
    fcc = FCMP(f9, f5, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1+12)); goto L_0884FF14; }
    goto L_0884FEF0;
L_0884FEF0:;
    fcc = FCMP(f9, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1+12)); goto L_0884FF14; }
    goto L_0884FF00;
L_0884FF00:;
    fcc = FCMP(f9, f14, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850068; }
    goto L_0884FF10;
L_0884FF10:;
    f1 = BITSF(LD32(a1+12));
    goto L_0884FF14;
L_0884FF14:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FF44; }
    goto L_0884FF24;
L_0884FF24:;
    fcc = FCMP(f1, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FF44; }
    goto L_0884FF34;
L_0884FF34:;
    fcc = FCMP(f1, f10, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850068; }
    goto L_0884FF44;
L_0884FF44:;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FFA4; }
    goto L_0884FF54;
L_0884FF54:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FFA4; }
    goto L_0884FF64;
L_0884FF64:;
    fcc = FCMP(f6, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FFA4; }
    goto L_0884FF74;
L_0884FF74:;
    fcc = FCMP(f3, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FFA4; }
    goto L_0884FF84;
L_0884FF84:;
    fcc = FCMP(f8, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0884FFA4; }
    goto L_0884FF94;
L_0884FF94:;
    fcc = FCMP(f5, f9, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08850068; }
    goto L_0884FFA4;
L_0884FFA4:;
    fcc = FCMP(f2, f4, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850004; }
    goto L_0884FFB4;
L_0884FFB4:;
    fcc = FCMP(f4, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850004; }
    goto L_0884FFC4;
L_0884FFC4:;
    fcc = FCMP(f6, f11, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850004; }
    goto L_0884FFD4;
L_0884FFD4:;
    fcc = FCMP(f11, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850004; }
    goto L_0884FFE4;
L_0884FFE4:;
    fcc = FCMP(f8, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850004; }
    goto L_0884FFF4;
L_0884FFF4:;
    fcc = FCMP(f12, f9, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08850068; }
    goto L_08850004;
L_08850004:;
    fcc = FCMP(f2, f10, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 2; goto L_08850068; }
    goto L_08850014;
L_08850014:;
    fcc = FCMP(f10, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 2; goto L_08850068; }
    goto L_08850024;
L_08850024:;
    fcc = FCMP(f6, f13, 14);
    cnd_ = !fcc;
    v0 = 2;
    if (cnd_) { goto L_08850068; }
    goto L_08850034;
L_08850034:;
    fcc = FCMP(f13, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850068; }
    goto L_08850044;
L_08850044:;
    fcc = FCMP(f8, f14, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850068; }
    goto L_08850054;
L_08850054:;
    fcc = FCMP(f14, f9, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08850068; }
    goto L_08850064;
L_08850064:;
    v0 = 2;
    goto L_08850068;
L_08850068:;
    return v0;
}

/* 08850070 */
u32 func_08850070(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08850070:;
    sp = sp - 80;
    f10 = BITSF(0);
    t0 = a1 + 0;
    f8 = BITSF(LD32(a1+8));
    f9 = BITSF(LD32(a1));
    f11 = BITSF(LD32(a1+16));
    a2 = a0 + 0;
    t1 = 3;
    a3 = a0 + 36;
    t1 = t1 - 1;
    goto L_0885009C;
L_0885009C:;
    v1 = 0x55550000u;
    a0 = t1 + 1;
    v1 = v1 | 0x5556;
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = (u32)((s32)a0 >> 31);
    a3 = a3 - 12;
    f3 = BITSF(LD32(a3+4));
    f5 = BITSF(LD32(a3));
    v1 = hi;
    a1 = v1 - a1;
    v0 = a1 << 1;
    v0 = v0 + a1;
    a1 = a0 - v0;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    v1 = a2 + v1;
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(a3+8));
    f2 = f2 - f3;
    f0 = BITSF(LD32(v1));
    f1 = f1 - f4;
    ST32(sp, FBITS(f5));
    f0 = f0 - f5;
    fcc = FCMP(f2, f10, 2);
    f6 = f1;
    ST32(sp+4, FBITS(f3));
    f7 = f0;
    ST32(sp+8, FBITS(f4));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f1));
    if (cnd_) { goto L_08850244; }
    goto L_08850130;
L_08850130:;
    f0 = f8 - f3;
    v0 = D_08AEBB00 - (-17664);
    f2 = f0 / f2;
    fcc = FCMP(f10, f2, 14);
    cnd_ = !fcc;
    f1 = BITSF(LD32(v0-17664));
    if (cnd_) { goto L_088501B4; }
    goto L_0885014C;
L_0885014C:;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+12)); goto L_088501B8; }
    goto L_0885015C;
L_0885015C:;
    f0 = f2 * f7;
    f1 = f5 + f0;
    fcc = FCMP(f9, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+12)); goto L_088501B8; }
    goto L_08850174;
L_08850174:;
    f0 = BITSF(LD32(t0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+12)); goto L_088501B8; }
    goto L_08850188;
L_08850188:;
    f0 = f2 * f6;
    f1 = f4 + f0;
    fcc = FCMP(f11, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+12)); goto L_088501B8; }
    goto L_088501A0;
L_088501A0:;
    f0 = BITSF(LD32(t0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_088501B4;
L_088501B4:;
    f0 = BITSF(LD32(t0+12));
    goto L_088501B8;
L_088501B8:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+20));
    f0 = f0 - f1;
    f4 = f0 / f2;
    fcc = FCMP(f10, f4, 14);
    cnd_ = !fcc;
    f3 = BITSF(LD32(v0-17664));
    if (cnd_) { goto L_088505A4; }
    goto L_088501D8;
L_088501D8:;
    fcc = FCMP(f4, f3, 14);
    cnd_ = !fcc;
    f7 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_0885059C; }
    goto L_088501E8;
L_088501E8:;
    f0 = BITSF(LD32(sp));
    f1 = f4 * f7;
    f1 = f0 + f1;
    fcc = FCMP(f9, f1, 14);
    cnd_ = !fcc;
    f6 = BITSF(LD32(sp+24));
    if (cnd_) { goto L_08850244; }
    goto L_08850204;
L_08850204:;
    f0 = BITSF(LD32(t0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_08850244; }
    goto L_08850218;
L_08850218:;
    f1 = f4 * f6;
    f1 = f0 + f1;
    fcc = FCMP(f11, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850244; }
    goto L_08850230;
L_08850230:;
    f0 = BITSF(LD32(t0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_08850244;
L_08850244:;
    f4 = BITSF(0);
    fcc = FCMP(f7, f4, 2);
    cnd_ = fcc;
    f2 = BITSF(LD32(sp));
    if (cnd_) { goto L_08850374; }
    goto L_08850258;
L_08850258:;
    v0 = D_08AEBB00 - (-17664);
    f0 = f9 - f2;
    f3 = f0 / f7;
    fcc = FCMP(f4, f3, 14);
    cnd_ = !fcc;
    f1 = BITSF(LD32(v0-17664));
    if (cnd_) { goto L_088502E8; }
    goto L_08850274;
L_08850274:;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088502EC; }
    goto L_08850284;
L_08850284:;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+4));
    f0 = f3 * f0;
    f1 = f1 + f0;
    fcc = FCMP(f8, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088502EC; }
    goto L_088502A4;
L_088502A4:;
    f0 = BITSF(LD32(t0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088502EC; }
    goto L_088502B8;
L_088502B8:;
    f1 = f3 * f6;
    f0 = BITSF(LD32(sp+8));
    f1 = f0 + f1;
    fcc = FCMP(f11, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088502EC; }
    goto L_088502D4;
L_088502D4:;
    f0 = BITSF(LD32(t0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_088502E8;
L_088502E8:;
    f0 = BITSF(LD32(t0+4));
    goto L_088502EC;
L_088502EC:;
    f0 = f0 - f2;
    f3 = f0 / f7;
    fcc = FCMP(f10, f3, 14);
    cnd_ = !fcc;
    f1 = BITSF(LD32(v0-17664));
    if (cnd_) { goto L_08850370; }
    goto L_08850304;
L_08850304:;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_08850370; }
    goto L_08850314;
L_08850314:;
    f1 = BITSF(LD32(sp+4));
    f0 = f3 * f0;
    f1 = f1 + f0;
    fcc = FCMP(f8, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850370; }
    goto L_08850330;
L_08850330:;
    f0 = BITSF(LD32(t0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f1 = f3 * f6;
    if (cnd_) { goto L_08850370; }
    goto L_08850344;
L_08850344:;
    f0 = BITSF(LD32(sp+8));
    f1 = f0 + f1;
    fcc = FCMP(f11, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850370; }
    goto L_0885035C;
L_0885035C:;
    f0 = BITSF(LD32(t0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_08850370;
L_08850370:;
    f4 = BITSF(0);
    goto L_08850374;
L_08850374:;
    fcc = FCMP(f6, f4, 2);
    cnd_ = fcc;
    f2 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_0885049C; }
    goto L_08850384;
L_08850384:;
    v0 = D_08AEBB00 - (-17664);
    f0 = f11 - f2;
    f3 = f0 / f6;
    fcc = FCMP(f4, f3, 14);
    cnd_ = !fcc;
    f1 = BITSF(LD32(v0-17664));
    if (cnd_) { goto L_08850414; }
    goto L_088503A0;
L_088503A0:;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+20)); goto L_08850418; }
    goto L_088503B0;
L_088503B0:;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+4));
    f0 = f3 * f0;
    f1 = f1 + f0;
    fcc = FCMP(f8, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+20)); goto L_08850418; }
    goto L_088503D0;
L_088503D0:;
    f0 = BITSF(LD32(t0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+20)); goto L_08850418; }
    goto L_088503E4;
L_088503E4:;
    f1 = f3 * f7;
    f0 = BITSF(LD32(sp));
    f1 = f0 + f1;
    fcc = FCMP(f9, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+20)); goto L_08850418; }
    goto L_08850400;
L_08850400:;
    f0 = BITSF(LD32(t0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_08850414;
L_08850414:;
    f0 = BITSF(LD32(t0+20));
    goto L_08850418;
L_08850418:;
    f0 = f0 - f2;
    f2 = f0 / f6;
    fcc = FCMP(f10, f2, 14);
    cnd_ = !fcc;
    f1 = BITSF(LD32(v0-17664));
    if (cnd_) { goto L_0885049C; }
    goto L_08850430;
L_08850430:;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+20));
    if (cnd_) { goto L_0885049C; }
    goto L_08850440;
L_08850440:;
    f1 = BITSF(LD32(sp+4));
    f0 = f2 * f0;
    f1 = f1 + f0;
    fcc = FCMP(f8, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885049C; }
    goto L_0885045C;
L_0885045C:;
    f0 = BITSF(LD32(t0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f1 = f2 * f7;
    if (cnd_) { goto L_0885049C; }
    goto L_08850470;
L_08850470:;
    f0 = BITSF(LD32(sp));
    f1 = f0 + f1;
    fcc = FCMP(f9, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885049C; }
    goto L_08850488;
L_08850488:;
    f0 = BITSF(LD32(t0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_0885049C;
L_0885049C:;
    cnd_ = t1 != 0;
    if (cnd_) { t1 = t1 - 1; goto L_0885009C; }
    goto L_088504A4;
L_088504A4:;
    f1 = BITSF(LD32(a2+36));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(t0+4));
    if (cnd_) { goto L_0885058C; }
    goto L_088504BC;
L_088504BC:;
    ST32(sp+32, FBITS(f9));
    f7 = f0 - f9;
    ST32(sp+16, FBITS(f7));
    goto L_088504C8;
L_088504C8:;
    f1 = BITSF(LD32(a2+40));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(t0+12));
    if (cnd_) { goto L_0885057C; }
    goto L_088504E0;
L_088504E0:;
    ST32(sp+36, FBITS(f8));
    f0 = f0 - f8;
    ST32(sp+20, FBITS(f0));
    goto L_088504EC;
L_088504EC:;
    f1 = BITSF(LD32(a2+44));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(t0+20));
    if (cnd_) { goto L_0885056C; }
    goto L_08850504;
L_08850504:;
    ST32(sp+40, FBITS(f11));
    f6 = f0 - f11;
    ST32(sp+24, FBITS(f6));
    goto L_08850510;
L_08850510:;
    a3 = a2 + 12;
    t0 = a2 + 24;
    a0 = sp + 32;
    a1 = sp + 16;
    t1 = sp + 48;
    { rv_t r_ = func_088348A0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850528;
L_08850528:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885055C; }
    goto L_08850540;
L_08850540:;
    v0 = D_08AEBB00 - (-17664);
    f0 = BITSF(LD32(v0-17664));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0885055C; }
    goto L_08850558;
L_08850558:;
    v1 = 0 + 0;
    goto L_0885055C;
L_0885055C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
L_0885056C:;
    f1 = f11 - f0;
    ST32(sp+40, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    goto L_08850510;
L_0885057C:;
    f1 = f8 - f0;
    ST32(sp+36, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    goto L_088504EC;
L_0885058C:;
    f1 = f9 - f0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    goto L_088504C8;
L_0885059C:;
    f6 = BITSF(LD32(sp+24));
    goto L_08850244;
L_088505A4:;
    f7 = BITSF(LD32(sp+16));
    goto L_0885059C;
}

/* 088505AC */
u64 func_088505AC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_088505AC:;
    sp = sp - 224;
    v0 = D_08B285A0 - (-31328);
    v1 = D_08AEBB20 - (-17632);
    s7 = D_08B28C6C - (-29588);
    s6 = D_08B28C74 - (-29580);
    s4 = a1 + 0;
    s2 = a0 + 0;
    f25 = f12;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    v0 = D_08AEBB1C - (-17636);
    f22 = BITSF(LD32(v1-17632));
    v1 = D_08AEBB30 - (-17616);
    f23 = BITSF(LD32(v0-17636));
    ST32(sp, FBITS(f1));
    v0 = D_08AEBB28 - (-17624);
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(sp+64, 0);
    ST32(sp+68, 0);
    f24 = BITSF(LD32(v1-17616));
    f26 = BITSF(LD32(v0-17624));
    v0 = D_08B28C8C - (-29556);
    s5 = v0 - 29556;
    goto L_08850664;
L_08850664:;
    v1 = D_08B28C8C - (-29556);
    a0 = s5 + 0;
    a1 = s2 + 0;
    ST32(v1-29556, FBITS(f23));
    s1 = 0 + 0;
    ST32(s5+8, FBITS(f23));
    ST32(s5+16, FBITS(f23));
    ST32(s5+4, FBITS(f22));
    ST32(s5+12, FBITS(f22));
    ST32(s5+20, FBITS(f22));
    f0 = func_08AA0F30(a0, a1);
    goto L_08850690;
L_08850690:;
    a0 = s5 + 0;
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(s2+4));
    f4 = BITSF(LD32(s2+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a1 = sp + 16;
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    f0 = func_08AA0F30(a0, a1);
    goto L_088506CC;
L_088506CC:;
    v1 = D_08B28C70 - (-29584);
    v0 = LD32(s7-29588);
    ST32(s6-29580, 0);
    ST32(v1-29584, v0);
    v0 = D_08B28C7C - (-29572);
    ST32(v0-29572, 0);
    func_0884E1CC(0, 0, 0);
    goto L_088506E8;
L_088506E8:;
    v1 = D_08AEBB24 - (-17628);
    v0 = LD32(s6-29580);
    cnd_ = (s32)v0 <= 0;
    f20 = BITSF(LD32(v1-17628));
    if (cnd_) { goto L_08850788; }
    goto L_088506F8;
L_088506F8:;
    f21 = BITSF(0);
    v0 = D_08B28CA8 - (-29528);
    s3 = sp + 32;
    fp = v0 - 29528;
    s0 = 0 + 0;
    goto L_0885070C;
L_0885070C:;
    a2 = LD32(s7-29588);
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = a2 + s0;
    a3 = a2 + 12;
    t0 = a2 + 24;
    t1 = s3 + 0;
    { rv_t r_ = func_088348A0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885072C;
L_0885072C:;
    fcc = FCMP(f21, f0, 14);
    v0 = LD32(s6-29580);
    s1 = s1 + 1;
    cnd_ = !fcc;
    a0 = (s32)s1 < (s32)v0;
    if (cnd_) { goto L_08850780; }
    goto L_08850740;
L_08850740:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = LD_U8(sp+32);
    if (cnd_) { goto L_08850780; }
    goto L_08850750;
L_08850750:;
    cnd_ = v0 == 0;
    v0 = LD32(s7-29588);
    if (cnd_) { goto L_08850780; }
    goto L_08850758;
L_08850758:;
    f20 = f0;
    v0 = v0 + s0;
    v1 = v0 + 36;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v0+36));
    v1 = D_08B28CA8 - (-29528);
    ST32(fp+4, FBITS(f0));
    ST32(v1-29528, FBITS(f1));
    ST32(fp+8, FBITS(f2));
    goto L_08850780;
L_08850780:;
    cnd_ = a0 != 0;
    s0 = s0 + 48;
    if (cnd_) { goto L_0885070C; }
    goto L_08850788;
L_08850788:;
    v0 = D_08AEBB24 - (-17628);
    f0 = BITSF(LD32(v0-17628));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    v1 = D_08B28CA8 - (-29528);
    if (cnd_) { goto L_08850844; }
    goto L_088507A0;
L_088507A0:;
    v0 = v1 - 29528;
    f6 = BITSF(LD32(v0+4));
    f7 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s4));
    f4 = BITSF(LD32(s4+4));
    f5 = BITSF(LD32(s4+8));
    f2 = BITSF(LD32(v1-29528));
    f8 = f25 + f0;
    v0 = FBITS(f3);
    v1 = FBITS(f2);
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = FBITS(f6);
    v0 = FBITS(f4);
    {v[5]=BITSF(v1);}
    {v[1]=BITSF(v0);}
    v1 = FBITS(f7);
    v0 = FBITS(f5);
    {v[6]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    v0 = 1;
    f20 = f20 - f26;
    f1 = f0 * f8;
    ST32(sp+64, v0);
    f7 = f7 * f1;
    f2 = f2 * f1;
    f6 = f6 * f1;
    f5 = f5 - f7;
    f3 = f3 - f2;
    f4 = f4 - f6;
    ST32(sp+16, FBITS(f2));
    ST32(s4+4, FBITS(f4));
    ST32(s4+8, FBITS(f5));
    ST32(s4, FBITS(f3));
    ST32(sp+20, FBITS(f6));
    ST32(sp+24, FBITS(f7));
    goto L_08850844;
L_08850844:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v1 = D_08AEBB2C - (-17620);
    if (cnd_) { goto L_088508A0; }
    goto L_08850858;
L_08850858:;
    f3 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f4 = BITSF(LD32(sp+8));
    f3 = f3 * f20;
    f5 = f5 * f20;
    f4 = f4 * f20;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f0 = f0 + f3;
    f1 = f1 + f5;
    f2 = f2 + f4;
    ST32(sp+16, FBITS(f3));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f2));
    ST32(s2, FBITS(f0));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f4));
    goto L_088508A0;
L_088508A0:;
    f0 = BITSF(LD32(v1-17620));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    v0 = D_08B28CA8 - (-29528);
    if (cnd_) { goto L_08850970; }
    goto L_088508B4;
L_088508B4:;
    v1 = v0 - 29528;
    f6 = BITSF(LD32(v1+4));
    f7 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f5 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(v0-29528));
    v1 = FBITS(f3);
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = FBITS(f6);
    v1 = FBITS(f4);
    {v[5]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    v0 = FBITS(f7);
    v1 = FBITS(f5);
    {v[6]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    v1 = LD32(sp+68);
    f7 = f7 * f1;
    f2 = f2 * f1;
    f6 = f6 * f1;
    v1 = v1 + 1;
    f8 = f7 * f24;
    f0 = f2 * f24;
    f1 = f6 * f24;
    v0 = (s32)v1 < 2;
    f5 = f5 - f8;
    f3 = f3 - f0;
    f4 = f4 - f1;
    ST32(sp+68, v1);
    ST32(sp+48, FBITS(f2));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f7));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    cnd_ = v0 != 0;
    ST32(sp+24, FBITS(f8));
    if (cnd_) { goto L_08850664; }
    goto L_08850970;
L_08850970:;
    v0 = LD32(sp+64);
    sp = sp + 224;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088509C0 */
rv_t func_088509C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088509C0:;
    v0 = D_08B28C8C - (-29556);
    v1 = v0 - 29556;
    f1 = BITSF(LD32(a1+56));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a1 = a1 + 56;
    if (cnd_) { goto L_08850A58; }
    goto L_088509E0;
L_088509E0:;
    f1 = BITSF(LD32(v0-29556));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08850A5C; }
    goto L_088509F8;
L_088509F8:;
    f1 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(a1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850A5C; }
    goto L_08850A10;
L_08850A10:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08850A5C; }
    goto L_08850A28;
L_08850A28:;
    f1 = BITSF(LD32(v1+20));
    f0 = BITSF(LD32(a1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08850A58; }
    goto L_08850A40;
L_08850A40:;
    f1 = BITSF(LD32(v1+16));
    f0 = BITSF(LD32(a1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08850A5C; }
    goto L_08850A58;
L_08850A58:;
    v0 = 1;
    goto L_08850A5C;
L_08850A5C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08850A64 */
void func_08850A64(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08850A64:;
    sp = sp - 16;
    s1 = D_08B28D44 - (-29372);
    s0 = LD32(s1-29372);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08850A9C; }
    goto L_08850A84;
L_08850A84:;
    ST32(s1-29372, 0);
    goto L_08850A88;
L_08850A88:;
    sp = sp + 16;
    return;
L_08850A9C:;
    func_0882F864(a0);
    goto L_08850AA4;
L_08850AA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850AAC;
L_08850AAC:;
    ST32(s1-29372, 0);
    goto L_08850A88;
}

/* 08850AB4 */
u64 func_08850AB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08850AB4:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    t4 = s3 < 0x1u;
    v0 = t4 & v0;
    t5 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08850B54; }
    goto L_08850AE8;
L_08850AE8:;
    v0 = D_08B28C00 - (-29696);
    t1 = D_08B28C14 - (-29676);
    t2 = D_08B28C28 - (-29656);
    t3 = D_08B28C3C - (-29636);
    a1 = (u32)-1;
    a0 = v0 - 29696;
    t0 = 64;
    a2 = t1 - 29676;
    a3 = t2 - 29656;
    v1 = t3 - 29636;
    ST32(v0-29696, 0);
    v0 = 4;
    ST32(a0+16, 0);
    ST32(t1-29676, 0);
    ST32(a2+16, 0);
    ST32(t2-29656, 0);
    ST32(a3+4, v0);
    ST32(a3+16, 0);
    ST32(t3-29636, 0);
    ST32(v1+4, t0);
    ST32(v1+12, a1);
    ST32(v1+16, 0);
    ST32(a0+4, t0);
    ST32(a0+12, a1);
    ST32(a2+4, t0);
    ST32(a2+12, a1);
    ST32(a3+12, a1);
    goto L_08850B54;
L_08850B54:;
    s2 = t5 < 0x1u;
    v0 = t4 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08850BE0; }
    goto L_08850B64;
L_08850B64:;
    v0 = D_08B28C3C - (-29636);
    s1 = LD32(v0-29636);
    cnd_ = s1 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08850BE0; }
    goto L_08850B74;
L_08850B74:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08850BC0; }
    goto L_08850B80;
L_08850B80:;
    v0 = LD32(a0-4);
    v1 = 92;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08850B94;
L_08850B94:;
    cnd_ = a0 == s0;
    s0 = s0 - 92;
    if (cnd_) { goto L_08850BB4; }
    goto L_08850B9C;
L_08850B9C:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850BAC;
L_08850BAC:;
    a0 = LD32(s1);
    goto L_08850B94;
L_08850BB4:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850BBC;
L_08850BBC:;
    a0 = LD32(s1+4);
    goto L_08850BC0;
L_08850BC0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08850E2C; }
    goto L_08850BC8;
L_08850BC8:;
    s0 = LD32(s1+12);
    goto L_08850BCC;
L_08850BCC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08850E14; }
    goto L_08850BD4;
L_08850BD4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850BDC;
L_08850BDC:;
    v0 = s3 < 0x1u;
    goto L_08850BE0;
L_08850BE0:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08850C68; }
    goto L_08850BEC;
L_08850BEC:;
    v0 = D_08B28C28 - (-29656);
    s1 = LD32(v0-29656);
    cnd_ = s1 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08850C68; }
    goto L_08850BFC;
L_08850BFC:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08850C48; }
    goto L_08850C08;
L_08850C08:;
    v0 = LD32(a0-4);
    v1 = 104;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08850C1C;
L_08850C1C:;
    cnd_ = a0 == s0;
    s0 = s0 - 104;
    if (cnd_) { goto L_08850C3C; }
    goto L_08850C24;
L_08850C24:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850C34;
L_08850C34:;
    a0 = LD32(s1);
    goto L_08850C1C;
L_08850C3C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850C44;
L_08850C44:;
    a0 = LD32(s1+4);
    goto L_08850C48;
L_08850C48:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08850E00; }
    goto L_08850C50;
L_08850C50:;
    s0 = LD32(s1+12);
    goto L_08850C54;
L_08850C54:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08850DE8; }
    goto L_08850C5C;
L_08850C5C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850C64;
L_08850C64:;
    v0 = s3 < 0x1u;
    goto L_08850C68;
L_08850C68:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08850CF0; }
    goto L_08850C74;
L_08850C74:;
    v0 = D_08B28C14 - (-29676);
    s1 = LD32(v0-29676);
    cnd_ = s1 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_08850CF0; }
    goto L_08850C84;
L_08850C84:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08850CD0; }
    goto L_08850C90;
L_08850C90:;
    v0 = LD32(a0-4);
    v1 = 92;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08850CA4;
L_08850CA4:;
    cnd_ = a0 == s0;
    s0 = s0 - 92;
    if (cnd_) { goto L_08850CC4; }
    goto L_08850CAC;
L_08850CAC:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850CBC;
L_08850CBC:;
    a0 = LD32(s1);
    goto L_08850CA4;
L_08850CC4:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850CCC;
L_08850CCC:;
    a0 = LD32(s1+4);
    goto L_08850CD0;
L_08850CD0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08850DD4; }
    goto L_08850CD8;
L_08850CD8:;
    s0 = LD32(s1+12);
    goto L_08850CDC;
L_08850CDC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08850DBC; }
    goto L_08850CE4;
L_08850CE4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850CEC;
L_08850CEC:;
    v0 = s3 < 0x1u;
    goto L_08850CF0;
L_08850CF0:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08850D78; }
    goto L_08850CFC;
L_08850CFC:;
    v0 = D_08B28C00 - (-29696);
    s1 = LD32(v0-29696);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08850D7C; }
    goto L_08850D0C;
L_08850D0C:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_08850D58; }
    goto L_08850D18;
L_08850D18:;
    v0 = LD32(a0-4);
    v1 = 152;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_08850D2C;
L_08850D2C:;
    cnd_ = a0 == s0;
    s0 = s0 - 152;
    if (cnd_) { goto L_08850D4C; }
    goto L_08850D34;
L_08850D34:;
    v1 = LD32(s0);
    v0 = LD32(v1+64);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850D44;
L_08850D44:;
    a0 = LD32(s1);
    goto L_08850D2C;
L_08850D4C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850D54;
L_08850D54:;
    a0 = LD32(s1+4);
    goto L_08850D58;
L_08850D58:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08850DA8; }
    goto L_08850D60;
L_08850D60:;
    s0 = LD32(s1+12);
    goto L_08850D64;
L_08850D64:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08850D90; }
    goto L_08850D6C;
L_08850D6C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850D74;
L_08850D74:;
    goto L_08850D78;
L_08850D78:;
    goto L_08850D7C;
L_08850D7C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08850D90:;
    a0 = s0 + 0;
    func_08AA9CEC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08850D98;
L_08850D98:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850DA0;
L_08850DA0:;
    goto L_08850D6C;
L_08850DA8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850DB4;
L_08850DB4:;
    s0 = LD32(s1+12);
    goto L_08850D64;
L_08850DBC:;
    a0 = s0 + 0;
    func_08AA9DA0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08850DC4;
L_08850DC4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850DCC;
L_08850DCC:;
    goto L_08850CE4;
L_08850DD4:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850DE0;
L_08850DE0:;
    s0 = LD32(s1+12);
    goto L_08850CDC;
L_08850DE8:;
    a0 = s0 + 0;
    func_08AA9E54(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08850DF0;
L_08850DF0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850DF8;
L_08850DF8:;
    goto L_08850C5C;
L_08850E00:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850E0C;
L_08850E0C:;
    s0 = LD32(s1+12);
    goto L_08850C54;
L_08850E14:;
    a0 = s0 + 0;
    func_08AA9F08(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08850E1C;
L_08850E1C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850E24;
L_08850E24:;
    goto L_08850BD4;
L_08850E2C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850E38;
L_08850E38:;
    s0 = LD32(s1+12);
    goto L_08850BCC;
}

/* 08850E40 */
rv_t func_08850E40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08850E40:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08850AB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850E54;
L_08850E54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08850E60 */
rv_t func_08850E60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08850E60:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_08850AB4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08850E74;
L_08850E74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08850E80 */
void func_08850E80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08850E80:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_08850E94;
L_08850E94:;
    v0 = D_08AF1BE8 - (7144);
    v0 = v0 + 7144;
    ST32(s0, v0);
    v0 = D_08AEBB9C - (-17508);
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-17508));
    v0 = 43;
    ST16(s0+8, v0);
    a1 = 0 + 0;
    ST32(s0+36, FBITS(f0));
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    { rv_t r_ = func_088741DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850EC8;
L_08850EC8:;
    sp = sp + 16;
    return;
}

/* 08850ED8 */
rv_t func_08850ED8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08850ED8:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08850EF8;
L_08850EF8:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08850EF8; }
    goto L_08850F1C;
L_08850F1C:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08850F30; }
    goto L_08850F28;
L_08850F28:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08850F30;
L_08850F30:;
    a1 = s1 + 28;
    a2 = 0 + 0;
    goto L_08850F38;
L_08850F38:;
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
    if (cnd_) { goto L_08850F38; }
    goto L_08850F60;
L_08850F60:;
    a1 = s1 + 32;
    a2 = 0 + 0;
    goto L_08850F68;
L_08850F68:;
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
    if (cnd_) { goto L_08850F68; }
    goto L_08850F90;
L_08850F90:;
    a1 = s1 + 36;
    a2 = 0 + 0;
    goto L_08850F98;
L_08850F98:;
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
    if (cnd_) { goto L_08850F98; }
    goto L_08850FC0;
L_08850FC0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08850FD4 */
rv_t func_08850FD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08850FD4:;
    sp = sp - 32;
    v0 = 1;
    a2 = sp + 0;
    ST32(sp, v0);
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_08850FFC;
L_08850FFC:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08850FFC; }
    goto L_08851024;
L_08851024:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851030;
L_08851030:;
    v0 = LD32(s1+28);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_08851040;
L_08851040:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08851040; }
    goto L_08851068;
L_08851068:;
    v0 = LD32(s1+32);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_08851078;
L_08851078:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08851078; }
    goto L_088510A0;
L_088510A0:;
    f0 = BITSF(LD32(s1+36));
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f0));
    goto L_088510B0;
L_088510B0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088510B0; }
    goto L_088510D8;
L_088510D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088510EC */
rv_t func_088510EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088510EC:;
    sp = sp - 16;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088510FC;
L_088510FC:;
    v0 = v0 + 16;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885110C */
rv_t func_0885110C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885110C:;
    sp = sp - 16;
    a3 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08851138; }
    goto L_08851120;
L_08851120:;
    v1 = LD_U16(a1+16);
    v0 = 26;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a1+24); goto L_08851144; }
    goto L_08851130;
L_08851130:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851138;
L_08851138:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08851144:;
    v1 = LD32(a1);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08851164; }
    goto L_08851154;
L_08851154:;
    v0 = LD32(a1+4);
    ST32(a0+32, v0);
    v1 = LD32(a1);
    v0 = v1 & 0x2;
    goto L_08851164;
L_08851164:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08851174; }
    goto L_0885116C;
L_0885116C:;
    f0 = BITSF(LD32(a1+8));
    ST32(a3+36, FBITS(f0));
    goto L_08851174;
L_08851174:;
    { rv_t r_ = func_0887424C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885117C;
L_0885117C:;
    v0 = 1;
    goto L_08851138;
}

/* 08851184 */
rv_t func_08851184(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08851184:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = LD32(s0+28);
    cnd_ = v0 != 0;
    a0 = 125;
    if (cnd_) { goto L_088511BC; }
    goto L_088511AC;
L_088511AC:;
    goto L_088511B0;
L_088511B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088511BC:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088511C4;
L_088511C4:;
    a3 = v0 + 0;
    v0 = D_08AEBBA0 - (-17504);
    f0 = BITSF(LD32(v0-17504));
    f1 = BITSF(LD32(s0+36));
    v0 = LD32(s0+28);
    v1 = LD32(a3+24);
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(v1, v0);
    if (cnd_) { goto L_0885123C; }
    goto L_088511F4;
L_088511F4:;
    v0 = D_08AEBBA4 - (-17500);
    f0 = BITSF(LD32(v0-17500));
    f0 = f1 + f0;
    goto L_08851200;
L_08851200:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD_U8(s0+32);
    a1 = 1;
    a2 = 1;
    a0 = FBITS(f0);
    ST8(v1+6, v0);
    ST16(v1+4, a0);
    v1 = 8;
    a0 = a3 + 0;
    ST32(a3, v1);
    v0 = LD32(s0+4);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851234;
L_08851234:;
    goto L_088511B0;
L_0885123C:;
    v0 = D_08AEBBA4 - (-17500);
    f0 = BITSF(LD32(v0-17500));
    f0 = f1 - f0;
    goto L_08851200;
}

/* 0885124C */
float func_0885124C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885124C:;
    sp = sp - 16;
    s1 = a0 + 92;
    s0 = a0 + 0;
    a0 = s1 + 0;
    func_08873BF8(a0);
    goto L_0885126C;
L_0885126C:;
    a1 = D_08AF1CA8 - (7336);
    a1 = a1 + 7336;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875A24(a0, a1);
    goto L_08851280;
L_08851280:;
    v0 = D_08AF1C3C - (7228);
    v0 = v0 + 7228;
    v1 = v0 + 84;
    ST32(s0+92, v1);
    v1 = 3;
    a0 = s0 + 0;
    ST32(s0, v0);
    ST16(s1+8, v1);
    ST8(s0+84, 0);
    ST8(s0+85, 0);
    ST32(s0+88, 0);
    ST32(s0+80, 0);
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088512B4;
L_088512B4:;
    sp = sp + 16;
    return f0;
}

/* 088512C8 */
rv_t func_088512C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088512C8:;
    sp = sp - 16;
    v1 = D_08AF1C3C - (7228);
    v1 = v1 + 7228;
    s0 = a0 + 0;
    v0 = v1 + 84;
    a2 = LD32(a0+88);
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = a2 + 0;
    ST32(s0+92, v0);
    cnd_ = a2 != 0;
    ST32(s0, v1);
    if (cnd_) { goto L_08851338; }
    goto L_08851300;
L_08851300:;
    a0 = s0 + 0;
    goto L_08851304;
L_08851304:;
    a1 = 1;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_0885130C;
L_0885130C:;
    a1 = D_08AF1CA8 - (7336);
    a1 = a1 + 7336;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_08851320;
L_08851320:;
    a0 = s0 + 92;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851328;
L_08851328:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08851338:;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851340;
L_08851340:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08851300; }
    goto L_08851348;
L_08851348:;
    v0 = LD_U8(v0+128);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08851300; }
    goto L_08851354;
L_08851354:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851364;
L_08851364:;
    a0 = s0 + 0;
    goto L_08851304;
}

/* 0885136C */
rv_t func_0885136C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885136C:;
    sp = sp - 16;
    v1 = D_08AF1C3C - (7228);
    v1 = v1 + 7228;
    s0 = a0 + 0;
    v0 = v1 + 84;
    a2 = LD32(a0+88);
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = a2 + 0;
    ST32(s0+92, v0);
    cnd_ = a2 != 0;
    ST32(s0, v1);
    if (cnd_) { goto L_088513E4; }
    goto L_088513A4;
L_088513A4:;
    a0 = s0 + 0;
    goto L_088513A8;
L_088513A8:;
    a1 = 1;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_088513B0;
L_088513B0:;
    a1 = D_08AF1CA8 - (7336);
    a1 = a1 + 7336;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_088513C4;
L_088513C4:;
    a0 = s0 + 92;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088513CC;
L_088513CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088513D4;
L_088513D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088513E4:;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088513EC;
L_088513EC:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088513A4; }
    goto L_088513F4;
L_088513F4:;
    v0 = LD_U8(v0+128);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088513A4; }
    goto L_08851400;
L_08851400:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851410;
L_08851410:;
    a0 = s0 + 0;
    goto L_088513A8;
}

/* 08851418 */
rv_t func_08851418(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08851418:;
    sp = sp - 16;
    v0 = LD_U8(a0+85);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08851448; }
    goto L_0885142C;
L_0885142C:;
    a1 = LD32(a0+80);
    cnd_ = a1 == 0;
    if (cnd_) { ST8(v1+85, 0); goto L_08851448; }
    goto L_08851438;
L_08851438:;
    v0 = LD_U8(a1+128);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08851454; }
    goto L_08851444;
L_08851444:;
    ST8(v1+85, 0);
    goto L_08851448;
L_08851448:;
    goto L_0885144C;
L_0885144C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08851454:;
    v0 = LD32(a1);
    v1 = D_08AEBBA8 - (-17496);
    a1 = LD32(v0+32);
    t_ = a1;
    f12 = BITSF(LD32(v1-17496));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851468;
L_08851468:;
    goto L_0885144C;
}

/* 08851470 */
rv_t func_08851470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08851470:;
    sp = sp - 16;
    v0 = LD_U8(a0+85);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088514A0; }
    goto L_08851484;
L_08851484:;
    a1 = LD32(a0+80);
    cnd_ = a1 == 0;
    if (cnd_) { ST8(v1+85, 0); goto L_088514A0; }
    goto L_08851490;
L_08851490:;
    v0 = LD_U8(a1+128);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088514AC; }
    goto L_0885149C;
L_0885149C:;
    ST8(v1+85, 0);
    goto L_088514A0;
L_088514A0:;
    goto L_088514A4;
L_088514A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088514AC:;
    v0 = LD32(a1);
    v1 = LD32(v0+36);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088514BC;
L_088514BC:;
    goto L_088514A4;
}

/* 088514C4 */
rv_t func_088514C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088514C4:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08851530; }
    goto L_088514FC;
L_088514FC:;
    v1 = LD_U16(s0+16);
    v0 = (s32)v1 < 100;
    cnd_ = v0 == 0;
    v0 = 100;
    if (cnd_) { goto L_08851708; }
    goto L_0885150C;
L_0885150C:;
    v0 = (s32)v1 < 98;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(a0+84); goto L_088515C8; }
    goto L_08851518;
L_08851518:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 84;
    if (cnd_) { goto L_08851598; }
    goto L_08851524;
L_08851524:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a0+80); goto L_08851560; }
    goto L_0885152C;
L_0885152C:;
    a1 = 0 + 0;
    goto L_08851530;
L_08851530:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08851560:;
    cnd_ = a0 == 0;
    a1 = LD32(s0+24);
    if (cnd_) { goto L_08851580; }
    goto L_08851568;
L_08851568:;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08851530; }
    goto L_08851574;
L_08851574:;
    a1 = LD32(a1);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08851588; }
    goto L_08851580;
L_08851580:;
    a1 = 1;
    goto L_08851530;
L_08851588:;
    { rv_t r_ = func_0883E520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851590;
L_08851590:;
    a1 = 1;
    goto L_08851530;
L_08851598:;
    a0 = LD32(a0+80);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08851530; }
    goto L_088515A4;
L_088515A4:;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_08851530; }
    goto L_088515B0;
L_088515B0:;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088515C0;
L_088515C0:;
    ST8(s1+85, 0);
    goto L_08851580;
L_088515C8:;
    cnd_ = v0 == 0;
    s2 = LD32(s0+24);
    if (cnd_) { goto L_088516D8; }
    goto L_088515D0;
L_088515D0:;
    a0 = LD32(s1+80);
    v0 = LD_U8(a0+128);
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08851530; }
    goto L_088515E0;
L_088515E0:;
    v0 = LD_U16(s0+16);
    f20 = BITSF(0);
    v0 = v0 ^ 0x62;
    s3 = v0 < 0x1u;
    cnd_ = s3 == 0;
    if (cnd_) { f20 = BITSF(LD32(s2+4)); goto L_088515F8; }
    goto L_088515F8;
L_088515F8:;
    v0 = LD_U8(s2+12);
    s4 = D_08B28B62 - (-29854);
    s6 = LD_U8(a0+136);
    s0 = (v0 >> 1) & 0x1;
    cnd_ = s0 == 0;
    s5 = LD_U8(s4-29854);
    if (cnd_) { goto L_08851658; }
    goto L_08851610;
L_08851610:;
    f1 = BITSF(LD32(a0+68));
    fcc = FCMP(f1, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(a0); goto L_0885165C; }
    goto L_08851624;
L_08851624:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a0); goto L_0885165C; }
    goto L_08851638;
L_08851638:;
    v0 = LD32(a0+72);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0885165C; }
    goto L_08851648;
L_08851648:;
    v0 = 1;
    ST8(a0+136, 0);
    ST8(s4-29854, v0);
    a0 = LD32(s1+80);
    goto L_08851658;
L_08851658:;
    v1 = LD32(a0);
    goto L_0885165C;
L_0885165C:;
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851668;
L_08851668:;
    v1 = LD32(s2+8);
    v0 = LD32(s1+80);
    ST32(v0+156, v1);
    a0 = LD32(s1+80);
    v1 = LD32(a0);
    v0 = LD32(v1+64);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851688;
L_08851688:;
    f0 = BITSF(0);
    v1 = 1;
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    ST8(s1+85, v1);
    if (cnd_) { goto L_088516B8; }
    goto L_088516A0;
L_088516A0:;
    cnd_ = s0 == 0;
    if (cnd_) { a1 = 1; goto L_08851530; }
    goto L_088516A8;
L_088516A8:;
    v0 = LD32(s1+80);
    ST8(v0+136, s6);
    ST8(s4-29854, s5);
    goto L_08851580;
L_088516B8:;
    v0 = LD32(s1+80);
    f12 = f20;
    ST8(v0+154, s0);
    a0 = LD32(s1+80);
    { rv_t r_ = func_0883DDC0(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088516CC;
L_088516CC:;
    v0 = LD32(s1+80);
    ST8(v0+154, 0);
    goto L_088516A0;
L_088516D8:;
    a1 = LD32(s2);
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088516E8;
L_088516E8:;
    ST32(s1+80, v0);
    a1 = 0 + 0;
    v1 = LD32(s2);
    cnd_ = v0 == 0;
    ST32(s1+88, v1);
    if (cnd_) { goto L_08851530; }
    goto L_088516FC;
L_088516FC:;
    v0 = 1;
    ST8(s1+84, v0);
    goto L_088515D0;
L_08851708:;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08851530; }
    goto L_08851710;
L_08851710:;
    v0 = 101;
    cnd_ = v1 != v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08851530; }
    goto L_0885171C;
L_0885171C:;
    a0 = LD32(a0+80);
    cnd_ = a0 == 0;
    if (cnd_) { a1 = 1; goto L_08851530; }
    goto L_08851728;
L_08851728:;
    v0 = LD32(s0+24);
    v1 = LD32(v0);
    ST32(a0+156, v1);
    goto L_08851580;
}

/* 08851738 */
void func_08851738(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08851738:;
    sp = sp - 48;
    s3 = a0 + 0;
    s1 = s3 + 28;
    s0 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_08851760;
L_08851760:;
    v0 = D_08AF1D88 - (7560);
    v0 = v0 + 7560;
    ST32(s3, v0);
    v0 = 3;
    a2 = sp + 0;
    ST16(s3+8, v0);
    a1 = 0 + 0;
    ST32(s3+28, 0);
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_08851788;
L_08851788:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08851788; }
    goto L_088517AC;
L_088517AC:;
    v0 = LD32(sp);
    v0 = v0 < 0x7u;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088519E8; }
    goto L_088517BC;
L_088517BC:;
    s2 = LD32(s0);
    goto L_088517C0;
L_088517C0:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    v1 = LD32(s2);
    cnd_ = v1 == v0;
    a0 = LD32(s3+28);
    if (cnd_) { goto L_088519C0; }
    goto L_088517D4;
L_088517D4:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+8, 0); goto L_088517F4; }
    goto L_088517DC;
L_088517DC:;
    cnd_ = s2 == a0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08851830; }
    goto L_088517E4;
L_088517E4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088517EC;
L_088517EC:;
    ST32(s3+28, 0);
    ST32(s1+8, 0);
    goto L_088517F4;
L_088517F4:;
    cnd_ = s2 == 0;
    ST32(s1+4, 0);
    if (cnd_) { goto L_088519B8; }
    goto L_088517FC;
L_088517FC:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851804;
L_08851804:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851818;
L_08851818:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088519A4; }
    goto L_08851820;
L_08851820:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_08851828;
L_08851828:;
    s2 = LD32(s0);
    goto L_0885182C;
L_0885182C:;
    v1 = LD32(s1+8);
    goto L_08851830;
L_08851830:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885184C; }
    goto L_08851838;
L_08851838:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0885184C;
L_0885184C:;
    a3 = LD32(sp);
    v0 = v0 << 2;
    v0 = s2 + v0;
    ST32(s0, v0);
    v0 = 1;
    cnd_ = a3 == 0;
    ST32(s3+40, 0);
    if (cnd_) { goto L_08851994; }
    goto L_08851868;
L_08851868:;
    a1 = s3 + 40;
    a2 = 0 + 0;
    goto L_08851870;
L_08851870:;
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
    if (cnd_) { goto L_08851870; }
    goto L_08851898;
L_08851898:;
    v0 = 1;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = LD32(s3+40); goto L_0885199C; }
    goto L_088518A4;
L_088518A4:;
    v0 = 2;
    cnd_ = a3 == v0;
    if (cnd_) { v0 = LD32(s3+40); goto L_08851990; }
    goto L_088518B0;
L_088518B0:;
    v0 = a3 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s3+48, 0); goto L_088518EC; }
    goto L_088518BC;
L_088518BC:;
    a1 = s3 + 48;
    a2 = 0 + 0;
    goto L_088518C4;
L_088518C4:;
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
    if (cnd_) { goto L_088518C4; }
    goto L_088518EC;
L_088518EC:;
    v0 = a3 < 0x5u;
    cnd_ = v0 != 0;
    v0 = a3 < 0x6u;
    if (cnd_) { goto L_0885192C; }
    goto L_088518F8;
L_088518F8:;
    a1 = s3 + 44;
    a2 = 0 + 0;
    goto L_08851900;
L_08851900:;
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
    if (cnd_) { goto L_08851900; }
    goto L_08851928;
L_08851928:;
    v0 = a3 < 0x6u;
    goto L_0885192C;
L_0885192C:;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08851938; }
    goto L_08851934;
L_08851934:;
    ST32(s3+44, v0);
    goto L_08851938;
L_08851938:;
    a0 = LD32(s3+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851940;
L_08851940:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851950;
L_08851950:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08851960; }
    goto L_08851958;
L_08851958:;
    v0 = LD32(s3+44);
    ST32(v1+156, v0);
    goto L_08851960;
L_08851960:;
    v0 = LD32(s3+40);
    v1 = (v0 >> 3) & 0x1;
    v0 = (v0 & ~(0x1u << 4)) | ((v1 & 0x1) << 4);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s3+40, v0);
    sp = sp + 48;
    return;
L_08851990:;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    goto L_08851994;
L_08851994:;
    ST32(s3+40, v0);
    goto L_088518B0;
L_0885199C:;
    v0 = v0 & 0x1;
    goto L_08851994;
L_088519A4:;
    a1 = s2 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088519B0;
L_088519B0:;
    s2 = LD32(s0);
    goto L_0885182C;
L_088519B8:;
    ST32(s1, 0);
    goto L_08851828;
L_088519C0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088519D4; }
    goto L_088519C8;
L_088519C8:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_0885182C;
L_088519D4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088519DC;
L_088519DC:;
    ST32(s3+28, 0);
    s2 = LD32(s0);
    goto L_088519C8;
L_088519E8:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088519F0;
L_088519F0:;
    s2 = LD32(s0);
    goto L_088517C0;
}

/* 088519F8 */
rv_t func_088519F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088519F8:;
    sp = sp - 16;
    v0 = D_08AF1D88 - (7560);
    v0 = v0 + 7560;
    s0 = a0 + 0;
    v1 = LD32(a0+40);
    v1 = v1 & 0x8;
    cnd_ = v1 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08851A68; }
    goto L_08851A24;
L_08851A24:;
    v0 = LD32(s0+28);
    goto L_08851A28;
L_08851A28:;
    s1 = s0 + 28;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08851A58; }
    goto L_08851A34;
L_08851A34:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851A44;
L_08851A44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08851A58:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851A60;
L_08851A60:;
    ST32(s0+28, 0);
    goto L_08851A34;
L_08851A68:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851A70;
L_08851A70:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851A80;
L_08851A80:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08851A24; }
    goto L_08851A88;
L_08851A88:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08851A28; }
    goto L_08851A94;
L_08851A94:;
    v0 = LD_U8(v1+128);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08851A24; }
    goto L_08851AA0;
L_08851AA0:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851AB0;
L_08851AB0:;
    v0 = LD32(s0+28);
    goto L_08851A28;
}

/* 08851AB8 */
rv_t func_08851AB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08851AB8:;
    sp = sp - 16;
    v0 = D_08AF1D88 - (7560);
    v0 = v0 + 7560;
    s0 = a0 + 0;
    v1 = LD32(a0+40);
    v1 = v1 & 0x8;
    cnd_ = v1 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_08851B30; }
    goto L_08851AE4;
L_08851AE4:;
    v0 = LD32(s0+28);
    goto L_08851AE8;
L_08851AE8:;
    s1 = s0 + 28;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08851B20; }
    goto L_08851AF4;
L_08851AF4:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851B04;
L_08851B04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851B0C;
L_08851B0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08851B20:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851B28;
L_08851B28:;
    ST32(s0+28, 0);
    goto L_08851AF4;
L_08851B30:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851B38;
L_08851B38:;
    a0 = D_08B28B64 - (-29852);
    a1 = v0 + 0;
    a0 = a0 - 29852;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851B48;
L_08851B48:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08851AE4; }
    goto L_08851B50;
L_08851B50:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_08851AE8; }
    goto L_08851B5C;
L_08851B5C:;
    v0 = LD_U8(v1+128);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08851AE4; }
    goto L_08851B68;
L_08851B68:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851B78;
L_08851B78:;
    v0 = LD32(s0+28);
    goto L_08851AE8;
}

/* 08851B80 */
rv_t func_08851B80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08851B80:;
    sp = sp - 16;
    v0 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08851BE4; }
    goto L_08851BA4;
L_08851BA4:;
    a2 = LD_U16(a1+16);
    v0 = (s32)a2 < 24;
    cnd_ = v0 == 0;
    v0 = 84;
    if (cnd_) { goto L_08851DC4; }
    goto L_08851BB4;
L_08851BB4:;
    v0 = (s32)a2 < 22;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a1+24); goto L_08851D0C; }
    goto L_08851BC0;
L_08851BC0:;
    v0 = 4;
    cnd_ = a2 == v0;
    v0 = (s32)a2 < 5;
    if (cnd_) { goto L_08851C78; }
    goto L_08851BCC;
L_08851BCC:;
    cnd_ = v0 == 0;
    v0 = 19;
    if (cnd_) { goto L_08851C40; }
    goto L_08851BD4;
L_08851BD4:;
    v0 = 3;
    cnd_ = a2 == v0;
    if (cnd_) { v0 = LD32(a0+40); goto L_08851BFC; }
    goto L_08851BE0;
L_08851BE0:;
    v0 = 0 + 0;
    goto L_08851BE4;
L_08851BE4:;
    goto L_08851BE8;
L_08851BE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08851BFC:;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08851C10; }
    goto L_08851C08;
L_08851C08:;
    v0 = 1;
    goto L_08851BE4;
L_08851C10:;
    { rv_t r_ = func_088523E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851C18;
L_08851C18:;
    v0 = LD32(s1+40);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 1; goto L_08851BE4; }
    goto L_08851C28;
L_08851C28:;
    f12 = BITSF(0);
    goto L_08851C2C;
L_08851C2C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08851EEC(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851C38;
L_08851C38:;
    v0 = 1;
    goto L_08851BE4;
L_08851C40:;
    cnd_ = a2 != v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08851BE4; }
    goto L_08851C48;
L_08851C48:;
    v0 = LD32(a0+40);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s0 = LD32(a1+24);
    if (cnd_) { goto L_08851C08; }
    goto L_08851C58;
L_08851C58:;
    { rv_t r_ = func_088523E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851C60;
L_08851C60:;
    v0 = LD32(s1+40);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 1; goto L_08851BE4; }
    goto L_08851C70;
L_08851C70:;
    f12 = BITSF(LD32(s0));
    goto L_08851C2C;
L_08851C78:;
    v0 = LD32(a0+40);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08851BE4; }
    goto L_08851C88;
L_08851C88:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851C90;
L_08851C90:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851CA0;
L_08851CA0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08851CB4; }
    goto L_08851CA8;
L_08851CA8:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08851CF8; }
    goto L_08851CB4;
L_08851CB4:;
    a0 = 4;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851CC8;
L_08851CC8:;
    v1 = 2;
    ST32(v0, v1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(s1+4);
    a2 = 1;
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851CE8;
L_08851CE8:;
    v0 = LD32(s1+40);
    goto L_08851CEC;
L_08851CEC:;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s1+40, v0);
    goto L_08851C08;
L_08851CF8:;
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851D04;
L_08851D04:;
    v0 = LD32(s1+40);
    goto L_08851CEC;
L_08851D0C:;
    a0 = 22;
    v0 = LD32(v1);
    v1 = 1;
    v0 = v0 - 1;
    cnd_ = a2 == a0;
    v1 = v1 << (v0 & 31);
    if (cnd_) { goto L_08851DB8; }
    goto L_08851D24;
L_08851D24:;
    v0 = LD32(s1+44);
    v1 = ~(0 | v1);
    v0 = v0 & v1;
    goto L_08851D30;
L_08851D30:;
    a0 = LD32(s1+28);
    ST32(s1+44, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851D3C;
L_08851D3C:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851D4C;
L_08851D4C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08851D6C; }
    goto L_08851D54;
L_08851D54:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 101; goto L_08851D70; }
    goto L_08851D60;
L_08851D60:;
    v0 = LD32(s1+44);
    ST32(v1+156, v0);
    goto L_08851C08;
L_08851D6C:;
    a0 = 101;
    goto L_08851D70;
L_08851D70:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851D80;
L_08851D80:;
    a1 = LD32(v0+24);
    v1 = LD32(s1+44);
    a0 = v0 + 0;
    a2 = 1;
    ST32(a1, v1);
    v1 = 2;
    a1 = 1;
    ST32(v0, v1);
    a3 = LD32(s1+4);
    ST32(v0+4, a3);
    goto L_08851DA8;
L_08851DA8:;
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851DB0;
L_08851DB0:;
    v0 = 1;
    goto L_08851BE4;
L_08851DB8:;
    v0 = LD32(s1+44);
    v0 = v0 | v1;
    goto L_08851D30;
L_08851DC4:;
    cnd_ = a2 == v0;
    v0 = 97;
    if (cnd_) { goto L_08851E78; }
    goto L_08851DCC;
L_08851DCC:;
    cnd_ = a2 != v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08851BE4; }
    goto L_08851DD4;
L_08851DD4:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851DDC;
L_08851DDC:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    s2 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851DF0;
L_08851DF0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08851BE0; }
    goto L_08851DF8;
L_08851DF8:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08851BE4; }
    goto L_08851E04;
L_08851E04:;
    a3 = 0 + 0;
    a0 = 98;
    a1 = 16;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851E18;
L_08851E18:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08851BE0; }
    goto L_08851E20;
L_08851E20:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_08851E5C; }
    goto L_08851E2C;
L_08851E2C:;
    ST32(v1, s2);
    ST8(v1+12, 0);
    v0 = LD32(s0+72);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+156); goto L_08851E50; }
    goto L_08851E44;
L_08851E44:;
    v0 = 1;
    ST8(v1+12, v0);
    v0 = LD32(s0+156);
    goto L_08851E50;
L_08851E50:;
    ST32(v1+4, 0);
    ST32(v1+8, v0);
    v0 = 2;
    goto L_08851E5C;
L_08851E5C:;
    ST32(a3, v0);
    a0 = a3 + 0;
    a1 = 1;
    v0 = LD32(s1+4);
    a2 = 1;
    ST32(a3+4, v0);
    goto L_08851DA8;
L_08851E78:;
    a0 = LD32(a0+28);
    s2 = LD32(a1+24);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851E84;
L_08851E84:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851E94;
L_08851E94:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08851ED0; }
    goto L_08851E9C;
L_08851E9C:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(s1+4); goto L_08851ED4; }
    goto L_08851EA8;
L_08851EA8:;
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08851BE4; }
    goto L_08851EB4;
L_08851EB4:;
    a1 = LD32(s2);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08851BE8; }
    goto L_08851EC0;
L_08851EC0:;
    { rv_t r_ = func_0883E520(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851EC8;
L_08851EC8:;
    v0 = 1;
    goto L_08851BE4;
L_08851ED0:;
    a2 = LD32(s1+4);
    goto L_08851ED4;
L_08851ED4:;
    a0 = s0 + 0;
    a1 = 2;
    a3 = 0 + 0;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851EE4;
L_08851EE4:;
    v0 = 1;
    goto L_08851BE4;
}

/* 08851EEC */
rv_t func_08851EEC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08851EEC:;
    sp = sp - 48;
    s2 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD32(a0+40);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08851F40; }
    goto L_08851F20;
L_08851F20:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08851F40:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851F48;
L_08851F48:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    s3 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08851F5C;
L_08851F5C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08851F20; }
    goto L_08851F64;
L_08851F64:;
    v1 = LD32(s0+40);
    v0 = v1 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+44); goto L_08852078; }
    goto L_08851F74;
L_08851F74:;
    v0 = LD_U8(s1+76);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08851FFC; }
    goto L_08851F80;
L_08851F80:;
    v0 = LD_U8(s1+128);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08851FBC; }
    goto L_08851F8C;
L_08851F8C:;
    v0 = v1 | 0x8;
    cnd_ = s1 == 0;
    ST32(s0+40, v0);
    if (cnd_) { goto L_08851FB4; }
    goto L_08851F98;
L_08851F98:;
    f0 = BITSF(LD32(s1+132));
    ST32(s0+48, FBITS(f0));
    goto L_08851FA0;
L_08851FA0:;
    v0 = LD32(s0+40);
    goto L_08851FA4;
L_08851FA4:;
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s0+40, v0);
    goto L_08851F20;
L_08851FB4:;
    ST32(s0+48, FBITS(f20));
    goto L_08851FA0;
L_08851FBC:;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851FC8;
L_08851FC8:;
    f0 = BITSF(0);
    v1 = LD32(s0+44);
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    ST32(s1+156, v1);
    if (cnd_) { goto L_08851FE8; }
    goto L_08851FE0;
L_08851FE0:;
    v1 = LD32(s0+40);
    goto L_08851F8C;
L_08851FE8:;
    a0 = s1 + 0;
    f12 = f20;
    { rv_t r_ = func_0883DDC0(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08851FF4;
L_08851FF4:;
    v1 = LD32(s0+40);
    goto L_08851F8C;
L_08851FFC:;
    a0 = 99;
    a1 = 16;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885200C;
L_0885200C:;
    v1 = LD32(v0+24);
    a3 = v0 + 0;
    ST32(v1, s3);
    cnd_ = s2 == 0;
    ST8(v1+12, 0);
    if (cnd_) { goto L_08852028; }
    goto L_08852020;
L_08852020:;
    v0 = 1;
    ST8(v1+12, v0);
    goto L_08852028;
L_08852028:;
    v0 = LD32(s0+40);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+44); goto L_08852048; }
    goto L_08852038;
L_08852038:;
    v0 = LD_U8(v1+12);
    v0 = v0 | 0x2;
    ST8(v1+12, v0);
    v0 = LD32(s0+44);
    goto L_08852048;
L_08852048:;
    ST32(v1+4, FBITS(f20));
    a0 = a3 + 0;
    a1 = 1;
    ST32(v1+8, v0);
    v0 = 2;
    a2 = 1;
    ST32(a3, v0);
    v1 = LD32(s0+4);
    ST32(a3+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852070;
L_08852070:;
    v1 = LD32(s0+40);
    goto L_08851F8C;
L_08852078:;
    a0 = s1 + 0;
    ST32(s1+156, v0);
    { rv_t r_ = func_0883E324(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852084;
L_08852084:;
    v0 = LD32(s0+40);
    goto L_08851FA4;
}

/* 0885208C */
rv_t func_0885208C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0885208C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08852094 */
rv_t func_08852094(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852094:;
    sp = sp - 16;
    a1 = LD32(a0+40);
    v0 = a1 & 0x8;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088520C4; }
    goto L_088520B0;
L_088520B0:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+48));
    f0 = f0 + f1;
    ST32(a0+48, FBITS(f0));
    goto L_088520C4;
L_088520C4:;
    v0 = a1 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = (a1 & ~(0x1u << 0)) | ((0 & 0x1) << 0); goto L_08852124; }
    goto L_088520D0;
L_088520D0:;
    v0 = a1 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08852100; }
    goto L_088520DC;
L_088520DC:;
    v0 = a1 + 0;
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    v1 = a1 & 0x8;
    cnd_ = v1 != 0;
    ST32(s0+40, v0);
    if (cnd_) { goto L_0885210C; }
    goto L_088520F0;
L_088520F0:;
    v0 = LD32(s0+40);
    goto L_088520F4;
L_088520F4:;
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s0+40, v0);
    goto L_08852100;
L_08852100:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885210C:;
    f12 = BITSF(LD32(s0+48));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08851EEC(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885211C;
L_0885211C:;
    v0 = LD32(s0+40);
    goto L_088520F4;
L_08852124:;
    a0 = LD32(s0+28);
    ST32(s0+40, a1);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852130;
L_08852130:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852140;
L_08852140:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08852100; }
    goto L_08852148;
L_08852148:;
    v0 = LD32(v0+72);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08852160; }
    goto L_08852158;
L_08852158:;
    a1 = LD32(s0+40);
    goto L_088520D0;
L_08852160:;
    f12 = BITSF(0);
    a1 = 1;
    { rv_t r_ = func_08851EEC(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885216C;
L_0885216C:;
    a1 = LD32(s0+40);
    goto L_088520D0;
}

/* 08852174 */
rv_t func_08852174(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852174:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852188;
L_08852188:;
    a1 = v0 + 4;
    a0 = LD32(s0+36);
    a2 = 1;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_088521AC; }
    goto L_088521A8;
L_088521A8:;
    a2 = (u32)((s32)v1 >> 2);
    goto L_088521AC;
L_088521AC:;
    v0 = a2 << 2;
    a1 = a1 + v0;
    a1 = a1 + 12;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088521CC */
rv_t func_088521CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088521CC:;
    sp = sp - 48;
    s2 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088523E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088521F0;
L_088521F0:;
    v0 = 7;
    ST32(sp, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08852200;
L_08852200:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08852200; }
    goto L_08852228;
L_08852228:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852234;
L_08852234:;
    v0 = LD32(s2+28);
    a1 = s2 + 28;
    cnd_ = v0 == 0;
    s1 = LD32(s0);
    if (cnd_) { goto L_0885235C; }
    goto L_08852244;
L_08852244:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_08852264; }
    goto L_08852250;
L_08852250:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_08852264;
L_08852264:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_08852280; }
    goto L_0885226C;
L_0885226C:;
    v0 = s3 + 0;
    goto L_08852270;
L_08852270:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08852270; }
    goto L_08852280;
L_08852280:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885228C;
L_0885228C:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_08852294;
L_08852294:;
    ST32(s0, s1);
    a2 = sp + 4;
    a1 = 0 + 0;
    v0 = LD32(s2+40);
    ST32(sp+4, v0);
    goto L_088522A8;
L_088522A8:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088522A8; }
    goto L_088522D0;
L_088522D0:;
    f0 = BITSF(LD32(s2+48));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_088522E0;
L_088522E0:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088522E0; }
    goto L_08852308;
L_08852308:;
    v0 = LD32(s2+44);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_08852318;
L_08852318:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08852318; }
    goto L_08852340;
L_08852340:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0885235C:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    s1 = s1 + 4;
    goto L_08852294;
}

/* 08852370 */
rv_t func_08852370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852370:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_088523E8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885238C;
L_0885238C:;
    a0 = s0 + 0;
    a1 = 7;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852398;
L_08852398:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088523A4;
L_088523A4:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088523B0;
L_088523B0:;
    a1 = LD32(s1+40);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088523BC;
L_088523BC:;
    f12 = BITSF(LD32(s1+48));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088523C8;
L_088523C8:;
    a1 = LD32(s1+44);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088523D4;
L_088523D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088523E8 */
rv_t func_088523E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088523E8:;
    sp = sp - 16;
    v1 = 8;
    v0 = LD32(a0+40);
    v0 = v0 & 0x18;
    cnd_ = v0 == v1;
    s0 = a0 + 0;
    if (cnd_) { goto L_08852418; }
    goto L_08852408;
L_08852408:;
    goto L_0885240C;
L_0885240C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08852418:;
    a0 = LD32(a0+28);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852420;
L_08852420:;
    a0 = D_08B28B64 - (-29852);
    a0 = a0 - 29852;
    a1 = v0 + 0;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852430;
L_08852430:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08852408; }
    goto L_08852438;
L_08852438:;
    v0 = LD_U8(v0+76);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(a0+128); goto L_08852458; }
    goto L_08852444;
L_08852444:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08852490; }
    goto L_08852454;
L_08852454:;
    v0 = LD_U8(a0+128);
    goto L_08852458;
L_08852458:;
    v1 = LD32(s0+40);
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+40, v1);
    v0 = LD_U8(a0+128);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_0885247C; }
    goto L_08852470;
L_08852470:;
    f0 = BITSF(LD32(a0+132));
    ST32(s0+48, FBITS(f0));
    goto L_08852478;
L_08852478:;
    v0 = LD32(s0+40);
    goto L_0885247C;
L_0885247C:;
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+48, 0); goto L_08852408; }
    goto L_08852488;
L_08852488:;
    goto L_0885240C;
L_08852490:;
    f12 = BITSF(LD32(s0+48));
    { rv_t r_ = func_0883E2E4(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852498;
L_08852498:;
    cnd_ = v0 != 0;
    v0 = LD32(s0+40);
    if (cnd_) { goto L_0885247C; }
    goto L_088524A0;
L_088524A0:;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+40, v0);
    goto L_08852478;
}

/* 088524AC */
void func_088524AC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088524AC:;
    sp = sp - 48;
    s2 = D_08B28DB0 - (-29264);
    s4 = a0 + 0;
    s3 = a2 + 0;
    s1 = s2 - 29264;
    func_08873E94(a0, a1);
    goto L_088524DC;
L_088524DC:;
    v0 = D_08AF1DD8 - (7640);
    v1 = LD32(s1+4);
    v0 = v0 + 7640;
    s0 = LD32(s4+4);
    ST32(s4, v0);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852500;
L_08852500:;
    a0 = LD32(s2-29264);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s4);
    v1 = v1 + 1;
    a0 = s4 + 0;
    ST32(v0+4, a1);
    a1 = 1;
    ST32(s0, v0);
    ST8(v0+8, 0);
    ST32(s1+12, v1);
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852538;
L_08852538:;
    v0 = 34;
    ST16(s4+8, v0);
    a0 = s4 + 0;
    ST8(s4+44, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885254C;
L_0885254C:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08852554;
L_08852554:;
    v0 = LD32(s3);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s3, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08852554; }
    goto L_08852578;
L_08852578:;
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_08852580;
L_08852580:;
    v0 = LD32(s3);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s3, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08852580; }
    goto L_088525A4;
L_088525A4:;
    v0 = LD32(sp+4);
    a1 = s4 + 28;
    a2 = 0 + 0;
    v0 = 0 < v0;
    ST8(s4+44, v0);
    goto L_088525B8;
L_088525B8:;
    v1 = LD32(s3);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s3);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_088525B8; }
    goto L_088525E0;
L_088525E0:;
    a0 = LD32(s4+28);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08852760; }
    goto L_088525EC;
L_088525EC:;
    ST32(s4+32, v0);
    cnd_ = (s32)a0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08852644; }
    goto L_088525F8;
L_088525F8:;
    v1 = LD32(s4+32);
    goto L_088525FC;
L_088525FC:;
    v0 = a3 << 3;
    a2 = 0 + 0;
    a1 = v1 + v0;
    goto L_08852608;
L_08852608:;
    v1 = LD32(s3);
    a2 = a2 + 1;
    a0 = a2 < 0x8u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s3);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_08852608; }
    goto L_08852630;
L_08852630:;
    v0 = LD32(s4+28);
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s4+32); goto L_088525FC; }
    goto L_08852644;
L_08852644:;
    a1 = s4 + 36;
    a2 = 0 + 0;
    goto L_0885264C;
L_0885264C:;
    v1 = LD32(s3);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s3);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_0885264C; }
    goto L_08852674;
L_08852674:;
    a0 = LD32(s4+36);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08852750; }
    goto L_08852680;
L_08852680:;
    ST32(s4+40, v0);
    cnd_ = (s32)a0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088526D8; }
    goto L_0885268C;
L_0885268C:;
    v1 = LD32(s4+40);
    goto L_08852690;
L_08852690:;
    v0 = a3 << 3;
    a2 = 0 + 0;
    a1 = v1 + v0;
    goto L_0885269C;
L_0885269C:;
    v1 = LD32(s3);
    a2 = a2 + 1;
    a0 = a2 < 0x8u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s3);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_0885269C; }
    goto L_088526C4;
L_088526C4:;
    v0 = LD32(s4+36);
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s4+40); goto L_08852690; }
    goto L_088526D8;
L_088526D8:;
    a2 = sp + 8;
    a1 = 0 + 0;
    goto L_088526E0;
L_088526E0:;
    v0 = LD32(s3);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s3, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_088526E0; }
    goto L_08852704;
L_08852704:;
    v1 = LD32(sp+8);
    v1 = v0 + v1;
    v0 = LD32(sp);
    v0 = (s32)v0 < 6;
    cnd_ = v0 == 0;
    ST32(s3, v1);
    if (cnd_) { goto L_0885273C; }
    goto L_0885271C;
L_0885271C:;
    goto L_08852720;
L_08852720:;
    sp = sp + 48;
    return;
L_0885273C:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852748;
L_08852748:;
    goto L_08852720;
L_08852750:;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852758;
L_08852758:;
    a0 = LD32(s4+36);
    goto L_08852680;
L_08852760:;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852768;
L_08852768:;
    a0 = LD32(s4+28);
    goto L_088525EC;
}

/* 08852770 */
rv_t func_08852770(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852770:;
    v0 = D_08AF1DD8 - (7640);
    v0 = v0 + 7640;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DB0 - (-29264);
    a0 = a0 - 29264;
    a1 = s0 + 0;
    func_08AAA7F4(a0, a1, t1, t2, t3);
    goto L_0885279C;
L_0885279C:;
    v1 = LD32(s0+32);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088527DC; }
    goto L_088527A8;
L_088527A8:;
    v0 = LD32(s0+40);
    goto L_088527AC;
L_088527AC:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088527CC; }
    goto L_088527B4;
L_088527B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088527BC;
L_088527BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088527CC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088527D4;
L_088527D4:;
    goto L_088527B4;
L_088527DC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088527E4;
L_088527E4:;
    v0 = LD32(s0+40);
    goto L_088527AC;
}

/* 088527EC */
rv_t func_088527EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088527EC:;
    v0 = D_08AF1DD8 - (7640);
    v0 = v0 + 7640;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DB0 - (-29264);
    a0 = a0 - 29264;
    a1 = s0 + 0;
    func_08AAA7F4(a0, a1, t1, t2, t3);
    goto L_08852818;
L_08852818:;
    v1 = LD32(s0+32);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08852860; }
    goto L_08852824;
L_08852824:;
    v0 = LD32(s0+40);
    goto L_08852828;
L_08852828:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08852850; }
    goto L_08852830;
L_08852830:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852838;
L_08852838:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852840;
L_08852840:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08852850:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852858;
L_08852858:;
    goto L_08852830;
L_08852860:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852868;
L_08852868:;
    v0 = LD32(s0+40);
    goto L_08852828;
}

/* 08852870 */
rv_t func_08852870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852870:;
    sp = sp - 16;
    v1 = LD32(a0+36);
    s0 = LD32(a0+28);
    s0 = s0 + v1;
    s0 = s0 << 3;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852890;
L_08852890:;
    s0 = s0 + 20;
    s0 = s0 + v0;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088528AC */
rv_t func_088528AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088528AC:;
    sp = sp - 80;
    v0 = 7;
    t1 = a0 + 0;
    a3 = sp + 32;
    ST32(sp+32, v0);
    a2 = 0 + 0;
    goto L_088528C8;
L_088528C8:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088528C8; }
    goto L_088528F0;
L_088528F0:;
    v0 = LD_U8(t1+44);
    a3 = sp + 36;
    a2 = 0 + 0;
    v0 = 0 < v0;
    ST32(sp+36, v0);
    goto L_08852904;
L_08852904:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08852904; }
    goto L_0885292C;
L_0885292C:;
    v0 = LD32(t1+28);
    a3 = sp + 40;
    a2 = 0 + 0;
    ST32(sp+40, v0);
    goto L_0885293C;
L_0885293C:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_0885293C; }
    goto L_08852964;
L_08852964:;
    v0 = LD32(t1+28);
    cnd_ = (s32)v0 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088529DC; }
    goto L_08852970;
L_08852970:;
    t2 = sp + 16;
    v1 = LD32(t1+32);
    goto L_08852978;
L_08852978:;
    v0 = t0 << 3;
    a3 = t2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a2 = 0 + 0;
    ST32(sp, a0);
    v1 = LD32(v0+4);
    ST32(sp+16, a0);
    ST32(sp+20, v1);
    ST32(sp+4, v1);
    goto L_088529A0;
L_088529A0:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x8u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088529A0; }
    goto L_088529C8;
L_088529C8:;
    v0 = LD32(t1+28);
    t0 = t0 + 1;
    v0 = (s32)t0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(t1+32); goto L_08852978; }
    goto L_088529DC;
L_088529DC:;
    v0 = LD32(t1+36);
    a3 = sp + 44;
    a2 = 0 + 0;
    ST32(sp+44, v0);
    goto L_088529EC;
L_088529EC:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_088529EC; }
    goto L_08852A14;
L_08852A14:;
    v0 = LD32(t1+36);
    cnd_ = (s32)v0 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08852A88; }
    goto L_08852A20;
L_08852A20:;
    v1 = LD32(t1+40);
    goto L_08852A24;
L_08852A24:;
    v0 = t0 << 3;
    a3 = sp + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a2 = 0 + 0;
    ST32(sp+16, a0);
    v1 = LD32(v0+4);
    ST32(sp, a0);
    ST32(sp+4, v1);
    ST32(sp+20, v1);
    goto L_08852A4C;
L_08852A4C:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x8u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08852A4C; }
    goto L_08852A74;
L_08852A74:;
    v0 = LD32(t1+36);
    t0 = t0 + 1;
    v0 = (s32)t0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(t1+40); goto L_08852A24; }
    goto L_08852A88;
L_08852A88:;
    ST32(sp+48, 0);
    a3 = sp + 48;
    a2 = 0 + 0;
    goto L_08852A94;
L_08852A94:;
    v0 = LD_U8(a3);
    v1 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08852A94; }
    goto L_08852ABC;
L_08852ABC:;
    a0 = t1 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852AC4;
L_08852AC4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
}

/* 08852AD0 */
rv_t func_08852AD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852AD0:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08852B00; }
    goto L_08852AE8;
L_08852AE8:;
    v1 = LD_U16(a1+16);
    v0 = 17;
    cnd_ = v1 == v0;
    v0 = 18;
    if (cnd_) { goto L_08852B70; }
    goto L_08852AF8;
L_08852AF8:;
    cnd_ = v1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08852B10; }
    goto L_08852B00;
L_08852B00:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08852B10:;
    t1 = LD32(a0+36);
    a1 = LD32(a1+24);
    cnd_ = (s32)t1 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08852B48; }
    goto L_08852B20;
L_08852B20:;
    v1 = LD32(a0+40);
    a1 = LD32(a1);
    a2 = v1 + 0;
    goto L_08852B2C;
L_08852B2C:;
    v0 = LD32(v1);
    t0 = t0 + 1;
    a3 = (s32)t0 < (s32)t1;
    cnd_ = v0 == a1;
    v1 = v1 + 8;
    if (cnd_) { goto L_08852B50; }
    goto L_08852B40;
L_08852B40:;
    cnd_ = a3 != 0;
    a2 = a2 + 8;
    if (cnd_) { goto L_08852B2C; }
    goto L_08852B48;
L_08852B48:;
    v1 = 1;
    goto L_08852B00;
L_08852B50:;
    a1 = LD_U16(a2+4);
    f12 = BITSF(0);
    a2 = LD32(a0+4);
    a0 = D_08B29170 - (-28304);
    a0 = a0 - 28304;
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852B68;
L_08852B68:;
    v1 = 1;
    goto L_08852B00;
L_08852B70:;
    t1 = LD32(a0+28);
    a1 = LD32(a1+24);
    cnd_ = (s32)t1 <= 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08852B48; }
    goto L_08852B80;
L_08852B80:;
    v1 = LD32(a0+32);
    a1 = LD32(a1);
    a2 = v1 + 0;
    goto L_08852B8C;
L_08852B8C:;
    v0 = LD32(v1);
    t0 = t0 + 1;
    a3 = (s32)t0 < (s32)t1;
    cnd_ = v0 == a1;
    v1 = v1 + 8;
    if (cnd_) { goto L_08852B50; }
    goto L_08852BA0;
L_08852BA0:;
    cnd_ = a3 != 0;
    a2 = a2 + 8;
    if (cnd_) { goto L_08852B8C; }
    goto L_08852BA8;
L_08852BA8:;
    v1 = 1;
    goto L_08852B00;
}

/* 08852BB0 */
rv_t func_08852BB0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08852BB0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08852C30; }
    goto L_08852BE4;
L_08852BE4:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08852C08; }
    goto L_08852BF8;
L_08852BF8:;
    v0 = D_08B28DB0 - (-29264);
    a0 = LD32(v0-29264);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08852C20; }
    goto L_08852C08;
L_08852C08:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08852C20:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852C28;
L_08852C28:;
    goto L_08852C08;
L_08852C30:;
    s3 = D_08B28DB0 - (-29264);
    s0 = s3 - 29264;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852C48;
L_08852C48:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29264, v0);
    if (cnd_) { goto L_08852C74; }
    goto L_08852C58;
L_08852C58:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08852C60;
L_08852C60:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08852C60; }
    goto L_08852C74;
L_08852C74:;
    v0 = s3 - 29264;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08852BE4;
}

/* 08852C84 */
rv_t func_08852C84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852C84:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08852BB0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852C98;
L_08852C98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08852CA4 */
rv_t func_08852CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852CA4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08852BB0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852CB8;
L_08852CB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08852CC4 */
rv_t func_08852CC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08852CC4:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = a0 + 236;
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    func_08873BF8(a0);
    goto L_08852D00;
L_08852D00:;
    a1 = D_08AF1E98 - (7832);
    a1 = a1 + 7832;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875A24(a0, a1);
    goto L_08852D14;
L_08852D14:;
    v1 = D_08AF1E2C - (7724);
    v1 = v1 + 7724;
    v0 = v1 + 80;
    ST32(s0, v1);
    s1 = s0 + 80;
    a0 = s1 + 0;
    ST32(s0+236, v0);
    func_088D06E4(a0, 0, 0, 0);
    goto L_08852D34;
L_08852D34:;
    v0 = D_08AEBBB0 - (-17488);
    f0 = BITSF(LD32(v0-17488));
    f12 = BITSF(0);
    a3 = 0 + 0;
    ST32(s0+232, FBITS(f0));
    a1 = s2 + 0;
    a2 = s3 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852D58;
L_08852D58:;
    a1 = s4 + 0;
    a2 = s5 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852D68;
L_08852D68:;
    a0 = s0 + 0;
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852D70;
L_08852D70:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08852D94 */
rv_t func_08852D94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852D94:;
    v0 = D_08AF1E2C - (7724);
    v0 = v0 + 7724;
    v1 = v0 + 80;
    ST32(a0+236, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s0 = a0 + 0;
    s1 = a0 + 236;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08852DC8;
L_08852DC8:;
    a0 = s0 + 80;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852DD0;
L_08852DD0:;
    a1 = D_08AF1E98 - (7832);
    a1 = a1 + 7832;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_08852DE4;
L_08852DE4:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852DEC;
L_08852DEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08852E00 */
rv_t func_08852E00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852E00:;
    v0 = D_08AF1E2C - (7724);
    v0 = v0 + 7724;
    v1 = v0 + 80;
    ST32(a0+236, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s0 = a0 + 0;
    s1 = a0 + 236;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08852E34;
L_08852E34:;
    a0 = s0 + 80;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852E3C;
L_08852E3C:;
    a1 = D_08AF1E98 - (7832);
    a1 = a1 + 7832;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_08852E50;
L_08852E50:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852E58;
L_08852E58:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852E60;
L_08852E60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08852E74 */
rv_t func_08852E74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852E74:;
    sp = sp - 16;
    s2 = a0 + 80;
    s0 = a0 + 0;
    a0 = LD32(s2+12);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+232, 0); goto L_08852EB4; }
    goto L_08852E9C;
L_08852E9C:;
    s1 = a0 + 4;
    a0 = s1 + 0;
    { u64 r_ = func_0880D47C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08852EA8;
L_08852EA8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08852F14; }
    goto L_08852EB0;
L_08852EB0:;
    ST32(s0+232, 0);
    goto L_08852EB4;
L_08852EB4:;
    f1 = BITSF(LD32(s0+232));
    goto L_08852EB8;
L_08852EB8:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEBBB4 - (-17484);
    if (cnd_) { goto L_08852EFC; }
    goto L_08852ECC;
L_08852ECC:;
    f0 = BITSF(LD32(v0-17484));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08852EE0; }
    goto L_08852EE0;
L_08852EE0:;
    ST32(s2+108, FBITS(f0));
    goto L_08852EE8;
L_08852EE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08852EFC:;
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852F0C;
L_08852F0C:;
    goto L_08852EE8;
L_08852F14:;
    a1 = 0 + 0;
    { rv_t r_ = func_0880D36C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852F1C;
L_08852F1C:;
    v0 = D_08AEBBB4 - (-17484);
    f1 = BITSF(LD32(v0-17484));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+232)); goto L_08852EB8; }
    goto L_08852F34;
L_08852F34:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+232));
    f2 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(s0+232, FBITS(f0));
    if (cnd_) { goto L_08852EB4; }
    goto L_08852F58;
L_08852F58:;
    ST32(s0+232, FBITS(f2));
    goto L_08852EB4;
}

/* 08852F60 */
rv_t func_08852F60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08852F60:;
    sp = sp - 16;
    a0 = a0 + 80;
    a1 = 0 + 0;
    { rv_t r_ = func_088D1050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08852F74;
L_08852F74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08852F80 */
float func_08852F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08852F80:;
    sp = sp - 80;
    s1 = a1 + 0;
    a1 = a1 + 4;
    s6 = a2 + 0;
    s5 = t1 + 0;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s0 = a0 + 0;
    s4 = s0 + 104;
    f21 = f13;
    f20 = f12;
    func_08875A24(a0, a1);
    goto L_08852FD8;
L_08852FD8:;
    a1 = LD32(s1);
    a0 = s4 + 0;
    f20 = f20 + f20;
    ST32(s0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+20);
    v0 = s0 + v0;
    ST32(v0, v1);
    func_088D06E4(a0, 0, 0, 0);
    goto L_08852FFC;
L_08852FFC:;
    v0 = LD32(s0);
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2));
    v1 = LD32(v0-12);
    f0 = BITSF(LD32(s2+4));
    a0 = s0 + 16;
    v1 = s0 + v1;
    v0 = 50;
    ST16(v1+8, v0);
    a2 = s0 + 28;
    t1 = D_08B25AC0 - (23232);
    ST32(a0+8, FBITS(f1));
    t2 = t1 + 23232;
    v0 = D_08AEBBB8 - (-17480);
    ST32(a0+4, FBITS(f0));
    f9 = BITSF(0);
    t4 = s0 + 256;
    ST32(s0+16, FBITS(f2));
    t3 = s0 + 268;
    a1 = s6 + 0;
    f6 = BITSF(LD32(s3+20));
    f7 = BITSF(LD32(s3+24));
    f8 = BITSF(LD32(s3+28));
    f1 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f3 = BITSF(LD32(s3+8));
    f4 = BITSF(LD32(s3+12));
    f5 = BITSF(LD32(s3+16));
    f0 = BITSF(LD32(s3+32));
    ST32(a2+20, FBITS(f6));
    a0 = s4 + 0;
    ST32(a2+24, FBITS(f7));
    ST32(a2+28, FBITS(f8));
    ST32(s0+28, FBITS(f1));
    ST32(a2+32, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f3));
    ST32(a2+12, FBITS(f4));
    ST32(a2+16, FBITS(f5));
    v1 = LD32(t1+23232);
    a3 = LD32(t2+4);
    f5 = BITSF(LD32(v0-17480));
    a2 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a2;
    v1 = v1 + a3;
    a2 = (u32)((s32)v1 >> 16);
    v0 = v1 << 16;
    a3 = a3 + v1;
    v0 = v0 + a2;
    v0 = v0 + a3;
    t0 = (u32)((s32)v0 >> 16);
    a2 = v0 << 16;
    a3 = a3 + v0;
    a2 = a2 + t0;
    a2 = a2 + a3;
    t0 = a2 >> 1;
    v1 = v1 >> 1;
    v0 = v0 >> 1;
    f4 = BITSF(t0);
    f2 = BITSF(v1);
    f3 = BITSF(v0);
    v0 = D_08AEBBBC - (-17476);
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f4);
    f3 = BITSF(LD32(v0-17476));
    f0 = f0 * f5;
    f1 = f1 * f5;
    f2 = f2 * f5;
    a3 = a3 + a2;
    f0 = f0 - f3;
    f1 = f1 - f3;
    f2 = f2 - f3;
    ST32(t1+23232, a2);
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = f2 * f20;
    ST32(t2+4, a3);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v1 = LD32(sp+4);
    a2 = LD32(sp+8);
    v0 = LD32(sp);
    ST32(s0+84, v1);
    ST32(s0+88, a2);
    ST32(s0+80, v0);
    v0 = D_08B28CA4 - (-29532);
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
    if (cnd_) { goto L_088533E0; }
    goto L_0885319C;
L_0885319C:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853320; }
    goto L_088531AC;
L_088531AC:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08853244; }
    goto L_088531D4;
L_088531D4:;
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
    if (cnd_) { goto L_08853220; }
    goto L_08853210;
L_08853210:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08853220;
L_08853220:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853264; }
    goto L_08853230;
L_08853230:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08853264; }
    goto L_08853240;
L_08853240:;
    goto L_08853244;
L_08853244:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853264; }
    goto L_08853258;
L_08853258:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08853264;
L_08853264:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088532F4; }
    goto L_08853284;
L_08853284:;
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
    if (cnd_) { goto L_088532D0; }
    goto L_088532C0;
L_088532C0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_088532D0;
L_088532D0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853314; }
    goto L_088532E0;
L_088532E0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08853314; }
    goto L_088532F0;
L_088532F0:;
    goto L_088532F4;
L_088532F4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853314; }
    goto L_08853308;
L_08853308:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08853314;
L_08853314:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08853498; }
    goto L_0885331C;
L_0885331C:;
    goto L_08853320;
L_08853320:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_088533B4; }
    goto L_08853344;
L_08853344:;
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
    if (cnd_) { goto L_08853390; }
    goto L_08853380;
L_08853380:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08853390;
L_08853390:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088533D4; }
    goto L_088533A0;
L_088533A0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_088533D4; }
    goto L_088533B0;
L_088533B0:;
    goto L_088533B4;
L_088533B4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088533D4; }
    goto L_088533C8;
L_088533C8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_088533D4;
L_088533D4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_08853498; }
    goto L_088533DC;
L_088533DC:;
    goto L_088533E0;
L_088533E0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08853474; }
    goto L_08853404;
L_08853404:;
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
    if (cnd_) { goto L_08853450; }
    goto L_08853440;
L_08853440:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_08853450;
L_08853450:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853494; }
    goto L_08853460;
L_08853460:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_08853494; }
    goto L_08853470;
L_08853470:;
    goto L_08853474;
L_08853474:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08853494; }
    goto L_08853488;
L_08853488:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_08853494;
L_08853494:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_08853498;
L_08853498:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s0+(92),FBITS(v[96]));}
    {ST32(s0+(96),FBITS(v[97]));}
    {ST32(s0+(100),FBITS(v[98]));}
    f3 = BITSF(LD32(v0-29532));
    f2 = BITSF(LD32(s5));
    f1 = BITSF(LD32(s5+4));
    f0 = BITSF(LD32(s5+8));
    ST32(s0+256, FBITS(f2));
    ST32(t4+8, FBITS(f0));
    ST32(t4+4, FBITS(f1));
    ST32(t3+8, FBITS(f9));
    ST32(t3+4, FBITS(f3));
    ST32(s0+268, FBITS(f9));
    ST32(s0+280, FBITS(f21));
    ST32(sp+16, FBITS(f9));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f9));
    { rv_t r_ = func_088D0A64(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088534E4;
L_088534E4:;
    v0 = 1;
    ST8(s0+288, v0);
    v0 = D_08AEBBC0 - (-17472);
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-17472));
    ST32(s0+284, FBITS(f0));
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853500;
L_08853500:;
    sp = sp + 80;
    return f0;
}

/* 08853530 */
void func_08853530(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853530:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a2 = LD32(a1);
    a1 = 1;
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(s1+20);
    s1 = s1 + 4;
    v0 = a0 + v0;
    ST32(v0, v1);
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_0885356C;
L_0885356C:;
    a0 = s0 + 104;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853574;
L_08853574:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_08853580;
L_08853580:;
    sp = sp + 16;
    return;
}

/* 08853594 */
rv_t func_08853594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853594:;
    v0 = D_08AF1F7C - (8060);
    v0 = v0 + 8060;
    v1 = v0 + 88;
    ST32(a0+292, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s0 = a0 + 0;
    s1 = a0 + 292;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_088535C8;
L_088535C8:;
    a0 = s0 + 104;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088535D0;
L_088535D0:;
    a1 = D_08AF1FF0 - (8176);
    a1 = a1 + 8176;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_088535E4;
L_088535E4:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088535EC;
L_088535EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08853600 */
rv_t func_08853600(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853600:;
    v0 = D_08AF1F7C - (8060);
    v0 = v0 + 8060;
    v1 = v0 + 88;
    ST32(a0+292, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s0 = a0 + 0;
    s1 = a0 + 292;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_08853634;
L_08853634:;
    a0 = s0 + 104;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885363C;
L_0885363C:;
    a1 = D_08AF1FF0 - (8176);
    a1 = a1 + 8176;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_08853650;
L_08853650:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853658;
L_08853658:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853660;
L_08853660:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08853674 */
rv_t func_08853674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08853674:;
    sp = sp - 96;
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    v1 = LD_U8(a0+288);
    cnd_ = v1 != 0;
    f20 = BITSF(LD32(v0-31328));
    if (cnd_) { goto L_08853700; }
    goto L_0885369C;
L_0885369C:;
    f0 = BITSF(LD32(s0+280));
    goto L_088536A0;
L_088536A0:;
    f1 = BITSF(0);
    f2 = f0 - f20;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    ST32(s0+280, FBITS(f2));
    if (cnd_) { goto L_088536E8; }
    goto L_088536B8;
L_088536B8:;
    v0 = D_08AEBBD8 - (-17448);
    f0 = BITSF(LD32(v0-17448));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+212, FBITS(f2)); goto L_088536D0; }
    goto L_088536D0;
L_088536D0:;
    goto L_088536D4;
L_088536D4:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088536E8:;
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088536F8;
L_088536F8:;
    goto L_088536D4;
L_08853700:;
    v0 = a0 + 268;
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+268));
    s1 = a0 + 256;
    f5 = f5 * f20;
    f1 = f1 * f20;
    f0 = f0 * f20;
    f2 = BITSF(LD32(a0+256));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    f2 = f2 + f0;
    f3 = f3 + f1;
    f4 = f4 + f5;
    v0 = D_08AEBBD0 - (-17456);
    ST32(a0+256, FBITS(f2));
    a1 = s1 + 0;
    a0 = a0 + 16;
    ST32(s1+4, FBITS(f3));
    ST32(s1+8, FBITS(f4));
    f12 = BITSF(LD32(v0-17456));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f4));
    { u64 r_ = func_088505AC(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853764;
L_08853764:;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f10 = BITSF(LD32(s0+256));
    f9 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+4));
    f8 = BITSF(LD32(s1+8));
    f0 = f10 - f0;
    f6 = f9 - f6;
    f5 = BITSF(LD32(sp+8));
    v0 = FBITS(f10);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f9);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = f0 * f0;
    f5 = f8 - f5;
    f1 = f6 * f6;
    f3 = BITSF(LD32(s0+80));
    f4 = f5 * f5;
    f2 = f2 + f1;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    f1 = BITSF(LD32(s0+84));
    {v0=FBITS(v[0]);}
    ST32(sp+32, FBITS(f0));
    f0 = BITSF(v0);
    f2 = f2 + f4;
    f4 = BITSF(v0);
    v0 = D_08AEBBD4 - (-17452);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-17452));
    f3 = f3 * f4;
    ST32(sp+36, FBITS(f6));
    fcc = FCMP(f2, f0, 12);
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_08853914; }
    goto L_08853800;
L_08853800:;
    f0 = BITSF(LD32(s0+284));
    v0 = D_08AEBBD8 - (-17448);
    f4 = BITSF(LD32(v0-17448));
    f0 = f20 * f0;
    fcc = FCMP(f4, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f4 = f0; goto L_08853820; }
    goto L_08853820;
L_08853820:;
    f7 = f8 * f4;
    f6 = f9 * f4;
    f3 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+20));
    f0 = f8 - f7;
    f1 = f9 - f6;
    f4 = f10 * f4;
    f3 = f3 * f20;
    ST32(s1+8, FBITS(f0));
    f2 = f2 * f20;
    f5 = f10 - f4;
    ST32(s1+4, FBITS(f1));
    f0 = BITSF(LD32(s0+92));
    f1 = BITSF(LD32(s0+96));
    ST32(sp+32, FBITS(f4));
    f0 = f0 + f3;
    f1 = f1 + f2;
    ST32(sp+36, FBITS(f6));
    ST32(sp+40, FBITS(f7));
    ST32(s0+256, FBITS(f5));
    ST32(s0+92, FBITS(f0));
    ST32(s0+96, FBITS(f1));
    ST32(s0+100, 0);
    {v[112]=BITSF(LD32(s0+(92)));}
    {v[113]=BITSF(LD32(s0+(96)));}
    {v[114]=BITSF(LD32(s0+(100)));}
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
    {ST32(s0+(28),FBITS(v[96]));}
    {ST32(s0+(32),FBITS(v[97]));}
    {ST32(s0+(36),FBITS(v[98]));}
    {ST32(s0+(40),FBITS(v[100]));}
    {ST32(s0+(44),FBITS(v[101]));}
    {ST32(s0+(48),FBITS(v[102]));}
    {ST32(s0+(52),FBITS(v[104]));}
    {ST32(s0+(56),FBITS(v[105]));}
    {ST32(s0+(60),FBITS(v[106]));}
    f0 = BITSF(LD32(s0+280));
    goto L_088536A0;
L_08853914:;
    v1 = LD32(s0);
    v0 = LD32(v1+56);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853924;
L_08853924:;
    f10 = BITSF(LD32(s0+256));
    f9 = BITSF(LD32(s1+4));
    f8 = BITSF(LD32(s1+8));
    goto L_08853800;
}

/* 08853934 */
rv_t func_08853934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853934:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0+52);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853950;
L_08853950:;
    v0 = D_08AEBBDC - (-17444);
    f1 = BITSF(LD32(s0+260));
    f0 = BITSF(LD32(v0-17444));
    v1 = s0 + 80;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = s0 + 256;
    if (cnd_) { goto L_0885398C; }
    goto L_08853970;
L_08853970:;
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(s0+80, 0);
    ST8(s0+288, 0);
    ST32(s0+256, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    goto L_0885398C;
L_0885398C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885399C */
rv_t func_0885399C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885399C:;
    sp = sp - 16;
    a2 = a0 + 28;
    a1 = a0 + 16;
    v0 = LD32(a0+76);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s0 = a0 + 104;
    if (cnd_) { goto L_088539DC; }
    goto L_088539C0;
L_088539C0:;
    a0 = s0 + 0;
    goto L_088539C4;
L_088539C4:;
    a1 = 0 + 0;
    { rv_t r_ = func_088D1050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088539CC;
L_088539CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088539DC:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088539E4;
L_088539E4:;
    a0 = s0 + 0;
    goto L_088539C4;
}

/* 088539EC */
float func_088539EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088539EC:;
    sp = sp - 32;
    s5 = a0 + 292;
    s0 = a0 + 0;
    a0 = s5 + 0;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    func_08873BF8(a0);
    goto L_08853A2C;
L_08853A2C:;
    v0 = D_08AEBBE8 - (-17432);
    v1 = D_08AEBBEC - (-17428);
    f12 = BITSF(LD32(v0-17432));
    f13 = BITSF(LD32(v1-17428));
    a1 = D_08AF2148 - (8520);
    a1 = a1 + 8520;
    a2 = s1 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    t1 = s4 + 0;
    a0 = s0 + 0;
    a1 = a1 + 4;
    f0 = func_08852F80(a0, a1, a2, a3, t0, t1, f12, f13);
    goto L_08853A60;
L_08853A60:;
    v0 = D_08AF20D4 - (8404);
    v0 = v0 + 8404;
    v1 = v0 + 88;
    ST32(s0+292, v1);
    v1 = 49;
    ST32(s0, v0);
    ST16(s5+8, v1);
    sp = sp + 32;
    return f0;
}

/* 08853AA0 */
void func_08853AA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853AA0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08858628(a0, a1);
    goto L_08853AB4;
L_08853AB4:;
    v0 = D_08AF22A8 - (8872);
    v0 = v0 + 8872;
    ST32(s0, v0);
    a0 = s0 + 56;
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    func_08AAAAA4(a0);
    goto L_08853AD0;
L_08853AD0:;
    v1 = D_08AEBBF8 - (-17416);
    f0 = BITSF(LD32(v1-17416));
    v0 = 57;
    ST16(s0+8, v0);
    ST32(s0+268, FBITS(f0));
    ST8(s0+272, 0);
    ST32(s0+276, 0);
    ST32(s0+280, 0);
    sp = sp + 16;
    return;
}

/* 08853B00 */
rv_t func_08853B00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853B00:;
    sp = sp - 16;
    v0 = D_08AF22A8 - (8872);
    s0 = a0 + 0;
    v0 = v0 + 8872;
    v1 = LD32(a0+52);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08853B5C; }
    goto L_08853B28;
L_08853B28:;
    v0 = LD32(s0+280);
    goto L_08853B2C;
L_08853B2C:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08853B4C; }
    goto L_08853B34;
L_08853B34:;
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853B3C;
L_08853B3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08853B4C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853B54;
L_08853B54:;
    goto L_08853B34;
L_08853B5C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853B64;
L_08853B64:;
    v0 = LD32(s0+280);
    goto L_08853B2C;
}

/* 08853B6C */
rv_t func_08853B6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08853B6C:;
    sp = sp - 16;
    v0 = D_08AF22A8 - (8872);
    s0 = a0 + 0;
    v0 = v0 + 8872;
    v1 = LD32(a0+52);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08853BD0; }
    goto L_08853B94;
L_08853B94:;
    v0 = LD32(s0+280);
    goto L_08853B98;
L_08853B98:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08853BC0; }
    goto L_08853BA0;
L_08853BA0:;
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853BA8;
L_08853BA8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853BB0;
L_08853BB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08853BC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853BC8;
L_08853BC8:;
    goto L_08853BA0;
L_08853BD0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08853BD8;
L_08853BD8:;
    v0 = LD32(s0+280);
    goto L_08853B98;
}

/* 08853BE0 */
void func_08853BE0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08853BE0:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 284;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853C04;
L_08853C04:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08853AA0(a0, a1);
    goto L_08853C14;
L_08853C14:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08853C38; }
    goto L_08853C20;
L_08853C20:;
    sp = sp + 64;
    return;
L_08853C38:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853C88;
L_08853C88:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08853C20;
}

/* 08853C98 */
rv_t func_08853C98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08853C98:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853CC4;
L_08853CC4:;
    v0 = 2;
    v1 = LD32(sp);
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08853E80; }
    goto L_08853CD4;
L_08853CD4:;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08853D74; }
    goto L_08853CDC;
L_08853CDC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08853D00; }
    goto L_08853CE4;
L_08853CE4:;
    goto L_08853CE8;
L_08853CE8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08853D00:;
    a1 = s2 + 0;
    { rv_t r_ = func_08858BD0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D08;
L_08853D08:;
    a0 = s2 + 0;
    a1 = s0 + 48;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D14;
L_08853D14:;
    a0 = LD32(s0+48);
    cnd_ = (s32)a0 <= 0;
    a1 = s0 + 268;
    if (cnd_) { goto L_08853D64; }
    goto L_08853D20;
L_08853D20:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D28;
L_08853D28:;
    v1 = LD32(s0+48);
    ST32(s0+52, v0);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08853D60; }
    goto L_08853D38;
L_08853D38:;
    a1 = LD32(s0+52);
    goto L_08853D3C;
L_08853D3C:;
    v0 = s1 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D4C;
L_08853D4C:;
    v1 = LD32(s0+48);
    s1 = s1 + 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0+52); goto L_08853D3C; }
    goto L_08853D60;
L_08853D60:;
    a1 = s0 + 268;
    goto L_08853D64;
L_08853D64:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D6C;
L_08853D6C:;
    goto L_08853CE8;
L_08853D74:;
    a1 = s2 + 0;
    { rv_t r_ = func_08858BD0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D7C;
L_08853D7C:;
    a0 = s2 + 0;
    a1 = s0 + 48;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D88;
L_08853D88:;
    a0 = LD32(s0+48);
    cnd_ = (s32)a0 <= 0;
    a1 = s0 + 268;
    if (cnd_) { goto L_08853DD8; }
    goto L_08853D94;
L_08853D94:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853D9C;
L_08853D9C:;
    v1 = LD32(s0+48);
    ST32(s0+52, v0);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08853DD4; }
    goto L_08853DAC;
L_08853DAC:;
    a1 = LD32(s0+52);
    goto L_08853DB0;
L_08853DB0:;
    v0 = s1 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853DC0;
L_08853DC0:;
    v1 = LD32(s0+48);
    s1 = s1 + 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0+52); goto L_08853DB0; }
    goto L_08853DD4;
L_08853DD4:;
    a1 = s0 + 268;
    goto L_08853DD8;
L_08853DD8:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853DE0;
L_08853DE0:;
    a1 = s0 + 272;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853DEC;
L_08853DEC:;
    a1 = s0 + 276;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853DF8;
L_08853DF8:;
    s1 = LD32(s0+276);
    cnd_ = (s32)s1 <= 0;
    a0 = s1 << 2;
    if (cnd_) { goto L_08853CE4; }
    goto L_08853E04;
L_08853E04:;
    a0 = a0 + s1;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853E10;
L_08853E10:;
    a0 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = s1 - 1;
    if (cnd_) { goto L_08853E2C; }
    goto L_08853E1C;
L_08853E1C:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08853E24;
L_08853E24:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08853E24; }
    goto L_08853E2C;
L_08853E2C:;
    v0 = LD32(s0+276);
    ST32(s0+280, a0);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08853CE4; }
    goto L_08853E3C;
L_08853E3C:;
    s1 = 0 + 0;
    goto L_08853E40;
L_08853E40:;
    a1 = LD32(s0+280);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s1;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08853E54;
L_08853E54:;
    a1 = LD32(s0+280);
    a0 = s2 + 0;
    a1 = a1 + s1;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853E68;
L_08853E68:;
    v1 = LD32(s0+276);
    v1 = (s32)s3 < (s32)v1;
    cnd_ = v1 != 0;
    s1 = s1 + 40;
    if (cnd_) { goto L_08853E40; }
    goto L_08853E78;
L_08853E78:;
    goto L_08853CE8;
L_08853E80:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_08858BD0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853E8C;
L_08853E8C:;
    a0 = s2 + 0;
    a1 = s0 + 48;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853E98;
L_08853E98:;
    a0 = LD32(s0+48);
    cnd_ = (s32)a0 <= 0;
    a1 = s0 + 268;
    if (cnd_) { goto L_08853EE8; }
    goto L_08853EA4;
L_08853EA4:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853EAC;
L_08853EAC:;
    v1 = LD32(s0+48);
    ST32(s0+52, v0);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08853EE4; }
    goto L_08853EBC;
L_08853EBC:;
    a1 = LD32(s0+52);
    goto L_08853EC0;
L_08853EC0:;
    v0 = s1 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853ED0;
L_08853ED0:;
    v1 = LD32(s0+48);
    s1 = s1 + 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0+52); goto L_08853EC0; }
    goto L_08853EE4;
L_08853EE4:;
    a1 = s0 + 268;
    goto L_08853EE8;
L_08853EE8:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853EF0;
L_08853EF0:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853EFC;
L_08853EFC:;
    v0 = LD32(sp+4);
    a1 = s0 + 276;
    a0 = s2 + 0;
    v0 = 0 < v0;
    ST8(s0+272, v0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853F14;
L_08853F14:;
    s1 = LD32(s0+276);
    cnd_ = (s32)s1 <= 0;
    a0 = s1 << 2;
    if (cnd_) { goto L_08853CE4; }
    goto L_08853F20;
L_08853F20:;
    a0 = a0 + s1;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853F2C;
L_08853F2C:;
    a0 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = s1 - 1;
    if (cnd_) { goto L_08853F48; }
    goto L_08853F38;
L_08853F38:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08853F40;
L_08853F40:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08853F40; }
    goto L_08853F48;
L_08853F48:;
    v0 = LD32(s0+276);
    ST32(s0+280, a0);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08853CE4; }
    goto L_08853F58;
L_08853F58:;
    s1 = 0 + 0;
    goto L_08853F5C;
L_08853F5C:;
    a1 = LD32(s0+280);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s1;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08853F70;
L_08853F70:;
    a1 = LD32(s0+280);
    a0 = s2 + 0;
    a1 = a1 + s1;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853F84;
L_08853F84:;
    v1 = LD32(s0+276);
    v1 = (s32)s3 < (s32)v1;
    cnd_ = v1 != 0;
    s1 = s1 + 40;
    if (cnd_) { goto L_08853F5C; }
    goto L_08853F94;
L_08853F94:;
    goto L_08853CE8;
}

/* 08853F9C */
rv_t func_08853F9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08853F9C:;
    sp = sp - 32;
    s3 = a1 + 0;
    a1 = 2;
    s2 = a0 + 0;
    a0 = s3 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853FCC;
L_08853FCC:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_08858B24(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853FD8;
L_08853FD8:;
    a1 = LD32(s2+48);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08853FE4;
L_08853FE4:;
    v1 = LD32(s2+48);
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { f12 = BITSF(LD32(s2+268)); goto L_08854020; }
    goto L_08853FF0;
L_08853FF0:;
    v1 = LD32(s2+52);
    goto L_08853FF4;
L_08853FF4:;
    v0 = s0 << 2;
    a0 = s3 + 0;
    v0 = v0 + v1;
    a1 = LD32(v0);
    s0 = s0 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885400C;
L_0885400C:;
    v1 = LD32(s2+48);
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s2+52); goto L_08853FF4; }
    goto L_0885401C;
L_0885401C:;
    f12 = BITSF(LD32(s2+268));
    goto L_08854020;
L_08854020:;
    a0 = s3 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885402C;
L_0885402C:;
    a1 = LD_U8(s2+272);
    a0 = s3 + 0;
    a1 = 0 < a1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885403C;
L_0885403C:;
    v1 = LD_U8(s2+272);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(s2+276); goto L_08854048; }
    goto L_08854048;
L_08854048:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854054;
L_08854054:;
    cnd_ = (s32)s0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0885408C; }
    goto L_0885405C;
L_0885405C:;
    a1 = LD32(s2+280);
    a0 = s3 + 0;
    s0 = s0 - 1;
    a1 = a1 + s1;
    { rv_t r_ = func_0882E248(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854070;
L_08854070:;
    a1 = LD32(s2+280);
    a0 = s3 + 0;
    a1 = a1 + s1;
    a1 = a1 + 24;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854084;
L_08854084:;
    cnd_ = s0 != 0;
    s1 = s1 + 40;
    if (cnd_) { goto L_0885405C; }
    goto L_0885408C;
L_0885408C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088540A8 */
rv_t func_088540A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088540A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+48);
    cnd_ = (s32)a0 <= 0;
    if (cnd_) { goto L_08854178; }
    goto L_088540C4;
L_088540C4:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088540CC;
L_088540CC:;
    t2 = LD32(s0+48);
    a0 = v0 + 0;
    cnd_ = (s32)t2 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08854160; }
    goto L_088540DC;
L_088540DC:;
    v0 = D_08B28E18 - (-29160);
    t3 = LD32(v0-29160);
    t1 = LD32(s0+52);
    t5 = v0 - 29160;
    t4 = 999;
    t0 = a3 << 2;
    goto L_088540F4;
L_088540F4:;
    v0 = t0 + t1;
    a2 = LD32(v0);
    cnd_ = a2 == t4;
    if (cnd_) { a3 = a3 + 1; goto L_08854154; }
    goto L_08854104;
L_08854104:;
    v0 = LD32(t5+4);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + t3;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08854144; }
    goto L_08854124;
L_08854124:;
    v1 = LD32(a1);
    goto L_08854128;
L_08854128:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08854184; }
    goto L_08854134;
L_08854134:;
    a1 = LD32(a1+4);
    goto L_08854138;
L_08854138:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08854128; }
    goto L_08854140;
L_08854140:;
    v1 = 0 + 0;
    goto L_08854144;
L_08854144:;
    cnd_ = v1 == 0;
    v0 = t0 + a0;
    if (cnd_) { goto L_08854150; }
    goto L_0885414C;
L_0885414C:;
    ST32(v0, v1);
    goto L_08854150;
L_08854150:;
    a3 = a3 + 1;
    goto L_08854154;
L_08854154:;
    v0 = (s32)a3 < (s32)t2;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = a3 << 2; goto L_088540F4; }
    goto L_08854160;
L_08854160:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08854178; }
    goto L_08854168;
L_08854168:;
    v0 = LD32(a0);
    ST32(s0+60, v0);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08854174;
L_08854174:;
    goto L_08854178;
L_08854178:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08854184:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08854138; }
    goto L_08854190;
L_08854190:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08854138; }
    goto L_0885419C;
L_0885419C:;
    goto L_08854144;
}

/* 088541A4 */
void func_088541A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088541A4:;
    sp = sp - 32;
    s0 = a0 + 0;
    func_08856288(a0, a1);
    goto L_088541B8;
L_088541B8:;
    v0 = D_08AEBC10 - (-17392);
    v1 = D_08AEBC14 - (-17388);
    f2 = BITSF(LD32(v0-17392));
    f0 = BITSF(LD32(v1-17388));
    v0 = D_08AEBC18 - (-17384);
    f1 = BITSF(LD32(v0-17384));
    f0 = f2 * f0;
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(s0+76, 0);
    a3 = D_08B45A9C - (23196);
    f0 = f0 * f1;
    ST32(s0+64, FBITS(f2));
    v1 = s0 + 0;
    a1 = 0 + 0;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(s0+68, 0);
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    a2 = a3 + 23196;
    a0 = s0 + 104;
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AF2308 - (8968);
    v0 = v0 + 8968;
    ST32(s0, v0);
    v0 = D_08AEBC1C - (-17380);
    ST32(s0+60, FBITS(f0));
    f0 = BITSF(LD32(v0-17380));
    v0 = 56;
    ST16(s0+8, v0);
    v0 = (u32)-1;
    ST32(s0+72, FBITS(f0));
    ST16(s0+78, v0);
    goto L_0885424C;
L_0885424C:;
    f0 = BITSF(LD32(a3+23196));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    a1 = a1 + 1;
    v0 = a1 < 0x2u;
    ST32(v1+80, FBITS(f0));
    ST32(v1+84, FBITS(f1));
    ST32(v1+88, FBITS(f2));
    v1 = v1 + 12;
    ST8(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0885424C; }
    goto L_0885427C;
L_0885427C:;
    sp = sp + 32;
    return;
}

/* 0885428C */
rv_t func_0885428C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885428C:;
    v0 = D_08AF2308 - (8968);
    v0 = v0 + 8968;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DC4 - (-29244);
    a1 = s0 + 0;
    a0 = a0 - 29244;
    func_08AAAB64(a0, a1, t1, t2, t3);
    goto L_088542B8;
L_088542B8:;
    a1 = D_08B28DC0 - (-29248);
    v0 = D_08AF24C0 - (9408);
    v1 = LD32(a1-29248);
    v0 = v0 + 9408;
    ST32(s0, v0);
    a0 = s0 + 0;
    v1 = v1 - 1;
    ST32(a1-29248, v1);
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088542DC;
L_088542DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088542EC */
rv_t func_088542EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088542EC:;
    v0 = D_08AF2308 - (8968);
    v0 = v0 + 8968;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DC4 - (-29244);
    a1 = s0 + 0;
    a0 = a0 - 29244;
    func_08AAAB64(a0, a1, t1, t2, t3);
    goto L_08854318;
L_08854318:;
    a1 = D_08B28DC0 - (-29248);
    v0 = D_08AF24C0 - (9408);
    v1 = LD32(a1-29248);
    v0 = v0 + 9408;
    ST32(s0, v0);
    v1 = v1 - 1;
    a0 = s0 + 0;
    ST32(a1-29248, v1);
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885433C;
L_0885433C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08854344;
L_08854344:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854354 */
void func_08854354(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08854354:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 112;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854378;
L_08854378:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_088541A4(a0, a1);
    goto L_08854388;
L_08854388:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_088543AC; }
    goto L_08854394;
L_08854394:;
    sp = sp + 64;
    return;
L_088543AC:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088543FC;
L_088543FC:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08854394;
}

/* 0885440C */
rv_t func_0885440C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0885440C:;
    sp = sp - 64;
    s2 = a1 + 0;
    a1 = sp + 4;
    s3 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885443C;
L_0885443C:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_088563F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854448;
L_08854448:;
    v1 = LD32(sp+4);
    v0 = 6;
    cnd_ = v1 == v0;
    v0 = 5;
    if (cnd_) { goto L_08854600; }
    goto L_08854458;
L_08854458:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = s3 + 64; goto L_08854530; }
    goto L_08854460;
L_08854460:;
    v0 = D_08AEBC20 - (-17376);
    goto L_08854464;
L_08854464:;
    f0 = BITSF(LD32(v0-17376));
    f1 = BITSF(LD32(s3+64));
    v0 = D_08AEBC24 - (-17372);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-17372));
    v1 = LD32(s3+28);
    f1 = f1 * f0;
    v1 = (v1 >> 13) & 0x1;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {v[0]=0.63661977236f;}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    cnd_ = v1 != 0;
    ST32(s3+60, v0);
    if (cnd_) { goto L_088544D0; }
    goto L_088544B0;
L_088544B0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088544D0:;
    s2 = D_08B28DC4 - (-29244);
    s1 = s2 - 29244;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088544F0;
L_088544F0:;
    a0 = LD32(s2-29244);
    a2 = D_08B28DC0 - (-29248);
    s0 = s0 << 2;
    s0 = s0 + a0;
    v1 = LD32(s1+12);
    a0 = LD32(a2-29248);
    a1 = LD32(s0);
    v1 = v1 + 1;
    a0 = a0 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(a2-29248, a0);
    ST32(s0, v0);
    ST32(v0, s3);
    ST8(v0+8, 0);
    goto L_088544B0;
L_08854530:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854538;
L_08854538:;
    a1 = s3 + 72;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854544;
L_08854544:;
    ST32(s3+68, 0);
    a1 = s3 + 76;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854554;
L_08854554:;
    v1 = LD32(s3+76);
    v0 = (v1 >> 1) & 0x3;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08854590; }
    goto L_08854564;
L_08854564:;
    s0 = s3 + 104;
    goto L_08854568;
L_08854568:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08854574;
L_08854574:;
    v1 = LD32(s3+76);
    s1 = s1 + 1;
    v0 = (v1 >> 1) & 0x3;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08854568; }
    goto L_0885458C;
L_0885458C:;
    v0 = (v1 >> 1) & 0x3;
    goto L_08854590;
L_08854590:;
    v0 = 0 - v0;
    s1 = v0 & 0x3;
    cnd_ = s1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088545C4; }
    goto L_088545A0;
L_088545A0:;
    s4 = sp + 1;
    a0 = s2 + 0;
    goto L_088545A8;
L_088545A8:;
    a1 = s4 + 0;
    s0 = s0 + 1;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088545B4;
L_088545B4:;
    v1 = s0 < s1;
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088545A8; }
    goto L_088545C0;
L_088545C0:;
    v1 = LD32(s3+76);
    goto L_088545C4;
L_088545C4:;
    v0 = (v1 >> 1) & 0x3;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08854460; }
    goto L_088545D0;
L_088545D0:;
    s0 = s3 + 80;
    goto L_088545D4;
L_088545D4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088545E0;
L_088545E0:;
    v1 = LD32(s3+76);
    s1 = s1 + 1;
    v1 = (v1 >> 1) & 0x3;
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_088545D4; }
    goto L_088545F8;
L_088545F8:;
    v0 = D_08AEBC20 - (-17376);
    goto L_08854464;
L_08854600:;
    a1 = s3 + 64;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885460C;
L_0885460C:;
    a1 = s3 + 68;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854618;
L_08854618:;
    a0 = v0 + 0;
    a1 = s3 + 72;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854624;
L_08854624:;
    a1 = s3 + 76;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854630;
L_08854630:;
    v1 = LD32(s3+76);
    v0 = (v1 >> 1) & 0x3;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0885466C; }
    goto L_08854640;
L_08854640:;
    s0 = s3 + 104;
    goto L_08854644;
L_08854644:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08854650;
L_08854650:;
    v1 = LD32(s3+76);
    s1 = s1 + 1;
    v0 = (v1 >> 1) & 0x3;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08854644; }
    goto L_08854668;
L_08854668:;
    v0 = (v1 >> 1) & 0x3;
    goto L_0885466C;
L_0885466C:;
    v0 = 0 - v0;
    s1 = v0 & 0x3;
    cnd_ = s1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088546B8; }
    goto L_0885467C;
L_0885467C:;
    v0 = (v1 >> 1) & 0x3;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08854460; }
    goto L_08854688;
L_08854688:;
    s0 = s3 + 80;
    goto L_0885468C;
L_0885468C:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854698;
L_08854698:;
    v1 = LD32(s3+76);
    s1 = s1 + 1;
    v1 = (v1 >> 1) & 0x3;
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0885468C; }
    goto L_088546B0;
L_088546B0:;
    v0 = D_08AEBC20 - (-17376);
    goto L_08854464;
L_088546B8:;
    a0 = s2 + 0;
    goto L_088546BC;
L_088546BC:;
    a1 = sp + 0;
    s0 = s0 + 1;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088546C8;
L_088546C8:;
    v1 = s0 < s1;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088546BC; }
    goto L_088546D4;
L_088546D4:;
    v1 = LD32(s3+76);
    goto L_0885467C;
}

/* 088546DC */
rv_t func_088546DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088546DC:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = 6;
    s3 = a0 + 0;
    a0 = s2 + 0;
    s1 = 0 + 0;
    s0 = s3 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854714;
L_08854714:;
    a1 = s2 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_08856460(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854720;
L_08854720:;
    f12 = BITSF(LD32(s3+64));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885472C;
L_0885472C:;
    f12 = BITSF(LD32(s3+68));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854738;
L_08854738:;
    f12 = BITSF(LD32(s3+72));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854744;
L_08854744:;
    a1 = LD32(s3+76);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854750;
L_08854750:;
    v0 = LD32(s0+104);
    s1 = s1 + 1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08854814; }
    goto L_08854764;
L_08854764:;
    v0 = s1 < 0x2u;
    goto L_08854768;
L_08854768:;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08854750; }
    goto L_08854770;
L_08854770:;
    v0 = LD32(s3+76);
    v0 = (v0 >> 1) & 0x3;
    v0 = 0 - v0;
    s1 = v0 & 0x3;
    cnd_ = s1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088547F0; }
    goto L_08854788;
L_08854788:;
    s1 = s3 + 104;
    goto L_0885478C;
L_0885478C:;
    s4 = 0 + 0;
    s0 = s3 + 80;
    v0 = LD32(s1);
    goto L_08854798;
L_08854798:;
    a1 = s0 + 0;
    s4 = s4 + 1;
    v0 = v0 & 0x1;
    s1 = s1 + 4;
    s0 = s0 + 12;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088547E0; }
    goto L_088547B4;
L_088547B4:;
    v0 = s4 < 0x2u;
    goto L_088547B8;
L_088547B8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08854798; }
    goto L_088547C0;
L_088547C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088547E0:;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088547E8;
L_088547E8:;
    v0 = s4 < 0x2u;
    goto L_088547B8;
L_088547F0:;
    a0 = s2 + 0;
    goto L_088547F4;
L_088547F4:;
    a1 = 0 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_0882DB10(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854800;
L_08854800:;
    v1 = s0 < s1;
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088547F4; }
    goto L_0885480C;
L_0885480C:;
    s1 = s3 + 104;
    goto L_0885478C;
L_08854814:;
    a1 = LD_U8(s0+104);
    { rv_t r_ = func_0882DB10(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885481C;
L_0885481C:;
    v0 = s1 < 0x2u;
    goto L_08854768;
}

/* 08854824 */
u32 func_08854824(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08854824:;
    v0 = a0 + 32;
    f4 = BITSF(LD32(a1+8));
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0+32));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(a1+4));
    f0 = f0 - f1;
    f4 = f4 - f5;
    sp = sp - 112;
    f2 = f2 - f3;
    f1 = BITSF(LD32(a0+68));
    ST32(sp, FBITS(f0));
    a1 = 0 + 0;
    f1 = f1 * f1;
    ST32(sp+8, FBITS(f4));
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+4, FBITS(f2));
    {v[112]=BITSF(LD32(a0+(48)));}
    {v[113]=BITSF(LD32(a0+(52)));}
    {v[114]=BITSF(LD32(a0+(56)));}
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
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {v[32]=BITSF(v0);}
    a2 = LD32(sp);
    v0 = LD32(sp+24);
    {v[33]=BITSF(v1);}
    a3 = LD32(sp+8);
    {v[34]=BITSF(v0);}
    v1 = LD32(sp+28);
    v0 = LD32(sp+32);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(a2);}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {v[17]=BITSF(a1);}
    {v[32]=BITSF(v1);}
    {v[18]=BITSF(a3);}
    {v[33]=BITSF(v0);}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[16]=sum;}
    {v0=FBITS(v[16]);}
    f0 = BITSF(v0);
    v1 = LD32(sp+36);
    f3 = BITSF(v0);
    {v[34]=BITSF(v1);}
    v0 = LD32(sp+40);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+44);
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    fcc = FCMP(f0, f1, 12);
    {v[32]=BITSF(v0);}
    {v[36]=BITSF(a1);}
    v0 = LD32(sp+48);
    {v[33]=BITSF(v1);}
    {v[37]=BITSF(a1);}
    {v[34]=BITSF(v0);}
    v0 = 0x3f800000u;
    {v[38]=BITSF(v0);}
    v0 = D_08AEBC28 - (-17368);
    f0 = BITSF(LD32(v0-17368));
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f0));
    {v0=FBITS(v[17]);}
    ST32(sp+80, 0);
    ST32(sp+100, v0);
    v0 = 0 + 0;
    ST32(sp+84, 0);
    ST32(sp+96, FBITS(f2));
    ST32(sp+104, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f4));
    ST32(sp+4, 0);
    cnd_ = fcc;
    ST32(sp+68, 0);
    if (cnd_) { goto L_08854A38; }
    goto L_088549E4;
L_088549E4:;
    f3 = sqrtf(f3);
    f1 = BITSF(LD32(a0+60));
    v0 = FBITS(f2);
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[4]=BITSF(a2);}
    {v[0]=BITSF(v0);}
    {v[5]=BITSF(a1);}
    v0 = FBITS(f4);
    {v[1]=BITSF(a1);}
    {v[6]=BITSF(a3);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    f1 = f1 * f3;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08854A38; }
    goto L_08854A34;
L_08854A34:;
    v0 = 1;
    goto L_08854A38;
L_08854A38:;
    sp = sp + 112;
    return v0;
}

/* 08854A40 */
rv_t func_08854A40(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08854A40:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08854AC0; }
    goto L_08854A74;
L_08854A74:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08854A98; }
    goto L_08854A88;
L_08854A88:;
    v0 = D_08B28DC4 - (-29244);
    a0 = LD32(v0-29244);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08854AB0; }
    goto L_08854A98;
L_08854A98:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08854AB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08854AB8;
L_08854AB8:;
    goto L_08854A98;
L_08854AC0:;
    s3 = D_08B28DC4 - (-29244);
    s0 = s3 - 29244;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854AD8;
L_08854AD8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29244, v0);
    if (cnd_) { goto L_08854B04; }
    goto L_08854AE8;
L_08854AE8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08854AF0;
L_08854AF0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08854AF0; }
    goto L_08854B04;
L_08854B04:;
    v0 = s3 - 29244;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08854A74;
}

/* 08854B14 */
rv_t func_08854B14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854B14:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08854A40(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854B28;
L_08854B28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854B34 */
rv_t func_08854B34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854B34:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08854A40(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854B48;
L_08854B48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854B54 */
void func_08854B54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854B54:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08855594(a0, a1);
    goto L_08854B68;
L_08854B68:;
    t1 = 999;
    ST32(s0+140, t1);
    a1 = D_08B25AC0 - (23232);
    a3 = a1 + 23232;
    ST32(s0+136, 0);
    a2 = D_08AF2368 - (9064);
    a2 = a2 + 9064;
    ST32(s0+144, 0);
    t0 = a2 + 104;
    ST32(s0+156, 0);
    v1 = LD32(a1+23232);
    a0 = LD32(a3+4);
    ST32(s0+60, t0);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBC40 - (-17344);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-17344));
    v0 = D_08AEBC3C - (-17348);
    ST32(a3+4, a0);
    f1 = f1 * f0;
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-17348));
    v0 = D_08AEBC38 - (-17352);
    ST32(a1+23232, v1);
    f1 = f1 * f0;
    a1 = 0 + 0;
    f0 = BITSF(LD32(v0-17352));
    v0 = 58;
    ST32(s0+160, FBITS(f1));
    ST32(s0+152, FBITS(f0));
    ST32(s0+168, t1);
    ST16(s0+8, v0);
    ST32(s0, a2);
    ST32(s0+148, 0);
    ST32(s0+164, 0);
    { rv_t r_ = func_08874390(a0, a1, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854C10;
L_08854C10:;
    sp = sp + 16;
    return;
}

/* 08854C20 */
rv_t func_08854C20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854C20:;
    v0 = D_08AF2368 - (9064);
    v0 = v0 + 9064;
    a1 = v0 + 104;
    ST32(a0+60, a1);
    sp = sp - 16;
    ST32(a0, v0);
    { u64 r_ = func_08855754(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08854C44;
L_08854C44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854C50 */
rv_t func_08854C50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854C50:;
    v0 = D_08AF2368 - (9064);
    v0 = v0 + 9064;
    v1 = v0 + 104;
    ST32(a0+60, v1);
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    { u64 r_ = func_08855754(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08854C78;
L_08854C78:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08854C80;
L_08854C80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854C90 */
rv_t func_08854C90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854C90:;
    sp = sp - 16;
    v0 = 65;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = 1;
    if (cnd_) { goto L_08854CC4; }
    goto L_08854CA8;
L_08854CA8:;
    { rv_t r_ = func_08855908(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854CB0;
L_08854CB0:;
    a3 = v0 + 0;
    goto L_08854CB8;
L_08854CB8:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08854CC4:;
    v0 = LD32(a0+156);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08854CB8; }
    goto L_08854CD4;
L_08854CD4:;
    v1 = LD32(a0+28);
    v0 = 999;
    ST32(a0+168, v0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+28, v1);
    goto L_08854CB8;
}

/* 08854CEC */
rv_t func_08854CEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854CEC:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1+84);
    t_ = a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854D04;
L_08854D04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854D10 */
rv_t func_08854D10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08854D10:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1+88);
    t_ = a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854D28;
L_08854D28:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08854D34 */
rv_t func_08854D34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08854D34:;
    sp = sp - 32;
    v0 = LD32(a0+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08854D8C; }
    goto L_08854D58;
L_08854D58:;
    a2 = LD32(a0+168);
    v0 = a2 ^ 0x3e7;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08B28EF4 - (-28940); goto L_08854E1C; }
    goto L_08854D68;
L_08854D68:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+160));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    ST32(a0+160, FBITS(f0));
    if (cnd_) { goto L_08854DA4; }
    goto L_08854D8C;
L_08854D8C:;
    goto L_08854D90;
L_08854D90:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08854DA4:;
    v0 = LD32(a0);
    v1 = LD32(v0+84);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854DB4;
L_08854DB4:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBC44 - (-17340);
    f3 = BITSF(LD32(v0-17340));
    v0 = D_08AEBC48 - (-17336);
    f1 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(v0-17336));
    v0 = D_08AEBC4C - (-17332);
    f0 = BITSF(LD32(v0-17332));
    f2 = f2 - f3;
    a0 = a0 + v1;
    f1 = f1 * f0;
    ST32(a2+4, a0);
    f1 = f1 * f2;
    ST32(a1+23232, v1);
    f1 = f1 + f3;
    ST32(s1+160, FBITS(f1));
    goto L_08854D8C;
L_08854E1C:;
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 28940;
    if (cnd_) { goto L_08854D8C; }
    goto L_08854E28;
L_08854E28:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28940);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08854E78; }
    goto L_08854E4C;
L_08854E4C:;
    a0 = LD32(a1);
    goto L_08854E50;
L_08854E50:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08854F08; }
    goto L_08854E68;
L_08854E68:;
    a1 = LD32(a1+4);
    goto L_08854E6C;
L_08854E6C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08854E50; }
    goto L_08854E74;
L_08854E74:;
    s2 = 0 + 0;
    goto L_08854E78;
L_08854E78:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08854D90; }
    goto L_08854E80;
L_08854E80:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s1 + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854E94;
L_08854E94:;
    f1 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+32));
    f2 = BITSF(LD32(s0+4));
    f5 = BITSF(LD32(v0+8));
    f0 = f0 - f1;
    f2 = f2 - f3;
    f1 = BITSF(LD32(s0+8));
    v0 = D_08AEBC50 - (-17328);
    f3 = f0 * f0;
    f1 = f1 - f5;
    f4 = f2 * f2;
    ST32(sp, FBITS(f0));
    f5 = f1 * f1;
    f3 = f3 + f4;
    f0 = BITSF(LD32(v0-17328));
    ST32(sp+4, FBITS(f2));
    f3 = f3 + f5;
    fcc = FCMP(f3, f0, 12);
    cnd_ = fcc;
    ST32(sp+8, FBITS(f1));
    if (cnd_) { goto L_08854D8C; }
    goto L_08854EEC;
L_08854EEC:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854F00;
L_08854F00:;
    goto L_08854D90;
L_08854F08:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08854E68; }
    goto L_08854F14;
L_08854F14:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08854E6C; }
    goto L_08854F20;
L_08854F20:;
    goto L_08854E78;
}

/* 08854F28 */
void func_08854F28(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08854F28:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 172;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854F4C;
L_08854F4C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08854B54(a0, a1);
    goto L_08854F5C;
L_08854F5C:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08854F80; }
    goto L_08854F68;
L_08854F68:;
    sp = sp + 64;
    return;
L_08854F80:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08854FD0;
L_08854FD0:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08854F68;
}

/* 08854FE0 */
rv_t func_08854FE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08854FE0:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855004;
L_08855004:;
    v0 = 2;
    v1 = LD32(sp);
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088550E4; }
    goto L_08855018;
L_08855018:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08855088; }
    goto L_08855024;
L_08855024:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08855040; }
    goto L_0885502C;
L_0885502C:;
    goto L_08855030;
L_08855030:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08855040:;
    { rv_t r_ = func_08855A54(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855048;
L_08855048:;
    a0 = s0 + 0;
    a1 = s1 + 136;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855054;
L_08855054:;
    a1 = s1 + 140;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855060;
L_08855060:;
    a1 = s1 + 144;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885506C;
L_0885506C:;
    a1 = s1 + 148;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855078;
L_08855078:;
    v1 = D_08AEBC54 - (-17324);
    f0 = BITSF(LD32(v1-17324));
    ST32(s1+152, FBITS(f0));
    goto L_0885502C;
L_08855088:;
    { rv_t r_ = func_08855A54(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855090;
L_08855090:;
    a0 = s0 + 0;
    a1 = s1 + 136;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885509C;
L_0885509C:;
    a1 = s1 + 140;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088550A8;
L_088550A8:;
    a1 = s1 + 144;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088550B4;
L_088550B4:;
    a1 = s1 + 148;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088550C0;
L_088550C0:;
    v0 = D_08AEBC54 - (-17324);
    f0 = BITSF(LD32(v0-17324));
    a1 = s1 + 156;
    a0 = s0 + 0;
    ST32(s1+152, FBITS(f0));
    goto L_088550D4;
L_088550D4:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088550DC;
L_088550DC:;
    goto L_08855030;
L_088550E4:;
    { rv_t r_ = func_08855A54(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088550EC;
L_088550EC:;
    a1 = s1 + 136;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088550F8;
L_088550F8:;
    a1 = s1 + 140;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855104;
L_08855104:;
    a1 = s1 + 144;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855110;
L_08855110:;
    a1 = s1 + 148;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885511C;
L_0885511C:;
    a1 = s1 + 152;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855128;
L_08855128:;
    a1 = s1 + 156;
    a0 = s0 + 0;
    goto L_088550D4;
}

/* 08855134 */
rv_t func_08855134(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855134:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855158;
L_08855158:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08855B24(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855164;
L_08855164:;
    a1 = LD32(s1+136);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855170;
L_08855170:;
    a1 = LD32(s1+140);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885517C;
L_0885517C:;
    a1 = LD32(s1+144);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855188;
L_08855188:;
    f12 = BITSF(LD32(s1+148));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855194;
L_08855194:;
    f12 = BITSF(LD32(s1+152));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088551A0;
L_088551A0:;
    a1 = LD32(s1+156);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088551AC;
L_088551AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088551C0 */
rv_t func_088551C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088551C0:;
    sp = sp - 32;
    v1 = LD32(a0+136);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08855324; }
    goto L_088551DC;
L_088551DC:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+164); goto L_088551FC; }
    goto L_088551E8;
L_088551E8:;
    goto L_088551EC;
L_088551EC:;
    goto L_088551F0;
L_088551F0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088551FC:;
    v0 = v0 + 1;
    v1 = v0 < 0x4u;
    cnd_ = v1 != 0;
    ST32(a0+164, v0);
    if (cnd_) { goto L_08855210; }
    goto L_0885520C;
L_0885520C:;
    ST32(a0+164, 0);
    goto L_08855210;
L_08855210:;
    a2 = D_08B28EF4 - (-28940);
    v0 = a2 - 28940;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08855288; }
    goto L_0885523C;
L_0885523C:;
    a2 = LD32(a2-28940);
    a3 = a1 + 0;
    goto L_08855244;
L_08855244:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08855278; }
    goto L_0885525C;
L_0885525C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_0885528C; }
    goto L_0885526C;
L_0885526C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0885525C; }
    goto L_08855278;
L_08855278:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08855244; }
    goto L_08855288;
L_08855288:;
    s0 = LD32(sp+8);
    goto L_0885528C;
L_0885528C:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088552B8; }
    goto L_08855294;
L_08855294:;
    a0 = LD32(sp);
    goto L_08855298;
L_08855298:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088551E8; }
    goto L_088552A8;
L_088552A8:;
    { u64 r_ = func_08AAADB4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088552B0;
L_088552B0:;
    goto L_088551EC;
L_088552B8:;
    a0 = sp + 0;
    a1 = 1;
    func_08AAAD10(a0, a1);
    goto L_088552C4;
L_088552C4:;
    v0 = LD32(s0);
    a1 = s0 + 0;
    a2 = LD32(s1+164);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    v0 = LD32(s0+4);
    v0 = v0 & 0x3;
    cnd_ = v0 == a2;
    a0 = s1 + 0;
    if (cnd_) { goto L_088552FC; }
    goto L_088552E8;
L_088552E8:;
    s0 = LD32(sp+8);
    goto L_088552EC;
L_088552EC:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088552B8; }
    goto L_088552F4;
L_088552F4:;
    a0 = LD32(sp);
    goto L_08855298;
L_088552FC:;
    v0 = LD32(s1);
    v1 = LD32(v0+92);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885530C;
L_0885530C:;
    v0 = LD32(s1+168);
    v0 = v0 ^ 0x3e7;
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_088552EC; }
    goto L_0885531C;
L_0885531C:;
    a0 = LD32(sp);
    goto L_08855298;
L_08855324:;
    v0 = D_08B28DD4 - (-29228);
    v0 = LD32(v0-29228);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+140); goto L_0885534C; }
    goto L_08855334;
L_08855334:;
    a0 = LD32(a0+140);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855340;
L_08855340:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088551EC; }
    goto L_08855348;
L_08855348:;
    a1 = LD32(s1+140);
    goto L_0885534C;
L_0885534C:;
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    a2 = 1;
    { u64 r_ = func_08AAAC7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885535C;
L_0885535C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088551EC; }
    goto L_08855364;
L_08855364:;
    f1 = BITSF(LD32(v0+40));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_088551F0; }
    goto L_0885537C;
L_0885537C:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855390;
L_08855390:;
    goto L_088551EC;
}

/* 08855398 */
rv_t func_08855398(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08855398:;
    sp = sp - 48;
    f0 = BITSF(0);
    s1 = a1 + 0;
    f1 = BITSF(LD32(a1+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_088554C0; }
    goto L_088553C4;
L_088553C4:;
    v0 = LD32(s0+144);
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_0885544C; }
    goto L_088553D0;
L_088553D0:;
    v1 = LD32(a1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088553E0;
L_088553E0:;
    v1 = s0 + 32;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s0+32));
    f6 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(s0+148));
    f2 = f2 - f0;
    f4 = f4 - f6;
    f3 = f3 - f1;
    f5 = f5 * f5;
    v0 = FBITS(f2);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
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
    if (cnd_) { goto L_088554C0; }
    goto L_0885544C;
L_0885544C:;
    a0 = 63;
    a1 = 28;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855460;
L_08855460:;
    cnd_ = v0 == 0;
    a3 = s0 + 32;
    if (cnd_) { goto L_088554C0; }
    goto L_08855468;
L_08855468:;
    v1 = LD32(v0+24);
    a0 = s0 + 0;
    a1 = v0 + 0;
    cnd_ = v1 == 0;
    a2 = v1 + 8;
    if (cnd_) { goto L_088554C0; }
    goto L_0885547C;
L_0885547C:;
    v0 = LD32(s0+4);
    f0 = BITSF(LD32(a3+4));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(s0+32));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(v1+4, v0);
    ST32(v1+8, FBITS(f2));
    v0 = LD32(s0+144);
    f0 = BITSF(LD32(s0+152));
    ST32(v1+20, v0);
    ST32(v1+24, FBITS(f0));
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088554C0;
L_088554C0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088554D4 */
rv_t func_088554D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088554D4:;
    sp = sp - 16;
    v0 = 999;
    s1 = a0 + 0;
    a2 = 1;
    v1 = LD32(a0+168);
    a0 = D_08B28EF4 - (-28940);
    a0 = a0 - 28940;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0885553C; }
    goto L_08855504;
L_08855504:;
    { u64 r_ = func_08AAAC7C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885550C;
L_0885550C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08855534; }
    goto L_08855514;
L_08855514:;
    f1 = BITSF(LD32(v0+40));
    f0 = BITSF(0);
    a0 = 64;
    a1 = 8;
    fcc = FCMP(f1, f0, 14);
    a2 = 0 + 0;
    cnd_ = !fcc;
    a3 = 0 + 0;
    if (cnd_) { goto L_08855550; }
    goto L_08855534;
L_08855534:;
    v0 = 999;
    goto L_08855538;
L_08855538:;
    ST32(s1+168, v0);
    goto L_0885553C;
L_0885553C:;
    goto L_08855540;
L_08855540:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08855550:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855558;
L_08855558:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08855540; }
    goto L_08855560;
L_08855560:;
    v1 = LD32(v0+24);
    a1 = v0 + 0;
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08855540; }
    goto L_08855570;
L_08855570:;
    v0 = LD32(s1+4);
    ST32(v1+4, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885558C;
L_0885558C:;
    v0 = 999;
    goto L_08855538;
}

/* 08855594 */
void func_08855594(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08855594:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = D_08B28DD8 - (-29224);
    s2 = s3 - 29224;
    func_08856288(a0, a1);
    goto L_088555BC;
L_088555BC:;
    a0 = s1 + 60;
    func_088583A8(a0);
    goto L_088555C4;
L_088555C4:;
    v0 = 999;
    ST32(s1+128, v0);
    v0 = D_08AEBC58 - (-17320);
    v1 = D_08AF23E8 - (9192);
    ST32(s1+104, 0);
    v1 = v1 + 9192;
    a0 = v1 + 92;
    ST32(s1+124, 0);
    a2 = (u32)-1;
    f0 = BITSF(LD32(v0-17320));
    a1 = LD32(s2+4);
    v0 = 55;
    ST32(s1+60, a0);
    a1 = a1 - 1;
    a0 = 12;
    ST32(s1+112, FBITS(f0));
    ST16(s1+134, a2);
    ST32(s1, v1);
    ST32(s1+108, FBITS(f0));
    ST16(s1+132, a2);
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    s0 = s0 & a1;
    ST32(s1+116, 0);
    s0 = s0 << 2;
    ST32(s1+120, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855630;
L_08855630:;
    a0 = LD32(s3-29224);
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

/* 08855674 */
void func_08855674(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08855674:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = D_08B28DD8 - (-29224);
    s2 = s3 - 29224;
    func_08856288(a0, a1);
    goto L_0885569C;
L_0885569C:;
    a0 = s1 + 60;
    func_088583A8(a0);
    goto L_088556A4;
L_088556A4:;
    v0 = 999;
    ST32(s1+128, v0);
    v0 = D_08AEBC5C - (-17316);
    v1 = D_08AF23E8 - (9192);
    ST32(s1+104, 0);
    v1 = v1 + 9192;
    a0 = v1 + 92;
    ST32(s1+124, 0);
    a2 = (u32)-1;
    f0 = BITSF(LD32(v0-17316));
    a1 = LD32(s2+4);
    v0 = 55;
    ST32(s1+60, a0);
    a1 = a1 - 1;
    a0 = 12;
    ST32(s1+112, FBITS(f0));
    ST16(s1+134, a2);
    ST32(s1, v1);
    ST32(s1+108, FBITS(f0));
    ST16(s1+132, a2);
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    s0 = s0 & a1;
    ST32(s1+116, 0);
    s0 = s0 << 2;
    ST32(s1+120, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855710;
L_08855710:;
    a0 = LD32(s3-29224);
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

/* 08855754 */
u64 func_08855754(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855754:;
    sp = sp - 16;
    a1 = D_08B28DD8 - (-29224);
    s1 = a1 - 29224;
    s0 = a0 + 0;
    v0 = LD32(s1+4);
    v1 = LD32(a0+4);
    a0 = LD32(a1-29224);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    v0 = D_08AF23E8 - (9192);
    a0 = LD32(a0);
    v0 = v0 + 9192;
    v1 = v0 + 92;
    ST32(s0+60, v1);
    v1 = 0 + 0;
    cnd_ = a0 == 0;
    ST32(s0, v0);
    if (cnd_) { goto L_088557C8; }
    goto L_088557AC;
L_088557AC:;
    v0 = LD32(a0);
    goto L_088557B0;
L_088557B0:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_088557F8; }
    goto L_088557B8;
L_088557B8:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088557B0; }
    goto L_088557C8;
L_088557C8:;
    a0 = s0 + 60;
    func_088583F4(a0);
    goto L_088557D0;
L_088557D0:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088557E4;
L_088557E4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088557F8:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08855808; }
    goto L_08855800;
L_08855800:;
    ST8(a0+8, v0);
    goto L_088557C8;
L_08855808:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08855830; }
    goto L_08855810;
L_08855810:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_08855818;
L_08855818:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855820;
L_08855820:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_088557C8;
L_08855830:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_08855818;
}

/* 08855840 */
rv_t func_08855840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855840:;
    v0 = D_08AF23E8 - (9192);
    v0 = v0 + 9192;
    v1 = v0 + 92;
    sp = sp - 16;
    ST32(a0+60, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DD8 - (-29224);
    a1 = s0 + 0;
    a0 = a0 - 29224;
    func_08AAAEF0(a0, a1, t1, t2, t3);
    goto L_08855874;
L_08855874:;
    a0 = s0 + 60;
    func_088583F4(a0);
    goto L_0885587C;
L_0885587C:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855890;
L_08855890:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088558A0 */
rv_t func_088558A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088558A0:;
    v0 = D_08AF23E8 - (9192);
    v0 = v0 + 9192;
    v1 = v0 + 92;
    sp = sp - 16;
    ST32(a0+60, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DD8 - (-29224);
    a1 = s0 + 0;
    a0 = a0 - 29224;
    func_08AAAEF0(a0, a1, t1, t2, t3);
    goto L_088558D4;
L_088558D4:;
    a0 = s0 + 60;
    func_088583F4(a0);
    goto L_088558DC;
L_088558DC:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088558F0;
L_088558F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088558F8;
L_088558F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08855908 */
rv_t func_08855908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855908:;
    sp = sp - 16;
    v0 = 76;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 77;
    if (cnd_) { goto L_08855958; }
    goto L_08855920;
L_08855920:;
    cnd_ = v0 == 0;
    v0 = 81;
    if (cnd_) { goto L_08855980; }
    goto L_08855928;
L_08855928:;
    v0 = 59;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+104); goto L_08855950; }
    goto L_08855934;
L_08855934:;
    { rv_t r_ = func_088589D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885593C;
L_0885593C:;
    v1 = v0 + 0;
    goto L_08855940;
L_08855940:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08855950:;
    v0 = v0 | 0x40;
    ST32(a0+104, v0);
    goto L_08855958;
L_08855958:;
    v1 = LD32(a0+128);
    v0 = 999;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08855978; }
    goto L_08855968;
L_08855968:;
    a2 = LD32(a0+4);
    a0 = a1 + 0;
    a1 = v1 + 0;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855978;
L_08855978:;
    v1 = 1;
    goto L_08855940;
L_08855980:;
    cnd_ = v1 != v0;
    v1 = 1;
    if (cnd_) { goto L_08855934; }
    goto L_08855988;
L_08855988:;
    v0 = LD32(a0+104);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    v0 = v0 | 0x80;
    ST32(a0+104, v0);
    goto L_08855940;
}

/* 0885599C */
void func_0885599C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0885599C:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 136;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088559C0;
L_088559C0:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08855674(a0, a1);
    goto L_088559D0;
L_088559D0:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_088559F4; }
    goto L_088559DC;
L_088559DC:;
    sp = sp + 64;
    return;
L_088559F4:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855A44;
L_08855A44:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_088559DC;
}

/* 08855A54 */
rv_t func_08855A54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08855A54:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855A78;
L_08855A78:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088563F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855A84;
L_08855A84:;
    a0 = s1 + 60;
    a1 = s0 + 0;
    { rv_t r_ = func_088584A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855A90;
L_08855A90:;
    v0 = LD32(sp);
    a1 = s1 + 104;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08855AB4; }
    goto L_08855AA0;
L_08855AA0:;
    goto L_08855AA4;
L_08855AA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08855AB4:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855ABC;
L_08855ABC:;
    a1 = s1 + 108;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855AC8;
L_08855AC8:;
    a1 = s1 + 112;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855AD4;
L_08855AD4:;
    a1 = s1 + 116;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855AE0;
L_08855AE0:;
    a1 = s1 + 120;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855AEC;
L_08855AEC:;
    a1 = s1 + 124;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855AF8;
L_08855AF8:;
    a1 = s1 + 128;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B04;
L_08855B04:;
    a1 = s1 + 132;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B10;
L_08855B10:;
    a1 = s1 + 134;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B1C;
L_08855B1C:;
    goto L_08855AA4;
}

/* 08855B24 */
rv_t func_08855B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855B24:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B48;
L_08855B48:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08856460(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B54;
L_08855B54:;
    a0 = s1 + 60;
    a1 = s0 + 0;
    { rv_t r_ = func_08858404(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B60;
L_08855B60:;
    a1 = LD32(s1+104);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B6C;
L_08855B6C:;
    f12 = BITSF(LD32(s1+108));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B78;
L_08855B78:;
    f12 = BITSF(LD32(s1+112));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B84;
L_08855B84:;
    f12 = BITSF(LD32(s1+116));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B90;
L_08855B90:;
    f12 = BITSF(LD32(s1+120));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855B9C;
L_08855B9C:;
    a1 = LD32(s1+124);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855BA8;
L_08855BA8:;
    a1 = LD32(s1+128);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855BB4;
L_08855BB4:;
    a1 = LD_U16(s1+132);
    a0 = s0 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855BC0;
L_08855BC0:;
    a1 = LD_U16(s1+134);
    a0 = s0 + 0;
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855BCC;
L_08855BCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08855BE0 */
void func_08855BE0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855BE0:;
    sp = sp - 16;
    a3 = a0 + 0;
    v1 = a1 + 0;
    a2 = LD_U16(a0+132);
    v0 = 0xffff;
    a0 = D_08B29170 - (-28304);
    f12 = BITSF(0);
    a0 = a0 - 28304;
    a1 = a2 + 0;
    cnd_ = a2 == v0;
    ST32(a3+128, v1);
    if (cnd_) { goto L_08855C18; }
    goto L_08855C10;
L_08855C10:;
    a2 = LD32(a3+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855C18;
L_08855C18:;
    sp = sp + 16;
    return;
}

/* 08855C24 */
void func_08855C24(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855C24:;
    sp = sp - 16;
    a3 = a0 + 0;
    v0 = 999;
    a2 = LD_U16(a0+134);
    v1 = 0xffff;
    a0 = D_08B29170 - (-28304);
    f12 = BITSF(0);
    a0 = a0 - 28304;
    a1 = a2 + 0;
    cnd_ = a2 == v1;
    ST32(a3+128, v0);
    if (cnd_) { goto L_08855C5C; }
    goto L_08855C54;
L_08855C54:;
    a2 = LD32(a3+4);
    { rv_t r_ = func_08879DB8(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855C5C;
L_08855C5C:;
    sp = sp + 16;
    return;
}

/* 08855C68 */
float func_08855C68(u32 a0, u32 a1)
{
    u32 t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08855C68:;
    f1 = BITSF(LD32(a0+120));
    f0 = BITSF(LD32(a0+116));
    sp = sp - 64;
    ST32(sp+4, FBITS(f1));
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
    f2 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+24));
    ST32(a1+4, FBITS(f2));
    ST32(a1, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    sp = sp + 64;
    return f0;
}

/* 08855D30 */
rv_t func_08855D30(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08855D30:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08855DB0; }
    goto L_08855D64;
L_08855D64:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08855D88; }
    goto L_08855D78;
L_08855D78:;
    v0 = D_08B28DD8 - (-29224);
    a0 = LD32(v0-29224);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08855DA0; }
    goto L_08855D88;
L_08855D88:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08855DA0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855DA8;
L_08855DA8:;
    goto L_08855D88;
L_08855DB0:;
    s3 = D_08B28DD8 - (-29224);
    s0 = s3 - 29224;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855DC8;
L_08855DC8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29224, v0);
    if (cnd_) { goto L_08855DF4; }
    goto L_08855DD8;
L_08855DD8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08855DE0;
L_08855DE0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08855DE0; }
    goto L_08855DF4;
L_08855DF4:;
    v0 = s3 - 29224;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08855D64;
}

/* 08855E04 */
rv_t func_08855E04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855E04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08855D30(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855E18;
L_08855E18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08855E24 */
rv_t func_08855E24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855E24:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08855D30(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855E38;
L_08855E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08855E44 */
void func_08855E44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08855E44:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = D_08B28DE8 - (-29208);
    s2 = s3 - 29208;
    func_08856288(a0, a1);
    goto L_08855E6C;
L_08855E6C:;
    v0 = D_08AF2460 - (9312);
    ST32(s1+60, 0);
    v0 = v0 + 9312;
    a0 = 12;
    v1 = LD32(s2+4);
    ST32(s1, v0);
    v0 = 63;
    v1 = v1 - 1;
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855E9C;
L_08855E9C:;
    a0 = LD32(s3-29208);
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

/* 08855EE4 */
rv_t func_08855EE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855EE4:;
    v0 = D_08AF2460 - (9312);
    v0 = v0 + 9312;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DE8 - (-29208);
    a1 = s0 + 0;
    a0 = a0 - 29208;
    func_08AAAF98(a0, a1, t1, t2, t3);
    goto L_08855F10;
L_08855F10:;
    v1 = D_08AF24C0 - (9408);
    v1 = v1 + 9408;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855F24;
L_08855F24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08855F34 */
rv_t func_08855F34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855F34:;
    v0 = D_08AF2460 - (9312);
    v0 = v0 + 9312;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B28DE8 - (-29208);
    a1 = s0 + 0;
    a0 = a0 - 29208;
    func_08AAAF98(a0, a1, t1, t2, t3);
    goto L_08855F60;
L_08855F60:;
    v1 = D_08AF24C0 - (9408);
    v1 = v1 + 9408;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855F74;
L_08855F74:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08855F7C;
L_08855F7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08855F8C */
rv_t func_08855F8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08855F8C:;
    sp = sp - 16;
    a3 = a0 + 0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08855FB8; }
    goto L_08855FA0;
L_08855FA0:;
    v1 = LD_U16(a1+16);
    v0 = 72;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a1+24); goto L_08855FC4; }
    goto L_08855FB0;
L_08855FB0:;
    { rv_t r_ = func_088589D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08855FB8;
L_08855FB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08855FC4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08855FB8; }
    goto L_08855FCC;
L_08855FCC:;
    v0 = LD32(v0);
    v1 = v0 & 0x1;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08855FF4; }
    goto L_08855FE0;
L_08855FE0:;
    v0 = LD32(a0+60);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08855FE8;
L_08855FE8:;
    ST32(a3+60, v0);
    v0 = 1;
    goto L_08855FB8;
L_08855FF4:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = 1; goto L_08855FB8; }
    goto L_08855FFC;
L_08855FFC:;
    v0 = LD32(a0+60);
    v0 = v0 | 0x1;
    goto L_08855FE8;
}

/* 08856008 */
void func_08856008(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08856008:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 64;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885602C;
L_0885602C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08855E44(a0, a1);
    goto L_0885603C;
L_0885603C:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08856060; }
    goto L_08856048;
L_08856048:;
    sp = sp + 64;
    return;
L_08856060:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088560B0;
L_088560B0:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08856048;
}

/* 088560C0 */
rv_t func_088560C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088560C0:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088560E4;
L_088560E4:;
    a0 = s1 + 0;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08856108; }
    goto L_088560F4;
L_088560F4:;
    goto L_088560F8;
L_088560F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08856108:;
    { rv_t r_ = func_088563F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856110;
L_08856110:;
    a1 = s1 + 60;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885611C;
L_0885611C:;
    goto L_088560F8;
}

/* 08856124 */
rv_t func_08856124(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08856124:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856148;
L_08856148:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08856460(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856154;
L_08856154:;
    a1 = LD32(s1+60);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856160;
L_08856160:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08856174 */
rv_t func_08856174(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08856174:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088561F4; }
    goto L_088561A8;
L_088561A8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088561CC; }
    goto L_088561BC;
L_088561BC:;
    v0 = D_08B28DE8 - (-29208);
    a0 = LD32(v0-29208);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088561E4; }
    goto L_088561CC;
L_088561CC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088561E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088561EC;
L_088561EC:;
    goto L_088561CC;
L_088561F4:;
    s3 = D_08B28DE8 - (-29208);
    s0 = s3 - 29208;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885620C;
L_0885620C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29208, v0);
    if (cnd_) { goto L_08856238; }
    goto L_0885621C;
L_0885621C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08856224;
L_08856224:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08856224; }
    goto L_08856238;
L_08856238:;
    v0 = s3 - 29208;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_088561A8;
}

/* 08856248 */
rv_t func_08856248(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08856248:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08856174(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885625C;
L_0885625C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08856268 */
rv_t func_08856268(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08856268:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08856174(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885627C;
L_0885627C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08856288 */
void func_08856288(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08856288:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08858628(a0, a1);
    goto L_0885629C;
L_0885629C:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(s0, v0);
    v1 = D_08B25A08 - (23048);
    v0 = v1 + 23048;
    f2 = BITSF(LD32(v1+23048));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s0 + 48;
    v0 = 54;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(s0+48, FBITS(f2));
    ST16(s0+8, v0);
    sp = sp + 16;
    return;
}

/* 088562E4 */
void func_088562E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088562E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08858628(a0, a1);
    goto L_088562F8;
L_088562F8:;
    v0 = D_08AF24C0 - (9408);
    v0 = v0 + 9408;
    ST32(s0, v0);
    v1 = D_08B25A08 - (23048);
    v0 = v1 + 23048;
    f2 = BITSF(LD32(v1+23048));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s0 + 48;
    v0 = 54;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(s0+48, FBITS(f2));
    ST16(s0+8, v0);
    sp = sp + 16;
    return;
}

/* 08856340 */
void func_08856340(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08856340:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 60;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856364;
L_08856364:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_088562E4(a0, a1);
    goto L_08856374;
L_08856374:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08856398; }
    goto L_08856380;
L_08856380:;
    sp = sp + 64;
    return;
L_08856398:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088563E8;
L_088563E8:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08856380;
}

/* 088563F8 */
rv_t func_088563F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088563F8:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885641C;
L_0885641C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08858BD0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856428;
L_08856428:;
    v0 = LD32(sp);
    s0 = s0 + 48;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08856450; }
    goto L_0885643C;
L_0885643C:;
    goto L_08856440;
L_08856440:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08856450:;
    { rv_t r_ = func_0882DD08(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856458;
L_08856458:;
    goto L_08856440;
}

/* 08856460 */
rv_t func_08856460(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08856460:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856484;
L_08856484:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s0 = s0 + 48;
    { rv_t r_ = func_08858B24(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856494;
L_08856494:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DD48(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088564A0;
L_088564A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088564B4 */
void func_088564B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088564B4:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_08857940(a0, a1);
    goto L_088564D4;
L_088564D4:;
    a0 = s3 + 84;
    func_088583A8(a0);
    goto L_088564DC;
L_088564DC:;
    a1 = D_08AF2520 - (9504);
    a1 = a1 + 9504;
    v0 = a1 + 96;
    v1 = 60;
    ST32(s3+84, v0);
    v0 = 999;
    a0 = 7;
    ST16(s3+8, v1);
    ST32(s3, a1);
    ST32(s3+152, v0);
    ST32(s3+128, 0);
    ST32(s3+132, 0);
    ST32(s3+136, 0);
    ST32(s3+140, 0);
    ST32(s3+144, 0);
    ST32(s3+148, 0);
    ST32(s3+156, 0);
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856524;
L_08856524:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885652C;
L_0885652C:;
    s1 = v0 + 0;
    ST32(v0, 0);
    v0 = D_08AEBC6C - (-17300);
    f14 = BITSF(0);
    f12 = BITSF(LD32(v0-17300));
    v0 = D_08AEBC70 - (-17296);
    ST32(s1+4, 0);
    a0 = s1 + 0;
    a1 = 16;
    f15 = BITSF(LD32(v0-17296));
    ST32(s1+8, 0);
    f13 = f12;
    func_08AAB844(a0, a1, 0, 0, 0, f12, f13, f14, f15);
    goto L_08856560;
L_08856560:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    ST32(s3+132, s1);
    if (cnd_) { goto L_08856644; }
    goto L_0885656C;
L_0885656C:;
    v0 = 1;
    v1 = LD32(a0+12);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(a0+12, v1);
    v0 = 0 + 0;
    a1 = 0 + 0;
    a0 = LD32(s1);
    a2 = 0 + 0;
    v1 = LD32(a0+12);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(a0+12, v1);
    v0 = D_08AEBC74 - (-17292);
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0-17292));
    a0 = v1 + 0;
    ST32(v1+8, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_088565B8; }
    goto L_088565B4;
L_088565B4:;
    a2 = LD32(v1);
    goto L_088565B8;
L_088565B8:;
    cnd_ = a2 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08856634; }
    goto L_088565C0;
L_088565C0:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_088565C0; }
    goto L_088565CC;
L_088565CC:;
    v0 = a1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08856634; }
    goto L_088565D8;
L_088565D8:;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088565E4; }
    goto L_088565E0;
L_088565E0:;
    a1 = LD32(a0);
    goto L_088565E4;
L_088565E4:;
    s0 = LD32(a1+8);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08856634; }
    goto L_088565F4;
L_088565F4:;
    v0 = LD32(v1+12);
    a1 = s0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088566C4; }
    goto L_08856608;
L_08856608:;
    v0 = LD32(v1+12);
    a1 = s0 + 0;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088566B4; }
    goto L_0885661C;
L_0885661C:;
    s0 = LD32(s0+8);
    goto L_08856620;
L_08856620:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08856634; }
    goto L_0885662C;
L_0885662C:;
    v1 = LD32(s1);
    goto L_088565F4;
L_08856634:;
    a0 = s1 + 0;
    func_08AABAF0(a0);
    goto L_0885663C;
L_0885663C:;
    a0 = s1 + 0;
    func_08AABB9C(a0);
    goto L_08856644;
L_08856644:;
    ST32(s3+144, 0);
    s2 = D_08B28DF8 - (-29192);
    s1 = s2 - 29192;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856654;
L_08856654:;
    v1 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885666C;
L_0885666C:;
    a0 = LD32(s2-29192);
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
L_088566B4:;
    f12 = BITSF(LD32(v1+8));
    func_088324B4(a1, f12);
    goto L_088566BC;
L_088566BC:;
    s0 = LD32(s0+8);
    goto L_08856620;
L_088566C4:;
    f12 = BITSF(LD32(v1+4));
    func_08832498(a1, f12);
    goto L_088566CC;
L_088566CC:;
    v1 = LD32(s1);
    goto L_08856608;
}

/* 088566D4 */
rv_t func_088566D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088566D4:;
    v1 = D_08AF2520 - (9504);
    sp = sp - 16;
    v1 = v1 + 9504;
    v0 = v1 + 96;
    s1 = a0 + 0;
    ST32(a0+84, v0);
    ST32(s1, v1);
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856704;
L_08856704:;
    s0 = LD32(s1+132);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08856754; }
    goto L_08856710;
L_08856710:;
    a0 = s1 + 144;
    func_08AAB2D8(a0, 0, 0, 0);
    goto L_08856718;
L_08856718:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856720;
L_08856720:;
    a0 = D_08B28DF8 - (-29192);
    a1 = s1 + 0;
    a0 = a0 - 29192;
    func_08AABD20(a0, a1, 0, 0, 0);
    goto L_08856730;
L_08856730:;
    a0 = s1 + 84;
    func_088583F4(a0);
    goto L_08856738;
L_08856738:;
    a0 = s1 + 0;
    { u64 r_ = func_08857A00(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856740;
L_08856740:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08856754:;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_0885675C;
L_0885675C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856764;
L_08856764:;
    goto L_08856710;
}

/* 0885676C */
rv_t func_0885676C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885676C:;
    v1 = D_08AF2520 - (9504);
    sp = sp - 16;
    v1 = v1 + 9504;
    v0 = v1 + 96;
    s1 = a0 + 0;
    ST32(a0+84, v0);
    ST32(s1, v1);
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885679C;
L_0885679C:;
    s0 = LD32(s1+132);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088567F4; }
    goto L_088567A8;
L_088567A8:;
    a0 = s1 + 144;
    func_08AAB2D8(a0, 0, 0, 0);
    goto L_088567B0;
L_088567B0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088567B8;
L_088567B8:;
    a0 = D_08B28DF8 - (-29192);
    a1 = s1 + 0;
    a0 = a0 - 29192;
    func_08AABD20(a0, a1, 0, 0, 0);
    goto L_088567C8;
L_088567C8:;
    a0 = s1 + 84;
    func_088583F4(a0);
    goto L_088567D0;
L_088567D0:;
    a0 = s1 + 0;
    { u64 r_ = func_08857A00(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088567D8;
L_088567D8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088567E0;
L_088567E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088567F4:;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088567FC;
L_088567FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856804;
L_08856804:;
    goto L_088567A8;
}

/* 0885680C */
void func_0885680C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0885680C:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 160;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856830;
L_08856830:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_088564B4(a0, a1);
    goto L_08856840;
L_08856840:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08856864; }
    goto L_0885684C;
L_0885684C:;
    sp = sp + 64;
    return;
L_08856864:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088568B4;
L_088568B4:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_0885684C;
}

/* 088568C4 */
rv_t func_088568C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088568C4:;
    sp = sp - 48;
    s3 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088568F0;
L_088568F0:;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088568F8;
L_088568F8:;
    v1 = LD32(sp);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08856A5C; }
    goto L_08856908;
L_08856908:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08856934; }
    goto L_08856910;
L_08856910:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856918;
L_08856918:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08856934:;
    a1 = s3 + 0;
    { rv_t r_ = func_08857C2C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885693C;
L_0885693C:;
    a1 = s1 + 128;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856948;
L_08856948:;
    a1 = s1 + 148;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856954;
L_08856954:;
    v1 = LD32(s1+148);
    cnd_ = v1 != 0;
    a1 = s1 + 152;
    if (cnd_) { goto L_08856A40; }
    goto L_08856960;
L_08856960:;
    s0 = LD32(s1+132);
    goto L_08856964;
L_08856964:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08856A28; }
    goto L_0885696C;
L_0885696C:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856974;
L_08856974:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    ST32(v0, 0);
    v0 = D_08AEBC78 - (-17288);
    a1 = s3 + 0;
    f0 = BITSF(LD32(v0-17288));
    ST32(s0+4, 0);
    ST32(s0+16, FBITS(f0));
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088569A0;
L_088569A0:;
    ST32(s1+132, s0);
    a1 = s1 + 136;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088569B0;
L_088569B0:;
    a1 = s1 + 140;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088569BC;
L_088569BC:;
    v1 = LD32(s1+144);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s1+140); goto L_08856A18; }
    goto L_088569C8;
L_088569C8:;
    v0 = LD32(s1+140);
    goto L_088569CC;
L_088569CC:;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08856910; }
    goto L_088569D4;
L_088569D4:;
    a1 = LD32(s1+144);
    goto L_088569D8;
L_088569D8:;
    s0 = s2 << 3;
    a0 = s3 + 0;
    a1 = a1 + s0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088569E8;
L_088569E8:;
    a1 = LD32(s1+144);
    a0 = s3 + 0;
    s2 = s2 + 1;
    a1 = a1 + s0;
    a1 = a1 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A00;
L_08856A00:;
    v1 = LD32(s1+140);
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+144); goto L_088569D8; }
    goto L_08856A10;
L_08856A10:;
    goto L_08856910;
L_08856A18:;
    a0 = s1 + 144;
    func_08AAB318(a0, a1, 0, 0, 0);
    goto L_08856A20;
L_08856A20:;
    v0 = LD32(s1+140);
    goto L_088569CC;
L_08856A28:;
    a0 = s0 + 0;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_08856A30;
L_08856A30:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856A38;
L_08856A38:;
    goto L_0885696C;
L_08856A40:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A48;
L_08856A48:;
    a1 = s1 + 156;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A54;
L_08856A54:;
    s0 = LD32(s1+132);
    goto L_08856964;
L_08856A5C:;
    a1 = s3 + 0;
    { rv_t r_ = func_08857C2C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A64;
L_08856A64:;
    a0 = s1 + 84;
    a1 = s3 + 0;
    { rv_t r_ = func_088584A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A70;
L_08856A70:;
    a1 = s1 + 128;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A7C;
L_08856A7C:;
    a1 = s1 + 148;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856A88;
L_08856A88:;
    v1 = LD32(s1+148);
    cnd_ = v1 != 0;
    a1 = s1 + 152;
    if (cnd_) { goto L_08856B74; }
    goto L_08856A94;
L_08856A94:;
    s0 = LD32(s1+132);
    goto L_08856A98;
L_08856A98:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08856B5C; }
    goto L_08856AA0;
L_08856AA0:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856AA8;
L_08856AA8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    ST32(v0, 0);
    v0 = D_08AEBC78 - (-17288);
    a1 = s3 + 0;
    f0 = BITSF(LD32(v0-17288));
    ST32(s0+4, 0);
    ST32(s0+16, FBITS(f0));
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08856AD4;
L_08856AD4:;
    ST32(s1+132, s0);
    a1 = s1 + 136;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856AE4;
L_08856AE4:;
    a1 = s1 + 140;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856AF0;
L_08856AF0:;
    v1 = LD32(s1+144);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s1+140); goto L_08856B4C; }
    goto L_08856AFC;
L_08856AFC:;
    v0 = LD32(s1+140);
    goto L_08856B00;
L_08856B00:;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08856910; }
    goto L_08856B08;
L_08856B08:;
    a1 = LD32(s1+144);
    goto L_08856B0C;
L_08856B0C:;
    s0 = s2 << 3;
    a0 = s3 + 0;
    a1 = a1 + s0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856B1C;
L_08856B1C:;
    a1 = LD32(s1+144);
    a0 = s3 + 0;
    s2 = s2 + 1;
    a1 = a1 + s0;
    a1 = a1 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856B34;
L_08856B34:;
    v1 = LD32(s1+140);
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+144); goto L_08856B0C; }
    goto L_08856B44;
L_08856B44:;
    goto L_08856910;
L_08856B4C:;
    a0 = s1 + 144;
    func_08AAB318(a0, a1, 0, 0, 0);
    goto L_08856B54;
L_08856B54:;
    v0 = LD32(s1+140);
    goto L_08856B00;
L_08856B5C:;
    a0 = s0 + 0;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_08856B64;
L_08856B64:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08856B6C;
L_08856B6C:;
    goto L_08856AA0;
L_08856B74:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856B7C;
L_08856B7C:;
    a1 = s1 + 156;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856B88;
L_08856B88:;
    s0 = LD32(s1+132);
    goto L_08856A98;
}

/* 08856B90 */
rv_t func_08856B90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08856B90:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856BBC;
L_08856BBC:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_08857DD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856BC8;
L_08856BC8:;
    a0 = s1 + 84;
    a1 = s2 + 0;
    { rv_t r_ = func_08858404(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856BD4;
L_08856BD4:;
    a1 = LD32(s1+128);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856BE0;
L_08856BE0:;
    a1 = LD32(s1+148);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856BEC;
L_08856BEC:;
    v1 = LD32(s1+148);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+152); goto L_08856C94; }
    goto L_08856BF8;
L_08856BF8:;
    a0 = LD32(s1+132);
    goto L_08856BFC;
L_08856BFC:;
    a1 = s2 + 0;
    a2 = 1;
    a3 = 0 + 0;
    func_08AAB35C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08856C0C;
L_08856C0C:;
    f12 = BITSF(LD32(s1+136));
    a0 = s2 + 0;
    s3 = 0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856C1C;
L_08856C1C:;
    a1 = LD32(s1+140);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856C28;
L_08856C28:;
    v1 = LD32(s1+140);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08856C4C; }
    goto L_08856C34;
L_08856C34:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08856C4C:;
    v0 = LD32(s1+144);
    goto L_08856C50;
L_08856C50:;
    s0 = s3 << 3;
    a0 = s2 + 0;
    v0 = s0 + v0;
    f12 = BITSF(LD32(v0));
    s3 = s3 + 1;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856C68;
L_08856C68:;
    v1 = LD32(s1+144);
    a0 = s2 + 0;
    s0 = s0 + v1;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856C7C;
L_08856C7C:;
    v1 = LD32(s1+140);
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+144); goto L_08856C50; }
    goto L_08856C8C;
L_08856C8C:;
    goto L_08856C34;
L_08856C94:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856C9C;
L_08856C9C:;
    f12 = BITSF(LD32(s1+156));
    a0 = s2 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856CA8;
L_08856CA8:;
    a0 = LD32(s1+132);
    goto L_08856BFC;
}

/* 08856CB0 */
void func_08856CB0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08856CB0:;
    sp = sp - 48;
    t0 = a0 + 0;
    v0 = 999;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v1 = 0 + 0;
    a3 = LD32(a0+76);
    a0 = D_08B28DD8 - (-29224);
    cnd_ = a3 == v0;
    a1 = a0 - 29224;
    if (cnd_) { goto L_08856D28; }
    goto L_08856CE4;
L_08856CE4:;
    v0 = LD32(a1+4);
    v1 = LD32(a0-29224);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08856D28; }
    goto L_08856D08;
L_08856D08:;
    v1 = LD32(a1);
    goto L_08856D0C;
L_08856D0C:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08856DB4; }
    goto L_08856D18;
L_08856D18:;
    a1 = LD32(a1+4);
    goto L_08856D1C;
L_08856D1C:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_08856D0C; }
    goto L_08856D24;
L_08856D24:;
    v1 = 0 + 0;
    goto L_08856D28;
L_08856D28:;
    v0 = v1 + 32;
    goto L_08856D2C;
L_08856D2C:;
    f0 = BITSF(LD32(v1+32));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    a1 = LD32(t0+80);
    ST32(s0, FBITS(f0));
    a2 = 1;
    a0 = a0 - 29224;
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    v0 = func_08AABDC8(a0, a1, a2);
    goto L_08856D54;
L_08856D54:;
    v1 = v0 + 32;
    f4 = BITSF(LD32(v0+32));
    f5 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = f5 - f2;
    f0 = f4 - f0;
    f1 = f3 - f1;
    a0 = s1 + 0;
    a1 = sp + 16;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f5));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856DA0;
L_08856DA0:;
    sp = sp + 48;
    return;
L_08856DB4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08856D1C; }
    goto L_08856DC0;
L_08856DC0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08856D1C; }
    goto L_08856DCC;
L_08856DCC:;
    v0 = v1 + 32;
    goto L_08856D2C;
}

/* 08856DD4 */
float func_08856DD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_08856DD4:;
    v1 = LD32(a0+132);
    v0 = 1;
    a3 = LD32(v1+4);
    cnd_ = a3 == v0;
    a1 = a3 - 1;
    if (cnd_) { goto L_08856E68; }
    goto L_08856DE8;
L_08856DE8:;
    a2 = LD32(v1+8);
    v0 = a1 << 2;
    v0 = v0 + a2;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a2));
    v0 = D_08AEBC7C - (-17284);
    a0 = 1;
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-17284));
    v1 = a0 < a1;
    cnd_ = v1 == 0;
    f1 = f1 * f0;
    if (cnd_) { goto L_08856E34; }
    goto L_08856E18;
L_08856E18:;
    v1 = a2 + 4;
    goto L_08856E1C;
L_08856E1C:;
    f0 = BITSF(LD32(v1));
    a0 = a0 + 1;
    v0 = a0 < a1;
    f1 = f1 + f0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08856E1C; }
    goto L_08856E34;
L_08856E34:;
    v0 = a3 - 1;
    f2 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08856E4C; }
    goto L_08856E44;
L_08856E44:;
    f0 = f1 / f0;
    return f0;
L_08856E4C:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08856E44;
L_08856E68:;
    v0 = LD32(v1+8);
    f0 = BITSF(LD32(v0));
    return f0;
}

/* 08856E74 */
float func_08856E74(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08856E74:;
    sp = sp - 32;
    s0 = a0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    f20 = f12;
    f0 = func_088570E4(a0, f12);
    goto L_08856EA0;
L_08856EA0:;
    v0 = LD32(s0);
    f12 = f0;
    a1 = s1 + 0;
    v1 = LD32(v0+84);
    a2 = s2 + 0;
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08856EBC;
L_08856EBC:;
    v0 = LD32(s0+140);
    v1 = LD32(s0+144);
    v0 = v0 << 3;
    v0 = v0 + v1;
    f0 = BITSF(LD32(v0-4));
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    f0 = f20 - f0;
    if (cnd_) { goto L_08856EFC; }
    goto L_08856EE0;
L_08856EE0:;
    goto L_08856EE4;
L_08856EE4:;
    sp = sp + 32;
    return f0;
L_08856EFC:;
    f0 = BITSF(0);
    goto L_08856EE4;
}

/* 08856F08 */
void func_08856F08(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08856F08:;
    v0 = LD32(a0+56);
    f0 = BITSF(LD32(a0+136));
    a2 = 0 + 0;
    a3 = v0 - 1;
    cnd_ = (s32)a3 <= 0;
    f12 = f12 / f0;
    if (cnd_) { goto L_08856F4C; }
    goto L_08856F20;
L_08856F20:;
    v0 = LD32(a0+60);
    v1 = v0 + 4;
    f0 = BITSF(LD32(v1));
    goto L_08856F2C;
L_08856F2C:;
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_08856F4C; }
    goto L_08856F3C;
L_08856F3C:;
    a2 = a2 + 1;
    v0 = (s32)a2 < (s32)a3;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_08856F2C; }
    goto L_08856F4C;
L_08856F4C:;
    v1 = LD32(a0+68);
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(a1+8, FBITS(f0));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    return;
}

/* 08856F7C */
float func_08856F7C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08856F7C:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_088570E4(a0, f12);
    goto L_08856F90;
L_08856F90:;
    v0 = D_08AEBC80 - (-17280);
    a0 = LD32(s0+132);
    f3 = BITSF(LD32(v0-17280));
    f2 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(a0+16));
    v0 = LD32(a0+4);
    f0 = f0 - f2;
    f1 = f1 - f2;
    v1 = v0 - 1;
    f4 = BITSF(v1);
    f0 = f0 / f1;
    f2 = (float)(s32)FBITS(f4);
    f0 = f0 * f2;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    cnd_ = (s32)v0 < 0;
    a1 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08857028; }
    goto L_08856FD4;
L_08856FD4:;
    f2 = (float)(s32)FBITS(f1);
    a2 = v0 << 2;
    cnd_ = a1 != 0;
    v1 = v1 << 2;
    if (cnd_) { goto L_08857000; }
    goto L_08856FE4;
L_08856FE4:;
    v0 = LD32(a0+8);
    v0 = v1 + v0;
    goto L_08856FEC;
L_08856FEC:;
    f0 = BITSF(LD32(v0));
    goto L_08856FF0;
L_08856FF0:;
    sp = sp + 16;
    return f0;
L_08857000:;
    f2 = f0 - f2;
    v0 = LD32(a0+8);
    f3 = f3 - f2;
    v0 = a2 + v0;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f1 = f1 * f2;
    f0 = f0 * f3;
    f0 = f0 + f1;
    goto L_08856FF0;
L_08857028:;
    v0 = LD32(a0+8);
    goto L_08856FEC;
}

/* 08857030 */
float func_08857030(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857030:;
    sp = sp - 16;
    v0 = D_08AEBC84 - (-17276);
    a0 = LD32(a0+132);
    f12 = BITSF(LD32(v0-17276));
    { rv_t r_ = func_08AABE50(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857048;
L_08857048:;
    sp = sp + 16;
    return f0;
}

/* 08857054 */
float func_08857054(u32 a0)
{
    u32 a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08857054:;
    sp = sp - 32;
    a1 = sp + 0;
    a2 = sp + 4;
    func_08857188(a0, a1, a2);
    goto L_08857068;
L_08857068:;
    f0 = BITSF(LD32(sp));
    sp = sp + 32;
    return f0;
}

/* 08857078 */
void func_08857078(u32 a0, u32 a1, u32 a2)
{
    u32 s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08857078:;
    sp = sp - 32;
    s2 = a2 + 0;
    a2 = sp + 4;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    func_08857188(a0, a1, a2);
    goto L_088570A4;
L_088570A4:;
    f12 = BITSF(LD32(sp));
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    f0 = func_08856E74(a0, a1, a2, f12);
    goto L_088570B8;
L_088570B8:;
    f12 = BITSF(LD32(sp+4));
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = 0 + 0;
    f0 = func_08856E74(a0, a1, a2, f12);
    goto L_088570CC;
L_088570CC:;
    sp = sp + 32;
    return;
}

/* 088570E4 */
float func_088570E4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_088570E4:;
    a2 = LD32(a0+140);
    v1 = LD32(a0+144);
    v0 = a2 << 3;
    v0 = v0 + v1;
    f0 = BITSF(LD32(v0-4));
    fcc = FCMP(f0, f12, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = D_08AEBC88 - (-17272); goto L_08857180; }
    goto L_08857108;
L_08857108:;
    f0 = BITSF(0);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08857148; }
    goto L_08857114;
L_08857114:;
    a1 = v1 + 0;
    v1 = v1 + 4;
    goto L_0885711C;
L_0885711C:;
    f3 = BITSF(LD32(v1));
    fcc = FCMP(f12, f3, 12);
    cnd_ = !fcc;
    v1 = v1 + 8;
    if (cnd_) { goto L_08857138; }
    goto L_08857130;
L_08857130:;
    cnd_ = a0 != 0;
    if (cnd_) { f0 = BITSF(LD32(a1-4)); goto L_08857150; }
    goto L_08857138;
L_08857138:;
    a0 = a0 + 1;
    v0 = a0 < a2;
    cnd_ = v0 != 0;
    a1 = a1 + 8;
    if (cnd_) { goto L_0885711C; }
    goto L_08857148;
L_08857148:;
    return f0;
L_08857150:;
    v0 = D_08AEBC88 - (-17272);
    f2 = BITSF(LD32(v0-17272));
    f3 = f3 - f0;
    f0 = f12 - f0;
    f4 = BITSF(LD32(a1-8));
    f1 = BITSF(LD32(a1));
    f0 = f0 / f3;
    f2 = f2 - f0;
    f1 = f1 * f0;
    f2 = f2 * f4;
    f0 = f1 + f2;
    return f0;
L_08857180:;
    f0 = BITSF(LD32(v0-17272));
    return f0;
}

/* 08857188 */
void func_08857188(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08857188:;
    v0 = LD32(a0+140);
    v1 = LD32(a0+144);
    v0 = v0 << 3;
    v0 = v0 + v1;
    v1 = D_08AEBC90 - (-17264);
    f2 = BITSF(LD32(v0-4));
    f1 = BITSF(LD32(v1-17264));
    v0 = D_08AEBC8C - (-17268);
    f0 = BITSF(LD32(v0-17268));
    fcc = FCMP(f2, f1, 12);
    ST32(a1, FBITS(f0));
    cnd_ = !fcc;
    ST32(a2, FBITS(f1));
    if (cnd_) { goto L_088571D0; }
    goto L_088571BC;
L_088571BC:;
    v0 = D_08AEBC94 - (-17260);
    f0 = BITSF(LD32(v0-17260));
    ST32(a2, FBITS(f2));
    f0 = f2 * f0;
    ST32(a1, FBITS(f0));
    goto L_088571D0;
L_088571D0:;
    return;
}

/* 088571D8 */
rv_t func_088571D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088571D8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08857258; }
    goto L_0885720C;
L_0885720C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08857230; }
    goto L_08857220;
L_08857220:;
    v0 = D_08B28DF8 - (-29192);
    a0 = LD32(v0-29192);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08857248; }
    goto L_08857230;
L_08857230:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08857248:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857250;
L_08857250:;
    goto L_08857230;
L_08857258:;
    s3 = D_08B28DF8 - (-29192);
    s0 = s3 - 29192;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857270;
L_08857270:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29192, v0);
    if (cnd_) { goto L_0885729C; }
    goto L_08857280;
L_08857280:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08857288;
L_08857288:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08857288; }
    goto L_0885729C;
L_0885729C:;
    v0 = s3 - 29192;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0885720C;
}

/* 088572AC */
rv_t func_088572AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088572AC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088571D8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088572C0;
L_088572C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088572CC */
rv_t func_088572CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088572CC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088571D8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088572E0;
L_088572E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088572EC */
void func_088572EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088572EC:;
    sp = sp - 32;
    s3 = a0 + 0;
    func_08857940(a0, a1);
    goto L_0885730C;
L_0885730C:;
    v0 = D_08AF2598 - (9624);
    v0 = v0 + 9624;
    ST32(s3, v0);
    v0 = 64;
    a0 = 20;
    ST16(s3+8, v0);
    ST32(s3+84, 0);
    ST32(s3+88, 0);
    ST32(s3+92, 0);
    ST32(s3+96, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857338;
L_08857338:;
    s1 = v0 + 0;
    ST32(v0, 0);
    v0 = D_08AEBCCC - (-17204);
    f14 = BITSF(0);
    f12 = BITSF(LD32(v0-17204));
    v0 = D_08AEBCD0 - (-17200);
    ST32(s1+4, 0);
    a0 = s1 + 0;
    a1 = 16;
    f15 = BITSF(LD32(v0-17200));
    ST32(s1+8, 0);
    f13 = f12;
    func_08AAB844(a0, a1, 0, 0, 0, f12, f13, f14, f15);
    goto L_0885736C;
L_0885736C:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    ST32(s3+88, s1);
    if (cnd_) { goto L_08857450; }
    goto L_08857378;
L_08857378:;
    v0 = 1;
    v1 = LD32(a0+12);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(a0+12, v1);
    v0 = 0 + 0;
    a1 = 0 + 0;
    a0 = LD32(s1);
    a2 = 0 + 0;
    v1 = LD32(a0+12);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(a0+12, v1);
    v0 = D_08AEBCD4 - (-17196);
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0-17196));
    a0 = v1 + 0;
    ST32(v1+8, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_088573C4; }
    goto L_088573C0;
L_088573C0:;
    a2 = LD32(v1);
    goto L_088573C4;
L_088573C4:;
    cnd_ = a2 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08857440; }
    goto L_088573CC;
L_088573CC:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_088573CC; }
    goto L_088573D8;
L_088573D8:;
    v0 = a1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08857440; }
    goto L_088573E4;
L_088573E4:;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088573F0; }
    goto L_088573EC;
L_088573EC:;
    a1 = LD32(a0);
    goto L_088573F0;
L_088573F0:;
    s0 = LD32(a1+8);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08857440; }
    goto L_08857400;
L_08857400:;
    v0 = LD32(v1+12);
    a1 = s0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088574C8; }
    goto L_08857414;
L_08857414:;
    v0 = LD32(v1+12);
    a1 = s0 + 0;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088574B8; }
    goto L_08857428;
L_08857428:;
    s0 = LD32(s0+8);
    goto L_0885742C;
L_0885742C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08857440; }
    goto L_08857438;
L_08857438:;
    v1 = LD32(s1);
    goto L_08857400;
L_08857440:;
    a0 = s1 + 0;
    func_08AABAF0(a0);
    goto L_08857448;
L_08857448:;
    a0 = s1 + 0;
    func_08AABB9C(a0);
    goto L_08857450;
L_08857450:;
    s2 = D_08B28E08 - (-29176);
    s1 = s2 - 29176;
    v0 = LD32(s1+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857470;
L_08857470:;
    a0 = LD32(s2-29176);
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
L_088574B8:;
    f12 = BITSF(LD32(v1+8));
    func_088324B4(a1, f12);
    goto L_088574C0;
L_088574C0:;
    s0 = LD32(s0+8);
    goto L_0885742C;
L_088574C8:;
    f12 = BITSF(LD32(v1+4));
    func_08832498(a1, f12);
    goto L_088574D0;
L_088574D0:;
    v1 = LD32(s1);
    goto L_08857414;
}

/* 088574D8 */
rv_t func_088574D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088574D8:;
    sp = sp - 16;
    v0 = D_08AF2598 - (9624);
    s1 = a0 + 0;
    v0 = v0 + 9624;
    s0 = LD32(a0+88);
    ST32(s1, v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08857530; }
    goto L_08857504;
L_08857504:;
    a0 = D_08B28E08 - (-29176);
    goto L_08857508;
L_08857508:;
    a1 = s1 + 0;
    a0 = a0 - 29176;
    func_08AAC05C(a0, a1, t1, t2, t3);
    goto L_08857514;
L_08857514:;
    a0 = s1 + 0;
    { u64 r_ = func_08857A00(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885751C;
L_0885751C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08857530:;
    func_08AABCA0(a0, t1, t2, t3);
    goto L_08857538;
L_08857538:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857540;
L_08857540:;
    a0 = D_08B28E08 - (-29176);
    goto L_08857508;
}

/* 08857548 */
rv_t func_08857548(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857548:;
    sp = sp - 16;
    v0 = D_08AF2598 - (9624);
    s1 = a0 + 0;
    v0 = v0 + 9624;
    s0 = LD32(a0+88);
    ST32(s1, v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088575A8; }
    goto L_08857574;
L_08857574:;
    a0 = D_08B28E08 - (-29176);
    goto L_08857578;
L_08857578:;
    a1 = s1 + 0;
    a0 = a0 - 29176;
    func_08AAC05C(a0, a1, t1, t2, t3);
    goto L_08857584;
L_08857584:;
    a0 = s1 + 0;
    { u64 r_ = func_08857A00(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885758C;
L_0885758C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857594;
L_08857594:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088575A8:;
    func_08AABCA0(a0, t1, t2, t3);
    goto L_088575B0;
L_088575B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088575B8;
L_088575B8:;
    a0 = D_08B28E08 - (-29176);
    goto L_08857578;
}

/* 088575C0 */
void func_088575C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088575C0:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 100;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088575E4;
L_088575E4:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_088572EC(a0, a1);
    goto L_088575F4;
L_088575F4:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08857618; }
    goto L_08857600;
L_08857600:;
    sp = sp + 64;
    return;
L_08857618:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857668;
L_08857668:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08857600;
}

/* 08857678 */
rv_t func_08857678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08857678:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088576A0;
L_088576A0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08857C2C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088576AC;
L_088576AC:;
    v0 = LD32(sp);
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s2 + 84; goto L_088576D4; }
    goto L_088576BC;
L_088576BC:;
    goto L_088576C0;
L_088576C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088576D4:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088576DC;
L_088576DC:;
    s0 = LD32(s2+88);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08857798; }
    goto L_088576E8;
L_088576E8:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088576F0;
L_088576F0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    ST32(v0, 0);
    v0 = D_08AEBCD8 - (-17192);
    a1 = s1 + 0;
    f0 = BITSF(LD32(v0-17192));
    ST32(s0+4, 0);
    ST32(s0+16, FBITS(f0));
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885771C;
L_0885771C:;
    ST32(s2+88, s0);
    a1 = s2 + 92;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885772C;
L_0885772C:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    a1 = s2 + 96;
    if (cnd_) { goto L_0885774C; }
    goto L_08857738;
L_08857738:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857740;
L_08857740:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 > 0;
    if (cnd_) { goto L_088576C0; }
    goto L_0885774C;
L_0885774C:;
    a0 = s1 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857758;
L_08857758:;
    v0 = LD32(sp+4);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088576BC; }
    goto L_08857764;
L_08857764:;
    a1 = sp + 8;
    goto L_08857768;
L_08857768:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857770;
L_08857770:;
    a0 = s1 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885777C;
L_0885777C:;
    v0 = LD32(sp+4);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = sp + 8; goto L_08857768; }
    goto L_08857790;
L_08857790:;
    goto L_088576C0;
L_08857798:;
    a0 = s0 + 0;
    func_08AABCA0(a0, 0, 0, 0);
    goto L_088577A0;
L_088577A0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088577A8;
L_088577A8:;
    goto L_088576E8;
}

/* 088577B0 */
rv_t func_088577B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088577B0:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088577D4;
L_088577D4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08857DD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088577E0;
L_088577E0:;
    a1 = LD32(s1+84);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088577EC;
L_088577EC:;
    a0 = LD32(s1+88);
    a1 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    func_08AAB35C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08857800;
L_08857800:;
    f12 = BITSF(LD32(s1+92));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885780C;
L_0885780C:;
    f12 = BITSF(LD32(s1+96));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857818;
L_08857818:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885782C */
rv_t func_0885782C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885782C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088578AC; }
    goto L_08857860;
L_08857860:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08857884; }
    goto L_08857874;
L_08857874:;
    v0 = D_08B28E08 - (-29176);
    a0 = LD32(v0-29176);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885789C; }
    goto L_08857884;
L_08857884:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885789C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088578A4;
L_088578A4:;
    goto L_08857884;
L_088578AC:;
    s3 = D_08B28E08 - (-29176);
    s0 = s3 - 29176;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088578C4;
L_088578C4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29176, v0);
    if (cnd_) { goto L_088578F0; }
    goto L_088578D4;
L_088578D4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_088578DC;
L_088578DC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088578DC; }
    goto L_088578F0;
L_088578F0:;
    v0 = s3 - 29176;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08857860;
}

/* 08857900 */
rv_t func_08857900(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857900:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885782C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857914;
L_08857914:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08857920 */
rv_t func_08857920(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857920:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885782C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857934;
L_08857934:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08857940 */
void func_08857940(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857940:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08858628(a0, a1);
    goto L_08857954;
L_08857954:;
    v0 = D_08AF25F8 - (9720);
    a0 = 999;
    v1 = 59;
    v0 = v0 + 9720;
    ST16(s0+8, v1);
    ST32(s0, v0);
    ST32(s0+80, a0);
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+72, a0);
    ST32(s0+76, a0);
    sp = sp + 16;
    return;
}

/* 088579A0 */
void func_088579A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088579A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08858628(a0, a1);
    goto L_088579B4;
L_088579B4:;
    v0 = D_08AF25F8 - (9720);
    a0 = 999;
    v1 = 59;
    v0 = v0 + 9720;
    ST16(s0+8, v1);
    ST32(s0, v0);
    ST32(s0+80, a0);
    ST32(s0+48, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+72, a0);
    ST32(s0+76, a0);
    sp = sp + 16;
    return;
}

/* 08857A00 */
u64 func_08857A00(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857A00:;
    v0 = D_08AF25F8 - (9720);
    v0 = v0 + 9720;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857A24;
L_08857A24:;
    a0 = s0 + 64;
    func_08AA9678(a0, 0, 0, 0);
    goto L_08857A2C;
L_08857A2C:;
    a0 = s0 + 68;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08857A34;
L_08857A34:;
    a0 = s0 + 60;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08857A3C;
L_08857A3C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857A44;
L_08857A44:;
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857A4C;
L_08857A4C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08857A5C */
rv_t func_08857A5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857A5C:;
    v0 = D_08AF25F8 - (9720);
    v0 = v0 + 9720;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857A80;
L_08857A80:;
    a0 = s0 + 64;
    func_08AA9678(a0, 0, 0, 0);
    goto L_08857A88;
L_08857A88:;
    a0 = s0 + 68;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08857A90;
L_08857A90:;
    a0 = s0 + 60;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08857A98;
L_08857A98:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857AA0;
L_08857AA0:;
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857AA8;
L_08857AA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08857AB8 */
rv_t func_08857AB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857AB8:;
    v0 = D_08AF25F8 - (9720);
    v0 = v0 + 9720;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857ADC;
L_08857ADC:;
    a0 = s0 + 64;
    func_08AA9678(a0, 0, 0, 0);
    goto L_08857AE4;
L_08857AE4:;
    a0 = s0 + 68;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08857AEC;
L_08857AEC:;
    a0 = s0 + 60;
    func_08AA109C(a0, 0, 0, 0);
    goto L_08857AF4;
L_08857AF4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857AFC;
L_08857AFC:;
    a0 = s0 + 0;
    { u64 r_ = func_088587F8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857B04;
L_08857B04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857B0C;
L_08857B0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08857B1C */
rv_t func_08857B1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08857B1C:;
    v1 = LD_U16(a1+16);
    sp = sp - 16;
    v0 = 66;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_08857B68; }
    goto L_08857B34;
L_08857B34:;
    v0 = 67;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+48); goto L_08857B5C; }
    goto L_08857B40;
L_08857B40:;
    { rv_t r_ = func_088589D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857B48;
L_08857B48:;
    a2 = v0 + 0;
    goto L_08857B4C;
L_08857B4C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08857B5C:;
    v0 = v0 | 0x1;
    goto L_08857B60;
L_08857B60:;
    ST32(a0+48, v0);
    goto L_08857B4C;
L_08857B68:;
    v0 = LD32(a0+48);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_08857B60;
}

/* 08857B74 */
void func_08857B74(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08857B74:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 84;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857B98;
L_08857B98:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_088579A0(a0, a1);
    goto L_08857BA8;
L_08857BA8:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08857BCC; }
    goto L_08857BB4;
L_08857BB4:;
    sp = sp + 64;
    return;
L_08857BCC:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857C1C;
L_08857C1C:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08857BB4;
}

/* 08857C2C */
rv_t func_08857C2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08857C2C:;
    sp = sp - 48;
    s3 = a1 + 0;
    s1 = a0 + 0;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857C54;
L_08857C54:;
    a0 = s3 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857C60;
L_08857C60:;
    v1 = LD32(sp);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08857C90; }
    goto L_08857C6C;
L_08857C6C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08857C74;
L_08857C74:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08857C90:;
    a1 = s3 + 0;
    { rv_t r_ = func_08858BD0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857C98;
L_08857C98:;
    a1 = s1 + 48;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857CA4;
L_08857CA4:;
    a1 = s1 + 72;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857CB0;
L_08857CB0:;
    a1 = s1 + 76;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857CBC;
L_08857CBC:;
    a1 = s1 + 80;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857CC8;
L_08857CC8:;
    a1 = s1 + 52;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857CD4;
L_08857CD4:;
    a1 = s1 + 56;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857CE0;
L_08857CE0:;
    v1 = LD32(s1+56);
    v0 = LD32(s1+64);
    cnd_ = v0 == 0;
    s2 = v1 - 2;
    if (cnd_) { goto L_08857DC4; }
    goto L_08857CF0;
L_08857CF0:;
    cnd_ = (s32)s2 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08857D1C; }
    goto L_08857CF8;
L_08857CF8:;
    a1 = LD32(s1+64);
    goto L_08857CFC;
L_08857CFC:;
    v0 = s0 << 4;
    a0 = s3 + 0;
    a1 = a1 + v0;
    s0 = s0 + 1;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857D10;
L_08857D10:;
    v1 = (s32)s0 < (s32)s2;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+64); goto L_08857CFC; }
    goto L_08857D1C;
L_08857D1C:;
    v0 = LD32(s1+68);
    cnd_ = v0 == 0;
    a1 = LD32(s1+56);
    if (cnd_) { goto L_08857DB4; }
    goto L_08857D28;
L_08857D28:;
    cnd_ = (s32)a1 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08857D58; }
    goto L_08857D30;
L_08857D30:;
    s0 = 0 + 0;
    goto L_08857D34;
L_08857D34:;
    a1 = LD32(s1+68);
    a0 = s3 + 0;
    s2 = s2 + 1;
    a1 = a1 + s0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857D48;
L_08857D48:;
    a1 = LD32(s1+56);
    v0 = (s32)s2 < (s32)a1;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08857D34; }
    goto L_08857D58;
L_08857D58:;
    v0 = LD32(s1+60);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = a1 - 1; goto L_08857DA4; }
    goto L_08857D64;
L_08857D64:;
    v0 = a1 - 1;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08857C6C; }
    goto L_08857D70;
L_08857D70:;
    a1 = LD32(s1+60);
    goto L_08857D74;
L_08857D74:;
    v0 = s0 << 2;
    a0 = s3 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857D84;
L_08857D84:;
    v1 = LD32(s1+56);
    s0 = s0 + 1;
    v1 = v1 - 1;
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+60); goto L_08857D74; }
    goto L_08857D9C;
L_08857D9C:;
    goto L_08857C6C;
L_08857DA4:;
    a0 = s1 + 60;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_08857DAC;
L_08857DAC:;
    a1 = LD32(s1+56);
    goto L_08857D64;
L_08857DB4:;
    a0 = s1 + 68;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_08857DBC;
L_08857DBC:;
    a1 = LD32(s1+56);
    goto L_08857D28;
L_08857DC4:;
    a0 = s1 + 64;
    a1 = s2 + 0;
    func_08AA96B8(a0, a1, 0, 0, 0);
    goto L_08857DD0;
L_08857DD0:;
    goto L_08857CF0;
}

/* 08857DD8 */
rv_t func_08857DD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08857DD8:;
    sp = sp - 32;
    s3 = a1 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s3 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E08;
L_08857E08:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_08858B24(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E14;
L_08857E14:;
    a1 = LD32(s0+48);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E20;
L_08857E20:;
    a1 = LD32(s0+72);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E2C;
L_08857E2C:;
    a1 = LD32(s0+76);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E38;
L_08857E38:;
    a1 = LD32(s0+80);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E44;
L_08857E44:;
    f12 = BITSF(LD32(s0+52));
    a0 = s3 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E50;
L_08857E50:;
    a1 = LD32(s0+56);
    a0 = s3 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E5C;
L_08857E5C:;
    v1 = LD32(s0+56);
    v0 = v1 - 2;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08857E98; }
    goto L_08857E6C;
L_08857E6C:;
    a1 = LD32(s0+64);
    goto L_08857E70;
L_08857E70:;
    v0 = s1 << 4;
    a0 = s3 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882DCBC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857E80;
L_08857E80:;
    v1 = LD32(s0+56);
    s1 = s1 + 1;
    v0 = v1 - 2;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+64); goto L_08857E70; }
    goto L_08857E98;
L_08857E98:;
    cnd_ = (s32)v1 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08857EC8; }
    goto L_08857EA0;
L_08857EA0:;
    s1 = 0 + 0;
    goto L_08857EA4;
L_08857EA4:;
    a1 = LD32(s0+68);
    a0 = s3 + 0;
    s2 = s2 + 1;
    a1 = a1 + s1;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857EB8;
L_08857EB8:;
    v1 = LD32(s0+56);
    v0 = (s32)s2 < (s32)v1;
    cnd_ = v0 != 0;
    s1 = s1 + 12;
    if (cnd_) { goto L_08857EA4; }
    goto L_08857EC8;
L_08857EC8:;
    v0 = v1 - 1;
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08857F04; }
    goto L_08857ED4;
L_08857ED4:;
    v1 = LD32(s0+60);
    goto L_08857ED8;
L_08857ED8:;
    v0 = s1 << 2;
    a0 = s3 + 0;
    v0 = v0 + v1;
    f12 = BITSF(LD32(v0));
    s1 = s1 + 1;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08857EF0;
L_08857EF0:;
    v1 = LD32(s0+56);
    v1 = v1 - 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s0+60); goto L_08857ED8; }
    goto L_08857F04;
L_08857F04:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08857F20 */
rv_t func_08857F20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08857F20:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = a1 << 2;
    if (cnd_) { goto L_08857F3C; }
    goto L_08857F2C;
L_08857F2C:;
    v0 = LD32(a0+60);
    v0 = v1 + v0;
    f0 = BITSF(LD32(v0));
    return (rv_t){ v0, v1, f0 };
L_08857F3C:;
    v0 = LD32(a0+56);
    v1 = LD32(a0+60);
    v0 = v0 << 2;
    v0 = v0 + v1;
    f0 = BITSF(LD32(v0-12));
    return (rv_t){ v0, v1, f0 };
}

/* 08857F54 */
rv_t func_08857F54(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08857F54:;
    v0 = LD32(a0+56);
    v1 = LD32(a0+60);
    v0 = v0 << 2;
    v0 = v0 + v1;
    f0 = BITSF(LD32(v0-12));
    return (rv_t){ v0, v1, f0 };
}

/* 08857F6C */
float func_08857F6C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08857F6C:;
    sp = sp - 32;
    t1 = a0 + 0;
    a0 = LD32(a0+60);
    f0 = BITSF(LD32(a0));
    fcc = FCMP(f12, f0, 12);
    cnd_ = !fcc;
    f20 = f12;
    if (cnd_) { goto L_08858150; }
    goto L_08857F94;
L_08857F94:;
    v1 = LD32(t1+56);
    f20 = f0;
    t0 = v1 - 1;
    goto L_08857FA0;
L_08857FA0:;
    a3 = 0 + 0;
    cnd_ = (s32)t0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08857FD8; }
    goto L_08857FAC;
L_08857FAC:;
    v1 = a3 << 2;
    v0 = v1 + a0;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(v0+4)); goto L_08857FE0; }
    goto L_08857FC8;
L_08857FC8:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)t0;
    cnd_ = v0 != 0;
    v1 = a3 << 2;
    if (cnd_) { goto L_08857FAC; }
    goto L_08857FD8;
L_08857FD8:;
    v0 = v1 + a0;
    f1 = BITSF(LD32(v0+4));
    goto L_08857FE0;
L_08857FE0:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(0);
    f1 = f1 - f2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08858114; }
    goto L_08857FFC;
L_08857FFC:;
    fcc = FCMP(f2, f20, 12);
    cnd_ = !fcc;
    f0 = f20 - f2;
    if (cnd_) { goto L_08858114; }
    goto L_0885800C;
L_0885800C:;
    cnd_ = a2 == 0;
    f12 = f0 / f1;
    if (cnd_) { goto L_088580E8; }
    goto L_08858014;
L_08858014:;
    v1 = D_08AEBD1C - (-17124);
    f0 = BITSF(LD32(v1-17124));
    v0 = LD32(t1+64);
    a0 = a3 << 4;
    v1 = FBITS(f12);
    v0 = v0 + a0;
    a0 = FBITS(f0);
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[115]=BITSF(LD32(v0+(12)));}
    {v[116]=BITSF(LD32(v0+(16)));}
    {v[117]=BITSF(LD32(v0+(20)));}
    {v[118]=BITSF(LD32(v0+(24)));}
    {v[119]=BITSF(LD32(v0+(28)));}
    {v[124]=BITSF(v1);}
    {v[127]=BITSF(a0);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0885809C; }
    goto L_0885807C;
L_0885807C:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_0885809C;
L_0885809C:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088580B0; }
    goto L_088580A8;
L_088580A8:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_088580B0;
L_088580B0:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088580D8; }
    goto L_088580CC;
L_088580CC:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_088580D8;
L_088580D8:;
    {ST32(a2+(0),FBITS(v[120]));}
    {ST32(a2+(4),FBITS(v[121]));}
    {ST32(a2+(8),FBITS(v[122]));}
    {ST32(a2+(12),FBITS(v[123]));}
    goto L_088580E8;
L_088580E8:;
    a0 = LD32(t1+68);
    goto L_088580EC;
L_088580EC:;
    v0 = a3 << 1;
    v0 = v0 + a3;
    v0 = v0 << 2;
    a0 = a0 + v0;
    { rv_t r_ = func_088497D8(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858100;
L_08858100:;
    f0 = f20;
    sp = sp + 32;
    return f0;
L_08858114:;
    f12 = BITSF(0);
    cnd_ = a2 == 0;
    if (cnd_) { a0 = LD32(t1+68); goto L_088580EC; }
    goto L_08858120;
L_08858120:;
    v1 = LD32(t1+64);
    a0 = a3 << 4;
    a0 = a0 + v1;
    v0 = LD32(a0);
    ST32(a2, v0);
    v1 = LD32(a0+4);
    ST32(a2+4, v1);
    v0 = LD32(a0+8);
    ST32(a2+8, v0);
    v1 = LD32(a0+12);
    ST32(a2+12, v1);
    goto L_088580E8;
L_08858150:;
    v1 = LD32(t1+56);
    v0 = v1 << 2;
    v0 = v0 + a0;
    f0 = BITSF(LD32(v0-12));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    t0 = v1 - 1;
    if (cnd_) { goto L_08857FA0; }
    goto L_08858170;
L_08858170:;
    f20 = f0;
    goto L_08857FA0;
}

/* 08858178 */
rv_t func_08858178(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08858178:;
    f0 = BITSF(0);
    sp = sp - 32;
    fcc = FCMP(f12, f0, 12);
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    cnd_ = fcc;
    if (cnd_) { goto L_088581C4; }
    goto L_088581AC;
L_088581AC:;
    v0 = D_08AEBD20 - (-17120);
    f0 = BITSF(LD32(v0-17120));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { a1 = (u32)-1; goto L_088581CC; }
    goto L_088581C4;
L_088581C4:;
    f20 = f0;
    a1 = (u32)-1;
    goto L_088581CC;
L_088581CC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08857F20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088581D4;
L_088581D4:;
    v0 = LD32(s0+56);
    f2 = f20 * f0;
    a2 = v0 - 1;
    cnd_ = (s32)a2 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0885839C; }
    goto L_088581E8;
L_088581E8:;
    a0 = LD32(s0+60);
    goto L_088581EC;
L_088581EC:;
    v1 = a1 << 2;
    v0 = v1 + a0;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f2, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(v0+4)); goto L_08858220; }
    goto L_08858208;
L_08858208:;
    a1 = a1 + 1;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    v1 = a1 << 2;
    if (cnd_) { goto L_088581EC; }
    goto L_08858218;
L_08858218:;
    v0 = v1 + a0;
    f1 = BITSF(LD32(v0+4));
    goto L_08858220;
L_08858220:;
    f12 = BITSF(LD32(v0));
    f0 = BITSF(0);
    f1 = f1 - f12;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08858360; }
    goto L_0885823C;
L_0885823C:;
    fcc = FCMP(f12, f2, 12);
    cnd_ = !fcc;
    f0 = f2 - f12;
    if (cnd_) { goto L_08858360; }
    goto L_0885824C;
L_0885824C:;
    cnd_ = s1 == 0;
    f12 = f0 / f1;
    if (cnd_) { goto L_08858328; }
    goto L_08858254;
L_08858254:;
    v1 = D_08AEBD24 - (-17116);
    f0 = BITSF(LD32(v1-17116));
    v0 = LD32(s0+64);
    a0 = a1 << 4;
    v1 = FBITS(f12);
    v0 = v0 + a0;
    a0 = FBITS(f0);
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[115]=BITSF(LD32(v0+(12)));}
    {v[116]=BITSF(LD32(v0+(16)));}
    {v[117]=BITSF(LD32(v0+(20)));}
    {v[118]=BITSF(LD32(v0+(24)));}
    {v[119]=BITSF(LD32(v0+(28)));}
    {v[124]=BITSF(v1);}
    {v[127]=BITSF(a0);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088582DC; }
    goto L_088582BC;
L_088582BC:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_088582DC;
L_088582DC:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_088582F0; }
    goto L_088582E8;
L_088582E8:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_088582F0;
L_088582F0:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08858318; }
    goto L_0885830C;
L_0885830C:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_08858318;
L_08858318:;
    {ST32(s1+(0),FBITS(v[120]));}
    {ST32(s1+(4),FBITS(v[121]));}
    {ST32(s1+(8),FBITS(v[122]));}
    {ST32(s1+(12),FBITS(v[123]));}
    goto L_08858328;
L_08858328:;
    a0 = LD32(s0+68);
    goto L_0885832C;
L_0885832C:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    a1 = s2 + 0;
    a0 = a0 + v0;
    { rv_t r_ = func_088497D8(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858344;
L_08858344:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08858360:;
    f12 = BITSF(0);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s0+68); goto L_0885832C; }
    goto L_0885836C;
L_0885836C:;
    v1 = LD32(s0+64);
    a0 = a1 << 4;
    a0 = a0 + v1;
    v0 = LD32(a0);
    ST32(s1, v0);
    v1 = LD32(a0+4);
    ST32(s1+4, v1);
    v0 = LD32(a0+8);
    ST32(s1+8, v0);
    v1 = LD32(a0+12);
    ST32(s1+12, v1);
    goto L_08858328;
L_0885839C:;
    a0 = LD32(s0+60);
    v1 = 0 + 0;
    goto L_08858218;
}

/* 088583A8 */
void func_088583A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
L_088583A8:;
    v1 = 35;
    ST32(a0+4, v1);
    v1 = D_08AEBD28 - (-17112);
    v0 = D_08AF2658 - (9816);
    f0 = BITSF(LD32(v1-17112));
    v0 = v0 + 9816;
    a1 = (u32)-1;
    ST32(a0, v0);
    v0 = 999;
    ST32(a0+12, FBITS(f0));
    ST32(a0+24, a1);
    ST32(a0+40, v0);
    ST32(a0+8, a1);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+28, 0);
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    return;
}

/* 088583F4 */
void func_088583F4(u32 a0)
{
    u32 v0 = 0;
L_088583F4:;
    v0 = D_08AF2658 - (9816);
    v0 = v0 + 9816;
    ST32(a0, v0);
    return;
}

/* 08858404 */
rv_t func_08858404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08858404:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858428;
L_08858428:;
    a0 = s0 + 0;
    a1 = LD32(s1+4);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858434;
L_08858434:;
    f12 = BITSF(LD32(s1+16));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858440;
L_08858440:;
    f12 = BITSF(LD32(s1+20));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885844C;
L_0885844C:;
    f12 = BITSF(LD32(s1+12));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858458;
L_08858458:;
    f12 = BITSF(LD32(s1+36));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858464;
L_08858464:;
    a1 = LD32(s1+40);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858470;
L_08858470:;
    a1 = LD32(s1+24);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885847C;
L_0885847C:;
    a1 = LD32(s1+28);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858488;
L_08858488:;
    a1 = LD32(s1+32);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858494;
L_08858494:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088584A8 */
rv_t func_088584A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088584A8:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = 7;
    s0 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088584C8;
L_088584C8:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088584D4;
L_088584D4:;
    v1 = LD32(sp);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_088585FC; }
    goto L_088584E4;
L_088584E4:;
    cnd_ = v1 == v0;
    a1 = s1 + 4;
    if (cnd_) { goto L_08858598; }
    goto L_088584EC;
L_088584EC:;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08858510; }
    goto L_088584F4;
L_088584F4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088584FC;
L_088584FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08858510:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858518;
L_08858518:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858524;
L_08858524:;
    a1 = s1 + 16;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858530;
L_08858530:;
    f0 = BITSF(LD32(s1+16));
    a1 = s1 + 12;
    a0 = s0 + 0;
    ST32(s1+20, FBITS(f0));
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858544;
L_08858544:;
    a1 = s1 + 36;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858550;
L_08858550:;
    a1 = s1 + 40;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885855C;
L_0885855C:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858568;
L_08858568:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858574;
L_08858574:;
    a1 = s1 + 32;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858580;
L_08858580:;
    a0 = s0 + 0;
    a1 = sp + 4;
    goto L_08858588;
L_08858588:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858590;
L_08858590:;
    goto L_088584F4;
L_08858598:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585A0;
L_088585A0:;
    a1 = s1 + 16;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585AC;
L_088585AC:;
    f0 = BITSF(LD32(s1+16));
    a1 = s1 + 12;
    ST32(s1+20, FBITS(f0));
    goto L_088585B8;
L_088585B8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585C0;
L_088585C0:;
    a1 = s1 + 36;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585CC;
L_088585CC:;
    a1 = s1 + 40;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585D8;
L_088585D8:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585E4;
L_088585E4:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088585F0;
L_088585F0:;
    a1 = s1 + 32;
    a0 = s0 + 0;
    goto L_08858588;
L_088585FC:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858608;
L_08858608:;
    a1 = s1 + 16;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858614;
L_08858614:;
    a0 = v0 + 0;
    a1 = s1 + 20;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858620;
L_08858620:;
    a1 = s1 + 12;
    goto L_088585B8;
}

/* 08858628 */
void func_08858628(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08858628:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = D_08B28E18 - (-29160);
    s2 = s3 - 29160;
    func_08873E94(a0, a1);
    goto L_08858650;
L_08858650:;
    a0 = D_08B45A9C - (23196);
    ST32(s1+28, 0);
    v0 = a0 + 23196;
    v1 = s1 + 32;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    v0 = D_08AF2670 - (9840);
    ST32(v1+4, FBITS(f1));
    v0 = v0 + 9840;
    ST32(v1+8, FBITS(f0));
    v1 = LD32(s1+28);
    f0 = BITSF(LD32(a0+23196));
    ST32(s1, v0);
    v1 = v1 | 0x2001;
    v0 = 53;
    ST32(s1+32, FBITS(f0));
    a0 = s1 + 0;
    ST32(s1+28, v1);
    ST16(s1+8, v0);
    ST32(s1+44, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088586A4;
L_088586A4:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088586B0;
L_088586B0:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088586C8;
L_088586C8:;
    a0 = LD32(s3-29160);
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

/* 08858710 */
void func_08858710(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08858710:;
    sp = sp - 32;
    s1 = a0 + 0;
    s3 = D_08B28E18 - (-29160);
    s2 = s3 - 29160;
    func_08873E94(a0, a1);
    goto L_08858738;
L_08858738:;
    a0 = D_08B45A9C - (23196);
    ST32(s1+28, 0);
    v0 = a0 + 23196;
    v1 = s1 + 32;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    v0 = D_08AF2670 - (9840);
    ST32(v1+4, FBITS(f1));
    v0 = v0 + 9840;
    ST32(v1+8, FBITS(f0));
    v1 = LD32(s1+28);
    f0 = BITSF(LD32(a0+23196));
    ST32(s1, v0);
    v1 = v1 | 0x2001;
    v0 = 53;
    ST32(s1+32, FBITS(f0));
    a0 = s1 + 0;
    ST32(s1+28, v1);
    ST16(s1+8, v0);
    ST32(s1+44, 0);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885878C;
L_0885878C:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858798;
L_08858798:;
    v0 = LD32(s2+4);
    s0 = LD32(s1+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088587B0;
L_088587B0:;
    a0 = LD32(s3-29160);
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

/* 088587F8 */
u64 func_088587F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088587F8:;
    sp = sp - 16;
    v0 = D_08AF2670 - (9840);
    v0 = v0 + 9840;
    s0 = a0 + 0;
    v1 = LD32(a0+44);
    cnd_ = v1 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088588D0; }
    goto L_08858820;
L_08858820:;
    a1 = D_08B28E18 - (-29160);
    s1 = a1 - 29160;
    v0 = LD32(s1+4);
    v1 = LD32(s0+4);
    a0 = LD32(a1-29160);
    v0 = v0 - 1;
    v1 = v1 & v0;
    a1 = v1 << 2;
    a0 = a1 + a0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885886C; }
    goto L_08858850;
L_08858850:;
    v0 = LD32(a0);
    goto L_08858854;
L_08858854:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08858888; }
    goto L_0885885C;
L_0885885C:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08858854; }
    goto L_0885886C;
L_0885886C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858874;
L_08858874:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08858888:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08858898; }
    goto L_08858890;
L_08858890:;
    ST8(a0+8, v0);
    goto L_0885886C;
L_08858898:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088588C0; }
    goto L_088588A0;
L_088588A0:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_088588A8;
L_088588A8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088588B0;
L_088588B0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0885886C;
L_088588C0:;
    v1 = LD32(a0+4);
    v0 = a1 + v0;
    ST32(v0, v1);
    goto L_088588A8;
L_088588D0:;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088588D8;
L_088588D8:;
    a0 = s0 + 44;
    func_08AA2994(a0, 0, 0, 0);
    goto L_088588E0;
L_088588E0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088588E8;
L_088588E8:;
    ST32(s0+44, 0);
    goto L_08858820;
}

/* 088588F0 */
rv_t func_088588F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088588F0:;
    sp = sp - 16;
    v0 = D_08AF2670 - (9840);
    s0 = a0 + 0;
    v0 = v0 + 9840;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = 7;
    if (cnd_) { goto L_08858940; }
    goto L_08858918;
L_08858918:;
    a0 = D_08B28E18 - (-29160);
    a1 = s0 + 0;
    a0 = a0 - 29160;
    func_08AAC104(a0, a1, t1, t2, t3);
    goto L_08858928;
L_08858928:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858930;
L_08858930:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08858940:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858948;
L_08858948:;
    a0 = s0 + 44;
    func_08AA2994(a0, 0, 0, 0);
    goto L_08858950;
L_08858950:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858958;
L_08858958:;
    ST32(s0+44, 0);
    goto L_08858918;
}

/* 08858960 */
rv_t func_08858960(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08858960:;
    sp = sp - 16;
    v0 = D_08AF2670 - (9840);
    s0 = a0 + 0;
    v0 = v0 + 9840;
    v1 = LD32(a0+44);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = 7;
    if (cnd_) { goto L_088589B8; }
    goto L_08858988;
L_08858988:;
    a0 = D_08B28E18 - (-29160);
    a1 = s0 + 0;
    a0 = a0 - 29160;
    func_08AAC104(a0, a1, t1, t2, t3);
    goto L_08858998;
L_08858998:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088589A0;
L_088589A0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088589A8;
L_088589A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088589B8:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088589C0;
L_088589C0:;
    a0 = s0 + 44;
    func_08AA2994(a0, 0, 0, 0);
    goto L_088589C8;
L_088589C8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088589D0;
L_088589D0:;
    ST32(s0+44, 0);
    goto L_08858988;
}

/* 088589D8 */
rv_t func_088589D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088589D8:;
    sp = sp - 16;
    v0 = 3;
    a2 = LD_U16(a1+16);
    cnd_ = a2 == v0;
    v0 = 4;
    if (cnd_) { goto L_08858A3C; }
    goto L_088589F0;
L_088589F0:;
    cnd_ = a2 == v0;
    if (cnd_) { a1 = LD32(a0+28); goto L_08858A0C; }
    goto L_088589F8;
L_088589F8:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858A00;
L_08858A00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08858A0C:;
    v0 = a1 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = (a1 & ~(0x1u << 0)) | ((0 & 0x1) << 0); goto L_08858A20; }
    goto L_08858A18;
L_08858A18:;
    v0 = 1;
    goto L_08858A00;
L_08858A20:;
    ST32(a0+28, a1);
    v0 = LD32(a0);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858A34;
L_08858A34:;
    v0 = 1;
    goto L_08858A00;
L_08858A3C:;
    a1 = LD32(a0+28);
    v0 = a1 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 1; goto L_08858A00; }
    goto L_08858A4C;
L_08858A4C:;
    v0 = a1 | 0x1;
    ST32(a0+28, v0);
    v1 = LD32(a0);
    v0 = LD32(v1+72);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858A64;
L_08858A64:;
    v0 = 1;
    goto L_08858A00;
}

/* 08858A6C */
void func_08858A6C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08858A6C:;
    sp = sp - 64;
    s0 = a0 + 0;
    a0 = 48;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858A90;
L_08858A90:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    func_08858710(a0, a1);
    goto L_08858AA0;
L_08858AA0:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08858AC4; }
    goto L_08858AAC;
L_08858AAC:;
    sp = sp + 64;
    return;
L_08858AC4:;
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    ST32(sp+8, 0);
    ST32(sp, v0);
    v0 = (u32)-1;
    v1 = LD32(s2);
    a2 = LD32(s1);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp+28, v1);
    ST8(sp+40, v0);
    ST32(sp+32, s2);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    v1 = LD32(a2+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858B14;
L_08858B14:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    ST32(sp, v0);
    goto L_08858AAC;
}

/* 08858B24 */
rv_t func_08858B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08858B24:;
    sp = sp - 16;
    s2 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858B4C;
L_08858B4C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858B58;
L_08858B58:;
    a1 = LD32(s0+28);
    a0 = s2 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858B68;
L_08858B68:;
    a1 = s0 + 32;
    a0 = s2 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858B74;
L_08858B74:;
    v1 = LD32(s0+28);
    v1 = (v1 >> 4) & 0xff;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08858B98; }
    goto L_08858B84;
L_08858B84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08858B98:;
    v1 = LD32(s0+44);
    goto L_08858B9C;
L_08858B9C:;
    v0 = s1 << 2;
    a0 = s2 + 0;
    v0 = v0 + v1;
    a1 = LD32(v0);
    s1 = s1 + 1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858BB4;
L_08858BB4:;
    v1 = LD32(s0+28);
    v1 = (v1 >> 4) & 0xff;
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s0+44); goto L_08858B9C; }
    goto L_08858BC8;
L_08858BC8:;
    goto L_08858B84;
}

/* 08858BD0 */
rv_t func_08858BD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08858BD0:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = 7;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858BF4;
L_08858BF4:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858C00;
L_08858C00:;
    v1 = LD32(sp);
    cnd_ = (s32)v1 <= 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08858C18; }
    goto L_08858C0C;
L_08858C0C:;
    a1 = s1 + 0;
    { rv_t r_ = func_08874FD8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858C14;
L_08858C14:;
    v1 = LD32(sp);
    goto L_08858C18;
L_08858C18:;
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = s0 + 28;
    if (cnd_) { goto L_08858CBC; }
    goto L_08858C24;
L_08858C24:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08858C4C; }
    goto L_08858C2C;
L_08858C2C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858C34;
L_08858C34:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08858C4C:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858C54;
L_08858C54:;
    a1 = s0 + 32;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858C60;
L_08858C60:;
    a1 = LD32(s0+28);
    v0 = a1 & 0xff0;
    cnd_ = v0 == 0;
    a1 = (a1 >> 4) & 0xff;
    if (cnd_) { goto L_08858C2C; }
    goto L_08858C70;
L_08858C70:;
    a0 = s0 + 44;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_08858C78;
L_08858C78:;
    v1 = LD32(s0+28);
    v1 = (v1 >> 4) & 0xff;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08858C2C; }
    goto L_08858C88;
L_08858C88:;
    a1 = LD32(s0+44);
    goto L_08858C8C;
L_08858C8C:;
    v0 = s2 << 2;
    a0 = s1 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858C9C;
L_08858C9C:;
    v1 = LD32(s0+28);
    s2 = s2 + 1;
    v1 = (v1 >> 4) & 0xff;
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0+44); goto L_08858C8C; }
    goto L_08858CB4;
L_08858CB4:;
    goto L_08858C2C;
L_08858CBC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858CC4;
L_08858CC4:;
    a1 = s0 + 32;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858CD0;
L_08858CD0:;
    a1 = LD32(s0+28);
    v0 = a1 & 0xff0;
    cnd_ = v0 == 0;
    a1 = (a1 >> 4) & 0xff;
    if (cnd_) { goto L_08858C2C; }
    goto L_08858CE0;
L_08858CE0:;
    a0 = s0 + 44;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_08858CE8;
L_08858CE8:;
    v1 = LD32(s0+28);
    v1 = (v1 >> 4) & 0xff;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08858C2C; }
    goto L_08858CF8;
L_08858CF8:;
    a1 = LD32(s0+44);
    goto L_08858CFC;
L_08858CFC:;
    v0 = s2 << 2;
    a0 = s1 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858D0C;
L_08858D0C:;
    v1 = LD32(s0+28);
    s2 = s2 + 1;
    v1 = (v1 >> 4) & 0xff;
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s0+44); goto L_08858CFC; }
    goto L_08858D24;
L_08858D24:;
    goto L_08858C2C;
}

/* 08858D2C */
rv_t func_08858D2C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08858D2C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08858DAC; }
    goto L_08858D60;
L_08858D60:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08858D84; }
    goto L_08858D74;
L_08858D74:;
    v0 = D_08B28E18 - (-29160);
    a0 = LD32(v0-29160);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08858D9C; }
    goto L_08858D84;
L_08858D84:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08858D9C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08858DA4;
L_08858DA4:;
    goto L_08858D84;
L_08858DAC:;
    s3 = D_08B28E18 - (-29160);
    s0 = s3 - 29160;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858DC4;
L_08858DC4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29160, v0);
    if (cnd_) { goto L_08858DF0; }
    goto L_08858DD4;
L_08858DD4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08858DDC;
L_08858DDC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08858DDC; }
    goto L_08858DF0;
L_08858DF0:;
    v0 = s3 - 29160;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08858D60;
}

/* 08858E00 */
rv_t func_08858E00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08858E00:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08858D2C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858E14;
L_08858E14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08858E20 */
rv_t func_08858E20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08858E20:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08858D2C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08858E34;
L_08858E34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08858E40 */
void func_08858E40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08858E40:;
    sp = sp - 192;
    s0 = a0 + 164;
    s3 = a0 + 0;
    a0 = s0 + 0;
    s2 = s3 + 116;
    s1 = a1 + 0;
    func_08873BF8(a0);
    goto L_08858E70;
L_08858E70:;
    a1 = D_08AF2740 - (10048);
    a1 = a1 + 10048;
    a1 = a1 + 4;
    a0 = s3 + 0;
    func_08875A24(a0, a1);
    goto L_08858E84;
L_08858E84:;
    v0 = D_08AF26D4 - (9940);
    v0 = v0 + 9940;
    ST32(s3, v0);
    v1 = v0 + 84;
    v0 = 33;
    ST32(s3+80, 0);
    a2 = sp + 144;
    a1 = 0 + 0;
    ST32(s3+84, 0);
    ST32(s3+164, v1);
    ST32(s3+116, 0);
    ST32(s2+28, 0);
    ST32(s3+148, 0);
    ST32(s3+152, 0);
    ST32(s3+160, 0);
    ST16(s0+8, v0);
    goto L_08858EC4;
L_08858EC4:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08858EC4; }
    goto L_08858EE8;
L_08858EE8:;
    v1 = LD32(sp+144);
    v0 = (s32)v1 < 9;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08859524; }
    goto L_08858EF8;
L_08858EF8:;
    v0 = v1 - 8;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 7;
    if (cnd_) { goto L_08859264; }
    goto L_08858F08;
L_08858F08:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08858F10;
L_08858F10:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x3cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08858F10; }
    goto L_08858F34;
L_08858F34:;
    f0 = BITSF(LD32(sp+8));
    v1 = LD32(sp+12);
    a0 = s3 + 16;
    v0 = 0xffc70000u;
    ST32(a0+8, FBITS(f0));
    a2 = v1 & v0;
    v0 = a2 >> 22;
    f0 = BITSF(LD32(sp));
    t0 = sp + 64;
    a3 = v1 & 0x3;
    ST32(s3+16, FBITS(f0));
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(sp+4));
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, FBITS(f0));
    if (cnd_) { goto L_08859248; }
    goto L_08858F74;
L_08858F74:;
    a1 = D_08AEBD3C - (-17092);
    f0 = BITSF(LD32(a1-17092));
    a0 = LD32(sp+12);
    a2 = D_08AEBD40 - (-17088);
    f0 = f1 * f0;
    v0 = 0x3f0000u;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(a2-17088));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_0885922C; }
    goto L_08858FAC;
L_08858FAC:;
    f0 = BITSF(LD32(a1-17092));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(a2-17088));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08859210; }
    goto L_08858FD0;
L_08858FD0:;
    f0 = BITSF(LD32(a1-17092));
    f1 = BITSF(LD32(a2-17088));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEBD44 - (-17084);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-17084));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_08859018; }
    goto L_08859014;
L_08859014:;
    f0 = f2;
    goto L_08859018;
L_08859018:;
    a1 = a3 + 3;
    v1 = a3 + 1;
    a0 = a3 + 2;
    v1 = v1 & 0x3;
    a0 = a0 & 0x3;
    a1 = a1 & 0x3;
    v0 = a3 << 2;
    v1 = v1 << 2;
    a0 = a0 << 2;
    a1 = a1 << 2;
    v0 = v0 + t0;
    v1 = v1 + t0;
    a0 = a0 + t0;
    a1 = a1 + t0;
    ST32(v0, FBITS(f6));
    a2 = s3 + 92;
    a3 = s3 + 104;
    ST32(v1, FBITS(f5));
    ST32(a0, FBITS(f4));
    ST32(a1, FBITS(f0));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[115]=BITSF(LD32(sp+(76)));}
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
    {ST32(s3+(28),FBITS(v[96]));}
    {ST32(s3+(32),FBITS(v[97]));}
    {ST32(s3+(36),FBITS(v[98]));}
    {ST32(s3+(40),FBITS(v[100]));}
    {ST32(s3+(44),FBITS(v[101]));}
    {ST32(s3+(48),FBITS(v[102]));}
    {ST32(s3+(52),FBITS(v[104]));}
    {ST32(s3+(56),FBITS(v[105]));}
    {ST32(s3+(60),FBITS(v[106]));}
    a0 = LD32(sp+56);
    f5 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+28));
    f3 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    v0 = LD32(sp+16);
    v1 = a0 & 0x1;
    ST32(s3+92, FBITS(f5));
    ST32(s3+88, v0);
    ST32(s3+104, FBITS(f3));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    ST32(a3+8, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(a3+4, FBITS(f4));
    if (cnd_) { goto L_08859130; }
    goto L_08859124;
L_08859124:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x5;
    ST32(s3+84, v0);
    goto L_08859130;
L_08859130:;
    f0 = BITSF(LD32(sp+44));
    v0 = a0 & 0x2;
    cnd_ = v0 == 0;
    ST32(s3+156, FBITS(f0));
    if (cnd_) { goto L_0885914C; }
    goto L_08859140;
L_08859140:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x8;
    ST32(s3+84, v0);
    goto L_0885914C;
L_0885914C:;
    v0 = a0 & 0x4;
    cnd_ = v0 == 0;
    v0 = a0 & 0x8;
    if (cnd_) { goto L_08859168; }
    goto L_08859158;
L_08859158:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x10;
    ST32(s3+84, v0);
    v0 = a0 & 0x8;
    goto L_08859168;
L_08859168:;
    cnd_ = v0 == 0;
    f1 = BITSF(LD32(sp+52));
    if (cnd_) { goto L_08859180; }
    goto L_08859170;
L_08859170:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x40;
    ST32(s3+84, v0);
    f1 = BITSF(LD32(sp+52));
    goto L_08859180;
L_08859180:;
    f0 = BITSF(LD32(sp+48));
    a0 = s2 + 0;
    a1 = s1 + 0;
    ST32(s3+148, FBITS(f0));
    ST32(s3+152, FBITS(f1));
    goto L_08859194;
L_08859194:;
    func_088EA430(a0, a1);
    goto L_0885919C;
L_0885919C:;
    a0 = LD32(s3);
    goto L_088591A0;
L_088591A0:;
    s2 = D_08B28E28 - (-29144);
    s1 = s2 - 29144;
    v0 = LD32(a0-12);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088591C8;
L_088591C8:;
    a0 = LD32(s2-29144);
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
    sp = sp + 192;
    return;
L_08859210:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_08858FD0;
L_0885922C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08858FAC;
L_08859248:;
    v0 = v0 & 0x1;
    v1 = a2 >> 23;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08858F74;
L_08859264:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = LD32(s3); goto L_088591A0; }
    goto L_0885926C;
L_0885926C:;
    a2 = sp + 80;
    a1 = 0 + 0;
    goto L_08859274;
L_08859274:;
    v0 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x34u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s1, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08859274; }
    goto L_08859298;
L_08859298:;
    f0 = BITSF(LD32(sp+88));
    v1 = LD32(sp+92);
    a0 = s3 + 16;
    v0 = 0xffc70000u;
    ST32(a0+8, FBITS(f0));
    a2 = v1 & v0;
    v0 = a2 >> 22;
    f0 = BITSF(LD32(sp+80));
    f2 = BITSF(v0);
    t0 = sp + 64;
    ST32(s3+16, FBITS(f0));
    a3 = v1 & 0x3;
    f1 = (float)(s32)FBITS(f2);
    f0 = BITSF(LD32(sp+84));
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, FBITS(f0));
    if (cnd_) { goto L_08859508; }
    goto L_088592D8;
L_088592D8:;
    a1 = D_08AEBD3C - (-17092);
    f0 = BITSF(LD32(a1-17092));
    a0 = LD32(sp+92);
    a2 = D_08AEBD40 - (-17088);
    f0 = f1 * f0;
    v0 = 0x3f0000u;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(a2-17088));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088594EC; }
    goto L_08859310;
L_08859310:;
    f0 = BITSF(LD32(a1-17092));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(a2-17088));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088594D0; }
    goto L_08859334;
L_08859334:;
    f0 = BITSF(LD32(a1-17092));
    f1 = BITSF(LD32(a2-17088));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEBD44 - (-17084);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-17084));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_0885937C; }
    goto L_08859378;
L_08859378:;
    f0 = f2;
    goto L_0885937C;
L_0885937C:;
    a1 = a3 + 3;
    v1 = a3 + 1;
    a0 = a3 + 2;
    v1 = v1 & 0x3;
    a0 = a0 & 0x3;
    a1 = a1 & 0x3;
    v0 = a3 << 2;
    v1 = v1 << 2;
    a0 = a0 << 2;
    a1 = a1 << 2;
    v0 = v0 + t0;
    v1 = v1 + t0;
    a0 = a0 + t0;
    a1 = a1 + t0;
    ST32(v0, FBITS(f6));
    a2 = s3 + 92;
    a3 = s3 + 104;
    ST32(v1, FBITS(f5));
    ST32(a0, FBITS(f4));
    ST32(a1, FBITS(f0));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[115]=BITSF(LD32(sp+(76)));}
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
    {ST32(s3+(28),FBITS(v[96]));}
    {ST32(s3+(32),FBITS(v[97]));}
    {ST32(s3+(36),FBITS(v[98]));}
    {ST32(s3+(40),FBITS(v[100]));}
    {ST32(s3+(44),FBITS(v[101]));}
    {ST32(s3+(48),FBITS(v[102]));}
    {ST32(s3+(52),FBITS(v[104]));}
    {ST32(s3+(56),FBITS(v[105]));}
    {ST32(s3+(60),FBITS(v[106]));}
    a0 = LD32(sp+128);
    f5 = BITSF(LD32(sp+100));
    f2 = BITSF(LD32(sp+104));
    f1 = BITSF(LD32(sp+108));
    f3 = BITSF(LD32(sp+112));
    f4 = BITSF(LD32(sp+116));
    f0 = BITSF(LD32(sp+120));
    v0 = LD32(sp+96);
    v1 = a0 & 0x1;
    ST32(s3+92, FBITS(f5));
    ST32(s3+88, v0);
    ST32(s3+104, FBITS(f3));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    ST32(a3+8, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(a3+4, FBITS(f4));
    if (cnd_) { goto L_08859494; }
    goto L_08859488;
L_08859488:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x5;
    ST32(s3+84, v0);
    goto L_08859494;
L_08859494:;
    f0 = BITSF(LD32(sp+124));
    v0 = a0 & 0x2;
    cnd_ = v0 == 0;
    ST32(s3+156, FBITS(f0));
    if (cnd_) { goto L_088594B0; }
    goto L_088594A4;
L_088594A4:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x8;
    ST32(s3+84, v0);
    goto L_088594B0;
L_088594B0:;
    v0 = a0 & 0x4;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088594C8; }
    goto L_088594BC;
L_088594BC:;
    v0 = LD32(s3+84);
    v0 = v0 | 0x10;
    ST32(s3+84, v0);
    goto L_088594C8;
L_088594C8:;
    a1 = s1 + 0;
    goto L_08859194;
L_088594D0:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_08859334;
L_088594EC:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08859310;
L_08859508:;
    v0 = v0 & 0x1;
    v1 = a2 >> 23;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088592D8;
L_08859524:;
    a0 = s1 + 0;
    func_08874E18(a0);
    goto L_0885952C;
L_0885952C:;
    v1 = LD32(sp+144);
    goto L_08858EF8;
}

/* 08859534 */
rv_t func_08859534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859534:;
    v0 = D_08AF26D4 - (9940);
    v0 = v0 + 9940;
    v1 = v0 + 84;
    ST32(a0+164, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 164;
    s0 = a0 + 0;
    { rv_t r_ = func_08859A98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859568;
L_08859568:;
    a0 = D_08B28E28 - (-29144);
    a1 = s0 + 0;
    a0 = a0 - 29144;
    func_08AAC228(a0, a1, 0, 0, 0);
    goto L_08859578;
L_08859578:;
    a1 = D_08AF2740 - (10048);
    a1 = a1 + 10048;
    a0 = s0 + 0;
    a1 = a1 + 4;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_0885958C;
L_0885958C:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859594;
L_08859594:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088595A8 */
rv_t func_088595A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088595A8:;
    v0 = D_08AF26D4 - (9940);
    v0 = v0 + 9940;
    v1 = v0 + 84;
    ST32(a0+164, v1);
    sp = sp - 16;
    a1 = 1;
    ST32(a0, v0);
    s1 = a0 + 164;
    s0 = a0 + 0;
    { rv_t r_ = func_08859A98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088595DC;
L_088595DC:;
    a0 = D_08B28E28 - (-29144);
    a1 = s0 + 0;
    a0 = a0 - 29144;
    func_08AAC228(a0, a1, 0, 0, 0);
    goto L_088595EC;
L_088595EC:;
    a1 = D_08AF2740 - (10048);
    a1 = a1 + 10048;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_08859600;
L_08859600:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859608;
L_08859608:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859610;
L_08859610:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08859624 */
rv_t func_08859624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859624:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0885965C; }
    goto L_08859638;
L_08859638:;
    v1 = LD_U16(a1+16);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 4;
    if (cnd_) { goto L_088596E0; }
    goto L_08859648;
L_08859648:;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08859694; }
    goto L_08859650;
L_08859650:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08859674; }
    goto L_0885965C;
L_0885965C:;
    v1 = 0 + 0;
    goto L_08859660;
L_08859660:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08859674:;
    a1 = 1;
    { rv_t r_ = func_08859A98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885967C;
L_0885967C:;
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885968C;
L_0885968C:;
    v1 = 1;
    goto L_08859660;
L_08859694:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+84); goto L_088596D4; }
    goto L_0885969C;
L_0885969C:;
    v0 = 126;
    cnd_ = v1 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08859660; }
    goto L_088596A8;
L_088596A8:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { ST32(a0+156, 0); goto L_088596BC; }
    goto L_088596B4;
L_088596B4:;
    f0 = BITSF(LD32(a1));
    ST32(a0+156, FBITS(f0));
    goto L_088596BC;
L_088596BC:;
    v0 = LD32(s0+84);
    ST32(s0+160, 0);
    v1 = 1;
    v0 = v0 | 0x1;
    goto L_088596CC;
L_088596CC:;
    ST32(s0+84, v0);
    goto L_08859660;
L_088596D4:;
    v1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_088596CC;
L_088596E0:;
    v0 = LD32(a0+84);
    v1 = 1;
    ST32(a0+160, 0);
    v0 = v0 | 0x1;
    ST32(a0+84, v0);
    ST32(a0+156, 0);
    goto L_08859660;
}

/* 088596FC */
rv_t func_088596FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088596FC:;
    sp = sp - 16;
    { rv_t r_ = func_08859718(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885970C;
L_0885970C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08859718 */
rv_t func_08859718(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859718:;
    sp = sp - 16;
    v1 = LD32(a0+84);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08859834; }
    goto L_08859734;
L_08859734:;
    a1 = LD32(a0+80);
    cnd_ = a1 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0885974C; }
    goto L_08859740;
L_08859740:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0885978C; }
    goto L_0885974C;
L_0885974C:;
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+160));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0+160, FBITS(f0));
    if (cnd_) { goto L_0885977C; }
    goto L_0885976C;
L_0885976C:;
    goto L_08859770;
L_08859770:;
    goto L_08859774;
L_08859774:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885977C:;
    { rv_t r_ = func_08859888(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859784;
L_08859784:;
    goto L_08859770;
L_0885978C:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859798;
L_08859798:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08859770; }
    goto L_088597A0;
L_088597A0:;
    f3 = BITSF(LD32(s0+152));
    f0 = BITSF(0);
    fcc = FCMP(f3, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0+84); goto L_08859818; }
    goto L_088597B8;
L_088597B8:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBD48 - (-17080);
    f2 = BITSF(LD32(s0+148));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-17080));
    f3 = f3 - f2;
    a0 = a0 + v1;
    f1 = f1 * f0;
    ST32(a2+4, a0);
    f1 = f1 * f3;
    ST32(a1+23232, v1);
    f2 = f2 + f1;
    ST32(s0+160, FBITS(f2));
    goto L_08859810;
L_08859810:;
    ST32(s0+80, 0);
    goto L_0885976C;
L_08859818:;
    v0 = v1 & 0x20;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0); goto L_0885982C; }
    goto L_08859824;
L_08859824:;
    ST32(s0+160, FBITS(f0));
    goto L_08859810;
L_0885982C:;
    ST32(s0+84, v1);
    goto L_08859810;
L_08859834:;
    v0 = LD32(a0+80);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08859770; }
    goto L_08859840;
L_08859840:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08859774; }
    goto L_0885984C;
L_0885984C:;
    a1 = 0 + 0;
    { rv_t r_ = func_08859A98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859854;
L_08859854:;
    goto L_08859770;
}

/* 0885985C */
rv_t func_0885985C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885985C:;
    sp = sp - 16;
    a0 = a1 + 0;
    a1 = a2 + 0;
    a2 = a3 + 0;
    a3 = t0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885987C;
L_0885987C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08859888 */
rv_t func_08859888(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859888:;
    sp = sp - 16;
    v0 = LD32(a0+80);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08859A88; }
    goto L_088598A8;
L_088598A8:;
    v0 = LD32(s0+84);
    goto L_088598AC;
L_088598AC:;
    ST32(s0+160, 0);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+84, v0);
    a0 = LD32(s0+88);
    { rv_t r_ = func_088E9FDC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088598C0;
L_088598C0:;
    f12 = BITSF(LD32(s0+156));
    f1 = BITSF(0);
    fcc = FCMP(f1, f12, 12);
    cnd_ = !fcc;
    s2 = v0 + 0;
    if (cnd_) { goto L_0885993C; }
    goto L_088598D8;
L_088598D8:;
    f0 = BITSF(LD32(s0+152));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0+116); goto L_08859940; }
    goto L_088598EC;
L_088598EC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+116); goto L_08859940; }
    goto L_088598F4;
L_088598F4:;
    v0 = LD32(v0+64);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08859A78; }
    goto L_08859904;
L_08859904:;
    f0 = BITSF(LD32(s2+52));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0+116); goto L_08859940; }
    goto L_08859918;
L_08859918:;
    v0 = LD32(s0+84);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+84, v0);
    goto L_08859924;
L_08859924:;
    goto L_08859928;
L_08859928:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885993C:;
    v0 = LD32(s0+116);
    goto L_08859940;
L_08859940:;
    cnd_ = v0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_08859A5C; }
    goto L_08859948;
L_08859948:;
    a3 = LD32(s0+88);
    a1 = s0 + 16;
    v0 = LD32(v1+52);
    a2 = s0 + 28;
    t0 = s0 + 116;
    a0 = s0 + 0;
    goto L_08859960;
L_08859960:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859968;
L_08859968:;
    ST32(s0+80, v0);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    v0 = LD32(s0+84);
    a1 = LD32(s0+80);
    v0 = v0 | 0x1;
    ST32(s0+84, v0);
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859988;
L_08859988:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08859924; }
    goto L_08859990;
L_08859990:;
    v0 = s0 + 92;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s1 + 188;
    ST32(v1+8, FBITS(f0));
    v0 = s0 + 104;
    a1 = s1 + 200;
    ST32(v1+4, FBITS(f1));
    a0 = s1 + 0;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+92));
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(s1+188, FBITS(f2));
    v0 = LD32(s1+320);
    f0 = BITSF(LD32(s0+104));
    v0 = v0 | 0x2;
    ST32(s1+200, FBITS(f0));
    ST32(s1+320, v0);
    a1 = LD32(s0+84);
    a1 = (a1 >> 3) & 0x1;
    func_088E2D44(a0, a1);
    goto L_088599EC;
L_088599EC:;
    a1 = LD32(s0+84);
    a0 = s1 + 0;
    a1 = (a1 >> 4) & 0x1;
    func_088E2D9C(a0, a1);
    goto L_088599FC;
L_088599FC:;
    a1 = LD32(s0+84);
    a0 = s1 + 0;
    a1 = (a1 >> 6) & 0x1;
    v0 = func_088E2DBC(a0, a1);
    goto L_08859A0C;
L_08859A0C:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08859928; }
    goto L_08859A14;
L_08859A14:;
    f1 = BITSF(LD32(s0+156));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = BITSF(LD32(s2+52)); goto L_08859A48; }
    goto L_08859A2C;
L_08859A2C:;
    v0 = LD32(s2+64);
    goto L_08859A30;
L_08859A30:;
    v1 = LD32(s0+84);
    v0 = v0 ^ 0x2;
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 5)) | ((v0 & 0x1) << 5);
    ST32(s0+84, v1);
    goto L_08859924;
L_08859A48:;
    a0 = s1 + 0;
    f12 = f1 / f12;
    f0 = func_088E51D4(a0, f12);
    goto L_08859A54;
L_08859A54:;
    v0 = LD32(s2+64);
    goto L_08859A30;
L_08859A5C:;
    a3 = LD32(s0+88);
    a1 = s0 + 16;
    v0 = LD32(v1+52);
    a2 = s0 + 28;
    a0 = s0 + 0;
    t0 = 0 + 0;
    goto L_08859960;
L_08859A78:;
    f13 = BITSF(LD32(s2+52));
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859A80;
L_08859A80:;
    ST32(s0+156, FBITS(f0));
    goto L_0885993C;
L_08859A88:;
    a1 = 1;
    { rv_t r_ = func_08859A98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859A90;
L_08859A90:;
    v0 = LD32(s0+84);
    goto L_088598AC;
}

/* 08859A98 */
rv_t func_08859A98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859A98:;
    sp = sp - 16;
    v1 = a1 + 0;
    s1 = v1 & 0xff;
    s0 = a0 + 0;
    v0 = LD32(a0+84);
    a2 = LD32(a0+80);
    a0 = D_08B30B5C - (2908);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = a0 + 2908;
    a1 = a2 + 0;
    ST32(s0+84, v0);
    cnd_ = a2 != 0;
    ST32(s0+160, 0);
    if (cnd_) { goto L_08859AEC; }
    goto L_08859AD8;
L_08859AD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08859AEC:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859AF4;
L_08859AF4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08859B20; }
    goto L_08859AFC;
L_08859AFC:;
    a1 = s1 + 0;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859B04;
L_08859B04:;
    v1 = s1 ^ 0x1;
    v0 = LD32(s0+84);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    cnd_ = s1 == 0;
    ST32(s0+84, v0);
    if (cnd_) { goto L_08859AD8; }
    goto L_08859B18;
L_08859B18:;
    ST32(s0+80, 0);
    goto L_08859AD8;
L_08859B20:;
    v0 = LD32(s0+84);
    ST32(s0+80, 0);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+84, v0);
    goto L_08859AD8;
}

/* 08859B34 */
rv_t func_08859B34(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859B34:;
    sp = sp - 16;
    v1 = a0 + 16;
    v0 = a0 + 28;
    t0 = a0 + 0;
    s2 = a1 + 0;
    s1 = a3 & 0xff;
    s0 = a2 + 0;
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    ST32(a0+16, FBITS(f2));
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(a2+32));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    f3 = BITSF(LD32(a2+12));
    f4 = BITSF(LD32(a2+16));
    f5 = BITSF(LD32(a2+20));
    f6 = BITSF(LD32(a2+24));
    f7 = BITSF(LD32(a2+28));
    ST32(v0+32, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    f0 = BITSF(LD32(a2));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    ST32(t0+28, FBITS(f0));
    a1 = LD32(t0+80);
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859BD0;
L_08859BD0:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    cnd_ = v0 == 0;
    a3 = s1 + 0;
    if (cnd_) { goto L_08859BEC; }
    goto L_08859BE4;
L_08859BE4:;
    { rv_t r_ = func_088E48F4(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859BEC;
L_08859BEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08859C04 */
rv_t func_08859C04(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859C04:;
    sp = sp - 16;
    v0 = a1 & 0xff;
    a1 = 0 + 0;
    a2 = LD32(a0+84);
    a2 = (a2 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(a0+84, a2);
    ST32(a0+156, 0);
    cnd_ = v0 == 0;
    ST32(a0+160, 0);
    if (cnd_) { goto L_08859C54; }
    goto L_08859C2C;
L_08859C2C:;
    v0 = LD32(a0+80);
    cnd_ = v0 != 0;
    v1 = a2 & 0x2;
    if (cnd_) { goto L_08859C40; }
    goto L_08859C38;
L_08859C38:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08859C4C; }
    goto L_08859C40;
L_08859C40:;
    { rv_t r_ = func_08859888(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859C48;
L_08859C48:;
    goto L_08859C4C;
L_08859C4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08859C54:;
    { rv_t r_ = func_08859A98(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859C5C;
L_08859C5C:;
    goto L_08859C4C;
}

/* 08859C64 */
u64 func_08859C64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859C64:;
    sp = sp - 16;
    v1 = a0 + 0;
    s0 = a1 & 0xff;
    a2 = LD32(a0+80);
    v0 = LD32(v1+84);
    a0 = D_08B30B5C - (2908);
    v0 = (v0 & ~(0x1u << 3)) | ((s0 & 0x1) << 3);
    a0 = a0 + 2908;
    a1 = a2 + 0;
    cnd_ = a2 != 0;
    ST32(v1+84, v0);
    if (cnd_) { goto L_08859CA8; }
    goto L_08859C98;
L_08859C98:;
    goto L_08859C9C;
L_08859C9C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08859CA8:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859CB0;
L_08859CB0:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08859C98; }
    goto L_08859CBC;
L_08859CBC:;
    func_088E2D44(a0, a1);
    goto L_08859CC4;
L_08859CC4:;
    goto L_08859C9C;
}

/* 08859CCC */
rv_t func_08859CCC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08859CCC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08859D4C; }
    goto L_08859D00;
L_08859D00:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08859D24; }
    goto L_08859D14;
L_08859D14:;
    v0 = D_08B28E28 - (-29144);
    a0 = LD32(v0-29144);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08859D3C; }
    goto L_08859D24;
L_08859D24:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08859D3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08859D44;
L_08859D44:;
    goto L_08859D24;
L_08859D4C:;
    s3 = D_08B28E28 - (-29144);
    s0 = s3 - 29144;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859D64;
L_08859D64:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29144, v0);
    if (cnd_) { goto L_08859D90; }
    goto L_08859D74;
L_08859D74:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08859D7C;
L_08859D7C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08859D7C; }
    goto L_08859D90;
L_08859D90:;
    v0 = s3 - 29144;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08859D00;
}

/* 08859DA0 */
rv_t func_08859DA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859DA0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08859CCC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859DB4;
L_08859DB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08859DC0 */
rv_t func_08859DC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08859DC0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08859CCC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08859DD4;
L_08859DD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08859DE0 */
void func_08859DE0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08859DE0:;
    sp = sp - 176;
    s1 = a0 + 0;
    s2 = s1 + 104;
    s0 = a2 + 0;
    func_08873E94(a0, a1);
    goto L_08859E04;
L_08859E04:;
    v0 = D_08AF2820 - (10272);
    v0 = v0 + 10272;
    ST32(s1, v0);
    v0 = 33;
    a2 = sp + 144;
    ST32(s2+28, 0);
    a1 = 0 + 0;
    ST16(s1+8, v0);
    ST32(s1+104, 0);
    ST32(s1+136, 0);
    ST32(s1+140, 0);
    goto L_08859E30;
L_08859E30:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08859E30; }
    goto L_08859E54;
L_08859E54:;
    v1 = LD32(sp+144);
    v0 = (s32)v1 < 9;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0885A474; }
    goto L_08859E64;
L_08859E64:;
    v0 = v1 - 8;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 7;
    if (cnd_) { goto L_0885A1E4; }
    goto L_08859E74;
L_08859E74:;
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_08859E7C;
L_08859E7C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x3cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08859E7C; }
    goto L_08859EA0;
L_08859EA0:;
    f0 = BITSF(LD32(sp+8));
    v1 = LD32(sp+12);
    a0 = s1 + 32;
    v0 = 0xffc70000u;
    ST32(a0+8, FBITS(f0));
    a3 = v1 & v0;
    v0 = a3 >> 22;
    f0 = BITSF(LD32(sp));
    t1 = sp + 64;
    t0 = v1 & 0x3;
    ST32(s1+32, FBITS(f0));
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(sp+4));
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, FBITS(f0));
    if (cnd_) { goto L_0885A1C8; }
    goto L_08859EE0;
L_08859EE0:;
    a1 = D_08AEBD58 - (-17064);
    f0 = BITSF(LD32(a1-17064));
    a0 = LD32(sp+12);
    a2 = D_08AEBD5C - (-17060);
    f0 = f1 * f0;
    v0 = 0x3f0000u;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(a2-17060));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_0885A1AC; }
    goto L_08859F18;
L_08859F18:;
    f0 = BITSF(LD32(a1-17064));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(a2-17060));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_0885A190; }
    goto L_08859F3C;
L_08859F3C:;
    f0 = BITSF(LD32(a1-17064));
    f1 = BITSF(LD32(a2-17060));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEBD60 - (-17056);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-17056));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_08859F84; }
    goto L_08859F80;
L_08859F80:;
    f0 = f2;
    goto L_08859F84;
L_08859F84:;
    a2 = t0 + 3;
    v0 = t0 + 1;
    a1 = t0 + 2;
    v0 = v0 & 0x3;
    a1 = a1 & 0x3;
    a2 = a2 & 0x3;
    v1 = t0 << 2;
    v0 = v0 << 2;
    a1 = a1 << 2;
    a2 = a2 << 2;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a1 = a1 + t1;
    a2 = a2 + t1;
    ST32(v1, FBITS(f6));
    a3 = s1 + 80;
    t0 = s1 + 92;
    ST32(v0, FBITS(f5));
    v0 = D_08B2858C - (-31348);
    a0 = s2 + 0;
    ST32(a1, FBITS(f4));
    a1 = s0 + 0;
    ST32(a2, FBITS(f0));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[115]=BITSF(LD32(sp+(76)));}
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
    {ST32(s1+(44),FBITS(v[96]));}
    {ST32(s1+(48),FBITS(v[97]));}
    {ST32(s1+(52),FBITS(v[98]));}
    {ST32(s1+(56),FBITS(v[100]));}
    {ST32(s1+(60),FBITS(v[101]));}
    {ST32(s1+(64),FBITS(v[102]));}
    {ST32(s1+(68),FBITS(v[104]));}
    {ST32(s1+(72),FBITS(v[105]));}
    {ST32(s1+(76),FBITS(v[106]));}
    f1 = BITSF(LD32(v0-31348));
    f0 = BITSF(LD32(sp+44));
    v1 = LD32(sp+56);
    f4 = BITSF(LD32(sp+48));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+28));
    f5 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+40));
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    v0 = LD32(sp+16);
    ST32(a3+4, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(t0+8, FBITS(f2));
    ST32(t0+4, FBITS(f3));
    ST32(s1+28, v0);
    ST32(s1+80, FBITS(f0));
    ST32(s1+92, FBITS(f6));
    ST32(s1+144, FBITS(f1));
    ST32(s1+136, FBITS(f4));
    ST32(s1+140, FBITS(f5));
    goto L_0885A0B4;
L_0885A0B4:;
    ST32(s1+148, v1);
    func_088EA430(a0, a1);
    goto L_0885A0BC;
L_0885A0BC:;
    v0 = LD32(s1+148);
    goto L_0885A0C0;
L_0885A0C0:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a2 = LD_U16(s1+8);
    if (cnd_) { goto L_0885A154; }
    goto L_0885A0CC;
L_0885A0CC:;
    a3 = 0 + 0;
    a0 = 126;
    a1 = 4;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A0DC;
L_0885A0DC:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_0885A130; }
    goto L_0885A0E4;
L_0885A0E4:;
    v1 = LD32(v0+24);
    cnd_ = v1 == 0;
    v0 = D_08B2858C - (-31348);
    if (cnd_) { goto L_0885A100; }
    goto L_0885A0F0;
L_0885A0F0:;
    f0 = BITSF(LD32(v0-31348));
    f1 = BITSF(LD32(s1+144));
    f0 = f0 - f1;
    ST32(v1, FBITS(f0));
    goto L_0885A100;
L_0885A100:;
    v0 = 2;
    ST32(a3, v0);
    a0 = a3 + 0;
    a1 = 1;
    v0 = LD32(a3+28);
    v1 = LD32(s1+4);
    a2 = 1;
    v0 = v0 | 0x1;
    ST32(a3+4, v1);
    ST32(a3+28, v0);
    goto L_0885A128;
L_0885A128:;
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A130;
L_0885A130:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A13C;
L_0885A13C:;
    sp = sp + 176;
    return;
L_0885A154:;
    a0 = 4;
    a1 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A164;
L_0885A164:;
    v1 = 2;
    ST32(v0, v1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(v0+28);
    a3 = LD32(s1+4);
    a2 = 1;
    v1 = v1 | 0x1;
    ST32(v0+4, a3);
    ST32(v0+28, v1);
    goto L_0885A128;
L_0885A190:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_08859F3C;
L_0885A1AC:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_08859F18;
L_0885A1C8:;
    v0 = v0 & 0x1;
    v1 = a3 >> 23;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f1 = (float)(s32)FBITS(f2);
    f1 = f1 + f1;
    goto L_08859EE0;
L_0885A1E4:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1+148); goto L_0885A0C0; }
    goto L_0885A1EC;
L_0885A1EC:;
    a2 = sp + 80;
    a1 = 0 + 0;
    goto L_0885A1F4;
L_0885A1F4:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x34u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_0885A1F4; }
    goto L_0885A218;
L_0885A218:;
    f0 = BITSF(LD32(sp+88));
    v1 = LD32(sp+92);
    a0 = s1 + 32;
    v0 = 0xffc70000u;
    ST32(a0+8, FBITS(f0));
    a3 = v1 & v0;
    v0 = a3 >> 22;
    f0 = BITSF(LD32(sp+80));
    f2 = BITSF(v0);
    t1 = sp + 64;
    ST32(s1+32, FBITS(f0));
    t0 = v1 & 0x3;
    f1 = (float)(s32)FBITS(f2);
    f0 = BITSF(LD32(sp+84));
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, FBITS(f0));
    if (cnd_) { goto L_0885A458; }
    goto L_0885A258;
L_0885A258:;
    a1 = D_08AEBD58 - (-17064);
    f0 = BITSF(LD32(a1-17064));
    a0 = LD32(sp+92);
    a2 = D_08AEBD5C - (-17060);
    f0 = f1 * f0;
    v0 = 0x3f0000u;
    v0 = v0 | 0xf000;
    f1 = BITSF(LD32(a2-17060));
    v1 = a0 & v0;
    v0 = v1 >> 12;
    f6 = f0 - f1;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_0885A43C; }
    goto L_0885A290;
L_0885A290:;
    f0 = BITSF(LD32(a1-17064));
    v1 = a0 & 0xffc;
    v0 = v1 >> 2;
    f0 = f2 * f0;
    f1 = BITSF(LD32(a2-17060));
    f2 = BITSF(v0);
    f5 = f0 - f1;
    cnd_ = (s32)v0 < 0;
    f4 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_0885A420; }
    goto L_0885A2B4;
L_0885A2B4:;
    f0 = BITSF(LD32(a1-17064));
    f1 = BITSF(LD32(a2-17060));
    f2 = f6 * f6;
    f0 = f4 * f0;
    v0 = D_08AEBD60 - (-17056);
    f3 = f5 * f5;
    f4 = f0 - f1;
    f0 = BITSF(LD32(v0-17056));
    f0 = f0 - f2;
    f1 = f4 * f4;
    f2 = BITSF(0);
    f0 = f0 - f3;
    f0 = f0 - f1;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f0 = sqrtf(f0);
    if (cnd_) { goto L_0885A2FC; }
    goto L_0885A2F8;
L_0885A2F8:;
    f0 = f2;
    goto L_0885A2FC;
L_0885A2FC:;
    a2 = t0 + 3;
    v0 = t0 + 1;
    a1 = t0 + 2;
    v0 = v0 & 0x3;
    a1 = a1 & 0x3;
    a2 = a2 & 0x3;
    v1 = t0 << 2;
    v0 = v0 << 2;
    a1 = a1 << 2;
    a2 = a2 << 2;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a1 = a1 + t1;
    a2 = a2 + t1;
    ST32(v1, FBITS(f6));
    a3 = s1 + 80;
    t0 = s1 + 92;
    ST32(v0, FBITS(f5));
    v0 = D_08B2858C - (-31348);
    a0 = s2 + 0;
    ST32(a1, FBITS(f4));
    a1 = s0 + 0;
    ST32(a2, FBITS(f0));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[115]=BITSF(LD32(sp+(76)));}
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
    {ST32(s1+(44),FBITS(v[96]));}
    {ST32(s1+(48),FBITS(v[97]));}
    {ST32(s1+(52),FBITS(v[98]));}
    {ST32(s1+(56),FBITS(v[100]));}
    {ST32(s1+(60),FBITS(v[101]));}
    {ST32(s1+(64),FBITS(v[102]));}
    {ST32(s1+(68),FBITS(v[104]));}
    {ST32(s1+(72),FBITS(v[105]));}
    {ST32(s1+(76),FBITS(v[106]));}
    f2 = BITSF(LD32(v0-31348));
    f0 = BITSF(LD32(sp+124));
    v1 = LD32(sp+128);
    f1 = BITSF(LD32(sp+120));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+108));
    f4 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(sp+116));
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(sp+104));
    v0 = LD32(sp+96);
    ST32(t0+8, FBITS(f1));
    ST32(a3+4, FBITS(f0));
    f0 = BITSF(LD32(sp+100));
    ST32(t0+4, FBITS(f3));
    ST32(s1+28, v0);
    ST32(s1+80, FBITS(f0));
    ST32(s1+92, FBITS(f4));
    ST32(s1+144, FBITS(f2));
    goto L_0885A0B4;
L_0885A420:;
    v0 = v0 & 0x1;
    v1 = v1 >> 3;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f4 = (float)(s32)FBITS(f0);
    f4 = f4 + f4;
    goto L_0885A2B4;
L_0885A43C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 13;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_0885A290;
L_0885A458:;
    v0 = v0 & 0x1;
    v1 = a3 >> 23;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_0885A258;
L_0885A474:;
    a1 = s0 + 0;
    { rv_t r_ = func_08874CE4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A47C;
L_0885A47C:;
    v1 = LD32(sp+144);
    goto L_08859E64;
}

/* 0885A484 */
rv_t func_0885A484(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885A484:;
    v0 = D_08AF2820 - (10272);
    v0 = v0 + 10272;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A4A0;
L_0885A4A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885A4AC */
rv_t func_0885A4AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885A4AC:;
    v0 = D_08AF2820 - (10272);
    v0 = v0 + 10272;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08873F2C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A4CC;
L_0885A4CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A4D4;
L_0885A4D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885A4E4 */
rv_t func_0885A4E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885A4E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0885A51C; }
    goto L_0885A4F8;
L_0885A4F8:;
    a1 = LD_U16(a1+16);
    v0 = 3;
    cnd_ = a1 == v0;
    v0 = (s32)a1 < 4;
    if (cnd_) { goto L_0885A594; }
    goto L_0885A508;
L_0885A508:;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_0885A544; }
    goto L_0885A510;
L_0885A510:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0885A534; }
    goto L_0885A51C;
L_0885A51C:;
    v1 = 0 + 0;
    goto L_0885A520;
L_0885A520:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885A534:;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A53C;
L_0885A53C:;
    v1 = 1;
    goto L_0885A520;
L_0885A544:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_0885A520; }
    goto L_0885A54C;
L_0885A54C:;
    a0 = 4;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A560;
L_0885A560:;
    v1 = 2;
    ST32(v0, v1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(s0+4);
    a2 = 1;
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A580;
L_0885A580:;
    v0 = LD32(s0+148);
    v1 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+148, v0);
    goto L_0885A520;
L_0885A594:;
    a0 = 3;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A5A8;
L_0885A5A8:;
    v1 = 2;
    ST32(v0, v1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(s0+4);
    a2 = 1;
    ST32(v0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A5C8;
L_0885A5C8:;
    a0 = LD32(s0+148);
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(v0-31348));
    v1 = a0 & 0x1;
    cnd_ = v1 != 0;
    ST32(s0+144, FBITS(f0));
    if (cnd_) { goto L_0885A53C; }
    goto L_0885A5E0;
L_0885A5E0:;
    v0 = a0 | 0x1;
    ST32(s0+148, v0);
    goto L_0885A53C;
}

/* 0885A5EC */
rv_t func_0885A5EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885A5EC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 104;
    { rv_t r_ = func_08874CD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A608;
L_0885A608:;
    s1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_088EA7D0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885A614;
L_0885A614:;
    s1 = s1 + 64;
    s1 = s1 + v0;
    v0 = s1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885A634 */
rv_t func_0885A634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_0885A634:;
    sp = sp - 176;
    v0 = 9;
    a2 = sp + 144;
    ST32(sp+144, v0);
    s2 = a0 + 0;
    s1 = a1 + 0;
    a1 = 0 + 0;
    goto L_0885A660;
L_0885A660:;
    v0 = LD_U8(a2);
    v1 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0885A660; }
    goto L_0885A688;
L_0885A688:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08874EDC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A694;
L_0885A694:;
    v0 = s2 + 32;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+32));
    s0 = sp + 64;
    a1 = s2 + 44;
    a0 = s0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A6C0;
L_0885A6C0:;
    a0 = sp + 148;
    a1 = s0 + 0;
    func_08AA2EA0(a0, a1);
    goto L_0885A6CC;
L_0885A6CC:;
    v0 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(s2+144));
    f2 = BITSF(LD32(v0-31348));
    v1 = s2 + 92;
    v0 = s2 + 80;
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp));
    f7 = BITSF(LD32(s2+136));
    f8 = BITSF(LD32(s2+140));
    f9 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+4));
    f10 = BITSF(LD32(v1+8));
    v0 = LD32(s2+148);
    f5 = BITSF(LD32(s2+92));
    f6 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(s2+80));
    a1 = LD32(s2+28);
    a0 = LD32(sp+148);
    ST32(sp+80, FBITS(f0));
    a3 = sp + 80;
    a2 = 0 + 0;
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    ST32(sp+92, a0);
    ST32(sp+84, FBITS(f0));
    ST32(sp+88, FBITS(f1));
    ST32(sp+96, a1);
    ST32(sp+12, a0);
    ST32(sp+16, a1);
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f9));
    ST32(sp+32, FBITS(f5));
    ST32(sp+36, FBITS(f6));
    ST32(sp+40, FBITS(f10));
    ST32(sp+44, FBITS(f2));
    ST32(sp+48, FBITS(f7));
    ST32(sp+52, FBITS(f8));
    ST32(sp+56, v0);
    ST32(sp+100, FBITS(f3));
    ST32(sp+104, FBITS(f4));
    ST32(sp+108, FBITS(f9));
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f6));
    ST32(sp+120, FBITS(f10));
    ST32(sp+124, FBITS(f2));
    ST32(sp+128, FBITS(f7));
    ST32(sp+132, FBITS(f8));
    ST32(sp+136, v0);
    goto L_0885A790;
L_0885A790:;
    v0 = LD_U8(a3);
    v1 = LD32(s1);
    a2 = a2 + 1;
    a0 = a2 < 0x3cu;
    ST8(v1, v0);
    a3 = a3 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0885A790; }
    goto L_0885A7B8;
L_0885A7B8:;
    a0 = s2 + 104;
    a1 = s1 + 0;
    { rv_t r_ = func_088EA56C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A7C4;
L_0885A7C4:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
}

/* 0885A7DC */
rv_t func_0885A7DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0885A7DC:;
    sp = sp - 48;
    s1 = a1 + 0;
    a1 = 9;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A804;
L_0885A804:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088750A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A810;
L_0885A810:;
    a1 = s0 + 44;
    a0 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A81C;
L_0885A81C:;
    s2 = sp + 16;
    a1 = s0 + 32;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A82C;
L_0885A82C:;
    a0 = s2 + 0;
    a1 = sp + 0;
    func_08AA2EA0(a0, a1);
    goto L_0885A838;
L_0885A838:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_0882DC08(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885A844;
L_0885A844:;
    a1 = LD32(s0+28);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A850;
L_0885A850:;
    a1 = s0 + 80;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A85C;
L_0885A85C:;
    a1 = s0 + 92;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A868;
L_0885A868:;
    v1 = D_08B2858C - (-31348);
    f0 = BITSF(LD32(s0+144));
    f12 = BITSF(LD32(v1-31348));
    a0 = s1 + 0;
    f12 = f12 - f0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A880;
L_0885A880:;
    f12 = BITSF(LD32(s0+136));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A88C;
L_0885A88C:;
    f12 = BITSF(LD32(s0+140));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A898;
L_0885A898:;
    a1 = LD32(s0+148);
    a0 = s1 + 0;
    s0 = s0 + 104;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A8A8;
L_0885A8A8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_088EA70C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A8B4;
L_0885A8B4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0885A8CC */
void func_0885A8CC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885A8CC:;
    sp = sp - 32;
    a3 = 3;
    s3 = D_08B28E38 - (-29128);
    s2 = s3 - 29128;
    s1 = a0 + 0;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-32);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = 12;
    v1 = LD32(s1);
    a2 = LD32(a1+8);
    v0 = LD32(v1-36);
    v0 = s1 + v0;
    ST32(v0, a2);
    v1 = LD32(s1);
    a2 = LD32(a1+12);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    ST32(v0, a2);
    v1 = LD32(s1);
    a2 = LD32(a1+16);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    ST32(v0, a2);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 17;
    v0 = s1 + v0;
    ST16(v0+8, v1);
    ST32(s1+4, 0);
    v0 = LD32(s1+168);
    f0 = BITSF(LD32(s1+4));
    ST32(s1+36, a3);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s1+100, FBITS(f0));
    ST32(s1+24, FBITS(f0));
    ST32(s1+8, FBITS(f0));
    ST32(s1+168, v0);
    ST32(s1+28, FBITS(f0));
    a1 = LD32(s1);
    ST32(s1+84, FBITS(f0));
    ST32(s1+32, FBITS(f0));
    ST32(s1+96, FBITS(f0));
    ST32(s1+136, FBITS(f0));
    ST32(s1+104, a3);
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885A9BC;
L_0885A9BC:;
    a0 = LD32(s3-29128);
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

/* 0885AA04 */
void func_0885AA04(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885AA04:;
    sp = sp - 16;
    t0 = a0 + 0;
    a3 = D_08B28E38 - (-29128);
    s0 = a3 - 29128;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-32);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = LD32(a0);
    a2 = LD32(a1+8);
    v0 = LD32(a0-36);
    v0 = t0 + v0;
    ST32(v0, a2);
    v1 = LD32(t0);
    a0 = LD32(a1+12);
    v0 = LD32(v1-12);
    v0 = t0 + v0;
    ST32(v0, a0);
    v1 = LD32(t0);
    a2 = LD32(a1+16);
    a0 = LD32(s0+4);
    v0 = LD32(v1-16);
    a1 = LD32(a3-29128);
    a0 = a0 - 1;
    v0 = t0 + v0;
    ST32(v0, a2);
    v1 = LD32(t0);
    v0 = LD32(v1-16);
    v0 = t0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a2 = v1 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0885AAC0; }
    goto L_0885AAA4;
L_0885AAA4:;
    v0 = LD32(a0);
    goto L_0885AAA8;
L_0885AAA8:;
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0885AAD0; }
    goto L_0885AAB0;
L_0885AAB0:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885AAA8; }
    goto L_0885AAC0;
L_0885AAC0:;
    sp = sp + 16;
    return;
L_0885AAD0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885AAE0; }
    goto L_0885AAD8;
L_0885AAD8:;
    ST8(a0+8, v0);
    goto L_0885AAC0;
L_0885AAE0:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_0885AB08; }
    goto L_0885AAE8;
L_0885AAE8:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_0885AAF0;
L_0885AAF0:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885AAF8;
L_0885AAF8:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_0885AAC0;
L_0885AB08:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_0885AAF0;
}

/* 0885AB18 */
rv_t func_0885AB18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885AB18:;
    v0 = D_08AF2894 - (10388);
    sp = sp - 32;
    v0 = v0 + 10388;
    a2 = v0 + 268;
    v1 = v0 + 48;
    s1 = a0 + 0;
    a0 = v0 + 156;
    ST32(s1+172, v1);
    a1 = s1 + 0;
    ST32(s1+448, a2);
    ST32(s1+184, a0);
    a0 = D_08B28E38 - (-29128);
    a0 = a0 - 29128;
    ST32(s1, v0);
    s0 = D_08AF29B8 - (10680);
    s0 = s0 + 10680;
    s2 = s1 + 172;
    s4 = s1 + 448;
    func_08AAC608(a0, a1, t1, t2, t3);
    goto L_0885AB7C;
L_0885AB7C:;
    a1 = s0 + 20;
    a0 = s2 + 0;
    func_0885C360(a0, a1, 0, 0, 0);
    goto L_0885AB88;
L_0885AB88:;
    v0 = D_08AF29DC - (10716);
    a2 = LD32(v0+10716);
    a3 = s0 + 36;
    s3 = s1 + 184;
    ST32(s1, a2);
    s0 = s0 + 48;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s1 + v0;
    ST32(v0, v1);
    a2 = LD32(s1);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s1 = s1 + v0;
    ST32(s1, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885ABD0;
L_0885ABD0:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885ABD8;
L_0885ABD8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0885ABF8 */
rv_t func_0885ABF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885ABF8:;
    v0 = D_08AF2894 - (10388);
    sp = sp - 32;
    v0 = v0 + 10388;
    a2 = v0 + 268;
    v1 = v0 + 48;
    s1 = a0 + 0;
    a0 = v0 + 156;
    ST32(s1+172, v1);
    a1 = s1 + 0;
    ST32(s1+448, a2);
    ST32(s1+184, a0);
    a0 = D_08B28E38 - (-29128);
    a0 = a0 - 29128;
    ST32(s1, v0);
    s0 = D_08AF29B8 - (10680);
    s0 = s0 + 10680;
    s2 = s1 + 172;
    s4 = s1 + 448;
    func_08AAC608(a0, a1, t1, t2, t3);
    goto L_0885AC5C;
L_0885AC5C:;
    a1 = s0 + 20;
    a0 = s2 + 0;
    func_0885C360(a0, a1, 0, 0, 0);
    goto L_0885AC68;
L_0885AC68:;
    v0 = D_08AF29DC - (10716);
    a2 = LD32(v0+10716);
    a3 = s0 + 36;
    s3 = s1 + 184;
    ST32(s1, a2);
    s0 = s0 + 48;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s1 + v0;
    ST32(v0, v1);
    a2 = LD32(s1);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    v0 = s1 + v0;
    ST32(v0, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885ACB0;
L_0885ACB0:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885ACB8;
L_0885ACB8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885ACC0;
L_0885ACC0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0885ACE0 */
rv_t func_0885ACE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885ACE0:;
    sp = sp - 32;
    v0 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0885AD1C; }
    goto L_0885AD04;
L_0885AD04:;
    v1 = LD_U16(a1+16);
    v0 = 90;
    cnd_ = v1 == v0;
    v0 = 108;
    if (cnd_) { goto L_0885B058; }
    goto L_0885AD14;
L_0885AD14:;
    cnd_ = v1 == v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0885AD38; }
    goto L_0885AD1C;
L_0885AD1C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885AD38:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885AD1C; }
    goto L_0885AD44;
L_0885AD44:;
    v0 = LD32(a0);
    f12 = BITSF(LD32(a1+8));
    a2 = 1;
    a0 = LD32(v0-12);
    a1 = s1 + 0;
    a0 = s0 + a0;
    { rv_t r_ = func_0885DE10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885AD60;
L_0885AD60:;
    f0 = BITSF(LD32(s1+124));
    v0 = D_08AEBD98 - (-17000);
    f20 = BITSF(LD32(v0-17000));
    ST32(s0+12, FBITS(f0));
    a0 = s1 + 240;
    a1 = s0 + 152;
    f0 = BITSF(LD32(s1+128));
    ST32(s0+16, FBITS(f0));
    f1 = BITSF(LD32(s1+132));
    ST32(s0+20, FBITS(f1));
    f0 = BITSF(LD32(s1+136));
    ST32(s0+24, FBITS(f0));
    f2 = BITSF(LD32(s1+84));
    f1 = BITSF(LD32(s1+140));
    f2 = f2 * f20;
    f1 = f1 * f2;
    ST32(s0+40, FBITS(f1));
    f0 = BITSF(LD32(s1+144));
    f0 = f0 * f2;
    ST32(s0+44, FBITS(f0));
    f1 = BITSF(LD32(s1+148));
    f1 = f1 * f2;
    ST32(s0+48, FBITS(f1));
    f0 = BITSF(LD32(s1+152));
    f0 = f0 * f2;
    ST32(s0+52, FBITS(f0));
    f1 = BITSF(LD32(s1+156));
    f1 = f1 * f2;
    ST32(s0+56, FBITS(f1));
    f0 = BITSF(LD32(s1+160));
    f0 = f0 * f2;
    ST32(s0+60, FBITS(f0));
    f1 = BITSF(LD32(s1+164));
    ST32(s0+64, FBITS(f1));
    f0 = BITSF(LD32(s1+168));
    ST32(s0+68, FBITS(f0));
    f1 = BITSF(LD32(s1+172));
    ST32(s0+72, FBITS(f1));
    f0 = BITSF(LD32(s1+176));
    ST32(s0+76, FBITS(f0));
    f1 = BITSF(LD32(s1+180));
    ST32(s0+80, FBITS(f1));
    f0 = BITSF(LD32(s1+184));
    ST32(s0+84, FBITS(f0));
    f1 = BITSF(LD32(s1+188));
    ST32(s0+88, FBITS(f1));
    f0 = BITSF(LD32(s1+192));
    ST32(s0+92, FBITS(f0));
    f1 = BITSF(LD32(s1+200));
    ST32(s0+112, FBITS(f1));
    f0 = BITSF(LD32(s1+196));
    ST32(s0+108, FBITS(f0));
    f1 = BITSF(LD32(s1+204));
    ST32(s0+116, FBITS(f1));
    f0 = BITSF(LD32(s1+208));
    ST32(s0+120, FBITS(f0));
    f1 = BITSF(LD32(s1+212));
    ST32(s0+124, FBITS(f1));
    f0 = BITSF(LD32(s1+216));
    ST32(s0+128, FBITS(f0));
    f1 = BITSF(LD32(s1+220));
    ST32(s0+132, FBITS(f1));
    f0 = BITSF(LD32(s1+224));
    ST32(s0+136, FBITS(f0));
    f1 = BITSF(LD32(s1+228));
    ST32(s0+140, FBITS(f1));
    f0 = BITSF(LD32(s1+232));
    ST32(s0+144, FBITS(f0));
    v0 = LD32(s1+236);
    ST32(s0+148, v0);
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(s1+240));
    v1 = LD32(s1+252);
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f2));
    ST32(s0+152, FBITS(f1));
    ST32(s0+164, v1);
    v0 = LD32(s1+256);
    v1 = LD32(s0+168);
    a1 = LD32(s0);
    v0 = (v0 >> 2) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s0+168, v1);
    v0 = LD32(s1+256);
    a0 = LD32(a1-32);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+168, v1);
    s2 = s0 + a0;
    v0 = LD32(s1+256);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s0+168, v1);
    v0 = LD32(s1+256);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s0+168, v1);
    v0 = LD32(s2+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885B044; }
    goto L_0885AEF4;
L_0885AEF4:;
    v0 = LD32(a1-32);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(a1-32); goto L_0885B030; }
    goto L_0885AF08;
L_0885AF08:;
    v0 = s1 + 16;
    f1 = BITSF(LD32(s1+16));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(v1, FBITS(f1));
    a2 = s1 + 88;
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f0));
    v1 = LD32(s0);
    f0 = BITSF(LD32(s1+68));
    v0 = LD32(v1-32);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(v1+12, FBITS(f0));
    f1 = BITSF(LD32(s1+84));
    v0 = LD32(s0);
    f3 = BITSF(LD32(s1+72));
    f1 = f1 * f20;
    f2 = BITSF(LD32(s1+76));
    f0 = BITSF(LD32(s1+80));
    v1 = LD32(v0-32);
    f3 = f3 * f1;
    f0 = f0 * f1;
    v1 = s0 + v1;
    f2 = f2 * f1;
    v0 = LD32(v1+4);
    ST32(v0+24, FBITS(f0));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f2));
    a1 = LD32(s0);
    a0 = LD32(s1+120);
    v1 = LD32(a1-32);
    a0 = (a0 >> 1) & 0x1;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    v0 = LD32(a1+56);
    v0 = (v0 & ~(0x1u << 3)) | ((a0 & 0x1) << 3);
    ST32(a1+56, v0);
    v1 = LD32(s0);
    a1 = LD32(s1+88);
    v0 = LD32(v1-32);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    ST32(a0+32, a1);
    v0 = LD32(a2+4);
    ST32(a0+36, v0);
    v1 = LD32(a2+8);
    ST32(a0+40, v1);
    v0 = LD32(a2+12);
    ST32(a0+44, v0);
    v1 = LD32(a2+16);
    ST32(a0+48, v1);
    v0 = LD32(a2+20);
    ST32(a0+52, v0);
    a1 = LD32(s0);
    a0 = LD32(s0+168);
    v1 = LD32(a1-32);
    a0 = (a0 >> 3) & 0x1;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    v0 = LD32(a1+56);
    v0 = (v0 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    ST32(a1+56, v0);
    a2 = LD32(s0);
    a0 = LD32(s1+120);
    v1 = LD32(a2-32);
    a0 = (a0 >> 3) & 0x1;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    v0 = LD32(a1+56);
    v0 = (v0 & ~(0x1u << 6)) | ((a0 & 0x1) << 6);
    ST32(a1+56, v0);
    a1 = LD32(s0);
    a0 = LD32(a1-32);
    goto L_0885B030;
L_0885B030:;
    a1 = s1 + 0;
    a0 = s0 + a0;
    { rv_t r_ = func_0885C930(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B03C;
L_0885B03C:;
    v0 = 1;
    goto L_0885AD1C;
L_0885B044:;
    { rv_t r_ = func_0889CE40(0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B04C;
L_0885B04C:;
    ST32(s2+4, v0);
    a1 = LD32(s0);
    goto L_0885AEF4;
L_0885B058:;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885AD1C; }
    goto L_0885B064;
L_0885B064:;
    v0 = LD32(a0+168);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885B110; }
    goto L_0885B074;
L_0885B074:;
    v1 = LD32(s0);
    goto L_0885B078;
L_0885B078:;
    v0 = LD32(v1-32);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s0+168); goto L_0885B0AC; }
    goto L_0885B08C;
L_0885B08C:;
    v0 = LD32(s0+104);
    a0 = (u32)-1;
    cnd_ = v0 == a0;
    if (cnd_) { f0 = BITSF(LD32(s1+68)); goto L_0885B108; }
    goto L_0885B09C;
L_0885B09C:;
    v0 = LD32(s0+36);
    cnd_ = v0 == a0;
    v0 = D_08AEBD98 - (-17000);
    if (cnd_) { goto L_0885B0CC; }
    goto L_0885B0A8;
L_0885B0A8:;
    v1 = LD32(s0+168);
    goto L_0885B0AC;
L_0885B0AC:;
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 1; goto L_0885AD1C; }
    goto L_0885B0B8;
L_0885B0B8:;
    v0 = LD32(s1+120);
    v0 = (v0 >> 8) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+168, v1);
    goto L_0885B03C;
L_0885B0CC:;
    f1 = BITSF(LD32(s1+84));
    f0 = BITSF(LD32(v0-17000));
    v1 = LD32(s0);
    f12 = BITSF(LD32(s1+72));
    f1 = f1 * f0;
    f13 = BITSF(LD32(s1+76));
    f14 = BITSF(LD32(s1+80));
    a0 = LD32(v1-32);
    f12 = f12 * f1;
    f14 = f14 * f1;
    f13 = f13 * f1;
    a0 = s0 + a0;
    { u64 r_ = func_0885CC1C(a0, a1, f12, f13, f14); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885B100;
L_0885B100:;
    v1 = LD32(s0+168);
    goto L_0885B0AC;
L_0885B108:;
    ST32(v1+12, FBITS(f0));
    goto L_0885B09C;
L_0885B110:;
    f12 = BITSF(LD32(a1+8));
    a2 = 1;
    a0 = LD32(v0-12);
    a1 = s1 + 0;
    a0 = s0 + a0;
    { rv_t r_ = func_0885DE10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B128;
L_0885B128:;
    v1 = LD32(s0);
    goto L_0885B078;
}

/* 0885B130 */
rv_t func_0885B130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0885B130:;
    sp = sp - 272;
    f0 = BITSF(0);
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_0885B690; }
    goto L_0885B174;
L_0885B174:;
    v0 = LD32(a1-16);
    v0 = a0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_0885B694; }
    goto L_0885B18C;
L_0885B18C:;
    v0 = LD32(a1-32);
    v0 = a0 + v0;
    a1 = LD32(v0+4);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_0885B694; }
    goto L_0885B1A0;
L_0885B1A0:;
    v0 = LD32(a0+168);
    v1 = D_08B285A0 - (-31328);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    f21 = BITSF(LD32(v1-31328));
    if (cnd_) { goto L_0885BF28; }
    goto L_0885B1B4;
L_0885B1B4:;
    v0 = LD32(a1+56);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    f1 = BITSF(LD32(a0+8));
    if (cnd_) { goto L_0885BF20; }
    goto L_0885B1C4;
L_0885B1C4:;
    s1 = D_08AEBD9C - (-16996);
    f0 = BITSF(LD32(s1-16996));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_0885BEF4; }
    goto L_0885B1DC;
L_0885B1DC:;
    f0 = BITSF(LD32(s0+4));
    f0 = f0 + f21;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s0+4, FBITS(f0));
    if (cnd_) { goto L_0885B2B4; }
    goto L_0885B1F4;
L_0885B1F4:;
    f0 = BITSF(LD32(s1-16996));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    f20 = BITSF(LD32(s1-16996));
    if (cnd_) { goto L_0885B2B8; }
    goto L_0885B208;
L_0885B208:;
    v1 = LD32(s0);
    v0 = LD32(v1-32);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v1 = LD32(a0+56);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    a2 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_0885BE6C; }
    goto L_0885B228;
L_0885B228:;
    v1 = LD32(a2+23232);
    a1 = a2 + 23232;
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBDA0 - (-16992);
    f3 = BITSF(LD32(s0+12));
    f1 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(s0+16));
    f0 = BITSF(LD32(v0-16992));
    a0 = a0 + v1;
    f2 = f2 - f3;
    f1 = f1 * f0;
    ST32(a1+4, a0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    f1 = f1 * f2;
    ST32(a2+23232, v1);
    f3 = f3 + f1;
    ST32(s0+8, FBITS(f3));
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885BF54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885B29C;
L_0885B29C:;
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0885B2AC;
L_0885B2AC:;
    ST32(s0+4, 0);
    f1 = BITSF(LD32(s0+8));
    goto L_0885B2B4;
L_0885B2B4:;
    f20 = BITSF(LD32(s1-16996));
    goto L_0885B2B8;
L_0885B2B8:;
    fcc = FCMP(f1, f20, 2);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_0885BE40; }
    goto L_0885B2C8;
L_0885B2C8:;
    f0 = BITSF(LD32(s0+80));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+36); goto L_0885BB44; }
    goto L_0885B2DC;
L_0885B2DC:;
    f0 = BITSF(LD32(s0+84));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+36); goto L_0885BB44; }
    goto L_0885B2F0;
L_0885B2F0:;
    f0 = BITSF(LD32(s0+88));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+36); goto L_0885BB44; }
    goto L_0885B304;
L_0885B304:;
    f0 = BITSF(LD32(s0+92));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+36); goto L_0885BB44; }
    goto L_0885B318;
L_0885B318:;
    v0 = (u32)-1;
    ST32(s0+36, v0);
    goto L_0885B320;
L_0885B320:;
    f0 = BITSF(LD32(s0+132));
    goto L_0885B324;
L_0885B324:;
    f1 = BITSF(LD32(s1-16996));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+104); goto L_0885B8F4; }
    goto L_0885B338;
L_0885B338:;
    f0 = BITSF(LD32(s0+136));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+104); goto L_0885B8F4; }
    goto L_0885B34C;
L_0885B34C:;
    f0 = BITSF(LD32(s0+140));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+104); goto L_0885B8F4; }
    goto L_0885B360;
L_0885B360:;
    f0 = BITSF(LD32(s0+144));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+104); goto L_0885B8F4; }
    goto L_0885B374;
L_0885B374:;
    v0 = (u32)-1;
    ST32(s0+104, v0);
    goto L_0885B37C;
L_0885B37C:;
    a2 = LD32(s0+148);
    goto L_0885B380;
L_0885B380:;
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08B28E68 - (-29080);
    if (cnd_) { goto L_0885B65C; }
    goto L_0885B38C;
L_0885B38C:;
    v1 = a0 - 29080;
    v0 = LD32(v1+4);
    a1 = LD32(a0-29080);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0885B3E0; }
    goto L_0885B3B4;
L_0885B3B4:;
    a0 = LD32(a1);
    goto L_0885B3B8;
L_0885B3B8:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0885B8D4; }
    goto L_0885B3D0;
L_0885B3D0:;
    a1 = LD32(a1+4);
    goto L_0885B3D4;
L_0885B3D4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0885B3B8; }
    goto L_0885B3DC;
L_0885B3DC:;
    s2 = 0 + 0;
    goto L_0885B3E0;
L_0885B3E0:;
    cnd_ = s2 == 0;
    s3 = sp + 16;
    if (cnd_) { goto L_0885B65C; }
    goto L_0885B3E8;
L_0885B3E8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+12);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B410;
L_0885B410:;
    a0 = LD32(s0);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(a0-12);
    ST32(sp, FBITS(f0));
    v1 = s0 + v1;
    f1 = BITSF(LD32(v0+4));
    a1 = LD32(v1);
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    v0 = LD32(a1+16);
    t_ = v0;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B444;
L_0885B444:;
    f8 = BITSF(LD32(v0+32));
    a2 = LD32(s0+164);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f0));
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+20, FBITS(f1));
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    cnd_ = a2 == 0;
    ST32(sp+48, FBITS(f8));
    if (cnd_) { goto L_0885B6D4; }
    goto L_0885B4A4;
L_0885B4A4:;
    a1 = LD32(s2);
    v1 = LD32(s0+168);
    a3 = 0 + 0;
    v0 = LD32(a1+60);
    v1 = v1 & 0x4;
    a1 = a2 + 0;
    a0 = s2 + 0;
    if (v1 != 0) a3 = s3;
    a2 = sp + 0;
    t0 = 1;
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B4D4;
L_0885B4D4:;
    v0 = LD32(s0);
    a1 = sp + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    a2 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B4F4;
L_0885B4F4:;
    v1 = LD32(s0);
    a1 = sp + 0;
    a2 = s3 + 0;
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B510;
L_0885B510:;
    a1 = LD32(s0);
    v1 = (u32)-1;
    v0 = LD32(a1-32);
    v0 = s0 + v0;
    t0 = LD32(v0+8);
    cnd_ = t0 == v1;
    v0 = D_08B44C2C - (19500);
    if (cnd_) { goto L_0885B660; }
    goto L_0885B52C;
L_0885B52C:;
    t2 = LD32(v0+19500);
    v0 = LD32(t2+12);
    cnd_ = t0 == v0;
    s2 = sp + 0;
    if (cnd_) { goto L_0885B6CC; }
    goto L_0885B53C;
L_0885B53C:;
    a0 = LD32(t2);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885B57C; }
    goto L_0885B548;
L_0885B548:;
    a1 = LD32(a0+8);
    goto L_0885B54C;
L_0885B54C:;
    v0 = (s32)t0 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0885B56C; }
    goto L_0885B558;
L_0885B558:;
    v0 = LD32(t2+4);
    v0 = a1 + v0;
    v0 = (s32)t0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885B57C; }
    goto L_0885B56C;
L_0885B56C:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0885B54C; }
    goto L_0885B578;
L_0885B578:;
    v1 = 0 + 0;
    goto L_0885B57C;
L_0885B57C:;
    cnd_ = v1 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_0885B5D4; }
    goto L_0885B584;
L_0885B584:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t1 = LD32(a0+12);
    cnd_ = (s32)t1 <= 0;
    a3 = t0 - v0;
    if (cnd_) { goto L_0885B5BC; }
    goto L_0885B59C;
L_0885B59C:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0885B5A4;
L_0885B5A4:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t1;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_0885B6B4; }
    goto L_0885B5B4;
L_0885B5B4:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885B5A4; }
    goto L_0885B5BC;
L_0885B5BC:;
    v0 = 0 + 0;
    goto L_0885B5C0;
L_0885B5C0:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0885B5D4; }
    goto L_0885B5C8;
L_0885B5C8:;
    s1 = v0 + 0;
    ST32(t2+12, t0);
    ST32(t2+8, v0);
    goto L_0885B5D4;
L_0885B5D4:;
    cnd_ = s1 == 0;
    if (cnd_) { a1 = LD32(s0); goto L_0885B660; }
    goto L_0885B5DC;
L_0885B5DC:;
    v1 = LD32(s1+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s2));
    if (cnd_) { goto L_0885B640; }
    goto L_0885B5EC;
L_0885B5EC:;
    f0 = BITSF(LD32(s1));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885B630; }
    goto L_0885B600;
L_0885B600:;
    f1 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885B630; }
    goto L_0885B618;
L_0885B618:;
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s2+8)); goto L_0885B644; }
    goto L_0885B630;
L_0885B630:;
    a0 = s1 + 0;
    func_088EC3FC(a0, t1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885B638;
L_0885B638:;
    v1 = LD32(s1+24);
    f2 = BITSF(LD32(s2));
    goto L_0885B640;
L_0885B640:;
    f1 = BITSF(LD32(s2+8));
    goto L_0885B644;
L_0885B644:;
    f0 = BITSF(LD32(s2+4));
    v0 = v1 | 0x4;
    ST32(s1+24, v0);
    ST32(s1, FBITS(f2));
    ST32(s1+4, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    goto L_0885B65C;
L_0885B65C:;
    a1 = LD32(s0);
    goto L_0885B660;
L_0885B660:;
    v0 = LD32(a1-12);
    v1 = LD32(a1-32);
    v0 = v0 + 16;
    v0 = s0 + v0;
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    goto L_0885B690;
L_0885B690:;
    goto L_0885B694;
L_0885B694:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_0885B6B4:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_0885B5C0;
L_0885B6CC:;
    s1 = LD32(t2+8);
    goto L_0885B5D4;
L_0885B6D4:;
    v0 = LD32(s0+168);
    s1 = s0 + 152;
    f0 = BITSF(LD32(s0+152));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    v0 = v0 & 0x4;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0885B884; }
    goto L_0885B6FC;
L_0885B6FC:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+16);
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B71C;
L_0885B71C:;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(96);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+8);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    v1 = LD32(s2);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B7EC;
L_0885B7EC:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f4));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f4));
    v1 = LD32(s2);
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B838;
L_0885B838:;
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
    goto L_0885B4D4;
L_0885B884:;
    v1 = LD32(s2);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885B894;
L_0885B894:;
    f2 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s0+152));
    f4 = BITSF(LD32(s1+4));
    f2 = f2 + f5;
    f0 = f0 + f3;
    f1 = f1 + f4;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    goto L_0885B4D4;
L_0885B8D4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0885B3D0; }
    goto L_0885B8E0;
L_0885B8E0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0885B3D4; }
    goto L_0885B8EC;
L_0885B8EC:;
    goto L_0885B3E0;
L_0885B8F4:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0885BB38; }
    goto L_0885B900;
L_0885B900:;
    f0 = BITSF(LD32(s0+96));
    v0 = 1;
    f2 = f0 + f21;
    cnd_ = v1 == v0;
    ST32(s0+96, FBITS(f2));
    if (cnd_) { goto L_0885BAFC; }
    goto L_0885B914;
L_0885B914:;
    f1 = BITSF(LD32(s0+100));
    goto L_0885B918;
L_0885B918:;
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+96)); goto L_0885B980; }
    goto L_0885B920;
L_0885B920:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s0+96));
    if (cnd_) { goto L_0885B980; }
    goto L_0885B934;
L_0885B934:;
    v0 = D_08AEBDA4 - (-16988);
    f3 = BITSF(LD32(v0-16988));
    f2 = f0 / f1;
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f3; goto L_0885B950; }
    goto L_0885B950;
L_0885B950:;
    f1 = BITSF(LD32(s0+112));
    f0 = BITSF(LD32(s0+108));
    goto L_0885B958;
L_0885B958:;
    f0 = f0 - f1;
    v1 = LD32(s0);
    f0 = f0 * f2;
    v0 = LD32(v1-32);
    f1 = f1 + f0;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(v1+12, FBITS(f1));
    f1 = BITSF(LD32(s0+100));
    f0 = BITSF(LD32(s0+96));
    goto L_0885B980;
L_0885B980:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = LD32(s0+148); goto L_0885B380; }
    goto L_0885B990;
L_0885B990:;
    f0 = BITSF(LD32(s1-16996));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { a2 = LD32(s0+148); goto L_0885B380; }
    goto L_0885B9A4;
L_0885B9A4:;
    v1 = LD32(s0+104);
    a0 = 1;
    cnd_ = v1 == a0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0885BAC0; }
    goto L_0885B9B4;
L_0885B9B4:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0885BA7C; }
    goto L_0885B9BC;
L_0885B9BC:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0885BA34; }
    goto L_0885B9C4;
L_0885B9C4:;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+104, a0); goto L_0885B9D4; }
    goto L_0885B9CC;
L_0885B9CC:;
    ST32(s0+96, 0);
    goto L_0885B37C;
L_0885B9D4:;
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+120));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+116));
    goto L_0885BA04;
L_0885BA04:;
    f2 = (float)(s32)FBITS(f0);
    v0 = D_08AEBDA0 - (-16992);
    f0 = BITSF(LD32(v0-16992));
    f1 = f1 - f3;
    a0 = a0 + v1;
    f2 = f2 * f0;
    ST32(a2+4, a0);
    f2 = f2 * f1;
    ST32(a1+23232, v1);
    f3 = f3 + f2;
    ST32(s0+100, FBITS(f3));
    goto L_0885B9CC;
L_0885BA34:;
    v0 = LD32(s0+168);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+96, 0); goto L_0885B37C; }
    goto L_0885BA44;
L_0885BA44:;
    ST32(s0+104, 0);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+128));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+124));
    goto L_0885BA04;
L_0885BA7C:;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(s0+96, 0); goto L_0885B37C; }
    goto L_0885BA84;
L_0885BA84:;
    v0 = 3;
    ST32(s0+104, v0);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+132));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+136));
    goto L_0885BA04;
L_0885BAC0:;
    v0 = 2;
    ST32(s0+104, v0);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+140));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+144));
    goto L_0885BA04;
L_0885BAFC:;
    f1 = BITSF(LD32(s0+100));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEBDA4 - (-16988);
    if (cnd_) { goto L_0885B918; }
    goto L_0885BB14;
L_0885BB14:;
    f2 = f2 / f1;
    f0 = BITSF(LD32(v0-16988));
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { f2 = f0; goto L_0885BB2C; }
    goto L_0885BB2C;
L_0885BB2C:;
    f1 = BITSF(LD32(s0+108));
    f0 = BITSF(LD32(s0+112));
    goto L_0885B958;
L_0885BB38:;
    ST32(s0+104, v0);
    v1 = 3;
    goto L_0885B900;
L_0885BB44:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0885BE34; }
    goto L_0885BB50;
L_0885BB50:;
    f0 = BITSF(LD32(s0+28));
    v0 = 1;
    f2 = f0 + f21;
    cnd_ = v1 == v0;
    ST32(s0+28, FBITS(f2));
    if (cnd_) { goto L_0885BD90; }
    goto L_0885BB64;
L_0885BB64:;
    f1 = BITSF(LD32(s0+32));
    goto L_0885BB68;
L_0885BB68:;
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+28)); goto L_0885BC14; }
    goto L_0885BB70;
L_0885BB70:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s0+28));
    if (cnd_) { goto L_0885BC14; }
    goto L_0885BB84;
L_0885BB84:;
    v0 = D_08AEBDA4 - (-16988);
    f2 = BITSF(LD32(v0-16988));
    f3 = f0 / f1;
    fcc = FCMP(f2, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f2; goto L_0885BBA0; }
    goto L_0885BBA0;
L_0885BBA0:;
    f12 = BITSF(LD32(s0+40));
    f13 = BITSF(LD32(s0+44));
    f14 = BITSF(LD32(s0+48));
    f0 = BITSF(LD32(s0+52));
    f1 = BITSF(LD32(s0+56));
    f2 = BITSF(LD32(s0+60));
    f0 = f0 - f12;
    f1 = f1 - f13;
    f2 = f2 - f14;
    v0 = LD32(s0);
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    a0 = LD32(v0-32);
    f12 = f12 + f0;
    f13 = f13 + f1;
    f14 = f14 + f2;
    a0 = s0 + a0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885CC1C(a0, a1, f12, f13, f14); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BBFC;
L_0885BBFC:;
    f1 = BITSF(LD32(s0+32));
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0885BC10;
L_0885BC10:;
    f0 = BITSF(LD32(s0+28));
    goto L_0885BC14;
L_0885BC14:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+132)); goto L_0885B324; }
    goto L_0885BC24;
L_0885BC24:;
    f0 = BITSF(LD32(s1-16996));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+132)); goto L_0885B324; }
    goto L_0885BC38;
L_0885BC38:;
    v1 = LD32(s0+36);
    a0 = 1;
    cnd_ = v1 == a0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0885BD54; }
    goto L_0885BC48;
L_0885BC48:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0885BD10; }
    goto L_0885BC50;
L_0885BC50:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0885BCC8; }
    goto L_0885BC58;
L_0885BC58:;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+36, a0); goto L_0885BC68; }
    goto L_0885BC60;
L_0885BC60:;
    ST32(s0+28, 0);
    goto L_0885B320;
L_0885BC68:;
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+68));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+64));
    goto L_0885BC98;
L_0885BC98:;
    f2 = (float)(s32)FBITS(f0);
    v0 = D_08AEBDA0 - (-16992);
    f0 = BITSF(LD32(v0-16992));
    f1 = f1 - f3;
    a0 = a0 + v1;
    f2 = f2 * f0;
    ST32(a2+4, a0);
    f2 = f2 * f1;
    ST32(a1+23232, v1);
    f3 = f3 + f2;
    ST32(s0+32, FBITS(f3));
    goto L_0885BC60;
L_0885BCC8:;
    v0 = LD32(s0+168);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+28, 0); goto L_0885B320; }
    goto L_0885BCD8;
L_0885BCD8:;
    ST32(s0+36, 0);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+76));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+72));
    goto L_0885BC98;
L_0885BD10:;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(s0+28, 0); goto L_0885B320; }
    goto L_0885BD18;
L_0885BD18:;
    v0 = 3;
    ST32(s0+36, v0);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+80));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+84));
    goto L_0885BC98;
L_0885BD54:;
    v0 = 2;
    ST32(s0+36, v0);
    a1 = D_08B25AC0 - (23232);
    a2 = a1 + 23232;
    v1 = LD32(a1+23232);
    a0 = LD32(a2+4);
    f3 = BITSF(LD32(s0+88));
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(s0+92));
    goto L_0885BC98;
L_0885BD90:;
    f1 = BITSF(LD32(s0+32));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEBDA4 - (-16988);
    if (cnd_) { goto L_0885BB68; }
    goto L_0885BDA8;
L_0885BDA8:;
    f3 = f2 / f1;
    f0 = BITSF(LD32(v0-16988));
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f0; goto L_0885BDC0; }
    goto L_0885BDC0;
L_0885BDC0:;
    f12 = BITSF(LD32(s0+52));
    f13 = BITSF(LD32(s0+56));
    f14 = BITSF(LD32(s0+60));
    f0 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s0+44));
    f2 = BITSF(LD32(s0+48));
    f0 = f0 - f12;
    f1 = f1 - f13;
    f2 = f2 - f14;
    v0 = LD32(s0);
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    a0 = LD32(v0-32);
    f12 = f12 + f0;
    f13 = f13 + f1;
    f14 = f14 + f2;
    a0 = s0 + a0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885CC1C(a0, a1, f12, f13, f14); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BE1C;
L_0885BE1C:;
    f1 = BITSF(LD32(s0+32));
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0885BC10;
L_0885BE34:;
    ST32(s0+36, v0);
    v1 = 3;
    goto L_0885BB50;
L_0885BE40:;
    a1 = 1;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885BF54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BE58;
L_0885BE58:;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0885B2C8;
L_0885BE6C:;
    v1 = LD32(a2+23232);
    a1 = a2 + 23232;
    a0 = LD32(a1+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEBDA0 - (-16992);
    f3 = BITSF(LD32(s0+20));
    f1 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(s0+24));
    f0 = BITSF(LD32(v0-16992));
    a0 = a0 + v1;
    f2 = f2 - f3;
    f1 = f1 * f0;
    ST32(a1+4, a0);
    a0 = s0 + 0;
    a1 = 1;
    f1 = f1 * f2;
    ST32(a2+23232, v1);
    f3 = f3 + f1;
    ST32(s0+8, FBITS(f3));
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885BF54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BEE0;
L_0885BEE0:;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0885B2AC;
L_0885BEF4:;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885BF54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BF08;
L_0885BF08:;
    f1 = BITSF(LD32(s0+8));
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_0885B1DC;
L_0885BF20:;
    s1 = D_08AEBD9C - (-16996);
    goto L_0885B1DC;
L_0885BF28:;
    a1 = 0 + 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_0885BF54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BF40;
L_0885BF40:;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0885B37C;
}

/* 0885BF54 */
u64 func_0885BF54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885BF54:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a2 = LD32(a0);
    v0 = LD32(a2-32);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s0 = a1 ^ 0x1;
    if (cnd_) { goto L_0885BF8C; }
    goto L_0885BF7C;
L_0885BF7C:;
    v0 = LD32(v1+56);
    v0 = (v0 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    ST32(v1+56, v0);
    a2 = LD32(a0);
    goto L_0885BF8C;
L_0885BF8C:;
    v0 = LD32(a2-32);
    v0 = a0 + v0;
    v1 = LD32(v0+8);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0885BFC4; }
    goto L_0885BFA4;
L_0885BFA4:;
    v0 = D_08B44C2C - (19500);
    a0 = LD32(v0+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BFB0;
L_0885BFB0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0885BFC4; }
    goto L_0885BFB8;
L_0885BFB8:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 0)) | ((s0 & 0x1) << 0);
    ST32(v1+24, v0);
    goto L_0885BFC4;
L_0885BFC4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0885BFD4 */
u64 func_0885BFD4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885BFD4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = 0 < a1;
    v0 = LD32(a0+168);
    v0 = (v0 & ~(0x1u << 3)) | ((v1 & 0x1) << 3);
    ST32(a0+168, v0);
    { u64 r_ = func_0885BF54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885BFF4;
L_0885BFF4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0885C000 */
rv_t func_0885C000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885C000:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    s0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C038;
L_0885C038:;
    v1 = LD32(s1);
    a2 = s0 + 0;
    a1 = s2 + 0;
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C054;
L_0885C054:;
    v1 = LD32(s1);
    v0 = LD32(v1-32);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1-32); goto L_0885C08C; }
    goto L_0885C06C;
L_0885C06C:;
    f0 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s2+4));
    f1 = BITSF(LD32(s2+8));
    ST32(v0, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1-32);
    goto L_0885C08C;
L_0885C08C:;
    v1 = (u32)-1;
    v0 = s1 + v0;
    a1 = LD32(v0+8);
    cnd_ = a1 == v1;
    v0 = D_08B44C2C - (19500);
    if (cnd_) { goto L_0885C130; }
    goto L_0885C0A0;
L_0885C0A0:;
    a0 = LD32(v0+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C0A8;
L_0885C0A8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0885C130; }
    goto L_0885C0B0;
L_0885C0B0:;
    v1 = LD32(v0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s2));
    if (cnd_) { goto L_0885C114; }
    goto L_0885C0C0;
L_0885C0C0:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885C104; }
    goto L_0885C0D4;
L_0885C0D4:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s2+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885C104; }
    goto L_0885C0EC;
L_0885C0EC:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s2+8)); goto L_0885C118; }
    goto L_0885C104;
L_0885C104:;
    a0 = s0 + 0;
    func_088EC3FC(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885C10C;
L_0885C10C:;
    f2 = BITSF(LD32(s2));
    v1 = LD32(s0+24);
    goto L_0885C114;
L_0885C114:;
    f1 = BITSF(LD32(s2+8));
    goto L_0885C118;
L_0885C118:;
    f0 = BITSF(LD32(s2+4));
    v0 = v1 | 0x4;
    ST32(s0+24, v0);
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_0885C130;
L_0885C130:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885C148 */
rv_t func_0885C148(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885C148:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885C1C8; }
    goto L_0885C17C;
L_0885C17C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885C1A0; }
    goto L_0885C190;
L_0885C190:;
    v0 = D_08B28E38 - (-29128);
    a0 = LD32(v0-29128);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885C1B8; }
    goto L_0885C1A0;
L_0885C1A0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885C1B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C1C0;
L_0885C1C0:;
    goto L_0885C1A0;
L_0885C1C8:;
    s3 = D_08B28E38 - (-29128);
    s0 = s3 - 29128;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C1E0;
L_0885C1E0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29128, v0);
    if (cnd_) { goto L_0885C20C; }
    goto L_0885C1F0;
L_0885C1F0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0885C1F8;
L_0885C1F8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0885C1F8; }
    goto L_0885C20C;
L_0885C20C:;
    v0 = s3 - 29128;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0885C17C;
}

/* 0885C21C */
rv_t func_0885C21C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885C21C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885C148(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C230;
L_0885C230:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885C23C */
rv_t func_0885C23C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885C23C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885C148(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C250;
L_0885C250:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885C25C */
void func_0885C25C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885C25C:;
    sp = sp - 32;
    s3 = D_08B28E48 - (-29112);
    s2 = s3 - 29112;
    s1 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-32);
    a0 = LD32(a1+4);
    v0 = s1 + v0;
    ST32(v0, a0);
    a0 = 12;
    v1 = LD32(s1);
    a2 = LD32(a1+8);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    ST32(v0, a2);
    v1 = LD32(s1);
    a2 = LD32(a1+12);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    ST32(v0, a2);
    v0 = (u32)-1;
    a1 = LD32(s1);
    ST32(s1+8, v0);
    v0 = 9;
    v1 = LD32(a1-16);
    ST32(s1+4, 0);
    v1 = s1 + v1;
    ST16(v1+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C304;
L_0885C304:;
    a0 = LD32(s3-29112);
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
    s1 = s1 + v1;
    a0 = s1 + 0;
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C344;
L_0885C344:;
    sp = sp + 32;
    return;
}

/* 0885C360 */
void func_0885C360(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885C360:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-32);
    a0 = LD32(a1+4);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(a1+8);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    ST32(v0, a0);
    v1 = LD32(s0);
    a0 = LD32(a1+12);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    ST32(v0, a0);
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885C4A8; }
    goto L_0885C3C0;
L_0885C3C0:;
    v0 = LD32(s0+8);
    s1 = (u32)-1;
    cnd_ = v0 == s1;
    a0 = D_08B44C2C - (19500);
    if (cnd_) { goto L_0885C3E0; }
    goto L_0885C3D0;
L_0885C3D0:;
    a1 = s0 + 8;
    a0 = a0 + 19500;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C3DC;
L_0885C3DC:;
    ST32(s0+8, s1);
    goto L_0885C3E0;
L_0885C3E0:;
    a3 = LD32(s0);
    v1 = D_08B28E48 - (-29112);
    s1 = v1 - 29112;
    v0 = LD32(a3-16);
    a0 = LD32(s1+4);
    a1 = LD32(v1-29112);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    t0 = v1 << 2;
    a1 = t0 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0885C438; }
    goto L_0885C41C;
L_0885C41C:;
    v0 = LD32(a0);
    goto L_0885C420;
L_0885C420:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0885C45C; }
    goto L_0885C428;
L_0885C428:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885C420; }
    goto L_0885C438;
L_0885C438:;
    a0 = LD32(a3-12);
    a1 = 0 + 0;
    a0 = s0 + a0;
    func_08874CA8(a0, a1, t1, t2, t3);
    goto L_0885C448;
L_0885C448:;
    sp = sp + 16;
    return;
L_0885C45C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885C470; }
    goto L_0885C464;
L_0885C464:;
    ST8(a0+8, v0);
    goto L_0885C468;
L_0885C468:;
    a3 = LD32(s0);
    goto L_0885C438;
L_0885C470:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0885C498; }
    goto L_0885C478;
L_0885C478:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_0885C480;
L_0885C480:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C488;
L_0885C488:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0885C468;
L_0885C498:;
    v1 = LD32(a0+4);
    v0 = t0 + v0;
    ST32(v0, v1);
    goto L_0885C480;
L_0885C4A8:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C4B0;
L_0885C4B0:;
    ST32(s0+4, 0);
    goto L_0885C3C0;
}

/* 0885C4B8 */
rv_t func_0885C4B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885C4B8:;
    sp = sp - 32;
    v0 = D_08AF2E10 - (11792);
    v0 = v0 + 11792;
    a1 = v0 + 220;
    v1 = v0 + 108;
    s2 = (u32)-1;
    s0 = a0 + 0;
    s1 = s0 + 12;
    s3 = s0 + 276;
    a2 = LD32(a0+4);
    ST32(s0+12, v1);
    a0 = a2 + 0;
    ST32(s0+276, a1);
    cnd_ = a2 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0885C5A8; }
    goto L_0885C508;
L_0885C508:;
    v0 = LD32(s0+8);
    a0 = D_08B44C2C - (19500);
    a1 = s0 + 8;
    cnd_ = v0 == s2;
    a0 = a0 + 19500;
    if (cnd_) { goto L_0885C528; }
    goto L_0885C51C;
L_0885C51C:;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C524;
L_0885C524:;
    ST32(s0+8, s2);
    goto L_0885C528;
L_0885C528:;
    a0 = D_08B28E48 - (-29112);
    a1 = s0 + 0;
    a0 = a0 - 29112;
    func_08AAC850(a0, a1, t1, t2, t3);
    goto L_0885C538;
L_0885C538:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_0885C544;
L_0885C544:;
    v1 = D_08AF2F18 - (12056);
    a3 = LD32(v1+12056);
    v1 = v1 + 12056;
    a1 = v1 + 12;
    ST32(s0, a3);
    a0 = s1 + 0;
    v0 = LD32(a3-12);
    a2 = LD32(v1+4);
    v0 = s0 + v0;
    ST32(v0, a2);
    a3 = LD32(s0);
    a2 = LD32(v1+8);
    v0 = LD32(a3-16);
    v0 = s0 + v0;
    ST32(v0, a2);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885C584;
L_0885C584:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C58C;
L_0885C58C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885C5A8:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C5B0;
L_0885C5B0:;
    ST32(s0+4, 0);
    goto L_0885C508;
}

/* 0885C5B8 */
rv_t func_0885C5B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885C5B8:;
    sp = sp - 32;
    v0 = D_08AF2E10 - (11792);
    v0 = v0 + 11792;
    a1 = v0 + 220;
    v1 = v0 + 108;
    s2 = (u32)-1;
    s0 = a0 + 0;
    s1 = s0 + 12;
    s3 = s0 + 276;
    a2 = LD32(a0+4);
    ST32(s0+12, v1);
    a0 = a2 + 0;
    ST32(s0+276, a1);
    cnd_ = a2 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0885C6B0; }
    goto L_0885C608;
L_0885C608:;
    v0 = LD32(s0+8);
    a0 = D_08B44C2C - (19500);
    a1 = s0 + 8;
    cnd_ = v0 == s2;
    a0 = a0 + 19500;
    if (cnd_) { goto L_0885C628; }
    goto L_0885C61C;
L_0885C61C:;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C624;
L_0885C624:;
    ST32(s0+8, s2);
    goto L_0885C628;
L_0885C628:;
    a0 = D_08B28E48 - (-29112);
    a1 = s0 + 0;
    a0 = a0 - 29112;
    func_08AAC850(a0, a1, t1, t2, t3);
    goto L_0885C638;
L_0885C638:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_0885C644;
L_0885C644:;
    v1 = D_08AF2F18 - (12056);
    a3 = LD32(v1+12056);
    v1 = v1 + 12056;
    a1 = v1 + 12;
    ST32(s0, a3);
    a0 = s1 + 0;
    v0 = LD32(a3-12);
    a2 = LD32(v1+4);
    v0 = s0 + v0;
    ST32(v0, a2);
    a3 = LD32(s0);
    a2 = LD32(v1+8);
    v0 = LD32(a3-16);
    v0 = s0 + v0;
    ST32(v0, a2);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885C684;
L_0885C684:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C68C;
L_0885C68C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C694;
L_0885C694:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885C6B0:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C6B8;
L_0885C6B8:;
    ST32(s0+4, 0);
    goto L_0885C608;
}

/* 0885C6C0 */
rv_t func_0885C6C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885C6C0:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0885C6E8; }
    goto L_0885C6D8;
L_0885C6D8:;
    v1 = LD_U16(a1+16);
    v0 = 90;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = LD32(a1+24); goto L_0885C700; }
    goto L_0885C6E8;
L_0885C6E8:;
    v0 = 0 + 0;
    goto L_0885C6EC;
L_0885C6EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885C700:;
    cnd_ = s1 == 0;
    a2 = 1;
    if (cnd_) { goto L_0885C7D8; }
    goto L_0885C708;
L_0885C708:;
    v0 = LD32(a0);
    f12 = BITSF(LD32(a1+8));
    a0 = LD32(v0-12);
    a1 = s1 + 0;
    a0 = s0 + a0;
    { rv_t r_ = func_0885DE10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C720;
L_0885C720:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0885C6EC; }
    goto L_0885C744;
L_0885C744:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    v0 = s1 + 16;
    if (cnd_) { goto L_0885C7E0; }
    goto L_0885C750;
L_0885C750:;
    f1 = BITSF(LD32(s1+16));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(v1, FBITS(f1));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    v0 = LD32(s0+4);
    f0 = BITSF(LD32(s1+68));
    ST32(v0+12, FBITS(f0));
    v0 = D_08AEBDA8 - (-16984);
    f2 = BITSF(LD32(s1+84));
    f0 = BITSF(LD32(v0-16984));
    f3 = BITSF(LD32(s1+72));
    f4 = BITSF(LD32(s1+76));
    f2 = f2 * f0;
    f1 = BITSF(LD32(s1+80));
    v0 = LD32(s0+4);
    f1 = f1 * f2;
    f3 = f3 * f2;
    f4 = f4 * f2;
    ST32(v0+24, FBITS(f1));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f4));
    goto L_0885C7AC;
L_0885C7AC:;
    a0 = LD32(s0+4);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_0885C7D0; }
    goto L_0885C7B8;
L_0885C7B8:;
    v0 = LD32(s1+120);
    v1 = LD32(a0+56);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 6)) | ((v0 & 0x1) << 6);
    ST32(a0+56, v1);
    a0 = s0 + 0;
    goto L_0885C7D0;
L_0885C7D0:;
    a1 = s1 + 0;
    { rv_t r_ = func_0885C930(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C7D8;
L_0885C7D8:;
    v0 = 1;
    goto L_0885C6EC;
L_0885C7E0:;
    { rv_t r_ = func_0889CE40(0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C7E8;
L_0885C7E8:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_0885C7AC; }
    goto L_0885C7F4;
L_0885C7F4:;
    v0 = s1 + 16;
    f1 = BITSF(LD32(s1+16));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(v1, FBITS(f1));
    a2 = s1 + 88;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    v0 = LD32(s0+4);
    f0 = BITSF(LD32(s1+68));
    ST32(v0+12, FBITS(f0));
    v0 = D_08AEBDA8 - (-16984);
    f2 = BITSF(LD32(s1+84));
    f0 = BITSF(LD32(v0-16984));
    f3 = BITSF(LD32(s1+72));
    f4 = BITSF(LD32(s1+76));
    f2 = f2 * f0;
    f1 = BITSF(LD32(s1+80));
    v0 = LD32(s0+4);
    f1 = f1 * f2;
    f3 = f3 * f2;
    f4 = f4 * f2;
    ST32(v0+24, FBITS(f1));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f4));
    v1 = LD32(s1+120);
    a1 = LD32(s0+4);
    v1 = (v1 >> 1) & 0x1;
    v0 = LD32(a1+56);
    v0 = (v0 & ~(0x1u << 3)) | ((v1 & 0x1) << 3);
    ST32(a1+56, v0);
    v0 = LD32(s1+88);
    a0 = LD32(s0+4);
    ST32(a0+32, v0);
    v1 = LD32(a2+4);
    ST32(a0+36, v1);
    v0 = LD32(a2+8);
    ST32(a0+40, v0);
    v1 = LD32(a2+12);
    ST32(a0+44, v1);
    v0 = LD32(a2+16);
    ST32(a0+48, v0);
    v1 = LD32(a2+20);
    ST32(a0+52, v1);
    goto L_0885C7AC;
}

/* 0885C8A8 */
rv_t func_0885C8A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885C8A8:;
    sp = sp - 16;
    f0 = BITSF(0);
    s1 = (u32)-1;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_0885C90C; }
    goto L_0885C8E0;
L_0885C8E0:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0885C920; }
    goto L_0885C8EC;
L_0885C8EC:;
    v0 = LD32(s0+8);
    a0 = D_08B44C2C - (19500);
    a1 = s0 + 8;
    cnd_ = v0 == s1;
    a0 = a0 + 19500;
    if (cnd_) { goto L_0885C90C; }
    goto L_0885C900;
L_0885C900:;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C908;
L_0885C908:;
    ST32(s0+8, s1);
    goto L_0885C90C;
L_0885C90C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885C920:;
    { rv_t r_ = func_0889D14C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885C928;
L_0885C928:;
    ST32(s0+4, 0);
    goto L_0885C8EC;
}

/* 0885C930 */
rv_t func_0885C930(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0885C930:;
    sp = sp - 48;
    s2 = a0 + 0;
    v0 = LD32(a1+120);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0885CBF8; }
    goto L_0885C970;
L_0885C970:;
    v0 = LD32(a0+8);
    s0 = (u32)-1;
    cnd_ = v0 == s0;
    s5 = D_08B44C2C - (19500);
    if (cnd_) { goto L_0885CBE8; }
    goto L_0885C980;
L_0885C980:;
    a0 = LD32(s1+116);
    s3 = s1 + 16;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885C98C;
L_0885C98C:;
    t0 = LD32(s2+8);
    s4 = v0 + 0;
    cnd_ = t0 == s0;
    t2 = LD32(s5+19500);
    if (cnd_) { goto L_0885CAC8; }
    goto L_0885C99C;
L_0885C99C:;
    v0 = LD32(t2+12);
    cnd_ = t0 == v0;
    if (cnd_) { s0 = LD32(t2+8); goto L_0885CA40; }
    goto L_0885C9A8;
L_0885C9A8:;
    a0 = LD32(t2);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885C9E8; }
    goto L_0885C9B4;
L_0885C9B4:;
    a1 = LD32(a0+8);
    goto L_0885C9B8;
L_0885C9B8:;
    v0 = (s32)t0 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0885C9D8; }
    goto L_0885C9C4;
L_0885C9C4:;
    v0 = LD32(t2+4);
    v0 = a1 + v0;
    v0 = (s32)t0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885C9E8; }
    goto L_0885C9D8;
L_0885C9D8:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0885C9B8; }
    goto L_0885C9E4;
L_0885C9E4:;
    v1 = 0 + 0;
    goto L_0885C9E8;
L_0885C9E8:;
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0885CA40; }
    goto L_0885C9F0;
L_0885C9F0:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t1 = LD32(a0+12);
    cnd_ = (s32)t1 <= 0;
    a3 = t0 - v0;
    if (cnd_) { goto L_0885CA28; }
    goto L_0885CA08;
L_0885CA08:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0885CA10;
L_0885CA10:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t1;
    cnd_ = v0 == a3;
    a0 = a0 + 4;
    if (cnd_) { goto L_0885CBD0; }
    goto L_0885CA20;
L_0885CA20:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885CA10; }
    goto L_0885CA28;
L_0885CA28:;
    v0 = 0 + 0;
    goto L_0885CA2C;
L_0885CA2C:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0885CA40; }
    goto L_0885CA34;
L_0885CA34:;
    s0 = v0 + 0;
    ST32(t2+12, t0);
    ST32(t2+8, v0);
    goto L_0885CA40;
L_0885CA40:;
    cnd_ = s0 == 0;
    if (cnd_) { a1 = LD32(s2+8); goto L_0885CACC; }
    goto L_0885CA48;
L_0885CA48:;
    v1 = LD32(s0+24);
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(s3));
    if (cnd_) { goto L_0885CAAC; }
    goto L_0885CA58;
L_0885CA58:;
    f0 = BITSF(LD32(s0));
    fcc = FCMP(f0, f2, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885CA9C; }
    goto L_0885CA6C;
L_0885CA6C:;
    f1 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s3+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885CA9C; }
    goto L_0885CA84;
L_0885CA84:;
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(s3+8)); goto L_0885CAB0; }
    goto L_0885CA9C;
L_0885CA9C:;
    a0 = s0 + 0;
    func_088EC3FC(a0, t1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885CAA4;
L_0885CAA4:;
    v1 = LD32(s0+24);
    f2 = BITSF(LD32(s3));
    goto L_0885CAAC;
L_0885CAAC:;
    f1 = BITSF(LD32(s3+8));
    goto L_0885CAB0;
L_0885CAB0:;
    f0 = BITSF(LD32(s3+4));
    v0 = v1 | 0x4;
    ST32(s0+24, v0);
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    goto L_0885CAC8;
L_0885CAC8:;
    a1 = LD32(s2+8);
    goto L_0885CACC;
L_0885CACC:;
    a0 = LD32(s5+19500);
    f20 = BITSF(LD32(s1+112));
    s3 = D_08B44C2C - (19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CADC;
L_0885CADC:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+28, FBITS(f20)); goto L_0885CAE4; }
    goto L_0885CAE4;
L_0885CAE4:;
    a1 = LD32(s2+8);
    a0 = LD32(s3+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CAF0;
L_0885CAF0:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+32, s4); goto L_0885CAF8; }
    goto L_0885CAF8;
L_0885CAF8:;
    v0 = LD32(s1+120);
    a1 = LD32(s2+8);
    a0 = LD32(s3+19500);
    s0 = (v0 >> 2) & 0x1;
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CB0C;
L_0885CB0C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0885CB20; }
    goto L_0885CB14;
L_0885CB14:;
    v0 = LD32(v0+24);
    v0 = (v0 & ~(0x1u << 5)) | ((s0 & 0x1) << 5);
    ST32(v1+24, v0);
    goto L_0885CB20;
L_0885CB20:;
    v0 = D_08AEBDAC - (-16980);
    f0 = BITSF(LD32(v0-16980));
    f1 = BITSF(LD32(s1+84));
    f2 = BITSF(LD32(s1+72));
    v0 = D_08AEBDB0 - (-16976);
    f1 = f1 * f0;
    f3 = BITSF(LD32(v0-16976));
    f22 = f2 * f1;
    fcc = FCMP(f3, f22, 12);
    cnd_ = fcc;
    if (cnd_) { f22 = f3; goto L_0885CB50; }
    goto L_0885CB50;
L_0885CB50:;
    f0 = BITSF(LD32(s1+76));
    f21 = f0 * f1;
    fcc = FCMP(f3, f21, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f3; goto L_0885CB68; }
    goto L_0885CB68;
L_0885CB68:;
    f0 = BITSF(LD32(s1+80));
    f20 = f0 * f1;
    fcc = FCMP(f3, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f3; goto L_0885CB80; }
    goto L_0885CB80;
L_0885CB80:;
    a1 = LD32(s2+8);
    a0 = LD32(s3+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CB8C;
L_0885CB8C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885CBA4; }
    goto L_0885CB94;
L_0885CB94:;
    ST32(v0+44, FBITS(f20));
    ST32(v0+36, FBITS(f22));
    ST32(v0+40, FBITS(f21));
    goto L_0885CBA0;
L_0885CBA0:;
    goto L_0885CBA4;
L_0885CBA4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0885CBD0:;
    v1 = LD32(v1);
    v0 = a3 << 4;
    v0 = v0 - a3;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_0885CA2C;
L_0885CBE8:;
    a0 = s5 + 19500;
    { rv_t r_ = func_088EBDD0(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CBF0;
L_0885CBF0:;
    ST32(s2+8, v0);
    goto L_0885C980;
L_0885CBF8:;
    v0 = LD32(a0+8);
    s0 = (u32)-1;
    cnd_ = v0 == s0;
    a1 = a0 + 8;
    if (cnd_) { goto L_0885CBA0; }
    goto L_0885CC08;
L_0885CC08:;
    a0 = D_08B44C2C - (19500);
    a0 = a0 + 19500;
    { rv_t r_ = func_088EC1E8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CC14;
L_0885CC14:;
    ST32(s2+8, s0);
    goto L_0885CBA0;
}

/* 0885CC1C */
u64 func_0885CC1C(u32 a0, u32 a1, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885CC1C:;
    sp = sp - 32;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0885CC4C; }
    goto L_0885CC3C;
L_0885CC3C:;
    ST32(v0+24, FBITS(f14));
    ST32(v0+16, FBITS(f12));
    ST32(v0+20, FBITS(f13));
    a1 = LD32(a0+8);
    goto L_0885CC4C;
L_0885CC4C:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    f22 = f12 + f12;
    if (cnd_) { goto L_0885CCB8; }
    goto L_0885CC58;
L_0885CC58:;
    v0 = D_08AEBDB4 - (-16972);
    f0 = BITSF(LD32(v0-16972));
    fcc = FCMP(f0, f22, 12);
    cnd_ = fcc;
    if (cnd_) { f22 = f0; goto L_0885CC70; }
    goto L_0885CC70;
L_0885CC70:;
    f21 = f13 + f13;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f0; goto L_0885CC84; }
    goto L_0885CC84;
L_0885CC84:;
    f20 = f14 + f14;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_0885CC98; }
    goto L_0885CC98;
L_0885CC98:;
    v0 = D_08B44C2C - (19500);
    a0 = LD32(v0+19500);
    { u64 r_ = func_08AA206C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CCA4;
L_0885CCA4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885CCBC; }
    goto L_0885CCAC;
L_0885CCAC:;
    ST32(v0+44, FBITS(f20));
    ST32(v0+36, FBITS(f22));
    ST32(v0+40, FBITS(f21));
    goto L_0885CCB8;
L_0885CCB8:;
    goto L_0885CCBC;
L_0885CCBC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0885CCD0 */
rv_t func_0885CCD0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885CCD0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885CD50; }
    goto L_0885CD04;
L_0885CD04:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885CD28; }
    goto L_0885CD18;
L_0885CD18:;
    v0 = D_08B28E48 - (-29112);
    a0 = LD32(v0-29112);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885CD40; }
    goto L_0885CD28;
L_0885CD28:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885CD40:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CD48;
L_0885CD48:;
    goto L_0885CD28;
L_0885CD50:;
    s3 = D_08B28E48 - (-29112);
    s0 = s3 - 29112;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CD68;
L_0885CD68:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29112, v0);
    if (cnd_) { goto L_0885CD94; }
    goto L_0885CD78;
L_0885CD78:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0885CD80;
L_0885CD80:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0885CD80; }
    goto L_0885CD94;
L_0885CD94:;
    v0 = s3 - 29112;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0885CD04;
}

/* 0885CDA4 */
rv_t func_0885CDA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885CDA4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885CCD0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CDB8;
L_0885CDB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885CDC4 */
rv_t func_0885CDC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885CDC4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885CCD0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CDD8;
L_0885CDD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885CDE4 */
void func_0885CDE4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885CDE4:;
    sp = sp - 32;
    s3 = D_08B28E58 - (-29096);
    s2 = s3 - 29096;
    s1 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a0 = LD32(a1+4);
    v0 = s1 + v0;
    ST32(v0, a0);
    v1 = LD32(s1);
    a0 = LD32(a1+8);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    ST32(v0, a0);
    v0 = (u32)-1;
    a1 = LD32(s1);
    ST32(s1+44, v0);
    v0 = 19;
    v1 = LD32(a1-16);
    ST32(s1+40, 0);
    v1 = s1 + v1;
    ST16(v1+8, v0);
    a1 = LD32(s1);
    a0 = LD32(a1-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08874C84(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CE64;
L_0885CE64:;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CE88;
L_0885CE88:;
    a0 = LD32(s3-29096);
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

/* 0885CED0 */
void func_0885CED0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885CED0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a2 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, a2);
    v1 = LD32(a0);
    a2 = LD32(a1+8);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    ST32(v0, a2);
    { rv_t r_ = func_0885D414(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885CF14;
L_0885CF14:;
    v0 = LD32(s0);
    a1 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_0885CF28;
L_0885CF28:;
    a1 = LD32(s0);
    v1 = D_08B28E58 - (-29096);
    s1 = v1 - 29096;
    v0 = LD32(a1-16);
    a0 = LD32(s1+4);
    a1 = LD32(v1-29096);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0885CF80; }
    goto L_0885CF64;
L_0885CF64:;
    v0 = LD32(a0);
    goto L_0885CF68;
L_0885CF68:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0885CF94; }
    goto L_0885CF70;
L_0885CF70:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885CF68; }
    goto L_0885CF80;
L_0885CF80:;
    sp = sp + 16;
    return;
L_0885CF94:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885CFA4; }
    goto L_0885CF9C;
L_0885CF9C:;
    ST8(a0+8, v0);
    goto L_0885CF80;
L_0885CFA4:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0885CFCC; }
    goto L_0885CFAC;
L_0885CFAC:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_0885CFB4;
L_0885CFB4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885CFBC;
L_0885CFBC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0885CF80;
L_0885CFCC:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_0885CFB4;
}

/* 0885CFDC */
rv_t func_0885CFDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885CFDC:;
    v1 = D_08AF3200 - (12800);
    v1 = v1 + 12800;
    a1 = v1 + 224;
    v0 = v1 + 112;
    ST32(a0, v1);
    sp = sp - 16;
    ST32(a0+48, v0);
    ST32(a0+312, a1);
    s1 = a0 + 48;
    s2 = a0 + 312;
    s0 = a0 + 0;
    { rv_t r_ = func_0885D414(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D01C;
L_0885D01C:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_0885D028;
L_0885D028:;
    a0 = D_08B28E58 - (-29096);
    a1 = s0 + 0;
    a0 = a0 - 29096;
    func_08AACA50(a0, a1, 0, 0, 0);
    goto L_0885D038;
L_0885D038:;
    a1 = D_08AF32F8 - (13048);
    a1 = a1 + 13048;
    a0 = s1 + 0;
    a1 = a1 + 12;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885D04C;
L_0885D04C:;
    a0 = s2 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D054;
L_0885D054:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D06C */
rv_t func_0885D06C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D06C:;
    v1 = D_08AF3200 - (12800);
    v1 = v1 + 12800;
    a1 = v1 + 224;
    v0 = v1 + 112;
    ST32(a0, v1);
    sp = sp - 16;
    ST32(a0+48, v0);
    ST32(a0+312, a1);
    s1 = a0 + 48;
    s2 = a0 + 312;
    s0 = a0 + 0;
    { rv_t r_ = func_0885D414(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D0AC;
L_0885D0AC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_0885D0B8;
L_0885D0B8:;
    a0 = D_08B28E58 - (-29096);
    a1 = s0 + 0;
    a0 = a0 - 29096;
    func_08AACA50(a0, a1, 0, 0, 0);
    goto L_0885D0C8;
L_0885D0C8:;
    a1 = D_08AF32F8 - (13048);
    a1 = a1 + 13048;
    a1 = a1 + 12;
    a0 = s1 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885D0DC;
L_0885D0DC:;
    a0 = s2 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D0E4;
L_0885D0E4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D0EC;
L_0885D0EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D104 */
rv_t func_0885D104(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D104:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+44);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0885D134; }
    goto L_0885D124;
L_0885D124:;
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D12C;
L_0885D12C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0885D184; }
    goto L_0885D134;
L_0885D134:;
    v1 = LD32(s0+40);
    v0 = 4;
    a0 = s0 + 0;
    a1 = 1;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_0885D174; }
    goto L_0885D14C;
L_0885D14C:;
    v0 = 5;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = 4;
    if (cnd_) { goto L_0885D174; }
    goto L_0885D15C;
L_0885D15C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0885D414(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D164;
L_0885D164:;
    goto L_0885D168;
L_0885D168:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885D174:;
    { rv_t r_ = func_0885D370(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D17C;
L_0885D17C:;
    goto L_0885D168;
L_0885D184:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D19C;
L_0885D19C:;
    v1 = D_08B16141 - (24897);
    a2 = LD_U8(v1+24897);
    a0 = LD32(s0+44);
    a1 = v0 + 0;
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D1B0;
L_0885D1B0:;
    goto L_0885D168;
}

/* 0885D1B8 */
rv_t func_0885D1B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D1B8:;
    sp = sp - 16;
    v0 = 90;
    s2 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0885D260; }
    goto L_0885D1E0;
L_0885D1E0:;
    v0 = 109;
    cnd_ = v1 == v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0885D204; }
    goto L_0885D1EC;
L_0885D1EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885D204:;
    s0 = LD32(a1+24);
    a1 = 0 + 0;
    goto L_0885D20C;
L_0885D20C:;
    v1 = a1 << 2;
    v0 = v1 + s0;
    a0 = LD32(v0+72);
    a1 = a1 + 1;
    v1 = v1 + s1;
    v0 = (s32)a1 < 9;
    cnd_ = v0 != 0;
    ST32(v1+4, a0);
    if (cnd_) { goto L_0885D20C; }
    goto L_0885D22C;
L_0885D22C:;
    a1 = LD32(s0+68);
    a0 = s1 + 0;
    goto L_0885D234;
L_0885D234:;
    func_0885D26C(a0, a1);
    goto L_0885D23C;
L_0885D23C:;
    v0 = LD32(s1);
    f12 = BITSF(LD32(s2+8));
    a1 = s0 + 0;
    a0 = LD32(v0-12);
    a2 = 1;
    a0 = s1 + a0;
    { rv_t r_ = func_0885DE10(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D258;
L_0885D258:;
    v0 = 1;
    goto L_0885D1EC;
L_0885D260:;
    s0 = LD32(a1+24);
    a1 = LD32(s0+68);
    goto L_0885D234;
}

/* 0885D26C */
void func_0885D26C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D26C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a2 = LD32(a0+40);
    cnd_ = a2 == a1;
    s0 = a1 + 0;
    if (cnd_) { goto L_0885D2DC; }
    goto L_0885D28C;
L_0885D28C:;
    v0 = a2 < 0x1u;
    v1 = a1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+40, s0); goto L_0885D2DC; }
    goto L_0885D2A0;
L_0885D2A0:;
    v0 = a1 < 0x7u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+40, s0); goto L_0885D2DC; }
    goto L_0885D2AC;
L_0885D2AC:;
    v1 = D_08AD4778 - (18296);
    v0 = a1 << 2;
    v1 = v1 + 18296;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0885D2C8u: goto L_0885D2C8; case 0x0885D2D8u: goto L_0885D2D8; case 0x0885D2F0u: goto L_0885D2F0; case 0x0885D324u: goto L_0885D324; case 0x0885D348u: goto L_0885D348; case 0x0885D358u: goto L_0885D358; default: rs_break(0, 0x0885d2c0); }
L_0885D2C8:;
    a0 = s1 + 0;
    a1 = 2;
    goto L_0885D2D0;
L_0885D2D0:;
    a2 = 0 + 0;
    { rv_t r_ = func_0885D370(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D2D8;
L_0885D2D8:;
    ST32(s1+40, s0);
    goto L_0885D2DC;
L_0885D2DC:;
    goto L_0885D2E0;
L_0885D2E0:;
    sp = sp + 16;
    return;
L_0885D2F0:;
    v0 = a2 - 2;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 2;
    if (cnd_) { goto L_0885D318; }
    goto L_0885D300;
L_0885D300:;
    cnd_ = a1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0885D310; }
    goto L_0885D308;
L_0885D308:;
    a1 = 6;
    goto L_0885D2D0;
L_0885D310:;
    a1 = 7;
    goto L_0885D2D0;
L_0885D318:;
    a0 = s1 + 0;
    a1 = 5;
    goto L_0885D2D0;
L_0885D324:;
    v0 = 5;
    a0 = s1 + 0;
    a1 = 0 + 0;
    goto L_0885D330;
L_0885D330:;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_0885D2D0; }
    goto L_0885D338;
L_0885D338:;
    a0 = s1 + 0;
    { rv_t r_ = func_0885D414(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D340;
L_0885D340:;
    ST32(s1+40, s0);
    goto L_0885D2DC;
L_0885D348:;
    v0 = 4;
    a0 = s1 + 0;
    a1 = 3;
    goto L_0885D330;
L_0885D358:;
    a0 = s1 + 0;
    a1 = 8;
    a2 = 0 + 0;
    { rv_t r_ = func_0885D370(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D368;
L_0885D368:;
    goto L_0885D2E0;
}

/* 0885D370 */
rv_t func_0885D370(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D370:;
    sp = sp - 16;
    a1 = a1 << 2;
    s2 = a2 & 0xff;
    s1 = a1 + a0;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0885D3B4; }
    goto L_0885D39C;
L_0885D39C:;
    goto L_0885D3A0;
L_0885D3A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885D3B4:;
    { rv_t r_ = func_0885D414(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D3BC;
L_0885D3BC:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D3D8;
L_0885D3D8:;
    a1 = v0 + 0;
    v0 = D_08AEBDB8 - (-16968);
    f12 = BITSF(LD32(v0-16968));
    a0 = LD32(s1+4);
    f13 = f12;
    { rv_t r_ = func_088DBF24(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D3F0;
L_0885D3F0:;
    v1 = (u32)-1;
    a0 = v0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 == v1;
    ST32(s0+44, v0);
    if (cnd_) { goto L_0885D39C; }
    goto L_0885D404;
L_0885D404:;
    { rv_t r_ = func_088DB45C(a0, a1, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D40C;
L_0885D40C:;
    goto L_0885D3A0;
}

/* 0885D414 */
rv_t func_0885D414(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D414:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(s0+44);
    cnd_ = v0 == s1;
    a0 = a0 + 44;
    if (cnd_) { goto L_0885D444; }
    goto L_0885D438;
L_0885D438:;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D440;
L_0885D440:;
    ST32(s0+44, s1);
    goto L_0885D444;
L_0885D444:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D458 */
rv_t func_0885D458(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885D458:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885D4D8; }
    goto L_0885D48C;
L_0885D48C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885D4B0; }
    goto L_0885D4A0;
L_0885D4A0:;
    v0 = D_08B28E58 - (-29096);
    a0 = LD32(v0-29096);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885D4C8; }
    goto L_0885D4B0;
L_0885D4B0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885D4C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D4D0;
L_0885D4D0:;
    goto L_0885D4B0;
L_0885D4D8:;
    s3 = D_08B28E58 - (-29096);
    s0 = s3 - 29096;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D4F0;
L_0885D4F0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29096, v0);
    if (cnd_) { goto L_0885D51C; }
    goto L_0885D500;
L_0885D500:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0885D508;
L_0885D508:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0885D508; }
    goto L_0885D51C;
L_0885D51C:;
    v0 = s3 - 29096;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0885D48C;
}

/* 0885D52C */
rv_t func_0885D52C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D52C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885D458(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D540;
L_0885D540:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D54C */
rv_t func_0885D54C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D54C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885D458(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D560;
L_0885D560:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D56C */
void func_0885D56C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885D56C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = D_08B28E68 - (-29080);
    s2 = s3 - 29080;
    s1 = a0 + 0;
    func_08875A24(a0, a1);
    goto L_0885D59C;
L_0885D59C:;
    a1 = LD32(s0);
    a0 = s1 + 88;
    ST32(s1, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s0+20);
    v0 = s1 + v0;
    ST32(v0, v1);
    ST32(s1+80, 0);
    ST32(s1+84, 0);
    func_088D06E4(a0, 0, 0, 0);
    goto L_0885D5C4;
L_0885D5C4:;
    a1 = LD32(s1);
    v0 = 999;
    ST32(s1+252, v0);
    a0 = 12;
    ST32(s1+240, 0);
    ST32(s1+256, 0);
    ST32(s1+260, 0);
    ST8(s1+244, 0);
    ST8(s1+245, 0);
    ST8(s1+246, 0);
    ST8(s1+247, 0);
    ST8(s1+248, 0);
    v0 = LD32(a1-12);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D610;
L_0885D610:;
    a0 = LD32(s3-29080);
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

/* 0885D658 */
void func_0885D658(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885D658:;
    sp = sp - 32;
    s3 = D_08B28E68 - (-29080);
    s1 = a1 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+20);
    v0 = a0 + v0;
    ST32(v0, v1);
    v0 = 999;
    a2 = LD32(a0+252);
    cnd_ = a2 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0885D70C; }
    goto L_0885D6A0;
L_0885D6A0:;
    v0 = s3 - 29080;
    v1 = LD32(v0+4);
    a0 = LD32(s3-29080);
    v1 = v1 - 1;
    v1 = a2 & v1;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a1 = LD32(v1);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885D6F8; }
    goto L_0885D6C8;
L_0885D6C8:;
    v0 = LD32(a1);
    goto L_0885D6CC;
L_0885D6CC:;
    a0 = LD32(v0);
    a3 = v0 + 0;
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 == a2;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_0885D7D8; }
    goto L_0885D6E8;
L_0885D6E8:;
    a1 = LD32(a1+4);
    goto L_0885D6EC;
L_0885D6EC:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_0885D6CC; }
    goto L_0885D6F4;
L_0885D6F4:;
    a3 = 0 + 0;
    goto L_0885D6F8;
L_0885D6F8:;
    cnd_ = a3 == 0;
    v0 = D_08AEBDBC - (-16964);
    if (cnd_) { goto L_0885D70C; }
    goto L_0885D700;
L_0885D700:;
    f12 = BITSF(LD32(v0-16964));
    a0 = s0 + 0;
    { rv_t r_ = func_0885EB94(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D70C;
L_0885D70C:;
    v0 = LD32(s0);
    s2 = s3 - 29080;
    a0 = LD32(s2+4);
    v1 = LD32(v0-12);
    a1 = LD32(s3-29080);
    a0 = a0 - 1;
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    v0 = v0 & a0;
    a2 = v0 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885D760; }
    goto L_0885D744;
L_0885D744:;
    v0 = LD32(a0);
    goto L_0885D748;
L_0885D748:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0885D790; }
    goto L_0885D750;
L_0885D750:;
    v1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885D748; }
    goto L_0885D760;
L_0885D760:;
    a0 = s0 + 88;
    { rv_t r_ = func_088D0994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D768;
L_0885D768:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_0885D774;
L_0885D774:;
    sp = sp + 32;
    return;
L_0885D790:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_0885D7D0; }
    goto L_0885D798;
L_0885D798:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_0885D7C0; }
    goto L_0885D7A0;
L_0885D7A0:;
    v0 = LD32(a0+4);
    ST32(v1+4, v0);
    goto L_0885D7A8;
L_0885D7A8:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D7B0;
L_0885D7B0:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_0885D760;
L_0885D7C0:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_0885D7A8;
L_0885D7D0:;
    ST8(a0+8, v0);
    goto L_0885D760;
L_0885D7D8:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0885D6EC; }
    goto L_0885D7E0;
L_0885D7E0:;
    goto L_0885D6F8;
}

/* 0885D7E8 */
rv_t func_0885D7E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D7E8:;
    sp = sp - 16;
    v1 = D_08AF34D4 - (13524);
    v1 = v1 + 13524;
    s0 = a0 + 0;
    v0 = v1 + 112;
    a2 = 0 + 0;
    s1 = D_08B28E68 - (-29080);
    a0 = LD32(a0+252);
    ST32(s0+264, v0);
    v0 = 999;
    a1 = a0 + 0;
    cnd_ = a0 == v0;
    ST32(s0, v1);
    if (cnd_) { goto L_0885D844; }
    goto L_0885D828;
L_0885D828:;
    a0 = s1 - 29080;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D830;
L_0885D830:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0885D844; }
    goto L_0885D838;
L_0885D838:;
    v0 = D_08AEBDC0 - (-16960);
    f12 = BITSF(LD32(v0-16960));
    { rv_t r_ = func_0885EB94(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D844;
L_0885D844:;
    a1 = s0 + 0;
    a0 = s1 - 29080;
    func_08AACC0C(a0, a1, t1, t2, t3);
    goto L_0885D850;
L_0885D850:;
    a0 = s0 + 88;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D858;
L_0885D858:;
    a1 = D_08AF3560 - (13664);
    a1 = a1 + 13664;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_0885D86C;
L_0885D86C:;
    a0 = s0 + 264;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D874;
L_0885D874:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D888 */
rv_t func_0885D888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885D888:;
    sp = sp - 16;
    v1 = D_08AF34D4 - (13524);
    v1 = v1 + 13524;
    s0 = a0 + 0;
    v0 = v1 + 112;
    a2 = 0 + 0;
    s1 = D_08B28E68 - (-29080);
    a0 = LD32(a0+252);
    ST32(s0+264, v0);
    v0 = 999;
    a1 = a0 + 0;
    cnd_ = a0 == v0;
    ST32(s0, v1);
    if (cnd_) { goto L_0885D8E4; }
    goto L_0885D8C8;
L_0885D8C8:;
    a0 = s1 - 29080;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D8D0;
L_0885D8D0:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0885D8E4; }
    goto L_0885D8D8;
L_0885D8D8:;
    v0 = D_08AEBDC4 - (-16956);
    f12 = BITSF(LD32(v0-16956));
    { rv_t r_ = func_0885EB94(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D8E4;
L_0885D8E4:;
    a1 = s0 + 0;
    a0 = s1 - 29080;
    func_08AACC0C(a0, a1, t1, t2, t3);
    goto L_0885D8F0;
L_0885D8F0:;
    a0 = s0 + 88;
    { rv_t r_ = func_088D0994(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885D8F8;
L_0885D8F8:;
    a1 = D_08AF3560 - (13664);
    a1 = a1 + 13664;
    a1 = a1 + 4;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_0885D90C;
L_0885D90C:;
    a0 = s0 + 264;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D914;
L_0885D914:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885D91C;
L_0885D91C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885D930 */
rv_t func_0885D930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0885D930:;
    sp = sp - 112;
    a3 = sp + 80;
    a2 = 0 + 0;
    s1 = a0 + 0;
    goto L_0885D94C;
L_0885D94C:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_0885D94C; }
    goto L_0885D970;
L_0885D970:;
    v1 = LD32(sp+80);
    v0 = 16;
    cnd_ = v1 == v0;
    s0 = s1 + 88;
    if (cnd_) { goto L_0885D9B0; }
    goto L_0885D980;
L_0885D980:;
    a0 = LD32(s0+12);
    goto L_0885D984;
L_0885D984:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0885D9A0; }
    goto L_0885D98C;
L_0885D98C:;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    ST32(a0+232, v0);
    goto L_0885D9A0;
L_0885D9A0:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_0885D9B0:;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_0885D9B8;
L_0885D9B8:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4cu;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_0885D9B8; }
    goto L_0885D9DC;
L_0885D9DC:;
    a1 = LD32(sp+36);
    f0 = BITSF(LD32(sp+28));
    cnd_ = a1 == 0;
    ST32(s1+80, FBITS(f0));
    if (cnd_) { goto L_0885DA24; }
    goto L_0885D9EC;
L_0885D9EC:;
    a2 = LD32(sp+40);
    a3 = LD32(sp+48);
    f12 = BITSF(0);
    s0 = s1 + 88;
    a0 = s0 + 0;
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DA04;
L_0885DA04:;
    v0 = D_08AEBDC8 - (-16952);
    goto L_0885DA08;
L_0885DA08:;
    f12 = BITSF(LD32(v0-16952));
    a2 = sp + 12;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08876124(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DA1C;
L_0885DA1C:;
    a0 = LD32(s0+12);
    goto L_0885D984;
L_0885DA24:;
    a1 = LD32(sp+32);
    s0 = s1 + 88;
    a0 = s0 + 0;
    { rv_t r_ = func_088D0A64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DA34;
L_0885DA34:;
    v0 = D_08AEBDC8 - (-16952);
    goto L_0885DA08;
}

/* 0885DA3C */
rv_t func_0885DA3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0885DA3C:;
    sp = sp - 96;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0885DA9C; }
    goto L_0885DA5C;
L_0885DA5C:;
    v1 = LD_U16(a1+16);
    v0 = 102;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 103;
    if (cnd_) { goto L_0885DDF8; }
    goto L_0885DA6C;
L_0885DA6C:;
    cnd_ = v0 == 0;
    v0 = 131;
    if (cnd_) { goto L_0885DC4C; }
    goto L_0885DA74;
L_0885DA74:;
    v0 = 26;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 27;
    if (cnd_) { goto L_0885DBFC; }
    goto L_0885DA80;
L_0885DA80:;
    cnd_ = v0 == 0;
    v0 = 27;
    if (cnd_) { goto L_0885DBD0; }
    goto L_0885DA88;
L_0885DA88:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 8;
    if (cnd_) { goto L_0885DBB8; }
    goto L_0885DA94;
L_0885DA94:;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = LD32(a1+24); goto L_0885DAD0; }
    goto L_0885DA9C;
L_0885DA9C:;
    v0 = LD32(s0);
    goto L_0885DAA0;
L_0885DAA0:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DAAC;
L_0885DAAC:;
    v1 = v0 + 0;
    goto L_0885DAB0;
L_0885DAB0:;
    v0 = v1 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0885DAD0:;
    v0 = 0x40000000u;
    a2 = LD32(s1+8);
    v0 = a2 & v0;
    cnd_ = v0 == 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0885DB34; }
    goto L_0885DAE4;
L_0885DAE4:;
    cnd_ = (s32)a2 < 0;
    v0 = a2 & 0x4;
    if (cnd_) { goto L_0885DB28; }
    goto L_0885DAEC;
L_0885DAEC:;
    f14 = BITSF(0);
    cnd_ = v0 != 0;
    if (cnd_) { f13 = BITSF(LD32(s1+16)); goto L_0885DB04; }
    goto L_0885DAF8;
L_0885DAF8:;
    v0 = D_08AEBDCC - (-16948);
    f14 = BITSF(LD32(v0-16948));
    goto L_0885DB00;
L_0885DB00:;
    f13 = BITSF(LD32(s1+16));
    goto L_0885DB04;
L_0885DB04:;
    a1 = LD32(s1);
    f12 = BITSF(LD32(s1+12));
    a0 = s0 + 88;
    goto L_0885DB10;
L_0885DB10:;
    a2 = v1 + 0;
    f0 = func_088D0CB8(a0, a1, a2, f12, f13, f14);
    goto L_0885DB18;
L_0885DB18:;
    v0 = 1;
    goto L_0885DB1C;
L_0885DB1C:;
    v1 = 1;
    ST8(s0+245, v0);
    goto L_0885DAB0;
L_0885DB28:;
    f14 = BITSF(LD32(s1+20));
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_0885DB00;
L_0885DB34:;
    cnd_ = (s32)a2 < 0;
    s3 = a0 + 88;
    if (cnd_) { goto L_0885DB54; }
    goto L_0885DB3C;
L_0885DB3C:;
    f12 = BITSF(LD32(s1+12));
    a1 = LD32(s1);
    a0 = a0 + 88;
    f0 = func_088D0C84(a0, a1, a2, f12);
    goto L_0885DB4C;
L_0885DB4C:;
    v0 = 1;
    goto L_0885DB1C;
L_0885DB54:;
    a0 = LD32(s3+12);
    cnd_ = a0 == 0;
    s2 = a0 + 4;
    if (cnd_) { goto L_0885DB78; }
    goto L_0885DB60;
L_0885DB60:;
    a0 = s2 + 0;
    { u64 r_ = func_0880D47C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885DB68;
L_0885DB68:;
    v1 = LD32(s1);
    cnd_ = v0 == v1;
    if (cnd_) { f12 = BITSF(LD32(s1+20)); goto L_0885DBA4; }
    goto L_0885DB74;
L_0885DB74:;
    v1 = LD32(s1+8);
    goto L_0885DB78;
L_0885DB78:;
    v0 = v1 & 0x4;
    f13 = BITSF(0);
    cnd_ = v0 == 0;
    f14 = BITSF(LD32(s1+20));
    if (cnd_) { goto L_0885DB90; }
    goto L_0885DB88;
L_0885DB88:;
    v0 = D_08AEBDCC - (-16948);
    f13 = BITSF(LD32(v0-16948));
    goto L_0885DB90;
L_0885DB90:;
    a1 = LD32(s1);
    f12 = BITSF(LD32(s1+12));
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = s3 + 0;
    goto L_0885DB10;
L_0885DBA4:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0880D394(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DBB0;
L_0885DBB0:;
    v0 = 1;
    goto L_0885DB1C;
L_0885DBB8:;
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DBC8;
L_0885DBC8:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DBD0:;
    cnd_ = v1 == v0;
    v0 = 28;
    if (cnd_) { goto L_0885DBF4; }
    goto L_0885DBD8;
L_0885DBD8:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0); goto L_0885DAA0; }
    goto L_0885DBE0;
L_0885DBE0:;
    a1 = 0 + 0;
    goto L_0885DBE4;
L_0885DBE4:;
    { rv_t r_ = func_088762F0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DBEC;
L_0885DBEC:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DBF4:;
    a1 = 1;
    goto L_0885DBE4;
L_0885DBFC:;
    s1 = a0 + 88;
    v0 = LD32(s1+12);
    cnd_ = v0 == 0;
    s0 = LD32(a1+24);
    if (cnd_) { goto L_0885DBC8; }
    goto L_0885DC0C;
L_0885DC0C:;
    v1 = LD32(s0);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+4); goto L_0885DC3C; }
    goto L_0885DC1C;
L_0885DC1C:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0885DAB0; }
    goto L_0885DC28;
L_0885DC28:;
    f12 = BITSF(LD32(s0+8));
    a0 = s1 + 0;
    func_088D1E84(a0, f12);
    goto L_0885DC34;
L_0885DC34:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DC3C:;
    a0 = s1 + 0;
    func_088D1E54(a0, a1);
    goto L_0885DC44;
L_0885DC44:;
    v1 = LD32(s0);
    goto L_0885DC1C;
L_0885DC4C:;
    cnd_ = v1 == v0;
    if (cnd_) { a3 = LD32(a1+24); goto L_0885DDD8; }
    goto L_0885DC54;
L_0885DC54:;
    v0 = (s32)v1 < 132;
    cnd_ = v0 == 0;
    v0 = 133;
    if (cnd_) { goto L_0885DCC0; }
    goto L_0885DC60;
L_0885DC60:;
    v0 = 129;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a1+24); goto L_0885DCA4; }
    goto L_0885DC6C;
L_0885DC6C:;
    v0 = 130;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0); goto L_0885DAA0; }
    goto L_0885DC78;
L_0885DC78:;
    v0 = LD32(a1+24);
    v1 = LD32(a0);
    f12 = BITSF(LD32(a1+8));
    a2 = LD32(v0+4);
    a1 = LD32(v0);
    v0 = LD32(v1+64);
    a3 = 1;
    goto L_0885DC94;
L_0885DC94:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DC9C;
L_0885DC9C:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DCA4:;
    v1 = LD32(a0);
    f12 = BITSF(LD32(a1+8));
    a2 = LD32(v0+4);
    a1 = LD32(v0);
    v0 = LD32(v1+64);
    a3 = 0 + 0;
    goto L_0885DC94;
L_0885DCC0:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 133;
    if (cnd_) { goto L_0885DDC0; }
    goto L_0885DCC8;
L_0885DCC8:;
    cnd_ = v0 != 0;
    v0 = 135;
    if (cnd_) { goto L_0885DD90; }
    goto L_0885DCD0;
L_0885DCD0:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s0); goto L_0885DAA0; }
    goto L_0885DCD8;
L_0885DCD8:;
    a3 = LD32(a1+24);
    cnd_ = a3 == 0;
    a2 = sp + 16;
    if (cnd_) { goto L_0885DBC8; }
    goto L_0885DCE4;
L_0885DCE4:;
    v1 = LD32(a0);
    f0 = BITSF(LD32(a3));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    ST32(sp, FBITS(f0));
    a1 = sp + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    {v[112]=BITSF(LD32(a3+(12)));}
    {v[113]=BITSF(LD32(a3+(16)));}
    {v[114]=BITSF(LD32(a3+(20)));}
    {v[115]=BITSF(LD32(a3+(24)));}
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
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[100]));}
    {ST32(sp+(32),FBITS(v[101]));}
    {ST32(sp+(36),FBITS(v[102]));}
    {ST32(sp+(40),FBITS(v[104]));}
    {ST32(sp+(44),FBITS(v[105]));}
    {ST32(sp+(48),FBITS(v[106]));}
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DD88;
L_0885DD88:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DD90:;
    v1 = LD32(a0);
    t0 = LD32(a1+24);
    f12 = BITSF(LD32(a1+8));
    v0 = LD32(v1+72);
    a1 = LD32(t0);
    a2 = LD32(t0+4);
    a3 = LD32(t0+8);
    t0 = t0 + 12;
    goto L_0885DDB0;
L_0885DDB0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DDB8;
L_0885DDB8:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DDC0:;
    v1 = LD32(a0);
    v0 = LD32(v1+76);
    t_ = v0;
    f12 = BITSF(LD32(a1+8));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DDD0;
L_0885DDD0:;
    v1 = 1;
    goto L_0885DAB0;
L_0885DDD8:;
    v1 = LD32(a0);
    f12 = BITSF(LD32(a1+8));
    t0 = LD32(a3+4);
    a1 = LD32(a3);
    v0 = LD32(v1+68);
    a2 = a3 + 8;
    a3 = a3 + 20;
    goto L_0885DDB0;
L_0885DDF8:;
    v0 = LD32(a1+24);
    a1 = LD_U8(v0);
    a1 = 0 < a1;
    { rv_t r_ = func_08876370(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DE08;
L_0885DE08:;
    v1 = 1;
    goto L_0885DAB0;
}

/* 0885DE10 */
rv_t func_0885DE10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f13 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0885DE10:;
    sp = sp - 96;
    s3 = a2 & 0xff;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = s2 + 88;
    f20 = f12;
    f13 = f20;
    f12 = BITSF(LD32(a1+28));
    { rv_t r_ = func_0885E23C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DE54;
L_0885DE54:;
    v0 = LD_U8(s2+246);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0885DF38; }
    goto L_0885DE60;
L_0885DE60:;
    v1 = LD32(s1+52);
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0885E228; }
    goto L_0885DE70;
L_0885DE70:;
    v0 = v1 & 0x80;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0885E218; }
    goto L_0885DE7C;
L_0885DE7C:;
    a2 = LD32(s1+36);
    cnd_ = a2 != 0;
    v0 = v1 & 0x400;
    if (cnd_) { goto L_0885DE90; }
    goto L_0885DE88;
L_0885DE88:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+32); goto L_0885E218; }
    goto L_0885DE90;
L_0885DE90:;
    a1 = LD32(s1+32);
    a3 = LD32(s1+40);
    f12 = BITSF(LD32(s1+44));
    a0 = s2 + 0;
    f13 = f20;
    func_0885E6B0(a0, a1, a2, a3, 0, 0, 0, f12, f13);
    goto L_0885DEA8;
L_0885DEA8:;
    v0 = LD32(s1+40);
    cnd_ = (s32)v0 < 0;
    s0 = s2 + 88;
    if (cnd_) { goto L_0885E174; }
    goto L_0885DEB4;
L_0885DEB4:;
    a0 = LD32(s0+12);
    goto L_0885DEB8;
L_0885DEB8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0885DED8; }
    goto L_0885DEC0;
L_0885DEC0:;
    v0 = LD32(s2);
    v1 = LD32(v0-12);
    v1 = s2 + v1;
    v0 = LD32(v1+4);
    ST32(a0+232, v0);
    goto L_0885DED4;
L_0885DED4:;
    v0 = LD32(s1+52);
    goto L_0885DED8;
L_0885DED8:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s0+116);
    if (cnd_) { goto L_0885E16C; }
    goto L_0885DEE4;
L_0885DEE4:;
    v0 = v0 | 0x2;
    goto L_0885DEE8;
L_0885DEE8:;
    ST32(s0+116, v0);
    v0 = LD32(s1+52);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    v0 = LD32(s0+116);
    if (cnd_) { goto L_0885E164; }
    goto L_0885DEFC;
L_0885DEFC:;
    v0 = v0 | 0x40;
    goto L_0885DF00;
L_0885DF00:;
    ST32(s0+116, v0);
    v0 = LD32(s1+52);
    v0 = v0 & 0x100;
    cnd_ = v0 == 0;
    v0 = LD32(s0+116);
    if (cnd_) { goto L_0885E15C; }
    goto L_0885DF14;
L_0885DF14:;
    v0 = v0 | 0x80;
    goto L_0885DF18;
L_0885DF18:;
    ST32(s0+116, v0);
    v0 = LD32(s1+52);
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    v0 = LD32(s0+116);
    if (cnd_) { goto L_0885E154; }
    goto L_0885DF2C;
L_0885DF2C:;
    v0 = v0 | 0x200;
    goto L_0885DF30;
L_0885DF30:;
    ST32(s0+116, v0);
    v0 = LD32(s1+52);
    goto L_0885DF38;
L_0885DF38:;
    a0 = LD32(s2+252);
    v1 = 999;
    v0 = (v0 >> 12) & 0x1;
    cnd_ = a0 == v1;
    ST8(s2+247, v0);
    if (cnd_) { goto L_0885E01C; }
    goto L_0885DF4C;
L_0885DF4C:;
    a1 = LD32(s1+52);
    goto L_0885DF50;
L_0885DF50:;
    a1 = (a1 >> 6) & 0x1;
    goto L_0885DF54;
L_0885DF54:;
    a0 = s2 + 0;
    { rv_t r_ = func_088762F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DF5C;
L_0885DF5C:;
    v0 = LD32(s0+12);
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s2+260)); goto L_0885DF98; }
    goto L_0885DF68;
L_0885DF68:;
    v0 = (u32)(s32)LD_S16(s1+64);
    a0 = s0 + 0;
    f0 = BITSF(v0);
    v0 = D_08AEBDD8 - (-16936);
    f12 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-16936));
    f12 = f12 * f0;
    func_088D1E84(a0, f12);
    goto L_0885DF88;
L_0885DF88:;
    a1 = LD_U8(s1+66);
    a0 = s0 + 0;
    func_088D1E54(a0, a1);
    goto L_0885DF94;
L_0885DF94:;
    f0 = BITSF(LD32(s2+260));
    goto L_0885DF98;
L_0885DF98:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0885DFE0; }
    goto L_0885DFA8;
L_0885DFA8:;
    v0 = LD32(s2+252);
    a1 = LD32(s1+56);
    cnd_ = v0 == a1;
    v0 = 999;
    if (cnd_) { goto L_0885DFE0; }
    goto L_0885DFB8;
L_0885DFB8:;
    cnd_ = a1 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0885E004; }
    goto L_0885DFC0;
L_0885DFC0:;
    v1 = LD32(s2);
    a3 = LD32(s1+52);
    a2 = LD32(s1+60);
    v0 = LD32(v1+64);
    a3 = (a3 >> 14) & 0x1;
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885DFDC;
L_0885DFDC:;
    goto L_0885DFE0;
L_0885DFE0:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_0885E004:;
    v1 = LD32(s2);
    v0 = LD32(v1+76);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E014;
L_0885E014:;
    goto L_0885DFE0;
L_0885E01C:;
    a1 = LD32(s1+52);
    v0 = a1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885E130; }
    goto L_0885E02C;
L_0885E02C:;
    v0 = LD_U8(s2+244);
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s1 + 16; goto L_0885E048; }
    goto L_0885E038;
L_0885E038:;
    v0 = LD_U8(s2+245);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+76); goto L_0885E124; }
    goto L_0885E044;
L_0885E044:;
    s3 = s1 + 16;
    goto L_0885E048;
L_0885E048:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    f12 = f20;
    { rv_t r_ = func_08876124(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E05C;
L_0885E05C:;
    v0 = LD32(s0+8);
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
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+12); goto L_0885E114; }
    goto L_0885E0E0;
L_0885E0E0:;
    a1 = s3 + 0;
    goto L_0885E0E4;
L_0885E0E4:;
    a0 = s0 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E0F0;
L_0885E0F0:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885E108; }
    goto L_0885E0FC;
L_0885E0FC:;
    a0 = s0 + 0;
    { u64 r_ = func_088D0E20(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E104;
L_0885E104:;
    v0 = 1;
    goto L_0885E108;
L_0885E108:;
    ST8(s2+244, v0);
    ST8(s2+245, 0);
    goto L_0885DF4C;
L_0885E114:;
    cnd_ = v0 != 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_0885E0E4; }
    goto L_0885E11C;
L_0885E11C:;
    v0 = 1;
    goto L_0885E108;
L_0885E124:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s2+76, v0);
    goto L_0885DF4C;
L_0885E130:;
    cnd_ = s3 == 0;
    if (cnd_) { a1 = (a1 >> 6) & 0x1; goto L_0885DF54; }
    goto L_0885E138;
L_0885E138:;
    a1 = s1 + 16;
    a0 = s2 + 0;
    a2 = s1 + 0;
    f12 = f20;
    { rv_t r_ = func_08876124(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E14C;
L_0885E14C:;
    a1 = LD32(s1+52);
    goto L_0885DF50;
L_0885E154:;
    v0 = (v0 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    goto L_0885DF30;
L_0885E15C:;
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    goto L_0885DF18;
L_0885E164:;
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    goto L_0885DF00;
L_0885E16C:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_0885DEE8;
L_0885E174:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    s4 = a0 + 4;
    if (cnd_) { goto L_0885DEB8; }
    goto L_0885E180;
L_0885E180:;
    a0 = s4 + 0;
    a1 = 0 + 0;
    f0 = func_0880D3CC(a0, a1);
    goto L_0885E18C;
L_0885E18C:;
    f1 = BITSF(LD32(s1+48));
    a0 = s4 + 0;
    a1 = 0 + 0;
    f21 = f1 - f0;
    v0 = func_0880D33C(a0, a1);
    goto L_0885E1A0;
L_0885E1A0:;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s1+48)); goto L_0885E1F8; }
    goto L_0885E1A8;
L_0885E1A8:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    v0 = D_08AEBDD0 - (-16944);
    if (cnd_) { goto L_0885E20C; }
    goto L_0885E1BC;
L_0885E1BC:;
    f0 = BITSF(LD32(v0-16944));
    f0 = f21 + f0;
    goto L_0885E1C4;
L_0885E1C4:;
    f0 = BITSF(F2I(f0, 1));
    f0 = (float)(s32)FBITS(f0);
    f1 = f21 - f0;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v0 = D_08AEBDD4 - (-16940);
    f0 = BITSF(LD32(v0-16940));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+12); goto L_0885DEB8; }
    goto L_0885E1F4;
L_0885E1F4:;
    f12 = BITSF(LD32(s1+48));
    goto L_0885E1F8;
L_0885E1F8:;
    a0 = s4 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0880D394(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E204;
L_0885E204:;
    a0 = LD32(s0+12);
    goto L_0885DEB8;
L_0885E20C:;
    f0 = BITSF(LD32(v0-16944));
    f0 = f21 - f0;
    goto L_0885E1C4;
L_0885E218:;
    f12 = f20;
    { rv_t r_ = func_0885E674(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E220;
L_0885E220:;
    s0 = s2 + 88;
    goto L_0885DED4;
L_0885E228:;
    a1 = 0 + 0;
    f12 = f20;
    { rv_t r_ = func_0885E674(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E234;
L_0885E234:;
    v0 = LD32(s1+52);
    goto L_0885DED8;
}

/* 0885E23C */
rv_t func_0885E23C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885E23C:;
    sp = sp - 32;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+84));
    fcc = FCMP(f13, f0, 12);
    cnd_ = fcc;
    f20 = f12;
    if (cnd_) { goto L_0885E2B0; }
    goto L_0885E264;
L_0885E264:;
    f0 = BITSF(LD32(a0+80));
    f1 = BITSF(0);
    fcc = FCMP(f0, f12, 2);
    cnd_ = fcc;
    ST32(a0+84, FBITS(f13));
    if (cnd_) { goto L_0885E2B0; }
    goto L_0885E27C;
L_0885E27C:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_0885E2A0; }
    goto L_0885E28C;
L_0885E28C:;
    fcc = FCMP(f12, f1, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a0); goto L_0885E2C4; }
    goto L_0885E29C;
L_0885E29C:;
    v1 = LD32(s0);
    goto L_0885E2A0;
L_0885E2A0:;
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E2AC;
L_0885E2AC:;
    ST32(s0+80, FBITS(f20));
    goto L_0885E2B0;
L_0885E2B0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885E2C4:;
    v0 = LD32(v1+56);
    t_ = v0;
    f20 = f1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E2D0;
L_0885E2D0:;
    ST32(s0+80, FBITS(f20));
    goto L_0885E2B0;
}

/* 0885E2D8 */
rv_t func_0885E2D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E2D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_0885E2F4;
L_0885E2F4:;
    s1 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0885E314; }
    goto L_0885E300;
L_0885E300:;
    goto L_0885E304;
L_0885E304:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885E314:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E324;
L_0885E324:;
    a0 = D_08B30734 - (1844);
    a0 = a0 + 1844;
    a1 = s1 + 0;
    a2 = v0 + 0;
    { rv_t r_ = func_088D201C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E338;
L_0885E338:;
    goto L_0885E304;
}

/* 0885E340 */
rv_t func_0885E340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0885E340:;
    sp = sp - 64;
    s1 = a0 + 88;
    s0 = a0 + 0;
    a0 = s1 + 0;
    s2 = a1 & 0xff;
    v0 = func_088D0CF8(a0);
    goto L_0885E368;
L_0885E368:;
    cnd_ = v0 == 0;
    v0 = LD32(s0+76);
    if (cnd_) { goto L_0885E3AC; }
    goto L_0885E370;
L_0885E370:;
    a1 = sp + 0;
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0885E3CC; }
    goto L_0885E380;
L_0885E380:;
    func_08876020(a0, a1);
    goto L_0885E388;
L_0885E388:;
    a0 = s0 + 0;
    v0 = func_08875FE8(a0);
    goto L_0885E390;
L_0885E390:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E3A0;
L_0885E3A0:;
    a0 = s1 + 0;
    { u64 r_ = func_088D0E20(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E3A8;
L_0885E3A8:;
    v0 = LD32(s0+76);
    goto L_0885E3AC;
L_0885E3AC:;
    v0 = (v0 & ~(0x1u << 1)) | ((s2 & 0x1) << 1);
    ST32(s0+76, v0);
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0885E3CC:;
    a0 = s1 + 0;
    func_088D0E74(a0);
    goto L_0885E3D4;
L_0885E3D4:;
    v0 = LD32(s0+76);
    goto L_0885E3AC;
}

/* 0885E3DC */
rv_t func_0885E3DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0885E3DC:;
    sp = sp - 64;
    v0 = 999;
    s1 = a0 + 0;
    v1 = LD32(a0+252);
    cnd_ = v1 == v0;
    a2 = sp + 0;
    if (cnd_) { goto L_0885E4A0; }
    goto L_0885E400;
L_0885E400:;
    v1 = LD32(a0);
    v0 = LD32(a0+100);
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
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    a3 = LD32(v1+24);
    t_ = a3;
    a1 = v0 + 280;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E48C;
L_0885E48C:;
    goto L_0885E490;
L_0885E490:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0885E4A0:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E4B0;
L_0885E4B0:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E4C4;
L_0885E4C4:;
    v1 = LD32(s1+76);
    a0 = s1 + 88;
    a1 = s0 + 0;
    v1 = v1 & 0x2;
    cnd_ = v1 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0885E518; }
    goto L_0885E4DC;
L_0885E4DC:;
    v0 = LD_U8(s1+77);
    goto L_0885E4E0;
L_0885E4E0:;
    cnd_ = v0 != 0;
    v1 = s1 + 88;
    if (cnd_) { goto L_0885E48C; }
    goto L_0885E4E8;
L_0885E4E8:;
    v0 = LD32(v1+8);
    a0 = v1 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0885E508; }
    goto L_0885E4F8;
L_0885E4F8:;
    v0 = LD32(v0+4);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0885E490; }
    goto L_0885E508;
L_0885E508:;
    { rv_t r_ = func_088D1050(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E510;
L_0885E510:;
    goto L_0885E490;
L_0885E518:;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E520;
L_0885E520:;
    v0 = LD_U8(s1+77);
    goto L_0885E4E0;
}

/* 0885E528 */
rv_t func_0885E528(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E528:;
    sp = sp - 16;
    v0 = 999;
    v1 = LD32(a0+252);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+77); goto L_0885E54C; }
    goto L_0885E540;
L_0885E540:;
    goto L_0885E544;
L_0885E544:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885E54C:;
    cnd_ = v0 != 0;
    v1 = a0 + 88;
    if (cnd_) { goto L_0885E540; }
    goto L_0885E554;
L_0885E554:;
    v0 = LD32(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1+116); goto L_0885E574; }
    goto L_0885E560;
L_0885E560:;
    v0 = LD32(v0+4);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885E544; }
    goto L_0885E570;
L_0885E570:;
    v0 = LD32(v1+116);
    goto L_0885E574;
L_0885E574:;
    a0 = v1 + 0;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0885E540; }
    goto L_0885E584;
L_0885E584:;
    func_088D1894();
    goto L_0885E58C;
L_0885E58C:;
    goto L_0885E544;
}

/* 0885E594 */
rv_t func_0885E594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885E594:;
    sp = sp - 32;
    a3 = 0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    v0 = LD_U8(a0+77);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0885E654; }
    goto L_0885E5C4;
L_0885E5C4:;
    a1 = LD_U8(a0+247);
    v1 = s2 < 0x1u;
    v0 = a2 < 0x1u;
    cnd_ = a1 != 0;
    v1 = v1 | v0;
    if (cnd_) { goto L_0885E654; }
    goto L_0885E5D8;
L_0885E5D8:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0885E658; }
    goto L_0885E5E0;
L_0885E5E0:;
    a2 = LD32(a0);
    v0 = LD32(s2+36);
    v1 = LD32(a2-12);
    v1 = a0 + v1;
    a1 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) {  goto L_0885E65C; }
    goto L_0885E5FC;
L_0885E5FC:;
    v0 = LD32(a2+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E608;
L_0885E608:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E61C;
L_0885E61C:;
    a2 = v0 + 0;
    a3 = s2 + 0;
    a0 = s1 + 88;
    a1 = s0 + 0;
    t0 = s3 + 0;
    { rv_t r_ = func_088D189C(a0, a1, a2, a3, t0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E634;
L_0885E634:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885E654; }
    goto L_0885E63C;
L_0885E63C:;
    v0 = LD32(s1);
    a3 = 1;
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    ST32(s3+4, v0);
    goto L_0885E654;
L_0885E654:;
    goto L_0885E658;
L_0885E658:;
    goto L_0885E65C;
L_0885E65C:;
    v0 = a3 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0885E674 */
rv_t func_0885E674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E674:;
    sp = sp - 16;
    v0 = a0 + 0;
    f0 = BITSF(LD32(a0+240));
    fcc = FCMP(f12, f0, 12);
    cnd_ = !fcc;
    a0 = a0 + 88;
    if (cnd_) { goto L_0885E6A0; }
    goto L_0885E694;
L_0885E694:;
    goto L_0885E698;
L_0885E698:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885E6A0:;
    ST32(v0+240, FBITS(f12));
    { rv_t r_ = func_088D0A64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E6A8;
L_0885E6A8:;
    goto L_0885E698;
}

/* 0885E6B0 */
void func_0885E6B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E6B0:;
    sp = sp - 16;
    v0 = a0 + 0;
    f0 = BITSF(LD32(a0+240));
    fcc = FCMP(f13, f0, 12);
    cnd_ = !fcc;
    a0 = a0 + 88;
    if (cnd_) { goto L_0885E6DC; }
    goto L_0885E6D0;
L_0885E6D0:;
    goto L_0885E6D4;
L_0885E6D4:;
    sp = sp + 16;
    return;
L_0885E6DC:;
    ST32(v0+240, FBITS(f13));
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E6E4;
L_0885E6E4:;
    goto L_0885E6D4;
}

/* 0885E6EC */
void func_0885E6EC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E6EC:;
    sp = sp - 16;
    s1 = a0 + 88;
    a0 = s1 + 0;
    s0 = a2 & 0xff;
    func_0890EBD0(a0, a1);
    goto L_0885E70C;
L_0885E70C:;
    cnd_ = s0 == 0;
    v0 = LD32(s1+116);
    if (cnd_) { goto L_0885E730; }
    goto L_0885E714;
L_0885E714:;
    v0 = v0 | 0x1;
    goto L_0885E718;
L_0885E718:;
    ST32(s1+116, v0);
    sp = sp + 16;
    return;
L_0885E730:;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_0885E718;
}

/* 0885E738 */
rv_t func_0885E738(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E738:;
    sp = sp - 16;
    s1 = a0 + 88;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E760;
L_0885E760:;
    v1 = LD32(s0);
    s2 = v0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E774;
L_0885E774:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_088D0D04(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E784;
L_0885E784:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0885E798; }
    goto L_0885E790;
L_0885E790:;
    { u64 r_ = func_088D0E20(a0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E798;
L_0885E798:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885E7B0 */
rv_t func_0885E7B0(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885E7B0:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 102;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E7DC;
L_0885E7DC:;
    s1 = s1 & 0xff;
    a1 = LD32(v0+24);
    v1 = 0 < s1;
    a0 = v0 + 0;
    ST8(a1, v1);
    a2 = 1;
    a1 = 1;
    a3 = LD32(s0);
    v1 = LD32(a3-12);
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    ST32(v0, a3);
    t0 = LD32(s0);
    v1 = LD32(t0-12);
    v1 = s0 + v1;
    a3 = LD32(v1+4);
    ST32(v0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E824;
L_0885E824:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08876370(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E830;
L_0885E830:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885E844 */
rv_t func_0885E844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0885E844:;
    sp = sp - 48;
    s4 = a3 & 0xff;
    a3 = 1;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    f0 = BITSF(LD32(a0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f20 = f12;
    if (cnd_) { goto L_0885E8B0; }
    goto L_0885E894;
L_0885E894:;
    v1 = LD32(a0+252);
    v0 = 999;
    a0 = D_08B28E68 - (-29080);
    a0 = a0 - 29080;
    a2 = 1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885E8E0; }
    goto L_0885E8B0;
L_0885E8B0:;
    goto L_0885E8B4;
L_0885E8B4:;
    v0 = a3 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0885E8E0:;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E8E8;
L_0885E8E8:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885E8B0; }
    goto L_0885E8F0;
L_0885E8F0:;
    s6 = LD32(v0+100);
    cnd_ = s6 == 0;
    if (cnd_) { goto L_0885E8B4; }
    goto L_0885E8FC;
L_0885E8FC:;
    s5 = LD32(s1+100);
    cnd_ = s5 == 0;
    a0 = 76;
    if (cnd_) { goto L_0885E8B4; }
    goto L_0885E908;
L_0885E908:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E910;
L_0885E910:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s5 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E924;
L_0885E924:;
    ST32(s1+256, s0);
    a0 = s0 + 0;
    a1 = s6 + 0;
    v1 = LD32(s0);
    a2 = s2 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885E944;
L_0885E944:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0885E958; }
    goto L_0885E94C;
L_0885E94C:;
    ST32(s1+256, 0);
    a3 = 0 + 0;
    goto L_0885E8B0;
L_0885E958:;
    ST32(s1+252, s3);
    ST32(s1+260, FBITS(f20));
    ST8(s1+248, s4);
    { u64 r_ = func_0885ECF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885E968;
L_0885E968:;
    a3 = 1;
    goto L_0885E8B0;
}

/* 0885E970 */
rv_t func_0885E970(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0885E970:;
    sp = sp - 48;
    t3 = 1;
    s4 = a1 + 0;
    s3 = t0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f20 = f12;
    if (cnd_) { goto L_0885E9D8; }
    goto L_0885E9BC;
L_0885E9BC:;
    v1 = LD32(a0+252);
    v0 = 999;
    a0 = D_08B28E68 - (-29080);
    a0 = a0 - 29080;
    a2 = 1;
    cnd_ = v1 == v0;
    t3 = 0 + 0;
    if (cnd_) { goto L_0885EA00; }
    goto L_0885E9D8;
L_0885E9D8:;
    v0 = t3 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0885EA00:;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885EA08;
L_0885EA08:;
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_0885E9D8; }
    goto L_0885EA10;
L_0885EA10:;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    a3 = s2 + 0;
    if (cnd_) { goto L_0885E9D8; }
    goto L_0885EA1C;
L_0885EA1C:;
    v0 = LD32(s0+100);
    a2 = s1 + 0;
    t0 = s3 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0885E9D8; }
    goto L_0885EA38;
L_0885EA38:;
    { rv_t r_ = func_088083B8(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EA40;
L_0885EA40:;
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_0885E9D8; }
    goto L_0885EA48;
L_0885EA48:;
    ST32(s0+260, FBITS(f20));
    t3 = 1;
    ST32(s0+252, s4);
    goto L_0885E9D8;
}

/* 0885EA58 */
rv_t func_0885EA58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0885EA58:;
    sp = sp - 64;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s3 = t0 + 0;
    s2 = a3 + 0;
    a3 = 1;
    s1 = a0 + 0;
    f0 = BITSF(LD32(a0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f20 = f12;
    if (cnd_) { goto L_0885EACC; }
    goto L_0885EAB0;
L_0885EAB0:;
    v1 = LD32(a0+252);
    v0 = 999;
    a0 = D_08B28E68 - (-29080);
    a0 = a0 - 29080;
    a2 = 1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885EB00; }
    goto L_0885EACC;
L_0885EACC:;
    goto L_0885EAD0;
L_0885EAD0:;
    v0 = a3 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0885EB00:;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885EB08;
L_0885EB08:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885EACC; }
    goto L_0885EB10;
L_0885EB10:;
    s7 = LD32(v0+100);
    cnd_ = s7 == 0;
    if (cnd_) { goto L_0885EAD0; }
    goto L_0885EB1C;
L_0885EB1C:;
    s6 = LD32(s1+100);
    cnd_ = s6 == 0;
    a0 = 108;
    if (cnd_) { goto L_0885EAD0; }
    goto L_0885EB28;
L_0885EB28:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EB30;
L_0885EB30:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s6 + 0;
    a2 = 0 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    func_0880FF60(a0, a1, a2, a3, t0);
    goto L_0885EB4C;
L_0885EB4C:;
    ST32(s1+256, s0);
    a0 = s0 + 0;
    a1 = s7 + 0;
    v1 = LD32(s0);
    a2 = s4 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EB6C;
L_0885EB6C:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0885EB80; }
    goto L_0885EB74;
L_0885EB74:;
    ST32(s1+256, 0);
    a3 = 0 + 0;
    goto L_0885EACC;
L_0885EB80:;
    ST32(s1+252, s5);
    ST32(s1+260, FBITS(f20));
    { u64 r_ = func_0885ECF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885EB8C;
L_0885EB8C:;
    a3 = 1;
    goto L_0885EACC;
}

/* 0885EB94 */
rv_t func_0885EB94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0885EB94:;
    sp = sp - 80;
    v1 = 1;
    s2 = 999;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+260));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f20 = f12;
    if (cnd_) { goto L_0885EC2C; }
    goto L_0885EBCC;
L_0885EBCC:;
    v0 = LD32(a0+252);
    a0 = D_08B28E68 - (-29080);
    a0 = a0 - 29080;
    a2 = 0 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == s2;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885EC2C; }
    goto L_0885EBE8;
L_0885EBE8:;
    { u64 r_ = func_08AACB78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885EBF0;
L_0885EBF0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885ECEC; }
    goto L_0885EBF8;
L_0885EBF8:;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0885EC30; }
    goto L_0885EC04;
L_0885EC04:;
    s1 = LD32(s0+100);
    cnd_ = s1 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0885EC30; }
    goto L_0885EC10;
L_0885EC10:;
    { rv_t r_ = func_08808534(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EC18;
L_0885EC18:;
    a0 = s0 + 0;
    v1 = 0 + 0;
    a1 = s1 + 280;
    cnd_ = v0 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0885EC4C; }
    goto L_0885EC2C;
L_0885EC2C:;
    goto L_0885EC30;
L_0885EC30:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0885EC4C:;
    v1 = LD32(s0);
    {v[112]=BITSF(LD32(s1+(292)));}
    {v[113]=BITSF(LD32(s1+(296)));}
    {v[114]=BITSF(LD32(s1+(300)));}
    {v[115]=BITSF(LD32(s1+(304)));}
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
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885ECD4;
L_0885ECD4:;
    ST32(s0+252, s2);
    v1 = 1;
    ST32(s0+260, FBITS(f20));
    ST8(s0+248, 0);
    ST32(s0+256, 0);
    goto L_0885EC2C;
L_0885ECEC:;
    ST32(s0+260, FBITS(f20));
    ST32(s0+252, s2);
    goto L_0885EC2C;
}

/* 0885ECF8 */
u64 func_0885ECF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0885ECF8:;
    v1 = LD32(a0+256);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0885ED1C; }
    goto L_0885ED04;
L_0885ED04:;
    v0 = LD_U8(a0+77);
    cnd_ = v0 == 0;
    a1 = LD32(v1+56);
    if (cnd_) { goto L_0885ED24; }
    goto L_0885ED10;
L_0885ED10:;
    v0 = 0x2000000u;
    a1 = a1 | v0;
    goto L_0885ED18;
L_0885ED18:;
    ST32(v1+56, a1);
    goto L_0885ED1C;
L_0885ED1C:;
    return (u64)v0 | ((u64)v1 << 32);
L_0885ED24:;
    a1 = (a1 & ~(0x1u << 25)) | ((0 & 0x1) << 25);
    goto L_0885ED18;
}

/* 0885ED2C */
rv_t func_0885ED2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885ED2C:;
    sp = sp - 16;
    v1 = LD32(a0+256);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0885ED4C; }
    goto L_0885ED40;
L_0885ED40:;
    goto L_0885ED44;
L_0885ED44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885ED4C:;
    { u64 r_ = func_0885ECF8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885ED54;
L_0885ED54:;
    goto L_0885ED44;
}

/* 0885ED5C */
rv_t func_0885ED5C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885ED5C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885EDDC; }
    goto L_0885ED90;
L_0885ED90:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885EDB4; }
    goto L_0885EDA4;
L_0885EDA4:;
    v0 = D_08B28E68 - (-29080);
    a0 = LD32(v0-29080);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885EDCC; }
    goto L_0885EDB4;
L_0885EDB4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885EDCC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885EDD4;
L_0885EDD4:;
    goto L_0885EDB4;
L_0885EDDC:;
    s3 = D_08B28E68 - (-29080);
    s0 = s3 - 29080;
    a0 = 128;
    v0 = 32;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EDF4;
L_0885EDF4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29080, v0);
    if (cnd_) { goto L_0885EE20; }
    goto L_0885EE04;
L_0885EE04:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0885EE0C;
L_0885EE0C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0885EE0C; }
    goto L_0885EE20;
L_0885EE20:;
    v0 = s3 - 29080;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0885ED90;
}

/* 0885EE30 */
rv_t func_0885EE30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885EE30:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885ED5C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EE44;
L_0885EE44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885EE50 */
rv_t func_0885EE50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885EE50:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885ED5C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EE64;
L_0885EE64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885EE70 */
void func_0885EE70(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
L_0885EE70:;
    v1 = LD32(a1);
    ST32(a0, v1);
    v0 = LD32(v1-12);
    a2 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, a2);
    v1 = LD32(a0);
    a2 = LD32(a1+8);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    ST32(v0, a2);
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v1 = 7;
    a0 = a0 + v0;
    ST16(a0+8, v1);
    return;
}

/* 0885EEB4 */
rv_t func_0885EEB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885EEB4:;
    sp = sp - 16;
    v0 = 90;
    a3 = a0 + 0;
    v1 = LD_U16(a1+16);
    a2 = 1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0885EEE4; }
    goto L_0885EED4;
L_0885EED4:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885EEE4:;
    v0 = LD32(a3);
    f12 = BITSF(LD32(a1+8));
    a1 = LD32(a1+24);
    a0 = LD32(v0-12);
    a0 = a3 + a0;
    { rv_t r_ = func_0885DE10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EEFC;
L_0885EEFC:;
    a0 = 1;
    goto L_0885EED4;
}

/* 0885EF04 */
rv_t func_0885EF04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0885EF04:;
    return (rv_t){ v0, v1, f0 };
}

/* 0885EF0C */
void func_0885EF0C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885EF0C:;
    sp = sp - 16;
    a3 = a1 + 0;
    a2 = LD32(a1);
    a1 = 2;
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    t0 = LD32(a3+8);
    v0 = LD32(a2-16);
    v0 = a0 + v0;
    ST32(v0, t0);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    func_0887625C(a0, a1);
    goto L_0885EF58;
L_0885EF58:;
    sp = sp + 16;
    return;
}

/* 0885EF64 */
rv_t func_0885EF64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0885EF64:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0885EF6C */
u32 func_0885EF6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885EF6C:;
    sp = sp - 16;
    v0 = D_08B28EA0 - (-29024);
    s1 = a2 + 0;
    v0 = LD32(v0-29024);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0885EFDC; }
    goto L_0885EF90;
L_0885EF90:;
    a0 = s0 + 0;
    v0 = func_0885F00C(a0);
    goto L_0885EF98;
L_0885EF98:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0885EFBC; }
    goto L_0885EFA4;
L_0885EFA4:;
    v0 = v1 + 0;
    goto L_0885EFAC;
L_0885EFAC:;
    sp = sp + 16;
    return v0;
L_0885EFBC:;
    v0 = func_0885F0B0(a0);
    goto L_0885EFC4;
L_0885EFC4:;
    v1 = v0 + 0;
    v0 = D_08B28E78 - (-29064);
    cnd_ = v1 != 0;
    v0 = v0 - 29064;
    if (cnd_) { goto L_0885EFA4; }
    goto L_0885EFD4;
L_0885EFD4:;
    goto L_0885EFAC;
L_0885EFDC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885EFE4;
L_0885EFE4:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0885EFA4; }
    goto L_0885EFEC;
L_0885EFEC:;
    goto L_0885EF90;
}

/* 0885EFF4 */
void func_0885EFF4(u32 a0)
{
    u32 v0 = 0;
L_0885EFF4:;
    v0 = D_08B28EA0 - (-29024);
    ST32(v0-29024, a0);
    return;
}

/* 0885F000 */
u32 func_0885F000(void)
{
    u32 v0 = 0;
L_0885F000:;
    v0 = D_08B28E78 - (-29064);
    v0 = v0 - 29064;
    return v0;
}

/* 0885F00C */
u32 func_0885F00C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F00C:;
    sp = sp - 16;
    a1 = a0 + 0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0885F094; }
    goto L_0885F020;
L_0885F020:;
    v0 = D_08B3071C - (1820);
    v1 = LD32(v0+1820);
    cnd_ = v1 == 0;
    t0 = v0 + 1820;
    if (cnd_) { goto L_0885F05C; }
    goto L_0885F030;
L_0885F030:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0885F038;
L_0885F038:;
    a0 = v0 + 40;
    a2 = v0 + 36;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0885F068; }
    goto L_0885F050;
L_0885F050:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0885F038; }
    goto L_0885F05C;
L_0885F05C:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0885F0A0; }
    goto L_0885F068;
L_0885F068:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0885F094; }
    goto L_0885F070;
L_0885F070:;
    v0 = LD32(a3+20);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0885F090; }
    goto L_0885F07C;
L_0885F07C:;
    v0 = LD32(a3+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a3+16); goto L_0885F090; }
    goto L_0885F08C;
L_0885F08C:;
    v1 = LD32(a3+24);
    goto L_0885F090;
L_0885F090:;
    v0 = v1 + 0;
    goto L_0885F094;
L_0885F094:;
    sp = sp + 16;
    return v0;
L_0885F0A0:;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F0A8;
L_0885F0A8:;
    a3 = v0 + 0;
    goto L_0885F068;
}

/* 0885F0B0 */
u32 func_0885F0B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F0B0:;
    sp = sp - 16;
    a1 = D_08B28EF4 - (-28940);
    v0 = 999;
    cnd_ = a0 == v0;
    v1 = a1 - 28940;
    if (cnd_) { goto L_0885F15C; }
    goto L_0885F0C8;
L_0885F0C8:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-28940);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0885F118; }
    goto L_0885F0EC;
L_0885F0EC:;
    a1 = LD32(a2);
    goto L_0885F0F0;
L_0885F0F0:;
    v0 = LD32(a1);
    v1 = LD32(v0-12);
    v1 = a1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(v1+16); goto L_0885F164; }
    goto L_0885F108;
L_0885F108:;
    a2 = LD32(a2+4);
    goto L_0885F10C;
L_0885F10C:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2); goto L_0885F0F0; }
    goto L_0885F114;
L_0885F114:;
    a1 = 0 + 0;
    goto L_0885F118;
L_0885F118:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885F14C; }
    goto L_0885F120;
L_0885F120:;
    a1 = LD32(a1+16);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0885F150; }
    goto L_0885F12C;
L_0885F12C:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F138;
L_0885F138:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0885F14C; }
    goto L_0885F140;
L_0885F140:;
    a0 = v0 + 0;
    v0 = func_08817BF8(a0);
    goto L_0885F148;
L_0885F148:;
    v1 = v0 + 0;
    goto L_0885F14C;
L_0885F14C:;
    goto L_0885F150;
L_0885F150:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0885F15C:;
    v1 = 0 + 0;
    goto L_0885F14C;
L_0885F164:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0885F10C; }
    goto L_0885F170;
L_0885F170:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_0885F10C; }
    goto L_0885F17C;
L_0885F17C:;
    goto L_0885F118;
}

/* 0885F184 */
rv_t func_0885F184(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F184:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B28E78 - (-29064);
    f15 = BITSF(0);
    cnd_ = v0 != 0;
    a0 = a0 - 29064;
    if (cnd_) { goto L_0885F1EC; }
    goto L_0885F1BC;
L_0885F1BC:;
    v0 = s1 < 0x1u;
    goto L_0885F1C0;
L_0885F1C0:;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885F1DC; }
    goto L_0885F1CC;
L_0885F1CC:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    v1 = D_08B28E78 - (-29064);
    ST32(v1-29064, v0);
    goto L_0885F1DC;
L_0885F1DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0885F1EC:;
    v0 = D_08AEBDE4 - (-16924);
    v1 = D_08AEBDE8 - (-16920);
    f12 = BITSF(LD32(v0-16924));
    f13 = BITSF(LD32(v1-16920));
    v0 = D_08AEBDEC - (-16916);
    f14 = BITSF(LD32(v0-16916));
    f16 = f12;
    f17 = f13;
    f0 = func_0884B44C(a0, f12, f13, f14, f15, f16, f17);
    goto L_0885F210;
L_0885F210:;
    v0 = s1 < 0x1u;
    goto L_0885F1C0;
}

/* 0885F218 */
rv_t func_0885F218(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F218:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885F184(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F22C;
L_0885F22C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885F238 */
rv_t func_0885F238(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F238:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885F184(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F24C;
L_0885F24C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885F258 */
rv_t func_0885F258(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885F258:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0885F2D8; }
    goto L_0885F28C;
L_0885F28C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0885F2B0; }
    goto L_0885F2A0;
L_0885F2A0:;
    v0 = D_08B28EA4 - (-29020);
    a0 = LD32(v0-29020);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0885F2C8; }
    goto L_0885F2B0;
L_0885F2B0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0885F2C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F2D0;
L_0885F2D0:;
    goto L_0885F2B0;
L_0885F2D8:;
    s3 = D_08B28EA4 - (-29020);
    s0 = s3 - 29020;
    a0 = 16;
    v0 = 4;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F2F0;
L_0885F2F0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-29020, v0);
    if (cnd_) { goto L_0885F31C; }
    goto L_0885F300;
L_0885F300:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0885F308;
L_0885F308:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0885F308; }
    goto L_0885F31C;
L_0885F31C:;
    v0 = s3 - 29020;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_0885F28C;
}

/* 0885F32C */
rv_t func_0885F32C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F32C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0885F258(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F340;
L_0885F340:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885F34C */
rv_t func_0885F34C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F34C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0885F258(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F360;
L_0885F360:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0885F36C */
void func_0885F36C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885F36C:;
    sp = sp - 32;
    t1 = D_08B45A9C - (23196);
    a3 = t1 + 23196;
    s3 = D_08B28EB4 - (-29004);
    s2 = s3 - 29004;
    s0 = a0 + 0;
    t0 = s0 + 124;
    v0 = LD32(a1);
    ST32(a0, v0);
    v1 = LD32(v0-12);
    a0 = LD32(a1+4);
    v0 = D_08AEBDF0 - (-16912);
    v1 = s0 + v1;
    ST32(v1, a0);
    a2 = LD32(s0);
    a0 = LD32(a1+8);
    f0 = BITSF(LD32(v0-16912));
    v1 = LD32(a2-16);
    v0 = D_08AEBDF8 - (-16904);
    f1 = BITSF(LD32(v0-16904));
    v1 = s0 + v1;
    ST32(v1, a0);
    v0 = D_08AEBDF4 - (-16908);
    v1 = LD32(s0);
    f2 = BITSF(LD32(v0-16908));
    a0 = LD32(a1+12);
    v0 = LD32(v1-20);
    v0 = s0 + v0;
    ST32(v0, a0);
    a0 = 12;
    v1 = LD32(s0);
    a2 = LD32(a1+16);
    v0 = LD32(v1-24);
    v1 = 3;
    v0 = s0 + v0;
    ST32(v0, a2);
    v0 = D_08AEBDFC - (-16900);
    ST32(s0+40, FBITS(f2));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f0));
    ST32(s0+12, FBITS(f0));
    ST32(s0+16, FBITS(f0));
    ST32(s0+32, FBITS(f2));
    ST32(s0+36, FBITS(f2));
    ST32(s0+44, FBITS(f1));
    ST32(s0+48, FBITS(f1));
    a2 = LD32(s0);
    f2 = BITSF(LD32(v0-16900));
    ST32(s0+116, v1);
    v0 = 17;
    v1 = 999;
    a1 = LD32(a2-24);
    ST32(s0+52, FBITS(f1));
    a1 = s0 + a1;
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST32(s0+56, FBITS(f1));
    ST32(s0+80, FBITS(f2));
    ST32(s0+96, FBITS(f1));
    ST32(s0+112, FBITS(f0));
    ST32(s0+60, FBITS(f0));
    ST32(s0+64, FBITS(f0));
    ST32(s0+68, FBITS(f0));
    ST32(s0+72, FBITS(f0));
    ST32(s0+76, FBITS(f2));
    ST32(s0+84, FBITS(f1));
    ST32(s0+88, FBITS(f1));
    ST32(s0+92, FBITS(f1));
    ST32(s0+100, FBITS(f0));
    ST32(s0+104, FBITS(f0));
    ST32(s0+108, FBITS(f0));
    ST16(a1+8, v0);
    ST32(s0+120, v1);
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(t1+23196));
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    v0 = LD32(s0+116);
    a1 = LD32(s0);
    ST32(s0+136, 0);
    v0 = v0 | 0xc;
    ST32(s0+116, v0);
    v1 = LD32(a1-24);
    v0 = LD32(s2+4);
    ST32(s0+124, FBITS(f2));
    v1 = s0 + v1;
    v0 = v0 - 1;
    s1 = LD32(v1+4);
    s1 = s1 & v0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F4F0;
L_0885F4F0:;
    a0 = LD32(s3-29004);
    s1 = s1 << 2;
    v1 = LD32(s2+12);
    s1 = s1 + a0;
    a1 = LD32(s1);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s0);
    ST32(s1, v0);
    ST8(v0+8, 0);
    sp = sp + 32;
    return;
}

/* 0885F538 */
void func_0885F538(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F538:;
    sp = sp - 16;
    t0 = a0 + 0;
    a3 = D_08B28EB4 - (-29004);
    s0 = a3 - 29004;
    a2 = LD32(a1);
    ST32(a0, a2);
    v0 = LD32(a2-12);
    v1 = LD32(a1+4);
    v0 = a0 + v0;
    ST32(v0, v1);
    a0 = LD32(a0);
    a2 = LD32(a1+8);
    v0 = LD32(a0-16);
    v0 = t0 + v0;
    ST32(v0, a2);
    v1 = LD32(t0);
    a0 = LD32(a1+12);
    v0 = LD32(v1-20);
    v0 = t0 + v0;
    ST32(v0, a0);
    v1 = LD32(t0);
    a2 = LD32(a1+16);
    a0 = LD32(s0+4);
    v0 = LD32(v1-24);
    a1 = LD32(a3-29004);
    a0 = a0 - 1;
    v0 = t0 + v0;
    ST32(v0, a2);
    v1 = LD32(t0);
    v0 = LD32(v1-24);
    v0 = t0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a2 = v1 << 2;
    a1 = a2 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0885F5F4; }
    goto L_0885F5D8;
L_0885F5D8:;
    v0 = LD32(a0);
    goto L_0885F5DC;
L_0885F5DC:;
    cnd_ = v0 == t0;
    if (cnd_) { v0 = LD32(s0+8); goto L_0885F604; }
    goto L_0885F5E4;
L_0885F5E4:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0885F5DC; }
    goto L_0885F5F4;
L_0885F5F4:;
    sp = sp + 16;
    return;
L_0885F604:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0885F614; }
    goto L_0885F60C;
L_0885F60C:;
    ST8(a0+8, v0);
    goto L_0885F5F4;
L_0885F614:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_0885F63C; }
    goto L_0885F61C;
L_0885F61C:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_0885F624;
L_0885F624:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F62C;
L_0885F62C:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_0885F5F4;
L_0885F63C:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_0885F624;
}

/* 0885F64C */
rv_t func_0885F64C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885F64C:;
    v1 = D_08AF3C00 - (15360);
    v1 = v1 + 15360;
    v0 = a0 + 0;
    a1 = v1 + 196;
    a0 = v1 + 100;
    a3 = v1 + 580;
    a2 = v1 + 376;
    sp = sp - 32;
    ST32(v0+208, a2);
    ST32(v0+284, a3);
    ST32(v0, v1);
    ST32(v0+140, a0);
    a0 = D_08B28EB4 - (-29004);
    a0 = a0 - 29004;
    ST32(v0+200, a1);
    a1 = v0 + 0;
    s0 = D_08AF3E90 - (16016);
    s0 = s0 + 16016;
    s1 = v0 + 140;
    s4 = v0 + 284;
    s3 = v0 + 208;
    s2 = v0 + 200;
    func_08AADA38(a0, a1, t1, t2, t3);
    goto L_0885F6C0;
L_0885F6C0:;
    a1 = s0 + 20;
    a0 = s1 + 0;
    func_08860518(a0, a1, 0);
    goto L_0885F6CC;
L_0885F6CC:;
    a1 = s0 + 36;
    a0 = s2 + 0;
    s0 = s0 + 48;
    func_088658E8(a0, a1, 0);
    goto L_0885F6DC;
L_0885F6DC:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885F6E8;
L_0885F6E8:;
    a0 = s4 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F6F0;
L_0885F6F0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0885F710 */
rv_t func_0885F710(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0885F710:;
    v0 = D_08AF3C00 - (15360);
    sp = sp - 32;
    v0 = v0 + 15360;
    a3 = v0 + 580;
    v1 = v0 + 100;
    a2 = v0 + 376;
    s1 = a0 + 0;
    a0 = v0 + 196;
    ST32(s1+140, v1);
    a1 = s1 + 0;
    ST32(s1+208, a2);
    ST32(s1+284, a3);
    ST32(s1+200, a0);
    a0 = D_08B28EB4 - (-29004);
    a0 = a0 - 29004;
    ST32(s1, v0);
    s0 = D_08AF3E90 - (16016);
    s0 = s0 + 16016;
    s2 = s1 + 140;
    s5 = s1 + 284;
    s4 = s1 + 208;
    func_08AADA38(a0, a1, t1, t2, t3);
    goto L_0885F784;
L_0885F784:;
    s3 = s1 + 200;
    a1 = s0 + 20;
    a0 = s2 + 0;
    func_08860518(a0, a1, 0);
    goto L_0885F794;
L_0885F794:;
    a1 = s0 + 36;
    a0 = s3 + 0;
    s0 = s0 + 48;
    func_088658E8(a0, a1, 0);
    goto L_0885F7A4;
L_0885F7A4:;
    a1 = s0 + 0;
    a0 = s4 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0885F7B0;
L_0885F7B0:;
    a0 = s5 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F7B8;
L_0885F7B8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0885F7C0;
L_0885F7C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0885F7E4 */
rv_t func_0885F7E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0885F7E4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F808;
L_0885F808:;
    a0 = s1 + 0;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F814;
L_0885F814:;
    f12 = BITSF(LD32(s0+8));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F820;
L_0885F820:;
    f12 = BITSF(LD32(s0+12));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F82C;
L_0885F82C:;
    f12 = BITSF(LD32(s0+16));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F838;
L_0885F838:;
    f12 = BITSF(LD32(s0+20));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F844;
L_0885F844:;
    f12 = BITSF(LD32(s0+24));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F850;
L_0885F850:;
    f12 = BITSF(LD32(s0+28));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F85C;
L_0885F85C:;
    f12 = BITSF(LD32(s0+32));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F868;
L_0885F868:;
    f12 = BITSF(LD32(s0+36));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F874;
L_0885F874:;
    f12 = BITSF(LD32(s0+40));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F880;
L_0885F880:;
    f12 = BITSF(LD32(s0+44));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F88C;
L_0885F88C:;
    f12 = BITSF(LD32(s0+48));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F898;
L_0885F898:;
    f12 = BITSF(LD32(s0+52));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8A4;
L_0885F8A4:;
    f12 = BITSF(LD32(s0+56));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8B0;
L_0885F8B0:;
    f12 = BITSF(LD32(s0+60));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8BC;
L_0885F8BC:;
    f12 = BITSF(LD32(s0+64));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8C8;
L_0885F8C8:;
    f12 = BITSF(LD32(s0+68));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8D4;
L_0885F8D4:;
    f12 = BITSF(LD32(s0+72));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8E0;
L_0885F8E0:;
    f12 = BITSF(LD32(s0+76));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8EC;
L_0885F8EC:;
    f12 = BITSF(LD32(s0+80));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F8F8;
L_0885F8F8:;
    f12 = BITSF(LD32(s0+84));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F904;
L_0885F904:;
    f12 = BITSF(LD32(s0+88));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F910;
L_0885F910:;
    f12 = BITSF(LD32(s0+92));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F91C;
L_0885F91C:;
    f12 = BITSF(LD32(s0+96));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F928;
L_0885F928:;
    f12 = BITSF(LD32(s0+100));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F934;
L_0885F934:;
    f12 = BITSF(LD32(s0+104));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F940;
L_0885F940:;
    f12 = BITSF(LD32(s0+108));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F94C;
L_0885F94C:;
    f12 = BITSF(LD32(s0+112));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F958;
L_0885F958:;
    a1 = LD32(s0+116);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F964;
L_0885F964:;
    a1 = LD32(s0+120);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F970;
L_0885F970:;
    a1 = s0 + 124;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F97C;
L_0885F97C:;
    a1 = LD32(s0+136);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F988;
L_0885F988:;
    v1 = LD32(s0);
    a1 = s1 + 0;
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    a0 = s0 + 0;
    { rv_t r_ = func_08860770(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0885F9A0;
L_0885F9A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}
