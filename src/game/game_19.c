#include "game.h"

/* 089AF0A4 */
u64 func_089AF0A4(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089AF0A4:;
    sp = sp - 112;
    a2 = D_08C2C0A0 - (-16224);
    v1 = a2 - 16224;
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
    if (cnd_) { goto L_089AF13C; }
    goto L_089AF0F0;
L_089AF0F0:;
    a2 = LD32(a2-16224);
    a3 = a1 + 0;
    goto L_089AF0F8;
L_089AF0F8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089AF12C; }
    goto L_089AF110;
L_089AF110:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089AF140; }
    goto L_089AF120;
L_089AF120:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089AF110; }
    goto L_089AF12C;
L_089AF12C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089AF0F8; }
    goto L_089AF13C;
L_089AF13C:;
    v0 = LD32(sp+8);
    goto L_089AF140;
L_089AF140:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089AF220; }
    goto L_089AF148;
L_089AF148:;
    s2 = s1 + 528;
    s0 = LD32(v0);
    goto L_089AF150;
L_089AF150:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF16C;
L_089AF16C:;
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f6 = BITSF(LD32(s1+528));
    f7 = BITSF(LD32(s2+4));
    f8 = BITSF(LD32(s2+8));
    f1 = f0 - f6;
    f2 = f4 - f7;
    f3 = f5 - f8;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f4));
    a0 = 0x806d;
    a1 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(sp+24, FBITS(f5));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(sp+32, FBITS(f6));
    f4 = BITSF(v0);
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    f0 = BITSF(LD32(s0+116));
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_089AF2DC; }
    goto L_089AF204;
L_089AF204:;
    a0 = sp + 0;
    goto L_089AF208;
L_089AF208:;
    a1 = 1;
    { u64 r_ = func_08AC4ED0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AF210;
L_089AF210:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089AF150; }
    goto L_089AF21C;
L_089AF21C:;
    s1 = LD32(sp);
    goto L_089AF220;
L_089AF220:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089AF2A4; }
    goto L_089AF230;
L_089AF230:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089AF2A4; }
    goto L_089AF23C;
L_089AF23C:;
    v0 = LD32(s1);
    goto L_089AF240;
L_089AF240:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089AF294; }
    goto L_089AF254;
L_089AF254:;
    v0 = LD_U8(s0+8);
    goto L_089AF258;
L_089AF258:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089AF2D4; }
    goto L_089AF260;
L_089AF260:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089AF2C4; }
    goto L_089AF268;
L_089AF268:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089AF270;
L_089AF270:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AF27C;
L_089AF27C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089AF288;
L_089AF288:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089AF258; }
    goto L_089AF290;
L_089AF290:;
    v1 = LD32(s1+4);
    goto L_089AF294;
L_089AF294:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089AF240; }
    goto L_089AF2A4;
L_089AF2A4:;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_089AF2C4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089AF270;
L_089AF2D4:;
    s0 = LD32(s0+4);
    goto L_089AF288;
L_089AF2DC:;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    s0 = LD32(v0+4);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AF2EC;
L_089AF2EC:;
    a2 = LD32(s1);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(a2-16);
    a2 = 1;
    v1 = s1 + v1;
    a3 = LD32(v1+4);
    ST32(v0, s0);
    ST32(v0+4, a3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF314;
L_089AF314:;
    a0 = sp + 0;
    goto L_089AF208;
}

/* 089AF31C */
rv_t func_089AF31C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089AF31C:;
    sp = sp - 176;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    s1 = a0 + 0;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { u64 r_ = func_089C6884(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AF344;
L_089AF344:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    {u32 a_=sp+(144);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089AF364; }
    goto L_089AF350;
L_089AF350:;
    goto L_089AF354;
L_089AF354:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_089AF364:;
    a2 = s1 + 552;
    v1 = LD32(s1+552);
    v0 = LD32(a2+4);
    t0 = s1 + 540;
    {u32 a_=sp+(48);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(a2+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(a2+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a2+12);
    {v[16]=BITSF(v1);}
    v1 = LD32(a2+20);
    {v[17]=BITSF(v0);}
    v0 = LD32(a2+28);
    {v[18]=BITSF(v1);}
    v1 = LD32(a2+24);
    {v[32]=BITSF(v1);}
    v1 = LD32(a2+32);
    {v[33]=BITSF(v0);}
    {v[34]=BITSF(v1);}
    v1 = D_08AEEAC4 - (-5436);
    a3 = LD32(t0+8);
    v0 = LD32(s1+540);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    f12 = BITSF(LD32(v1-5436));
    {u32 a_=sp+(32);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(t0+4);
    {v[20]=BITSF(v0);}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a3);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    s0 = D_08C2B1C4 - (-20028);
    a1 = s1 + 528;
    a3 = 0 + 0;
    t0 = sp + 0;
    {v0=FBITS(v[17]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+20, v0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(s0-20028, s1);
    { rv_t r_ = func_088EDEFC(a0, a1, a2, a3, t0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF43C;
L_089AF43C:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    ST32(s0-20028, 0);
    if (cnd_) { goto L_089AF350; }
    goto L_089AF448;
L_089AF448:;
    a0 = s1 + 0;
    { rv_t r_ = func_089AE7DC(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF450;
L_089AF450:;
    goto L_089AF354;
}

/* 089AF458 */
rv_t func_089AF458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089AF458:;
    ST32(a1+284, 0);
    v1 = a1 + 80;
    v0 = D_08AEEAC8 - (-5432);
    f3 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0-5432));
    f1 = BITSF(LD32(a1+80));
    sp = sp - 32;
    f3 = f3 * f0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    ST32(sp+24, FBITS(f3));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    v1 = LD32(sp+24);
    a0 = LD32(sp+20);
    v0 = LD32(sp+16);
    ST32(a1+88, v1);
    ST32(a1+80, v0);
    ST32(a1+84, a0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089AF4B0 */
void func_089AF4B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089AF4B0:;
    sp = sp - 112;
    s2 = a0 + 0;
    s4 = 0 + 0;
    v0 = func_089A9538(a0, t1, t2, t3);
    goto L_089AF4E4;
L_089AF4E4:;
    a0 = s2 + 0;
    s5 = v0 + 0;
    v0 = func_089A9560(a0, 0, 0, 0);
    goto L_089AF4F0;
L_089AF4F0:;
    s7 = v0 + 0;
    v1 = s2 + 528;
    v0 = s2 + 552;
    f10 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s2+528));
    f1 = BITSF(LD32(v1+4));
    f11 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(s2+552));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+12));
    f6 = BITSF(LD32(v0+16));
    f7 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(v0+24));
    f9 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f10));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+44, FBITS(f9));
    cnd_ = s5 == 0;
    ST32(sp+48, FBITS(f11));
    if (cnd_) { goto L_089AF638; }
    goto L_089AF560;
L_089AF560:;
    s6 = sp + 16;
    s3 = s2 + 0;
    a1 = s4 + 0;
    goto L_089AF56C;
L_089AF56C:;
    a0 = s2 + 0;
    v0 = func_089AF7B0(a1);
    goto L_089AF574;
L_089AF574:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    a2 = sp + 0;
    a0 = LD32(v1-12);
    a3 = s6 + 0;
    t0 = 1;
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF5A0;
L_089AF5A0:;
    a3 = 0 + 0;
    t0 = 15;
    a1 = s6 + 0;
    a2 = s7 + 0;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089AF63C; }
    goto L_089AF5B8;
L_089AF5B8:;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF5C0;
L_089AF5C0:;
    ST32(s3+864, v0);
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF5CC;
L_089AF5CC:;
    a1 = LD32(s3+864);
    a0 = v0 + 0;
    a2 = 1;
    s0 = v0 + 0;
    func_0880FBFC(a0, a1, a2);
    goto L_089AF5E0;
L_089AF5E0:;
    v1 = LD32(s2);
    a1 = s4 + 0;
    s3 = s3 + 4;
    v0 = LD32(v1-12);
    a0 = s2 + 0;
    v0 = s2 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_089AF63C; }
    goto L_089AF604;
L_089AF604:;
    v0 = func_089AF7B0(a1);
    goto L_089AF60C;
L_089AF60C:;
    v1 = LD32(s0);
    a2 = v0 + 0;
    a3 = 1;
    v0 = LD32(v1+12);
    a0 = s0 + 0;
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF628;
L_089AF628:;
    cnd_ = v0 == 0;
    v1 = s4 < s5;
    if (cnd_) { goto L_089AF63C; }
    goto L_089AF630;
L_089AF630:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = s4 + 0; goto L_089AF56C; }
    goto L_089AF638;
L_089AF638:;
    ST32(s2+888, s5);
    goto L_089AF63C;
L_089AF63C:;
    sp = sp + 112;
    return;
}

/* 089AF668 */
void func_089AF668(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089AF668:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = LD32(a0+888);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089AF6D0; }
    goto L_089AF690;
L_089AF690:;
    s3 = D_08B30B5C - (2908);
    s0 = a0 + 864;
    a1 = LD32(s0);
    goto L_089AF69C;
L_089AF69C:;
    a0 = s3 + 2908;
    s1 = s1 + 1;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AF6A8;
L_089AF6A8:;
    a0 = v0 + 0;
    s0 = s0 + 4;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089AF6C0; }
    goto L_089AF6B8;
L_089AF6B8:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AF6C0;
L_089AF6C0:;
    v0 = LD32(s2+888);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_089AF69C; }
    goto L_089AF6D0;
L_089AF6D0:;
    ST32(s2+888, 0);
    sp = sp + 32;
    return;
}

/* 089AF6F0 */
void func_089AF6F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AF6F0:;
    sp = sp - 16;
    v0 = D_08B2C1BC - (-15940);
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0+888); goto L_089AF740; }
    goto L_089AF708;
L_089AF708:;
    a1 = LD32(a0+844);
    v0 = a1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+888); goto L_089AF740; }
    goto L_089AF718;
L_089AF718:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = a1 & 0x4;
    if (cnd_) { goto L_089AF750; }
    goto L_089AF73C;
L_089AF73C:;
    v0 = LD32(a0+888);
    goto L_089AF740;
L_089AF740:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AF7A0; }
    goto L_089AF748;
L_089AF748:;
    a1 = LD32(a0+844);
    v0 = a1 & 0x4;
    goto L_089AF750;
L_089AF750:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AF788; }
    goto L_089AF758;
L_089AF758:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089AF788; }
    goto L_089AF77C;
L_089AF77C:;
    v0 = LD32(a0+888);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AF790; }
    goto L_089AF788;
L_089AF788:;
    sp = sp + 16;
    return;
L_089AF790:;
    func_089AF4B0(a0, t1, t2, t3);
    goto L_089AF798;
L_089AF798:;
    goto L_089AF788;
L_089AF7A0:;
    func_089AF668(a0);
    goto L_089AF7A8;
L_089AF7A8:;
    goto L_089AF788;
}

/* 089AF7B0 */
u32 func_089AF7B0(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
L_089AF7B0:;
    v1 = 0xc0630000u;
    v0 = a1 < 0x6u;
    cnd_ = v0 == 0;
    v1 = v1 | 0x8e87;
    if (cnd_) { goto L_089AF7E4; }
    goto L_089AF7C0;
L_089AF7C0:;
    v1 = D_08ADE4E8 - (-6936);
    v0 = a1 << 2;
    v1 = v1 - 6936;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089AF7DCu: goto L_089AF7DC; case 0x089AF7ECu: goto L_089AF7EC; case 0x089AF7F8u: goto L_089AF7F8; case 0x089AF804u: goto L_089AF804; case 0x089AF810u: goto L_089AF810; case 0x089AF81Cu: goto L_089AF81C; default: rs_break(0, 0x089af7d4); }
L_089AF7DC:;
    v1 = 0xc0630000u;
    v1 = v1 | 0x8e87;
    goto L_089AF7E4;
L_089AF7E4:;
    v0 = v1 + 0;
    return v0;
L_089AF7EC:;
    v1 = 0xc0630000u;
    v1 = v1 | 0x8e88;
    goto L_089AF7E4;
L_089AF7F8:;
    v1 = 0xc0630000u;
    v1 = v1 | 0x8e89;
    goto L_089AF7E4;
L_089AF804:;
    v1 = 0xc0630000u;
    v1 = v1 | 0x8e8a;
    goto L_089AF7E4;
L_089AF810:;
    v1 = 0xc0630000u;
    v1 = v1 | 0x8e8b;
    goto L_089AF7E4;
L_089AF81C:;
    v1 = 0xc0630000u;
    v1 = v1 | 0x8e8c;
    goto L_089AF7E4;
}

/* 089AF828 */
void func_089AF828(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AF828:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+856);
    v0 = v0 | 0x4;
    ST32(a0+856, v0);
    v0 = func_089C6C28(a0, t1, t2, t3);
    goto L_089AF848;
L_089AF848:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089AF858;
L_089AF858:;
    sp = sp + 16;
    return;
}

/* 089AF868 */
void func_089AF868(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AF868:;
    sp = sp - 16;
    v0 = LD32(a0+732);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089AF890; }
    goto L_089AF880;
L_089AF880:;
    goto L_089AF884;
L_089AF884:;
    sp = sp + 16;
    return;
L_089AF890:;
    v0 = LD32(a0+856);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(a0+856, v0);
    v0 = func_089C6C50(a0, t1, t2, t3);
    goto L_089AF8A0;
L_089AF8A0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 0 + 0;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089AF8B0;
L_089AF8B0:;
    goto L_089AF884;
}

/* 089AF8B8 */
void func_089AF8B8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AF8B8:;
    sp = sp - 16;
    v0 = LD32(a0+844);
    v0 = (v0 >> 13) & 0x1;
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089AF92C; }
    goto L_089AF8D0;
L_089AF8D0:;
    v0 = LD32(a0+856);
    a1 = v0 & 0x4;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089AF8FC; }
    goto L_089AF8E0;
L_089AF8E0:;
    v0 = LD32(a0+852);
    a2 = (v0 >> 1) & 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089AF8FC; }
    goto L_089AF8F4;
L_089AF8F4:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_089AF938; }
    goto L_089AF8FC;
L_089AF8FC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089AF930; }
    goto L_089AF904;
L_089AF904:;
    v0 = LD32(v1+852);
    a0 = v1 + 0;
    v1 = v0 & 0x1;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089AF924; }
    goto L_089AF91C;
L_089AF91C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089AF930; }
    goto L_089AF924;
L_089AF924:;
    func_089AF868(a0, t1, t2, t3);
    goto L_089AF92C;
L_089AF92C:;
    goto L_089AF930;
L_089AF930:;
    sp = sp + 16;
    return;
L_089AF938:;
    func_089AF828(a0, t1, t2, t3);
    goto L_089AF940;
L_089AF940:;
    goto L_089AF930;
}

/* 089AF948 */
u64 func_089AF948(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089AF948:;
    sp = sp - 64;
    a2 = D_08C2A9D8 - (-22056);
    v0 = a2 - 22056;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089AF9E0; }
    goto L_089AF994;
L_089AF994:;
    a2 = LD32(a2-22056);
    a3 = a1 + 0;
    goto L_089AF99C;
L_089AF99C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089AF9D0; }
    goto L_089AF9B4;
L_089AF9B4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089AF9E4; }
    goto L_089AF9C4;
L_089AF9C4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089AF9B4; }
    goto L_089AF9D0;
L_089AF9D0:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089AF99C; }
    goto L_089AF9E0;
L_089AF9E0:;
    v1 = LD32(sp+8);
    goto L_089AF9E4;
L_089AF9E4:;
    cnd_ = v1 == 0;
    v0 = D_08AEEACC - (-5428);
    if (cnd_) { goto L_089AFA78; }
    goto L_089AF9EC;
L_089AF9EC:;
    f20 = BITSF(LD32(v0-5428));
    a3 = 0 + 0;
    goto L_089AF9F4;
L_089AF9F4:;
    a1 = 32;
    a2 = 0 + 0;
    a0 = 0x8001;
    s1 = LD32(v1);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AFA08;
L_089AFA08:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089AFA48; }
    goto L_089AFA10;
L_089AFA10:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089AFA1C;
L_089AFA1C:;
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
    goto L_089AFA44;
L_089AFA44:;
    ST32(s0+8, v0);
    goto L_089AFA48;
L_089AFA48:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AFA60;
L_089AFA60:;
    a0 = sp + 0;
    a1 = 1;
    func_08AC4F74(a0, a1);
    goto L_089AFA6C;
L_089AFA6C:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089AF9F4; }
    goto L_089AFA78;
L_089AFA78:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089AFB00; }
    goto L_089AFA8C;
L_089AFA8C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089AFB00; }
    goto L_089AFA98;
L_089AFA98:;
    v0 = LD32(s1);
    goto L_089AFA9C;
L_089AFA9C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089AFAF0; }
    goto L_089AFAB0;
L_089AFAB0:;
    v0 = LD_U8(s0+8);
    goto L_089AFAB4;
L_089AFAB4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089AFB34; }
    goto L_089AFABC;
L_089AFABC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089AFB24; }
    goto L_089AFAC4;
L_089AFAC4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089AFACC;
L_089AFACC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089AFAD8;
L_089AFAD8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089AFAE4;
L_089AFAE4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089AFAB4; }
    goto L_089AFAEC;
L_089AFAEC:;
    v1 = LD32(s1+4);
    goto L_089AFAF0;
L_089AFAF0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089AFA9C; }
    goto L_089AFB00;
L_089AFB00:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089AFB24:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089AFACC;
L_089AFB34:;
    s0 = LD32(s0+4);
    goto L_089AFAE4;
}

/* 089AFB3C */
void func_089AFB3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089AFB3C:;
    sp = sp - 96;
    s2 = D_08B285A0 - (-31328);
    s1 = D_08AEEAD0 - (-5424);
    s0 = a0 + 0;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089AFB80; }
    goto L_089AFB68;
L_089AFB68:;
    goto L_089AFB6C;
L_089AFB6C:;
    sp = sp + 96;
    return;
L_089AFB80:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AFB88;
L_089AFB88:;
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s0+860));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f2, f3, 2);
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_089AFFC8; }
    goto L_089AFBB0;
L_089AFBB0:;
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AFBB8;
L_089AFBB8:;
    f0 = BITSF(LD32(s2-31328));
    f2 = BITSF(LD32(s1-5424));
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
    if (cnd_) { goto L_089AFE40; }
    goto L_089AFBFC;
L_089AFBFC:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFD80; }
    goto L_089AFC0C;
L_089AFC0C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AFCA4; }
    goto L_089AFC34;
L_089AFC34:;
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
    if (cnd_) { goto L_089AFC80; }
    goto L_089AFC70;
L_089AFC70:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AFC80;
L_089AFC80:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFCC4; }
    goto L_089AFC90;
L_089AFC90:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AFCC4; }
    goto L_089AFCA0;
L_089AFCA0:;
    goto L_089AFCA4;
L_089AFCA4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFCC4; }
    goto L_089AFCB8;
L_089AFCB8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AFCC4;
L_089AFCC4:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AFD54; }
    goto L_089AFCE4;
L_089AFCE4:;
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
    if (cnd_) { goto L_089AFD30; }
    goto L_089AFD20;
L_089AFD20:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AFD30;
L_089AFD30:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFD74; }
    goto L_089AFD40;
L_089AFD40:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AFD74; }
    goto L_089AFD50;
L_089AFD50:;
    goto L_089AFD54;
L_089AFD54:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFD74; }
    goto L_089AFD68;
L_089AFD68:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AFD74;
L_089AFD74:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AFEF8; }
    goto L_089AFD7C;
L_089AFD7C:;
    goto L_089AFD80;
L_089AFD80:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AFE14; }
    goto L_089AFDA4;
L_089AFDA4:;
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
    if (cnd_) { goto L_089AFDF0; }
    goto L_089AFDE0;
L_089AFDE0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AFDF0;
L_089AFDF0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFE34; }
    goto L_089AFE00;
L_089AFE00:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AFE34; }
    goto L_089AFE10;
L_089AFE10:;
    goto L_089AFE14;
L_089AFE14:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFE34; }
    goto L_089AFE28;
L_089AFE28:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AFE34;
L_089AFE34:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089AFEF8; }
    goto L_089AFE3C;
L_089AFE3C:;
    goto L_089AFE40;
L_089AFE40:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089AFED4; }
    goto L_089AFE64;
L_089AFE64:;
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
    if (cnd_) { goto L_089AFEB0; }
    goto L_089AFEA0;
L_089AFEA0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089AFEB0;
L_089AFEB0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFEF4; }
    goto L_089AFEC0;
L_089AFEC0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089AFEF4; }
    goto L_089AFED0;
L_089AFED0:;
    goto L_089AFED4;
L_089AFED4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089AFEF4; }
    goto L_089AFEE8;
L_089AFEE8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089AFEF4;
L_089AFEF4:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089AFEF8;
L_089AFEF8:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    f1 = BITSF(LD32(sp+24));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+16));
    a0 = LD32(s0+40);
    a1 = sp + 32;
    f1 = f1 * f2;
    f0 = f0 * f2;
    ST32(sp+24, FBITS(f1));
    ST32(sp+16, FBITS(f0));
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
    {ST32(sp+(64),FBITS(v[106]));}
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AFFC0;
L_089AFFC0:;
    goto L_089AFB6C;
L_089AFFC8:;
    f1 = BITSF(LD32(s2-31328));
    f0 = BITSF(LD32(s1-5424));
    a0 = LD32(s0+40);
    f0 = f0 - f1;
    f1 = f3 * f1;
    f0 = f2 * f0;
    f0 = f0 + f1;
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089AFFEC;
L_089AFFEC:;
    goto L_089AFBB0;
}

/* 089AFFF4 */
rv_t func_089AFFF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089AFFF4:;
    sp = sp - 16;
    { rv_t r_ = func_089CAC74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0004;
L_089B0004:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B0010 */
rv_t func_089B0010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089B0010:;
    sp = sp - 48;
    s2 = a1 & 0xff;
    v0 = LD_U8(a0+196);
    cnd_ = v0 == s2;
    s1 = a0 + 0;
    if (cnd_) { goto L_089B003C; }
    goto L_089B0034;
L_089B0034:;
    cnd_ = s2 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089B0060; }
    goto L_089B003C;
L_089B003C:;
    a0 = s1 + 0;
    goto L_089B0040;
L_089B0040:;
    a1 = s2 + 0;
    { rv_t r_ = func_089DCD00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0048;
L_089B0048:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089B0060:;
    v0 = LD32(v1+112);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B006C;
L_089B006C:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089B0040; }
    goto L_089B0074;
L_089B0074:;
    v1 = LD32(s1);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0084;
L_089B0084:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_089B0198; }
    goto L_089B0098;
L_089B0098:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B00E8; }
    goto L_089B00BC;
L_089B00BC:;
    a0 = LD32(a1);
    goto L_089B00C0;
L_089B00C0:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B01A0; }
    goto L_089B00D8;
L_089B00D8:;
    a1 = LD32(a1+4);
    goto L_089B00DC;
L_089B00DC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B00C0; }
    goto L_089B00E4;
L_089B00E4:;
    v1 = 0 + 0;
    goto L_089B00E8;
L_089B00E8:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089B00F8; }
    goto L_089B00F0;
L_089B00F0:;
    v0 = LD32(v1+72);
    v0 = (v0 >> 3) & 0x1;
    goto L_089B00F8;
L_089B00F8:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089B0040; }
    goto L_089B0100;
L_089B0100:;
    v1 = LD32(s1);
    ST32(sp+16, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0114;
L_089B0114:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+260);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0128;
L_089B0128:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = sp + 16;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B0138;
L_089B0138:;
    a0 = LD32(sp+16);
    a1 = 0xdb040000u;
    a1 = a1 | 0x801c;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B014C;
L_089B014C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089B003C; }
    goto L_089B0154;
L_089B0154:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0164;
L_089B0164:;
    a0 = v0 + 0;
    v0 = D_08AEEAD4 - (-5420);
    f0 = BITSF(LD32(v0-5420));
    a2 = s0 + 0;
    a1 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp, FBITS(f0));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0190;
L_089B0190:;
    ST32(s1+892, v0);
    goto L_089B003C;
L_089B0198:;
    v0 = 0 + 0;
    goto L_089B00F8;
L_089B01A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089B00D8; }
    goto L_089B01AC;
L_089B01AC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B00DC; }
    goto L_089B01B8;
L_089B01B8:;
    goto L_089B00E8;
}

/* 089B01C0 */
void func_089B01C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B01C0:;
    sp = sp - 32;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B0238; }
    goto L_089B01DC;
L_089B01DC:;
    v0 = D_08C293C6 - (-27706);
    v1 = LD_U8(v0-27706);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_089B023C; }
    goto L_089B01EC;
L_089B01EC:;
    f0 = BITSF(LD32(a0+484));
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    v0 = D_08AEEAD8 - (-5416);
    if (cnd_) { goto L_089B0230; }
    goto L_089B0204;
L_089B0204:;
    f0 = BITSF(LD32(a0+480));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-5416));
    if (cnd_) { goto L_089B0234; }
    goto L_089B0218;
L_089B0218:;
    f0 = BITSF(LD32(a0+488));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a0); goto L_089B024C; }
    goto L_089B022C;
L_089B022C:;
    v0 = D_08AEEAD8 - (-5416);
    goto L_089B0230;
L_089B0230:;
    f0 = BITSF(LD32(v0-5416));
    goto L_089B0234;
L_089B0234:;
    ST32(s0+896, FBITS(f0));
    goto L_089B0238;
L_089B0238:;
    goto L_089B023C;
L_089B023C:;
    goto L_089B0240;
L_089B0240:;
    sp = sp + 32;
    return;
L_089B024C:;
    v0 = LD32(v1+460);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0258;
L_089B0258:;
    cnd_ = v0 != 0;
    v0 = D_08AEEAD8 - (-5416);
    if (cnd_) { goto L_089B0230; }
    goto L_089B0260;
L_089B0260:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B0268;
L_089B0268:;
    cnd_ = v0 != 0;
    v0 = D_08AEEAD8 - (-5416);
    if (cnd_) { goto L_089B0230; }
    goto L_089B0270;
L_089B0270:;
    v0 = LD_U8(s0+476);
    cnd_ = v0 != 0;
    v0 = D_08AEEAD8 - (-5416);
    if (cnd_) { goto L_089B0230; }
    goto L_089B027C;
L_089B027C:;
    f1 = BITSF(LD32(s0+896));
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B0294; }
    goto L_089B0290;
L_089B0290:;
    v1 = 1;
    goto L_089B0294;
L_089B0294:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(s0+896, FBITS(f0));
    if (cnd_) { goto L_089B02B4; }
    goto L_089B02B0;
L_089B02B0:;
    ST32(s0+896, FBITS(f20));
    goto L_089B02B4;
L_089B02B4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089B023C; }
    goto L_089B02BC;
L_089B02BC:;
    f0 = BITSF(LD32(s0+896));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) {  goto L_089B0240; }
    goto L_089B02D0;
L_089B02D0:;
    v0 = LD32(s0+844);
    v0 = v0 | 0x80;
    ST32(s0+844, v0);
    goto L_089B023C;
}

/* 089B02E0 */
rv_t func_089B02E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_089B02E0:;
    v1 = LD32(a0+852);
    v0 = D_08AEEADC - (-5412);
    a0 = (v1 >> 1) & 0x1;
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    f1 = BITSF(LD32(v0-5412));
    if (cnd_) { goto L_089B0300; }
    goto L_089B02F8;
L_089B02F8:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089B030C; }
    goto L_089B0300;
L_089B0300:;
    v0 = D_08AEEAE0 - (-5408);
    f0 = BITSF(LD32(v0-5408));
    f1 = f1 * f0;
    goto L_089B030C;
L_089B030C:;
    f0 = f1;
    return (rv_t){ v0, v1, f0 };
}

/* 089B0314 */
rv_t func_089B0314(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B0314:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B0468; }
    goto L_089B0348;
L_089B0348:;
    v0 = D_08AEEAE4 - (-5404);
    f2 = BITSF(LD32(v0-5404));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AEEAE8 - (-5400);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f7 = BITSF(LD32(v1-5400));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f2;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f1 = f1 * f2;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f2;
    v0 = D_08C2A908 - (-22264);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f2;
    t0 = D_08C2A918 - (-22248);
    t1 = D_08C2A928 - (-22232);
    f3 = f3 * f2;
    t2 = D_08C2A9B8 - (-22088);
    s3 = D_08C2A9D8 - (-22056);
    v1 = t2 - 22088;
    ST32(v0-22264, FBITS(f3));
    a1 = v0 - 22264;
    a2 = t0 - 22248;
    a3 = t1 - 22232;
    s0 = s3 - 22056;
    v0 = 4;
    ST32(a3+12, FBITS(f1));
    a0 = 16;
    ST32(a1+4, FBITS(f4));
    ST32(a1+12, FBITS(f1));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t0-22248, FBITS(f5));
    ST32(t2-22088, FBITS(f7));
    ST32(t1-22232, FBITS(f1));
    ST32(v1+16, FBITS(f7));
    ST32(v1+28, 0);
    ST32(a1+8, FBITS(f5));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f6));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(v1+4, FBITS(f7));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f7));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0430;
L_089B0430:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s3-22056, v0);
    if (cnd_) { goto L_089B045C; }
    goto L_089B0440;
L_089B0440:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089B0448;
L_089B0448:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089B0448; }
    goto L_089B045C;
L_089B045C:;
    v0 = s3 - 22056;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089B0468;
L_089B0468:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B048C; }
    goto L_089B047C;
L_089B047C:;
    v0 = D_08C2A9D8 - (-22056);
    a0 = LD32(v0-22056);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089B04A4; }
    goto L_089B048C;
L_089B048C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B04A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B04AC;
L_089B04AC:;
    goto L_089B048C;
}

/* 089B04B4 */
rv_t func_089B04B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B04B4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089B0314(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B04C8;
L_089B04C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B04D4 */
rv_t func_089B04D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B04D4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089B0314(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B04E8;
L_089B04E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B04F4 */
rv_t func_089B04F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B04F4:;
    sp = sp - 32;
    s4 = a0 + 644;
    s0 = D_08AFDA98 - (-9576);
    s0 = s0 - 9576;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2AA98 - (-21864);
    func_08873E94(a0, a1);
    goto L_089B052C;
L_089B052C:;
    a0 = s1 + 568;
    a1 = s0 + 48;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089B0540;
L_089B0540:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 999;
    func_089D00D0(a0, a1);
    goto L_089B0550;
L_089B0550:;
    v1 = D_08AFD7F0 - (-10256);
    v1 = v1 - 10256;
    v0 = v1 + 400;
    ST32(s1+568, v0);
    a3 = D_08B45A9C - (23196);
    a1 = a3 + 23196;
    ST32(s1, v1);
    a2 = s1 + 556;
    v0 = (u32)-32764;
    ST32(s1+544, 0);
    v1 = v1 + 604;
    a0 = 160;
    ST32(s1+548, 0);
    s2 = s3 - 21864;
    ST32(s1+552, 0);
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    ST16(s4+8, v0);
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    v0 = LD32(s1+232);
    f0 = BITSF(LD32(a3+23196));
    ST32(s1+644, v1);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+556, FBITS(f0));
    ST32(s1+232, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B05BC;
L_089B05BC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_08957B10(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B05CC;
L_089B05CC:;
    a1 = LD32(s1);
    ST32(s1+176, s0);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B05F4;
L_089B05F4:;
    a0 = LD32(s3-21864);
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

/* 089B0640 */
rv_t func_089B0640(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B0640:;
    sp = sp - 32;
    v0 = D_08AFD7F0 - (-10256);
    v0 = v0 - 10256;
    a3 = v0 + 604;
    v1 = v0 + 400;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s2 = a0 + 568;
    s3 = a0 + 644;
    a2 = LD32(a0+172);
    ST32(a0+568, v1);
    a2 = a2 & 0x1;
    ST32(a0+644, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089B0710; }
    goto L_089B0690;
L_089B0690:;
    v0 = LD32(s1+176);
    goto L_089B0694;
L_089B0694:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B06F8; }
    goto L_089B069C;
L_089B069C:;
    ST32(s1+176, 0);
    goto L_089B06A0;
L_089B06A0:;
    a0 = D_08C2AA98 - (-21864);
    s0 = D_08AFDA98 - (-9576);
    a1 = s1 + 0;
    a0 = a0 - 21864;
    s0 = s0 - 9576;
    func_08AC5234(a0, a1, t1, t2, t3);
    goto L_089B06B8;
L_089B06B8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089B06C8;
L_089B06C8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B06D4;
L_089B06D4:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B06DC;
L_089B06DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B06F8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0708;
L_089B0708:;
    ST32(s1+176, 0);
    goto L_089B06A0;
L_089B0710:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0718;
L_089B0718:;
    v0 = LD32(s1+176);
    goto L_089B0694;
}

/* 089B0720 */
rv_t func_089B0720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B0720:;
    sp = sp - 32;
    v0 = D_08AFD7F0 - (-10256);
    v0 = v0 - 10256;
    a3 = v0 + 604;
    v1 = v0 + 400;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s2 = a0 + 568;
    s3 = a0 + 644;
    a2 = LD32(a0+172);
    ST32(a0+568, v1);
    a2 = a2 & 0x1;
    ST32(a0+644, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089B07F8; }
    goto L_089B0770;
L_089B0770:;
    v0 = LD32(s1+176);
    goto L_089B0774;
L_089B0774:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B07E0; }
    goto L_089B077C;
L_089B077C:;
    ST32(s1+176, 0);
    goto L_089B0780;
L_089B0780:;
    a0 = D_08C2AA98 - (-21864);
    s0 = D_08AFDA98 - (-9576);
    a1 = s1 + 0;
    a0 = a0 - 21864;
    s0 = s0 - 9576;
    func_08AC5234(a0, a1, t1, t2, t3);
    goto L_089B0798;
L_089B0798:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089B07A8;
L_089B07A8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B07B4;
L_089B07B4:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B07BC;
L_089B07BC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B07C4;
L_089B07C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B07E0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B07F0;
L_089B07F0:;
    ST32(s1+176, 0);
    goto L_089B0780;
L_089B07F8:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0800;
L_089B0800:;
    v0 = LD32(s1+176);
    goto L_089B0774;
}

/* 089B0808 */
rv_t func_089B0808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B0808:;
    sp = sp - 16;
    a2 = a1 + 0;
    v0 = 0x8056;
    a1 = 1;
    v1 = LD_U16(a2+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B0888; }
    goto L_089B0830;
L_089B0830:;
    v0 = 0x8057;
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089B0858; }
    goto L_089B083C;
L_089B083C:;
    a1 = a2 + 0;
    { rv_t r_ = func_089D24F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0844;
L_089B0844:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B0858:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0860;
L_089B0860:;
    v0 = LD32(s0+228);
    a2 = LD32(s0);
    a1 = 3;
    v0 = (v0 & ~(0x1u << 15)) | ((0 & 0x1) << 15);
    ST32(s0+228, v0);
    v1 = LD32(a2+88);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0880;
L_089B0880:;
    v0 = 1;
    goto L_089B0844;
L_089B0888:;
    v0 = LD32(a0);
    v1 = LD32(v0+88);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0898;
L_089B0898:;
    a0 = LD32(s0+232);
    v0 = LD32(s0+172);
    a0 = (a0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    ST32(s0+232, a0);
    if (cnd_) { goto L_089B0880; }
    goto L_089B08B0;
L_089B08B0:;
    s1 = LD32(s0+176);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089B0880; }
    goto L_089B08BC;
L_089B08BC:;
    v0 = LD32(s0+228);
    v0 = v0 | 0x8000;
    ST32(s0+228, v0);
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B08D8;
L_089B08D8:;
    a1 = LD32(s1);
    v1 = LD32(a1+84);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B08E8;
L_089B08E8:;
    v0 = LD32(s0+172);
    v0 = v0 | 0x1;
    ST32(s0+172, v0);
    goto L_089B0880;
}

/* 089B08F8 */
rv_t func_089B08F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B08F8:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = BITSF(0);
    { rv_t r_ = func_089D11E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0918;
L_089B0918:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0928;
L_089B0928:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D468C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0930;
L_089B0930:;
    a0 = s0 + 0;
    func_089D4808(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B0938;
L_089B0938:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B0A40; }
    goto L_089B0958;
L_089B0958:;
    v0 = LD32(s0+552);
    goto L_089B095C;
L_089B095C:;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089B0A28; }
    goto L_089B0968;
L_089B0968:;
    f1 = BITSF(LD32(s0+548));
    goto L_089B096C;
L_089B096C:;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B099C; }
    goto L_089B097C;
L_089B097C:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    ST32(s0+548, FBITS(f0));
    if (cnd_) { goto L_089B09B0; }
    goto L_089B0998;
L_089B0998:;
    goto L_089B099C;
L_089B099C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B09B0:;
    a0 = 0x8057;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B09C4;
L_089B09C4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089B09F8; }
    goto L_089B09CC;
L_089B09CC:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B09E0;
L_089B09E0:;
    v1 = LD32(s0);
    a1 = s1 + 0;
    a2 = 2;
    a0 = LD32(v1-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B09F8;
L_089B09F8:;
    v0 = LD32(s0+552);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089B0A18; }
    goto L_089B0A08;
L_089B0A08:;
    v0 = LD32(s0+228);
    goto L_089B0A0C;
L_089B0A0C:;
    v0 = (v0 & ~(0x1u << 15)) | ((0 & 0x1) << 15);
    ST32(s0+228, v0);
    goto L_089B0998;
L_089B0A18:;
    a1 = 999;
    { rv_t r_ = func_089D1F3C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0A20;
L_089B0A20:;
    v0 = LD32(s0+228);
    goto L_089B0A0C;
L_089B0A28:;
    a1 = s0 + 556;
    v1 = LD32(v0+128);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0A38;
L_089B0A38:;
    f1 = BITSF(LD32(s0+548));
    goto L_089B096C;
L_089B0A40:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D4BDC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0A48;
L_089B0A48:;
    v0 = LD32(s0+552);
    goto L_089B095C;
}

/* 089B0A50 */
rv_t func_089B0A50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B0A50:;
    sp = sp - 16;
    a2 = a0 + 208;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+208);
    a0 = 0x5d00000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x4860;
    if (cnd_) { goto L_089B0A94; }
    goto L_089B0A7C;
L_089B0A7C:;
    ST32(s1, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B0A94:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a1 = LD32(v1+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B0AA8;
L_089B0AA8:;
    v0 = LD32(s0+208);
    goto L_089B0A7C;
}

/* 089B0AB0 */
rv_t func_089B0AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B0AB0:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089D1610(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0AD0;
L_089B0AD0:;
    a0 = sp + 0;
    s1 = v0 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089B0AE0;
L_089B0AE0:;
    a1 = 0xa25f0000u;
    a0 = s0 + 0;
    a1 = a1 | 0x3bb9;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089B0AF4;
L_089B0AF4:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089B0B50; }
    goto L_089B0AFC;
L_089B0AFC:;
    s1 = 0 + 0;
    goto L_089B0B00;
L_089B0B00:;
    a1 = 0x975f0000u;
    a0 = s0 + 0;
    a1 = a1 | 0xc22e;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089B0B14;
L_089B0B14:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089B0B40; }
    goto L_089B0B1C;
L_089B0B1C:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B0B24;
L_089B0B24:;
    v0 = s1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B0B40:;
    v0 = func_0881B5C4(a0);
    goto L_089B0B48;
L_089B0B48:;
    ST32(s2+544, v0);
    goto L_089B0B1C;
L_089B0B50:;
    v0 = func_0881B5C4(a0);
    goto L_089B0B58;
L_089B0B58:;
    ST32(s2+204, v0);
    goto L_089B0B00;
}

/* 089B0B60 */
void func_089B0B60(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B0B60:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 672;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0B84;
L_089B0B84:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089B04F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0B94;
L_089B0B94:;
    a1 = s1 + 0;
    cnd_ = s2 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089B0BB8; }
    goto L_089B0BA0;
L_089B0BA0:;
    goto L_089B0BA4;
L_089B0BA4:;
    sp = sp + 16;
    return;
L_089B0BB8:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0BC8;
L_089B0BC8:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0BD0;
L_089B0BD0:;
    v0 = LD32(s2+232);
    a0 = s2 + 0;
    v0 = v0 | 0x4;
    ST32(s2+232, v0);
    { rv_t r_ = func_089D52E0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0BE4;
L_089B0BE4:;
    goto L_089B0BA4;
}

/* 089B0BEC */
rv_t func_089B0BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B0BEC:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0C10;
L_089B0C10:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D16F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0C1C;
L_089B0C1C:;
    a1 = LD32(s1+172);
    a0 = s0 + 0;
    a1 = (a1 >> 2) & 0x1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0C2C;
L_089B0C2C:;
    a1 = LD32(s1+552);
    a0 = s0 + 0;
    a1 = a1 & 0x1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0C3C;
L_089B0C3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B0C50 */
rv_t func_089B0C50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B0C50:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089B0C70;
L_089B0C70:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089B0C70; }
    goto L_089B0C94;
L_089B0C94:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D1738(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0CA0;
L_089B0CA0:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B0D40; }
    goto L_089B0CAC;
L_089B0CAC:;
    a3 = sp + 4;
    a2 = a3 + 0;
    a1 = 0 + 0;
    goto L_089B0CB8;
L_089B0CB8:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089B0CB8; }
    goto L_089B0CDC;
L_089B0CDC:;
    v1 = LD32(sp+4);
    a0 = LD32(sp);
    v0 = LD32(s1+172);
    v1 = 0 < v1;
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    a0 = a0 < 0x2u;
    cnd_ = a0 != 0;
    ST32(s1+172, v0);
    if (cnd_) { goto L_089B0D50; }
    goto L_089B0CFC;
L_089B0CFC:;
    a2 = a3 + 0;
    a1 = 0 + 0;
    goto L_089B0D04;
L_089B0D04:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089B0D04; }
    goto L_089B0D28;
L_089B0D28:;
    v0 = LD32(sp+4);
    v1 = LD32(s1+552);
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+552, v1);
    goto L_089B0D3C;
L_089B0D3C:;
    goto L_089B0D40;
L_089B0D40:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B0D50:;
    v0 = LD32(s1+552);
    v0 = v0 | 0x1;
    ST32(s1+552, v0);
    goto L_089B0D3C;
}

/* 089B0D60 */
rv_t func_089B0D60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089B0D60:;
    v0 = D_08C2C9C4 - (-13884);
    v1 = LD32(v0-13884);
    cnd_ = (s32)v1 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089B0D80; }
    goto L_089B0D70;
L_089B0D70:;
    v0 = LD32(a0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B0D84; }
    goto L_089B0D80;
L_089B0D80:;
    a1 = 1;
    goto L_089B0D84;
L_089B0D84:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089B0D8C */
rv_t func_089B0D8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089B0D8C:;
    sp = sp - 48;
    s3 = a2 & 0xff;
    s2 = a1 + 0;
    v0 = LD32(a0+552);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089B0E3C; }
    goto L_089B0DC4;
L_089B0DC4:;
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_089B0E3C; }
    goto L_089B0DD4;
L_089B0DD4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089B0E24; }
    goto L_089B0DF8;
L_089B0DF8:;
    a0 = LD32(a1);
    goto L_089B0DFC;
L_089B0DFC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B111C; }
    goto L_089B0E14;
L_089B0E14:;
    a1 = LD32(a1+4);
    goto L_089B0E18;
L_089B0E18:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B0DFC; }
    goto L_089B0E20;
L_089B0E20:;
    s0 = 0 + 0;
    goto L_089B0E24;
L_089B0E24:;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B0E40; }
    goto L_089B0E2C;
L_089B0E2C:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089B0E34;
L_089B0E34:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B1104; }
    goto L_089B0E3C;
L_089B0E3C:;
    v0 = LD32(s1);
    goto L_089B0E40;
L_089B0E40:;
    f20 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089B0E70; }
    goto L_089B0E60;
L_089B0E60:;
    a0 = s1 + 0;
    { u64 r_ = func_089E2F6C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B0E68;
L_089B0E68:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B0F70; }
    goto L_089B0E70;
L_089B0E70:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089B0E78;
L_089B0E78:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089D194C(a0);
    goto L_089B0E84;
L_089B0E84:;
    cnd_ = s0 == v0;
    a3 = 3;
    if (cnd_) { goto L_089B0E98; }
    goto L_089B0E8C;
L_089B0E8C:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_089B0EC0; }
    goto L_089B0E94;
L_089B0E94:;
    a3 = 3;
    goto L_089B0E98;
L_089B0E98:;
    goto L_089B0E9C;
L_089B0E9C:;
    goto L_089B0EA0;
L_089B0EA0:;
    goto L_089B0EA4;
L_089B0EA4:;
    v0 = a3 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089B0EC0:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089B0EC8;
L_089B0EC8:;
    a2 = v0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_089B0E94; }
    goto L_089B0EDC;
L_089B0EDC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089B0F2C; }
    goto L_089B0F00;
L_089B0F00:;
    a0 = LD32(a1);
    goto L_089B0F04;
L_089B0F04:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B0F50; }
    goto L_089B0F1C;
L_089B0F1C:;
    a1 = LD32(a1+4);
    goto L_089B0F20;
L_089B0F20:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B0F04; }
    goto L_089B0F28;
L_089B0F28:;
    a0 = 0 + 0;
    goto L_089B0F2C;
L_089B0F2C:;
    cnd_ = a0 == 0;
    if (cnd_) { a3 = 3; goto L_089B0E98; }
    goto L_089B0F34;
L_089B0F34:;
    v1 = LD32(a0);
    goto L_089B0F38;
L_089B0F38:;
    v0 = LD32(v1+232);
    a1 = s2 + 0;
    t_ = v0;
    a2 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B0F48;
L_089B0F48:;
    a3 = v0 + 0;
    goto L_089B0E98;
L_089B0F50:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B0F20; }
    goto L_089B0F5C;
L_089B0F5C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B0F20; }
    goto L_089B0F68;
L_089B0F68:;
    goto L_089B0F2C;
L_089B0F70:;
    a0 = s1 + 0;
    { u64 r_ = func_089D0A8C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B0F78;
L_089B0F78:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089B0E98; }
    goto L_089B0F80;
L_089B0F80:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089B0E9C; }
    goto L_089B0FA0;
L_089B0FA0:;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089B0EA0; }
    goto L_089B0FB8;
L_089B0FB8:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089B0EA4; }
    goto L_089B0FC4;
L_089B0FC4:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089B0EA4; }
    goto L_089B0FD0;
L_089B0FD0:;
    t1 = LD32(s1+544);
    cnd_ = t1 == 0;
    a0 = D_08C2B4CC - (-19252);
    if (cnd_) { goto L_089B10EC; }
    goto L_089B0FDC;
L_089B0FDC:;
    v0 = 999;
    cnd_ = s2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_089B0E94; }
    goto L_089B0FE8;
L_089B0FE8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = s2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_089B1038; }
    goto L_089B100C;
L_089B100C:;
    a0 = LD32(a1);
    goto L_089B1010;
L_089B1010:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B10CC; }
    goto L_089B1028;
L_089B1028:;
    a1 = LD32(a1+4);
    goto L_089B102C;
L_089B102C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B1010; }
    goto L_089B1034;
L_089B1034:;
    t0 = 0 + 0;
    goto L_089B1038;
L_089B1038:;
    cnd_ = t0 == 0;
    a2 = s2 ^ 0x3e7;
    if (cnd_) { goto L_089B0E94; }
    goto L_089B1040;
L_089B1040:;
    v1 = LD32(t0);
    a3 = 5;
    v0 = LD32(v1-16);
    a0 = LD32(v1-12);
    v0 = t0 + v0;
    v1 = LD_U16(v0+8);
    a0 = t0 + a0;
    a1 = LD32(a0+16);
    v1 = v1 ^ 0x800d;
    s4 = v1 < 0x1u;
    v0 = 1;
    cnd_ = a1 == t1;
    if (a2 == 0) s4 = v0;
    if (cnd_) { goto L_089B0E98; }
    goto L_089B1074;
L_089B1074:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089B107C;
L_089B107C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089D194C(a0);
    goto L_089B1088;
L_089B1088:;
    cnd_ = s0 == v0;
    a3 = 3;
    if (cnd_) { goto L_089B0E98; }
    goto L_089B1090;
L_089B1090:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_089B0E9C; }
    goto L_089B1098;
L_089B1098:;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_089B0EA0; }
    goto L_089B10A0;
L_089B10A0:;
    a0 = s1 + 0;
    v0 = func_089D1944(a0);
    goto L_089B10A8;
L_089B10A8:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B10BC;
L_089B10BC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B0E94; }
    goto L_089B10C4;
L_089B10C4:;
    v1 = LD32(v0);
    goto L_089B0F38;
L_089B10CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_089B1028; }
    goto L_089B10D8;
L_089B10D8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B102C; }
    goto L_089B10E4;
L_089B10E4:;
    goto L_089B1038;
L_089B10EC:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_089D35C8(a0, a1, a2, a3, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B10FC;
L_089B10FC:;
    a3 = v0 + 0;
    goto L_089B0E98;
L_089B1104:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B110C;
L_089B110C:;
    cnd_ = v0 != 0;
    a3 = 3;
    if (cnd_) { goto L_089B0E3C; }
    goto L_089B1114;
L_089B1114:;
    goto L_089B0E9C;
L_089B111C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B0E14; }
    goto L_089B1128;
L_089B1128:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B0E18; }
    goto L_089B1134;
L_089B1134:;
    goto L_089B0E24;
}

/* 089B113C */
rv_t func_089B113C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089B113C:;
    sp = sp - 80;
    v0 = LD32(a0+544);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089B118C; }
    goto L_089B1164;
L_089B1164:;
    { rv_t r_ = func_089D4FFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B116C;
L_089B116C:;
    goto L_089B1170;
L_089B1170:;
    goto L_089B1174;
L_089B1174:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089B118C:;
    v0 = func_089E3BC4(a0);
    goto L_089B1194;
L_089B1194:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_089B116C; }
    goto L_089B119C;
L_089B119C:;
    a1 = LD32(s1);
    v0 = 0x30000u;
    v0 = v0 | 0xd3f;
    v1 = LD32(a1-16);
    v1 = s1 + v1;
    a0 = LD32(v1+4);
    v0 = v0 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B1170; }
    goto L_089B11C0;
L_089B11C0:;
    v0 = LD32(a1-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089B1174; }
    goto L_089B11E0;
L_089B11E0:;
    t0 = D_08C2A880 - (-22400);
    v0 = t0 - 22400;
    v1 = LD32(v0+8);
    a3 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = a2 < a3;
    ST32(v0+8, v1);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089B1258; }
    goto L_089B1210;
L_089B1210:;
    a2 = LD32(t0-22400);
    goto L_089B1214;
L_089B1214:;
    a0 = LD32(a1+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_089B1248; }
    goto L_089B122C;
L_089B122C:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+8); goto L_089B125C; }
    goto L_089B123C;
L_089B123C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_089B122C; }
    goto L_089B1248;
L_089B1248:;
    v0 = a0 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_089B1214; }
    goto L_089B1258;
L_089B1258:;
    a2 = LD32(sp+8);
    goto L_089B125C;
L_089B125C:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_089B12A0; }
    goto L_089B1264;
L_089B1264:;
    a2 = LD32(a2);
    goto L_089B1268;
L_089B1268:;
    a3 = LD32(s1+544);
    a0 = sp + 0;
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    a2 = a2 + v0;
    v1 = LD32(a2+16);
    cnd_ = v1 == a3;
    a1 = 1;
    if (cnd_) { goto L_089B1394; }
    goto L_089B1288;
L_089B1288:;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1290;
L_089B1290:;
    a2 = LD32(sp+8);
    cnd_ = a2 != 0;
    if (cnd_) { a2 = LD32(a2); goto L_089B1268; }
    goto L_089B129C;
L_089B129C:;
    a1 = 1;
    goto L_089B12A0;
L_089B12A0:;
    a0 = s1 + 0;
    s0 = sp + 16;
    func_089D4140(a0, a1);
    goto L_089B12AC;
L_089B12AC:;
    a0 = s0 + 0;
    func_0897A7A0(a0);
    goto L_089B12B4;
L_089B12B4:;
    a3 = LD32(s1);
    v0 = D_08AEEB10 - (-5360);
    a1 = LD32(s1+84);
    v1 = LD32(a3-16);
    f0 = BITSF(LD32(v0-5360));
    v0 = LD32(a3+12);
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    ST32(sp+28, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+24, a1);
    a1 = s0 + 0;
    t_ = v0;
    ST32(sp+20, a2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B12EC;
L_089B12EC:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089B116C; }
    goto L_089B1300;
L_089B1300:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089B116C; }
    goto L_089B130C;
L_089B130C:;
    v0 = LD32(s1);
    goto L_089B1310;
L_089B1310:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089B1364; }
    goto L_089B1324;
L_089B1324:;
    v0 = LD_U8(s0+8);
    goto L_089B1328;
L_089B1328:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089B138C; }
    goto L_089B1330;
L_089B1330:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B137C; }
    goto L_089B1338;
L_089B1338:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089B1340;
L_089B1340:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B134C;
L_089B134C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089B1358;
L_089B1358:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089B1328; }
    goto L_089B1360;
L_089B1360:;
    v1 = LD32(s1+4);
    goto L_089B1364;
L_089B1364:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B1310; }
    goto L_089B1374;
L_089B1374:;
    goto L_089B1170;
L_089B137C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089B1340;
L_089B138C:;
    s0 = LD32(s0+4);
    goto L_089B1358;
L_089B1394:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089B116C; }
    goto L_089B13A8;
L_089B13A8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089B116C; }
    goto L_089B13B4;
L_089B13B4:;
    v0 = LD32(s1);
    goto L_089B13B8;
L_089B13B8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089B140C; }
    goto L_089B13CC;
L_089B13CC:;
    v0 = LD_U8(s0+8);
    goto L_089B13D0;
L_089B13D0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089B1434; }
    goto L_089B13D8;
L_089B13D8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B1424; }
    goto L_089B13E0;
L_089B13E0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089B13E8;
L_089B13E8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B13F4;
L_089B13F4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089B1400;
L_089B1400:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089B13D0; }
    goto L_089B1408;
L_089B1408:;
    v1 = LD32(s1+4);
    goto L_089B140C;
L_089B140C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B13B8; }
    goto L_089B141C;
L_089B141C:;
    goto L_089B1170;
L_089B1424:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089B13E8;
L_089B1434:;
    s0 = LD32(s0+4);
    goto L_089B1400;
}

/* 089B143C */
rv_t func_089B143C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B143C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089B14AC; }
    goto L_089B1458;
L_089B1458:;
    s0 = LD32(a0+176);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B146C;
L_089B146C:;
    v1 = LD32(s0);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B147C;
L_089B147C:;
    v1 = LD32(s1+108);
    v0 = 999;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089B1498; }
    goto L_089B1490;
L_089B1490:;
    { u64 r_ = func_08956538(a0, a1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1498;
L_089B1498:;
    goto L_089B149C;
L_089B149C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B14AC:;
    a0 = LD32(a0+176);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B14C0;
L_089B14C0:;
    goto L_089B149C;
}

/* 089B14C8 */
rv_t func_089B14C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089B14C8:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089B1510; }
    goto L_089B14D8;
L_089B14D8:;
    v0 = LD32(a0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B1508; }
    goto L_089B14E8;
L_089B14E8:;
    v0 = LD32(a0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = LD32(a0+176);
    if (cnd_) { goto L_089B1500; }
    goto L_089B14F8;
L_089B14F8:;
    v0 = LD32(a0+156);
    v1 = (v0 >> 3) & 0x1;
    goto L_089B1500;
L_089B1500:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
L_089B1508:;
    v0 = LD32(a0+236);
    v0 = v0 & 0x1;
    goto L_089B1510;
L_089B1510:;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1518 */
void func_089B1518(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B1518:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a2 = 1;
    s5 = a1 + 0;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1550;
L_089B1550:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089B16A8; }
    goto L_089B1558;
L_089B1558:;
    v1 = LD32(v0+252);
    v0 = 999;
    cnd_ = v1 == v0;
    s4 = 999;
    if (cnd_) { goto L_089B1574; }
    goto L_089B1568;
L_089B1568:;
    a0 = s1 + 0;
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1570;
L_089B1570:;
    s4 = v0 + 0;
    goto L_089B1574;
L_089B1574:;
    v1 = LD32(s2+252);
    v0 = 999;
    cnd_ = v1 == v0;
    a1 = 999;
    if (cnd_) { goto L_089B1590; }
    goto L_089B1584;
L_089B1584:;
    a0 = s2 + 0;
    { rv_t r_ = func_089D4004(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B158C;
L_089B158C:;
    a1 = v0 + 0;
    goto L_089B1590;
L_089B1590:;
    s3 = 999;
    cnd_ = a1 == s3;
    a0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089B1634; }
    goto L_089B159C;
L_089B159C:;
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B15A8;
L_089B15A8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089B1634; }
    goto L_089B15B0;
L_089B15B0:;
    a0 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B15B8;
L_089B15B8:;
    a2 = v0 + 0;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089D3F9C(a0, a1, a2, 0, 0);
    goto L_089B15C8;
L_089B15C8:;
    a1 = LD32(s0+84);
    v1 = D_08C2A08C - (-24436);
    cnd_ = a1 == s3;
    v0 = v1 - 24436;
    if (cnd_) { goto L_089B1634; }
    goto L_089B15D8;
L_089B15D8:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089B161C; }
    goto L_089B15FC;
L_089B15FC:;
    a0 = LD32(v1);
    goto L_089B1600;
L_089B1600:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089B16CC; }
    goto L_089B160C;
L_089B160C:;
    v1 = LD32(v1+4);
    goto L_089B1610;
L_089B1610:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089B1600; }
    goto L_089B1618;
L_089B1618:;
    a0 = 0 + 0;
    goto L_089B161C;
L_089B161C:;
    cnd_ = a0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089B1638; }
    goto L_089B1624;
L_089B1624:;
    v1 = LD32(a0);
    v0 = LD32(v1+88);
    t_ = v0;
    a1 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1634;
L_089B1634:;
    v0 = 999;
    goto L_089B1638;
L_089B1638:;
    cnd_ = s4 == v0;
    a0 = D_08C2A880 - (-22400);
    if (cnd_) { goto L_089B16A8; }
    goto L_089B1640;
L_089B1640:;
    a0 = a0 - 22400;
    a1 = s4 + 0;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1650;
L_089B1650:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089B16A8; }
    goto L_089B1658;
L_089B1658:;
    a0 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1660;
L_089B1660:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_089D3F9C(a0, a1, a2, 0, 0);
    goto L_089B1670;
L_089B1670:;
    a1 = LD32(s0+84);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1684;
L_089B1684:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B16A8; }
    goto L_089B168C;
L_089B168C:;
    v1 = LD32(s2);
    a1 = LD32(v0);
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s2 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B16A8;
L_089B16A8:;
    sp = sp + 32;
    return;
L_089B16CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089B1610; }
    goto L_089B16D8;
L_089B16D8:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089B1610; }
    goto L_089B16E4;
L_089B16E4:;
    goto L_089B161C;
}

/* 089B16EC */
u32 func_089B16EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089B16EC:;
    sp = sp - 96;
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089B1944; }
    goto L_089B1710;
L_089B1710:;
    v1 = LD32(a0+204);
    v0 = 0x300000u;
    v0 = v0 | 0xcffa;
    cnd_ = v1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B1924; }
    goto L_089B1724;
L_089B1724:;
    s2 = LD32(a1+320);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089B1928; }
    goto L_089B1730;
L_089B1730:;
    a0 = 672;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1738;
L_089B1738:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 999;
    { rv_t r_ = func_089B04F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1748;
L_089B1748:;
    v0 = LD32(s0);
    a1 = s2 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1768;
L_089B1768:;
    a0 = s0 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1770;
L_089B1770:;
    v0 = LD32(s0+228);
    a0 = s0 + 0;
    v0 = v0 | 0x200;
    ST32(s0+228, v0);
    { rv_t r_ = func_089D52E0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1784;
L_089B1784:;
    a1 = LD32(s1+252);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1798;
L_089B1798:;
    v1 = LD32(s1);
    s2 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+224);
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B17B0;
L_089B17B0:;
    cnd_ = s2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B1924; }
    goto L_089B17B8;
L_089B17B8:;
    a1 = LD32(s1+84);
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B17CC;
L_089B17CC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B1924; }
    goto L_089B17D4;
L_089B17D4:;
    v1 = LD32(s3);
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s3 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B17F4;
L_089B17F4:;
    v1 = LD32(s3);
    a0 = s0 + 0;
    v0 = LD32(v1-16);
    v0 = s3 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_089D1EA8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B180C;
L_089B180C:;
    v1 = LD32(s0);
    a2 = 1;
    a0 = s1 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    func_089D4278(a0, a1, a2);
    goto L_089B1828;
L_089B1828:;
    a1 = 1;
    a0 = s1 + 0;
    func_089D4140(a0, a1);
    goto L_089B1834;
L_089B1834:;
    v0 = LD32(s2);
    a0 = LD32(v0-16);
    a0 = s2 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1844;
L_089B1844:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1860;
L_089B1860:;
    a0 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(a0-12);
    ST32(sp, FBITS(f0));
    v1 = s1 + v1;
    a1 = LD32(v1);
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    a0 = v1 + 0;
    v0 = LD32(a1+24);
    t_ = v0;
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1894;
L_089B1894:;
    v1 = LD32(s1);
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    a0 = LD32(v1-16);
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v0 = LD32(s1+232);
    a0 = s1 + a0;
    ST32(sp+16, FBITS(f0));
    s1 = (v0 >> 3) & 0x1;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B18F4;
L_089B18F4:;
    a2 = sp + 16;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1910;
L_089B1910:;
    cnd_ = s1 != 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_089B1924; }
    goto L_089B1918;
L_089B1918:;
    v0 = LD32(s0+232);
    v0 = (v0 & ~(0x1u << 3)) | ((s1 & 0x1) << 3);
    ST32(s0+232, v0);
    goto L_089B1924;
L_089B1924:;
    goto L_089B1928;
L_089B1928:;
    v0 = v1 + 0;
    sp = sp + 96;
    return v0;
L_089B1944:;
    v1 = 0 + 0;
    goto L_089B1924;
}

/* 089B194C */
rv_t func_089B194C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B194C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089D50F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1960;
L_089B1960:;
    a1 = 0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1978;
L_089B1978:;
    v0 = LD32(s0);
    a0 = D_08AEEB14 - (-5356);
    f12 = BITSF(LD32(a0-5356));
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1994;
L_089B1994:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB2A0(a0, a1);
    goto L_089B19AC;
L_089B19AC:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB27C(a0, a1);
    goto L_089B19C4;
L_089B19C4:;
    a0 = LD32(s0);
    v0 = LD32(a0-16);
    v1 = LD32(a0-12);
    v0 = s0 + v0;
    v1 = s0 + v1;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    func_088BB2C4(a0, a1);
    goto L_089B19E4;
L_089B19E4:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB4E4(a0);
    goto L_089B19F8;
L_089B19F8:;
    a0 = LD32(s0);
    v0 = v0 | 0x4000;
    v0 = v0 & 0xffff;
    v1 = LD32(a0-12);
    a1 = v0 + 0;
    s0 = s0 + v1;
    a0 = LD32(s0+4);
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1A18;
L_089B1A18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1A28 */
rv_t func_089B1A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_089B1A28:;
    a2 = D_08B45A9C - (23196);
    v0 = 999;
    a3 = a2 + 23196;
    v1 = a0 + 556;
    cnd_ = a1 == v0;
    ST32(a0+252, a1);
    if (cnd_) { goto L_089B1A64; }
    goto L_089B1A40;
L_089B1A40:;
    v0 = LD32(a0+552);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(a0+552, v0);
    f0 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a3+4));
    ST32(a0+556, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    goto L_089B1A64;
L_089B1A64:;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1A6C */
rv_t func_089B1A6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1A6C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 556;
    { rv_t r_ = func_089D218C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1A88;
L_089B1A88:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1A90;
L_089B1A90:;
    a1 = D_08B45A9C - (23196);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a2 = a1 + 23196;
    if (cnd_) { goto L_089B1AD8; }
    goto L_089B1AA0;
L_089B1AA0:;
    v0 = LD32(s0+552);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s0+552, v0);
    f0 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+4));
    ST32(s0+556, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    goto L_089B1AC0;
L_089B1AC0:;
    ST32(s1+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B1AD8:;
    v0 = LD32(s0+552);
    v1 = LD32(s0);
    v0 = v0 | 0x2;
    ST32(s0+552, v0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1AF4;
L_089B1AF4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s0+556, FBITS(f1));
    goto L_089B1AC0;
}

/* 089B1B0C */
rv_t func_089B1B0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_089B1B0C:;
    v1 = LD32(a0+236);
    v0 = D_08AEEB18 - (-5352);
    a0 = (v1 >> 1) & 0x1;
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    f1 = BITSF(LD32(v0-5352));
    if (cnd_) { goto L_089B1B2C; }
    goto L_089B1B24;
L_089B1B24:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089B1B38; }
    goto L_089B1B2C;
L_089B1B2C:;
    v0 = D_08AEEB1C - (-5348);
    f0 = BITSF(LD32(v0-5348));
    f1 = f1 * f0;
    goto L_089B1B38;
L_089B1B38:;
    f0 = f1;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1B40 */
rv_t func_089B1B40(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B1B40:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B1C64; }
    goto L_089B1B74;
L_089B1B74:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEEB20 - (-5344);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-5344));
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
    t0 = D_08C2A9E8 - (-22040);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2A9F8 - (-22024);
    a3 = D_08C2AA08 - (-22008);
    v1 = t0 - 22040;
    a1 = v0 - 22024;
    a2 = a3 - 22008;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2AA98 - (-21864);
    s0 = s3 - 21864;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-22024, FBITS(f5));
    v0 = 4;
    ST32(t0-22040, FBITS(f1));
    ST32(a3-22008, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1C2C;
L_089B1C2C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-21864, v0);
    if (cnd_) { goto L_089B1C58; }
    goto L_089B1C3C;
L_089B1C3C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089B1C44;
L_089B1C44:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089B1C44; }
    goto L_089B1C58;
L_089B1C58:;
    v0 = s3 - 21864;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089B1C64;
L_089B1C64:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B1C88; }
    goto L_089B1C78;
L_089B1C78:;
    v0 = D_08C2AA98 - (-21864);
    a0 = LD32(v0-21864);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089B1CA0; }
    goto L_089B1C88;
L_089B1C88:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B1CA0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1CA8;
L_089B1CA8:;
    goto L_089B1C88;
}

/* 089B1CB0 */
rv_t func_089B1CB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1CB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089B1B40(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1CC4;
L_089B1CC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1CD0 */
rv_t func_089B1CD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1CD0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089B1B40(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1CE4;
L_089B1CE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1CF0 */
void func_089B1CF0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089B1CF0:;
    sp = sp - 48;
    s4 = a0 + 1148;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s0 = D_08AFE6B8 - (-6472);
    s0 = s0 - 6472;
    s5 = s1 + 884;
    s3 = D_08C2AB58 - (-21672);
    func_08873BF8(a0);
    goto L_089B1D30;
L_089B1D30:;
    a1 = s0 + 48;
    a0 = s5 + 0;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089B1D40;
L_089B1D40:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089C3E24(a0, a1);
    goto L_089B1D4C;
L_089B1D4C:;
    v1 = D_08AFE3D8 - (-7208);
    v1 = v1 - 7208;
    v0 = D_08AEEB3C - (-5316);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0-5316));
    v0 = v1 + 600;
    ST32(s1+884, v0);
    v0 = (u32)-32739;
    a1 = s1 + 860;
    ST32(s1, v1);
    a0 = v1 + 712;
    s2 = s3 - 21672;
    ST16(s4+8, v0);
    v0 = 1;
    ST32(s1+856, 0);
    ST32(s1+860, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(s1+1148, a0);
    a0 = 12;
    ST32(s1+872, 0);
    ST32(s1+876, 0);
    ST32(s1+880, 0);
    ST8(s5+246, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(sp, FBITS(f0));
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    ST32(sp+4, FBITS(f0));
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    ST32(sp+8, FBITS(f1));
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1DD8;
L_089B1DD8:;
    a0 = LD32(s3-21672);
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
    sp = sp + 48;
    return;
}

/* 089B1E28 */
rv_t func_089B1E28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B1E28:;
    v1 = D_08AFE3D8 - (-7208);
    sp = sp - 32;
    v1 = v1 - 7208;
    v0 = v1 + 600;
    s1 = a0 + 0;
    a0 = v1 + 712;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+1148, a0);
    a0 = D_08C2AB58 - (-21672);
    a0 = a0 - 21672;
    ST32(s1+884, v0);
    s0 = D_08AFE6B8 - (-6472);
    s0 = s0 - 6472;
    s3 = s1 + 1148;
    func_08AC53D4(a0, a1, t1, t2, t3);
    goto L_089B1E7C;
L_089B1E7C:;
    s2 = s1 + 884;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089B1E90;
L_089B1E90:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B1E9C;
L_089B1E9C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1EA4;
L_089B1EA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1EC0 */
rv_t func_089B1EC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B1EC0:;
    v1 = D_08AFE3D8 - (-7208);
    sp = sp - 32;
    v1 = v1 - 7208;
    v0 = v1 + 600;
    s1 = a0 + 0;
    a0 = v1 + 712;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+1148, a0);
    a0 = D_08C2AB58 - (-21672);
    a0 = a0 - 21672;
    ST32(s1+884, v0);
    s0 = D_08AFE6B8 - (-6472);
    s0 = s0 - 6472;
    s3 = s1 + 1148;
    func_08AC53D4(a0, a1, t1, t2, t3);
    goto L_089B1F14;
L_089B1F14:;
    s2 = s1 + 884;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089B1F28;
L_089B1F28:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B1F34;
L_089B1F34:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1F3C;
L_089B1F3C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1F44;
L_089B1F44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089B1F60 */
u32 func_089B1F60(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1F60:;
    sp = sp - 16;
    a1 = 0xcc660000u;
    a1 = a1 | 0x3845;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1F7C;
L_089B1F7C:;
    sp = sp + 16;
    return v0;
}

/* 089B1F88 */
u32 func_089B1F88(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1F88:;
    sp = sp - 16;
    a1 = 0xcc660000u;
    a1 = a1 | 0x3846;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1FA4;
L_089B1FA4:;
    sp = sp + 16;
    return v0;
}

/* 089B1FB0 */
u32 func_089B1FB0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1FB0:;
    sp = sp - 16;
    a1 = 0xcc660000u;
    a1 = a1 | 0x3847;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B1FCC;
L_089B1FCC:;
    sp = sp + 16;
    return v0;
}

/* 089B1FD8 */
rv_t func_089B1FD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B1FD8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 1168;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B1FF4;
L_089B1FF4:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    func_089B1CF0(a0);
    goto L_089B2000;
L_089B2000:;
    v1 = LD32(s1);
    a1 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2014;
L_089B2014:;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    { rv_t r_ = func_0885E738(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2024;
L_089B2024:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089B2038;
L_089B2038:;
    a0 = 0x360000u;
    a2 = s1 + 588;
    a1 = v0 + 0;
    a0 = a0 | 0x34ea;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B204C;
L_089B204C:;
    v1 = LD32(s1);
    v0 = LD32(v1+456);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B205C;
L_089B205C:;
    a0 = s1 + 0;
    { u64 r_ = func_089C5C6C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B2064;
L_089B2064:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089B207C; }
    goto L_089B206C;
L_089B206C:;
    v0 = LD32(s1+88);
    cnd_ = v0 != 0;
    a0 = 144;
    if (cnd_) { goto L_089B209C; }
    goto L_089B2078;
L_089B2078:;
    v1 = LD32(s1);
    goto L_089B207C;
L_089B207C:;
    v0 = LD32(v1+480);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2088;
L_089B2088:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B209C:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B20A4;
L_089B20A4:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D8EAC(a0, a1);
    goto L_089B20B0;
L_089B20B0:;
    a0 = 144;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B20B8;
L_089B20B8:;
    a1 = LD32(s1+88);
    a0 = v0 + 0;
    func_089D9008(a0, a1);
    goto L_089B20C4;
L_089B20C4:;
    v1 = LD32(s1);
    goto L_089B207C;
}

/* 089B20CC */
rv_t func_089B20CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089B20CC:;
    sp = sp - 48;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089B2564; }
    goto L_089B20F4;
L_089B20F4:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DBCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B20FC;
L_089B20FC:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089B2114; }
    goto L_089B210C;
L_089B210C:;
    v0 = LD_U8(v0+68);
    s3 = 0 < v0;
    goto L_089B2114;
L_089B2114:;
    v0 = LD32(s1+848);
    v1 = LD32(s1+844);
    ST32(s1+488, 0);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v1 = v1 & 0x8;
    ST32(s1+848, v0);
    ST32(s1+480, 0);
    ST32(s1+484, 0);
    cnd_ = v1 == 0;
    ST32(s1+492, 0);
    if (cnd_) { goto L_089B215C; }
    goto L_089B213C;
L_089B213C:;
    goto L_089B2140;
L_089B2140:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089B215C:;
    a0 = LD32(s1+92);
    a1 = 3;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = D_08AEEB44 - (-5308);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2174;
L_089B2174:;
    v0 = D_08AEEB40 - (-5312);
    f20 = BITSF(LD32(v0-5312));
    f1 = BITSF(LD32(s0-5308));
    f0 = f0 * f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s1+492, FBITS(f0));
    if (cnd_) { goto L_089B2198; }
    goto L_089B2194;
L_089B2194:;
    f1 = f0;
    goto L_089B2198;
L_089B2198:;
    s2 = D_08AEEB48 - (-5304);
    f0 = BITSF(LD32(s2-5304));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s1+492, FBITS(f1));
    if (cnd_) { goto L_089B21B4; }
    goto L_089B21B0;
L_089B21B0:;
    f0 = f1;
    goto L_089B21B4;
L_089B21B4:;
    ST32(s1+492, FBITS(f0));
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B21CC;
L_089B21CC:;
    f0 = f0 * f20;
    f1 = BITSF(LD32(s0-5308));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s1+484, FBITS(f0));
    if (cnd_) { goto L_089B21E8; }
    goto L_089B21E4;
L_089B21E4:;
    f1 = f0;
    goto L_089B21E8;
L_089B21E8:;
    f0 = BITSF(LD32(s2-5304));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s1+484, FBITS(f1));
    if (cnd_) { goto L_089B2200; }
    goto L_089B21FC;
L_089B21FC:;
    f0 = f1;
    goto L_089B2200;
L_089B2200:;
    v1 = LD32(s1+848);
    v0 = (v1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    ST32(s1+484, FBITS(f0));
    if (cnd_) { goto L_089B222C; }
    goto L_089B2210;
L_089B2210:;
    f1 = BITSF(LD32(s1+492));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B2554; }
    goto L_089B2228;
L_089B2228:;
    v0 = (v1 >> 3) & 0x1;
    goto L_089B222C;
L_089B222C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089B2244; }
    goto L_089B2234;
L_089B2234:;
    ST32(s1+488, 0);
    ST32(s1+480, 0);
    ST32(s1+484, 0);
    a0 = LD32(s1+92);
    goto L_089B2244;
L_089B2244:;
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2258;
L_089B2258:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+844); goto L_089B2278; }
    goto L_089B2268;
L_089B2268:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    ST32(s1+740, FBITS(f0));
    v0 = LD32(s1+844);
    goto L_089B2278;
L_089B2278:;
    a2 = LD32(s1+92);
    a1 = 6;
    s0 = (v0 >> 2) & 0x1;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+844, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B229C;
L_089B229C:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+844); goto L_089B22F8; }
    goto L_089B22AC;
L_089B22AC:;
    v0 = D_08B285B4 - (-31308);
    f2 = BITSF(LD32(v0-31308));
    f0 = BITSF(LD32(s1+740));
    v0 = D_08AEEB4C - (-5300);
    f1 = BITSF(LD32(v0-5300));
    f0 = f2 - f0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = LD32(s1+844);
    if (cnd_) { goto L_089B22DC; }
    goto L_089B22D4;
L_089B22D4:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089B22F8; }
    goto L_089B22DC;
L_089B22DC:;
    f0 = BITSF(LD32(s2-5304));
    ST32(s1+740, FBITS(f2));
    v0 = v0 | 0x4;
    ST32(s1+844, v0);
    ST32(s1+492, FBITS(f0));
    ST8(s1+469, 0);
    v0 = LD32(s1+844);
    goto L_089B22F8;
L_089B22F8:;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+848); goto L_089B2310; }
    goto L_089B2304;
L_089B2304:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089B2544; }
    goto L_089B230C;
L_089B230C:;
    v0 = LD32(s1+848);
    goto L_089B2310;
L_089B2310:;
    a2 = LD32(s1+92);
    f20 = BITSF(0);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+848, v0);
    a0 = a2 + 0;
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2334;
L_089B2334:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = LD32(s1+848);
    if (cnd_) { goto L_089B2350; }
    goto L_089B2344;
L_089B2344:;
    v0 = v0 | 0x1;
    ST32(s1+848, v0);
    v0 = LD32(s1+848);
    goto L_089B2350;
L_089B2350:;
    a2 = LD32(s1+92);
    a1 = 14;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+848, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2370;
L_089B2370:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+844); goto L_089B2534; }
    goto L_089B2380;
L_089B2380:;
    a0 = LD32(s1+844);
    v0 = LD32(s1+848);
    v1 = (a0 >> 12) & 0x1;
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s1+848, v0);
    goto L_089B2394;
L_089B2394:;
    a0 = (a0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+844, a0);
    v0 = 2;
    a0 = LD32(s1+92);
    v1 = LD32(a0+12);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+720); goto L_089B251C; }
    goto L_089B23B0;
L_089B23B0:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 8;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B23C0;
L_089B23C0:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = LD32(s1+92);
    if (cnd_) { goto L_089B23E0; }
    goto L_089B23D4;
L_089B23D4:;
    v0 = LD32(s1+844);
    v0 = v0 | 0x20;
    ST32(s1+844, v0);
    goto L_089B23E0;
L_089B23E0:;
    v1 = LD32(a0+12);
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+720); goto L_089B251C; }
    goto L_089B23F0;
L_089B23F0:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2400;
L_089B2400:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = LD32(s1+720);
    if (cnd_) { goto L_089B251C; }
    goto L_089B2414;
L_089B2414:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_089B2510; }
    goto L_089B241C;
L_089B241C:;
    a0 = LD32(s1+92);
    goto L_089B2420;
L_089B2420:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2430;
L_089B2430:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 9;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2444;
L_089B2444:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    a0 = 0x8041;
    if (cnd_) { goto L_089B24E4; }
    goto L_089B2458;
L_089B2458:;
    v0 = LD32(s1+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B2478; }
    goto L_089B2468;
L_089B2468:;
    v1 = LD32(s1+844);
    v0 = v1 & 0x200;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = (v1 & ~(0x1u << 9)) | ((0 & 0x1) << 9); goto L_089B24DC; }
    goto L_089B2478;
L_089B2478:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_089B2140; }
    goto L_089B2480;
L_089B2480:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 10;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2494;
L_089B2494:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_089B2140; }
    goto L_089B24A8;
L_089B24A8:;
    a0 = 0x8048;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B24BC;
L_089B24BC:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    a0 = LD32(v1-16);
    goto L_089B24C8;
L_089B24C8:;
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B24D4;
L_089B24D4:;
    goto L_089B2140;
L_089B24DC:;
    ST32(s1+844, v1);
    a0 = 0x8042;
    goto L_089B24E4;
L_089B24E4:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B24F4;
L_089B24F4:;
    a0 = LD32(v0+24);
    v1 = LD32(s1+524);
    a1 = v0 + 0;
    ST32(a0, v1);
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    goto L_089B24C8;
L_089B2510:;
    a1 = 1;
    func_089DD9CC(a0, a1, 0, 0, 0);
    goto L_089B2518;
L_089B2518:;
    v0 = LD32(s1+720);
    goto L_089B251C;
L_089B251C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089B2420; }
    goto L_089B2524;
L_089B2524:;
    a0 = s1 + 0;
    func_089DE1D4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B252C;
L_089B252C:;
    a0 = LD32(s1+92);
    goto L_089B2420;
L_089B2534:;
    v0 = v0 | 0x1000;
    ST32(s1+844, v0);
    a0 = v0 + 0;
    goto L_089B2394;
L_089B2544:;
    a0 = s1 + 0;
    func_089C9FFC(a0, 0, 0, 0);
    goto L_089B254C;
L_089B254C:;
    v0 = LD32(s1+848);
    goto L_089B2310;
L_089B2554:;
    a0 = s1 + 0;
    { rv_t r_ = func_089C9548(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B255C;
L_089B255C:;
    v1 = LD32(s1+848);
    goto L_089B2228;
L_089B2564:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B256C;
L_089B256C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A5FEFC(a0);
    goto L_089B2578;
L_089B2578:;
    ST32(s1+92, s0);
    goto L_089B20F4;
}

/* 089B2580 */
rv_t func_089B2580(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_089B2580:;
    sp = sp - 224;
    s1 = a0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B25A0;
L_089B25A0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B25BC; }
    goto L_089B25A8;
L_089B25A8:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B288C; }
    goto L_089B25B4;
L_089B25B4:;
    a0 = s1 + 0;
    func_089C8798(a0);
    goto L_089B25BC;
L_089B25BC:;
    a0 = s1 + 0;
    func_089CB450(a0);
    goto L_089B25C4;
L_089B25C4:;
    a0 = s1 + 0;
    func_089C9F48(a0);
    goto L_089B25CC;
L_089B25CC:;
    a0 = s1 + 0;
    func_089CA734(a0);
    goto L_089B25D4;
L_089B25D4:;
    a0 = s1 + 0;
    func_089C9978(a0, 0, 0, 0);
    goto L_089B25DC;
L_089B25DC:;
    a0 = s1 + 0;
    func_089B4E6C(a0);
    goto L_089B25E4;
L_089B25E4:;
    s0 = D_08B2C1BC - (-15940);
    a0 = s1 + 0;
    func_089B4A1C(a0, 0, 0, 0);
    goto L_089B25F0;
L_089B25F0:;
    v0 = LD_U8(s0-15940);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+848); goto L_089B260C; }
    goto L_089B25FC;
L_089B25FC:;
    a0 = LD32(s1+40);
    cnd_ = a0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_089B2874; }
    goto L_089B2608;
L_089B2608:;
    v0 = LD32(s1+848);
    goto L_089B260C;
L_089B260C:;
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    v1 = LD32(s1+844);
    if (cnd_) { goto L_089B263C; }
    goto L_089B2618;
L_089B2618:;
    v0 = v1 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B2640; }
    goto L_089B2624;
L_089B2624:;
    v0 = LD_U8(s0-15940);
    cnd_ = v0 != 0;
    v0 = v1 & 0x8;
    if (cnd_) { goto L_089B2640; }
    goto L_089B2630;
L_089B2630:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B27F4; }
    goto L_089B263C;
L_089B263C:;
    v0 = v1 & 0x8;
    goto L_089B2640;
L_089B2640:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B26AC; }
    goto L_089B2648;
L_089B2648:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089B26AC; }
    goto L_089B2660;
L_089B2660:;
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s2 = s0 + 76;
    if (cnd_) { goto L_089B2694; }
    goto L_089B266C;
L_089B266C:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s2 + 0;
    if (cnd_) { goto L_089B2698; }
    goto L_089B2680;
L_089B2680:;
    v0 = LD32(s2+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEEB50 - (-5296);
    if (cnd_) { goto L_089B27DC; }
    goto L_089B2690;
L_089B2690:;
    ST32(s0+220, s3);
    goto L_089B2694;
L_089B2694:;
    a0 = s2 + 0;
    goto L_089B2698;
L_089B2698:;
    a1 = sp + 0;
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B26A0;
L_089B26A0:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089B26D0; }
    goto L_089B26AC;
L_089B26AC:;
    a0 = s1 + 0;
    { rv_t r_ = func_089C71EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B26B4;
L_089B26B4:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_089B26D0:;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B26DC;
L_089B26DC:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    a0 = LD32(s1+40);
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    v1 = LD32(sp+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    a1 = sp + 0;
    {v0=FBITS(v[17]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B27B8;
L_089B27B8:;
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B27C8;
L_089B27C8:;
    a0 = LD32(s1+40);
    a1 = v0 + 0;
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B27D4;
L_089B27D4:;
    goto L_089B26AC;
L_089B27DC:;
    f12 = BITSF(LD32(v0-5296));
    a0 = s2 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B27EC;
L_089B27EC:;
    ST32(s0+220, s3);
    goto L_089B2694;
L_089B27F4:;
    a0 = s1 + 0;
    func_089CBD58(a0);
    goto L_089B27FC;
L_089B27FC:;
    v0 = LD32(s1+844);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B281C; }
    goto L_089B280C;
L_089B280C:;
    a0 = s1 + 0;
    func_089B42BC(a0);
    goto L_089B2814;
L_089B2814:;
    a0 = s1 + 0;
    func_089CDD90(a0);
    goto L_089B281C;
L_089B281C:;
    a0 = s1 + 0;
    func_089B289C(a0);
    goto L_089B2824;
L_089B2824:;
    a0 = s1 + 0;
    func_089B2A04(a0);
    goto L_089B282C;
L_089B282C:;
    s0 = sp + 16;
    a0 = s1 + 0;
    f0 = func_089C8410(a0);
    goto L_089B2838;
L_089B2838:;
    a1 = s1 + 552;
    a0 = s0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2844;
L_089B2844:;
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
    goto L_089B286C;
L_089B286C:;
    v1 = LD32(s1+844);
    goto L_089B263C;
L_089B2874:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2884;
L_089B2884:;
    v0 = LD32(s1+848);
    goto L_089B260C;
L_089B288C:;
    a0 = s1 + 0;
    func_089C852C(a0);
    goto L_089B2894;
L_089B2894:;
    goto L_089B25BC;
}

/* 089B289C */
void func_089B289C(u32 a0)
{
    u32 v0 = 0, a1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089B289C:;
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
    if (cnd_) { goto L_089B29E4; }
    goto L_089B28C8;
L_089B28C8:;
    f3 = f0 * f4;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089B28E0; }
    goto L_089B28DC;
L_089B28DC:;
    f0 = f3;
    goto L_089B28E0;
L_089B28E0:;
    f0 = f1 - f0;
    goto L_089B28E4;
L_089B28E4:;
    ST32(a0+500, FBITS(f0));
    f0 = BITSF(LD32(a0+484));
    f1 = BITSF(LD32(a0+500));
    f0 = f0 * f5;
    f0 = f0 * f4;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(a0+500, FBITS(f1));
    if (cnd_) { goto L_089B2910; }
    goto L_089B290C;
L_089B290C:;
    ST32(a0+500, FBITS(f2));
    goto L_089B2910;
L_089B2910:;
    f1 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(LD32(a0+500));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = f0 * f4;
    if (cnd_) { goto L_089B2934; }
    goto L_089B2928;
L_089B2928:;
    ST32(a0+500, FBITS(f1));
    f0 = f1;
    f0 = f0 * f4;
    goto L_089B2934;
L_089B2934:;
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
    goto L_089B29D8;
L_089B29D8:;
    sp = sp + 80;
    return;
L_089B29E4:;
    f3 = f0 * f4;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089B29FC; }
    goto L_089B29FC;
L_089B29FC:;
    f0 = f1 + f0;
    goto L_089B28E4;
}

/* 089B2A04 */
void func_089B2A04(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089B2A04:;
    t0 = a0 + 540;
    f3 = BITSF(LD32(a0+276));
    f11 = BITSF(LD32(a0+540));
    f10 = BITSF(LD32(t0+4));
    f9 = BITSF(LD32(t0+8));
    f6 = f11 * f3;
    f7 = f10 * f3;
    t1 = D_08B285A0 - (-31328);
    f3 = f9 * f3;
    f2 = BITSF(LD32(t1-31328));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f11);
    f8 = f3 * f2;
    f4 = f6 * f2;
    f2 = f7 * f2;
    {v[4]=BITSF(v0);}
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
    sp = sp - 64;
    ST32(sp+16, FBITS(f6));
    fcc = FCMP(f0, f5, 12);
    a2 = a0 + 0;
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f8));
    cnd_ = !fcc;
    f12 = BITSF(LD32(a0+492));
    if (cnd_) { goto L_089B2ABC; }
    goto L_089B2AB0;
L_089B2AB0:;
    ST32(sp, FBITS(f11));
    ST32(sp+4, FBITS(f10));
    ST32(sp+8, FBITS(f9));
    goto L_089B2ABC;
L_089B2ABC:;
    f8 = BITSF(LD32(sp+8));
    f0 = BITSF(0);
    fcc = FCMP(f0, f8, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_089B2AE0; }
    goto L_089B2AD4;
L_089B2AD4:;
    ST32(sp+8, FBITS(f0));
    f8 = f0;
    f1 = BITSF(LD32(sp+4));
    goto L_089B2AE0;
L_089B2AE0:;
    f2 = f9 - f8;
    f0 = BITSF(LD32(sp));
    f1 = f10 - f1;
    ST32(t0+8, FBITS(f2));
    f0 = f11 - f0;
    ST32(t0+4, FBITS(f1));
    f11 = f0;
    v0 = LD_U8(a2+469);
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    cnd_ = v0 == 0;
    ST32(a2+540, FBITS(f0));
    if (cnd_) { goto L_089B2BCC; }
    goto L_089B2B14;
L_089B2B14:;
    a3 = LD32(a2+448);
    v0 = 999;
    cnd_ = a3 == v0;
    if (cnd_) { v1 = LD32(a2+844); goto L_089B2BD0; }
    goto L_089B2B24;
L_089B2B24:;
    a0 = D_08C2AB58 - (-21672);
    v1 = a0 - 21672;
    v0 = LD32(v1+4);
    a1 = LD32(a0-21672);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B2B7C; }
    goto L_089B2B50;
L_089B2B50:;
    a0 = LD32(a1);
    goto L_089B2B54;
L_089B2B54:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B2DA8; }
    goto L_089B2B6C;
L_089B2B6C:;
    a1 = LD32(a1+4);
    goto L_089B2B70;
L_089B2B70:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B2B54; }
    goto L_089B2B78;
L_089B2B78:;
    v1 = 0 + 0;
    goto L_089B2B7C;
L_089B2B7C:;
    cnd_ = v1 == 0;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    if (cnd_) { goto L_089B2DA0; }
    goto L_089B2B84;
L_089B2B84:;
    f11 = BITSF(LD32(a2+540));
    v1 = LD32(t0+8);
    v0 = FBITS(f11);
    {v[0]=BITSF(v0);}
    v0 = LD32(t0+4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f2 = BITSF(LD32(a2+472));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEEB58 - (-5288);
    if (cnd_) { goto L_089B2D98; }
    goto L_089B2BC4;
L_089B2BC4:;
    v0 = D_08AEEB54 - (-5292);
    f12 = BITSF(LD32(v0-5292));
    goto L_089B2BCC;
L_089B2BCC:;
    v1 = LD32(a2+844);
    goto L_089B2BD0;
L_089B2BD0:;
    f7 = BITSF(LD32(a2+280));
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089B2C14; }
    goto L_089B2BE0;
L_089B2BE0:;
    f0 = BITSF(LD32(t0+8));
    fcc = FCMP(f7, f0, 12);
    cnd_ = !fcc;
    f0 = f12;
    if (cnd_) { goto L_089B2C14; }
    goto L_089B2BF4;
L_089B2BF4:;
    f1 = BITSF(LD32(a2+288));
    fcc = FCMP(f12, f1, 14);
    cnd_ = fcc;
    a1 = 1;
    if (cnd_) { goto L_089B2C0C; }
    goto L_089B2C08;
L_089B2C08:;
    f0 = f1;
    goto L_089B2C0C;
L_089B2C0C:;
    f12 = f0;
    v0 = v1 & 0x4;
    goto L_089B2C14;
L_089B2C14:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089B2C30; }
    goto L_089B2C1C;
L_089B2C1C:;
    f0 = BITSF(LD32(t0+8));
    fcc = FCMP(f0, f7, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = 1; goto L_089B2C30; }
    goto L_089B2C30;
L_089B2C30:;
    f0 = BITSF(LD32(a2+284));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f3 = f11 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f6 = BITSF(LD32(t1-31328));
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
    f0 = BITSF(LD32(a2+292));
    if (cnd_) { goto L_089B2C8C; }
    goto L_089B2C88;
L_089B2C88:;
    f0 = BITSF(LD32(a2+300));
    goto L_089B2C8C;
L_089B2C8C:;
    f0 = f0 * f12;
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    ST32(sp+48, 0);
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    f0 = f0 * f6;
    f6 = BITSF(LD32(sp+48));
    ST32(sp+48, FBITS(f1));
    f2 = f11 + f1;
    f3 = f0 - f5;
    ST32(a2+508, FBITS(f0));
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(t0+4));
    ST32(sp+32, FBITS(f2));
    f5 = f1 + f3;
    f0 = f0 + f4;
    ST32(sp+52, FBITS(f4));
    fcc = FCMP(f5, f6, 2);
    ST32(sp+36, FBITS(f0));
    ST32(sp+56, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_089B2D90; }
    goto L_089B2CE0;
L_089B2CE0:;
    f5 = BITSF(LD32(a2+304));
    fcc = FCMP(f5, f6, 12);
    f2 = f5;
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_089B2CF8; }
    goto L_089B2CF4;
L_089B2CF4:;
    ST32(sp+40, FBITS(f6));
    goto L_089B2CF8;
L_089B2CF8:;
    v0 = D_08AEEB5C - (-5284);
    f1 = BITSF(LD32(v0-5284));
    f0 = BITSF(LD32(a2+308));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_089B2D14; }
    goto L_089B2D14;
L_089B2D14:;
    f0 = BITSF(LD32(sp+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_089B2D28; }
    goto L_089B2D28;
L_089B2D28:;
    fcc = FCMP(f1, f2, 14);
    f0 = f2;
    cnd_ = fcc;
    ST32(sp+40, FBITS(f1));
    if (cnd_) { goto L_089B2D3C; }
    goto L_089B2D38;
L_089B2D38:;
    f0 = f1;
    goto L_089B2D3C;
L_089B2D3C:;
    cnd_ = a1 == 0;
    ST32(sp+40, FBITS(f0));
    if (cnd_) { goto L_089B2D54; }
    goto L_089B2D44;
L_089B2D44:;
    fcc = FCMP(f0, f7, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+40, FBITS(f7)); goto L_089B2D54; }
    goto L_089B2D54;
L_089B2D54:;
    cnd_ = a0 == 0;
    f5 = BITSF(LD32(sp+40));
    if (cnd_) { goto L_089B2D74; }
    goto L_089B2D5C;
L_089B2D5C:;
    fcc = FCMP(f7, f5, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_089B2D78; }
    goto L_089B2D6C;
L_089B2D6C:;
    f5 = f7;
    ST32(sp+40, FBITS(f7));
    goto L_089B2D74;
L_089B2D74:;
    f0 = BITSF(LD32(sp+32));
    goto L_089B2D78;
L_089B2D78:;
    f1 = BITSF(LD32(sp+36));
    ST32(t0+8, FBITS(f5));
    ST32(a2+540, FBITS(f0));
    ST32(t0+4, FBITS(f1));
    sp = sp + 64;
    return;
L_089B2D90:;
    f2 = BITSF(LD32(a2+304));
    goto L_089B2CF8;
L_089B2D98:;
    f12 = BITSF(LD32(v0-5288));
    goto L_089B2BCC;
L_089B2DA0:;
    f11 = BITSF(LD32(a2+540));
    goto L_089B2BCC;
L_089B2DA8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089B2B6C; }
    goto L_089B2DB4;
L_089B2DB4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B2B70; }
    goto L_089B2DC0;
L_089B2DC0:;
    goto L_089B2B7C;
}

/* 089B2DC8 */
rv_t func_089B2DC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[1088] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1088);
L_089B2DC8:;
    sp = sp - 1088;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0);
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+240);
    {u32 a_=sp+(976);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(992);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2E28;
L_089B2E28:;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+4, FBITS(f1));
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp, FBITS(f0));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    f21 = BITSF(LD32(s1+312));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2E84;
L_089B2E84:;
    v1 = LD32(s1);
    f0 = BITSF(LD32(s1+312));
    s0 = v0 + 0;
    ST32(sp+80, 0);
    a0 = s1 + 0;
    ST32(sp+88, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    ST32(sp+84, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B2EA8;
L_089B2EA8:;
    {u32 a_=sp+(1008);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(352);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(384);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(336);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(368);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+80);
    v0 = LD32(sp+84);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+88);
    v0 = LD_U8(s1+476);
    {v[22]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    {a1=FBITS(v[16]);}
    {t0=FBITS(v[17]);}
    ST32(sp+96, a1);
    f5 = BITSF(v1);
    f4 = BITSF(a1);
    ST32(sp+100, t0);
    f3 = BITSF(t0);
    ST32(sp+104, v1);
    ST32(sp+64, a1);
    ST32(sp+68, t0);
    ST32(sp+72, v1);
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0+4));
    f1 = f1 + f4;
    f0 = f0 + f5;
    f2 = f2 + f3;
    ST32(sp+48, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(sp+52, FBITS(f2));
    if (cnd_) { goto L_089B41A4; }
    goto L_089B2F8C;
L_089B2F8C:;
    a1 = LD32(s1+448);
    v0 = 999;
    cnd_ = a1 == v0;
    s4 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089B4168; }
    goto L_089B2F9C;
L_089B2F9C:;
    f0 = BITSF(LD32(s4-31328));
    f1 = BITSF(LD32(s1+376));
    f2 = BITSF(LD32(s1+728));
    s5 = D_08AEEB60 - (-5280);
    f0 = f0 * f1;
    f1 = BITSF(LD32(s5-5280));
    f2 = f2 + f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    ST32(s1+728, FBITS(f2));
    if (cnd_) { goto L_089B2FCC; }
    goto L_089B2FC8;
L_089B2FC8:;
    f1 = f2;
    goto L_089B2FCC;
L_089B2FCC:;
    ST32(s1+728, FBITS(f1));
    goto L_089B2FD0;
L_089B2FD0:;
    v0 = 999;
    cnd_ = a1 == v0;
    a0 = D_08C2AB58 - (-21672);
    if (cnd_) { goto L_089B385C; }
    goto L_089B2FDC;
L_089B2FDC:;
    a0 = a0 - 21672;
    a2 = 1;
    v0 = func_08AC5490(a0, a1, a2);
    goto L_089B2FE8;
L_089B2FE8:;
    cnd_ = v0 == 0;
    if (cnd_) { f5 = BITSF(LD32(s1+480)); goto L_089B3860; }
    goto L_089B2FF0;
L_089B2FF0:;
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
    if (cnd_) { goto L_089B3270; }
    goto L_089B302C;
L_089B302C:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B31B0; }
    goto L_089B303C;
L_089B303C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B30D4; }
    goto L_089B3064;
L_089B3064:;
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
    if (cnd_) { goto L_089B30B0; }
    goto L_089B30A0;
L_089B30A0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B30B0;
L_089B30B0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B30F4; }
    goto L_089B30C0;
L_089B30C0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B30F4; }
    goto L_089B30D0;
L_089B30D0:;
    goto L_089B30D4;
L_089B30D4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B30F4; }
    goto L_089B30E8;
L_089B30E8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B30F4;
L_089B30F4:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B3184; }
    goto L_089B3114;
L_089B3114:;
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
    if (cnd_) { goto L_089B3160; }
    goto L_089B3150;
L_089B3150:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B3160;
L_089B3160:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B31A4; }
    goto L_089B3170;
L_089B3170:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B31A4; }
    goto L_089B3180;
L_089B3180:;
    goto L_089B3184;
L_089B3184:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B31A4; }
    goto L_089B3198;
L_089B3198:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B31A4;
L_089B31A4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089B3328; }
    goto L_089B31AC;
L_089B31AC:;
    goto L_089B31B0;
L_089B31B0:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B3244; }
    goto L_089B31D4;
L_089B31D4:;
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
    if (cnd_) { goto L_089B3220; }
    goto L_089B3210;
L_089B3210:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B3220;
L_089B3220:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3264; }
    goto L_089B3230;
L_089B3230:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B3264; }
    goto L_089B3240;
L_089B3240:;
    goto L_089B3244;
L_089B3244:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3264; }
    goto L_089B3258;
L_089B3258:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B3264;
L_089B3264:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089B3328; }
    goto L_089B326C;
L_089B326C:;
    goto L_089B3270;
L_089B3270:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B3304; }
    goto L_089B3294;
L_089B3294:;
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
    if (cnd_) { goto L_089B32E0; }
    goto L_089B32D0;
L_089B32D0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B32E0;
L_089B32E0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3324; }
    goto L_089B32F0;
L_089B32F0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B3324; }
    goto L_089B3300;
L_089B3300:;
    goto L_089B3304;
L_089B3304:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3324; }
    goto L_089B3318;
L_089B3318:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B3324;
L_089B3324:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089B3328;
L_089B3328:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    f20 = BITSF(LD32(sp+120));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B334C;
L_089B334C:;
    f0 = BITSF(LD32(s1+728));
    f1 = BITSF(LD32(s5-5280));
    f6 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f1 = f1 - f0;
    f6 = f6 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = BITSF(LD32(sp+56));
    f2 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+52));
    f5 = f5 * f1;
    f2 = f2 * f1;
    f0 = f0 * f1;
    v1 = LD32(s1);
    f8 = f6 + f5;
    f1 = f3 + f2;
    f7 = f4 + f0;
    ST32(sp+88, FBITS(f6));
    ST32(sp+52, FBITS(f7));
    ST32(sp+56, FBITS(f8));
    ST32(sp+72, FBITS(f5));
    ST32(sp+100, FBITS(f7));
    ST32(sp+104, FBITS(f8));
    ST32(sp+80, FBITS(f3));
    ST32(sp+48, FBITS(f1));
    ST32(sp+84, FBITS(f4));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f0));
    ST32(sp+96, FBITS(f1));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B33D4;
L_089B33D4:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f0 = f0 - f2;
    f1 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    {u32 a_=sp+(400);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 - f3;
    f2 = f2 - f4;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v1 = FBITS(f1);
    a1 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    ST32(sp+96, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+100, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+104, FBITS(f2));
    {t0=FBITS(v[0]);}
    f21 = BITSF(t0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B3444;
L_089B3444:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    a1 = sp + 96;
    f1 = f1 - f3;
    f0 = f0 - f4;
    a0 = sp + 0;
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f0));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B3480;
L_089B3480:;
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
    if (cnd_) { goto L_089B3700; }
    goto L_089B34BC;
L_089B34BC:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3640; }
    goto L_089B34CC;
L_089B34CC:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B3564; }
    goto L_089B34F4;
L_089B34F4:;
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
    if (cnd_) { goto L_089B3540; }
    goto L_089B3530;
L_089B3530:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B3540;
L_089B3540:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3584; }
    goto L_089B3550;
L_089B3550:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B3584; }
    goto L_089B3560;
L_089B3560:;
    goto L_089B3564;
L_089B3564:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3584; }
    goto L_089B3578;
L_089B3578:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B3584;
L_089B3584:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B3614; }
    goto L_089B35A4;
L_089B35A4:;
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
    if (cnd_) { goto L_089B35F0; }
    goto L_089B35E0;
L_089B35E0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B35F0;
L_089B35F0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3634; }
    goto L_089B3600;
L_089B3600:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B3634; }
    goto L_089B3610;
L_089B3610:;
    goto L_089B3614;
L_089B3614:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B3634; }
    goto L_089B3628;
L_089B3628:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B3634;
L_089B3634:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089B37B8; }
    goto L_089B363C;
L_089B363C:;
    goto L_089B3640;
L_089B3640:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B36D4; }
    goto L_089B3664;
L_089B3664:;
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
    if (cnd_) { goto L_089B36B0; }
    goto L_089B36A0;
L_089B36A0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B36B0;
L_089B36B0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B36F4; }
    goto L_089B36C0;
L_089B36C0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B36F4; }
    goto L_089B36D0;
L_089B36D0:;
    goto L_089B36D4;
L_089B36D4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B36F4; }
    goto L_089B36E8;
L_089B36E8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B36F4;
L_089B36F4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089B37B8; }
    goto L_089B36FC;
L_089B36FC:;
    goto L_089B3700;
L_089B3700:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B3794; }
    goto L_089B3724;
L_089B3724:;
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
    if (cnd_) { goto L_089B3770; }
    goto L_089B3760;
L_089B3760:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B3770;
L_089B3770:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B37B4; }
    goto L_089B3780;
L_089B3780:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B37B4; }
    goto L_089B3790;
L_089B3790:;
    goto L_089B3794;
L_089B3794:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B37B4; }
    goto L_089B37A8;
L_089B37A8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B37B4;
L_089B37B4:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089B37B8;
L_089B37B8:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    ST32(sp+120, FBITS(f20));
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
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    goto L_089B385C;
L_089B385C:;
    f5 = BITSF(LD32(s1+480));
    goto L_089B3860;
L_089B3860:;
    f3 = BITSF(0);
    fcc = FCMP(f5, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(s1+484)); goto L_089B38B8; }
    goto L_089B3874;
L_089B3874:;
    f2 = BITSF(LD32(s1+592));
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-31328));
    if (cnd_) { goto L_089B414C; }
    goto L_089B3888;
L_089B3888:;
    f1 = BITSF(LD32(s1+316));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f3, 14);
    goto L_089B38A0;
L_089B38A0:;
    cnd_ = fcc;
    ST32(s1+592, FBITS(f0));
    if (cnd_) { goto L_089B38AC; }
    goto L_089B38A8;
L_089B38A8:;
    f3 = f0;
    goto L_089B38AC;
L_089B38AC:;
    ST32(s1+592, FBITS(f3));
    f4 = BITSF(LD32(s1+484));
    f3 = BITSF(0);
    goto L_089B38B8;
L_089B38B8:;
    fcc = FCMP(f4, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s1+324)); goto L_089B3908; }
    goto L_089B38C8;
L_089B38C8:;
    f2 = BITSF(LD32(s1+596));
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-31328));
    if (cnd_) { goto L_089B4130; }
    goto L_089B38DC;
L_089B38DC:;
    f1 = BITSF(LD32(s1+320));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f3, 14);
    goto L_089B38F4;
L_089B38F4:;
    cnd_ = fcc;
    ST32(s1+596, FBITS(f0));
    if (cnd_) { goto L_089B3900; }
    goto L_089B38FC;
L_089B38FC:;
    f3 = f0;
    goto L_089B3900;
L_089B3900:;
    ST32(s1+596, FBITS(f3));
    f0 = BITSF(LD32(s1+324));
    goto L_089B3908;
L_089B3908:;
    f2 = BITSF(LD32(s4-31328));
    f1 = BITSF(LD32(s1+328));
    f0 = f5 * f0;
    f3 = BITSF(LD32(s1+592));
    f1 = f4 * f1;
    f5 = BITSF(LD32(s1+332));
    f0 = f0 * f2;
    f4 = BITSF(LD32(s1+596));
    f1 = f1 * f2;
    f6 = BITSF(LD32(s1+340));
    f0 = f3 - f0;
    f2 = f5;
    f1 = f4 - f1;
    fcc = FCMP(f5, f0, 14);
    ST32(s1+592, FBITS(f0));
    cnd_ = fcc;
    ST32(s1+596, FBITS(f1));
    if (cnd_) { goto L_089B3950; }
    goto L_089B394C;
L_089B394C:;
    f5 = f0;
    goto L_089B3950;
L_089B3950:;
    f3 = BITSF(FBITS(f2) ^ 0x80000000u);
    fcc = FCMP(f5, f3, 14);
    cnd_ = fcc;
    ST32(s1+592, FBITS(f5));
    if (cnd_) { goto L_089B3968; }
    goto L_089B3964;
L_089B3964:;
    f3 = f5;
    goto L_089B3968;
L_089B3968:;
    fcc = FCMP(f6, f1, 14);
    f0 = f6;
    cnd_ = fcc;
    ST32(s1+592, FBITS(f3));
    if (cnd_) { goto L_089B397C; }
    goto L_089B3978;
L_089B3978:;
    f0 = f1;
    goto L_089B397C;
L_089B397C:;
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    fcc = FCMP(f0, f6, 14);
    cnd_ = fcc;
    ST32(s1+596, FBITS(f0));
    if (cnd_) { goto L_089B3994; }
    goto L_089B3990;
L_089B3990:;
    f6 = f0;
    goto L_089B3994;
L_089B3994:;
    f0 = BITSF(LD32(s1+728));
    f25 = BITSF(LD32(s5-5280));
    f2 = BITSF(LD32(s1+372));
    f1 = BITSF(LD32(s1+548));
    f0 = f25 - f0;
    f4 = BITSF(LD32(s1+348));
    f1 = f1 * f2;
    {u32 a_=sp+(448);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    f2 = f3 * f0;
    f3 = f6 * f0;
    f1 = f1 * f0;
    {u32 a_=sp+(576);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    ST32(sp+112, FBITS(f2));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+116, FBITS(f3));
    {u32 a_=sp+(592);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    ST32(sp+120, 0);
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
    {ST32(sp+(128),FBITS(v[96]));}
    {ST32(sp+(132),FBITS(v[97]));}
    {ST32(sp+(136),FBITS(v[98]));}
    {ST32(sp+(140),FBITS(v[100]));}
    {ST32(sp+(144),FBITS(v[101]));}
    {ST32(sp+(148),FBITS(v[102]));}
    {ST32(sp+(152),FBITS(v[104]));}
    {ST32(sp+(156),FBITS(v[105]));}
    {ST32(sp+(160),FBITS(v[106]));}
    {u32 a_=sp+(720);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(464);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    f18 = BITSF(FBITS(f21) ^ 0x80000000u);
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {u32 a_=sp+(736);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(848);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    f4 = f4 + f1;
    f5 = BITSF(LD32(s1+356));
    a1 = LD32(sp+128);
    a2 = LD32(sp+132);
    a3 = LD32(sp+136);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    t0 = LD32(sp+12);
    t6 = LD32(sp+140);
    t4 = LD32(sp+144);
    t5 = LD32(sp+148);
    t1 = LD32(sp+16);
    t2 = LD32(sp+20);
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {u32 a_=sp+(496);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(864);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(a1);}
    {u32 a_=sp+(624);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[69]=BITSF(a2);}
    {v[64]=BITSF(v0);}
    {v[70]=BITSF(a3);}
    {v[65]=BITSF(v1);}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {v[66]=BITSF(a0);}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(512);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {u32 a_=sp+(880);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(752);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {v[100]=BITSF(v0);}
    {v[96]=BITSF(a1);}
    {v[101]=BITSF(v1);}
    {v[97]=BITSF(a2);}
    {v[102]=BITSF(a0);}
    {v[98]=BITSF(a3);}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {v[108]=BITSF(t6);}
    {v[109]=BITSF(t4);}
    {v[110]=BITSF(t5);}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(816);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {v[104]=BITSF(t0);}
    {v[105]=BITSF(t1);}
    {v[106]=BITSF(t2);}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(688);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+152);
    a0 = LD32(sp+24);
    a1 = LD32(sp+28);
    a3 = LD32(sp+156);
    t3 = LD32(sp+160);
    a2 = LD32(sp+32);
    {u32 a_=sp+(528);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {u32 a_=sp+(768);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(896);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {v[100]=BITSF(v1);}
    {v[96]=BITSF(a0);}
    {v[101]=BITSF(a3);}
    {v[97]=BITSF(a1);}
    {v[102]=BITSF(t3);}
    {v[98]=BITSF(a2);}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    ST32(s1+596, FBITS(f6));
    f4 = f18 - f4;
    f5 = BITSF(FBITS(f5) ^ 0x80000000u);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=sp+(560);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    {u32 a_=sp+(448);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(576);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(464);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    v0 = 0 + 0;
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[108]=BITSF(t0);}
    {v[36]=BITSF(v0);}
    t0 = FBITS(f5);
    {v[37]=BITSF(t0);}
    t0 = FBITS(f4);
    {v[38]=BITSF(t0);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {t0=FBITS(v[34]);}
    f3 = BITSF(t0);
    {t0=FBITS(v[32]);}
    f1 = BITSF(t0);
    f2 = BITSF(t0);
    f24 = BITSF(0);
    t0 = FBITS(f1);
    {u32 a_=sp+(544);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(t0);}
    {t0=FBITS(v[33]);}
    f1 = BITSF(t0);
    f0 = BITSF(t0);
    {u32 a_=sp+(592);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    t0 = FBITS(f0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {v[1]=BITSF(t0);}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    t0 = FBITS(f3);
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {v[2]=BITSF(t0);}
    {v[104]=BITSF(t6);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[96]=o0;v[97]=o1;v[98]=o2;}
    {v[105]=BITSF(t4);}
    {t0=FBITS(v[96]);}
    {v[106]=BITSF(t5);}
    {v[109]=BITSF(t1);}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {v[110]=BITSF(t2);}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    ST32(sp+192, FBITS(f2));
    {u32 a_=sp+(848);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp+64, FBITS(f2));
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    ST32(sp+68, FBITS(f1));
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[108]=d0;v[109]=d1;v[110]=d2;v[111]=d3;}
    ST32(sp+72, FBITS(f3));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    f15 = BITSF(t0);
    ST32(sp+180, FBITS(f5));
    {u32 a_=sp+(784);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(912);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    ST32(sp+184, FBITS(f4));
    {v[72]=BITSF(v1);}
    {v[64]=BITSF(a0);}
    ST32(sp+196, FBITS(f1));
    {v[65]=BITSF(a1);}
    {u32 a_=sp+(672);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+200, FBITS(f3));
    {v[68]=BITSF(v0);}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(sp+192, t0);
    {v0=FBITS(v[98]);}
    {t0=FBITS(v[97]);}
    ST32(sp+176, FBITS(f24));
    f10 = BITSF(v0);
    f9 = BITSF(t0);
    f0 = BITSF(LD32(s1+344));
    f12 = BITSF(LD32(s1+352));
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f18 = f18 - f0;
    f12 = BITSF(FBITS(f12) ^ 0x80000000u);
    {v[73]=BITSF(a3);}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[74]=BITSF(t3);}
    v1 = FBITS(f12);
    a1 = FBITS(f18);
    {v[69]=BITSF(v1);}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[70]=BITSF(a1);}
    {float t0=v[68];float t1=v[69];float t2=v[70];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v1=FBITS(v[32]);}
    {t0=FBITS(v[33]);}
    f1 = BITSF(v1);
    f0 = BITSF(t0);
    {v0=FBITS(v[34]);}
    f6 = BITSF(v0);
    f11 = BITSF(LD32(sp+48));
    f7 = BITSF(LD32(sp+52));
    f8 = BITSF(LD32(sp+56));
    f5 = BITSF(v1);
    a1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[66]=BITSF(a2);}
    {u32 a_=sp+(800);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f6);
    {v[0]=BITSF(a1);}
    {float s0=v[84];float s1=v[85];float s2=v[86];float s3=v[87];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {v[1]=BITSF(v0);}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {v[2]=BITSF(v1);}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v1=FBITS(v[4]);}
    {a1=FBITS(v[5]);}
    {v0=FBITS(v[6]);}
    f0 = BITSF(a1);
    f16 = BITSF(v0);
    f1 = BITSF(v1);
    f13 = f7 + f0;
    f17 = f11 + f15;
    f14 = f8 + f16;
    f11 = f11 + f1;
    f7 = f7 + f9;
    f8 = f8 + f10;
    f4 = BITSF(t0);
    f22 = f17 - f11;
    f19 = f7 - f13;
    f21 = f8 - f14;
    f3 = BITSF(v1);
    {u32 a_=sp+(928);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f22);
    v0 = FBITS(f19);
    {v[0]=BITSF(a0);}
    v1 = FBITS(f21);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {t0=FBITS(v[0]);}
    f0 = BITSF(t0);
    f2 = BITSF(a1);
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    fcc = FCMP(f24, f0, 12);
    {u32 a_=sp+(848);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    ST32(sp+208, FBITS(f5));
    f23 = f25;
    a1 = D_08B1BC5C - (-17316);
    ST32(sp+96, FBITS(f17));
    ST32(sp+100, FBITS(f7));
    ST32(sp+104, FBITS(f8));
    ST32(sp+64, FBITS(f24));
    ST32(sp+68, FBITS(f12));
    ST32(sp+72, FBITS(f18));
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f6));
    ST32(sp+176, FBITS(f3));
    ST32(sp+180, FBITS(f2));
    ST32(sp+184, FBITS(f16));
    ST32(sp+192, FBITS(f11));
    ST32(sp+196, FBITS(f13));
    ST32(sp+200, FBITS(f14));
    ST32(sp+208, FBITS(f22));
    ST32(sp+212, FBITS(f19));
    cnd_ = fcc;
    ST32(sp+216, FBITS(f21));
    if (cnd_) { goto L_089B3FFC; }
    goto L_089B3E90;
L_089B3E90:;
    f0 = BITSF(LD32(a1-17316));
    goto L_089B3E94;
L_089B3E94:;
    f2 = BITSF(LD32(s5-5280));
    f4 = BITSF(LD32(sp+96));
    f5 = BITSF(LD32(sp+100));
    f3 = BITSF(LD32(sp+104));
    f2 = f2 - f0;
    f6 = BITSF(LD32(sp+200));
    f1 = BITSF(LD32(sp+192));
    f5 = f5 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(sp+196));
    f6 = f6 * f2;
    f1 = f1 * f2;
    f0 = f0 * f2;
    ST32(sp+80, FBITS(f4));
    f7 = f3 + f6;
    f4 = f4 + f1;
    f8 = f5 + f0;
    ST32(sp+84, FBITS(f5));
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f6));
    ST32(sp+176, FBITS(f4));
    ST32(sp+180, FBITS(f8));
    ST32(sp+184, FBITS(f7));
    {v[112]=BITSF(LD32(sp+(128)));}
    {v[113]=BITSF(LD32(sp+(132)));}
    {v[114]=BITSF(LD32(sp+(136)));}
    {v[116]=BITSF(LD32(sp+(140)));}
    {v[117]=BITSF(LD32(sp+(144)));}
    {v[118]=BITSF(LD32(sp+(148)));}
    {v[120]=BITSF(LD32(sp+(152)));}
    {v[121]=BITSF(LD32(sp+(156)));}
    {v[122]=BITSF(LD32(sp+(160)));}
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
    {ST32(sp+(288),FBITS(v[80]));}
    {ST32(sp+(292),FBITS(v[81]));}
    {ST32(sp+(296),FBITS(v[82]));}
    {ST32(sp+(300),FBITS(v[84]));}
    {ST32(sp+(304),FBITS(v[85]));}
    {ST32(sp+(308),FBITS(v[86]));}
    {ST32(sp+(312),FBITS(v[88]));}
    {ST32(sp+(316),FBITS(v[89]));}
    {ST32(sp+(320),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+288));
    f1 = BITSF(LD32(sp+292));
    f2 = BITSF(LD32(sp+296));
    f3 = BITSF(LD32(sp+300));
    f5 = BITSF(LD32(sp+304));
    f6 = BITSF(LD32(sp+308));
    ST32(s3+8, FBITS(f7));
    ST32(s3, FBITS(f4));
    ST32(s3+4, FBITS(f8));
    ST32(s2, FBITS(f0));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f2));
    ST32(s2+12, FBITS(f3));
    ST32(s2+16, FBITS(f5));
    f0 = BITSF(LD32(sp+312));
    f1 = BITSF(LD32(sp+320));
    ST32(s2+20, FBITS(f6));
    ST32(s2+24, FBITS(f0));
    f0 = BITSF(LD32(sp+316));
    ST32(s2+32, FBITS(f1));
    ST32(s2+28, FBITS(f0));
    sp = sp + 1088;
    return (rv_t){ v0, v1, f0 };
L_089B3FFC:;
    {u32 a_=sp+(944);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a0);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    s0 = sp + 224;
    a1 = sp + 192;
    v0 = LD32(v1-16);
    a2 = sp + 208;
    t0 = 0 + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    v0 = s1 + v0;
    f12 = BITSF(v1);
    f20 = f25 / f0;
    a3 = LD32(v0+4);
    a0 = s0 + 0;
    f0 = f22 * f20;
    f1 = f19 * f20;
    f2 = f21 * f20;
    ST32(sp+208, FBITS(f0));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f2));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089B4064;
L_089B4064:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B406C;
L_089B406C:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a1 = D_08B1BC5C - (-17316);
    if (cnd_) { goto L_089B40C0; }
    goto L_089B407C;
L_089B407C:;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(s1+364));
    f23 = f1 * f20;
    f0 = f0 * f20;
    f23 = f23 - f0;
    fcc = FCMP(f23, f24, 14);
    cnd_ = fcc;
    f2 = f24;
    if (cnd_) { goto L_089B40A4; }
    goto L_089B40A0;
L_089B40A0:;
    f2 = f23;
    goto L_089B40A4;
L_089B40A4:;
    fcc = FCMP(f25, f2, 14);
    cnd_ = fcc;
    f0 = f25;
    if (cnd_) { goto L_089B40B8; }
    goto L_089B40B4;
L_089B40B4:;
    f0 = f2;
    goto L_089B40B8;
L_089B40B8:;
    f23 = f0;
    a1 = D_08B1BC5C - (-17316);
    goto L_089B40C0;
L_089B40C0:;
    f2 = BITSF(LD32(a1-17316));
    fcc = FCMP(f23, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B40DC; }
    goto L_089B40D4;
L_089B40D4:;
    ST32(a1-17316, FBITS(f23));
    goto L_089B3E90;
L_089B40DC:;
    fcc = FCMP(f2, f23, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a1-17316));
    if (cnd_) { goto L_089B3E94; }
    goto L_089B40EC;
L_089B40EC:;
    f0 = BITSF(LD32(s1+368));
    f1 = BITSF(LD32(s4-31328));
    f0 = f0 * f1;
    f0 = f2 + f0;
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    ST32(a1-17316, FBITS(f0));
    if (cnd_) { goto L_089B4110; }
    goto L_089B410C;
L_089B410C:;
    ST32(a1-17316, FBITS(f23));
    goto L_089B4110;
L_089B4110:;
    f1 = BITSF(LD32(a1-17316));
    f0 = BITSF(LD32(s5-5280));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089B4128; }
    goto L_089B4128;
L_089B4128:;
    ST32(a1-17316, FBITS(f0));
    goto L_089B3E90;
L_089B4130:;
    f1 = BITSF(LD32(s1+320));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f3, f0, 14);
    goto L_089B38F4;
L_089B414C:;
    f1 = BITSF(LD32(s1+316));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f3, f0, 14);
    goto L_089B38A0;
L_089B4168:;
    s4 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(s4-31328));
    f1 = BITSF(LD32(s1+376));
    f2 = BITSF(LD32(s1+728));
    f3 = BITSF(0);
    f0 = f0 * f1;
    f2 = f2 - f0;
    fcc = FCMP(f2, f3, 14);
    cnd_ = fcc;
    ST32(s1+728, FBITS(f2));
    if (cnd_) { goto L_089B4198; }
    goto L_089B4194;
L_089B4194:;
    f3 = f2;
    goto L_089B4198;
L_089B4198:;
    ST32(s1+728, FBITS(f3));
    s5 = D_08AEEB60 - (-5280);
    goto L_089B2FD0;
L_089B41A4:;
    a1 = LD32(s1+448);
    goto L_089B4168;
}

/* 089B41AC */
rv_t func_089B41AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B41AC:;
    v0 = 1;
    ST8(a0+670, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089C83F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B41C8;
L_089B41C8:;
    ST8(s0+670, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B41DC */
rv_t func_089B41DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B41DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089CB944(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B41F0;
L_089B41F0:;
    a1 = 0 + 0;
    a0 = LD32(s0+40);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B41FC;
L_089B41FC:;
    v0 = D_08AEEB64 - (-5276);
    f12 = BITSF(LD32(v0-5276));
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B420C;
L_089B420C:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB27C(a0, a1);
    goto L_089B4218;
L_089B4218:;
    a0 = LD32(s0+40);
    a1 = 1;
    func_088BB2A0(a0, a1);
    goto L_089B4224;
L_089B4224:;
    v1 = LD32(s0);
    a0 = LD32(s0+40);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    func_088BB2C4(a0, a1);
    goto L_089B423C;
L_089B423C:;
    v1 = LD32(s0);
    v0 = LD32(v1+260);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B424C;
L_089B424C:;
    v1 = 0x72ab0000u;
    v1 = v1 | 0x24ac;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_089B426C; }
    goto L_089B425C;
L_089B425C:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+40); goto L_089B42A0; }
    goto L_089B426C;
L_089B426C:;
    a0 = LD32(s0+40);
    func_088BB24C(a0, a1);
    goto L_089B4274;
L_089B4274:;
    a0 = LD32(s0+40);
    v0 = func_088BB4E4(a0);
    goto L_089B427C;
L_089B427C:;
    v0 = v0 | 0x2000;
    a0 = LD32(s0+40);
    v0 = v0 & 0xffff;
    a1 = v0 + 0;
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4290;
L_089B4290:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B42A0:;
    a1 = 1;
    func_088BB24C(a0, a1);
    goto L_089B42A8;
L_089B42A8:;
    a0 = LD32(s0+40);
    a1 = 3;
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B42B4;
L_089B42B4:;
    goto L_089B4274;
}

/* 089B42BC */
void func_089B42BC(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B42BC:;
    v0 = D_08B285A0 - (-31328);
    f4 = BITSF(LD32(v0-31328));
    v0 = LD32(a0+844);
    sp = sp - 32;
    f0 = BITSF(LD32(a0+296));
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    f1 = BITSF(LD32(a0+484));
    if (cnd_) { goto L_089B42E0; }
    goto L_089B42DC;
L_089B42DC:;
    f0 = BITSF(LD32(a0+300));
    goto L_089B42E0;
L_089B42E0:;
    f0 = f0 * f1;
    f1 = BITSF(LD32(a0+540));
    f0 = f0 * f4;
    f1 = f1 + f0;
    ST32(a0+540, FBITS(f1));
    sp = sp + 32;
    return;
}

/* 089B42FC */
rv_t func_089B42FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_089B42FC:;
    sp = sp - 272;
    s1 = a0 + 0;
    s0 = sp + 64;
    v1 = LD32(a0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    t_ = v0;
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4330;
L_089B4330:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    v0 = D_08AEEB68 - (-5272);
    v1 = LD32(s1);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-5272));
    ST32(sp+4, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B436C;
L_089B436C:;
    a2 = LD32(s1);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(a2-16);
    {u32 a_=sp+(240);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a1 = s1 + a1;
    a3 = LD32(a1+4);
    {v[32]=BITSF(a0);}
    a1 = LD32(v0+32);
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[34]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a0);}
    a0 = LD32(v0+28);
    v0 = D_08AEEB6C - (-5268);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f12 = BITSF(LD32(v0-5268));
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+32);
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = LD32(sp+36);
    v0 = LD32(sp+40);
    {v[21]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    a2 = sp + 16;
    a1 = sp + 0;
    t0 = 0 + 0;
    a0 = s0 + 0;
    {v0=FBITS(v[17]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    ST32(sp+48, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+20, v0);
    ST32(sp+52, v0);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089B444C;
L_089B444C:;
    a0 = s0 + 0;
    v0 = func_08834F00(a0);
    goto L_089B4454;
L_089B4454:;
    v1 = LD32(s1);
    s0 = LD32(v0+4);
    a0 = s1 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B446C;
L_089B446C:;
    v1 = 999;
    if (v0 == 0) s0 = v1;
    v0 = s0 + 0;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
}

/* 089B448C */
rv_t func_089B448C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B448C:;
    sp = sp - 16;
    s1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B44CC; }
    goto L_089B44B0;
L_089B44B0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC280(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B44B8;
L_089B44B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B44CC:;
    func_089C9D08(a0);
    goto L_089B44D4;
L_089B44D4:;
    a0 = s0 + 0;
    func_089CB260(a0);
    goto L_089B44DC;
L_089B44DC:;
    v1 = LD32(s0+844);
    v0 = (v1 >> 17) & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B44F8; }
    goto L_089B44EC;
L_089B44EC:;
    v0 = v1 | s1;
    ST32(s0+844, v0);
    goto L_089B44B0;
L_089B44F8:;
    v0 = func_089C5CE4(a0, 0, 0, 0);
    goto L_089B4500;
L_089B4500:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 1;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089B4510;
L_089B4510:;
    v1 = LD32(s0+844);
    goto L_089B44EC;
}

/* 089B4518 */
rv_t func_089B4518(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B4518:;
    sp = sp - 16;
    v1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B4550; }
    goto L_089B4538;
L_089B4538:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC288(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4540;
L_089B4540:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B4550:;
    func_089C9E28(a0);
    goto L_089B4558;
L_089B4558:;
    a0 = s0 + 0;
    func_089CB2E0(a0);
    goto L_089B4560;
L_089B4560:;
    v1 = LD32(s0+844);
    v0 = (v1 >> 17) & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B457C; }
    goto L_089B4570;
L_089B4570:;
    v1 = (v1 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s0+844, v1);
    goto L_089B4538;
L_089B457C:;
    v0 = func_089C5CBC(a0, 0, 0, 0);
    goto L_089B4584;
L_089B4584:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 1;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089B4594;
L_089B4594:;
    v1 = LD32(s0+844);
    goto L_089B4570;
}

/* 089B459C */
rv_t func_089B459C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B459C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C9870(a0, t1, t2, t3);
    goto L_089B45B0;
L_089B45B0:;
    a0 = s0 + 0;
    v0 = func_089C5CBC(a0, 0, 0, 0);
    goto L_089B45B8;
L_089B45B8:;
    a1 = v0 + 0;
    a2 = 1;
    a0 = s0 + 0;
    f0 = func_089C90BC(a0, a1, a2);
    goto L_089B45C8;
L_089B45C8:;
    a0 = s0 + 0;
    func_089B4EAC(a0, 0, 0, 0);
    goto L_089B45D0;
L_089B45D0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC290(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B45D8;
L_089B45D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B45E8 */
void func_089B45E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B45E8:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = func_089C6924(a0, t1, t2, t3);
    goto L_089B460C;
L_089B460C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_089C5CBC(a0, 0, 0, 0);
    goto L_089B4618;
L_089B4618:;
    a3 = LD32(s1);
    s3 = v0 + 0;
    v0 = LD32(a3-12);
    v0 = s1 + v0;
    v1 = LD32(v0+100);
    a0 = LD32(v1+52);
    cnd_ = a0 == 0;
    s2 = v1 + 52;
    if (cnd_) { goto L_089B4664; }
    goto L_089B4638;
L_089B4638:;
    v0 = a0 + 0;
    v1 = LD32(v0);
    goto L_089B4640;
L_089B4640:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_089B4670; }
    goto L_089B4658;
L_089B4658:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089B4640; }
    goto L_089B4664;
L_089B4664:;
    a0 = LD32(s2+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089B47E0; }
    goto L_089B4670;
L_089B4670:;
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089B467C; }
    goto L_089B4678;
L_089B4678:;
    a0 = LD32(a2);
    goto L_089B467C;
L_089B467C:;
    v0 = LD32(a3-12);
    s4 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(s4-31328));
    v0 = s1 + v0;
    cnd_ = a0 == 0;
    ST32(v0+200, FBITS(f0));
    if (cnd_) { goto L_089B4714; }
    goto L_089B4694;
L_089B4694:;
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B46A4;
L_089B46A4:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089B46CC; }
    goto L_089B46AC;
L_089B46AC:;
    sp = sp + 32;
    return;
L_089B46CC:;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B46D8;
L_089B46D8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B46E4; }
    goto L_089B46E0;
L_089B46E0:;
    v1 = LD32(v0);
    goto L_089B46E4;
L_089B46E4:;
    cnd_ = v1 == 0;
    v0 = D_08AEEB70 - (-5264);
    if (cnd_) { goto L_089B46F4; }
    goto L_089B46EC;
L_089B46EC:;
    ST32(s1+856, 0);
    goto L_089B46AC;
L_089B46F4:;
    f12 = BITSF(LD32(v0-5264));
    a1 = s3 + 0;
    a0 = s1 + 0;
    a2 = 1;
    a3 = 0 + 0;
    func_089C8FD4(a0, a1, a2, a3);
    goto L_089B470C;
L_089B470C:;
    ST32(s1+856, 0);
    goto L_089B46AC;
L_089B4714:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B4724;
L_089B4724:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B4730; }
    goto L_089B472C;
L_089B472C:;
    v1 = LD32(v0);
    goto L_089B4730;
L_089B4730:;
    cnd_ = v1 == 0;
    v0 = D_08AEEB70 - (-5264);
    if (cnd_) { goto L_089B47C0; }
    goto L_089B4738;
L_089B4738:;
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
    v0 = D_08AEEB78 - (-5256);
    f2 = BITSF(LD32(s4-31328));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-5256));
    v0 = D_08AEEB74 - (-5260);
    a0 = a0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-5260));
    ST32(a2+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_089B46AC; }
    goto L_089B4798;
L_089B4798:;
    v0 = D_08AEEB70 - (-5264);
    f12 = BITSF(LD32(v0-5264));
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_089C8FD4(a0, a1, a2, a3);
    goto L_089B47B4;
L_089B47B4:;
    v0 = 5;
    ST32(s1+856, v0);
    goto L_089B46AC;
L_089B47C0:;
    f12 = BITSF(LD32(v0-5264));
    a1 = s3 + 0;
    a0 = s1 + 0;
    a2 = 1;
    a3 = 0 + 0;
    func_089C8FD4(a0, a1, a2, a3);
    goto L_089B47D8;
L_089B47D8:;
    ST32(s1+856, 0);
    goto L_089B4738;
L_089B47E0:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B47EC;
L_089B47EC:;
    a3 = LD32(s1);
    a2 = v0 + 0;
    goto L_089B4670;
}

/* 089B47F8 */
u32 func_089B47F8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089B47F8:;
    v0 = D_08AEEB7C - (-5252);
    f0 = BITSF(LD32(v0-5252));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    v1 = 2;
    if (cnd_) { goto L_089B4890; }
    goto L_089B4810;
L_089B4810:;
    v0 = D_08AEEB80 - (-5248);
    f0 = BITSF(LD32(v0-5248));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_089B4890; }
    goto L_089B4828;
L_089B4828:;
    v0 = D_08AEEB84 - (-5244);
    f0 = BITSF(LD32(v0-5244));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    v1 = 4;
    if (cnd_) { goto L_089B4890; }
    goto L_089B4840;
L_089B4840:;
    v0 = D_08AEEB88 - (-5240);
    f0 = BITSF(LD32(v0-5240));
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    v1 = 3;
    if (cnd_) { goto L_089B4890; }
    goto L_089B4858;
L_089B4858:;
    v0 = D_08AEEB8C - (-5236);
    f1 = BITSF(LD32(a0+500));
    f0 = BITSF(LD32(v0-5236));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = 6;
    if (cnd_) { goto L_089B4890; }
    goto L_089B4874;
L_089B4874:;
    v0 = D_08AEEB90 - (-5232);
    f0 = BITSF(LD32(v0-5232));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v1 = 7;
    if (cnd_) { goto L_089B4890; }
    goto L_089B488C;
L_089B488C:;
    v1 = 0 + 0;
    goto L_089B4890;
L_089B4890:;
    v0 = v1 + 0;
    return v0;
}

/* 089B4898 */
void func_089B4898(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B4898:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = BITSF(LD32(a0+548));
    f12 = f20;
    v0 = func_089B47F8(a0, f12);
    goto L_089B48B8;
L_089B48B8:;
    a0 = LD32(s0+856);
    cnd_ = v0 == a0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089B4914; }
    goto L_089B48C4;
L_089B48C4:;
    v0 = v0 < 0x8u;
    cnd_ = v0 == 0;
    ST32(s0+856, v1);
    if (cnd_) { goto L_089B4954; }
    goto L_089B48D0;
L_089B48D0:;
    v0 = v1 << 2;
    v1 = D_08ADE50C - (-6900);
    v1 = v1 - 6900;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089B48ECu: goto L_089B48EC; case 0x089B4954u: goto L_089B4954; case 0x089B49BCu: goto L_089B49BC; case 0x089B49CCu: goto L_089B49CC; case 0x089B49DCu: goto L_089B49DC; case 0x089B49ECu: goto L_089B49EC; case 0x089B49FCu: goto L_089B49FC; case 0x089B4A0Cu: goto L_089B4A0C; default: rs_break(0, 0x089b48e4); }
L_089B48EC:;
    a0 = s0 + 0;
    v0 = func_089C5CBC(a0, 0, 0, 0);
    goto L_089B48F4;
L_089B48F4:;
    a1 = v0 + 0;
    goto L_089B48F8;
L_089B48F8:;
    v0 = D_08AEEB94 - (-5228);
    f12 = BITSF(LD32(v0-5228));
    a0 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    func_089C8FD4(a0, a1, a2, a3);
    goto L_089B4910;
L_089B4910:;
    a0 = LD32(s0+856);
    goto L_089B4914;
L_089B4914:;
    v0 = a0 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B4958; }
    goto L_089B4920;
L_089B4920:;
    v1 = D_08ADE52C - (-6868);
    v0 = a0 << 2;
    v1 = v1 - 6868;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089B493Cu: goto L_089B493C; case 0x089B4954u: goto L_089B4954; case 0x089B4968u: goto L_089B4968; case 0x089B498Cu: goto L_089B498C; case 0x089B4998u: goto L_089B4998; case 0x089B49ACu: goto L_089B49AC; default: rs_break(0, 0x089b4934); }
L_089B493C:;
    a0 = LD32(s0);
    v1 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v1-31328));
    v0 = LD32(a0-12);
    goto L_089B494C;
L_089B494C:;
    v0 = s0 + v0;
    ST32(v0+200, FBITS(f0));
    goto L_089B4954;
L_089B4954:;
    goto L_089B4958;
L_089B4958:;
    sp = sp + 32;
    return;
L_089B4968:;
    v0 = D_08AEEB98 - (-5224);
    f0 = BITSF(LD32(v0-5224));
    goto L_089B4970;
L_089B4970:;
    f12 = f20 * f0;
    goto L_089B4974;
L_089B4974:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    v1 = LD32(s0);
    f0 = f12 * f0;
    v0 = LD32(v1-12);
    goto L_089B494C;
L_089B498C:;
    v0 = D_08AEEB9C - (-5220);
    f0 = BITSF(LD32(v0-5220));
    goto L_089B4970;
L_089B4998:;
    v0 = D_08AEEBA0 - (-5216);
    f0 = BITSF(LD32(s0+500));
    f1 = BITSF(LD32(v0-5216));
    goto L_089B49A4;
L_089B49A4:;
    f12 = f0 * f1;
    goto L_089B4974;
L_089B49AC:;
    v0 = D_08AEEBA4 - (-5212);
    f0 = BITSF(LD32(s0+500));
    f1 = BITSF(LD32(v0-5212));
    goto L_089B49A4;
L_089B49BC:;
    a0 = s0 + 0;
    v0 = func_089C6974(a0, 0, 0, 0);
    goto L_089B49C4;
L_089B49C4:;
    a1 = v0 + 0;
    goto L_089B48F8;
L_089B49CC:;
    a0 = s0 + 0;
    v0 = func_089C694C(a0, 0, 0, 0);
    goto L_089B49D4;
L_089B49D4:;
    a1 = v0 + 0;
    goto L_089B48F8;
L_089B49DC:;
    a0 = s0 + 0;
    v0 = func_089C69C4(a0, 0, 0, 0);
    goto L_089B49E4;
L_089B49E4:;
    a1 = v0 + 0;
    goto L_089B48F8;
L_089B49EC:;
    a0 = s0 + 0;
    v0 = func_089C699C(a0, 0, 0, 0);
    goto L_089B49F4;
L_089B49F4:;
    a1 = v0 + 0;
    goto L_089B48F8;
L_089B49FC:;
    a0 = s0 + 0;
    v0 = func_089C69EC(a0, 0, 0, 0);
    goto L_089B4A04;
L_089B4A04:;
    a1 = v0 + 0;
    goto L_089B48F8;
L_089B4A0C:;
    a0 = s0 + 0;
    v0 = func_089C6A14(a0, 0, 0, 0);
    goto L_089B4A14;
L_089B4A14:;
    a1 = v0 + 0;
    goto L_089B48F8;
}

/* 089B4A1C */
void func_089B4A1C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089B4A1C:;
    sp = sp - 80;
    v0 = LD32(a0+844);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B4A90; }
    goto L_089B4A3C;
L_089B4A3C:;
    v0 = LD32(a0);
    f6 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f6, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = a0 + 552; goto L_089B4AA4; }
    goto L_089B4A60;
L_089B4A60:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+820));
    f1 = f6;
    f0 = f0 - f2;
    fcc = FCMP(f0, f6, 14);
    cnd_ = fcc;
    ST32(a0+820, FBITS(f0));
    if (cnd_) { goto L_089B4A88; }
    goto L_089B4A84;
L_089B4A84:;
    f1 = f0;
    goto L_089B4A88;
L_089B4A88:;
    ST32(s0+820, FBITS(f1));
    ST32(v1+200, FBITS(f2));
    goto L_089B4A90;
L_089B4A90:;
    sp = sp + 80;
    return;
L_089B4AA4:;
    v0 = LD32(a0+4);
    v1 = LD32(s0+552);
    a1 = LD32(a0+32);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {v[48]=BITSF(v1);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    v1 = LD32(a0+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(a0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a0+12);
    {v[16]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[17]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[18]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(a0+28);
    v0 = D_08AEEBAC - (-5204);
    a0 = s0 + 860;
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[33]=BITSF(v1);}
    f5 = BITSF(LD32(v0-5204));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = 0 + 0;
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(a1);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v0);}
    v1 = 0x3f800000u;
    {v[21]=BITSF(v0);}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    v0 = LD32(s0+860);
    {v[22]=BITSF(v1);}
    {v[24]=BITSF(v0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    v0 = LD32(a0+4);
    {v[25]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[26]=BITSF(v0);}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f2 = BITSF(v0);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f1 = BITSF(v0);
    ST32(sp+20, FBITS(f6));
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[24];float t1=v[25];float t2=v[26];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AEEBA8 - (-5208);
    f4 = BITSF(LD32(v0-5208));
    fcc = FCMP(f0, f5, 12);
    ST32(sp+16, FBITS(f6));
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    cnd_ = fcc;
    f20 = BITSF(LD32(s0+500));
    if (cnd_) { goto L_089B4BE0; }
    goto L_089B4BCC;
L_089B4BCC:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    f5 = f4;
    if (cnd_) { goto L_089B4BE0; }
    goto L_089B4BDC;
L_089B4BDC:;
    f5 = f0;
    goto L_089B4BE0;
L_089B4BE0:;
    v0 = FBITS(f5);
    {v[52]=BITSF(v0);}
    {float s0=v[52];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    {v[4]=1.57079632679f;}
    v1 = LD_U8(s0+195);
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    cnd_ = v1 != 0;
    f0 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_089B4C38; }
    goto L_089B4C18;
L_089B4C18:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    f0 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_089B4C38; }
    goto L_089B4C2C;
L_089B4C2C:;
    f0 = f1 / f2;
    ST32(s0+500, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    goto L_089B4C38;
L_089B4C38:;
    f1 = BITSF(LD32(sp+8));
    v0 = 999;
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    f0 = BITSF(LD32(sp));
    v1 = LD32(s0+524);
    cnd_ = v1 == v0;
    ST32(s0+860, FBITS(f0));
    if (cnd_) { goto L_089B4C68; }
    goto L_089B4C58;
L_089B4C58:;
    a0 = s0 + 0;
    func_089B4898(a0);
    goto L_089B4C60;
L_089B4C60:;
    ST32(s0+500, FBITS(f20));
    goto L_089B4A90;
L_089B4C68:;
    a0 = s0 + 0;
    func_089B45E8(a0, t1, t2, t3);
    goto L_089B4C70;
L_089B4C70:;
    ST32(s0+500, FBITS(f20));
    goto L_089B4A90;
}

/* 089B4C78 */
u64 func_089B4C78(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089B4C78:;
    sp = sp - 64;
    a2 = D_08C2AB58 - (-21672);
    v0 = a2 - 21672;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089B4D10; }
    goto L_089B4CC4;
L_089B4CC4:;
    a2 = LD32(a2-21672);
    a3 = a1 + 0;
    goto L_089B4CCC;
L_089B4CCC:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089B4D00; }
    goto L_089B4CE4;
L_089B4CE4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089B4D14; }
    goto L_089B4CF4;
L_089B4CF4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089B4CE4; }
    goto L_089B4D00;
L_089B4D00:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089B4CCC; }
    goto L_089B4D10;
L_089B4D10:;
    v1 = LD32(sp+8);
    goto L_089B4D14;
L_089B4D14:;
    cnd_ = v1 == 0;
    v0 = D_08AEEBB0 - (-5200);
    if (cnd_) { goto L_089B4DA8; }
    goto L_089B4D1C;
L_089B4D1C:;
    f20 = BITSF(LD32(v0-5200));
    a3 = 0 + 0;
    goto L_089B4D24;
L_089B4D24:;
    a1 = 32;
    a2 = 0 + 0;
    a0 = 0x8001;
    s1 = LD32(v1);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B4D38;
L_089B4D38:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089B4D78; }
    goto L_089B4D40;
L_089B4D40:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089B4D4C;
L_089B4D4C:;
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
    goto L_089B4D74;
L_089B4D74:;
    ST32(s0+8, v0);
    goto L_089B4D78;
L_089B4D78:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4D90;
L_089B4D90:;
    a0 = sp + 0;
    a1 = 1;
    func_08AC5524(a0, a1);
    goto L_089B4D9C;
L_089B4D9C:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089B4D24; }
    goto L_089B4DA8;
L_089B4DA8:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089B4E30; }
    goto L_089B4DBC;
L_089B4DBC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089B4E30; }
    goto L_089B4DC8;
L_089B4DC8:;
    v0 = LD32(s1);
    goto L_089B4DCC;
L_089B4DCC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089B4E20; }
    goto L_089B4DE0;
L_089B4DE0:;
    v0 = LD_U8(s0+8);
    goto L_089B4DE4;
L_089B4DE4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089B4E64; }
    goto L_089B4DEC;
L_089B4DEC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B4E54; }
    goto L_089B4DF4;
L_089B4DF4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089B4DFC;
L_089B4DFC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B4E08;
L_089B4E08:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089B4E14;
L_089B4E14:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089B4DE4; }
    goto L_089B4E1C;
L_089B4E1C:;
    v1 = LD32(s1+4);
    goto L_089B4E20;
L_089B4E20:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B4DCC; }
    goto L_089B4E30;
L_089B4E30:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089B4E54:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089B4DFC;
L_089B4E64:;
    s0 = LD32(s0+4);
    goto L_089B4E14;
}

/* 089B4E6C */
void func_089B4E6C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_089B4E6C:;
    v1 = LD32(a0+872);
    cnd_ = v1 == 0;
    v0 = D_08AEEBB4 - (-5196);
    if (cnd_) { goto L_089B4EA4; }
    goto L_089B4E78;
L_089B4E78:;
    f0 = BITSF(LD32(a0+548));
    f1 = BITSF(LD32(v0-5196));
    f0 = f0 * f1;
    ST32(v1+276, FBITS(f0));
    v0 = LD32(a0+876);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B4EA4; }
    goto L_089B4E94;
L_089B4E94:;
    ST32(v0+276, FBITS(f0));
    a0 = LD32(a0+880);
    cnd_ = a0 != 0;
    if (cnd_) { ST32(a0+276, FBITS(f0)); goto L_089B4EA4; }
    goto L_089B4EA4;
L_089B4EA4:;
    return;
}

/* 089B4EAC */
void func_089B4EAC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B4EAC:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = func_089C6B10(a0, t1, t2, t3);
    goto L_089B4ECC;
L_089B4ECC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B4EF0; }
    goto L_089B4ED4;
L_089B4ED4:;
    goto L_089B4ED8;
L_089B4ED8:;
    sp = sp + 32;
    return;
L_089B4EF0:;
    a0 = s2 + 0;
    v0 = func_089B1F60(a0, 0, 0, 0);
    goto L_089B4EF8;
L_089B4EF8:;
    s1 = v0 + 0;
    v0 = D_08B204FC - (1276);
    s3 = v0 + 1276;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B4F10;
L_089B4F10:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B4ED8; }
    goto L_089B4F18;
L_089B4F18:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4F20;
L_089B4F20:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4F30;
L_089B4F30:;
    ST32(s2+872, s0);
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4F3C;
L_089B4F3C:;
    a1 = LD32(s2+872);
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B4F50;
L_089B4F50:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089B4F80; }
    goto L_089B4F58;
L_089B4F58:;
    a0 = LD32(s2+872);
    goto L_089B4F5C;
L_089B4F5C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089B4F6C; }
    goto L_089B4F64;
L_089B4F64:;
    ST32(s2+872, 0);
    goto L_089B4ED4;
L_089B4F6C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4F78;
L_089B4F78:;
    ST32(s2+872, 0);
    goto L_089B4ED4;
L_089B4F80:;
    a0 = LD32(s0);
    a2 = 0xc3e10000u;
    v1 = LD32(v0-12);
    v0 = LD32(a0+12);
    a2 = a2 | 0xaf26;
    v1 = s2 + v1;
    a1 = LD32(v1+100);
    a0 = s0 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4FA8;
L_089B4FA8:;
    cnd_ = v0 != 0;
    a1 = 0xcc660000u;
    if (cnd_) { goto L_089B4FC8; }
    goto L_089B4FB0;
L_089B4FB0:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B4FC0;
L_089B4FC0:;
    a0 = LD32(s2+872);
    goto L_089B4F5C;
L_089B4FC8:;
    a0 = s0 + 0;
    a1 = a1 | 0x3845;
    func_0880D928(a0, a1);
    goto L_089B4FD4;
L_089B4FD4:;
    a0 = s2 + 0;
    v0 = func_089B1F88(a0, 0, 0, 0);
    goto L_089B4FDC;
L_089B4FDC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089B4ED4; }
    goto L_089B4FE4;
L_089B4FE4:;
    a0 = s3 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B4FF0;
L_089B4FF0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B4ED8; }
    goto L_089B4FF8;
L_089B4FF8:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5000;
L_089B5000:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5010;
L_089B5010:;
    ST32(s2+876, s0);
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B501C;
L_089B501C:;
    a1 = LD32(s2+876);
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5030;
L_089B5030:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089B5060; }
    goto L_089B5038;
L_089B5038:;
    a0 = LD32(s2+876);
    goto L_089B503C;
L_089B503C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089B504C; }
    goto L_089B5044;
L_089B5044:;
    ST32(s2+876, 0);
    goto L_089B4ED4;
L_089B504C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5058;
L_089B5058:;
    ST32(s2+876, 0);
    goto L_089B4ED4;
L_089B5060:;
    a0 = LD32(s0);
    a2 = 0xc3e10000u;
    v1 = LD32(v0-12);
    v0 = LD32(a0+12);
    a2 = a2 | 0xaf26;
    v1 = s2 + v1;
    a1 = LD32(v1+100);
    a0 = s0 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5088;
L_089B5088:;
    cnd_ = v0 != 0;
    a1 = 0xcc660000u;
    if (cnd_) { goto L_089B50A8; }
    goto L_089B5090;
L_089B5090:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B50A0;
L_089B50A0:;
    a0 = LD32(s2+876);
    goto L_089B503C;
L_089B50A8:;
    a0 = s0 + 0;
    a1 = a1 | 0x3846;
    func_0880D928(a0, a1);
    goto L_089B50B4;
L_089B50B4:;
    a0 = s2 + 0;
    v0 = func_089B1FB0(a0, 0, 0, 0);
    goto L_089B50BC;
L_089B50BC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089B4ED4; }
    goto L_089B50C4;
L_089B50C4:;
    a0 = s3 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B50D0;
L_089B50D0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B4ED8; }
    goto L_089B50D8;
L_089B50D8:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B50E0;
L_089B50E0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B50F0;
L_089B50F0:;
    ST32(s2+880, s0);
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B50FC;
L_089B50FC:;
    a1 = LD32(s2+880);
    s0 = v0 + 0;
    a0 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5110;
L_089B5110:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089B5140; }
    goto L_089B5118;
L_089B5118:;
    a0 = LD32(s2+880);
    goto L_089B511C;
L_089B511C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089B512C; }
    goto L_089B5124;
L_089B5124:;
    ST32(s2+880, 0);
    goto L_089B4ED4;
L_089B512C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5138;
L_089B5138:;
    ST32(s2+880, 0);
    goto L_089B4ED4;
L_089B5140:;
    a0 = LD32(s0);
    a2 = 0xc3e10000u;
    v1 = LD32(v0-12);
    v0 = LD32(a0+12);
    a2 = a2 | 0xaf26;
    v1 = s2 + v1;
    a1 = LD32(v1+100);
    a0 = s0 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5168;
L_089B5168:;
    cnd_ = v0 != 0;
    a1 = 0xcc660000u;
    if (cnd_) { goto L_089B5188; }
    goto L_089B5170;
L_089B5170:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5180;
L_089B5180:;
    a0 = LD32(s2+880);
    goto L_089B511C;
L_089B5188:;
    a0 = s0 + 0;
    a1 = a1 | 0x3847;
    func_0880D928(a0, a1);
    goto L_089B5194;
L_089B5194:;
    goto L_089B4ED8;
}

/* 089B519C */
rv_t func_089B519C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B519C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B52C0; }
    goto L_089B51D0;
L_089B51D0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEEBB8 - (-5192);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-5192));
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
    t0 = D_08C2AAA8 - (-21848);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2AAB8 - (-21832);
    a3 = D_08C2AAC8 - (-21816);
    v1 = t0 - 21848;
    a1 = v0 - 21832;
    a2 = a3 - 21816;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2AB58 - (-21672);
    s0 = s3 - 21672;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-21832, FBITS(f5));
    v0 = 4;
    ST32(t0-21848, FBITS(f1));
    ST32(a3-21816, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5288;
L_089B5288:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-21672, v0);
    if (cnd_) { goto L_089B52B4; }
    goto L_089B5298;
L_089B5298:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089B52A0;
L_089B52A0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089B52A0; }
    goto L_089B52B4;
L_089B52B4:;
    v0 = s3 - 21672;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089B52C0;
L_089B52C0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B52E4; }
    goto L_089B52D4;
L_089B52D4:;
    v0 = D_08C2AB58 - (-21672);
    a0 = LD32(v0-21672);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089B52FC; }
    goto L_089B52E4;
L_089B52E4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B52FC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5304;
L_089B5304:;
    goto L_089B52E4;
}

/* 089B530C */
rv_t func_089B530C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B530C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089B519C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5320;
L_089B5320:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B532C */
rv_t func_089B532C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B532C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089B519C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5340;
L_089B5340:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B534C */
rv_t func_089B534C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B534C:;
    sp = sp - 32;
    s4 = a0 + 620;
    s0 = D_08AFF2A0 - (-3424);
    s0 = s0 - 3424;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2AC18 - (-21480);
    func_08873E94(a0, a1);
    goto L_089B5384;
L_089B5384:;
    a0 = s1 + 544;
    a1 = s0 + 48;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089B5398;
L_089B5398:;
    a2 = 999;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089D00D0(a0, a1);
    goto L_089B53A8;
L_089B53A8:;
    v1 = D_08AFEFF8 - (-4104);
    v1 = v1 - 4104;
    v0 = v1 + 400;
    a1 = v1 + 604;
    ST32(s1+544, v0);
    v0 = (u32)-32739;
    a0 = 116;
    ST32(s1, v1);
    s2 = s3 - 21480;
    ST32(s1+620, a1);
    ST16(s4+8, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B53D8;
L_089B53D8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_0895ABCC(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B53E8;
L_089B53E8:;
    a1 = LD32(s1);
    ST32(s1+176, s0);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5410;
L_089B5410:;
    a0 = LD32(s3-21480);
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

/* 089B545C */
rv_t func_089B545C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B545C:;
    sp = sp - 32;
    v0 = D_08AFEFF8 - (-4104);
    v0 = v0 - 4104;
    a3 = v0 + 604;
    v1 = v0 + 400;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s2 = a0 + 544;
    s3 = a0 + 620;
    a2 = LD32(a0+172);
    ST32(a0+544, v1);
    a2 = a2 & 0x1;
    ST32(a0+620, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089B552C; }
    goto L_089B54AC;
L_089B54AC:;
    v0 = LD32(s1+176);
    goto L_089B54B0;
L_089B54B0:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B5514; }
    goto L_089B54B8;
L_089B54B8:;
    ST32(s1+176, 0);
    goto L_089B54BC;
L_089B54BC:;
    a0 = D_08C2AC18 - (-21480);
    s0 = D_08AFF2A0 - (-3424);
    a1 = s1 + 0;
    a0 = a0 - 21480;
    s0 = s0 - 3424;
    func_08AC5730(a0, a1, t1, t2, t3);
    goto L_089B54D4;
L_089B54D4:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089B54E4;
L_089B54E4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B54F0;
L_089B54F0:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B54F8;
L_089B54F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B5514:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5524;
L_089B5524:;
    ST32(s1+176, 0);
    goto L_089B54BC;
L_089B552C:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5534;
L_089B5534:;
    v0 = LD32(s1+176);
    goto L_089B54B0;
}

/* 089B553C */
rv_t func_089B553C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B553C:;
    sp = sp - 32;
    v0 = D_08AFEFF8 - (-4104);
    v0 = v0 - 4104;
    a3 = v0 + 604;
    v1 = v0 + 400;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s2 = a0 + 544;
    s3 = a0 + 620;
    a2 = LD32(a0+172);
    ST32(a0+544, v1);
    a2 = a2 & 0x1;
    ST32(a0+620, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089B5614; }
    goto L_089B558C;
L_089B558C:;
    v0 = LD32(s1+176);
    goto L_089B5590;
L_089B5590:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B55FC; }
    goto L_089B5598;
L_089B5598:;
    ST32(s1+176, 0);
    goto L_089B559C;
L_089B559C:;
    a0 = D_08C2AC18 - (-21480);
    s0 = D_08AFF2A0 - (-3424);
    a1 = s1 + 0;
    a0 = a0 - 21480;
    s0 = s0 - 3424;
    func_08AC5730(a0, a1, t1, t2, t3);
    goto L_089B55B4;
L_089B55B4:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089B55C4;
L_089B55C4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B55D0;
L_089B55D0:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B55D8;
L_089B55D8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B55E0;
L_089B55E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B55FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B560C;
L_089B560C:;
    ST32(s1+176, 0);
    goto L_089B559C;
L_089B5614:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B561C;
L_089B561C:;
    v0 = LD32(s1+176);
    goto L_089B5590;
}

/* 089B5624 */
rv_t func_089B5624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5624:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089D11E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5638;
L_089B5638:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5648;
L_089B5648:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D468C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5650;
L_089B5650:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B5660 */
rv_t func_089B5660(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5660:;
    sp = sp - 16;
    a2 = a0 + 208;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+208);
    a0 = 0x360000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x34ea;
    if (cnd_) { goto L_089B56A4; }
    goto L_089B568C;
L_089B568C:;
    ST32(s1, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B56A4:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a1 = LD32(v1+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B56B8;
L_089B56B8:;
    v0 = LD32(s0+208);
    goto L_089B568C;
}

/* 089B56C0 */
rv_t func_089B56C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B56C0:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089D1610(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B56E0;
L_089B56E0:;
    a0 = sp + 0;
    s1 = v0 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089B56F0;
L_089B56F0:;
    a1 = 0x2490000u;
    a0 = s0 + 0;
    a1 = a1 | 0x956f;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089B5704;
L_089B5704:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089B5734; }
    goto L_089B570C;
L_089B570C:;
    s1 = 0 + 0;
    goto L_089B5710;
L_089B5710:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5718;
L_089B5718:;
    v0 = s1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B5734:;
    v0 = func_0881B5C4(a0);
    goto L_089B573C;
L_089B573C:;
    ST32(s2+204, v0);
    goto L_089B5710;
}

/* 089B5744 */
void func_089B5744(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5744:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 648;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5768;
L_089B5768:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089B534C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5778;
L_089B5778:;
    a1 = s1 + 0;
    cnd_ = s2 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089B579C; }
    goto L_089B5784;
L_089B5784:;
    goto L_089B5788;
L_089B5788:;
    sp = sp + 16;
    return;
L_089B579C:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B57AC;
L_089B57AC:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B57B4;
L_089B57B4:;
    v0 = LD32(s2+232);
    a0 = s2 + 0;
    v0 = v0 | 0x4;
    ST32(s2+232, v0);
    { rv_t r_ = func_089D52E0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B57C8;
L_089B57C8:;
    goto L_089B5788;
}

/* 089B57D0 */
rv_t func_089B57D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B57D0:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B57F4;
L_089B57F4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D16F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5800;
L_089B5800:;
    a1 = LD32(s1+172);
    a0 = s0 + 0;
    a1 = (a1 >> 2) & 0x1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5810;
L_089B5810:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B5824 */
rv_t func_089B5824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B5824:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089B5844;
L_089B5844:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089B5844; }
    goto L_089B5868;
L_089B5868:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D1738(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5874;
L_089B5874:;
    v1 = LD32(sp);
    v0 = 1;
    cnd_ = v1 == v0;
    a2 = sp + 4;
    if (cnd_) { goto L_089B5898; }
    goto L_089B5884;
L_089B5884:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B5898:;
    a1 = 0 + 0;
    goto L_089B589C;
L_089B589C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089B589C; }
    goto L_089B58C0;
L_089B58C0:;
    v0 = LD32(sp+4);
    v1 = LD32(s1+172);
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s1+172, v1);
    goto L_089B5884;
}

/* 089B58D8 */
rv_t func_089B58D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089B58D8:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 089B58E0 */
rv_t func_089B58E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B58E0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089B5950; }
    goto L_089B58FC;
L_089B58FC:;
    s0 = LD32(a0+176);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5910;
L_089B5910:;
    v1 = LD32(s0);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5920;
L_089B5920:;
    v1 = LD32(s1+108);
    v0 = 999;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089B593C; }
    goto L_089B5934;
L_089B5934:;
    { u64 r_ = func_08956538(a0, a1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B593C;
L_089B593C:;
    goto L_089B5940;
L_089B5940:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B5950:;
    a0 = LD32(a0+176);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5964;
L_089B5964:;
    goto L_089B5940;
}

/* 089B596C */
rv_t func_089B596C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B596C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089D50F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5980;
L_089B5980:;
    a1 = 0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5998;
L_089B5998:;
    v0 = LD32(s0);
    a0 = D_08AEEBD8 - (-5160);
    f12 = BITSF(LD32(a0-5160));
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B59B4;
L_089B59B4:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB27C(a0, a1);
    goto L_089B59CC;
L_089B59CC:;
    a0 = LD32(s0);
    v0 = LD32(a0-16);
    v1 = LD32(a0-12);
    v0 = s0 + v0;
    v1 = s0 + v1;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    func_088BB2C4(a0, a1);
    goto L_089B59EC;
L_089B59EC:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB2A0(a0, a1);
    goto L_089B5A04;
L_089B5A04:;
    v0 = LD32(s0+208);
    v1 = 0x72ab0000u;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = v1 | 0x24ac;
    if (cnd_) { goto L_089B5A24; }
    goto L_089B5A18;
L_089B5A18:;
    v0 = LD32(v0);
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s0); goto L_089B5A34; }
    goto L_089B5A24;
L_089B5A24:;
    v0 = LD32(s0+228);
    v0 = (v0 >> 13) & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089B5A88; }
    goto L_089B5A34;
L_089B5A34:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB24C(a0, a1);
    goto L_089B5A44;
L_089B5A44:;
    v1 = LD32(s0);
    goto L_089B5A48;
L_089B5A48:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB4E4(a0);
    goto L_089B5A58;
L_089B5A58:;
    a0 = LD32(s0);
    v0 = v0 | 0x2000;
    v0 = v0 & 0xffff;
    v1 = LD32(a0-12);
    a1 = v0 + 0;
    v1 = s0 + v1;
    a0 = LD32(v1+4);
    { rv_t r_ = func_088BB4F0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5A78;
L_089B5A78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B5A88:;
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB24C(a0, a1);
    goto L_089B5A9C;
L_089B5A9C:;
    v1 = LD32(s0);
    a1 = 3;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5AB4;
L_089B5AB4:;
    v1 = LD32(s0);
    goto L_089B5A48;
}

/* 089B5ABC */
rv_t func_089B5ABC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B5ABC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B5BE0; }
    goto L_089B5AF0;
L_089B5AF0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEEBDC - (-5156);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-5156));
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
    t0 = D_08C2AB68 - (-21656);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2AB78 - (-21640);
    a3 = D_08C2AB88 - (-21624);
    v1 = t0 - 21656;
    a1 = v0 - 21640;
    a2 = a3 - 21624;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2AC18 - (-21480);
    s0 = s3 - 21480;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-21640, FBITS(f5));
    v0 = 4;
    ST32(t0-21656, FBITS(f1));
    ST32(a3-21624, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5BA8;
L_089B5BA8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-21480, v0);
    if (cnd_) { goto L_089B5BD4; }
    goto L_089B5BB8;
L_089B5BB8:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089B5BC0;
L_089B5BC0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089B5BC0; }
    goto L_089B5BD4;
L_089B5BD4:;
    v0 = s3 - 21480;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089B5BE0;
L_089B5BE0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B5C04; }
    goto L_089B5BF4;
L_089B5BF4:;
    v0 = D_08C2AC18 - (-21480);
    a0 = LD32(v0-21480);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089B5C1C; }
    goto L_089B5C04;
L_089B5C04:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B5C1C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5C24;
L_089B5C24:;
    goto L_089B5C04;
}

/* 089B5C2C */
rv_t func_089B5C2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5C2C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089B5ABC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5C40;
L_089B5C40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B5C4C */
rv_t func_089B5C4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5C4C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089B5ABC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5C60;
L_089B5C60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B5C6C */
void func_089B5C6C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089B5C6C:;
    sp = sp - 144;
    s5 = a0 + 1264;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08AFFEC0 - (-320);
    s0 = s0 - 320;
    s4 = s1 + 1000;
    s3 = D_08C2ACF8 - (-21256);
    func_08873BF8(a0);
    goto L_089B5CAC;
L_089B5CAC:;
    a1 = s0 + 48;
    a0 = s4 + 0;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089B5CBC;
L_089B5CBC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089C3E24(a0, a1);
    goto L_089B5CC8;
L_089B5CC8:;
    v1 = D_08AFFBE0 - (-1056);
    v1 = v1 - 1056;
    v0 = v1 + 596;
    ST32(s1, v1);
    a0 = v1 + 708;
    v1 = 1;
    ST32(s1+1000, v0);
    v0 = (u32)-32738;
    s2 = s3 - 21256;
    ST16(s5+8, v0);
    ST32(s1+1264, a0);
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
    goto L_089B5D1C;
L_089B5D1C:;
    a0 = LD32(s3-21256);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    {a0=FBITS(v[50]);}
    ST32(v0+4, a1);
    f0 = BITSF(a0);
    f2 = BITSF(0);
    ST32(s0, v0);
    {a0=FBITS(v[54]);}
    f10 = BITSF(a0);
    ST32(v0, s1);
    {a0=FBITS(v[48]);}
    f8 = BITSF(a0);
    ST8(v0+8, 0);
    {a0=FBITS(v[49]);}
    f6 = BITSF(a0);
    v0 = LD32(s1+848);
    {a0=FBITS(v[52]);}
    f7 = BITSF(a0);
    {a0=FBITS(v[53]);}
    f4 = BITSF(a0);
    {a0=FBITS(v[56]);}
    f5 = BITSF(a0);
    {a0=FBITS(v[57]);}
    f3 = BITSF(a0);
    v1 = s1 + 904;
    t0 = s1 + 856;
    f9 = f0;
    a1 = s1 + 868;
    a2 = s1 + 880;
    a3 = s1 + 892;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+848, v0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {v0=FBITS(v[58]);}
    ST32(t0+4, FBITS(f2));
    f1 = BITSF(v0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST32(t0+8, FBITS(f2));
    a0 = 124;
    ST32(a1+4, FBITS(f2));
    ST32(a1+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a3+4, FBITS(f2));
    ST32(s1+856, FBITS(f2));
    ST32(s1+868, FBITS(f2));
    ST32(s1+880, FBITS(f2));
    ST32(a3+8, FBITS(f2));
    ST32(s1+892, FBITS(f2));
    ST32(s1+904, FBITS(f8));
    ST32(v1+4, FBITS(f6));
    ST32(v1+8, FBITS(f9));
    ST32(v1+12, FBITS(f7));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f10));
    ST32(v1+24, FBITS(f5));
    ST32(v1+28, FBITS(f3));
    ST32(v1+32, v0);
    v0 = D_08AEEBFC - (-5124);
    f0 = BITSF(LD32(v0-5124));
    v0 = D_08AEEC00 - (-5120);
    ST32(s1+984, FBITS(f2));
    ST32(s1+940, FBITS(f0));
    f0 = BITSF(LD32(v0-5120));
    v0 = D_08AEEC04 - (-5116);
    ST32(s1+956, FBITS(f2));
    ST32(s1+944, FBITS(f0));
    f0 = BITSF(LD32(v0-5116));
    v0 = D_08AEEC08 - (-5112);
    ST32(s1+960, FBITS(f2));
    ST32(s1+948, FBITS(f0));
    f0 = BITSF(LD32(v0-5112));
    ST32(s1+964, FBITS(f2));
    ST32(s1+952, FBITS(f0));
    ST32(s1+968, 0);
    ST32(s1+972, 0);
    ST32(s1+976, 0);
    ST32(s1+980, 0);
    ST32(s1+988, 0);
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f6));
    ST32(sp+8, FBITS(f9));
    ST32(sp+12, FBITS(f7));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f10));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f1));
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5EA0;
L_089B5EA0:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0887872C(a0);
    goto L_089B5EAC;
L_089B5EAC:;
    v0 = (u32)-1;
    ST32(s1+992, s0);
    a0 = s1 + 0;
    ST32(s1+996, v0);
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B5EC0;
L_089B5EC0:;
    sp = sp + 144;
    return;
}

/* 089B5EE4 */
rv_t func_089B5EE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5EE4:;
    sp = sp - 16;
    v0 = D_08AFFBE0 - (-1056);
    v0 = v0 - 1056;
    s1 = a0 + 0;
    a1 = v0 + 708;
    v1 = v0 + 596;
    s0 = LD32(a0+992);
    ST32(s1, v0);
    a0 = s0 + 0;
    ST32(s1+1000, v1);
    cnd_ = s0 != 0;
    ST32(s1+1264, a1);
    if (cnd_) { goto L_089B5F88; }
    goto L_089B5F20;
L_089B5F20:;
    a0 = D_08C2ACF8 - (-21256);
    a1 = s1 + 0;
    a0 = a0 - 21256;
    func_08AC596C(a0, a1, t1, t2, t3);
    goto L_089B5F30;
L_089B5F30:;
    a0 = s1 + 0;
    func_089BA6AC(a0);
    goto L_089B5F38;
L_089B5F38:;
    s0 = D_08AFFEC0 - (-320);
    a0 = s1 + 0;
    func_089BA78C(a0);
    goto L_089B5F44;
L_089B5F44:;
    s0 = s0 - 320;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5F50;
L_089B5F50:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089B5F60;
L_089B5F60:;
    a1 = s0 + 0;
    a0 = s1 + 1000;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B5F6C;
L_089B5F6C:;
    a0 = s1 + 1264;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5F74;
L_089B5F74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B5F88:;
    func_08878768(a0, t1, t2, t3);
    goto L_089B5F90;
L_089B5F90:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B5F98;
L_089B5F98:;
    ST32(s1+992, 0);
    goto L_089B5F20;
}

/* 089B5FA0 */
rv_t func_089B5FA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B5FA0:;
    sp = sp - 16;
    v0 = D_08AFFBE0 - (-1056);
    v0 = v0 - 1056;
    s1 = a0 + 0;
    a1 = v0 + 708;
    v1 = v0 + 596;
    s0 = LD32(a0+992);
    ST32(s1, v0);
    a0 = s0 + 0;
    ST32(s1+1000, v1);
    cnd_ = s0 != 0;
    ST32(s1+1264, a1);
    if (cnd_) { goto L_089B604C; }
    goto L_089B5FDC;
L_089B5FDC:;
    a0 = D_08C2ACF8 - (-21256);
    a1 = s1 + 0;
    a0 = a0 - 21256;
    func_08AC596C(a0, a1, t1, t2, t3);
    goto L_089B5FEC;
L_089B5FEC:;
    a0 = s1 + 0;
    func_089BA6AC(a0);
    goto L_089B5FF4;
L_089B5FF4:;
    s0 = D_08AFFEC0 - (-320);
    a0 = s1 + 0;
    func_089BA78C(a0);
    goto L_089B6000;
L_089B6000:;
    s0 = s0 - 320;
    a0 = s1 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B600C;
L_089B600C:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089B601C;
L_089B601C:;
    a1 = s0 + 0;
    a0 = s1 + 1000;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B6028;
L_089B6028:;
    a0 = s1 + 1264;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6030;
L_089B6030:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6038;
L_089B6038:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B604C:;
    func_08878768(a0, t1, t2, t3);
    goto L_089B6054;
L_089B6054:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B605C;
L_089B605C:;
    ST32(s1+992, 0);
    goto L_089B5FDC;
}

/* 089B6064 */
float func_089B6064(float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_089B6064:;
    v0 = D_08AEEC0C - (-5108);
    f1 = BITSF(LD32(v0-5108));
    f0 = f12 * f1;
    return f0;
}

/* 089B6074 */
u32 func_089B6074(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6074:;
    sp = sp - 16;
    a1 = 0x37640000u;
    a1 = a1 | 0xbe30;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6090;
L_089B6090:;
    sp = sp + 16;
    return v0;
}

/* 089B609C */
u32 func_089B609C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B609C:;
    sp = sp - 16;
    a1 = 0x97f70000u;
    a1 = a1 | 0x5049;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B60B8;
L_089B60B8:;
    sp = sp + 16;
    return v0;
}

/* 089B60C4 */
float func_089B60C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B60C4:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x3c890000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xdd48;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B60E0;
L_089B60E0:;
    f12 = f0;
    f0 = func_089B6064(f12);
    goto L_089B60E8;
L_089B60E8:;
    sp = sp + 16;
    return f0;
}

/* 089B60F4 */
float func_089B60F4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B60F4:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0xe7e0000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xc6da;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6110;
L_089B6110:;
    f12 = f0;
    f0 = func_089B6064(f12);
    goto L_089B6118;
L_089B6118:;
    sp = sp + 16;
    return f0;
}

/* 089B6124 */
float func_089B6124(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6124:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0x3c890000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xdd49;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6140;
L_089B6140:;
    f12 = f0;
    f0 = func_089B6064(f12);
    goto L_089B6148;
L_089B6148:;
    sp = sp + 16;
    return f0;
}

/* 089B6154 */
float func_089B6154(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6154:;
    sp = sp - 16;
    f12 = BITSF(0);
    a1 = 0xe7e0000u;
    a0 = LD32(a0+588);
    a1 = a1 | 0xc6db;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6170;
L_089B6170:;
    f12 = f0;
    f0 = func_089B6064(f12);
    goto L_089B6178;
L_089B6178:;
    sp = sp + 16;
    return f0;
}

/* 089B6184 */
u32 func_089B6184(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6184:;
    sp = sp - 16;
    a1 = 0x897f0000u;
    a1 = a1 | 0xd9df;
    a0 = LD32(a0+588);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B61A0;
L_089B61A0:;
    sp = sp + 16;
    return v0;
}

/* 089B61AC */
rv_t func_089B61AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B61AC:;
    sp = sp - 32;
    v0 = 90;
    s1 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B61EC; }
    goto L_089B61D0;
L_089B61D0:;
    { rv_t r_ = func_089C7A00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B61D8;
L_089B61D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B61EC:;
    v1 = LD32(a1+24);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B623C; }
    goto L_089B61F8;
L_089B61F8:;
    v0 = LD_U8(s0+195);
    a0 = v1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089B6214; }
    goto L_089B6208;
L_089B6208:;
    v0 = LD_U8(s0+124);
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s1+8)); goto L_089B6304; }
    goto L_089B6214;
L_089B6214:;
    a2 = LD32(s0+988);
    f12 = BITSF(LD32(s1+8));
    a2 = a2 ^ 0x10;
    a2 = (a2 >> 4) & 0x1;
    func_089BB8C4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089B6228;
L_089B6228:;
    v0 = LD_U8(s0+124);
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B6244; }
    goto L_089B6238;
L_089B6238:;
    a0 = s0 + 0;
    goto L_089B623C;
L_089B623C:;
    a1 = s1 + 0;
    goto L_089B61D0;
L_089B6244:;
    v0 = LD32(s0);
    v1 = LD32(v0+276);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6254;
L_089B6254:;
    f0 = BITSF(LD32(sp+4));
    v0 = s0 + 540;
    ST32(v0+4, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(v0+8, FBITS(f0));
    f0 = BITSF(LD32(sp));
    v1 = LD32(s0);
    ST32(s0+540, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6280;
L_089B6280:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v1 = s0 + 552;
    ST32(v1+32, FBITS(f0));
    f0 = BITSF(LD32(v0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    ST32(s0+552, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B62DC;
L_089B62DC:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0));
    v0 = s0 + 528;
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    v0 = 1;
    ST32(s0+528, FBITS(f2));
    ST8(s0+124, v0);
    goto L_089B6238;
L_089B6304:;
    a1 = s0 + 0;
    func_089BB9B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089B630C;
L_089B630C:;
    a0 = s0 + 0;
    goto L_089B623C;
}

/* 089B6314 */
void func_089B6314(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6314:;
    sp = sp - 16;
    a1 = LD32(a0+988);
    v0 = a1 & 0x2;
    cnd_ = v0 == 0;
    a1 = (a1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    if (cnd_) { goto L_089B63FC; }
    goto L_089B6338;
L_089B6338:;
    v1 = LD32(a0);
    ST32(a0+988, a1);
    a1 = 0xacc70000u;
    a1 = a1 | 0x5fa6;
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B63FC; }
    goto L_089B635C;
L_089B635C:;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6364;
L_089B6364:;
    a1 = 0x65b0000u;
    a0 = s0 + 0;
    a1 = a1 | 0xcc42;
    s1 = v0 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6378;
L_089B6378:;
    s2 = v0 + 0;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089B63BC; }
    goto L_089B6384;
L_089B6384:;
    v1 = LD32(s1);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6394;
L_089B6394:;
    s0 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B63A4;
L_089B63A4:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B63BC; }
    goto L_089B63AC;
L_089B63AC:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B63BC;
L_089B63BC:;
    cnd_ = s2 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089B63FC; }
    goto L_089B63C4;
L_089B63C4:;
    v1 = LD32(s2);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B63D4;
L_089B63D4:;
    s0 = v0 + 0;
    a0 = s2 + 0;
    a1 = 1;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B63E4;
L_089B63E4:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B63FC; }
    goto L_089B63EC;
L_089B63EC:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B63FC;
L_089B63FC:;
    sp = sp + 16;
    return;
}

/* 089B6414 */
void func_089B6414(void)
{
L_089B6414:;
    return;
}

/* 089B641C */
void func_089B641C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B641C:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = func_089C669C(a0, t1, t2, t3);
    goto L_089B6438;
L_089B6438:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B644C;
L_089B644C:;
    cnd_ = v0 == 0;
    a0 = 372;
    if (cnd_) { goto L_089B649C; }
    goto L_089B6454;
L_089B6454:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B645C;
L_089B645C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B646C;
L_089B646C:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6474;
L_089B6474:;
    a0 = v0 + 0;
    a2 = 1;
    a1 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6488;
L_089B6488:;
    a2 = 0x10000u;
    a0 = s1 + 0;
    a2 = a2 | 0x7c13;
    cnd_ = s1 != 0;
    a3 = 1;
    if (cnd_) { goto L_089B64B4; }
    goto L_089B649C;
L_089B649C:;
    goto L_089B64A0;
L_089B64A0:;
    sp = sp + 16;
    return;
L_089B64B4:;
    v0 = LD32(s2);
    a1 = LD32(s1);
    v1 = LD32(v0-12);
    v0 = LD32(a1+12);
    v1 = s2 + v1;
    t_ = v0;
    a1 = LD32(v1+100);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B64D0;
L_089B64D0:;
    a1 = 0xacc70000u;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = a1 | 0x5fa6;
    if (cnd_) { goto L_089B649C; }
    goto L_089B64E0;
L_089B64E0:;
    func_0880D928(a0, a1);
    goto L_089B64E8;
L_089B64E8:;
    goto L_089B64A0;
}

/* 089B64F0 */
void func_089B64F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B64F0:;
    sp = sp - 16;
    s2 = a0 + 0;
    v0 = func_089C6674(a0, t1, t2, t3);
    goto L_089B650C;
L_089B650C:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6520;
L_089B6520:;
    cnd_ = v0 == 0;
    a0 = 372;
    if (cnd_) { goto L_089B6570; }
    goto L_089B6528;
L_089B6528:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6530;
L_089B6530:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6540;
L_089B6540:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6548;
L_089B6548:;
    a0 = v0 + 0;
    a2 = 1;
    a1 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B655C;
L_089B655C:;
    a2 = 0x10000u;
    a0 = s1 + 0;
    a2 = a2 | 0xc211;
    cnd_ = s1 != 0;
    a3 = 1;
    if (cnd_) { goto L_089B6588; }
    goto L_089B6570;
L_089B6570:;
    goto L_089B6574;
L_089B6574:;
    sp = sp + 16;
    return;
L_089B6588:;
    v0 = LD32(s2);
    a1 = LD32(s1);
    v1 = LD32(v0-12);
    v0 = LD32(a1+12);
    v1 = s2 + v1;
    t_ = v0;
    a1 = LD32(v1+100);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B65A4;
L_089B65A4:;
    a1 = 0x65b0000u;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = a1 | 0xcc42;
    if (cnd_) { goto L_089B6570; }
    goto L_089B65B4;
L_089B65B4:;
    func_0880D928(a0, a1);
    goto L_089B65BC;
L_089B65BC:;
    goto L_089B6574;
}

/* 089B65C4 */
void func_089B65C4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B65C4:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = func_089C6674(a0, t1, t2, t3);
    goto L_089B65E8;
L_089B65E8:;
    a0 = s2 + 0;
    s1 = v0 + 0;
    v0 = func_089C669C(a0, 0, 0, 0);
    goto L_089B65F4;
L_089B65F4:;
    s4 = v0 + 0;
    v0 = D_08B204FC - (1276);
    s3 = v0 + 1276;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B660C;
L_089B660C:;
    cnd_ = v0 == 0;
    a0 = 372;
    if (cnd_) { goto L_089B665C; }
    goto L_089B6614;
L_089B6614:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B661C;
L_089B661C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B662C;
L_089B662C:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6634;
L_089B6634:;
    a0 = v0 + 0;
    a2 = 1;
    a1 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6648;
L_089B6648:;
    a2 = 0x10000u;
    a3 = 1;
    a2 = a2 | 0xc211;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089B667C; }
    goto L_089B665C;
L_089B665C:;
    goto L_089B6660;
L_089B6660:;
    sp = sp + 32;
    return;
L_089B667C:;
    v0 = LD32(s2);
    a1 = LD32(s1);
    v1 = LD32(v0-12);
    v0 = LD32(a1+12);
    v1 = s2 + v1;
    t_ = v0;
    a1 = LD32(v1+100);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6698;
L_089B6698:;
    a1 = 0x65b0000u;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = a1 | 0xcc42;
    if (cnd_) { goto L_089B665C; }
    goto L_089B66A8;
L_089B66A8:;
    func_0880D928(a0, a1);
    goto L_089B66B0;
L_089B66B0:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08805940(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B66BC;
L_089B66BC:;
    cnd_ = v0 == 0;
    a0 = 372;
    if (cnd_) { goto L_089B665C; }
    goto L_089B66C4;
L_089B66C4:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B66CC;
L_089B66CC:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B66DC;
L_089B66DC:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B66E4;
L_089B66E4:;
    a0 = v0 + 0;
    a2 = 1;
    a1 = s0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B66F8;
L_089B66F8:;
    a2 = 0x10000u;
    a0 = s1 + 0;
    a2 = a2 | 0x7c13;
    cnd_ = s1 == 0;
    a3 = 1;
    if (cnd_) { goto L_089B665C; }
    goto L_089B670C;
L_089B670C:;
    v0 = LD32(s2);
    a1 = LD32(s1);
    v1 = LD32(v0-12);
    v0 = LD32(a1+12);
    v1 = s2 + v1;
    t_ = v0;
    a1 = LD32(v1+100);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6728;
L_089B6728:;
    a1 = 0xacc70000u;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = a1 | 0x5fa6;
    if (cnd_) { goto L_089B665C; }
    goto L_089B6738;
L_089B6738:;
    func_0880D928(a0, a1);
    goto L_089B6740;
L_089B6740:;
    goto L_089B6660;
}

/* 089B6748 */
u32 func_089B6748(u32 a0)
{
    u32 v0 = 0;
L_089B6748:;
    v0 = LD32(a0+972);
    return v0;
}

/* 089B6750 */
void func_089B6750(u32 a0, u32 a1)
{
L_089B6750:;
    ST32(a0+972, a1);
    return;
}

/* 089B6758 */
void func_089B6758(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6758:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089C6674(a0, t1, t2, t3);
    goto L_089B6770;
L_089B6770:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_089C669C(a0, 0, 0, 0);
    goto L_089B677C;
L_089B677C:;
    v1 = v0 + 0;
    v0 = s1 | v0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089B67B0; }
    goto L_089B6790;
L_089B6790:;
    a0 = s0 + 0;
    cnd_ = s1 == 0;
    a1 = 1;
    if (cnd_) { goto L_089B67B0; }
    goto L_089B679C;
L_089B679C:;
    a0 = s0 + 0;
    cnd_ = v1 == 0;
    a1 = 2;
    if (cnd_) { goto L_089B67B0; }
    goto L_089B67A8;
L_089B67A8:;
    a0 = s0 + 0;
    a1 = 3;
    goto L_089B67B0;
L_089B67B0:;
    func_089B6750(a0, a1);
    goto L_089B67B8;
L_089B67B8:;
    sp = sp + 16;
    return;
}

/* 089B67CC */
void func_089B67CC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B67CC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+988);
    v0 = v0 | 0x2;
    ST32(a0+988, v0);
    v0 = func_089B6748(a0);
    goto L_089B67EC;
L_089B67EC:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B6854; }
    goto L_089B67FC;
L_089B67FC:;
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_089B6844; }
    goto L_089B6804;
L_089B6804:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089B6834; }
    goto L_089B680C;
L_089B680C:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089B6824; }
    goto L_089B6814;
L_089B6814:;
    goto L_089B6818;
L_089B6818:;
    sp = sp + 16;
    return;
L_089B6824:;
    func_089B65C4(a0, 0, 0, 0);
    goto L_089B682C;
L_089B682C:;
    goto L_089B6818;
L_089B6834:;
    func_089B64F0(a0, 0, 0, 0);
    goto L_089B683C;
L_089B683C:;
    goto L_089B6818;
L_089B6844:;
    func_089B6414();
    goto L_089B684C;
L_089B684C:;
    goto L_089B6818;
L_089B6854:;
    func_089B641C(a0, 0, 0, 0);
    goto L_089B685C;
L_089B685C:;
    goto L_089B6818;
}

/* 089B6864 */
rv_t func_089B6864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B6864:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089B6074(a0, t1, t2, t3);
    goto L_089B6878;
L_089B6878:;
    v1 = LD32(s0+844);
    v1 = (v1 & ~(0x1u << 15)) | ((v0 & 0x1) << 15);
    ST32(s0+844, v1);
    a0 = s0 + 0;
    f0 = func_089B60C4(a0, 0, 0, 0);
    goto L_089B688C;
L_089B688C:;
    ST32(s0+940, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089B60F4(a0, 0, 0, 0);
    goto L_089B6898;
L_089B6898:;
    ST32(s0+944, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089B6124(a0, 0, 0, 0);
    goto L_089B68A4;
L_089B68A4:;
    ST32(s0+948, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089B6154(a0, 0, 0, 0);
    goto L_089B68B0;
L_089B68B0:;
    ST32(s0+952, FBITS(f0));
    a0 = s0 + 0;
    { rv_t r_ = func_089C4A2C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B68BC;
L_089B68BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B68CC */
rv_t func_089B68CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B68CC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 1284;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B68E8;
L_089B68E8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_089B5C6C(a0);
    goto L_089B68F4;
L_089B68F4:;
    v1 = LD32(s0);
    a1 = s1 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6908;
L_089B6908:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E738(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6918;
L_089B6918:;
    a1 = LD32(s0+980);
    a0 = 0xcc980000u;
    a2 = s0 + 588;
    a0 = a0 | 0x70f0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B692C;
L_089B692C:;
    v1 = LD32(s0);
    v0 = LD32(v1+456);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B693C;
L_089B693C:;
    v1 = LD32(s0);
    v0 = LD32(v1+480);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B694C;
L_089B694C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B6960 */
rv_t func_089B6960(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089B6960:;
    sp = sp - 48;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089B6D6C; }
    goto L_089B6980;
L_089B6980:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DBCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6988;
L_089B6988:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089B69A0; }
    goto L_089B6998;
L_089B6998:;
    v0 = LD_U8(v0+68);
    s0 = 0 < v0;
    goto L_089B69A0;
L_089B69A0:;
    v0 = LD32(s1+844);
    ST32(s1+488, 0);
    v0 = v0 & 0x8;
    ST32(s1+480, 0);
    ST32(s1+484, 0);
    cnd_ = v0 == 0;
    ST32(s1+492, 0);
    if (cnd_) { goto L_089B69D4; }
    goto L_089B69BC;
L_089B69BC:;
    goto L_089B69C0;
L_089B69C0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089B69D4:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B69E8;
L_089B69E8:;
    ST32(s1+492, FBITS(f0));
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6A00;
L_089B6A00:;
    ST32(s1+480, FBITS(f0));
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6A18;
L_089B6A18:;
    v1 = D_08AEEC10 - (-5104);
    f1 = BITSF(LD32(s1+480));
    f2 = BITSF(LD32(v1-5104));
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(s1+484, FBITS(f0));
    if (cnd_) { goto L_089B6D4C; }
    goto L_089B6A34;
L_089B6A34:;
    ST32(s1+480, FBITS(f2));
    goto L_089B6A38;
L_089B6A38:;
    f0 = BITSF(LD32(s1+484));
    goto L_089B6A3C;
L_089B6A3C:;
    f1 = BITSF(LD32(v1-5104));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+484, FBITS(f1)); goto L_089B6A70; }
    goto L_089B6A50;
L_089B6A50:;
    v0 = D_08AEEC14 - (-5100);
    f1 = BITSF(LD32(v0-5100));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(v1-5104)); goto L_089B6A70; }
    goto L_089B6A68;
L_089B6A68:;
    ST32(s1+484, FBITS(f1));
    f1 = BITSF(LD32(v1-5104));
    goto L_089B6A70;
L_089B6A70:;
    f0 = BITSF(LD32(s1+488));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+488, FBITS(f1)); goto L_089B6AA0; }
    goto L_089B6A84;
L_089B6A84:;
    v0 = D_08AEEC14 - (-5100);
    f1 = BITSF(LD32(v0-5100));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+848); goto L_089B6AA4; }
    goto L_089B6A9C;
L_089B6A9C:;
    ST32(s1+488, FBITS(f1));
    goto L_089B6AA0;
L_089B6AA0:;
    v0 = LD32(s1+848);
    goto L_089B6AA4;
L_089B6AA4:;
    a2 = LD32(s1+92);
    f20 = BITSF(0);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+848, v0);
    a0 = a2 + 0;
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6AC8;
L_089B6AC8:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = LD32(s1+848);
    if (cnd_) { goto L_089B6AE4; }
    goto L_089B6AD8;
L_089B6AD8:;
    v0 = v0 | 0x1;
    ST32(s1+848, v0);
    v0 = LD32(s1+848);
    goto L_089B6AE4;
L_089B6AE4:;
    a2 = LD32(s1+92);
    a1 = 14;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+848, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6B04;
L_089B6B04:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s1+844); goto L_089B6B24; }
    goto L_089B6B14;
L_089B6B14:;
    v0 = LD32(s1+848);
    v0 = v0 | 0x2;
    ST32(s1+848, v0);
    v0 = LD32(s1+844);
    goto L_089B6B24;
L_089B6B24:;
    a0 = LD32(s1+92);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s1+844, v0);
    v0 = 2;
    v1 = LD32(a0+12);
    cnd_ = v1 == v0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_089B6B70; }
    goto L_089B6B40;
L_089B6B40:;
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = 11;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6B50;
L_089B6B50:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089B6D3C; }
    goto L_089B6B60;
L_089B6B60:;
    a0 = s1 + 0;
    a1 = 1;
    func_089DD9CC(a0, a1, 0, 0, 0);
    goto L_089B6B6C;
L_089B6B6C:;
    v0 = D_08C29324 - (-27868);
    goto L_089B6B70;
L_089B6B70:;
    a0 = LD_U8(v0-27868);
    v1 = 0x17b40000u;
    a1 = 0xe9050000u;
    v1 = v1 | 0xedc4;
    a1 = a1 | 0x6a49;
    if (a0 == 0) a1 = v1;
    a0 = 0xde350000u;
    a0 = a0 | 0x46b6;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6B9C;
L_089B6B9C:;
    a2 = s1 + 480;
    a1 = LD32(sp);
    a3 = s1 + 484;
    a0 = s1 + 0;
    func_089DAF7C(a0, a1, a2, a3);
    goto L_089B6BB0;
L_089B6BB0:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 9;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6BC4;
L_089B6BC4:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1); goto L_089B6BFC; }
    goto L_089B6BD8;
L_089B6BD8:;
    v0 = LD32(s1+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B6CC8; }
    goto L_089B6BE8;
L_089B6BE8:;
    v0 = LD32(s1+844);
    v0 = v0 & 0x200;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B6CC8; }
    goto L_089B6BF8;
L_089B6BF8:;
    v1 = LD32(s1);
    goto L_089B6BFC;
L_089B6BFC:;
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6C08;
L_089B6C08:;
    cnd_ = v0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089B6C88; }
    goto L_089B6C10;
L_089B6C10:;
    a2 = LD32(s1+456);
    a0 = D_08C2A9D8 - (-22056);
    cnd_ = a2 == v0;
    v1 = a0 - 22056;
    if (cnd_) { goto L_089B6C88; }
    goto L_089B6C20;
L_089B6C20:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22056);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089B6C70; }
    goto L_089B6C44;
L_089B6C44:;
    a0 = LD32(a1);
    goto L_089B6C48;
L_089B6C48:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B6D1C; }
    goto L_089B6C60;
L_089B6C60:;
    a1 = LD32(a1+4);
    goto L_089B6C64;
L_089B6C64:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B6C48; }
    goto L_089B6C6C;
L_089B6C6C:;
    v1 = 0 + 0;
    goto L_089B6C70;
L_089B6C70:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 0x8041; goto L_089B6C8C; }
    goto L_089B6C78;
L_089B6C78:;
    v0 = LD32(v1+848);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B6CC8; }
    goto L_089B6C88;
L_089B6C88:;
    a0 = 0x8041;
    goto L_089B6C8C;
L_089B6C8C:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6C9C;
L_089B6C9C:;
    a0 = LD32(v0+24);
    v1 = LD32(s1+524);
    a1 = v0 + 0;
    ST32(a0, v1);
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    goto L_089B6CB4;
L_089B6CB4:;
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6CC0;
L_089B6CC0:;
    goto L_089B69C0;
L_089B6CC8:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089B69C0; }
    goto L_089B6CD0;
L_089B6CD0:;
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 10;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6CE4;
L_089B6CE4:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_089B69C0; }
    goto L_089B6CF8;
L_089B6CF8:;
    a0 = 0x8048;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B6D0C;
L_089B6D0C:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    a0 = LD32(v1-16);
    goto L_089B6CB4;
L_089B6D1C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089B6C60; }
    goto L_089B6D28;
L_089B6D28:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B6C64; }
    goto L_089B6D34;
L_089B6D34:;
    goto L_089B6C70;
L_089B6D3C:;
    a0 = s1 + 0;
    func_089DE1D4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B6D44;
L_089B6D44:;
    v0 = D_08C29324 - (-27868);
    goto L_089B6B70;
L_089B6D4C:;
    v0 = D_08AEEC14 - (-5100);
    f0 = BITSF(LD32(v0-5100));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+480, FBITS(f0)); goto L_089B6A38; }
    goto L_089B6D64;
L_089B6D64:;
    f0 = BITSF(LD32(s1+484));
    goto L_089B6A3C;
L_089B6D6C:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6D74;
L_089B6D74:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A5FEFC(a0);
    goto L_089B6D80;
L_089B6D80:;
    ST32(s1+92, s0);
    goto L_089B6980;
}

/* 089B6D88 */
rv_t func_089B6D88(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B6D88:;
    sp = sp - 32;
    a3 = a0 + 0;
    v0 = LD32(a0);
    a2 = LD32(a0+456);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = a2 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089B6F04; }
    goto L_089B6DB8;
L_089B6DB8:;
    a0 = D_08C2B0A8 - (-20312);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089B6F04; }
    goto L_089B6DC8;
L_089B6DC8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089B6E18; }
    goto L_089B6DEC;
L_089B6DEC:;
    a0 = LD32(a1);
    goto L_089B6DF0;
L_089B6DF0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089B6F54; }
    goto L_089B6E08;
L_089B6E08:;
    a1 = LD32(a1+4);
    goto L_089B6E0C;
L_089B6E0C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089B6DF0; }
    goto L_089B6E14;
L_089B6E14:;
    s1 = 0 + 0;
    goto L_089B6E18;
L_089B6E18:;
    cnd_ = s1 == 0;
    v0 = a3 + 552;
    if (cnd_) { goto L_089B6F08; }
    goto L_089B6E20;
L_089B6E20:;
    v1 = LD32(a3+976);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B6E84; }
    goto L_089B6E30;
L_089B6E30:;
    v0 = v1 << 2;
    v1 = D_08ADE558 - (-6824);
    v1 = v1 - 6824;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089B6E4Cu: goto L_089B6E4C; case 0x089B6E94u: goto L_089B6E94; case 0x089B6EA4u: goto L_089B6EA4; case 0x089B6EB4u: goto L_089B6EB4; case 0x089B6EC4u: goto L_089B6EC4; case 0x089B6ED4u: goto L_089B6ED4; case 0x089B6EE4u: goto L_089B6EE4; case 0x089B6EF4u: goto L_089B6EF4; default: rs_break(0, 0x089b6e44); }
L_089B6E4C:;
    a0 = s1 + 0;
    v0 = func_089C6744(a0, t1, t2, t3);
    goto L_089B6E54;
L_089B6E54:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6E58:;
    a1 = v0 + 0;
    a3 = s0 + 0;
    a0 = LD32(v1-12);
    a2 = sp + 0;
    t0 = 1;
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6E80;
L_089B6E80:;
    goto L_089B6E84;
L_089B6E84:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B6E94:;
    a0 = s1 + 0;
    v0 = func_089C676C(a0, t1, t2, t3);
    goto L_089B6E9C;
L_089B6E9C:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6EA4:;
    a0 = s1 + 0;
    v0 = func_089C6794(a0, t1, t2, t3);
    goto L_089B6EAC;
L_089B6EAC:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6EB4:;
    a0 = s1 + 0;
    v0 = func_089C67BC(a0, t1, t2, t3);
    goto L_089B6EBC;
L_089B6EBC:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6EC4:;
    a0 = s1 + 0;
    v0 = func_089C67E4(a0, t1, t2, t3);
    goto L_089B6ECC;
L_089B6ECC:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6ED4:;
    a0 = s1 + 0;
    v0 = func_089C680C(a0, t1, t2, t3);
    goto L_089B6EDC;
L_089B6EDC:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6EE4:;
    a0 = s1 + 0;
    v0 = func_089C6834(a0, t1, t2, t3);
    goto L_089B6EEC;
L_089B6EEC:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6EF4:;
    a0 = s1 + 0;
    v0 = func_089C685C(a0, t1, t2, t3);
    goto L_089B6EFC;
L_089B6EFC:;
    v1 = LD32(s1);
    goto L_089B6E58;
L_089B6F04:;
    v0 = a3 + 552;
    goto L_089B6F08;
L_089B6F08:;
    f8 = BITSF(LD32(a3+552));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(s0+32, FBITS(f0));
    ST32(s0, FBITS(f8));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    ST32(s0+12, FBITS(f3));
    ST32(s0+16, FBITS(f4));
    ST32(s0+20, FBITS(f5));
    ST32(s0+24, FBITS(f6));
    ST32(s0+28, FBITS(f7));
    goto L_089B6E80;
L_089B6F54:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089B6E0C; }
    goto L_089B6F60;
L_089B6F60:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089B6E08; }
    goto L_089B6F6C;
L_089B6F6C:;
    goto L_089B6E18;
}

/* 089B6F74 */
rv_t func_089B6F74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089B6F74:;
    sp = sp - 96;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = sp + 0;
    f8 = BITSF(LD32(v0+32));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f0 = BITSF(LD32(v1+23208));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    ST32(sp+16, FBITS(f4));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    { rv_t r_ = func_089B85E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B6FE4;
L_089B6FE4:;
    v0 = D_08AEEC18 - (-5096);
    f0 = BITSF(LD32(v0-5096));
    f2 = BITSF(LD32(sp+8));
    f3 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+32));
    f2 = f2 * f0;
    f3 = f3 * f0;
    f1 = f1 * f0;
    v1 = LD32(s1);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f1));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7020;
L_089B7020:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s0, FBITS(f2));
    ST32(s0+8, FBITS(f4));
    ST32(s0+4, FBITS(f3));
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 089B7064 */
float func_089B7064(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089B7064:;
    sp = sp - 176;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s2 = LD32(v0+256);
    cnd_ = s2 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B7218; }
    goto L_089B7090;
L_089B7090:;
    a1 = LD32(a0+456);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    {v[112]=BITSF(LD32(s0+(856)));}
    {v[113]=BITSF(LD32(s0+(860)));}
    {v[114]=BITSF(LD32(s0+(864)));}
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
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B7134;
L_089B7134:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089B7218; }
    goto L_089B713C;
L_089B713C:;
    v1 = LD32(s0+976);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089B71A0; }
    goto L_089B714C;
L_089B714C:;
    v0 = v1 << 2;
    v1 = D_08ADE578 - (-6792);
    v1 = v1 - 6792;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089B7168u: goto L_089B7168; case 0x089B7230u: goto L_089B7230; case 0x089B7240u: goto L_089B7240; case 0x089B7250u: goto L_089B7250; case 0x089B7260u: goto L_089B7260; case 0x089B7270u: goto L_089B7270; case 0x089B7280u: goto L_089B7280; case 0x089B7290u: goto L_089B7290; default: rs_break(0, 0x089b7160); }
L_089B7168:;
    a0 = s1 + 0;
    v0 = func_089C6744(a0, 0, 0, 0);
    goto L_089B7170;
L_089B7170:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7174:;
    a1 = v0 + 0;
    a2 = sp + 96;
    a0 = LD32(v1-12);
    a3 = sp + 48;
    t0 = 1;
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B719C;
L_089B719C:;
    a0 = s2 + 0;
    goto L_089B71A0;
L_089B71A0:;
    a1 = sp + 112;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
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
    f0 = func_0880E078(a0, a1);
    goto L_089B7218;
L_089B7218:;
    sp = sp + 176;
    return f0;
L_089B7230:;
    a0 = s1 + 0;
    v0 = func_089C676C(a0, 0, 0, 0);
    goto L_089B7238;
L_089B7238:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7240:;
    a0 = s1 + 0;
    v0 = func_089C6794(a0, 0, 0, 0);
    goto L_089B7248;
L_089B7248:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7250:;
    a0 = s1 + 0;
    v0 = func_089C67BC(a0, 0, 0, 0);
    goto L_089B7258;
L_089B7258:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7260:;
    a0 = s1 + 0;
    v0 = func_089C67E4(a0, 0, 0, 0);
    goto L_089B7268;
L_089B7268:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7270:;
    a0 = s1 + 0;
    v0 = func_089C680C(a0, 0, 0, 0);
    goto L_089B7278;
L_089B7278:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7280:;
    a0 = s1 + 0;
    v0 = func_089C6834(a0, 0, 0, 0);
    goto L_089B7288;
L_089B7288:;
    v1 = LD32(s1);
    goto L_089B7174;
L_089B7290:;
    a0 = s1 + 0;
    v0 = func_089C685C(a0, 0, 0, 0);
    goto L_089B7298;
L_089B7298:;
    v1 = LD32(s1);
    goto L_089B7174;
}

/* 089B72A0 */
void func_089B72A0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089B72A0:;
    sp = sp - 176;
    a1 = 0xacc70000u;
    s0 = a0 + 0;
    a1 = a1 | 0x5fa6;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B7488; }
    goto L_089B72D4;
L_089B72D4:;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B72DC;
L_089B72DC:;
    s1 = v0 + 0;
    a3 = D_08B45A9C - (23196);
    v0 = D_08B45AA8 - (23208);
    a0 = v0 + 23208;
    cnd_ = s1 == 0;
    t0 = a3 + 23196;
    if (cnd_) { goto L_089B7488; }
    goto L_089B72F4;
L_089B72F4:;
    v1 = LD32(s0);
    f8 = BITSF(LD32(v0+23208));
    f10 = BITSF(LD32(a3+23196));
    v0 = LD32(v1-12);
    f11 = BITSF(LD32(t0+8));
    f3 = BITSF(LD32(t0+4));
    v0 = s0 + v0;
    v1 = LD32(v0+256);
    f9 = BITSF(LD32(a0+32));
    f4 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+8));
    f6 = BITSF(LD32(a0+12));
    f7 = BITSF(LD32(a0+16));
    f1 = BITSF(LD32(a0+20));
    f2 = BITSF(LD32(a0+24));
    f0 = BITSF(LD32(a0+28));
    a1 = sp + 48;
    a2 = sp + 0;
    a0 = v1 + 0;
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+12, FBITS(f6));
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f0));
    ST32(sp+32, FBITS(f9));
    ST32(sp+48, FBITS(f10));
    ST32(sp+52, FBITS(f3));
    cnd_ = v1 == 0;
    ST32(sp+56, FBITS(f11));
    if (cnd_) { goto L_089B7488; }
    goto L_089B7374;
L_089B7374:;
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B737C;
L_089B737C:;
    a1 = sp + 112;
    a0 = s1 + 0;
    {v[112]=BITSF(LD32(s0+(868)));}
    {v[113]=BITSF(LD32(s0+(872)));}
    {v[114]=BITSF(LD32(s0+(876)));}
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
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[116]=BITSF(LD32(sp+(76)));}
    {v[117]=BITSF(LD32(sp+(80)));}
    {v[118]=BITSF(LD32(sp+(84)));}
    {v[120]=BITSF(LD32(sp+(88)));}
    {v[121]=BITSF(LD32(sp+(92)));}
    {v[122]=BITSF(LD32(sp+(96)));}
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
    {ST32(sp+(112),FBITS(v[80]));}
    {ST32(sp+(116),FBITS(v[81]));}
    {ST32(sp+(120),FBITS(v[82]));}
    {ST32(sp+(124),FBITS(v[84]));}
    {ST32(sp+(128),FBITS(v[85]));}
    {ST32(sp+(132),FBITS(v[86]));}
    {ST32(sp+(136),FBITS(v[88]));}
    {ST32(sp+(140),FBITS(v[89]));}
    {ST32(sp+(144),FBITS(v[90]));}
    f0 = func_0880E078(a0, a1);
    goto L_089B7488;
L_089B7488:;
    sp = sp + 176;
    return;
}

/* 089B749C */
float func_089B749C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089B749C:;
    sp = sp - 176;
    a1 = 0x65b0000u;
    s0 = a0 + 0;
    a1 = a1 | 0xcc42;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B762C; }
    goto L_089B74D4;
L_089B74D4:;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B74DC;
L_089B74DC:;
    s2 = sp + 96;
    s1 = v0 + 0;
    a1 = sp + 48;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B762C; }
    goto L_089B74F0;
L_089B74F0:;
    {v[112]=BITSF(LD32(s0+(856)));}
    {v[113]=BITSF(LD32(s0+(860)));}
    {v[114]=BITSF(LD32(s0+(864)));}
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
    { rv_t r_ = func_089B6D88(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7584;
L_089B7584:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
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
    {ST32(sp+(96),FBITS(v[80]));}
    {ST32(sp+(100),FBITS(v[81]));}
    {ST32(sp+(104),FBITS(v[82]));}
    {ST32(sp+(108),FBITS(v[84]));}
    {ST32(sp+(112),FBITS(v[85]));}
    {ST32(sp+(116),FBITS(v[86]));}
    {ST32(sp+(120),FBITS(v[88]));}
    {ST32(sp+(124),FBITS(v[89]));}
    {ST32(sp+(128),FBITS(v[90]));}
    f0 = func_0880E078(a0, a1);
    goto L_089B7600;
L_089B7600:;
    a1 = LD32(s0+456);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B7614;
L_089B7614:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089B762C; }
    goto L_089B761C;
L_089B761C:;
    v0 = LD_U8(v0+195);
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_089B7644; }
    goto L_089B762C;
L_089B762C:;
    goto L_089B7630;
L_089B7630:;
    sp = sp + 176;
    return f0;
L_089B7644:;
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
    if (cnd_) { goto L_089B78C4; }
    goto L_089B7680;
L_089B7680:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B7804; }
    goto L_089B7690;
L_089B7690:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B7728; }
    goto L_089B76B8;
L_089B76B8:;
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
    if (cnd_) { goto L_089B7704; }
    goto L_089B76F4;
L_089B76F4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B7704;
L_089B7704:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B7748; }
    goto L_089B7714;
L_089B7714:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B7748; }
    goto L_089B7724;
L_089B7724:;
    goto L_089B7728;
L_089B7728:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B7748; }
    goto L_089B773C;
L_089B773C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B7748;
L_089B7748:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B77D8; }
    goto L_089B7768;
L_089B7768:;
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
    if (cnd_) { goto L_089B77B4; }
    goto L_089B77A4;
L_089B77A4:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B77B4;
L_089B77B4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B77F8; }
    goto L_089B77C4;
L_089B77C4:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B77F8; }
    goto L_089B77D4;
L_089B77D4:;
    goto L_089B77D8;
L_089B77D8:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B77F8; }
    goto L_089B77EC;
L_089B77EC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B77F8;
L_089B77F8:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089B797C; }
    goto L_089B7800;
L_089B7800:;
    goto L_089B7804;
L_089B7804:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B7898; }
    goto L_089B7828;
L_089B7828:;
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
    if (cnd_) { goto L_089B7874; }
    goto L_089B7864;
L_089B7864:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B7874;
L_089B7874:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B78B8; }
    goto L_089B7884;
L_089B7884:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B78B8; }
    goto L_089B7894;
L_089B7894:;
    goto L_089B7898;
L_089B7898:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B78B8; }
    goto L_089B78AC;
L_089B78AC:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B78B8;
L_089B78B8:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089B797C; }
    goto L_089B78C0;
L_089B78C0:;
    goto L_089B78C4;
L_089B78C4:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089B7958; }
    goto L_089B78E8;
L_089B78E8:;
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
    if (cnd_) { goto L_089B7934; }
    goto L_089B7924;
L_089B7924:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089B7934;
L_089B7934:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B7978; }
    goto L_089B7944;
L_089B7944:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089B7978; }
    goto L_089B7954;
L_089B7954:;
    goto L_089B7958;
L_089B7958:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089B7978; }
    goto L_089B796C;
L_089B796C:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089B7978;
L_089B7978:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089B797C;
L_089B797C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(144),FBITS(v[96]));}
    {ST32(sp+(148),FBITS(v[97]));}
    {ST32(sp+(152),FBITS(v[98]));}
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[116]=BITSF(LD32(sp+(12)));}
    {v[117]=BITSF(LD32(sp+(16)));}
    {v[118]=BITSF(LD32(sp+(20)));}
    {v[120]=BITSF(LD32(sp+(24)));}
    {v[121]=BITSF(LD32(sp+(28)));}
    {v[122]=BITSF(LD32(sp+(32)));}
    {v[96]=BITSF(LD32(v1+(552)));}
    {v[97]=BITSF(LD32(v1+(556)));}
    {v[98]=BITSF(LD32(v1+(560)));}
    {v[100]=BITSF(LD32(v1+(564)));}
    {v[101]=BITSF(LD32(v1+(568)));}
    {v[102]=BITSF(LD32(v1+(572)));}
    {v[104]=BITSF(LD32(v1+(576)));}
    {v[105]=BITSF(LD32(v1+(580)));}
    {v[106]=BITSF(LD32(v1+(584)));}
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
    f0 = func_0880E078(a0, a1);
    goto L_089B7A00;
L_089B7A00:;
    goto L_089B7630;
}

/* 089B7A08 */
void func_089B7A08(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089B7A08:;
    sp = sp - 176;
    a1 = 0xacc70000u;
    s1 = a0 + 0;
    a1 = a1 | 0x5fa6;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B7BF0; }
    goto L_089B7A40;
L_089B7A40:;
    { rv_t r_ = func_0880A7A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7A48;
L_089B7A48:;
    a1 = 0x65b0000u;
    a0 = s0 + 0;
    a1 = a1 | 0xcc42;
    s2 = v0 + 0;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7A5C;
L_089B7A5C:;
    cnd_ = v0 == 0;
    v1 = D_08B45AA8 - (23208);
    if (cnd_) { goto L_089B7BF0; }
    goto L_089B7A64;
L_089B7A64:;
    a3 = D_08B45A9C - (23196);
    a0 = v0 + 0;
    a2 = sp + 0;
    v0 = v1 + 23208;
    t0 = a3 + 23196;
    cnd_ = s2 == 0;
    a1 = sp + 48;
    if (cnd_) { goto L_089B7BF0; }
    goto L_089B7A80;
L_089B7A80:;
    f10 = BITSF(LD32(a3+23196));
    f11 = BITSF(LD32(t0+8));
    f7 = BITSF(LD32(t0+4));
    f8 = BITSF(LD32(v1+23208));
    f9 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+32, FBITS(f9));
    ST32(sp+48, FBITS(f10));
    ST32(sp+52, FBITS(f7));
    ST32(sp+56, FBITS(f11));
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7AE4;
L_089B7AE4:;
    a0 = s2 + 0;
    a1 = sp + 112;
    {v[112]=BITSF(LD32(s1+(868)));}
    {v[113]=BITSF(LD32(s1+(872)));}
    {v[114]=BITSF(LD32(s1+(876)));}
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
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[116]=BITSF(LD32(sp+(76)));}
    {v[117]=BITSF(LD32(sp+(80)));}
    {v[118]=BITSF(LD32(sp+(84)));}
    {v[120]=BITSF(LD32(sp+(88)));}
    {v[121]=BITSF(LD32(sp+(92)));}
    {v[122]=BITSF(LD32(sp+(96)));}
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
    {ST32(sp+(112),FBITS(v[80]));}
    {ST32(sp+(116),FBITS(v[81]));}
    {ST32(sp+(120),FBITS(v[82]));}
    {ST32(sp+(124),FBITS(v[84]));}
    {ST32(sp+(128),FBITS(v[85]));}
    {ST32(sp+(132),FBITS(v[86]));}
    {ST32(sp+(136),FBITS(v[88]));}
    {ST32(sp+(140),FBITS(v[89]));}
    {ST32(sp+(144),FBITS(v[90]));}
    f0 = func_0880E078(a0, a1);
    goto L_089B7BF0;
L_089B7BF0:;
    sp = sp + 176;
    return;
}

/* 089B7C08 */
void func_089B7C08(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089B7C08:;
    sp = sp - 64;
    a1 = sp + 0;
    s0 = a0 + 0;
    s1 = s0 + 904;
    { rv_t r_ = func_089B6D88(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7C28;
L_089B7C28:;
    f1 = BITSF(LD32(s0+868));
    f0 = BITSF(LD32(s0+892));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B7C88; }
    goto L_089B7C40;
L_089B7C40:;
    f1 = BITSF(LD32(s0+872));
    f0 = BITSF(LD32(s0+896));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B7C88; }
    goto L_089B7C58;
L_089B7C58:;
    f1 = BITSF(LD32(s0+856));
    f0 = BITSF(LD32(s0+880));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B7C88; }
    goto L_089B7C70;
L_089B7C70:;
    f1 = BITSF(LD32(s0+860));
    f0 = BITSF(LD32(s0+884));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = D_08AEEC1C - (-5092);
    if (cnd_) { goto L_089B7D68; }
    goto L_089B7C88;
L_089B7C88:;
    a0 = s0 + 0;
    v0 = func_089B6748(a0);
    goto L_089B7C90;
L_089B7C90:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089B7D40; }
    goto L_089B7CA0;
L_089B7CA0:;
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_089B7D30; }
    goto L_089B7CA8;
L_089B7CA8:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089B7D20; }
    goto L_089B7CB0;
L_089B7CB0:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089B7CF8; }
    goto L_089B7CB8;
L_089B7CB8:;
    f0 = BITSF(LD32(s0+868));
    goto L_089B7CBC;
L_089B7CBC:;
    f1 = BITSF(LD32(s0+872));
    f2 = BITSF(LD32(s0+856));
    f3 = BITSF(LD32(s0+860));
    ST32(s0+892, FBITS(f0));
    a0 = s0 + 0;
    a1 = s1 + 0;
    ST32(s0+896, FBITS(f1));
    ST32(s0+880, FBITS(f2));
    ST32(s0+884, FBITS(f3));
    { rv_t r_ = func_089B6D88(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7CE4;
L_089B7CE4:;
    goto L_089B7CE8;
L_089B7CE8:;
    sp = sp + 64;
    return;
L_089B7CF8:;
    a0 = s0 + 0;
    f0 = func_089B749C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B7D00;
L_089B7D00:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+868)); goto L_089B7CBC; }
    goto L_089B7D10;
L_089B7D10:;
    a0 = s0 + 0;
    func_089B7A08(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B7D18;
L_089B7D18:;
    f0 = BITSF(LD32(s0+868));
    goto L_089B7CBC;
L_089B7D20:;
    a0 = s0 + 0;
    f0 = func_089B749C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B7D28;
L_089B7D28:;
    f0 = BITSF(LD32(s0+868));
    goto L_089B7CBC;
L_089B7D30:;
    a0 = s0 + 0;
    f0 = func_089B7064(a0);
    goto L_089B7D38;
L_089B7D38:;
    f0 = BITSF(LD32(s0+868));
    goto L_089B7CBC;
L_089B7D40:;
    a0 = s0 + 0;
    f0 = func_089B7064(a0);
    goto L_089B7D48;
L_089B7D48:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+868)); goto L_089B7CBC; }
    goto L_089B7D58;
L_089B7D58:;
    a0 = s0 + 0;
    func_089B72A0(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089B7D60;
L_089B7D60:;
    f0 = BITSF(LD32(s0+868));
    goto L_089B7CBC;
L_089B7D68:;
    f12 = BITSF(LD32(v0-5092));
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088358B0(a0, a1, f12);
    goto L_089B7D78;
L_089B7D78:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B7CE8; }
    goto L_089B7D80;
L_089B7D80:;
    goto L_089B7C88;
}

/* 089B7D88 */
u32 func_089B7D88(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B7D88:;
    sp = sp - 16;
    v0 = func_089B6748(a0);
    goto L_089B7D98;
L_089B7D98:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089B7DBC; }
    goto L_089B7DA8;
L_089B7DA8:;
    cnd_ = v1 == 0;
    a0 = 1;
    if (cnd_) { goto L_089B7DBC; }
    goto L_089B7DB0;
L_089B7DB0:;
    v0 = 2;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_089B7DBC; }
    goto L_089B7DBC;
L_089B7DBC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 089B7DCC */
rv_t func_089B7DCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B7DCC:;
    sp = sp - 16;
    v1 = LD32(a0+988);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089B7E00; }
    goto L_089B7DEC;
L_089B7DEC:;
    v0 = LD32(a0+852);
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = (v1 & ~(0x1u << 5)) | ((0 & 0x1) << 5); goto L_089B7F40; }
    goto L_089B7DFC;
L_089B7DFC:;
    v0 = v1 & 0x20;
    goto L_089B7E00;
L_089B7E00:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+195); goto L_089B7E1C; }
    goto L_089B7E08;
L_089B7E08:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    v0 = v1 | 0x20;
    if (cnd_) { goto L_089B7F24; }
    goto L_089B7E18;
L_089B7E18:;
    v0 = LD_U8(s0+195);
    goto L_089B7E1C;
L_089B7E1C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+988); goto L_089B7E38; }
    goto L_089B7E24;
L_089B7E24:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEEC20 - (-5088);
    if (cnd_) { goto L_089B7F14; }
    goto L_089B7E34;
L_089B7E34:;
    v1 = LD32(s0+988);
    goto L_089B7E38;
L_089B7E38:;
    v0 = v1 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B7F04; }
    goto L_089B7E44;
L_089B7E44:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+195); goto L_089B7EEC; }
    goto L_089B7E50;
L_089B7E50:;
    s1 = D_08B2C1BC - (-15940);
    v0 = LD_U8(s1-15940);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089B7E78; }
    goto L_089B7E60;
L_089B7E60:;
    v1 = LD32(s0);
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7E70;
L_089B7E70:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B7E80; }
    goto L_089B7E78;
L_089B7E78:;
    a0 = s0 + 0;
    func_089BAE30(a0);
    goto L_089B7E80;
L_089B7E80:;
    a0 = s0 + 0;
    func_089B7C08(a0, t1, t2, t3);
    goto L_089B7E88;
L_089B7E88:;
    a0 = s0 + 0;
    func_089CA734(a0);
    goto L_089B7E90;
L_089B7E90:;
    a0 = s0 + 0;
    func_089BA624(a0);
    goto L_089B7E98;
L_089B7E98:;
    v0 = LD_U8(s1-15940);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B7EB0; }
    goto L_089B7EA4;
L_089B7EA4:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089B7ECC; }
    goto L_089B7EB0;
L_089B7EB0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089C71EC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7EB8;
L_089B7EB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B7ECC:;
    a0 = s0 + 0;
    func_089B829C(a0);
    goto L_089B7ED4;
L_089B7ED4:;
    a0 = s0 + 0;
    func_089B7F50(a0);
    goto L_089B7EDC;
L_089B7EDC:;
    a0 = s0 + 0;
    func_089BA86C(a0);
    goto L_089B7EE4;
L_089B7EE4:;
    goto L_089B7EB0;
L_089B7EEC:;
    cnd_ = v0 != 0;
    s1 = D_08B2C1BC - (-15940);
    if (cnd_) { goto L_089B7E80; }
    goto L_089B7EF4;
L_089B7EF4:;
    a0 = s0 + 0;
    func_089BA8B0(a0);
    goto L_089B7EFC;
L_089B7EFC:;
    goto L_089B7E80;
L_089B7F04:;
    a0 = s0 + 0;
    func_089BAD30(a0);
    goto L_089B7F0C;
L_089B7F0C:;
    v1 = LD32(s0+988);
    goto L_089B7E44;
L_089B7F14:;
    f12 = BITSF(LD32(v0-5088));
    { u64 r_ = func_0881D060(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B7F1C;
L_089B7F1C:;
    v1 = LD32(s0+988);
    goto L_089B7E38;
L_089B7F24:;
    ST32(s0+988, v0);
    v0 = LD32(s0);
    v1 = LD32(v0+180);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B7F38;
L_089B7F38:;
    v0 = LD_U8(s0+195);
    goto L_089B7E1C;
L_089B7F40:;
    ST32(a0+988, v1);
    func_089B9AC8(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089B7F48;
L_089B7F48:;
    v1 = LD32(s0+988);
    goto L_089B7DFC;
}

/* 089B7F50 */
void func_089B7F50(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089B7F50:;
    sp = sp - 112;
    f0 = BITSF(0);
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+496));
    f21 = BITSF(LD32(v0-31328));
    f4 = BITSF(LD32(a0+240));
    fcc = FCMP(f0, f1, 12);
    f2 = BITSF(LD32(a0+244));
    cnd_ = !fcc;
    f0 = BITSF(LD32(a0+236));
    if (cnd_) { goto L_089B827C; }
    goto L_089B7F9C;
L_089B7F9C:;
    f3 = f0 * f21;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089B7FB4; }
    goto L_089B7FB0;
L_089B7FB0:;
    f0 = f3;
    goto L_089B7FB4;
L_089B7FB4:;
    f0 = f1 - f0;
    goto L_089B7FB8;
L_089B7FB8:;
    ST32(s0+496, FBITS(f0));
    f0 = BITSF(LD32(s0+480));
    f1 = BITSF(LD32(s0+496));
    f0 = f0 * f4;
    f0 = f0 * f21;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(s0+496, FBITS(f1));
    if (cnd_) { goto L_089B7FE4; }
    goto L_089B7FE0;
L_089B7FE0:;
    ST32(s0+496, FBITS(f2));
    goto L_089B7FE4;
L_089B7FE4:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f20 = BITSF(LD32(s0+496));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B8004; }
    goto L_089B7FFC;
L_089B7FFC:;
    ST32(s0+496, FBITS(f0));
    f20 = f0;
    goto L_089B8004;
L_089B8004:;
    a0 = s0 + 0;
    v0 = func_089B7D88(a0);
    goto L_089B800C;
L_089B800C:;
    cnd_ = v0 == 0;
    f0 = f20 * f21;
    if (cnd_) { goto L_089B8154; }
    goto L_089B8014;
L_089B8014:;
    f12 = BITSF(LD32(s0+856));
    s3 = D_08AEEC24 - (-5084);
    s2 = D_08AEEC28 - (-5080);
    f20 = BITSF(LD32(s2-5080));
    f22 = BITSF(LD32(s3-5084));
    f12 = f12 + f0;
    s1 = s0 + 856;
    f21 = f22 - f20;
    ST32(s0+856, FBITS(f12));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8040;
L_089B8040:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B8064; }
    goto L_089B8050;
L_089B8050:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B8064; }
    goto L_089B8060;
L_089B8060:;
    f1 = f0;
    goto L_089B8064;
L_089B8064:;
    f20 = BITSF(LD32(s2-5080));
    f22 = BITSF(LD32(s3-5084));
    ST32(s1, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+4));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8080;
L_089B8080:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B80A4; }
    goto L_089B8090;
L_089B8090:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B80A4; }
    goto L_089B80A0;
L_089B80A0:;
    f1 = f0;
    goto L_089B80A4;
L_089B80A4:;
    f20 = BITSF(LD32(s2-5080));
    f22 = BITSF(LD32(s3-5084));
    ST32(s1+4, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+8));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B80C0;
L_089B80C0:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B80E4; }
    goto L_089B80D0;
L_089B80D0:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B80E4; }
    goto L_089B80E0;
L_089B80E0:;
    f1 = f0;
    goto L_089B80E4;
L_089B80E4:;
    ST32(s1+8, FBITS(f1));
    f1 = BITSF(LD32(s0+940));
    f2 = BITSF(LD32(s0+944));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089B8130; }
    goto L_089B8100;
L_089B8100:;
    f0 = BITSF(LD32(s0+856));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B811C; }
    goto L_089B8114;
L_089B8114:;
    ST32(s0+856, FBITS(f1));
    f0 = f1;
    goto L_089B811C;
L_089B811C:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+856, FBITS(f2)); goto L_089B812C; }
    goto L_089B812C;
L_089B812C:;
    goto L_089B8130;
L_089B8130:;
    sp = sp + 112;
    return;
L_089B8154:;
    f12 = BITSF(LD32(s0+868));
    s3 = D_08AEEC24 - (-5084);
    s2 = D_08AEEC28 - (-5080);
    f20 = BITSF(LD32(s2-5080));
    f22 = BITSF(LD32(s3-5084));
    f12 = f12 + f0;
    s1 = s0 + 868;
    f21 = f22 - f20;
    ST32(s0+868, FBITS(f12));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8180;
L_089B8180:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B81A4; }
    goto L_089B8190;
L_089B8190:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B81A4; }
    goto L_089B81A0;
L_089B81A0:;
    f1 = f0;
    goto L_089B81A4;
L_089B81A4:;
    f20 = BITSF(LD32(s2-5080));
    f22 = BITSF(LD32(s3-5084));
    ST32(s1, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+4));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B81C0;
L_089B81C0:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B81E4; }
    goto L_089B81D0;
L_089B81D0:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B81E4; }
    goto L_089B81E0;
L_089B81E0:;
    f1 = f0;
    goto L_089B81E4;
L_089B81E4:;
    f20 = BITSF(LD32(s2-5080));
    f22 = BITSF(LD32(s3-5084));
    ST32(s1+4, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+8));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8200;
L_089B8200:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B8224; }
    goto L_089B8210;
L_089B8210:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B8224; }
    goto L_089B8220;
L_089B8220:;
    f1 = f0;
    goto L_089B8224;
L_089B8224:;
    ST32(s1+8, FBITS(f1));
    f0 = BITSF(LD32(s0+940));
    f2 = BITSF(LD32(s0+944));
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089B8130; }
    goto L_089B8240;
L_089B8240:;
    f1 = BITSF(LD32(s0+868));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B8260; }
    goto L_089B8254;
L_089B8254:;
    ST32(s0+868, FBITS(f0));
    f1 = f0;
    ST32(s0+496, 0);
    goto L_089B8260;
L_089B8260:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B8130; }
    goto L_089B8270;
L_089B8270:;
    ST32(s0+868, FBITS(f2));
    ST32(s0+496, 0);
    goto L_089B8130;
L_089B827C:;
    f3 = f0 * f21;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089B8294; }
    goto L_089B8294;
L_089B8294:;
    f0 = f1 + f0;
    goto L_089B7FB8;
}

/* 089B829C */
void func_089B829C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089B829C:;
    sp = sp - 112;
    f0 = BITSF(0);
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+500));
    f4 = BITSF(LD32(v0-31328));
    f5 = BITSF(LD32(a0+252));
    fcc = FCMP(f0, f1, 12);
    f2 = BITSF(LD32(a0+256));
    cnd_ = !fcc;
    f0 = BITSF(LD32(a0+248));
    if (cnd_) { goto L_089B84A0; }
    goto L_089B82E8;
L_089B82E8:;
    f3 = f0 * f4;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089B8300; }
    goto L_089B82FC;
L_089B82FC:;
    f0 = f3;
    goto L_089B8300;
L_089B8300:;
    f0 = f1 - f0;
    goto L_089B8304;
L_089B8304:;
    ST32(s0+500, FBITS(f0));
    f0 = BITSF(LD32(s0+484));
    f1 = BITSF(LD32(s0+500));
    f0 = f0 * f5;
    f0 = f0 * f4;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(s0+500, FBITS(f1));
    if (cnd_) { goto L_089B8330; }
    goto L_089B832C;
L_089B832C:;
    ST32(s0+500, FBITS(f2));
    goto L_089B8330;
L_089B8330:;
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(LD32(s0+500));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = f1 * f4; goto L_089B8354; }
    goto L_089B8348;
L_089B8348:;
    ST32(s0+500, FBITS(f0));
    f1 = f0;
    f1 = f1 * f4;
    goto L_089B8354;
L_089B8354:;
    f0 = BITSF(LD32(s0+860));
    s3 = D_08AEEC2C - (-5076);
    s2 = D_08AEEC30 - (-5072);
    f20 = BITSF(LD32(s2-5072));
    f22 = BITSF(LD32(s3-5076));
    f0 = f0 + f1;
    f12 = BITSF(LD32(s0+856));
    f21 = f22 - f20;
    s1 = s0 + 856;
    ST32(s0+860, FBITS(f0));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8384;
L_089B8384:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B83A8; }
    goto L_089B8394;
L_089B8394:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B83A8; }
    goto L_089B83A4;
L_089B83A4:;
    f1 = f0;
    goto L_089B83A8;
L_089B83A8:;
    f20 = BITSF(LD32(s2-5072));
    f22 = BITSF(LD32(s3-5076));
    ST32(s1, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+4));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B83C4;
L_089B83C4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B83E8; }
    goto L_089B83D4;
L_089B83D4:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B83E8; }
    goto L_089B83E4;
L_089B83E4:;
    f1 = f0;
    goto L_089B83E8;
L_089B83E8:;
    f20 = BITSF(LD32(s2-5072));
    f22 = BITSF(LD32(s3-5076));
    ST32(s1+4, FBITS(f1));
    f21 = f22 - f20;
    f12 = BITSF(LD32(s1+8));
    f13 = f21;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8404;
L_089B8404:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    f1 = f0 + f21;
    if (cnd_) { goto L_089B8428; }
    goto L_089B8414;
L_089B8414:;
    fcc = FCMP(f22, f0, 14);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_089B8428; }
    goto L_089B8424;
L_089B8424:;
    f1 = f0;
    goto L_089B8428;
L_089B8428:;
    ST32(s1+8, FBITS(f1));
    f2 = BITSF(LD32(s0+952));
    f0 = BITSF(LD32(s0+948));
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089B847C; }
    goto L_089B8444;
L_089B8444:;
    f1 = BITSF(LD32(s0+860));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B8464; }
    goto L_089B8458;
L_089B8458:;
    ST32(s0+860, FBITS(f0));
    f1 = f0;
    ST32(s0+500, 0);
    goto L_089B8464;
L_089B8464:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B847C; }
    goto L_089B8474;
L_089B8474:;
    ST32(s0+860, FBITS(f2));
    ST32(s0+500, 0);
    goto L_089B847C;
L_089B847C:;
    sp = sp + 112;
    return;
L_089B84A0:;
    f3 = f0 * f4;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089B84B8; }
    goto L_089B84B8;
L_089B84B8:;
    f0 = f1 + f0;
    goto L_089B8304;
}

/* 089B84C0 */
rv_t func_089B84C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B84C0:;
    sp = sp - 32;
    s4 = 0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    v0 = func_0897364C();
    goto L_089B84F4;
L_089B84F4:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B85CC; }
    goto L_089B84FC;
L_089B84FC:;
    v1 = LD32(s0);
    a1 = s2 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+164);
    t_ = v0;
    s2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8514;
L_089B8514:;
    ST32(s1, v0);
    v0 = 1;
    ST8(s1+7, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 ^ s3;
    v1 = v1 < 0x1u;
    ST8(s1+6, v1);
    a1 = LD32(s0);
    v0 = LD32(a1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B85B0; }
    goto L_089B8558;
L_089B8558:;
    ST8(s1+5, s2);
    goto L_089B855C;
L_089B855C:;
    cnd_ = s4 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089B85A8; }
    goto L_089B8564;
L_089B8564:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s3;
    if (cnd_) { a0 = 1; goto L_089B857C; }
    goto L_089B857C;
L_089B857C:;
    v0 = 27;
    ST8(s1+4, a0);
    ST32(s1+8, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089B85A8:;
    a0 = 1;
    goto L_089B857C;
L_089B85B0:;
    v0 = LD32(a1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B85BC;
L_089B85BC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = 1; goto L_089B8558; }
    goto L_089B85C4;
L_089B85C4:;
    ST8(s1+5, s2);
    goto L_089B855C;
L_089B85CC:;
    v1 = LD32(s0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B85DC;
L_089B85DC:;
    v0 = v0 ^ 0x3e7;
    s4 = 0 < v0;
    goto L_089B84FC;
}

/* 089B85E8 */
rv_t func_089B85E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_089B85E8:;
    sp = sp - 176;
    s1 = a0 + 0;
    s0 = a1 + 0;
    {v[112]=BITSF(LD32(a0+(856)));}
    {v[113]=BITSF(LD32(a0+(860)));}
    {v[114]=BITSF(LD32(a0+(864)));}
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
    { rv_t r_ = func_089B6D88(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8694;
L_089B8694:;
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[116]=BITSF(LD32(sp+(76)));}
    {v[117]=BITSF(LD32(sp+(80)));}
    {v[118]=BITSF(LD32(sp+(84)));}
    {v[120]=BITSF(LD32(sp+(88)));}
    {v[121]=BITSF(LD32(sp+(92)));}
    {v[122]=BITSF(LD32(sp+(96)));}
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
    ST32(s0, FBITS(f0));
    f0 = BITSF(LD32(sp+120));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+124));
    f0 = BITSF(LD32(sp+128));
    ST32(s0+12, FBITS(f1));
    ST32(s0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    ST32(s0+20, FBITS(f1));
    ST32(s0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+140));
    f0 = BITSF(LD32(sp+144));
    ST32(s0+28, FBITS(f1));
    ST32(s0+32, FBITS(f0));
    {v[112]=BITSF(LD32(s1+(868)));}
    {v[113]=BITSF(LD32(s1+(872)));}
    {v[114]=BITSF(LD32(s1+(876)));}
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
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[116]=BITSF(LD32(sp+(76)));}
    {v[117]=BITSF(LD32(sp+(80)));}
    {v[118]=BITSF(LD32(sp+(84)));}
    {v[120]=BITSF(LD32(sp+(88)));}
    {v[121]=BITSF(LD32(sp+(92)));}
    {v[122]=BITSF(LD32(sp+(96)));}
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
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    f0 = BITSF(LD32(sp+120));
    f1 = BITSF(LD32(sp+124));
    ST32(s0+8, FBITS(f0));
    ST32(s0+12, FBITS(f1));
    f0 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(sp+144));
    ST32(s0+16, FBITS(f0));
    f0 = BITSF(LD32(sp+132));
    ST32(s0+32, FBITS(f1));
    ST32(s0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+136));
    f0 = BITSF(LD32(sp+140));
    ST32(s0+24, FBITS(f1));
    ST32(s0+28, FBITS(f0));
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
}

/* 089B88A8 */
rv_t func_089B88A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[1216] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1216);
L_089B88A8:;
    sp = sp - 1216;
    s4 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    s3 = a2 + 0;
    { rv_t r_ = func_089B85E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B88F8;
L_089B88F8:;
    a0 = s1 + 0;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    f20 = BITSF(LD32(s1+312));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B890C;
L_089B890C:;
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+56, FBITS(f2));
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B8934;
L_089B8934:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+456); goto L_089B9328; }
    goto L_089B893C;
L_089B893C:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    {u32 a_=sp+(560);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+12);
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {u32 a_=sp+(576);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+20);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    f6 = BITSF(LD32(s1+312));
    {u32 a_=sp+(544);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    {u32 a_=sp+(592);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v0);}
    f2 = BITSF(LD32(sp+48));
    v0 = LD32(sp+32);
    {v[33]=BITSF(v1);}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[34]=BITSF(v0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = 0 + 0;
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[16]=BITSF(v0);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[17]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[18]=BITSF(v0);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v1=FBITS(v[20]);}
    f1 = BITSF(v1);
    {a1=FBITS(v[21]);}
    f0 = BITSF(a1);
    f2 = f2 + f1;
    f1 = BITSF(LD32(sp+52));
    f8 = BITSF(LD32(s1+480));
    f7 = BITSF(0);
    {v0=FBITS(v[22]);}
    f1 = f1 + f0;
    f5 = BITSF(v0);
    f0 = BITSF(LD32(sp+56));
    fcc = FCMP(f8, f7, 2);
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    f0 = f0 + f5;
    ST32(sp+112, FBITS(f7));
    s5 = D_08B285A0 - (-31328);
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    ST32(sp+116, FBITS(f7));
    ST32(sp+120, FBITS(f6));
    ST32(sp+160, v1);
    ST32(sp+164, a1);
    ST32(sp+168, v0);
    ST32(sp+128, v1);
    ST32(sp+132, a1);
    cnd_ = !fcc;
    ST32(sp+136, v0);
    if (cnd_) { goto L_089B8A88; }
    goto L_089B8A48;
L_089B8A48:;
    f2 = BITSF(LD32(s1+592));
    fcc = FCMP(f7, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-31328));
    if (cnd_) { goto L_089B930C; }
    goto L_089B8A5C;
L_089B8A5C:;
    f1 = BITSF(LD32(s1+316));
    f3 = f7;
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f7, 14);
    goto L_089B8A78;
L_089B8A78:;
    cnd_ = fcc;
    ST32(s1+592, FBITS(f0));
    if (cnd_) { goto L_089B8A84; }
    goto L_089B8A80;
L_089B8A80:;
    f3 = f0;
    goto L_089B8A84;
L_089B8A84:;
    ST32(s1+592, FBITS(f3));
    goto L_089B8A88;
L_089B8A88:;
    f4 = BITSF(LD32(s1+484));
    f3 = BITSF(0);
    fcc = FCMP(f4, f3, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s1+324)); goto L_089B8AE0; }
    goto L_089B8AA0;
L_089B8AA0:;
    f2 = BITSF(LD32(s1+596));
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-31328));
    if (cnd_) { goto L_089B92F0; }
    goto L_089B8AB4;
L_089B8AB4:;
    f1 = BITSF(LD32(s1+320));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f0, f3, 14);
    goto L_089B8ACC;
L_089B8ACC:;
    cnd_ = fcc;
    ST32(s1+596, FBITS(f0));
    if (cnd_) { goto L_089B8AD8; }
    goto L_089B8AD4;
L_089B8AD4:;
    f3 = f0;
    goto L_089B8AD8;
L_089B8AD8:;
    ST32(s1+596, FBITS(f3));
    f0 = BITSF(LD32(s1+324));
    goto L_089B8AE0;
L_089B8AE0:;
    f2 = BITSF(LD32(s5-31328));
    f1 = BITSF(LD32(s1+328));
    f0 = f8 * f0;
    f3 = BITSF(LD32(s1+592));
    f1 = f4 * f1;
    f5 = BITSF(LD32(s1+332));
    f0 = f0 * f2;
    f4 = BITSF(LD32(s1+596));
    f1 = f1 * f2;
    f6 = BITSF(LD32(s1+340));
    f0 = f3 - f0;
    f2 = f5;
    f1 = f4 - f1;
    fcc = FCMP(f5, f0, 14);
    ST32(s1+592, FBITS(f0));
    cnd_ = fcc;
    ST32(s1+596, FBITS(f1));
    if (cnd_) { goto L_089B8B28; }
    goto L_089B8B24;
L_089B8B24:;
    f5 = f0;
    goto L_089B8B28;
L_089B8B28:;
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    fcc = FCMP(f5, f2, 14);
    cnd_ = fcc;
    ST32(s1+592, FBITS(f5));
    if (cnd_) { goto L_089B8B40; }
    goto L_089B8B3C;
L_089B8B3C:;
    f2 = f5;
    goto L_089B8B40;
L_089B8B40:;
    fcc = FCMP(f6, f1, 14);
    f0 = f6;
    cnd_ = fcc;
    ST32(s1+592, FBITS(f2));
    if (cnd_) { goto L_089B8B54; }
    goto L_089B8B50;
L_089B8B50:;
    f0 = f1;
    goto L_089B8B54;
L_089B8B54:;
    f3 = BITSF(FBITS(f6) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    ST32(s1+596, FBITS(f0));
    if (cnd_) { goto L_089B8B6C; }
    goto L_089B8B68;
L_089B8B68:;
    f3 = f0;
    goto L_089B8B6C;
L_089B8B6C:;
    s2 = D_08AEEC34 - (-5068);
    f0 = BITSF(LD32(s1+728));
    f26 = BITSF(LD32(s2-5068));
    ST32(sp+184, 0);
    {u32 a_=sp+(656);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    f0 = f26 - f0;
    {u32 a_=sp+(672);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(784);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    f1 = f3 * f0;
    f0 = f2 * f0;
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+180, FBITS(f1));
    {u32 a_=sp+(640);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(768);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    ST32(sp+176, FBITS(f0));
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    {u32 a_=sp+(912);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    f5 = BITSF(LD32(s1+348));
    a1 = LD32(sp+64);
    a2 = LD32(sp+68);
    a3 = LD32(sp+72);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {u32 a_=sp+(928);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1040);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(816);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[68]=BITSF(a1);}
    {v[64]=BITSF(v0);}
    {v[69]=BITSF(a2);}
    {v[65]=BITSF(v1);}
    {v[70]=BITSF(a3);}
    {v[66]=BITSF(a0);}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    t0 = LD32(sp+12);
    t6 = LD32(sp+76);
    t3 = LD32(sp+80);
    t5 = LD32(sp+84);
    t1 = LD32(sp+16);
    t2 = LD32(sp+20);
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    f18 = BITSF(FBITS(f20) ^ 0x80000000u);
    {u32 a_=sp+(1056);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s1+356));
    {u32 a_=sp+(704);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(832);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {v[104]=BITSF(t0);}
    {u32 a_=sp+(944);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {v[108]=BITSF(t6);}
    {v[105]=BITSF(t1);}
    {v[109]=BITSF(t3);}
    {v[106]=BITSF(t2);}
    {v[110]=BITSF(t5);}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    f19 = BITSF(LD32(s1+360));
    {v[96]=BITSF(a1);}
    {v[100]=BITSF(v0);}
    {v[97]=BITSF(a2);}
    {v[101]=BITSF(v1);}
    {v[98]=BITSF(a3);}
    {v[102]=BITSF(a0);}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(880);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+24);
    a0 = LD32(sp+28);
    a1 = LD32(sp+32);
    t4 = LD32(sp+88);
    a2 = LD32(sp+92);
    a3 = LD32(sp+96);
    {u32 a_=sp+(720);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(848);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {u32 a_=sp+(960);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {v[96]=BITSF(v1);}
    {v[100]=BITSF(t4);}
    {v[97]=BITSF(a0);}
    {v[101]=BITSF(a2);}
    {v[98]=BITSF(a1);}
    {v[102]=BITSF(a3);}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    ST32(s1+596, FBITS(f3));
    f5 = f18 - f5;
    f4 = BITSF(FBITS(f4) ^ 0x80000000u);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=sp+(752);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    {u32 a_=sp+(640);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(768);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    v0 = FBITS(f19);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[108]=BITSF(t0);}
    {v[36]=BITSF(v0);}
    t0 = FBITS(f4);
    {v[37]=BITSF(t0);}
    t0 = FBITS(f5);
    {v[38]=BITSF(t0);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {t0=FBITS(v[34]);}
    f3 = BITSF(t0);
    {t0=FBITS(v[32]);}
    f1 = BITSF(t0);
    f2 = BITSF(t0);
    {u32 a_=sp+(736);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    t0 = FBITS(f1);
    {v[0]=BITSF(t0);}
    {t0=FBITS(v[33]);}
    f1 = BITSF(t0);
    f0 = BITSF(t0);
    {u32 a_=sp+(784);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    t0 = FBITS(f0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {v[1]=BITSF(t0);}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    t0 = FBITS(f3);
    {u32 a_=sp+(912);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {v[2]=BITSF(t0);}
    {v[104]=BITSF(t6);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[96]=o0;v[97]=o1;v[98]=o2;}
    {v[105]=BITSF(t3);}
    {t0=FBITS(v[96]);}
    {v[106]=BITSF(t5);}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp+208, FBITS(f2));
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp+112, FBITS(f2));
    {v[109]=BITSF(t1);}
    {v[110]=BITSF(t2);}
    ST32(sp+116, FBITS(f1));
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    ST32(sp+120, FBITS(f3));
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    f15 = BITSF(t0);
    ST32(sp+196, FBITS(f4));
    {u32 a_=sp+(976);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    ST32(sp+200, FBITS(f5));
    {v[64]=BITSF(v1);}
    {u32 a_=sp+(864);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+212, FBITS(f1));
    {v[65]=BITSF(a0);}
    {v[68]=BITSF(v0);}
    ST32(sp+216, FBITS(f3));
    {v[66]=BITSF(a1);}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(sp+208, t0);
    {v0=FBITS(v[98]);}
    {t0=FBITS(v[97]);}
    ST32(sp+192, FBITS(f19));
    f10 = BITSF(v0);
    f9 = BITSF(t0);
    f0 = BITSF(LD32(s1+344));
    f12 = BITSF(LD32(s1+352));
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f18 = f18 - f0;
    f12 = BITSF(FBITS(f12) ^ 0x80000000u);
    {v[72]=BITSF(t4);}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    a1 = FBITS(f18);
    v1 = FBITS(f12);
    {v[73]=BITSF(a2);}
    {v[69]=BITSF(v1);}
    {v[74]=BITSF(a3);}
    {v[70]=BITSF(a1);}
    {float s0=v[72];float s1=v[73];float s2=v[74];float s3=v[75];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[68];float t1=v[69];float t2=v[70];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v1=FBITS(v[32]);}
    {t0=FBITS(v[33]);}
    f1 = BITSF(v1);
    f0 = BITSF(t0);
    {v0=FBITS(v[34]);}
    f6 = BITSF(v0);
    f11 = BITSF(LD32(sp+144));
    f7 = BITSF(LD32(sp+148));
    f8 = BITSF(LD32(sp+152));
    a1 = FBITS(f1);
    v0 = FBITS(f0);
    f5 = BITSF(v1);
    {u32 a_=sp+(992);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f6);
    {v[0]=BITSF(a1);}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {v[1]=BITSF(v0);}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {v[2]=BITSF(v1);}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v1=FBITS(v[4]);}
    {a1=FBITS(v[5]);}
    {v0=FBITS(v[6]);}
    f0 = BITSF(a1);
    f16 = BITSF(v0);
    f1 = BITSF(v1);
    f13 = f7 + f0;
    f17 = f11 + f15;
    f14 = f8 + f16;
    f11 = f11 + f1;
    f7 = f7 + f9;
    f8 = f8 + f10;
    f4 = BITSF(t0);
    f23 = f17 - f11;
    f21 = f7 - f13;
    f22 = f8 - f14;
    f3 = BITSF(v1);
    {u32 a_=sp+(1120);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f25 = BITSF(0);
    a0 = FBITS(f23);
    v0 = FBITS(f21);
    {v[0]=BITSF(a0);}
    v1 = FBITS(f22);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {t0=FBITS(v[0]);}
    f0 = BITSF(t0);
    f2 = BITSF(a1);
    {u32 a_=sp+(912);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    fcc = FCMP(f25, f0, 12);
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    ST32(sp+112, FBITS(f19));
    f24 = f26;
    a1 = D_08B1BC60 - (-17312);
    ST32(sp+160, FBITS(f17));
    ST32(sp+164, FBITS(f7));
    ST32(sp+168, FBITS(f8));
    ST32(sp+116, FBITS(f12));
    ST32(sp+120, FBITS(f18));
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f4));
    ST32(sp+136, FBITS(f6));
    ST32(sp+192, FBITS(f3));
    ST32(sp+196, FBITS(f2));
    ST32(sp+200, FBITS(f16));
    ST32(sp+208, FBITS(f11));
    ST32(sp+212, FBITS(f13));
    ST32(sp+216, FBITS(f14));
    ST32(sp+224, FBITS(f23));
    ST32(sp+228, FBITS(f21));
    cnd_ = fcc;
    ST32(sp+232, FBITS(f22));
    if (cnd_) { goto L_089B91BC; }
    goto L_089B904C;
L_089B904C:;
    f0 = BITSF(LD32(a1-17312));
    goto L_089B9050;
L_089B9050:;
    f2 = BITSF(LD32(s2-5068));
    f4 = BITSF(LD32(sp+160));
    f5 = BITSF(LD32(sp+164));
    f3 = BITSF(LD32(sp+168));
    f2 = f2 - f0;
    f6 = BITSF(LD32(sp+216));
    f1 = BITSF(LD32(sp+208));
    f5 = f5 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(sp+212));
    f6 = f6 * f2;
    f1 = f1 * f2;
    f0 = f0 * f2;
    ST32(sp+128, FBITS(f4));
    f7 = f3 + f6;
    f4 = f4 + f1;
    f8 = f5 + f0;
    ST32(sp+132, FBITS(f5));
    ST32(sp+136, FBITS(f3));
    ST32(sp+112, FBITS(f1));
    ST32(sp+116, FBITS(f0));
    ST32(sp+120, FBITS(f6));
    ST32(sp+192, FBITS(f4));
    ST32(sp+196, FBITS(f8));
    ST32(sp+200, FBITS(f7));
    {v[112]=BITSF(LD32(sp+(64)));}
    {v[113]=BITSF(LD32(sp+(68)));}
    {v[114]=BITSF(LD32(sp+(72)));}
    {v[116]=BITSF(LD32(sp+(76)));}
    {v[117]=BITSF(LD32(sp+(80)));}
    {v[118]=BITSF(LD32(sp+(84)));}
    {v[120]=BITSF(LD32(sp+(88)));}
    {v[121]=BITSF(LD32(sp+(92)));}
    {v[122]=BITSF(LD32(sp+(96)));}
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
    {ST32(sp+(304),FBITS(v[80]));}
    {ST32(sp+(308),FBITS(v[81]));}
    {ST32(sp+(312),FBITS(v[82]));}
    {ST32(sp+(316),FBITS(v[84]));}
    {ST32(sp+(320),FBITS(v[85]));}
    {ST32(sp+(324),FBITS(v[86]));}
    {ST32(sp+(328),FBITS(v[88]));}
    {ST32(sp+(332),FBITS(v[89]));}
    {ST32(sp+(336),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+304));
    f1 = BITSF(LD32(sp+308));
    f2 = BITSF(LD32(sp+312));
    f3 = BITSF(LD32(sp+316));
    f5 = BITSF(LD32(sp+320));
    f6 = BITSF(LD32(sp+324));
    ST32(s4+8, FBITS(f7));
    ST32(s4, FBITS(f4));
    ST32(s4+4, FBITS(f8));
    ST32(s3, FBITS(f0));
    ST32(s3+4, FBITS(f1));
    ST32(s3+8, FBITS(f2));
    ST32(s3+12, FBITS(f3));
    ST32(s3+16, FBITS(f5));
    f0 = BITSF(LD32(sp+328));
    f1 = BITSF(LD32(sp+336));
    ST32(s3+20, FBITS(f6));
    ST32(s3+24, FBITS(f0));
    f0 = BITSF(LD32(sp+332));
    ST32(s3+32, FBITS(f1));
    ST32(s3+28, FBITS(f0));
    sp = sp + 1216;
    return (rv_t){ v0, v1, f0 };
L_089B91BC:;
    {u32 a_=sp+(1136);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a0);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    s0 = sp + 240;
    a1 = sp + 208;
    v0 = LD32(v1-16);
    a2 = sp + 224;
    t0 = 0 + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    v0 = s1 + v0;
    f12 = BITSF(v1);
    f20 = f26 / f0;
    a3 = LD32(v0+4);
    a0 = s0 + 0;
    f0 = f23 * f20;
    f1 = f21 * f20;
    f2 = f22 * f20;
    ST32(sp+224, FBITS(f0));
    ST32(sp+228, FBITS(f1));
    ST32(sp+232, FBITS(f2));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089B9224;
L_089B9224:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B922C;
L_089B922C:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a1 = D_08B1BC60 - (-17312);
    if (cnd_) { goto L_089B9280; }
    goto L_089B923C;
L_089B923C:;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(s1+364));
    f24 = f1 * f20;
    f0 = f0 * f20;
    f24 = f24 - f0;
    fcc = FCMP(f24, f25, 14);
    cnd_ = fcc;
    f2 = f25;
    if (cnd_) { goto L_089B9264; }
    goto L_089B9260;
L_089B9260:;
    f2 = f24;
    goto L_089B9264;
L_089B9264:;
    fcc = FCMP(f26, f2, 14);
    cnd_ = fcc;
    f0 = f26;
    if (cnd_) { goto L_089B9278; }
    goto L_089B9274;
L_089B9274:;
    f0 = f2;
    goto L_089B9278;
L_089B9278:;
    f24 = f0;
    a1 = D_08B1BC60 - (-17312);
    goto L_089B9280;
L_089B9280:;
    f2 = BITSF(LD32(a1-17312));
    fcc = FCMP(f24, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089B929C; }
    goto L_089B9294;
L_089B9294:;
    ST32(a1-17312, FBITS(f24));
    goto L_089B904C;
L_089B929C:;
    fcc = FCMP(f2, f24, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a1-17312));
    if (cnd_) { goto L_089B9050; }
    goto L_089B92AC;
L_089B92AC:;
    f0 = BITSF(LD32(s1+368));
    f1 = BITSF(LD32(s5-31328));
    f0 = f0 * f1;
    f0 = f2 + f0;
    fcc = FCMP(f24, f0, 12);
    cnd_ = !fcc;
    ST32(a1-17312, FBITS(f0));
    if (cnd_) { goto L_089B92D0; }
    goto L_089B92CC;
L_089B92CC:;
    ST32(a1-17312, FBITS(f24));
    goto L_089B92D0;
L_089B92D0:;
    f1 = BITSF(LD32(a1-17312));
    f0 = BITSF(LD32(s2-5068));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089B92E8; }
    goto L_089B92E8;
L_089B92E8:;
    ST32(a1-17312, FBITS(f0));
    goto L_089B904C;
L_089B92F0:;
    f1 = BITSF(LD32(s1+320));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f3, f0, 14);
    goto L_089B8ACC;
L_089B930C:;
    f1 = BITSF(LD32(s1+316));
    f0 = f2 * f0;
    f0 = f0 * f1;
    f0 = f2 - f0;
    fcc = FCMP(f7, f0, 14);
    f3 = f7;
    goto L_089B8A78;
L_089B9328:;
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9338;
L_089B9338:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089B893C; }
    goto L_089B9340;
L_089B9340:;
    v1 = LD32(s1+976);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_089B93A4; }
    goto L_089B9350;
L_089B9350:;
    v0 = v1 << 2;
    v1 = D_08ADE598 - (-6760);
    v1 = v1 - 6760;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089B936Cu: goto L_089B936C; case 0x089B94C0u: goto L_089B94C0; case 0x089B94D0u: goto L_089B94D0; case 0x089B94E0u: goto L_089B94E0; case 0x089B94F0u: goto L_089B94F0; case 0x089B9500u: goto L_089B9500; case 0x089B9510u: goto L_089B9510; case 0x089B9520u: goto L_089B9520; default: rs_break(0, 0x089b9364); }
L_089B936C:;
    a0 = s2 + 0;
    v0 = func_089C6744(a0, 0, 0, 0);
    goto L_089B9374;
L_089B9374:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B9378:;
    a1 = v0 + 0;
    a2 = sp + 48;
    a0 = LD32(v1-12);
    a3 = sp + 64;
    t0 = 0 + 0;
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B93A0;
L_089B93A0:;
    v1 = LD32(s2);
    goto L_089B93A4;
L_089B93A4:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B93B0;
L_089B93B0:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B93C4;
L_089B93C4:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(432);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(416);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {u32 a_=sp+(448);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {u32 a_=sp+(464);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+52);
    {v[32]=BITSF(v1);}
    {u32 a_=sp+(352);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+48);
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+56);
    {v[21]=BITSF(v0);}
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    {v1=FBITS(v[16]);}
    {a1=FBITS(v[17]);}
    ST32(sp+144, v1);
    f5 = BITSF(v0);
    f4 = BITSF(v1);
    ST32(sp+148, a1);
    f3 = BITSF(a1);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+152, v0);
    ST32(sp+128, v1);
    ST32(sp+132, a1);
    ST32(sp+136, v0);
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = f0 + f4;
    f2 = f2 + f5;
    f1 = f1 + f3;
    ST32(sp+48, FBITS(f0));
    ST32(sp+56, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    goto L_089B893C;
L_089B94C0:;
    a0 = s2 + 0;
    v0 = func_089C676C(a0, 0, 0, 0);
    goto L_089B94C8;
L_089B94C8:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B94D0:;
    a0 = s2 + 0;
    v0 = func_089C6794(a0, 0, 0, 0);
    goto L_089B94D8;
L_089B94D8:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B94E0:;
    a0 = s2 + 0;
    v0 = func_089C67BC(a0, 0, 0, 0);
    goto L_089B94E8;
L_089B94E8:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B94F0:;
    a0 = s2 + 0;
    v0 = func_089C67E4(a0, 0, 0, 0);
    goto L_089B94F8;
L_089B94F8:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B9500:;
    a0 = s2 + 0;
    v0 = func_089C680C(a0, 0, 0, 0);
    goto L_089B9508;
L_089B9508:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B9510:;
    a0 = s2 + 0;
    v0 = func_089C6834(a0, 0, 0, 0);
    goto L_089B9518;
L_089B9518:;
    v1 = LD32(s2);
    goto L_089B9378;
L_089B9520:;
    a0 = s2 + 0;
    v0 = func_089C685C(a0, 0, 0, 0);
    goto L_089B9528;
L_089B9528:;
    v1 = LD32(s2);
    goto L_089B9378;
}

/* 089B9530 */
u64 func_089B9530(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9530:;
    sp = sp - 16;
    v1 = LD_U8(a0+195);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_089B9550; }
    goto L_089B9544;
L_089B9544:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089B9550:;
    { u64 r_ = func_089C671C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9558;
L_089B9558:;
    v0 = v0 < 0x1u;
    goto L_089B9544;
}

/* 089B9560 */
rv_t func_089B9560(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9560:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089B9530(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9574;
L_089B9574:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B958C; }
    goto L_089B957C;
L_089B957C:;
    goto L_089B9580;
L_089B9580:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B958C:;
    { rv_t r_ = func_089C83F4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9594;
L_089B9594:;
    goto L_089B9580;
}

/* 089B959C */
rv_t func_089B959C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B959C:;
    sp = sp - 16;
    s1 = a2 + 0;
    a2 = 1;
    s0 = a1 + 0;
    v0 = LD32(a0+456);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a1 = v0 + 0;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B95CC;
L_089B95CC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089B95F0; }
    goto L_089B95D4;
L_089B95D4:;
    v1 = LD32(v0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f0 = BITSF(LD32(v0+80));
    ST32(s0, FBITS(f0));
    f1 = BITSF(LD32(a0+52));
    ST32(s1, FBITS(f1));
    goto L_089B95F0;
L_089B95F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B9604 */
rv_t func_089B9604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9604:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089CB944(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9618;
L_089B9618:;
    a1 = 0 + 0;
    a0 = LD32(s0+40);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9624;
L_089B9624:;
    v0 = D_08AEEC38 - (-5064);
    a0 = LD32(s0+40);
    f12 = BITSF(LD32(v0-5064));
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9634;
L_089B9634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089B9644 */
rv_t func_089B9644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_089B9644:;
    sp = sp - 272;
    s2 = a1 + 0;
    v0 = LD32(a0+844);
    s1 = v0 & 0x400;
    cnd_ = s1 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_089B96A0; }
    goto L_089B966C;
L_089B966C:;
    v0 = a0 + 748;
    f0 = BITSF(LD32(a0+748));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(a1, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    goto L_089B9688;
L_089B9688:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_089B96A0:;
    a1 = sp + 0;
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_089B85E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B96B8;
L_089B96B8:;
    a0 = sp + 64;
    a1 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B96C8;
L_089B96C8:;
    {u32 a_=sp+(240);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    f3 = BITSF(LD32(sp+64));
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+8);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+16);
    {v[50]=BITSF(v1);}
    {v[20]=BITSF(s1);}
    v1 = LD32(sp+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[21]=BITSF(s1);}
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+28);
    {v[50]=BITSF(v1);}
    v1 = LD32(sp+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[33]=BITSF(v0);}
    v0 = 0x437a0000u;
    {v[34]=BITSF(v1);}
    {v[22]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f5 = BITSF(v0);
    f2 = BITSF(LD32(sp+68));
    {v0=FBITS(v[17]);}
    f3 = f3 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+72));
    f4 = BITSF(v0);
    f2 = f2 + f0;
    f1 = f1 + f6;
    v0 = D_08AEEC3C - (-5060);
    f0 = BITSF(LD32(v0-5060));
    ST32(s2, FBITS(f3));
    ST32(s2+8, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    ST32(sp+104, FBITS(f0));
    ST32(sp+96, 0);
    ST32(sp+100, 0);
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f4));
    ST32(sp+120, FBITS(f6));
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f6));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f1));
    goto L_089B9688;
}

/* 089B97C8 */
rv_t func_089B97C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089B97C8:;
    sp = sp - 96;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a2 + 0;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_089B980C; }
    goto L_089B97F0;
L_089B97F0:;
    v0 = D_08AEEC40 - (-5056);
    f20 = BITSF(LD32(a3+60));
    f0 = BITSF(LD32(v0-5056));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0); goto L_089B9818; }
    goto L_089B980C;
L_089B980C:;
    v0 = D_08AEEC44 - (-5052);
    f20 = BITSF(LD32(v0-5052));
    v1 = LD32(s0);
    goto L_089B9818;
L_089B9818:;
    f12 = BITSF(0);
    a2 = 0 + 0;
    v0 = LD32(v1+56);
    a0 = s0 + 0;
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9830;
L_089B9830:;
    v1 = LD32(s0);
    v0 = D_08B45A9C - (23196);
    a1 = v0 + 23196;
    a0 = LD32(v1-12);
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(a1+8));
    a0 = s0 + a0;
    v1 = LD32(a0);
    f0 = BITSF(LD32(a1+4));
    ST32(sp+16, FBITS(f1));
    a1 = sp + 16;
    v0 = LD32(v1+20);
    ST32(sp+20, FBITS(f0));
    t_ = v0;
    ST32(sp+24, FBITS(f2));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B986C;
L_089B986C:;
    v1 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v1-31328));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp));
    f6 = f5 + f5;
    f7 = f4 + f4;
    f8 = f3 + f3;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 + f6;
    f1 = f1 + f7;
    f0 = f0 + f8;
    a0 = sp + 32;
    a1 = s1 + 0;
    a2 = 1;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B98E4;
L_089B98E4:;
    a1 = sp + 48;
    f0 = BITSF(LD32(sp+32));
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+36));
    v1 = LD32(s0);
    f12 = f20;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp+48, FBITS(f2));
    a0 = s0 + 0;
    f1 = f1 - f0;
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f1));
    v0 = LD32(v1+72);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9930;
L_089B9930:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089B9960; }
    goto L_089B9944;
L_089B9944:;
    goto L_089B9948;
L_089B9948:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089B9960:;
    v0 = LD32(s0);
    v1 = LD32(v0+56);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9970;
L_089B9970:;
    goto L_089B9948;
}

/* 089B9978 */
rv_t func_089B9978(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089B9978:;
    a1 = LD32(a0);
    v0 = LD32(a0+456);
    v1 = LD32(a1-16);
    a0 = a0 + v1;
    a1 = LD32(a0+4);
    v0 = v0 ^ a1;
    v0 = 0 < v0;
    return (rv_t){ v0, v1, f0 };
}

/* 089B9998 */
void func_089B9998(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089B9998:;
    sp = sp - 32;
    v0 = D_08AEEC50 - (-5040);
    s0 = a0 + 0;
    f20 = f12;
    f0 = BITSF(LD32(a0+860));
    f21 = BITSF(LD32(v0-5040));
    v1 = LD32(a0+988);
    f1 = f0 - f13;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+988, v1);
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    v0 = v1 | 0x1;
    if (cnd_) { goto L_089B99F0; }
    goto L_089B99EC;
L_089B99EC:;
    ST32(a0+988, v0);
    goto L_089B99F0;
L_089B99F0:;
    ST32(s0+860, FBITS(f13));
    v0 = func_089B7D88(a0);
    goto L_089B99F8;
L_089B99F8:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+868)); goto L_089B9A4C; }
    goto L_089B9A00;
L_089B9A00:;
    f0 = BITSF(LD32(s0+856));
    f1 = f0 - f20;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f21, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+856, FBITS(f20)); goto L_089B9A34; }
    goto L_089B9A24;
L_089B9A24:;
    v0 = LD32(s0+988);
    v0 = v0 | 0x1;
    ST32(s0+988, v0);
    ST32(s0+856, FBITS(f20));
    goto L_089B9A34;
L_089B9A34:;
    sp = sp + 32;
    return;
L_089B9A4C:;
    f1 = f0 - f20;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f21, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+868, FBITS(f20)); goto L_089B9A34; }
    goto L_089B9A6C;
L_089B9A6C:;
    v0 = LD32(s0+988);
    v0 = v0 | 0x1;
    ST32(s0+988, v0);
    ST32(s0+868, FBITS(f20));
    goto L_089B9A34;
}

/* 089B9A80 */
void func_089B9A80(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9A80:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+860));
    ST32(a2, FBITS(f0));
    v0 = func_089B7D88(a0);
    goto L_089B9AA4;
L_089B9AA4:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+868)); goto L_089B9AB0; }
    goto L_089B9AAC;
L_089B9AAC:;
    f0 = BITSF(LD32(s0+856));
    goto L_089B9AB0;
L_089B9AB0:;
    ST32(s1, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 089B9AC8 */
void func_089B9AC8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9AC8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+844);
    v1 = LD32(a0+588);
    a2 = LD32(a0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(a0+844, v0);
    v0 = LD32(a2+420);
    t_ = v0;
    a1 = LD32(v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9AF8;
L_089B9AF8:;
    a0 = s0 + 0;
    func_089B67CC(a0);
    goto L_089B9B00;
L_089B9B00:;
    a0 = s0 + 0;
    func_089BA564(a0, 0, 0, 0);
    goto L_089B9B08;
L_089B9B08:;
    a0 = s0 + 0;
    func_089BA6F0(a0, 0, 0, 0);
    goto L_089B9B10;
L_089B9B10:;
    sp = sp + 16;
    return;
}

/* 089B9B20 */
rv_t func_089B9B20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9B20:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089B6314(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089B9B34;
L_089B9B34:;
    a0 = s0 + 0;
    v0 = func_089B6748(a0);
    goto L_089B9B3C;
L_089B9B3C:;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B9B58; }
    goto L_089B9B48;
L_089B9B48:;
    v0 = func_089B609C(a0, 0, 0, 0);
    goto L_089B9B50;
L_089B9B50:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089B9BAC; }
    goto L_089B9B58;
L_089B9B58:;
    a0 = s0 + 0;
    { rv_t r_ = func_089C48BC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9B60;
L_089B9B60:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089B9B74;
L_089B9B74:;
    v1 = 0xf0330000u;
    v1 = v1 | 0xbf30;
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_089B9B94; }
    goto L_089B9B84;
L_089B9B84:;
    goto L_089B9B88;
L_089B9B88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089B9B94:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08876270(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9BA4;
L_089B9BA4:;
    goto L_089B9B88;
L_089B9BAC:;
    func_089BA6AC(a0);
    goto L_089B9BB4;
L_089B9BB4:;
    a0 = s0 + 0;
    func_089BA78C(a0);
    goto L_089B9BBC;
L_089B9BBC:;
    a0 = s0 + 0;
    v0 = func_089B609C(a0, 0, 0, 0);
    goto L_089B9BC4;
L_089B9BC4:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    v0 = LD32(v1+420);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9BD8;
L_089B9BD8:;
    v1 = LD32(s0+844);
    a1 = LD32(s0);
    v1 = v1 | 0x8;
    ST32(s0+844, v1);
    v0 = LD32(a1+464);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9BF4;
L_089B9BF4:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CAF64(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9BFC;
L_089B9BFC:;
    goto L_089B9B88;
}

/* 089B9C04 */
u64 func_089B9C04(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089B9C04:;
    sp = sp - 64;
    a2 = D_08C2ACF8 - (-21256);
    v0 = a2 - 21256;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089B9C9C; }
    goto L_089B9C50;
L_089B9C50:;
    a2 = LD32(a2-21256);
    a3 = a1 + 0;
    goto L_089B9C58;
L_089B9C58:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089B9C8C; }
    goto L_089B9C70;
L_089B9C70:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089B9CA0; }
    goto L_089B9C80;
L_089B9C80:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089B9C70; }
    goto L_089B9C8C;
L_089B9C8C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089B9C58; }
    goto L_089B9C9C;
L_089B9C9C:;
    v1 = LD32(sp+8);
    goto L_089B9CA0;
L_089B9CA0:;
    cnd_ = v1 == 0;
    v0 = D_08AEEC54 - (-5036);
    if (cnd_) { goto L_089B9D34; }
    goto L_089B9CA8;
L_089B9CA8:;
    f20 = BITSF(LD32(v0-5036));
    a3 = 0 + 0;
    goto L_089B9CB0;
L_089B9CB0:;
    a1 = 32;
    a2 = 0 + 0;
    a0 = 0x8001;
    s1 = LD32(v1);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9CC4;
L_089B9CC4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089B9D04; }
    goto L_089B9CCC;
L_089B9CCC:;
    s0 = LD32(v0+24);
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_089B9CD8;
L_089B9CD8:;
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
    goto L_089B9D00;
L_089B9D00:;
    ST32(s0+8, v0);
    goto L_089B9D04;
L_089B9D04:;
    v0 = LD32(s1);
    a1 = s2 + 0;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9D1C;
L_089B9D1C:;
    a0 = sp + 0;
    a1 = 1;
    func_08AC5A28(a0, a1);
    goto L_089B9D28;
L_089B9D28:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089B9CB0; }
    goto L_089B9D34;
L_089B9D34:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089B9DBC; }
    goto L_089B9D48;
L_089B9D48:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089B9DBC; }
    goto L_089B9D54;
L_089B9D54:;
    v0 = LD32(s1);
    goto L_089B9D58;
L_089B9D58:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089B9DAC; }
    goto L_089B9D6C;
L_089B9D6C:;
    v0 = LD_U8(s0+8);
    goto L_089B9D70;
L_089B9D70:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089B9DF0; }
    goto L_089B9D78;
L_089B9D78:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B9DE0; }
    goto L_089B9D80;
L_089B9D80:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089B9D88;
L_089B9D88:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9D94;
L_089B9D94:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089B9DA0;
L_089B9DA0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089B9D70; }
    goto L_089B9DA8;
L_089B9DA8:;
    v1 = LD32(s1+4);
    goto L_089B9DAC;
L_089B9DAC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089B9D58; }
    goto L_089B9DBC;
L_089B9DBC:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089B9DE0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089B9D88;
L_089B9DF0:;
    s0 = LD32(s0+4);
    goto L_089B9DA0;
}

/* 089B9DF8 */
u64 func_089B9DF8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089B9DF8:;
    sp = sp - 48;
    v1 = D_08C2ACF8 - (-21256);
    v1 = v1 - 21256;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    func_08AC5A28(a0, a1);
    goto L_089B9E38;
L_089B9E38:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08AEEC58 - (-5032);
    if (cnd_) { goto L_089B9E88; }
    goto L_089B9E44;
L_089B9E44:;
    f20 = BITSF(LD32(v0-5032));
    s1 = 999;
    s0 = LD32(v1);
    goto L_089B9E50;
L_089B9E50:;
    a0 = s0 + 0;
    v0 = func_089B6748(a0);
    goto L_089B9E58;
L_089B9E58:;
    v0 = v0 < 0x2u;
    a0 = 0x8062;
    a1 = 12;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089B9EC4; }
    goto L_089B9E70;
L_089B9E70:;
    a0 = sp + 0;
    goto L_089B9E74;
L_089B9E74:;
    a1 = 1;
    func_08AC5A28(a0, a1);
    goto L_089B9E7C;
L_089B9E7C:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_089B9E50; }
    goto L_089B9E88;
L_089B9E88:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089B9EB4; }
    goto L_089B9E9C;
L_089B9E9C:;
    goto L_089B9EA0;
L_089B9EA0:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089B9EB4:;
    { u64 r_ = func_08AC5ACC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9EBC;
L_089B9EBC:;
    goto L_089B9EA0;
L_089B9EC4:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089B9ECC;
L_089B9ECC:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089B9E70; }
    goto L_089B9EE0;
L_089B9EE0:;
    a3 = LD32(v0+24);
    cnd_ = a3 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089B9F14; }
    goto L_089B9EEC;
L_089B9EEC:;
    f0 = BITSF(LD32(s0+52));
    f0 = f0 * f20;
    ST32(a3+8, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(a3+4, s1);
    ST32(a3, v1);
    v1 = LD32(s0);
    goto L_089B9F14;
L_089B9F14:;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t0, v1);
    a3 = LD32(s0);
    v0 = LD32(a3-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9F3C;
L_089B9F3C:;
    a0 = sp + 0;
    goto L_089B9E74;
}

/* 089B9F44 */
float func_089B9F44(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9F44:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089B7D88(a0);
    goto L_089B9F58;
L_089B9F58:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+868)); goto L_089B9F64; }
    goto L_089B9F60;
L_089B9F60:;
    f0 = BITSF(LD32(s0+856));
    goto L_089B9F64;
L_089B9F64:;
    sp = sp + 16;
    return f0;
}

/* 089B9F74 */
float func_089B9F74(u32 a0)
{
    float f0 = 0;
L_089B9F74:;
    f0 = BITSF(LD32(a0+860));
    return f0;
}

/* 089B9F7C */
rv_t func_089B9F7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089B9F7C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a1+24);
    cnd_ = s1 == 0;
    s2 = s1 + 24;
    if (cnd_) { goto L_089BA368; }
    goto L_089B9FA0;
L_089B9FA0:;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089B9FB0;
L_089B9FB0:;
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
    if (cnd_) { goto L_089BA230; }
    goto L_089B9FEC;
L_089B9FEC:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA170; }
    goto L_089B9FFC;
L_089B9FFC:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BA094; }
    goto L_089BA024;
L_089BA024:;
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
    if (cnd_) { goto L_089BA070; }
    goto L_089BA060;
L_089BA060:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BA070;
L_089BA070:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA0B4; }
    goto L_089BA080;
L_089BA080:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BA0B4; }
    goto L_089BA090;
L_089BA090:;
    goto L_089BA094;
L_089BA094:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA0B4; }
    goto L_089BA0A8;
L_089BA0A8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BA0B4;
L_089BA0B4:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BA144; }
    goto L_089BA0D4;
L_089BA0D4:;
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
    if (cnd_) { goto L_089BA120; }
    goto L_089BA110;
L_089BA110:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BA120;
L_089BA120:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA164; }
    goto L_089BA130;
L_089BA130:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BA164; }
    goto L_089BA140;
L_089BA140:;
    goto L_089BA144;
L_089BA144:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA164; }
    goto L_089BA158;
L_089BA158:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BA164;
L_089BA164:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089BA2E8; }
    goto L_089BA16C;
L_089BA16C:;
    goto L_089BA170;
L_089BA170:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BA204; }
    goto L_089BA194;
L_089BA194:;
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
    if (cnd_) { goto L_089BA1E0; }
    goto L_089BA1D0;
L_089BA1D0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BA1E0;
L_089BA1E0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA224; }
    goto L_089BA1F0;
L_089BA1F0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BA224; }
    goto L_089BA200;
L_089BA200:;
    goto L_089BA204;
L_089BA204:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA224; }
    goto L_089BA218;
L_089BA218:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BA224;
L_089BA224:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089BA2E8; }
    goto L_089BA22C;
L_089BA22C:;
    goto L_089BA230;
L_089BA230:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BA2C4; }
    goto L_089BA254;
L_089BA254:;
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
    if (cnd_) { goto L_089BA2A0; }
    goto L_089BA290;
L_089BA290:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BA2A0;
L_089BA2A0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA2E4; }
    goto L_089BA2B0;
L_089BA2B0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BA2E4; }
    goto L_089BA2C0;
L_089BA2C0:;
    goto L_089BA2C4;
L_089BA2C4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA2E4; }
    goto L_089BA2D8;
L_089BA2D8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BA2E4;
L_089BA2E4:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089BA2E8;
L_089BA2E8:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(s1+(0),FBITS(v[96]));}
    {ST32(s1+(4),FBITS(v[97]));}
    {ST32(s1+(8),FBITS(v[98]));}
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA308;
L_089BA308:;
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    ST32(s1+24, FBITS(f1));
    a1 = s1 + 12;
    ST32(s2+4, FBITS(f2));
    ST32(s2+8, FBITS(f0));
    v0 = LD32(s0);
    v1 = LD32(v0+276);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA334;
L_089BA334:;
    a1 = LD32(s0);
    v0 = LD32(a1+268);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA344;
L_089BA344:;
    ST32(s1+48, v0);
    a0 = s0 + 0;
    v0 = LD32(s0+848);
    ST32(s1+52, v0);
    f0 = func_089B9F44(a0);
    goto L_089BA358;
L_089BA358:;
    ST32(s1+56, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089B9F74(a0);
    goto L_089BA364;
L_089BA364:;
    ST32(s1+60, FBITS(f0));
    goto L_089BA368;
L_089BA368:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BA384 */
rv_t func_089BA384(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA384:;
    sp = sp - 16;
    s1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BA3C4; }
    goto L_089BA3A8;
L_089BA3A8:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC280(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA3B0;
L_089BA3B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BA3C4:;
    func_089C9D08(a0);
    goto L_089BA3CC;
L_089BA3CC:;
    v0 = LD32(s0+844);
    v0 = v0 | s1;
    ST32(s0+844, v0);
    goto L_089BA3A8;
}

/* 089BA3DC */
rv_t func_089BA3DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA3DC:;
    sp = sp - 16;
    v1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BA414; }
    goto L_089BA3FC;
L_089BA3FC:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC288(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA404;
L_089BA404:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BA414:;
    func_089C9E28(a0);
    goto L_089BA41C;
L_089BA41C:;
    v0 = LD32(s0+844);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s0+844, v0);
    goto L_089BA3FC;
}

/* 089BA42C */
rv_t func_089BA42C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA42C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089B6758(a0, t1, t2, t3);
    goto L_089BA440;
L_089BA440:;
    v0 = LD32(s0+852);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BA484; }
    goto L_089BA450;
L_089BA450:;
    v0 = LD32(s0+988);
    v0 = v0 | 0x20;
    goto L_089BA458;
L_089BA458:;
    ST32(s0+988, v0);
    a0 = s0 + 0;
    func_089BA564(a0, 0, 0, 0);
    goto L_089BA464;
L_089BA464:;
    a0 = s0 + 0;
    func_089BA6F0(a0, 0, 0, 0);
    goto L_089BA46C;
L_089BA46C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC290(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA474;
L_089BA474:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BA484:;
    func_089B67CC(a0);
    goto L_089BA48C;
L_089BA48C:;
    v0 = LD32(s0+988);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    goto L_089BA458;
}

/* 089BA498 */
u32 func_089BA498(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089BA498:;
    v0 = LD_U8(a0+195);
    f1 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+988); goto L_089BA4E0; }
    goto L_089BA4A8;
L_089BA4A8:;
    f0 = BITSF(LD32(a0+500));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_089BA4D0; }
    goto L_089BA4BC;
L_089BA4BC:;
    f0 = BITSF(LD32(a0+496));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089BA4D8; }
    goto L_089BA4D0;
L_089BA4D0:;
    v0 = 1;
    return v0;
L_089BA4D8:;
    return v0;
L_089BA4E0:;
    v0 = v0 & 0x1;
    return v0;
}

/* 089BA4E8 */
void func_089BA4E8(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA4E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089BA498(a0);
    goto L_089BA4FC;
L_089BA4FC:;
    f2 = BITSF(0);
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089BA548; }
    goto L_089BA508;
L_089BA508:;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+984));
    v0 = D_08AEEC5C - (-5028);
    f0 = f0 + f0;
    f2 = BITSF(LD32(v0-5028));
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 14);
    goto L_089BA528;
L_089BA528:;
    cnd_ = fcc;
    ST32(s0+984, FBITS(f1));
    if (cnd_) { goto L_089BA534; }
    goto L_089BA530;
L_089BA530:;
    f2 = f1;
    goto L_089BA534;
L_089BA534:;
    ST32(s0+984, FBITS(f2));
    sp = sp + 16;
    return;
L_089BA548:;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+984));
    f0 = f0 + f0;
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 14);
    goto L_089BA528;
}

/* 089BA564 */
void func_089BA564(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA564:;
    sp = sp - 16;
    v0 = LD_U8(a0+620);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BA594; }
    goto L_089BA580;
L_089BA580:;
    goto L_089BA584;
L_089BA584:;
    sp = sp + 16;
    return;
L_089BA594:;
    { u64 r_ = func_089C671C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BA59C;
L_089BA59C:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BA580; }
    goto L_089BA5A4;
L_089BA5A4:;
    v0 = func_089C5FEC(a0, 0, 0, 0);
    goto L_089BA5AC;
L_089BA5AC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BA580; }
    goto L_089BA5B4;
L_089BA5B4:;
    ST32(s0+984, 0);
    v0 = func_089C5E34(a0, 0, 0, 0);
    goto L_089BA5BC;
L_089BA5BC:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089BA5D4; }
    goto L_089BA5C8;
L_089BA5C8:;
    v0 = (u32)-1;
    ST32(s0+624, v0);
    goto L_089BA580;
L_089BA5D4:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BA5DC;
L_089BA5DC:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BA580; }
    goto L_089BA5E8;
L_089BA5E8:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA5F8;
L_089BA5F8:;
    f12 = BITSF(LD32(s0+984));
    a0 = s1 + 0;
    a2 = v0 + 0;
    a1 = s0 + 624;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA60C;
L_089BA60C:;
    v0 = 1;
    ST8(s0+620, v0);
    a0 = s0 + 0;
    func_089BA624(a0);
    goto L_089BA61C;
L_089BA61C:;
    goto L_089BA584;
}

/* 089BA624 */
void func_089BA624(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA624:;
    sp = sp - 16;
    v0 = LD_U8(a0+620);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BA664; }
    goto L_089BA63C;
L_089BA63C:;
    v1 = LD32(a0+624);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089BA664; }
    goto L_089BA64C;
L_089BA64C:;
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BA654;
L_089BA654:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BA674; }
    goto L_089BA65C;
L_089BA65C:;
    func_089BA6AC(a0);
    goto L_089BA664;
L_089BA664:;
    goto L_089BA668;
L_089BA668:;
    sp = sp + 16;
    return;
L_089BA674:;
    func_089BA4E8(a0);
    goto L_089BA67C;
L_089BA67C:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA68C;
L_089BA68C:;
    a0 = LD32(s0+624);
    a1 = v0 + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA698;
L_089BA698:;
    f12 = BITSF(LD32(s0+984));
    a0 = LD32(s0+624);
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA6A4;
L_089BA6A4:;
    goto L_089BA668;
}

/* 089BA6AC */
void func_089BA6AC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA6AC:;
    sp = sp - 16;
    v0 = LD_U8(a0+620);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BA6E0; }
    goto L_089BA6C4;
L_089BA6C4:;
    v1 = LD32(s0+624);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = a0 + 624;
    if (cnd_) { goto L_089BA6E0; }
    goto L_089BA6D4;
L_089BA6D4:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA6DC;
L_089BA6DC:;
    ST8(s0+620, 0);
    goto L_089BA6E0;
L_089BA6E0:;
    sp = sp + 16;
    return;
}

/* 089BA6F0 */
void func_089BA6F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA6F0:;
    sp = sp - 16;
    v0 = LD32(a0+988);
    v1 = v0 | 0x4;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BA728; }
    goto L_089BA714;
L_089BA714:;
    goto L_089BA718;
L_089BA718:;
    sp = sp + 16;
    return;
L_089BA728:;
    ST32(a0+988, v1);
    v0 = func_089B6184(a0, t1, t2, t3);
    goto L_089BA730;
L_089BA730:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089BA748; }
    goto L_089BA73C;
L_089BA73C:;
    v0 = (u32)-1;
    ST32(s0+996, v0);
    goto L_089BA714;
L_089BA748:;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BA750;
L_089BA750:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BA714; }
    goto L_089BA75C;
L_089BA75C:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA76C;
L_089BA76C:;
    a2 = v0 + 0;
    v0 = D_08AEEC60 - (-5024);
    f12 = BITSF(LD32(v0-5024));
    a1 = s0 + 996;
    a0 = s1 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA784;
L_089BA784:;
    goto L_089BA718;
}

/* 089BA78C */
void func_089BA78C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BA78C:;
    sp = sp - 16;
    a2 = a0 + 0;
    a1 = LD32(a0+988);
    v0 = a1 & 0x4;
    cnd_ = v0 == 0;
    a1 = (a1 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    if (cnd_) { goto L_089BA7C4; }
    goto L_089BA7A8;
L_089BA7A8:;
    v1 = LD32(a2+996);
    v0 = (u32)-1;
    a0 = a0 + 996;
    cnd_ = v1 == v0;
    ST32(a2+988, a1);
    if (cnd_) { goto L_089BA7C4; }
    goto L_089BA7BC;
L_089BA7BC:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA7C4;
L_089BA7C4:;
    sp = sp + 16;
    return;
}

/* 089BA7D0 */
void func_089BA7D0(u32 a0, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089BA7D0:;
    sp = sp - 48;
    a1 = D_08B45A9C - (23196);
    f0 = f12;
    a0 = LD32(a0+992);
    a1 = a1 + 23196;
    a2 = sp + 16;
    f12 = f14;
    a3 = 0 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f13));
    ST32(sp+8, 0);
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
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
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[99]));}
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA860;
L_089BA860:;
    sp = sp + 48;
    return;
}

/* 089BA86C */
void func_089BA86C(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BA86C:;
    sp = sp - 32;
    a1 = sp + 0;
    a2 = sp + 4;
    s0 = a0 + 0;
    func_089B9A80(a0, a1, a2);
    goto L_089BA888;
L_089BA888:;
    v0 = D_08B285B4 - (-31308);
    f14 = BITSF(LD32(v0-31308));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    a0 = s0 + 0;
    func_089BA7D0(a0, f12, f13, f14);
    goto L_089BA8A0;
L_089BA8A0:;
    sp = sp + 32;
    return;
}

/* 089BA8B0 */
void func_089BA8B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089BA8B0:;
    sp = sp - 80;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+992);
    { rv_t r_ = func_08878E84(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BA8CC;
L_089BA8CC:;
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
    if (cnd_) { goto L_089BAB4C; }
    goto L_089BA908;
L_089BA908:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAA8C; }
    goto L_089BA918;
L_089BA918:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BA9B0; }
    goto L_089BA940;
L_089BA940:;
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
    if (cnd_) { goto L_089BA98C; }
    goto L_089BA97C;
L_089BA97C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BA98C;
L_089BA98C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA9D0; }
    goto L_089BA99C;
L_089BA99C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BA9D0; }
    goto L_089BA9AC;
L_089BA9AC:;
    goto L_089BA9B0;
L_089BA9B0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BA9D0; }
    goto L_089BA9C4;
L_089BA9C4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BA9D0;
L_089BA9D0:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BAA60; }
    goto L_089BA9F0;
L_089BA9F0:;
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
    if (cnd_) { goto L_089BAA3C; }
    goto L_089BAA2C;
L_089BAA2C:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BAA3C;
L_089BAA3C:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAA80; }
    goto L_089BAA4C;
L_089BAA4C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BAA80; }
    goto L_089BAA5C;
L_089BAA5C:;
    goto L_089BAA60;
L_089BAA60:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAA80; }
    goto L_089BAA74;
L_089BAA74:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BAA80;
L_089BAA80:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089BAC04; }
    goto L_089BAA88;
L_089BAA88:;
    goto L_089BAA8C;
L_089BAA8C:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BAB20; }
    goto L_089BAAB0;
L_089BAAB0:;
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
    if (cnd_) { goto L_089BAAFC; }
    goto L_089BAAEC;
L_089BAAEC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BAAFC;
L_089BAAFC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAB40; }
    goto L_089BAB0C;
L_089BAB0C:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BAB40; }
    goto L_089BAB1C;
L_089BAB1C:;
    goto L_089BAB20;
L_089BAB20:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAB40; }
    goto L_089BAB34;
L_089BAB34:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BAB40;
L_089BAB40:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089BAC04; }
    goto L_089BAB48;
L_089BAB48:;
    goto L_089BAB4C;
L_089BAB4C:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BABE0; }
    goto L_089BAB70;
L_089BAB70:;
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
    if (cnd_) { goto L_089BABBC; }
    goto L_089BABAC;
L_089BABAC:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BABBC;
L_089BABBC:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAC00; }
    goto L_089BABCC;
L_089BABCC:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BAC00; }
    goto L_089BABDC;
L_089BABDC:;
    goto L_089BABE0;
L_089BABE0:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BAC00; }
    goto L_089BABF4;
L_089BABF4:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BAC00;
L_089BAC00:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089BAC04;
L_089BAC04:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    f12 = BITSF(LD32(sp+48));
    f13 = BITSF(LD32(sp+52));
    a0 = s0 + 0;
    func_089B9998(a0, f12, f13);
    goto L_089BAC24;
L_089BAC24:;
    sp = sp + 80;
    return;
}

/* 089BAC34 */
rv_t func_089BAC34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BAC34:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BAC4C;
L_089BAC4C:;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BAC5C */
rv_t func_089BAC5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BAC5C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BAC74;
L_089BAC74:;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BAC84 */
rv_t func_089BAC84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BAC84:;
    sp = sp - 16;
    a2 = D_08C2AD08 - (-21240);
    v0 = D_08C2AD10 - (-21232);
    s0 = v0 - 21232;
    v1 = (u32)(s32)LD_S8(a2-21240);
    cnd_ = v1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089BACB0; }
    goto L_089BACA8;
L_089BACA8:;
    v0 = 1;
    ST8(a2-21240, v0);
    goto L_089BACB0;
L_089BACB0:;
    { rv_t r_ = func_089B85E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BACB8;
L_089BACB8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BACCC */
void func_089BACCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BACCC:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD32(a0+988);
    v1 = v0 + 0;
    v1 = (v1 & ~(0x1u << 4)) | ((a1 & 0x1) << 4);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == a1;
    a2 = v1 & 0x10;
    if (cnd_) { goto L_089BAD20; }
    goto L_089BACF8;
L_089BACF8:;
    cnd_ = a2 == 0;
    ST32(a0+988, v1);
    if (cnd_) { goto L_089BAD20; }
    goto L_089BAD00;
L_089BAD00:;
    v0 = D_08B1BC64 - (-17308);
    f0 = BITSF(LD32(v0-17308));
    ST32(a0+956, FBITS(f0));
    f0 = func_089B9F74(a0);
    goto L_089BAD10;
L_089BAD10:;
    v0 = D_08B1BC68 - (-17304);
    f1 = BITSF(LD32(v0-17304));
    ST32(s0+960, FBITS(f0));
    ST32(s0+964, FBITS(f1));
    goto L_089BAD20;
L_089BAD20:;
    sp = sp + 16;
    return;
}

/* 089BAD30 */
void func_089BAD30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BAD30:;
    sp = sp - 32;
    f1 = BITSF(LD32(a0+952));
    f0 = BITSF(LD32(a0+948));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BAD80; }
    goto L_089BAD58;
L_089BAD58:;
    v1 = 1;
    v0 = LD32(a0+988);
    ST32(a0+968, v1);
    goto L_089BAD64;
L_089BAD64:;
    v0 = v0 | 0x8;
    ST32(s0+988, v0);
    goto L_089BAD70;
L_089BAD70:;
    sp = sp + 32;
    return;
L_089BAD80:;
    v0 = 2;
    a1 = LD32(a0+456);
    ST32(a0+968, v0);
    a0 = D_08C2B0A8 - (-20312);
    a0 = a0 - 20312;
    a2 = 1;
    { u64 r_ = func_08ABE100(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BAD9C;
L_089BAD9C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BADC8; }
    goto L_089BADA4;
L_089BADA4:;
    v0 = LD32(v0);
    v1 = LD32(v0-16);
    v0 = 0x801d;
    v1 = a0 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    v0 = 0x8014;
    if (cnd_) { goto L_089BADD0; }
    goto L_089BADC0;
L_089BADC0:;
    cnd_ = v1 == v0;
    if (cnd_) { s1 = LD32(a0+588); goto L_089BADD4; }
    goto L_089BADC8;
L_089BADC8:;
    v0 = LD32(s0+988);
    goto L_089BAD64;
L_089BADD0:;
    s1 = LD32(a0+588);
    goto L_089BADD4;
L_089BADD4:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089BADE0;
L_089BADE0:;
    cnd_ = s1 == 0;
    a1 = 0x51020000u;
    if (cnd_) { goto L_089BAE20; }
    goto L_089BADE8;
L_089BADE8:;
    a0 = s1 + 0;
    a1 = a1 | 0x74d1;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089BADF8;
L_089BADF8:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_089BAE10; }
    goto L_089BAE00;
L_089BAE00:;
    v0 = LD_U8(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+988); goto L_089BAE18; }
    goto L_089BAE0C;
L_089BAE0C:;
    v0 = 3;
    goto L_089BAE10;
L_089BAE10:;
    ST32(s0+968, v0);
    v0 = LD32(s0+988);
    goto L_089BAE18;
L_089BAE18:;
    v0 = v0 | 0x8;
    ST32(s0+988, v0);
    goto L_089BAE20;
L_089BAE20:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BAE28;
L_089BAE28:;
    goto L_089BAD70;
}

/* 089BAE30 */
void func_089BAE30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089BAE30:;
    sp = sp - 48;
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    a1 = sp + 0;
    a2 = sp + 4;
    f20 = BITSF(LD32(v0-31328));
    func_089B9A80(a0, a1, a2);
    goto L_089BAE58;
L_089BAE58:;
    v1 = LD32(s0+968);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_089BAFB8; }
    goto L_089BAE68;
L_089BAE68:;
    cnd_ = v1 == v0;
    v0 = D_08AEEC6C - (-5012);
    if (cnd_) { goto L_089BAF80; }
    goto L_089BAE70;
L_089BAE70:;
    f2 = BITSF(LD32(v0-5012));
    f1 = BITSF(LD32(s0+960));
    f13 = BITSF(LD32(sp+4));
    f0 = f1 + f2;
    fcc = FCMP(f0, f13, 12);
    cnd_ = !fcc;
    f3 = f13;
    if (cnd_) { goto L_089BAF58; }
    goto L_089BAE90;
L_089BAE90:;
    v0 = LD32(s0+956);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s0+956, FBITS(f0));
    goto L_089BAEA4;
L_089BAEA4:;
    f0 = BITSF(LD32(s0+964));
    goto L_089BAEA8;
L_089BAEA8:;
    f1 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(s0+964, FBITS(f0));
    if (cnd_) { goto L_089BAEC4; }
    goto L_089BAEC0;
L_089BAEC0:;
    ST32(s0+960, FBITS(f1));
    goto L_089BAEC4;
L_089BAEC4:;
    f0 = BITSF(LD32(s0+956));
    f0 = f0 * f20;
    f13 = f3 + f0;
    goto L_089BAED0;
L_089BAED0:;
    ST32(sp+4, FBITS(f13));
    goto L_089BAED4;
L_089BAED4:;
    f12 = BITSF(LD32(sp));
    f1 = BITSF(0);
    fcc = FCMP(f1, f12, 12);
    cnd_ = !fcc;
    v0 = D_08B1BC6C - (-17300);
    if (cnd_) { goto L_089BAF34; }
    goto L_089BAEEC;
L_089BAEEC:;
    f0 = BITSF(LD32(v0-17300));
    f0 = f0 * f20;
    f12 = f12 - f0;
    fcc = FCMP(f12, f1, 12);
    goto L_089BAF00;
L_089BAF00:;
    cnd_ = !fcc;
    ST32(sp, FBITS(f12));
    if (cnd_) { goto L_089BAF10; }
    goto L_089BAF08;
L_089BAF08:;
    ST32(sp, FBITS(f1));
    f12 = f1;
    goto L_089BAF10;
L_089BAF10:;
    a0 = s0 + 0;
    func_089B9998(a0, f12, f13);
    goto L_089BAF18;
L_089BAF18:;
    a0 = s0 + 0;
    func_089BA86C(a0);
    goto L_089BAF20;
L_089BAF20:;
    sp = sp + 48;
    return;
L_089BAF34:;
    fcc = FCMP(f12, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-17300));
    if (cnd_) { goto L_089BAF10; }
    goto L_089BAF44;
L_089BAF44:;
    f0 = f0 * f20;
    f12 = f12 + f0;
    fcc = FCMP(f1, f12, 12);
    goto L_089BAF00;
L_089BAF58:;
    f0 = f1 - f2;
    fcc = FCMP(f13, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+964)); goto L_089BAEA8; }
    goto L_089BAF6C;
L_089BAF6C:;
    v0 = LD32(s0+956);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(s0+956, FBITS(f0));
    goto L_089BAEA4;
L_089BAF80:;
    f0 = BITSF(LD32(s0+956));
    f1 = BITSF(LD32(sp+4));
    v0 = D_08AEEC64 - (-5020);
    f0 = f0 * f20;
    f13 = f1 + f0;
    f0 = BITSF(LD32(v0-5020));
    fcc = FCMP(f0, f13, 12);
    cnd_ = !fcc;
    ST32(sp+4, FBITS(f13));
    if (cnd_) { goto L_089BAED4; }
    goto L_089BAFA8;
L_089BAFA8:;
    v0 = D_08AEEC68 - (-5016);
    f0 = BITSF(LD32(v0-5016));
    f13 = f13 - f0;
    goto L_089BAED0;
L_089BAFB8:;
    f13 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(s0+952));
    fcc = FCMP(f0, f13, 12);
    cnd_ = !fcc;
    f1 = f13;
    if (cnd_) { goto L_089BAFF4; }
    goto L_089BAFD0;
L_089BAFD0:;
    v0 = LD32(s0+956);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(s0+956, FBITS(f0));
    goto L_089BAFE4;
L_089BAFE4:;
    f0 = BITSF(LD32(s0+956));
    goto L_089BAFE8;
L_089BAFE8:;
    f0 = f0 * f20;
    f13 = f1 + f0;
    goto L_089BAED0;
L_089BAFF4:;
    f0 = BITSF(LD32(s0+948));
    fcc = FCMP(f13, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+956)); goto L_089BAFE8; }
    goto L_089BB008;
L_089BB008:;
    v0 = LD32(s0+956);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(s0+956, FBITS(f0));
    goto L_089BAFE4;
}

/* 089BB01C */
rv_t func_089BB01C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB01C:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB038;
L_089BB038:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089BB058; }
    goto L_089BB044;
L_089BB044:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BB058:;
    { rv_t r_ = func_089CD71C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB060;
L_089BB060:;
    v1 = v0 + 0;
    goto L_089BB044;
}

/* 089BB068 */
rv_t func_089BB068(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB068:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BB1BC; }
    goto L_089BB09C;
L_089BB09C:;
    v0 = D_08AEEC70 - (-5008);
    f2 = BITSF(LD32(v0-5008));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AEEC74 - (-5004);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f7 = BITSF(LD32(v1-5004));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f2;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f1 = f1 * f2;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f2;
    v0 = D_08C2AC28 - (-21464);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f2;
    t0 = D_08C2AC38 - (-21448);
    t1 = D_08C2AC48 - (-21432);
    f3 = f3 * f2;
    t2 = D_08C2ACD8 - (-21288);
    s3 = D_08C2ACF8 - (-21256);
    v1 = t2 - 21288;
    ST32(v0-21464, FBITS(f3));
    a1 = v0 - 21464;
    a2 = t0 - 21448;
    a3 = t1 - 21432;
    s0 = s3 - 21256;
    v0 = 4;
    ST32(a3+12, FBITS(f1));
    a0 = 16;
    ST32(a1+4, FBITS(f4));
    ST32(a1+12, FBITS(f1));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t0-21448, FBITS(f5));
    ST32(t2-21288, FBITS(f7));
    ST32(t1-21432, FBITS(f1));
    ST32(v1+16, FBITS(f7));
    ST32(v1+28, 0);
    ST32(a1+8, FBITS(f5));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f6));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(v1+4, FBITS(f7));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f7));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB184;
L_089BB184:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s3-21256, v0);
    if (cnd_) { goto L_089BB1B0; }
    goto L_089BB194;
L_089BB194:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089BB19C;
L_089BB19C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089BB19C; }
    goto L_089BB1B0;
L_089BB1B0:;
    v0 = s3 - 21256;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089BB1BC;
L_089BB1BC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BB1E0; }
    goto L_089BB1D0;
L_089BB1D0:;
    v0 = D_08C2ACF8 - (-21256);
    a0 = LD32(v0-21256);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089BB1F8; }
    goto L_089BB1E0;
L_089BB1E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BB1F8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB200;
L_089BB200:;
    goto L_089BB1E0;
}

/* 089BB208 */
rv_t func_089BB208(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB208:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089BB068(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB21C;
L_089BB21C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BB228 */
rv_t func_089BB228(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB228:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089BB068(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB23C;
L_089BB23C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BB248 */
rv_t func_089BB248(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB248:;
    sp = sp - 32;
    s3 = a0 + 656;
    s0 = D_08B00AA8 - (2728);
    s0 = s0 + 2728;
    s1 = a0 + 0;
    a0 = s3 + 0;
    s4 = D_08C2ADE8 - (-21016);
    func_08873E94(a0, a1);
    goto L_089BB280;
L_089BB280:;
    a0 = s1 + 580;
    a1 = s0 + 48;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089BB294;
L_089BB294:;
    a2 = 999;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089D00D0(a0, a1);
    goto L_089BB2A4;
L_089BB2A4:;
    v1 = D_08B00800 - (2048);
    v1 = v1 + 2048;
    v0 = v1 + 404;
    ST32(s1+580, v0);
    v0 = D_08AEEC90 - (-4976);
    a1 = v1 + 608;
    f0 = BITSF(LD32(v0-4976));
    ST32(s1, v1);
    v0 = 999;
    v1 = (u32)-32738;
    ST32(s1+560, FBITS(f0));
    a0 = 116;
    s2 = s4 - 21016;
    ST32(s1+576, v0);
    ST32(s1+544, 0);
    ST8(s1+548, 0);
    ST8(s1+549, 0);
    ST32(s1+552, 0);
    ST32(s1+556, 0);
    ST32(s1+564, 0);
    ST32(s1+568, 0);
    ST32(s1+572, 0);
    ST16(s3+8, v1);
    v0 = LD32(s1+172);
    ST32(s1+656, a1);
    v0 = v0 | 0x4;
    ST32(s1+172, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB314;
L_089BB314:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_0895B574(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BB324;
L_089BB324:;
    v0 = LD32(s1+232);
    a1 = LD32(s1);
    v1 = 177;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s1+232, v0);
    a0 = 12;
    ST32(s1+176, s0);
    ST32(s1+16, v1);
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB360;
L_089BB360:;
    a0 = LD32(s4-21016);
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

/* 089BB3AC */
rv_t func_089BB3AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB3AC:;
    sp = sp - 32;
    v0 = D_08B00800 - (2048);
    v0 = v0 + 2048;
    a3 = v0 + 608;
    v1 = v0 + 404;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s2 = a0 + 580;
    s3 = a0 + 656;
    a2 = LD32(a0+172);
    ST32(a0+580, v1);
    a2 = a2 & 0x1;
    ST32(a0+656, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089BB47C; }
    goto L_089BB3FC;
L_089BB3FC:;
    v0 = LD32(s1+176);
    goto L_089BB400;
L_089BB400:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BB464; }
    goto L_089BB408;
L_089BB408:;
    ST32(s1+176, 0);
    goto L_089BB40C;
L_089BB40C:;
    a0 = D_08C2ADE8 - (-21016);
    s0 = D_08B00AA8 - (2728);
    a1 = s1 + 0;
    a0 = a0 - 21016;
    s0 = s0 + 2728;
    func_08AC5DAC(a0, a1, t1, t2, t3);
    goto L_089BB424;
L_089BB424:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089BB434;
L_089BB434:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BB440;
L_089BB440:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB448;
L_089BB448:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BB464:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB474;
L_089BB474:;
    ST32(s1+176, 0);
    goto L_089BB40C;
L_089BB47C:;
    v1 = LD32(a0+176);
    v0 = LD32(v1+112);
    v0 = v0 | 0x8;
    ST32(v1+112, v0);
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB490;
L_089BB490:;
    v0 = LD32(s1+176);
    goto L_089BB400;
}

/* 089BB498 */
rv_t func_089BB498(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB498:;
    sp = sp - 32;
    v0 = D_08B00800 - (2048);
    v0 = v0 + 2048;
    a3 = v0 + 608;
    v1 = v0 + 404;
    a1 = 0 + 0;
    s1 = a0 + 0;
    s2 = a0 + 580;
    s3 = a0 + 656;
    a2 = LD32(a0+172);
    ST32(a0+580, v1);
    a2 = a2 & 0x1;
    ST32(a0+656, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089BB570; }
    goto L_089BB4E8;
L_089BB4E8:;
    v0 = LD32(s1+176);
    goto L_089BB4EC;
L_089BB4EC:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BB558; }
    goto L_089BB4F4;
L_089BB4F4:;
    ST32(s1+176, 0);
    goto L_089BB4F8;
L_089BB4F8:;
    a0 = D_08C2ADE8 - (-21016);
    s0 = D_08B00AA8 - (2728);
    a1 = s1 + 0;
    a0 = a0 - 21016;
    s0 = s0 + 2728;
    func_08AC5DAC(a0, a1, t1, t2, t3);
    goto L_089BB510;
L_089BB510:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089BB520;
L_089BB520:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BB52C;
L_089BB52C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB534;
L_089BB534:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB53C;
L_089BB53C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BB558:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB568;
L_089BB568:;
    ST32(s1+176, 0);
    goto L_089BB4F8;
L_089BB570:;
    v1 = LD32(a0+176);
    v0 = LD32(v1+112);
    v0 = v0 | 0x8;
    ST32(v1+112, v0);
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB584;
L_089BB584:;
    v0 = LD32(s1+176);
    goto L_089BB4EC;
}

/* 089BB58C */
rv_t func_089BB58C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB58C:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_089BB678(a0, t1, t2, t3);
    goto L_089BB5A0;
L_089BB5A0:;
    a0 = 0xf2e80000u;
    v1 = 0xb02a0000u;
    a0 = a0 | 0xc628;
    v1 = v1 | 0xb8bb;
    v1 = v0 ^ v1;
    v0 = v0 ^ a0;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    a1 = 0x8f4a0000u;
    v0 = v0 | v1;
    a1 = a1 | 0xb0df;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089BB60C; }
    goto L_089BB5D4;
L_089BB5D4:;
    v0 = LD32(s0+172);
    goto L_089BB5D8;
L_089BB5D8:;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s0+172, v0);
    goto L_089BB5E0;
L_089BB5E0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D1830(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB5E8;
L_089BB5E8:;
    a0 = s0 + 0;
    v0 = func_089BB6C8(a0, 0, 0, 0);
    goto L_089BB5F0;
L_089BB5F0:;
    v1 = LD32(s0+544);
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s0+544, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BB60C:;
    a0 = LD32(s0+208);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB614;
L_089BB614:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB62C;
L_089BB62C:;
    a1 = 0x8a940000u;
    a1 = a1 | 0xc9e9;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089BB5E0; }
    goto L_089BB63C;
L_089BB63C:;
    a0 = LD32(sp);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB644;
L_089BB644:;
    a0 = 0x25c30000u;
    v1 = 0x769e0000u;
    a0 = a0 | 0x90ed;
    v1 = v1 | 0x4a0b;
    v1 = v0 ^ v1;
    v0 = v0 ^ a0;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BB5E0; }
    goto L_089BB670;
L_089BB670:;
    v0 = LD32(s0+172);
    goto L_089BB5D8;
}

/* 089BB678 */
u32 func_089BB678(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB678:;
    sp = sp - 16;
    a1 = 0x65b0000u;
    a1 = a1 | 0xcc42;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB694;
L_089BB694:;
    sp = sp + 16;
    return v0;
}

/* 089BB6A0 */
u32 func_089BB6A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB6A0:;
    sp = sp - 16;
    a1 = 0xacc70000u;
    a1 = a1 | 0x5fa6;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB6BC;
L_089BB6BC:;
    sp = sp + 16;
    return v0;
}

/* 089BB6C8 */
u32 func_089BB6C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB6C8:;
    sp = sp - 16;
    a1 = 0xc7af0000u;
    a1 = a1 | 0x549a;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB6E4;
L_089BB6E4:;
    sp = sp + 16;
    return v0;
}

/* 089BB6F0 */
u32 func_089BB6F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB6F0:;
    sp = sp - 16;
    a1 = 0x97f70000u;
    a1 = a1 | 0x5049;
    a0 = LD32(a0+208);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB70C;
L_089BB70C:;
    sp = sp + 16;
    return v0;
}

/* 089BB718 */
rv_t func_089BB718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB718:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 164;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB74C;
L_089BB74C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089BB784; }
    goto L_089BB754;
L_089BB754:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BB76C; }
    goto L_089BB764;
L_089BB764:;
    func_089BB824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BB76C;
L_089BB76C:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB784;
L_089BB784:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BB798 */
rv_t func_089BB798(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB798:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089BB808; }
    goto L_089BB7B4;
L_089BB7B4:;
    s0 = LD32(a0+176);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB7C8;
L_089BB7C8:;
    v1 = LD32(s0);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB7D8;
L_089BB7D8:;
    v1 = LD32(s1+108);
    v0 = 999;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089BB7F4; }
    goto L_089BB7EC;
L_089BB7EC:;
    { u64 r_ = func_08956538(a0, a1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BB7F4;
L_089BB7F4:;
    goto L_089BB7F8;
L_089BB7F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BB808:;
    a0 = LD32(a0+176);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB81C;
L_089BB81C:;
    goto L_089BB7F8;
}

/* 089BB824 */
void func_089BB824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BB824:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_089E47DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089BB840;
L_089BB840:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_089BB848;
L_089BB848:;
    ST32(s1+120, v0);
    a0 = s0 + 0;
    v0 = LD32(s0+252);
    ST32(s1+124, v0);
    v0 = func_089D1944(a0);
    goto L_089BB85C;
L_089BB85C:;
    ST32(s1+128, v0);
    v0 = LD32(s0+256);
    ST32(s1+132, v0);
    v1 = LD32(s0+236);
    ST32(s1+136, v1);
    v0 = LD32(s0+232);
    ST32(s1+140, v0);
    f0 = BITSF(LD32(s0+552));
    ST32(s1+144, FBITS(f0));
    f1 = BITSF(LD32(s0+556));
    ST32(s1+148, FBITS(f1));
    v0 = LD32(s0+568);
    ST32(s1+152, v0);
    v1 = LD32(s0);
    v0 = LD32(v1+264);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB8A0;
L_089BB8A0:;
    ST32(s1+156, v0);
    v0 = LD32(s0+544);
    v0 = (v0 >> 3) & 0x1;
    ST32(s1+160, v0);
    sp = sp + 16;
    return;
}

/* 089BB8C4 */
void func_089BB8C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB8C4:;
    sp = sp - 32;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB8FC;
L_089BB8FC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    f12 = f20;
    if (cnd_) { goto L_089BB928; }
    goto L_089BB90C;
L_089BB90C:;
    goto L_089BB910;
L_089BB910:;
    sp = sp + 32;
    return;
L_089BB928:;
    f0 = func_089E48B8(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BB930;
L_089BB930:;
    v0 = LD32(s1+120);
    a0 = s0 + 0;
    ST32(s0+456, v0);
    v1 = LD32(s1+124);
    ST32(s0+524, v1);
    v0 = LD32(s1+128);
    ST32(s0+460, v0);
    v1 = LD32(s1+132);
    ST32(s0+448, v1);
    v0 = LD32(s1+136);
    ST32(s0+852, v0);
    v1 = LD32(s1+140);
    ST32(s0+848, v1);
    v0 = LD32(s1+152);
    ST32(s0+976, v0);
    v1 = LD32(s1+156);
    ST32(s0+980, v1);
    a1 = LD32(s1+160);
    a1 = 0 < a1;
    func_089BACCC(a0, a1);
    goto L_089BB980;
L_089BB980:;
    cnd_ = s2 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BB90C; }
    goto L_089BB988;
L_089BB988:;
    f12 = BITSF(LD32(s1+144));
    f13 = BITSF(LD32(s1+148));
    func_089B9998(a0, f12, f13);
    goto L_089BB994;
L_089BB994:;
    f13 = BITSF(LD32(s1+148));
    f12 = BITSF(LD32(s1+144));
    a0 = s0 + 0;
    f14 = f20;
    func_089BA7D0(a0, f12, f13, f14);
    goto L_089BB9A8;
L_089BB9A8:;
    goto L_089BB910;
}

/* 089BB9B0 */
void func_089BB9B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BB9B0:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BB9E0;
L_089BB9E0:;
    f12 = f20;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089BBA08; }
    goto L_089BB9F0;
L_089BB9F0:;
    goto L_089BB9F4;
L_089BB9F4:;
    sp = sp + 32;
    return;
L_089BBA08:;
    f0 = func_089E4B1C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BBA10;
L_089BBA10:;
    v0 = LD32(s1+120);
    a0 = s0 + 0;
    ST32(s0+456, v0);
    v1 = LD32(s1+124);
    ST32(s0+524, v1);
    v0 = LD32(s1+128);
    ST32(s0+460, v0);
    v1 = LD32(s1+136);
    ST32(s0+852, v1);
    v0 = LD32(s1+152);
    ST32(s0+976, v0);
    v1 = LD32(s1+156);
    ST32(s0+980, v1);
    a1 = LD32(s1+160);
    a1 = 0 < a1;
    func_089BACCC(a0, a1);
    goto L_089BBA50;
L_089BBA50:;
    goto L_089BB9F4;
}

/* 089BBA58 */
void func_089BBA58(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BBA58:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBA7C;
L_089BBA7C:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 37;
    t0 = 164;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089BBA98;
L_089BBA98:;
    a0 = s2 + 0;
    func_089BBAC0(a0);
    goto L_089BBAA0;
L_089BBAA0:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089BBAA8;
L_089BBAA8:;
    sp = sp + 16;
    return;
}

/* 089BBAC0 */
void func_089BBAC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_089BBAC0:;
    sp = sp - 208;
    f20 = BITSF(0);
    s0 = a0 + 0;
    func_089E4C08(a0);
    goto L_089BBAE8;
L_089BBAE8:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 120;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBB0C;
L_089BBB0C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 124;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBB30;
L_089BBB30:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 128;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBB54;
L_089BBB54:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 132;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBB78;
L_089BBB78:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 136;
    t0 = 32;
    t1 = 6;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089BBB9C;
L_089BBB9C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 140;
    t0 = 32;
    t1 = 4;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089BBBC0;
L_089BBBC0:;
    v0 = D_08AEEC94 - (-4972);
    v1 = D_08AEEC98 - (-4968);
    f23 = BITSF(LD32(v0-4972));
    v0 = D_08AEEC9C - (-4964);
    f22 = BITSF(LD32(v1-4968));
    f21 = BITSF(LD32(v0-4964));
    f12 = f23;
    f13 = f22;
    f14 = f21;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 144;
    t0 = 32;
    t1 = 10;
    t2 = 1;
    t3 = 2;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089BBC08;
L_089BBC08:;
    f13 = f22;
    f14 = f21;
    t3 = 2;
    a0 = s0 + 0;
    f12 = f23;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 148;
    t0 = 32;
    t1 = 10;
    t2 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089BBC38;
L_089BBC38:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 152;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBC5C;
L_089BBC5C:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 156;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBC80;
L_089BBC80:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 160;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089BBCA4;
L_089BBCA4:;
    sp = sp + 208;
    return;
}

/* 089BBCC4 */
rv_t func_089BBCC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BBCC4:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089BBCEC; }
    goto L_089BBCD4;
L_089BBCD4:;
    v1 = LD_U16(a1+16);
    v0 = 0x8025;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = LD32(a1+24); goto L_089BBCF8; }
    goto L_089BBCE4;
L_089BBCE4:;
    { rv_t r_ = func_089D24F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBCEC;
L_089BBCEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BBCF8:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_089BBD20; }
    goto L_089BBD00;
L_089BBD00:;
    v0 = LD32(a2+52);
    ST32(a0+232, v0);
    v1 = LD32(a2+48);
    ST32(a0+256, v1);
    f0 = BITSF(LD32(a2+56));
    ST32(a0+552, FBITS(f0));
    f1 = BITSF(LD32(a2+60));
    ST32(a0+556, FBITS(f1));
    goto L_089BBD20;
L_089BBD20:;
    { rv_t r_ = func_089E1C74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBD28;
L_089BBD28:;
    v0 = 1;
    goto L_089BBCEC;
}

/* 089BBD30 */
void func_089BBD30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BBD30:;
    sp = sp - 16;
    v0 = LD32(a0+544);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089BBD64; }
    goto L_089BBD50;
L_089BBD50:;
    goto L_089BBD54;
L_089BBD54:;
    goto L_089BBD58;
L_089BBD58:;
    sp = sp + 16;
    return;
L_089BBD64:;
    v1 = LD32(a0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBD74;
L_089BBD74:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BBD54; }
    goto L_089BBD7C;
L_089BBD7C:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089BBD84;
L_089BBD84:;
    a2 = v0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_089BBD50; }
    goto L_089BBD98;
L_089BBD98:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089BBDE8; }
    goto L_089BBDBC;
L_089BBDBC:;
    a0 = LD32(a1);
    goto L_089BBDC0;
L_089BBDC0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089BBF60; }
    goto L_089BBDD8;
L_089BBDD8:;
    a1 = LD32(a1+4);
    goto L_089BBDDC;
L_089BBDDC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089BBDC0; }
    goto L_089BBDE4;
L_089BBDE4:;
    a3 = 0 + 0;
    goto L_089BBDE8;
L_089BBDE8:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_089BBD54; }
    goto L_089BBDF0;
L_089BBDF0:;
    a1 = LD32(a3);
    v0 = LD32(a1-12);
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_089BBD58; }
    goto L_089BBE08;
L_089BBE08:;
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089BBD58; }
    goto L_089BBE20;
L_089BBE20:;
    v1 = LD32(s1+568);
    v0 = v1 < 0x8u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089BBD58; }
    goto L_089BBE30;
L_089BBE30:;
    v0 = v1 << 2;
    v1 = D_08ADE5CC - (-6708);
    v1 = v1 - 6708;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089BBE4Cu: goto L_089BBE4C; case 0x089BBE9Cu: goto L_089BBE9C; case 0x089BBEB8u: goto L_089BBEB8; case 0x089BBED4u: goto L_089BBED4; case 0x089BBEF0u: goto L_089BBEF0; case 0x089BBF0Cu: goto L_089BBF0C; case 0x089BBF28u: goto L_089BBF28; case 0x089BBF44u: goto L_089BBF44; default: rs_break(0, 0x089bbe44); }
L_089BBE4C:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0CC8(a0, 0, 0, 0);
    goto L_089BBE60;
L_089BBE60:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBE64:;
    a2 = v0 + 0;
    a1 = s0 + 0;
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+96);
    t_ = v0;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBE84;
L_089BBE84:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BBD54; }
    goto L_089BBE8C;
L_089BBE8C:;
    v0 = LD32(s1+544);
    v0 = v0 | 0x1;
    ST32(s1+544, v0);
    goto L_089BBD54;
L_089BBE9C:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0CF0(a0, 0, 0, 0);
    goto L_089BBEB0;
L_089BBEB0:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBEB8:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0D18(a0, 0, 0, 0);
    goto L_089BBECC;
L_089BBECC:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBED4:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0D40(a0, 0, 0, 0);
    goto L_089BBEE8;
L_089BBEE8:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBEF0:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0D68(a0, 0, 0, 0);
    goto L_089BBF04;
L_089BBF04:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBF0C:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0D90(a0, 0, 0, 0);
    goto L_089BBF20;
L_089BBF20:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBF28:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0DB8(a0, 0, 0, 0);
    goto L_089BBF3C;
L_089BBF3C:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBF44:;
    v0 = LD32(a1-16);
    a0 = a3 + 0;
    v0 = a3 + v0;
    s0 = LD32(v0+4);
    v0 = func_089D0DE0(a0, 0, 0, 0);
    goto L_089BBF58;
L_089BBF58:;
    v1 = LD32(s1);
    goto L_089BBE64;
L_089BBF60:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089BBDDC; }
    goto L_089BBF6C;
L_089BBF6C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_089BBDD8; }
    goto L_089BBF78;
L_089BBF78:;
    goto L_089BBDE8;
}

/* 089BBF80 */
rv_t func_089BBF80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BBF80:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089BC9D0(a0, t1, t2, t3);
    goto L_089BBF94;
L_089BBF94:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D11E4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBF9C;
L_089BBF9C:;
    v1 = LD32(s0);
    f1 = BITSF(LD32(s0+8));
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089BBFD0; }
    goto L_089BBFC0;
L_089BBFC0:;
    v0 = LD32(s0+544);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BC000; }
    goto L_089BBFD0;
L_089BBFD0:;
    a0 = s0 + 0;
    func_089BBD30(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BBFD8;
L_089BBFD8:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D468C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBFE0;
L_089BBFE0:;
    a0 = s0 + 0;
    func_089BCA7C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BBFE8;
L_089BBFE8:;
    a0 = s0 + 0;
    { rv_t r_ = func_089BCBA8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BBFF0;
L_089BBFF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BC000:;
    func_089BC764(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BC008;
L_089BC008:;
    goto L_089BBFD0;
}

/* 089BC010 */
rv_t func_089BC010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC010:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0+208);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BC048; }
    goto L_089BC030;
L_089BC030:;
    ST32(s1, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BC048:;
    v1 = LD32(a0);
    v0 = LD32(v1+264);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC058;
L_089BC058:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BC08C; }
    goto L_089BC060;
L_089BC060:;
    v1 = LD32(s0);
    goto L_089BC064;
L_089BC064:;
    v0 = LD32(v1+264);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC070;
L_089BC070:;
    a0 = 0xcc980000u;
    a2 = s0 + 208;
    a1 = v0 + 0;
    a0 = a0 | 0x70f0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BC084;
L_089BC084:;
    v0 = LD32(s0+208);
    goto L_089BC030;
L_089BC08C:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    a2 = LD32(v1+188);
    v0 = s0 + v0;
    t_ = a2;
    a1 = LD32(v0+16);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC0A4;
L_089BC0A4:;
    v1 = LD32(s0);
    goto L_089BC064;
}

/* 089BC0AC */
void func_089BC0AC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC0AC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 684;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC0D0;
L_089BC0D0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089BB248(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC0E0;
L_089BC0E0:;
    a1 = s1 + 0;
    cnd_ = s2 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089BC170; }
    goto L_089BC0EC;
L_089BC0EC:;
    v1 = LD_U8(s2+548);
    goto L_089BC0F0;
L_089BC0F0:;
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089BC110; }
    goto L_089BC0F8;
L_089BC0F8:;
    sp = sp + 16;
    return;
L_089BC110:;
    v0 = LD32(s2+236);
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s2+236, v0);
    v0 = func_089BB6F0(a0, 0, 0, 0);
    goto L_089BC120;
L_089BC120:;
    v1 = LD32(s2);
    a1 = v0 + 0;
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC140;
L_089BC140:;
    v1 = LD32(s2);
    f12 = BITSF(0);
    a0 = LD32(v1-12);
    a0 = s2 + a0;
    func_0886422C(a0, f12);
    goto L_089BC154;
L_089BC154:;
    v1 = LD32(s2+544);
    v0 = LD32(s2+236);
    v1 = v1 | 0x2;
    v0 = v0 | 0x10;
    ST32(s2+236, v0);
    ST32(s2+544, v1);
    goto L_089BC0F8;
L_089BC170:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC180;
L_089BC180:;
    v0 = LD32(s2+572);
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089BC1A0; }
    goto L_089BC190;
L_089BC190:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC198;
L_089BC198:;
    v1 = LD_U8(s2+548);
    goto L_089BC0F0;
L_089BC1A0:;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC1BC;
L_089BC1BC:;
    goto L_089BC190;
}

/* 089BC1C4 */
rv_t func_089BC1C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC1C4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 5;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC1E8;
L_089BC1E8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D16F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC1F4;
L_089BC1F4:;
    a1 = LD_U8(s1+548);
    a0 = s0 + 0;
    a1 = 0 < a1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC204;
L_089BC204:;
    a1 = LD32(s1+572);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC210;
L_089BC210:;
    a1 = LD32(s1+576);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC21C;
L_089BC21C:;
    f12 = BITSF(LD32(s1+560));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC228;
L_089BC228:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BC23C */
rv_t func_089BC23C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089BC23C:;
    sp = sp - 48;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089BC25C;
L_089BC25C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC25C; }
    goto L_089BC280;
L_089BC280:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D1738(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC28C;
L_089BC28C:;
    v1 = LD32(sp);
    v0 = 5;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_089BC50C; }
    goto L_089BC29C;
L_089BC29C:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089BC46C; }
    goto L_089BC2A4;
L_089BC2A4:;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_089BC39C; }
    goto L_089BC2AC;
L_089BC2AC:;
    cnd_ = v1 == v0;
    a3 = sp + 16;
    if (cnd_) { goto L_089BC300; }
    goto L_089BC2B4;
L_089BC2B4:;
    v0 = LD32(s1+576);
    goto L_089BC2B8;
L_089BC2B8:;
    v1 = LD32(s1+172);
    v0 = v0 ^ 0x3e7;
    v0 = 0 < v0;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    a0 = v1 & 0x4;
    cnd_ = a0 == 0;
    ST32(s1+172, v1);
    if (cnd_) { goto L_089BC2E4; }
    goto L_089BC2D4;
L_089BC2D4:;
    v1 = LD32(s1+16);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = 177;
    if (cnd_) { goto L_089BC2F8; }
    goto L_089BC2E4;
L_089BC2E4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089BC2F8:;
    ST32(s1+16, v0);
    goto L_089BC2E4;
L_089BC300:;
    a2 = a3 + 0;
    a1 = 0 + 0;
    goto L_089BC308;
L_089BC308:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC308; }
    goto L_089BC32C;
L_089BC32C:;
    a2 = a3 + 0;
    a1 = 0 + 0;
    goto L_089BC334;
L_089BC334:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC334; }
    goto L_089BC358;
L_089BC358:;
    v0 = LD32(sp+16);
    a1 = s1 + 572;
    a2 = 0 + 0;
    v0 = 0 < v0;
    ST8(s1+548, v0);
    goto L_089BC36C;
L_089BC36C:;
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
    if (cnd_) { goto L_089BC36C; }
    goto L_089BC394;
L_089BC394:;
    v0 = LD32(s1+576);
    goto L_089BC2B8;
L_089BC39C:;
    a3 = sp + 12;
    a2 = a3 + 0;
    a1 = 0 + 0;
    goto L_089BC3A8;
L_089BC3A8:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC3A8; }
    goto L_089BC3CC;
L_089BC3CC:;
    a2 = a3 + 0;
    a1 = 0 + 0;
    goto L_089BC3D4;
L_089BC3D4:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC3D4; }
    goto L_089BC3F8;
L_089BC3F8:;
    v0 = LD32(sp+12);
    a1 = s1 + 572;
    a2 = 0 + 0;
    v0 = 0 < v0;
    ST8(s1+548, v0);
    goto L_089BC40C;
L_089BC40C:;
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
    if (cnd_) { goto L_089BC40C; }
    goto L_089BC434;
L_089BC434:;
    a1 = s1 + 576;
    a2 = 0 + 0;
    goto L_089BC43C;
L_089BC43C:;
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
    if (cnd_) { goto L_089BC43C; }
    goto L_089BC464;
L_089BC464:;
    v0 = LD32(s1+576);
    goto L_089BC2B8;
L_089BC46C:;
    a2 = sp + 8;
    a1 = 0 + 0;
    goto L_089BC474;
L_089BC474:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC474; }
    goto L_089BC498;
L_089BC498:;
    v0 = LD32(sp+8);
    a1 = s1 + 572;
    a2 = 0 + 0;
    v0 = 0 < v0;
    ST8(s1+548, v0);
    goto L_089BC4AC;
L_089BC4AC:;
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
    if (cnd_) { goto L_089BC4AC; }
    goto L_089BC4D4;
L_089BC4D4:;
    a1 = s1 + 576;
    a2 = 0 + 0;
    goto L_089BC4DC;
L_089BC4DC:;
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
    if (cnd_) { goto L_089BC4DC; }
    goto L_089BC504;
L_089BC504:;
    v0 = LD32(s1+576);
    goto L_089BC2B8;
L_089BC50C:;
    a2 = sp + 4;
    a1 = 0 + 0;
    goto L_089BC514;
L_089BC514:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089BC514; }
    goto L_089BC538;
L_089BC538:;
    v0 = LD32(sp+4);
    a1 = s1 + 572;
    a2 = 0 + 0;
    v0 = 0 < v0;
    ST8(s1+548, v0);
    goto L_089BC54C;
L_089BC54C:;
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
    if (cnd_) { goto L_089BC54C; }
    goto L_089BC574;
L_089BC574:;
    a1 = s1 + 576;
    a2 = 0 + 0;
    goto L_089BC57C;
L_089BC57C:;
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
    if (cnd_) { goto L_089BC57C; }
    goto L_089BC5A4;
L_089BC5A4:;
    a1 = s1 + 560;
    a2 = 0 + 0;
    goto L_089BC5AC;
L_089BC5AC:;
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
    if (cnd_) { goto L_089BC5AC; }
    goto L_089BC5D4;
L_089BC5D4:;
    v0 = LD32(s1+576);
    goto L_089BC2B8;
}

/* 089BC5DC */
rv_t func_089BC5DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089BC5DC:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 089BC5E4 */
rv_t func_089BC5E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC5E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089D50F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC5F8;
L_089BC5F8:;
    a1 = 0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BC610;
L_089BC610:;
    v0 = LD32(s0);
    v1 = D_08AEECA0 - (-4960);
    f12 = BITSF(LD32(v1-4960));
    a0 = LD32(v0-12);
    s0 = s0 + a0;
    a0 = LD32(s0+4);
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC62C;
L_089BC62C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BC63C */
rv_t func_089BC63C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC63C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089D194C(a0);
    goto L_089BC650;
L_089BC650:;
    v1 = LD32(s0);
    a0 = LD32(v1-16);
    s0 = s0 + a0;
    v1 = LD32(s0+4);
    v0 = v0 ^ v1;
    v0 = 0 < v0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BC678 */
rv_t func_089BC678(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC678:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089D194C(a0);
    goto L_089BC68C;
L_089BC68C:;
    a0 = s0 + 0;
    a1 = LD32(s0);
    v1 = LD32(a1-16);
    s0 = s0 + v1;
    a1 = LD32(s0+4);
    cnd_ = v0 == a1;
    a2 = 0 + 0;
    if (cnd_) { goto L_089BC6BC; }
    goto L_089BC6A8;
L_089BC6A8:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BC6B0;
L_089BC6B0:;
    a2 = 3;
    v1 = 1;
    if (v0 == 0) a2 = v1;
    goto L_089BC6BC;
L_089BC6BC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BC6D0 */
rv_t func_089BC6D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC6D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_089D194C(a0);
    goto L_089BC6EC;
L_089BC6EC:;
    a0 = s0 + 0;
    a2 = LD32(s0);
    v1 = LD32(a2-16);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    cnd_ = v0 == a2;
    a1 = s1 + 0;
    if (cnd_) { goto L_089BC754; }
    goto L_089BC708;
L_089BC708:;
    v0 = func_089D194C(a0);
    goto L_089BC710;
L_089BC710:;
    a0 = D_08C2B2A8 - (-19800);
    a1 = v0 + 0;
    a0 = a0 - 19800;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BC724;
L_089BC724:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089BC740; }
    goto L_089BC730;
L_089BC730:;
    v0 = LD32(v0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC740;
L_089BC740:;
    goto L_089BC744;
L_089BC744:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BC754:;
    { rv_t r_ = func_089D6CBC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC75C;
L_089BC75C:;
    goto L_089BC744;
}

/* 089BC764 */
void func_089BC764(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC764:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    v1 = LD32(a0+544);
    a1 = LD32(s0);
    a0 = LD32(a0+236);
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    v0 = LD32(a1-12);
    a0 = (a0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s0+544, v1);
    v0 = s0 + v0;
    ST32(s0+236, a0);
    a0 = v0 + 0;
    v1 = LD32(s0+208);
    a3 = LD32(v0);
    v0 = LD32(a3+8);
    t_ = v0;
    a1 = LD32(v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC7B4;
L_089BC7B4:;
    a1 = LD32(s0);
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BC7EC; }
    goto L_089BC7CC;
L_089BC7CC:;
    a0 = LD32(a1-16);
    a1 = 10014;
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC7DC;
L_089BC7DC:;
    sp = sp + 16;
    return;
L_089BC7EC:;
    v0 = LD32(v0);
    v1 = LD32(v0+120);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC7FC;
L_089BC7FC:;
    a1 = LD32(s0);
    goto L_089BC7CC;
}

/* 089BC804 */
rv_t func_089BC804(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BC804:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BC820;
L_089BC820:;
    ST8(s0+549, v0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_089D55A0(a0, a1, 0, 0, 0);
    goto L_089BC830;
L_089BC830:;
    v0 = LD32(s0+564);
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089BC924; }
    goto L_089BC840;
L_089BC840:;
    a0 = s0 + 0;
    { rv_t r_ = func_089D6E34(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC848;
L_089BC848:;
    a0 = s0 + 0;
    v0 = func_089D194C(a0);
    goto L_089BC850;
L_089BC850:;
    a2 = v0 + 0;
    a0 = D_08C2AFB8 - (-20552);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20552;
    if (cnd_) { goto L_089BC8E4; }
    goto L_089BC864;
L_089BC864:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20552);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089BC8B4; }
    goto L_089BC888;
L_089BC888:;
    a0 = LD32(a1);
    goto L_089BC88C;
L_089BC88C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089BC904; }
    goto L_089BC8A4;
L_089BC8A4:;
    a1 = LD32(a1+4);
    goto L_089BC8A8;
L_089BC8A8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089BC88C; }
    goto L_089BC8B0;
L_089BC8B0:;
    a0 = 0 + 0;
    goto L_089BC8B4;
L_089BC8B4:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089BC8E8; }
    goto L_089BC8BC;
L_089BC8BC:;
    v1 = LD32(a0);
    v0 = LD32(v1+180);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC8CC;
L_089BC8CC:;
    v0 = LD32(sp);
    a0 = 0x58d0000u;
    a0 = a0 | 0x13bf;
    v1 = LD32(v0);
    cnd_ = v1 == a0;
    v0 = D_08AEECA4 - (-4956);
    if (cnd_) { goto L_089BC8F8; }
    goto L_089BC8E4;
L_089BC8E4:;
    goto L_089BC8E8;
L_089BC8E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BC8F8:;
    f0 = BITSF(LD32(v0-4956));
    ST32(s0+100, FBITS(f0));
    goto L_089BC8E4;
L_089BC904:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089BC8A8; }
    goto L_089BC910;
L_089BC910:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089BC8A8; }
    goto L_089BC91C;
L_089BC91C:;
    goto L_089BC8B4;
L_089BC924:;
    a0 = s0 + 0;
    v0 = func_089BB6F0(a0, 0, 0, 0);
    goto L_089BC92C;
L_089BC92C:;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089BC948; }
    goto L_089BC934;
L_089BC934:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089D6E34(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC940;
L_089BC940:;
    goto L_089BC8E8;
L_089BC948:;
    v0 = LD32(s0+544);
    v1 = LD32(s0+236);
    a0 = LD32(s0);
    v0 = v0 | 0x2;
    v1 = v1 | 0x10;
    a3 = LD32(a0-12);
    ST32(s0+544, v0);
    a2 = 0 + 0;
    a3 = s0 + a3;
    ST32(s0+236, v1);
    v0 = LD32(a3);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC980;
L_089BC980:;
    a1 = LD32(s0);
    v0 = LD32(a1-12);
    a0 = s0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089BC9BC; }
    goto L_089BC998;
L_089BC998:;
    v0 = LD32(a1+224);
    a0 = s0 + 0;
    t_ = v0;
    a1 = 999;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC9A8;
L_089BC9A8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089D6E34(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC9B4;
L_089BC9B4:;
    ST32(s0+100, 0);
    goto L_089BC8E4;
L_089BC9BC:;
    v0 = LD32(v1+120);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BC9C8;
L_089BC9C8:;
    a1 = LD32(s0);
    goto L_089BC998;
}

/* 089BC9D0 */
void func_089BC9D0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BC9D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089BB678(a0, t1, t2, t3);
    goto L_089BC9E8;
L_089BC9E8:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_089BB6A0(a0, 0, 0, 0);
    goto L_089BC9F4;
L_089BC9F4:;
    v1 = v0 + 0;
    v0 = s1 | v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089BCA1C; }
    goto L_089BCA04;
L_089BCA04:;
    ST32(s0+564, 0);
    goto L_089BCA08;
L_089BCA08:;
    sp = sp + 16;
    return;
L_089BCA1C:;
    cnd_ = s1 == 0;
    v0 = 1;
    if (cnd_) { goto L_089BCA30; }
    goto L_089BCA24;
L_089BCA24:;
    cnd_ = v1 == 0;
    v0 = 2;
    if (cnd_) { goto L_089BCA30; }
    goto L_089BCA2C;
L_089BCA2C:;
    v0 = 3;
    goto L_089BCA30;
L_089BCA30:;
    ST32(s0+564, v0);
    goto L_089BCA08;
}

/* 089BCA38 */
rv_t func_089BCA38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089BCA38:;
    v0 = LD32(a0+564);
    v0 = v0 < 0x2u;
    return (rv_t){ v0, v1, f0 };
}

/* 089BCA44 */
rv_t func_089BCA44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089BCA44:;
    v0 = LD_U8(a0+549);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089BCA58; }
    goto L_089BCA50;
L_089BCA50:;
    v0 = LD32(a0+564);
    v1 = v0 < 0x2u;
    goto L_089BCA58;
L_089BCA58:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089BCA60 */
rv_t func_089BCA60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089BCA60:;
    v0 = LD_U8(a0+549);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089BCA74; }
    goto L_089BCA6C;
L_089BCA6C:;
    v0 = LD32(a0+564);
    v1 = v0 < 0x2u;
    goto L_089BCA74;
L_089BCA74:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089BCA7C */
void func_089BCA7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BCA7C:;
    sp = sp - 32;
    s1 = a0 + 0;
    v1 = LD32(a0);
    s2 = LD32(a0+12);
    v0 = LD32(v1+100);
    t_ = v0;
    s3 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCAAC;
L_089BCAAC:;
    cnd_ = v0 != 0;
    a0 = D_08C2BA28 - (-17880);
    if (cnd_) { goto L_089BCB7C; }
    goto L_089BCAB4;
L_089BCAB4:;
    a2 = LD32(s1+576);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 17880;
    if (cnd_) { goto L_089BCB38; }
    goto L_089BCAC4;
L_089BCAC4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-17880);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089BCB14; }
    goto L_089BCAE8;
L_089BCAE8:;
    a0 = LD32(a1);
    goto L_089BCAEC;
L_089BCAEC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089BCB5C; }
    goto L_089BCB04;
L_089BCB04:;
    a1 = LD32(a1+4);
    goto L_089BCB08;
L_089BCB08:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089BCAEC; }
    goto L_089BCB10;
L_089BCB10:;
    s0 = 0 + 0;
    goto L_089BCB14;
L_089BCB14:;
    cnd_ = s0 == 0;
    v0 = 4;
    if (cnd_) { goto L_089BCB38; }
    goto L_089BCB1C;
L_089BCB1C:;
    v1 = LD32(s0+12);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089BCB38; }
    goto L_089BCB28;
L_089BCB28:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089BCB30;
L_089BCB30:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(s0+12); goto L_089BCB38; }
    goto L_089BCB38;
L_089BCB38:;
    cnd_ = s3 != s2;
    if (cnd_) { ST32(s1+12, s2); goto L_089BCB40; }
    goto L_089BCB40;
L_089BCB40:;
    sp = sp + 32;
    return;
L_089BCB5C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BCB04; }
    goto L_089BCB68;
L_089BCB68:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089BCB08; }
    goto L_089BCB74;
L_089BCB74:;
    goto L_089BCB14;
L_089BCB7C:;
    a0 = s1 + 0;
    v0 = func_089D194C(a0);
    goto L_089BCB84;
L_089BCB84:;
    a0 = D_08C2B2A8 - (-19800);
    a0 = a0 - 19800;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BCB98;
L_089BCB98:;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = LD32(v0+12); goto L_089BCB38; }
    goto L_089BCBA0;
L_089BCBA0:;
    goto L_089BCB38;
}

/* 089BCBA8 */
rv_t func_089BCBA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BCBA8:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCBC4;
L_089BCBC4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BCC00; }
    goto L_089BCBCC;
L_089BCBCC:;
    v0 = LD32(s0+172);
    goto L_089BCBD0;
L_089BCBD0:;
    a0 = s0 + 0;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089BCBF0; }
    goto L_089BCBE0;
L_089BCBE0:;
    goto L_089BCBE4;
L_089BCBE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BCBF0:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCBF8;
L_089BCBF8:;
    goto L_089BCBE4;
L_089BCC00:;
    v0 = func_089E3BC4(a0);
    goto L_089BCC08;
L_089BCC08:;
    cnd_ = v0 != 0;
    v0 = LD32(s0+172);
    if (cnd_) { goto L_089BCBD0; }
    goto L_089BCC10;
L_089BCC10:;
    a2 = v0 & 0x1;
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BCC3C; }
    goto L_089BCC20;
L_089BCC20:;
    v0 = LD32(s0+12);
    v0 = v0 ^ 0x4;
    v0 = 0 < v0;
    cnd_ = v0 != a2;
    a1 = v0 + 0;
    if (cnd_) { goto L_089BCBF0; }
    goto L_089BCC34;
L_089BCC34:;
    goto L_089BCBE4;
L_089BCC3C:;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089BCBE0; }
    goto L_089BCC44;
L_089BCC44:;
    goto L_089BCBF0;
}

/* 089BCC4C */
rv_t func_089BCC4C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BCC4C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BCD70; }
    goto L_089BCC80;
L_089BCC80:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEECA8 - (-4952);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-4952));
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
    t0 = D_08C2AD38 - (-21192);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2AD48 - (-21176);
    a3 = D_08C2AD58 - (-21160);
    v1 = t0 - 21192;
    a1 = v0 - 21176;
    a2 = a3 - 21160;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2ADE8 - (-21016);
    s0 = s3 - 21016;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-21176, FBITS(f5));
    v0 = 4;
    ST32(t0-21192, FBITS(f1));
    ST32(a3-21160, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCD38;
L_089BCD38:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-21016, v0);
    if (cnd_) { goto L_089BCD64; }
    goto L_089BCD48;
L_089BCD48:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089BCD50;
L_089BCD50:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089BCD50; }
    goto L_089BCD64;
L_089BCD64:;
    v0 = s3 - 21016;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089BCD70;
L_089BCD70:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BCD94; }
    goto L_089BCD84;
L_089BCD84:;
    v0 = D_08C2ADE8 - (-21016);
    a0 = LD32(v0-21016);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089BCDAC; }
    goto L_089BCD94;
L_089BCD94:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BCDAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BCDB4;
L_089BCDB4:;
    goto L_089BCD94;
}

/* 089BCDBC */
rv_t func_089BCDBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BCDBC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089BCC4C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCDD0;
L_089BCDD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BCDDC */
rv_t func_089BCDDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BCDDC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089BCC4C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCDF0;
L_089BCDF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BCDFC */
rv_t func_089BCDFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BCDFC:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_089C5440(a0);
    goto L_089BCE10;
L_089BCE10:;
    ST32(s0+236, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5488(a0);
    goto L_089BCE1C;
L_089BCE1C:;
    ST32(s0+240, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C54D0(a0);
    goto L_089BCE28;
L_089BCE28:;
    ST32(s0+244, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5518(a0);
    goto L_089BCE34;
L_089BCE34:;
    ST32(s0+248, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5560(a0);
    goto L_089BCE40;
L_089BCE40:;
    ST32(s0+252, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C55A8(a0);
    goto L_089BCE4C;
L_089BCE4C:;
    ST32(s0+256, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C55F0(a0);
    goto L_089BCE58;
L_089BCE58:;
    ST32(s0+260, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5638(a0);
    goto L_089BCE64;
L_089BCE64:;
    ST32(s0+264, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5680(a0);
    goto L_089BCE70;
L_089BCE70:;
    ST32(s0+268, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C56C8(a0);
    goto L_089BCE7C;
L_089BCE7C:;
    ST32(s0+272, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5710(a0, 0, 0, 0);
    goto L_089BCE88;
L_089BCE88:;
    ST32(s0+276, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C573C(a0, 0, 0, 0);
    goto L_089BCE94;
L_089BCE94:;
    ST32(s0+280, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5768(a0, 0, 0, 0);
    goto L_089BCEA0;
L_089BCEA0:;
    ST32(s0+284, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C57BC(a0, 0, 0, 0);
    goto L_089BCEAC;
L_089BCEAC:;
    ST32(s0+292, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C57E8(a0, 0, 0, 0);
    goto L_089BCEB8;
L_089BCEB8:;
    ST32(s0+296, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5814(a0, 0, 0, 0);
    goto L_089BCEC4;
L_089BCEC4:;
    ST32(s0+300, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5840(a0, 0, 0, 0);
    goto L_089BCED0;
L_089BCED0:;
    ST32(s0+304, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C586C(a0, 0, 0, 0);
    goto L_089BCEDC;
L_089BCEDC:;
    ST32(s0+308, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C58C4(a0, 0, 0, 0);
    goto L_089BCEE8;
L_089BCEE8:;
    ST32(s0+312, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C58F0(a0);
    goto L_089BCEF4;
L_089BCEF4:;
    ST32(s0+316, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5938(a0);
    goto L_089BCF00;
L_089BCF00:;
    ST32(s0+320, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5980(a0);
    goto L_089BCF0C;
L_089BCF0C:;
    ST32(s0+324, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C59C8(a0);
    goto L_089BCF18;
L_089BCF18:;
    ST32(s0+328, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5A10(a0);
    goto L_089BCF24;
L_089BCF24:;
    ST32(s0+332, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5AA0(a0);
    goto L_089BCF30;
L_089BCF30:;
    ST32(s0+340, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5AE8(a0, 0, 0, 0);
    goto L_089BCF3C;
L_089BCF3C:;
    ST32(s0+344, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5B10(a0, 0, 0, 0);
    goto L_089BCF48;
L_089BCF48:;
    ST32(s0+348, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5B3C(a0, 0, 0, 0);
    goto L_089BCF54;
L_089BCF54:;
    ST32(s0+352, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5B68(a0, 0, 0, 0);
    goto L_089BCF60;
L_089BCF60:;
    ST32(s0+356, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5B94(a0, 0, 0, 0);
    goto L_089BCF6C;
L_089BCF6C:;
    ST32(s0+360, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5BBC(a0, 0, 0, 0);
    goto L_089BCF78;
L_089BCF78:;
    ST32(s0+364, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5BE8(a0, 0, 0, 0);
    goto L_089BCF84;
L_089BCF84:;
    ST32(s0+368, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5C14(a0, 0, 0, 0);
    goto L_089BCF90;
L_089BCF90:;
    ST32(s0+372, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089C5C40(a0, 0, 0, 0);
    goto L_089BCF9C;
L_089BCF9C:;
    ST32(s0+376, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089BCFFC(a0, 0, 0, 0);
    goto L_089BCFA8;
L_089BCFA8:;
    ST32(s0+884, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089BCFD0(a0, 0, 0, 0);
    goto L_089BCFB4;
L_089BCFB4:;
    ST32(s0+888, FBITS(f0));
    a0 = s0 + 0;
    { rv_t r_ = func_089C4A2C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCFC0;
L_089BCFC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089BCFD0 */
float func_089BCFD0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BCFD0:;
    sp = sp - 16;
    v0 = D_08AEECB8 - (-4936);
    a1 = 0xf9750000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4936));
    a1 = a1 | 0x7aeb;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BCFF0;
L_089BCFF0:;
    sp = sp + 16;
    return f0;
}

/* 089BCFFC */
float func_089BCFFC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BCFFC:;
    sp = sp - 16;
    v0 = D_08AEECBC - (-4932);
    a1 = 0x78580000u;
    a0 = LD32(a0+588);
    f12 = BITSF(LD32(v0-4932));
    a1 = a1 | 0x1f9c;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD01C;
L_089BD01C:;
    sp = sp + 16;
    return f0;
}

/* 089BD028 */
void func_089BD028(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089BD028:;
    sp = sp - 64;
    s5 = a0 + 1280;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08B016C8 - (5832);
    s0 = s0 + 5832;
    s4 = s1 + 1016;
    s6 = 1;
    s3 = D_08C2AEC8 - (-20792);
    s2 = s3 - 20792;
    func_08873BF8(a0);
    goto L_089BD078;
L_089BD078:;
    a1 = s0 + 48;
    a0 = s4 + 0;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089BD088;
L_089BD088:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089C3E24(a0, a1);
    goto L_089BD094;
L_089BD094:;
    v0 = D_08AEECC4 - (-4924);
    f20 = BITSF(LD32(v0-4924));
    v1 = D_08B013E8 - (5096);
    v1 = v1 + 5096;
    a1 = v1 + 708;
    v0 = v1 + 596;
    ST32(s1+1016, v0);
    a0 = s1 + 892;
    ST32(s1+1280, a1);
    ST32(s1, v1);
    ST32(s1+880, FBITS(f20));
    ST32(s1+884, FBITS(f20));
    ST32(s1+888, FBITS(f20));
    ST32(s1+856, 0);
    ST32(s1+860, 0);
    ST32(s1+864, 0);
    ST32(s1+868, 0);
    ST32(s1+872, 0);
    ST32(s1+876, 0);
    func_08918FB0(a0);
    goto L_089BD0E4;
L_089BD0E4:;
    a0 = s1 + 916;
    func_08918FB0(a0);
    goto L_089BD0EC;
L_089BD0EC:;
    ST32(s1+940, 0);
    a0 = D_08B45AA8 - (23208);
    v0 = a0 + 23208;
    ST32(s1+944, 0);
    v1 = s1 + 952;
    a1 = D_08B45A9C - (23196);
    ST32(s1+948, 0);
    a2 = a1 + 23196;
    a3 = s1 + 988;
    f8 = BITSF(LD32(a0+23208));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(v1+12, FBITS(f3));
    v0 = (u32)-32748;
    a0 = 12;
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    ST32(v1+32, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(s1+952, FBITS(f8));
    f0 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+4));
    ST32(s1+988, FBITS(f0));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    ST32(s1+1000, 0);
    ST32(s1+1004, 0);
    ST32(s1+1008, 0);
    ST16(s5+8, v0);
    ST8(s4+246, s6);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD1AC;
L_089BD1AC:;
    a0 = LD32(s3-20792);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s2+12, v1);
    f0 = BITSF(0);
    v1 = s1 + 540;
    ST32(v0+4, a1);
    ST32(v0, s1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    v0 = LD32(s1+848);
    v0 = (v0 & ~(0x1u << 2)) | ((s6 & 0x1) << 2);
    ST32(s1+848, v0);
    ST32(s1+540, FBITS(f0));
    ST32(v1+8, FBITS(f20));
    ST32(v1+4, FBITS(f0));
    sp = sp + 64;
    return;
}

/* 089BD224 */
rv_t func_089BD224(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BD224:;
    v1 = D_08B013E8 - (5096);
    sp = sp - 16;
    v1 = v1 + 5096;
    v0 = v1 + 596;
    s1 = a0 + 0;
    a0 = v1 + 708;
    ST32(s1+1280, a0);
    a0 = D_08C2AEC8 - (-20792);
    a0 = a0 - 20792;
    ST32(s1+1016, v0);
    a1 = s1 + 0;
    ST32(s1, v1);
    func_08AC6084(a0, a1, t1, t2, t3);
    goto L_089BD264;
L_089BD264:;
    a2 = LD32(s1+1004);
    cnd_ = a2 == 0;
    if (cnd_) { s0 = LD32(s1+876); goto L_089BD2AC; }
    goto L_089BD270;
L_089BD270:;
    a1 = LD32(s1+1000);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089BD2A0; }
    goto L_089BD27C;
L_089BD27C:;
    v0 = s0 << 2;
    goto L_089BD280;
L_089BD280:;
    v0 = v0 + a2;
    v1 = LD32(v0);
    s0 = s0 + 1;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089BD31C; }
    goto L_089BD294;
L_089BD294:;
    v0 = s0 < a1;
    cnd_ = v0 != 0;
    v0 = s0 << 2;
    if (cnd_) { goto L_089BD280; }
    goto L_089BD2A0;
L_089BD2A0:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_089BD30C; }
    goto L_089BD2A8;
L_089BD2A8:;
    s0 = LD32(s1+876);
    goto L_089BD2AC;
L_089BD2AC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089BD2F4; }
    goto L_089BD2B4;
L_089BD2B4:;
    s0 = D_08B016C8 - (5832);
    goto L_089BD2B8;
L_089BD2B8:;
    s0 = s0 + 5832;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089BD2CC;
L_089BD2CC:;
    a1 = s0 + 0;
    a0 = s1 + 1016;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD2D8;
L_089BD2D8:;
    a0 = s1 + 1280;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD2E0;
L_089BD2E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BD2F4:;
    a0 = s0 + 0;
    func_089C26BC(a0);
    goto L_089BD2FC;
L_089BD2FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD304;
L_089BD304:;
    s0 = D_08B016C8 - (5832);
    goto L_089BD2B8;
L_089BD30C:;
    a0 = a2 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD314;
L_089BD314:;
    s0 = LD32(s1+876);
    goto L_089BD2AC;
L_089BD31C:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD324;
L_089BD324:;
    a2 = LD32(s1+1004);
    a1 = LD32(s1+1000);
    goto L_089BD294;
}

/* 089BD330 */
rv_t func_089BD330(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BD330:;
    v1 = D_08B013E8 - (5096);
    sp = sp - 16;
    v1 = v1 + 5096;
    v0 = v1 + 596;
    s1 = a0 + 0;
    a0 = v1 + 708;
    ST32(s1+1280, a0);
    a0 = D_08C2AEC8 - (-20792);
    a0 = a0 - 20792;
    ST32(s1+1016, v0);
    a1 = s1 + 0;
    ST32(s1, v1);
    func_08AC6084(a0, a1, t1, t2, t3);
    goto L_089BD370;
L_089BD370:;
    a2 = LD32(s1+1004);
    cnd_ = a2 == 0;
    if (cnd_) { s0 = LD32(s1+876); goto L_089BD3B8; }
    goto L_089BD37C;
L_089BD37C:;
    a1 = LD32(s1+1000);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089BD3AC; }
    goto L_089BD388;
L_089BD388:;
    v0 = s0 << 2;
    goto L_089BD38C;
L_089BD38C:;
    v0 = v0 + a2;
    v1 = LD32(v0);
    s0 = s0 + 1;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089BD430; }
    goto L_089BD3A0;
L_089BD3A0:;
    v0 = s0 < a1;
    cnd_ = v0 != 0;
    v0 = s0 << 2;
    if (cnd_) { goto L_089BD38C; }
    goto L_089BD3AC;
L_089BD3AC:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_089BD420; }
    goto L_089BD3B4;
L_089BD3B4:;
    s0 = LD32(s1+876);
    goto L_089BD3B8;
L_089BD3B8:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089BD408; }
    goto L_089BD3C0;
L_089BD3C0:;
    s0 = D_08B016C8 - (5832);
    goto L_089BD3C4;
L_089BD3C4:;
    s0 = s0 + 5832;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089C4354(a0, a1);
    goto L_089BD3D8;
L_089BD3D8:;
    a1 = s0 + 0;
    a0 = s1 + 1016;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD3E4;
L_089BD3E4:;
    a0 = s1 + 1280;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD3EC;
L_089BD3EC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD3F4;
L_089BD3F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BD408:;
    a0 = s0 + 0;
    func_089C26BC(a0);
    goto L_089BD410;
L_089BD410:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD418;
L_089BD418:;
    s0 = D_08B016C8 - (5832);
    goto L_089BD3C4;
L_089BD420:;
    a0 = a2 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD428;
L_089BD428:;
    s0 = LD32(s1+876);
    goto L_089BD3B8;
L_089BD430:;
    { rv_t r_ = func_088BA7D8(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD438;
L_089BD438:;
    a2 = LD32(s1+1004);
    a1 = LD32(s1+1000);
    goto L_089BD3A0;
}

/* 089BD444 */
rv_t func_089BD444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BD444:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 1300;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD460;
L_089BD460:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    func_089BD028(a0);
    goto L_089BD46C;
L_089BD46C:;
    v1 = LD32(s1);
    a1 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD480;
L_089BD480:;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    { rv_t r_ = func_0885E738(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD490;
L_089BD490:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089BD4A4;
L_089BD4A4:;
    a0 = D_08ADE5EC - (-6676);
    a0 = a0 - 6676;
    s0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD4B4;
L_089BD4B4:;
    a0 = v0 + 0;
    a2 = s1 + 588;
    a1 = s0 + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD4C4;
L_089BD4C4:;
    v1 = LD32(s1);
    v0 = LD32(v1+456);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD4D4;
L_089BD4D4:;
    v0 = 0x58d0000u;
    v0 = v0 | 0x15ed;
    cnd_ = s0 == v0;
    v0 = v0 < s0;
    if (cnd_) { goto L_089BD5F0; }
    goto L_089BD4E4;
L_089BD4E4:;
    cnd_ = v0 != 0;
    v0 = 0x58d0000u;
    if (cnd_) { goto L_089BD598; }
    goto L_089BD4EC;
L_089BD4EC:;
    v0 = v0 | 0x13bf;
    cnd_ = s0 == v0;
    v0 = 0x58d0000u;
    if (cnd_) { goto L_089BD578; }
    goto L_089BD4F8;
L_089BD4F8:;
    v0 = v0 | 0x15ce;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_089BD54C; }
    goto L_089BD504;
L_089BD504:;
    v1 = LD32(s1);
    goto L_089BD508;
L_089BD508:;
    v0 = LD32(v1+480);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD514;
L_089BD514:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089BD538; }
    goto L_089BD52C;
L_089BD52C:;
    v0 = LD32(a0+312);
    v0 = (v0 & ~(0x1u << 17)) | ((v1 & 0x1) << 17);
    ST32(a0+312, v0);
    goto L_089BD538;
L_089BD538:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BD54C:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD554;
L_089BD554:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089C3510(a0, a1);
    goto L_089BD564;
L_089BD564:;
    ST32(s1+876, s0);
    goto L_089BD568;
L_089BD568:;
    a0 = s1 + 0;
    func_089BD624(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD570;
L_089BD570:;
    v1 = LD32(s1);
    goto L_089BD508;
L_089BD578:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD580;
L_089BD580:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089C270C(a0, a1);
    goto L_089BD590;
L_089BD590:;
    ST32(s1+876, s0);
    goto L_089BD568;
L_089BD598:;
    v0 = v0 | 0x15fd;
    cnd_ = s0 == v0;
    v0 = 0x34610000u;
    if (cnd_) { goto L_089BD5D0; }
    goto L_089BD5A4;
L_089BD5A4:;
    v0 = v0 | 0xdad0;
    cnd_ = s0 != v0;
    if (cnd_) { v1 = LD32(s1); goto L_089BD508; }
    goto L_089BD5B0;
L_089BD5B0:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD5B8;
L_089BD5B8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089C3988(a0, a1);
    goto L_089BD5C8;
L_089BD5C8:;
    ST32(s1+876, s0);
    goto L_089BD568;
L_089BD5D0:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD5D8;
L_089BD5D8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_089C3008(a0, a1);
    goto L_089BD5E8;
L_089BD5E8:;
    ST32(s1+876, s0);
    goto L_089BD568;
L_089BD5F0:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD5F8;
L_089BD5F8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_089C2B90(a0, a1);
    goto L_089BD608;
L_089BD608:;
    ST32(s1+876, s0);
    a0 = s1 + 0;
    func_089BD624(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD614;
L_089BD614:;
    a0 = s1 + 0;
    func_089BF770(a0);
    goto L_089BD61C;
L_089BD61C:;
    v1 = LD32(s1);
    goto L_089BD508;
}

/* 089BD624 */
void func_089BD624(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BD624:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+876);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089BD654; }
    goto L_089BD644;
L_089BD644:;
    goto L_089BD648;
L_089BD648:;
    sp = sp + 16;
    return;
L_089BD654:;
    v1 = LD32(v1);
    v0 = LD32(v1+28);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD664;
L_089BD664:;
    a0 = s0 + 0;
    func_089C0B68(a0);
    goto L_089BD66C;
L_089BD66C:;
    v0 = LD32(s0+876);
    f12 = BITSF(0);
    a0 = s0 + 0;
    a3 = LD_U8(v0+18);
    a1 = LD32(v0+12);
    a2 = LD_U8(v0+16);
    f13 = f12;
    func_089C0828(a0, a1, a2, a3);
    goto L_089BD68C;
L_089BD68C:;
    goto L_089BD648;
}

/* 089BD694 */
rv_t func_089BD694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BD694:;
    sp = sp - 32;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089BD88C; }
    goto L_089BD6B4;
L_089BD6B4:;
    a0 = s1 + 0;
    { rv_t r_ = func_089DBCF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD6BC;
L_089BD6BC:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089BD6D4; }
    goto L_089BD6CC;
L_089BD6CC:;
    v0 = LD_U8(v0+68);
    s0 = 0 < v0;
    goto L_089BD6D4;
L_089BD6D4:;
    a0 = LD32(s1+92);
    f20 = BITSF(0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD6EC;
L_089BD6EC:;
    ST32(s1+484, FBITS(f0));
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD704;
L_089BD704:;
    v0 = LD32(s1+848);
    ST32(s1+492, FBITS(f0));
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+848, v0);
    a0 = LD32(s1+92);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 6;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD728;
L_089BD728:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = LD32(s1+848);
    if (cnd_) { goto L_089BD744; }
    goto L_089BD738;
L_089BD738:;
    v0 = v0 | 0x1;
    ST32(s1+848, v0);
    v0 = LD32(s1+848);
    goto L_089BD744;
L_089BD744:;
    a2 = LD32(s1+92);
    a1 = 7;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s1+848, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD764;
L_089BD764:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089BD780; }
    goto L_089BD774;
L_089BD774:;
    v0 = LD32(s1+848);
    v0 = v0 | 0x2;
    ST32(s1+848, v0);
    goto L_089BD780;
L_089BD780:;
    a0 = s1 + 0;
    func_089DE1D4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD788;
L_089BD788:;
    v0 = LD32(s1+1008);
    a2 = LD32(s1+92);
    a1 = 9;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+1008, v0);
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD7AC;
L_089BD7AC:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s1+92); goto L_089BD7CC; }
    goto L_089BD7BC;
L_089BD7BC:;
    v0 = LD32(s1+1008);
    v0 = v0 | 0x1;
    ST32(s1+1008, v0);
    a0 = LD32(s1+92);
    goto L_089BD7CC;
L_089BD7CC:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD7DC;
L_089BD7DC:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a0 = 0x8041;
    if (cnd_) { goto L_089BD860; }
    goto L_089BD7EC;
L_089BD7EC:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s1+92); goto L_089BD80C; }
    goto L_089BD7F4;
L_089BD7F4:;
    goto L_089BD7F8;
L_089BD7F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BD80C:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD81C;
L_089BD81C:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_089BD7F8; }
    goto L_089BD82C;
L_089BD82C:;
    a0 = 0x8048;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD840;
L_089BD840:;
    v1 = LD32(s1);
    a1 = v0 + 0;
    a0 = LD32(v1-16);
    goto L_089BD84C;
L_089BD84C:;
    a0 = s1 + a0;
    a2 = LD32(a0+4);
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD858;
L_089BD858:;
    goto L_089BD7F8;
L_089BD860:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BD870;
L_089BD870:;
    a0 = LD32(v0+24);
    v1 = LD32(s1+524);
    a1 = v0 + 0;
    ST32(a0, v1);
    v0 = LD32(s1);
    a0 = LD32(v0-16);
    goto L_089BD84C;
L_089BD88C:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD894;
L_089BD894:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08A60618(a0);
    goto L_089BD8A0;
L_089BD8A0:;
    ST32(s1+92, s0);
    goto L_089BD6B4;
}

/* 089BD8A8 */
rv_t func_089BD8A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BD8A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089CB450(a0);
    goto L_089BD8BC;
L_089BD8BC:;
    a0 = s0 + 0;
    func_089C9F48(a0);
    goto L_089BD8C4;
L_089BD8C4:;
    a0 = s0 + 0;
    func_089CA734(a0);
    goto L_089BD8CC;
L_089BD8CC:;
    a0 = s0 + 0;
    func_089C9978(a0, 0, 0, 0);
    goto L_089BD8D4;
L_089BD8D4:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089BD8E8;
L_089BD8E8:;
    v1 = v0 + 0;
    v0 = 0x58d0000u;
    v0 = v0 | 0x15ed;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089BD944; }
    goto L_089BD8FC;
L_089BD8FC:;
    cnd_ = v0 != 0;
    v0 = 0x58d0000u;
    if (cnd_) { goto L_089BD9C8; }
    goto L_089BD904;
L_089BD904:;
    v0 = v0 | 0x13bf;
    cnd_ = v1 == v0;
    v0 = 0x58d0000u;
    if (cnd_) { goto L_089BD944; }
    goto L_089BD910;
L_089BD910:;
    v0 = v0 | 0x15ce;
    goto L_089BD914;
L_089BD914:;
    cnd_ = v1 == v0;
    v0 = D_08B2C1BC - (-15940);
    if (cnd_) { goto L_089BD948; }
    goto L_089BD91C;
L_089BD91C:;
    a0 = s0 + 0;
    func_089BDB24(a0, 0, 0, 0);
    goto L_089BD924;
L_089BD924:;
    a0 = s0 + 0;
    { rv_t r_ = func_089C71EC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD92C;
L_089BD92C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089C0424(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD934;
L_089BD934:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BD944:;
    v0 = D_08B2C1BC - (-15940);
    goto L_089BD948;
L_089BD948:;
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089BD960; }
    goto L_089BD954;
L_089BD954:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089BD988; }
    goto L_089BD960;
L_089BD960:;
    a0 = s0 + 0;
    { rv_t r_ = func_089BE890(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD968;
L_089BD968:;
    a0 = s0 + 0;
    func_089BF92C(a0);
    goto L_089BD970;
L_089BD970:;
    a0 = s0 + 0;
    func_089C0D94(a0);
    goto L_089BD978;
L_089BD978:;
    a0 = s0 + 0;
    func_089BF7DC(a0, 0, 0, 0);
    goto L_089BD980;
L_089BD980:;
    goto L_089BD91C;
L_089BD988:;
    a0 = s0 + 0;
    func_089BE4E4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD990;
L_089BD990:;
    a0 = s0 + 0;
    func_089BE034(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089BD998;
L_089BD998:;
    a0 = s0 + 0;
    { rv_t r_ = func_089BE890(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BD9A0;
L_089BD9A0:;
    a0 = s0 + 0;
    func_089BF9E0(a0);
    goto L_089BD9A8;
L_089BD9A8:;
    a0 = s0 + 0;
    func_089BF92C(a0);
    goto L_089BD9B0;
L_089BD9B0:;
    a0 = s0 + 0;
    func_089BF7DC(a0, 0, 0, 0);
    goto L_089BD9B8;
L_089BD9B8:;
    a0 = s0 + 0;
    func_089C8798(a0);
    goto L_089BD9C0;
L_089BD9C0:;
    goto L_089BD91C;
L_089BD9C8:;
    v0 = v0 | 0x15fd;
    cnd_ = v1 == v0;
    v0 = 0x34610000u;
    if (cnd_) { goto L_089BD944; }
    goto L_089BD9D4;
L_089BD9D4:;
    v0 = v0 | 0xdad0;
    goto L_089BD914;
}

/* 089BD9DC */
rv_t func_089BD9DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BD9DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089BDA00;
L_089BDA00:;
    v1 = 0x58d0000u;
    v1 = v1 | 0x13bf;
    cnd_ = v0 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BDA28; }
    goto L_089BDA10;
L_089BDA10:;
    { rv_t r_ = func_089C48BC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDA18;
L_089BDA18:;
    goto L_089BDA1C;
L_089BDA1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BDA28:;
    v1 = LD32(s0+876);
    v0 = LD_U8(v1+17);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089BDAA4; }
    goto L_089BDA38;
L_089BDA38:;
    a0 = s0 + 0;
    v0 = func_089C0F80(a0);
    goto L_089BDA40;
L_089BDA40:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BDA50; }
    goto L_089BDA48;
L_089BDA48:;
    v0 = (u32)-1;
    ST32(s0+932, v0);
    goto L_089BDA50;
L_089BDA50:;
    func_089CD578(a0);
    goto L_089BDA58;
L_089BDA58:;
    a0 = s0 + 0;
    func_089CD424(a0);
    goto L_089BDA60;
L_089BDA60:;
    a0 = s0 + 0;
    func_089CB2E0(a0);
    goto L_089BDA68;
L_089BDA68:;
    v0 = LD32(s0+844);
    a0 = s0 + 0;
    v0 = v0 | 0x8;
    ST32(s0+844, v0);
    func_089C9BC4(a0);
    goto L_089BDA7C;
L_089BDA7C:;
    a0 = s0 + 0;
    func_089CA0F8(a0);
    goto L_089BDA84;
L_089BDA84:;
    a0 = s0 + 0;
    func_089C9DF8(a0);
    goto L_089BDA8C;
L_089BDA8C:;
    a0 = s0 + 0;
    func_089C9F18(a0);
    goto L_089BDA94;
L_089BDA94:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DC32C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDA9C;
L_089BDA9C:;
    goto L_089BDA1C;
L_089BDAA4:;
    v0 = LD32(v1);
    v1 = LD32(v0+24);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDAB4;
L_089BDAB4:;
    goto L_089BDA38;
}

/* 089BDABC */
void func_089BDABC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BDABC:;
    sp = sp - 16;
    a1 = 1;
    v0 = LD32(a0+1008);
    v1 = v0 | 0x4;
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BDAF0; }
    goto L_089BDAE0;
L_089BDAE0:;
    goto L_089BDAE4;
L_089BDAE4:;
    sp = sp + 16;
    return;
L_089BDAF0:;
    v0 = LD32(a0);
    ST32(a0+1008, v1);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08876270(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDB04;
L_089BDB04:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CAF64(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDB0C;
L_089BDB0C:;
    v1 = LD32(s0);
    v0 = LD32(v1+464);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDB1C;
L_089BDB1C:;
    goto L_089BDAE4;
}

/* 089BDB24 */
void func_089BDB24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BDB24:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = BITSF(0);
    a0 = LD32(a0);
    v0 = LD32(a0-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_089BDBC8; }
    goto L_089BDB5C;
L_089BDB5C:;
    v1 = LD32(s0+1004);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(a0-12); goto L_089BDBA8; }
    goto L_089BDB68;
L_089BDB68:;
    a2 = LD32(s0+1000);
    cnd_ = a2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089BDBA4; }
    goto L_089BDB74;
L_089BDB74:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    s1 = s1 + 1;
    a1 = 1;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089BDBF4; }
    goto L_089BDB90;
L_089BDB90:;
    v0 = s1 < a2;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0); goto L_089BDBA4; }
    goto L_089BDB9C;
L_089BDB9C:;
    v1 = LD32(s0+1004);
    goto L_089BDB74;
L_089BDBA4:;
    a0 = LD32(a0-12);
    goto L_089BDBA8;
L_089BDBA8:;
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089BDBB4;
L_089BDBB4:;
    v1 = 0x58d0000u;
    v1 = v1 | 0x13bf;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s0+876); goto L_089BDBD8; }
    goto L_089BDBC4;
L_089BDBC4:;
    goto L_089BDBC8;
L_089BDBC8:;
    sp = sp + 16;
    return;
L_089BDBD8:;
    v1 = LD_U8(v0+17);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_089BDBC8; }
    goto L_089BDBE4;
L_089BDBE4:;
    a0 = s0 + 0;
    func_089BDABC(a0, 0, 0, 0);
    goto L_089BDBEC;
L_089BDBEC:;
    goto L_089BDBC8;
L_089BDBF4:;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BDBFC;
L_089BDBFC:;
    a2 = LD32(s0+1000);
    goto L_089BDB90;
}

/* 089BDC04 */
rv_t func_089BDC04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BDC04:;
    sp = sp - 16;
    v0 = 61;
    a2 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BDD48; }
    goto L_089BDC28;
L_089BDC28:;
    v0 = 90;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD_U8(a0+195); goto L_089BDC50; }
    goto L_089BDC34;
L_089BDC34:;
    { rv_t r_ = func_089C7A00(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDC3C;
L_089BDC3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BDC50:;
    cnd_ = v0 == 0;
    s1 = LD32(a1+24);
    if (cnd_) { goto L_089BDC64; }
    goto L_089BDC58;
L_089BDC58:;
    v0 = LD_U8(a0+124);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089BDD28; }
    goto L_089BDC64;
L_089BDC64:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089BDC78; }
    goto L_089BDC6C;
L_089BDC6C:;
    f12 = BITSF(LD32(a2+8));
    a1 = s0 + 0;
    { u64 r_ = func_089C23BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BDC78;
L_089BDC78:;
    v0 = LD_U8(s0+124);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089BDCA0; }
    goto L_089BDC84;
L_089BDC84:;
    a1 = s1 + 152;
    a0 = s0 + 0;
    { rv_t r_ = func_089C0C64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDC90;
L_089BDC90:;
    v0 = 1;
    ST8(s0+124, v0);
    v0 = 1;
    goto L_089BDC3C;
L_089BDCA0:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDCAC;
L_089BDCAC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = s0 + 528;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    f0 = BITSF(LD32(v0));
    v1 = LD32(s0);
    ST32(s0+528, FBITS(f0));
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDCD8;
L_089BDCD8:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    v0 = s0 + 552;
    ST32(v0+32, FBITS(f0));
    ST32(s0+552, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+12, FBITS(f4));
    ST32(v0+16, FBITS(f5));
    ST32(v0+20, FBITS(f6));
    ST32(v0+24, FBITS(f7));
    ST32(v0+28, FBITS(f8));
    goto L_089BDC84;
L_089BDD28:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = 1; goto L_089BDC3C; }
    goto L_089BDD30;
L_089BDD30:;
    f12 = BITSF(LD32(a1+8));
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D0F84(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDD40;
L_089BDD40:;
    v0 = 1;
    goto L_089BDC3C;
L_089BDD48:;
    a1 = LD32(a1+24);
    { rv_t r_ = func_089C0C64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDD50;
L_089BDD50:;
    v0 = 1;
    goto L_089BDC3C;
}

/* 089BDD58 */
rv_t func_089BDD58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BDD58:;
    a3 = LD32(a1+24);
    sp = sp - 16;
    cnd_ = a3 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_089BDDFC; }
    goto L_089BDD6C;
L_089BDD6C:;
    v0 = LD32(a0+876);
    a2 = LD32(v0+4);
    v1 = a2 - 1;
    v0 = a2 ^ 0x5;
    v1 = v1 < 0x2u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_089BDE10; }
    goto L_089BDD90;
L_089BDD90:;
    v0 = 6;
    cnd_ = a2 == v0;
    if (cnd_) { t1 = 1; goto L_089BDD9C; }
    goto L_089BDD9C;
L_089BDD9C:;
    v0 = LD32(a3+56);
    v0 = (v0 & ~(0x1u << 0)) | ((t1 & 0x1) << 0);
    ST32(a3+56, v0);
    v1 = v0 + 0;
    a2 = LD32(t0+876);
    v0 = LD32(a2+4);
    v0 = v0 ^ 0x8;
    v0 = v0 < 0x1u;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(a3+56, v1);
    a2 = LD32(t0+876);
    v0 = LD32(a2+4);
    v0 = v0 ^ 0x9;
    v0 = v0 < 0x1u;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(a3+56, v1);
    v0 = LD32(t0+876);
    a2 = LD_U8(v0+19);
    v1 = (v1 & ~(0x1u << 3)) | ((a2 & 0x1) << 3);
    ST32(a3+56, v1);
    v0 = LD32(t0+876);
    a2 = LD_U8(v0+18);
    v1 = (v1 & ~(0x1u << 4)) | ((a2 & 0x1) << 4);
    ST32(a3+56, v1);
    goto L_089BDDFC;
L_089BDDFC:;
    { rv_t r_ = func_089C8004(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDE04;
L_089BDE04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BDE10:;
    t1 = 1;
    goto L_089BDD9C;
}

/* 089BDE18 */
rv_t func_089BDE18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089BDE18:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_089CB944(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDE34;
L_089BDE34:;
    a1 = 1;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BDE58; }
    goto L_089BDE44;
L_089BDE44:;
    goto L_089BDE48;
L_089BDE48:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089BDE58:;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BDE60;
L_089BDE60:;
    a0 = LD32(s0+40);
    a1 = 2;
    v0 = func_088BB56C(a0, a1);
    goto L_089BDE6C;
L_089BDE6C:;
    a0 = LD32(s0+40);
    a1 = 6;
    v0 = func_088BB578(a0, a1);
    goto L_089BDE78;
L_089BDE78:;
    f12 = BITSF(0);
    a0 = LD32(s0+40);
    { rv_t r_ = func_088BB314(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDE84;
L_089BDE84:;
    v0 = D_08AEECC8 - (-4920);
    a0 = LD32(s0+40);
    f12 = BITSF(LD32(v0-4920));
    f0 = func_088BB400(a0, f12);
    goto L_089BDE94;
L_089BDE94:;
    v0 = LD32(s0+588);
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089BDED4; }
    goto L_089BDEA0;
L_089BDEA0:;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089BDEA8;
L_089BDEA8:;
    a1 = 0x87030000u;
    a0 = LD32(s0+588);
    a2 = sp + 0;
    a1 = a1 | 0xa534;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089BDEBC;
L_089BDEBC:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089BDF00; }
    goto L_089BDEC4;
L_089BDEC4:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BDECC;
L_089BDECC:;
    cnd_ = s1 != 0;
    a1 = 1;
    if (cnd_) { goto L_089BDEEC; }
    goto L_089BDED4;
L_089BDED4:;
    a0 = LD32(s0+40);
    a1 = 1;
    goto L_089BDEDC;
L_089BDEDC:;
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089BDEE4;
L_089BDEE4:;
    goto L_089BDE48;
L_089BDEEC:;
    a0 = LD32(s0+40);
    func_088BB24C(a0, a1);
    goto L_089BDEF4;
L_089BDEF4:;
    a0 = LD32(s0+40);
    a1 = 3;
    goto L_089BDEDC;
L_089BDF00:;
    v0 = func_0881B5C4(a0);
    goto L_089BDF08;
L_089BDF08:;
    v1 = 0x42e0000u;
    v1 = v1 | 0xaf2;
    cnd_ = v0 == v1;
    a0 = sp + 0;
    if (cnd_) { goto L_089BDF30; }
    goto L_089BDF18;
L_089BDF18:;
    v0 = func_0881B5C4(a0);
    goto L_089BDF20;
L_089BDF20:;
    v1 = 0x61f0000u;
    v1 = v1 | 0xbb3b;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_089BDEC4; }
    goto L_089BDF30;
L_089BDF30:;
    s1 = 1;
    goto L_089BDEC4;
}

/* 089BDF38 */
u64 func_089BDF38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BDF38:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v0 = LD32(a0+876);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BDFAC; }
    goto L_089BDF58;
L_089BDF58:;
    ST8(v0+18, 0);
    v1 = s1 & 0x2;
    v0 = LD32(a0+876);
    cnd_ = v1 != 0;
    ST8(v0+19, 0);
    if (cnd_) { goto L_089BE010; }
    goto L_089BDF6C;
L_089BDF6C:;
    v0 = s1 & 0x4;
    cnd_ = v0 != 0;
    a0 = LD32(a0+876);
    if (cnd_) { goto L_089BDFF0; }
    goto L_089BDF78;
L_089BDF78:;
    v0 = s1 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BDFD8; }
    goto L_089BDF84;
L_089BDF84:;
    v1 = LD32(a0);
    v0 = LD32(v1);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDF94;
L_089BDF94:;
    v1 = s1 & 0x10;
    cnd_ = v1 == 0;
    v0 = s1 & 0x8;
    if (cnd_) { goto L_089BDFC0; }
    goto L_089BDFA0;
L_089BDFA0:;
    v1 = LD32(s0+876);
    v0 = 1;
    ST8(v1+18, v0);
    goto L_089BDFAC;
L_089BDFAC:;
    goto L_089BDFB0;
L_089BDFB0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089BDFC0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BDFB0; }
    goto L_089BDFC8;
L_089BDFC8:;
    v1 = LD32(s0+876);
    v0 = 1;
    ST8(v1+19, v0);
    goto L_089BDFB0;
L_089BDFD8:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    goto L_089BDFE0;
L_089BDFE0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BDFE8;
L_089BDFE8:;
    goto L_089BDFB0;
L_089BDFF0:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE000;
L_089BE000:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    goto L_089BDFE0;
L_089BE010:;
    a0 = LD32(a0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE024;
L_089BE024:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    goto L_089BDFE0;
}

/* 089BE034 */
void func_089BE034(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_089BE034:;
    sp = sp - 400;
    v0 = D_08AEECCC - (-4916);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+492));
    f0 = BITSF(LD32(v0-4916));
    a1 = LD32(a0+1008);
    fcc = FCMP(f0, f1, 12);
    a1 = (a1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    cnd_ = fcc;
    ST32(a0+1008, a1);
    if (cnd_) { goto L_089BE08C; }
    goto L_089BE06C;
L_089BE06C:;
    v0 = LD32(a0+856);
    f20 = BITSF(0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = D_08AEECD0 - (-4912);
    if (cnd_) { goto L_089BE490; }
    goto L_089BE08C;
L_089BE08C:;
    a0 = LD32(s0+876);
    a1 = 0 + 0;
    goto L_089BE094;
L_089BE094:;
    v1 = LD32(a0);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE0B0;
L_089BE0B0:;
    a0 = s0 + 552;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+552);
    v0 = LD32(a0+4);
    a1 = LD32(a0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(160);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(144);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(a0+8);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(224);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    v0 = LD32(a0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(a0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(176);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(a0+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(a0+24);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(a0+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(v1);}
    v0 = 0x3f800000u;
    v1 = 0 + 0;
    {v[34]=BITSF(a1);}
    {v[20]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[24]=BITSF(v1);}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(v0);}
    v0 = 0xbf800000u;
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v[25]=BITSF(v0);}
    {v0=FBITS(v[18]);}
    f7 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f5 = BITSF(v0);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    {v[26]=BITSF(v1);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[24];float t1=v[25];float t2=v[26];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(240);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[5]);}
    f0 = BITSF(v0);
    f20 = BITSF(0);
    f2 = BITSF(v0);
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08AEECD4 - (-4908);
    ST32(sp, FBITS(f20));
    fcc = FCMP(f0, f20, 2);
    f0 = BITSF(LD32(v0-4908));
    ST32(sp+8, FBITS(f20));
    ST32(sp+4, FBITS(f0));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f7));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f6));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_089BE254; }
    goto L_089BE218;
L_089BE218:;
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
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_089BE254;
L_089BE254:;
    f0 = BITSF(LD32(s0+492));
    f1 = BITSF(LD32(s0+856));
    f8 = BITSF(LD32(sp+24));
    f6 = BITSF(LD32(sp+16));
    f9 = BITSF(LD32(sp+56));
    f3 = BITSF(LD32(sp+20));
    f7 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+52));
    f8 = f8 * f0;
    f6 = f6 * f0;
    f9 = f9 * f1;
    f3 = f3 * f0;
    f7 = f7 * f1;
    f4 = f4 * f1;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    s1 = s0 + 540;
    f14 = f9 * f2;
    f10 = f6 * f2;
    f11 = f3 * f2;
    f12 = f8 * f2;
    f13 = f7 * f2;
    f2 = f4 * f2;
    f0 = BITSF(LD32(s1+4));
    f16 = f12 + f14;
    f17 = f10 + f13;
    f15 = f11 + f2;
    ST32(sp+36, FBITS(f0));
    v0 = FBITS(f17);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f15);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f16);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = BITSF(LD32(s0+540));
    f5 = BITSF(LD32(s1+8));
    ST32(sp+96, FBITS(f6));
    ST32(sp+32, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+40, FBITS(f5));
    fcc = FCMP(f0, f20, 14);
    ST32(sp+100, FBITS(f3));
    ST32(sp+104, FBITS(f8));
    ST32(sp+80, FBITS(f10));
    ST32(sp+84, FBITS(f11));
    ST32(sp+88, FBITS(f12));
    ST32(sp+128, FBITS(f7));
    ST32(sp+132, FBITS(f4));
    ST32(sp+136, FBITS(f9));
    ST32(sp+112, FBITS(f13));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f14));
    ST32(sp+64, FBITS(f17));
    ST32(sp+68, FBITS(f15));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f16));
    if (cnd_) { goto L_089BE440; }
    goto L_089BE344;
L_089BE344:;
    a0 = LD32(s0+40);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089BE470; }
    goto L_089BE350;
L_089BE350:;
    f17 = BITSF(LD32(sp+64));
    f15 = BITSF(LD32(sp+68));
    f16 = BITSF(LD32(sp+72));
    v0 = FBITS(f17);
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = FBITS(f15);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f16);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+540, FBITS(f17)); goto L_089BE444; }
    goto L_089BE398;
L_089BE398:;
    v0 = LD32(sp+32);
    {u32 a_=sp+(288);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+36);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    f4 = f20;
    if (cnd_) { goto L_089BE414; }
    goto L_089BE3D0;
L_089BE3D0:;
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
    ST32(sp+136, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_089BE414;
L_089BE414:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    f17 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_089BE464; }
    goto L_089BE428;
L_089BE428:;
    f17 = BITSF(LD32(sp+32));
    f15 = BITSF(LD32(sp+36));
    f16 = BITSF(LD32(sp+40));
    goto L_089BE434;
L_089BE434:;
    ST32(sp+64, FBITS(f17));
    ST32(sp+68, FBITS(f15));
    ST32(sp+72, FBITS(f16));
    goto L_089BE440;
L_089BE440:;
    ST32(s0+540, FBITS(f17));
    goto L_089BE444;
L_089BE444:;
    ST32(s1+8, FBITS(f16));
    ST32(s1+4, FBITS(f15));
    sp = sp + 400;
    return;
L_089BE464:;
    f15 = BITSF(LD32(sp+20));
    f16 = BITSF(LD32(sp+24));
    goto L_089BE434;
L_089BE470:;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE478;
L_089BE478:;
    f16 = BITSF(LD32(v0+8));
    f17 = BITSF(LD32(v0));
    ST32(sp+68, FBITS(f20));
    ST32(sp+64, FBITS(f17));
    ST32(sp+72, FBITS(f16));
    goto L_089BE350;
L_089BE490:;
    f0 = BITSF(LD32(v0-4912));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(a0+876); goto L_089BE4B8; }
    goto L_089BE4A4;
L_089BE4A4:;
    a1 = a1 | 0x2;
    ST32(a0+1008, a1);
    a1 = (a1 >> 1) & 0x1;
    a0 = LD32(a0+876);
    goto L_089BE094;
L_089BE4B8:;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v1 = LD32(a0);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE4D8;
L_089BE4D8:;
    ST32(s0+856, FBITS(f20));
    ST32(s0+492, FBITS(f20));
    goto L_089BE0B0;
}

/* 089BE4E4 */
void func_089BE4E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089BE4E4:;
    sp = sp - 96;
    f0 = BITSF(0);
    v0 = D_08B285A0 - (-31328);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+500));
    f20 = BITSF(LD32(v0-31328));
    f4 = BITSF(LD32(a0+252));
    fcc = FCMP(f0, f1, 12);
    f2 = BITSF(LD32(a0+256));
    cnd_ = !fcc;
    f0 = BITSF(LD32(a0+248));
    if (cnd_) { goto L_089BE6AC; }
    goto L_089BE51C;
L_089BE51C:;
    f3 = f0 * f20;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f0 = f1;
    if (cnd_) { goto L_089BE534; }
    goto L_089BE530;
L_089BE530:;
    f0 = f3;
    goto L_089BE534;
L_089BE534:;
    f0 = f1 - f0;
    goto L_089BE538;
L_089BE538:;
    ST32(s0+500, FBITS(f0));
    f0 = BITSF(LD32(s0+484));
    f1 = BITSF(LD32(s0+500));
    f0 = f0 * f4;
    f0 = f0 * f20;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    ST32(s0+500, FBITS(f1));
    if (cnd_) { goto L_089BE564; }
    goto L_089BE560;
L_089BE560:;
    ST32(s0+500, FBITS(f2));
    goto L_089BE564;
L_089BE564:;
    f1 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = BITSF(LD32(s0+500));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+500, FBITS(f1)); goto L_089BE57C; }
    goto L_089BE57C;
L_089BE57C:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE590;
L_089BE590:;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+500)); goto L_089BE660; }
    goto L_089BE598;
L_089BE598:;
    ST32(s0+500, 0);
    f0 = BITSF(LD32(s0+500));
    goto L_089BE5A0;
L_089BE5A0:;
    f0 = f0 * f20;
    goto L_089BE5A4;
L_089BE5A4:;
    a0 = s0 + 0;
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
    func_089BE6CC(a0, a1);
    goto L_089BE64C;
L_089BE64C:;
    sp = sp + 96;
    return;
L_089BE660:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = LD32(s0+876); goto L_089BE6A0; }
    goto L_089BE674;
L_089BE674:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f0 * f20; goto L_089BE5A4; }
    goto L_089BE684;
L_089BE684:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    goto L_089BE690;
L_089BE690:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE698;
L_089BE698:;
    f0 = BITSF(LD32(s0+500));
    goto L_089BE5A0;
L_089BE6A0:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    goto L_089BE690;
L_089BE6AC:;
    f3 = f0 * f20;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3; goto L_089BE6C4; }
    goto L_089BE6C4;
L_089BE6C4:;
    f0 = f1 + f0;
    goto L_089BE538;
}

/* 089BE6CC */
void func_089BE6CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089BE6CC:;
    sp = sp - 144;
    {v[112]=BITSF(LD32(a1+(0)));}
    {v[113]=BITSF(LD32(a1+(4)));}
    {v[114]=BITSF(LD32(a1+(8)));}
    {v[116]=BITSF(LD32(a1+(12)));}
    {v[117]=BITSF(LD32(a1+(16)));}
    {v[118]=BITSF(LD32(a1+(20)));}
    {v[120]=BITSF(LD32(a1+(24)));}
    {v[121]=BITSF(LD32(a1+(28)));}
    {v[122]=BITSF(LD32(a1+(32)));}
    {v[96]=BITSF(LD32(a0+(552)));}
    {v[97]=BITSF(LD32(a0+(556)));}
    {v[98]=BITSF(LD32(a0+(560)));}
    {v[100]=BITSF(LD32(a0+(564)));}
    {v[101]=BITSF(LD32(a0+(568)));}
    {v[102]=BITSF(LD32(a0+(572)));}
    {v[104]=BITSF(LD32(a0+(576)));}
    {v[105]=BITSF(LD32(a0+(580)));}
    {v[106]=BITSF(LD32(a0+(584)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(0),FBITS(v[80]));}
    {ST32(sp+(4),FBITS(v[81]));}
    {ST32(sp+(8),FBITS(v[82]));}
    {ST32(sp+(12),FBITS(v[84]));}
    {ST32(sp+(16),FBITS(v[85]));}
    {ST32(sp+(20),FBITS(v[86]));}
    {ST32(sp+(24),FBITS(v[88]));}
    {ST32(sp+(28),FBITS(v[89]));}
    {ST32(sp+(32),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+4));
    a2 = a0 + 552;
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(a2+4, FBITS(f0));
    a3 = a0 + 540;
    f0 = BITSF(LD32(sp+8));
    v1 = LD32(a1+4);
    ST32(a2+8, FBITS(f0));
    f0 = BITSF(LD32(sp));
    {u32 a_=sp+(96);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(a0+552, FBITS(f0));
    {u32 a_=sp+(112);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    f0 = BITSF(LD32(sp+12));
    {u32 a_=sp+(128);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    v0 = LD32(a1);
    ST32(a2+12, FBITS(f0));
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    f0 = BITSF(LD32(sp+16));
    v0 = LD32(a1+8);
    {v[2]=BITSF(v0);}
    ST32(a2+16, FBITS(f0));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[108]=d0;v[109]=d1;v[110]=d2;v[111]=d3;}
    f0 = BITSF(LD32(sp+20));
    v0 = LD32(a1+12);
    v1 = LD32(a1+16);
    ST32(a2+20, FBITS(f0));
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f0 = BITSF(LD32(sp+32));
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(a2+32, FBITS(f0));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f0 = BITSF(LD32(sp+24));
    {v[0]=BITSF(v0);}
    v0 = LD32(a1+20);
    ST32(a2+24, FBITS(f0));
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    f0 = BITSF(LD32(sp+28));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    ST32(a2+28, FBITS(f0));
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(a1+24);
    v1 = LD32(a1+28);
    a2 = LD32(a1+32);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a2);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    v0 = LD32(a3+4);
    v1 = LD32(a0+540);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[104]=d0;v[105]=d1;v[106]=d2;v[107]=d3;}
    {v[0]=BITSF(v1);}
    v1 = LD32(a3+8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[96]*t0;o0+=v[97]*t1;o0+=v[98]*t2;float o1=0;o1+=v[100]*t0;o1+=v[101]*t1;o1+=v[102]*t2;float o2=0;o2+=v[104]*t0;o2+=v[105]*t1;o2+=v[106]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[6]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    ST32(a3+8, FBITS(f3));
    {v0=FBITS(v[5]);}
    ST32(sp+64, FBITS(f2));
    ST32(a3+4, v0);
    ST32(a0+540, FBITS(f2));
    ST32(sp+68, v0);
    sp = sp + 144;
    return;
}

/* 089BE890 */
rv_t func_089BE890(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_089BE890:;
    sp = sp - 128;
    s1 = a0 + 988;
    s0 = a0 + 0;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089BE8C8; }
    goto L_089BE8B4;
L_089BE8B4:;
    goto L_089BE8B8;
L_089BE8B8:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089BE8C8:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE8D0;
L_089BE8D0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    a3 = s0 + 868;
    t0 = s0 + 872;
    ST32(s0+988, FBITS(f1));
    a2 = sp + 0;
    a1 = s1 + 0;
    ST32(s1+4, FBITS(f2));
    a0 = s0 + 0;
    func_089BEE74(a0, a1, a2, a3, t0);
    goto L_089BE900;
L_089BE900:;
    a1 = s0 + 552;
    a0 = sp + 48;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE90C;
L_089BE90C:;
    a0 = sp + 64;
    a1 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BE918;
L_089BE918:;
    v0 = LD32(sp+48);
    v1 = LD32(sp+56);
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
    if (cnd_) { goto L_089BEBA0; }
    goto L_089BE95C;
L_089BE95C:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEAE0; }
    goto L_089BE96C;
L_089BE96C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;v[64]=d0;}
    {float s0=v[122];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BEA04; }
    goto L_089BE994;
L_089BE994:;
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
    if (cnd_) { goto L_089BE9E0; }
    goto L_089BE9D0;
L_089BE9D0:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BE9E0;
L_089BE9E0:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEA24; }
    goto L_089BE9F0;
L_089BE9F0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BEA24; }
    goto L_089BEA00;
L_089BEA00:;
    goto L_089BEA04;
L_089BEA04:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEA24; }
    goto L_089BEA18;
L_089BEA18:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BEA24;
L_089BEA24:;
    {float s0=v[78];float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;v[64]=d0;}
    {float s0=v[117];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BEAB4; }
    goto L_089BEA44;
L_089BEA44:;
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
    if (cnd_) { goto L_089BEA90; }
    goto L_089BEA80;
L_089BEA80:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BEA90;
L_089BEA90:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEAD4; }
    goto L_089BEAA0;
L_089BEAA0:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BEAD4; }
    goto L_089BEAB0;
L_089BEAB0:;
    goto L_089BEAB4;
L_089BEAB4:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEAD4; }
    goto L_089BEAC8;
L_089BEAC8:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BEAD4;
L_089BEAD4:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089BEC58; }
    goto L_089BEADC;
L_089BEADC:;
    goto L_089BEAE0;
L_089BEAE0:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[120];float d0=s0;v[64]=d0;}
    {float s0=v[112];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BEB74; }
    goto L_089BEB04;
L_089BEB04:;
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
    if (cnd_) { goto L_089BEB50; }
    goto L_089BEB40;
L_089BEB40:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BEB50;
L_089BEB50:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEB94; }
    goto L_089BEB60;
L_089BEB60:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BEB94; }
    goto L_089BEB70;
L_089BEB70:;
    goto L_089BEB74;
L_089BEB74:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEB94; }
    goto L_089BEB88;
L_089BEB88:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BEB94;
L_089BEB94:;
    cnd_ = 0 == 0;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_089BEC58; }
    goto L_089BEB9C;
L_089BEB9C:;
    goto L_089BEBA0;
L_089BEBA0:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[113];float d0=s0;v[64]=d0;}
    {float s0=v[121];float d0=s0;v[65]=d0;}
    {float s0=v[0];v[73]=(float)1;}
    {float s0=v[64];float s1=v[65];float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));v[68]=d0;v[69]=d1;}
    {float s0=v[64];float s1=v[65];float t0=v[64];float t1=v[65];u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089BEC34; }
    goto L_089BEBC4;
L_089BEBC4:;
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
    if (cnd_) { goto L_089BEC10; }
    goto L_089BEC00;
L_089BEC00:;
    {float s0=v[68];float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=v[78];float d0=-s0;v[78]=d0;}
    {float s0=v[78];float t0=v[71];float d0=s0+t0;v[78]=d0;}
    goto L_089BEC10;
L_089BEC10:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEC54; }
    goto L_089BEC20;
L_089BEC20:;
    {float s0=v[68];float t0=v[68];float d0=s0+t0;v[68]=d0;}
    cnd_ = 0 == 0;
    {float s0=v[78];float t0=v[68];float d0=s0-t0;v[78]=d0;}
    if (cnd_) { goto L_089BEC54; }
    goto L_089BEC30;
L_089BEC30:;
    goto L_089BEC34;
L_089BEC34:;
    {float s0=v[68];float d0=s0;v[78]=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BEC54; }
    goto L_089BEC48;
L_089BEC48:;
    {float s0=2.f;float d0=s0;v[78]=d0;}
    goto L_089BEC54;
L_089BEC54:;
    {float s0=v[78];float d0=s0;v[98]=d0;}
    goto L_089BEC58;
L_089BEC58:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(96),FBITS(v[96]));}
    {ST32(sp+(100),FBITS(v[97]));}
    {ST32(sp+(104),FBITS(v[98]));}
    ST32(sp+80, v0);
    a1 = sp + 0;
    v0 = LD32(sp+52);
    ST32(sp+88, v1);
    v1 = D_08AEECE0 - (-4896);
    ST32(sp+84, v0);
    v0 = LD32(sp+60);
    f1 = BITSF(LD32(v1-4896));
    ST32(sp+92, v0);
    v0 = D_08AEECE4 - (-4892);
    f0 = BITSF(LD32(v0-4892));
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
    {v[115]=BITSF(LD32(sp+(92)));}
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
    if (cnd_) { goto L_089BED08; }
    goto L_089BECE8;
L_089BECE8:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_089BED08;
L_089BED08:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BED1C; }
    goto L_089BED14;
L_089BED14:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_089BED1C;
L_089BED1C:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089BED44; }
    goto L_089BED38;
L_089BED38:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_089BED44;
L_089BED44:;
    {ST32(sp+(48),FBITS(v[120]));}
    {ST32(sp+(52),FBITS(v[121]));}
    {ST32(sp+(56),FBITS(v[122]));}
    {ST32(sp+(60),FBITS(v[123]));}
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
    {ST32(s0+(952),FBITS(v[96]));}
    {ST32(s0+(956),FBITS(v[97]));}
    {ST32(s0+(960),FBITS(v[98]));}
    {ST32(s0+(964),FBITS(v[100]));}
    {ST32(s0+(968),FBITS(v[101]));}
    {ST32(s0+(972),FBITS(v[102]));}
    {ST32(s0+(976),FBITS(v[104]));}
    {ST32(s0+(980),FBITS(v[105]));}
    {ST32(s0+(984),FBITS(v[106]));}
    a0 = LD32(s0+40);
    ST32(sp+104, 0);
    ST32(sp+96, 0);
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
    {ST32(sp+(0),FBITS(v[96]));}
    {ST32(sp+(4),FBITS(v[97]));}
    {ST32(sp+(8),FBITS(v[98]));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BEE6C;
L_089BEE6C:;
    goto L_089BE8B8;
}

/* 089BEE74 */
void func_089BEE74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 448);
L_089BEE74:;
    sp = sp - 448;
    v0 = a0 + 552;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(a0+552));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(a2+12, FBITS(f3));
    ST32(a2+16, FBITS(f4));
    ST32(a2+20, FBITS(f5));
    ST32(a2+24, FBITS(f6));
    ST32(a2+28, FBITS(f7));
    ST32(a2+32, FBITS(f8));
    ST32(a2, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    a0 = LD32(a0+40);
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BEF0C;
L_089BEF0C:;
    v1 = D_08AEECE8 - (-4888);
    f20 = BITSF(LD32(v1-4888));
    a0 = LD32(s0);
    ST32(sp+80, 0);
    a1 = sp + 64;
    a2 = sp + 96;
    ST32(sp+84, FBITS(f20));
    v1 = LD32(a0-16);
    f0 = BITSF(LD32(v0+4));
    ST32(sp+88, 0);
    s0 = s0 + v1;
    f0 = f0 - f20;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    v0 = D_08AEECEC - (-4884);
    a3 = LD32(s0+4);
    f12 = BITSF(LD32(v0-4884));
    a0 = sp + 0;
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    ST32(sp+96, 0);
    ST32(sp+100, FBITS(f20));
    ST32(sp+104, 0);
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089BEF70;
L_089BEF70:;
    a0 = sp + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BEF78;
L_089BEF78:;
    s0 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 != 0;
    {u32 a_=sp+(384);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089BEFB4; }
    goto L_089BEF88;
L_089BEF88:;
    ST32(s3, 0);
    ST32(s4, 0);
    sp = sp + 448;
    return;
L_089BEFB4:;
    v1 = LD32(s1);
    v0 = LD32(s1+4);
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s1+8);
    {v[49]=BITSF(v0);}
    v0 = LD32(s1+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s1+12);
    {v[16]=BITSF(v1);}
    {v[17]=BITSF(v0);}
    v0 = s0 + 20;
    f12 = BITSF(LD32(v0+8));
    f11 = BITSF(LD32(v0+4));
    f10 = BITSF(LD32(s0+20));
    v1 = LD32(s1+20);
    v0 = LD32(s1+24);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[18]=BITSF(v1);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(s1+28);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v0);}
    {u32 a_=sp+(208);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(s1+32);
    {v[33]=BITSF(v1);}
    {u32 a_=sp+(272);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {v[34]=BITSF(v0);}
    v1 = 0xbf800000u;
    v0 = FBITS(f10);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[28]=BITSF(v0);}
    v0 = FBITS(f11);
    {v[29]=BITSF(v0);}
    v0 = FBITS(f12);
    {v[30]=BITSF(v0);}
    v0 = 0 + 0;
    {v[20]=BITSF(v0);}
    {v[24]=BITSF(v0);}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    v1 = 0x3f800000u;
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v[25]=BITSF(v1);}
    {v[26]=BITSF(v0);}
    {v0=FBITS(v[18]);}
    f8 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = sp + 160;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    a1 = sp + 80;
    ST32(sp+96, FBITS(f10));
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[2]=BITSF(v0);}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f6 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {v0=FBITS(v[5]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+100, FBITS(f11));
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[28];float t1=v[29];float t2=v[30];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[6]);}
    f9 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f7 = BITSF(v0);
    ST32(sp+104, FBITS(f12));
    {v0=FBITS(v[5]);}
    ST32(sp+80, FBITS(f7));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f9));
    ST32(sp+128, FBITS(f3));
    ST32(sp+132, FBITS(f2));
    ST32(sp+136, FBITS(f6));
    ST32(sp+112, FBITS(f7));
    ST32(sp+64, 0);
    ST32(sp+68, FBITS(f20));
    ST32(sp+72, 0);
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f9));
    ST32(sp+144, FBITS(f7));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f9));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF154;
L_089BF154:;
    f0 = BITSF(LD32(sp+160));
    f1 = BITSF(LD32(sp+192));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+164));
    ST32(s1+32, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    f1 = BITSF(LD32(sp+168));
    f0 = BITSF(LD32(sp+172));
    ST32(s1+8, FBITS(f1));
    ST32(s1+12, FBITS(f0));
    f1 = BITSF(LD32(sp+176));
    f0 = BITSF(LD32(sp+180));
    ST32(s1+16, FBITS(f1));
    ST32(s1+20, FBITS(f0));
    f1 = BITSF(LD32(sp+184));
    f0 = BITSF(LD32(sp+188));
    ST32(s1+24, FBITS(f1));
    ST32(s1+28, FBITS(f0));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s2+4));
    ST32(sp+144, 0);
    f1 = f1 - f20;
    ST32(sp+152, 0);
    f0 = f0 + f1;
    ST32(sp+148, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    goto L_089BEF88;
}

/* 089BF1C0 */
rv_t func_089BF1C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BF1C0:;
    sp = sp - 16;
    v1 = LD_U8(a0+195);
    cnd_ = v1 == 0;
    v0 = a0 + 952;
    if (cnd_) { goto L_089BF1E0; }
    goto L_089BF1D4;
L_089BF1D4:;
    goto L_089BF1D8;
L_089BF1D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BF1E0:;
    { rv_t r_ = func_089CCE10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF1E8;
L_089BF1E8:;
    goto L_089BF1D8;
}

/* 089BF1F0 */
rv_t func_089BF1F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BF1F0:;
    sp = sp - 16;
    v1 = LD_U8(a0+195);
    cnd_ = v1 == 0;
    v0 = a0 + 988;
    if (cnd_) { goto L_089BF210; }
    goto L_089BF204;
L_089BF204:;
    goto L_089BF208;
L_089BF208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089BF210:;
    { rv_t r_ = func_089CCD74(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF218;
L_089BF218:;
    goto L_089BF208;
}

/* 089BF220 */
rv_t func_089BF220(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_089BF220:;
    sp = sp - 144;
    t0 = 0 + 0;
    s1 = sp + 48;
    t1 = a0 + 0;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089BF330; }
    goto L_089BF248;
L_089BF248:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    v0 = D_08AEECF4 - (-4876);
    f12 = BITSF(LD32(v0-4876));
    f0 = BITSF(LD32(v1));
    v0 = D_08AEECF0 - (-4880);
    a3 = LD32(a0);
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(sp, FBITS(f0));
    a2 = sp + 16;
    a1 = sp + 0;
    f0 = BITSF(LD32(v0-4880));
    ST32(sp+4, FBITS(f1));
    a0 = s1 + 0;
    ST32(sp+8, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    f0 = BITSF(LD32(v1+20));
    v0 = LD32(a3-16);
    ST32(sp+16, FBITS(f0));
    v0 = t1 + v0;
    f0 = BITSF(LD32(v1+32));
    a3 = LD32(v0+4);
    ST32(sp+20, FBITS(f0));
    f0 = BITSF(LD32(v1+44));
    ST32(sp+24, FBITS(f0));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089BF2BC;
L_089BF2BC:;
    a0 = s1 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF2C4;
L_089BF2C4:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+24));
    f2 = f2 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f3 = f3 + f2;
    f1 = f1 + f5;
    f0 = f0 + f4;
    ST32(sp+112, FBITS(f2));
    ST32(s0+8, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    ST32(s0, FBITS(f3));
    ST32(sp+116, FBITS(f5));
    ST32(sp+120, FBITS(f4));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    goto L_089BF320;
L_089BF320:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_089BF330:;
    { rv_t r_ = func_089CAC90(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF338;
L_089BF338:;
    goto L_089BF320;
}

/* 089BF340 */
rv_t func_089BF340(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_089BF340:;
    sp = sp - 80;
    s1 = D_08C2AEE0 - (-20768);
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089BF36C;
L_089BF36C:;
    v1 = 0x58d0000u;
    v1 = v1 | 0x15ed;
    a0 = s0 + 0;
    cnd_ = v0 == v1;
    a2 = D_08C2AED8 - (-20776);
    if (cnd_) { goto L_089BF39C; }
    goto L_089BF380;
L_089BF380:;
    a0 = s0 + 0;
    { rv_t r_ = func_089C951C(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF388;
L_089BF388:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089BF39C:;
    v0 = (u32)(s32)LD_S8(a2-20776);
    a1 = D_08B45AA8 - (23208);
    cnd_ = v0 != 0;
    v1 = a1 + 23208;
    if (cnd_) { goto L_089BF400; }
    goto L_089BF3AC;
L_089BF3AC:;
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f5 = BITSF(LD32(v1+20));
    f6 = BITSF(LD32(v1+24));
    f7 = BITSF(LD32(v1+28));
    f8 = BITSF(LD32(a1+23208));
    v1 = s1 - 20768;
    v0 = 1;
    ST8(a2-20776, v0);
    ST32(s1-20768, FBITS(f8));
    ST32(v1+32, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    goto L_089BF400;
L_089BF400:;
    v1 = LD32(s0);
    a2 = s1 - 20768;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v0 = LD32(v0+100);
    cnd_ = v0 == 0;
    a1 = v0 + 384;
    if (cnd_) { goto L_089BF4C8; }
    goto L_089BF41C;
L_089BF41C:;
    f0 = BITSF(LD32(v0+384));
    f2 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
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
    {ST32(a2+(0),FBITS(v[96]));}
    {ST32(a2+(4),FBITS(v[97]));}
    {ST32(a2+(8),FBITS(v[98]));}
    {ST32(a2+(12),FBITS(v[100]));}
    {ST32(a2+(16),FBITS(v[101]));}
    {ST32(a2+(20),FBITS(v[102]));}
    {ST32(a2+(24),FBITS(v[104]));}
    {ST32(a2+(28),FBITS(v[105]));}
    {ST32(a2+(32),FBITS(v[106]));}
    v1 = LD32(s0);
    goto L_089BF4C8;
L_089BF4C8:;
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF4D4;
L_089BF4D4:;
    v1 = s1 - 20768;
    {v[112]=BITSF(LD32(v1+(0)));}
    {v[113]=BITSF(LD32(v1+(4)));}
    {v[114]=BITSF(LD32(v1+(8)));}
    {v[116]=BITSF(LD32(v1+(12)));}
    {v[117]=BITSF(LD32(v1+(16)));}
    {v[118]=BITSF(LD32(v1+(20)));}
    {v[120]=BITSF(LD32(v1+(24)));}
    {v[121]=BITSF(LD32(v1+(28)));}
    {v[122]=BITSF(LD32(v1+(32)));}
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
    {ST32(sp+(16),FBITS(v[80]));}
    {ST32(sp+(20),FBITS(v[81]));}
    {ST32(sp+(24),FBITS(v[82]));}
    {ST32(sp+(28),FBITS(v[84]));}
    {ST32(sp+(32),FBITS(v[85]));}
    {ST32(sp+(36),FBITS(v[86]));}
    {ST32(sp+(40),FBITS(v[88]));}
    {ST32(sp+(44),FBITS(v[89]));}
    {ST32(sp+(48),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    v0 = v1 + 0;
    ST32(s1-20768, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+32));
    ST32(v1+12, FBITS(f1));
    ST32(v1+16, FBITS(f0));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    ST32(v1+20, FBITS(f1));
    ST32(v1+24, FBITS(f0));
    f1 = BITSF(LD32(sp+44));
    f0 = BITSF(LD32(sp+48));
    ST32(v1+28, FBITS(f1));
    ST32(v1+32, FBITS(f0));
    goto L_089BF388;
}

/* 089BF598 */
void func_089BF598(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_089BF598:;
    sp = sp - 192;
    s4 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_089BF62C; }
    goto L_089BF5D0;
L_089BF5D0:;
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s1 = s0 + 76;
    if (cnd_) { goto L_089BF604; }
    goto L_089BF5DC;
L_089BF5DC:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_089BF608; }
    goto L_089BF5F0;
L_089BF5F0:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEECF8 - (-4872);
    if (cnd_) { goto L_089BF73C; }
    goto L_089BF600;
L_089BF600:;
    ST32(s0+220, s3);
    goto L_089BF604;
L_089BF604:;
    a0 = s1 + 0;
    goto L_089BF608;
L_089BF608:;
    a1 = s2 + 0;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF620;
L_089BF620:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s4); goto L_089BF64C; }
    goto L_089BF62C;
L_089BF62C:;
    sp = sp + 192;
    return;
L_089BF64C:;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF658;
L_089BF658:;
    {u32 a_=sp+(144);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(48);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(32);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(64);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(s2);
    v0 = LD32(s2+4);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(s2+8);
    {v[21]=BITSF(v0);}
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(s2+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    f1 = BITSF(v0);
    ST32(s2, FBITS(f2));
    ST32(s2+4, v0);
    f0 = BITSF(LD32(s4+880));
    ST32(sp+16, FBITS(f2));
    f4 = f3 * f0;
    f5 = f2 * f0;
    f0 = f1 * f0;
    ST32(sp+20, v0);
    ST32(s2+8, FBITS(f4));
    ST32(s2, FBITS(f5));
    ST32(s2+4, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_089BF62C;
L_089BF73C:;
    f12 = BITSF(LD32(v0-4872));
    a0 = s1 + 0;
    a2 = 0 + 0;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088155D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF75C;
L_089BF75C:;
    {u32 a_=sp+(144);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_089BF600;
}

/* 089BF770 */
void func_089BF770(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BF770:;
    v0 = LD32(a0);
    a1 = D_08B25A08 - (23048);
    sp = sp - 16;
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a0 = LD32(a0+100);
    cnd_ = a0 == 0;
    a2 = a1 + 23048;
    if (cnd_) { goto L_089BF7D4; }
    goto L_089BF790;
L_089BF790:;
    v0 = D_08AEECFC - (-4868);
    v1 = LD32(a1+23048);
    f0 = BITSF(LD32(v0-4868));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp, FBITS(f0));
    ST32(a0+372, v1);
    v0 = LD32(a2+4);
    ST32(a0+376, v0);
    v1 = LD32(a2+8);
    ST32(a0+380, v1);
    v0 = LD32(sp);
    ST32(a0+384, v0);
    v1 = LD32(sp+4);
    ST32(a0+388, v1);
    v0 = LD32(sp+8);
    ST32(a0+392, v0);
    goto L_089BF7D4;
L_089BF7D4:;
    sp = sp + 16;
    return;
}

/* 089BF7DC */
void func_089BF7DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_089BF7DC:;
    sp = sp - 112;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BF820; }
    goto L_089BF804;
L_089BF804:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089BF824; }
    goto L_089BF810;
L_089BF810:;
    v0 = LD32(a0+40);
    f20 = BITSF(0);
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_089BF834; }
    goto L_089BF820;
L_089BF820:;
    goto L_089BF824;
L_089BF824:;
    sp = sp + 112;
    return;
L_089BF834:;
    ST32(sp, FBITS(f20));
    ST32(sp+4, FBITS(f20));
    ST32(sp+8, FBITS(f20));
    func_089BF598(a0, a1, t1, t2, t3);
    goto L_089BF844;
L_089BF844:;
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = s0 + 540;
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s0+540));
    f3 = BITSF(LD32(v0+4));
    {u32 a_=sp+(48);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {v[8]=BITSF(v1);}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v[9]=BITSF(v0);}
    {v1=FBITS(v[0]);}
    v0 = FBITS(f4);
    f5 = BITSF(v1);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+16, FBITS(f2));
    a1 = sp + 16;
    fcc = FCMP(f0, f20, 2);
    ST32(sp+20, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089BF8F8; }
    goto L_089BF8C4;
L_089BF8C4:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_089BF8F8;
L_089BF8F8:;
    f2 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    f2 = f2 * f5;
    f1 = f1 * f5;
    f0 = f0 * f5;
    a0 = LD32(s0+40);
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF924;
L_089BF924:;
    goto L_089BF824;
}

/* 089BF92C */
void func_089BF92C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BF92C:;
    sp = sp - 16;
    v0 = LD32(a0+876);
    v1 = LD_U8(v0+19);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BF9D8; }
    goto L_089BF948;
L_089BF948:;
    f12 = BITSF(LD32(a0+888));
    goto L_089BF94C;
L_089BF94C:;
    func_089BFA74(a0, f12);
    goto L_089BF954;
L_089BF954:;
    a0 = s0 + 0;
    v0 = func_089C0C10(a0);
    goto L_089BF95C;
L_089BF95C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089BF97C; }
    goto L_089BF968;
L_089BF968:;
    v1 = LD32(v0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF978;
L_089BF978:;
    a1 = v0 + 0;
    goto L_089BF97C;
L_089BF97C:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BF990;
L_089BF990:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089BF9A8; }
    goto L_089BF998;
L_089BF998:;
    goto L_089BF99C;
L_089BF99C:;
    sp = sp + 16;
    return;
L_089BF9A8:;
    func_089C0B68(a0);
    goto L_089BF9B0;
L_089BF9B0:;
    v0 = LD32(s0+876);
    f12 = BITSF(0);
    a0 = s0 + 0;
    a3 = LD_U8(v0+18);
    a1 = LD32(v0+12);
    a2 = LD_U8(v0+16);
    f13 = f12;
    func_089C0828(a0, a1, a2, a3);
    goto L_089BF9D0;
L_089BF9D0:;
    goto L_089BF99C;
L_089BF9D8:;
    f12 = BITSF(LD32(a0+884));
    goto L_089BF94C;
}

/* 089BF9E0 */
void func_089BF9E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089BF9E0:;
    sp = sp - 16;
    v0 = D_08AEED00 - (-4864);
    f0 = BITSF(LD32(a0+888));
    f1 = BITSF(LD32(v0-4864));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_089BFA34; }
    goto L_089BFA08;
L_089BFA08:;
    v0 = LD32(a0+1008);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+876); goto L_089BFA38; }
    goto L_089BFA18;
L_089BFA18:;
    v0 = D_08AEED04 - (-4860);
    f0 = BITSF(LD32(a0+492));
    f1 = BITSF(LD32(v0-4860));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089BFA4C; }
    goto L_089BFA34;
L_089BFA34:;
    v0 = LD32(s0+876);
    goto L_089BFA38;
L_089BFA38:;
    ST8(v0+19, 0);
    goto L_089BFA3C;
L_089BFA3C:;
    sp = sp + 16;
    return;
L_089BFA4C:;
    f12 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+404));
    f12 = f12 * f0;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BFA5C;
L_089BFA5C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+876); goto L_089BFA38; }
    goto L_089BFA64;
L_089BFA64:;
    v1 = LD32(s0+876);
    v0 = 1;
    ST8(v1+19, v0);
    goto L_089BFA3C;
}

/* 089BFA74 */
void func_089BFA74(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089BFA74:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    v1 = LD32(a0);
    ST32(a0+880, FBITS(f12));
    f0 = f0 * f12;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    ST32(a0+200, FBITS(f0));
    return;
}

/* 089BFA98 */
rv_t func_089BFA98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[848] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 848);
L_089BFA98:;
    sp = sp - 848;
    s4 = D_08AEED08 - (-4856);
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a0 + 552;
    f21 = BITSF(0);
    f0 = BITSF(LD32(a0+552));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+12));
    f4 = BITSF(LD32(s0+16));
    f5 = BITSF(LD32(s0+20));
    f6 = BITSF(LD32(s0+24));
    f7 = BITSF(LD32(s0+28));
    f8 = BITSF(LD32(s0+32));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f8));
    v1 = LD32(a0);
    f20 = BITSF(LD32(a0+312));
    {u32 a_=sp+(752);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(768);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    t_ = v0;
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BFB40;
L_089BFB40:;
    f0 = BITSF(LD32(s1+372));
    f2 = BITSF(LD32(s1+548));
    f3 = BITSF(LD32(s1+312));
    f4 = BITSF(LD32(s1+348));
    f2 = f2 * f0;
    {u32 a_=sp+(784);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+552);
    v1 = LD32(s0+4);
    a1 = LD32(s0+32);
    t1 = 0 + 0;
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(240);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(224);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(s0+8);
    {v[49]=BITSF(v1);}
    {v[20]=BITSF(t1);}
    v1 = LD32(s0+16);
    {v[50]=BITSF(a0);}
    {v[21]=BITSF(t1);}
    a0 = LD32(s0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(s0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(s0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(s0+28);
    v1 = FBITS(f3);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[22]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a1=FBITS(v[18]);}
    f10 = BITSF(a1);
    f4 = f4 + f2;
    f20 = BITSF(FBITS(f20) ^ 0x80000000u);
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(t1);}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(480);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v1=FBITS(v[16]);}
    {a1=FBITS(v[17]);}
    a0 = LD32(sp+8);
    f6 = BITSF(v1);
    f0 = BITSF(a1);
    {u32 a_=sp+(368);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(464);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {u32 a_=sp+(496);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+64, v1);
    {u32 a_=sp+(384);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f20 - f4;
    ST32(sp+68, a1);
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+72, FBITS(f10));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    ST32(sp+88, FBITS(f3));
    ST32(sp+96, v1);
    ST32(sp+100, a1);
    v1 = LD32(sp+4);
    a1 = LD32(sp);
    ST32(sp+104, FBITS(f10));
    {v[0]=BITSF(a1);}
    {v[1]=BITSF(v1);}
    ST32(sp+80, FBITS(f21));
    {v[2]=BITSF(a0);}
    ST32(sp+84, FBITS(f21));
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(320);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(s1+356));
    f9 = BITSF(LD32(v0));
    f8 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(v0+4));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f9 = f9 + f6;
    f7 = f7 + f0;
    f8 = f8 + f10;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {u32 a_=sp+(512);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a1);}
    {v[5]=BITSF(v1);}
    {v[6]=BITSF(a0);}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    a0 = LD32(sp+32);
    {u32 a_=sp+(448);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    t0 = LD32(sp+12);
    a2 = LD32(sp+16);
    a3 = LD32(sp+20);
    a1 = FBITS(f1);
    {u32 a_=sp+(400);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    {v[0]=BITSF(t0);}
    {v[1]=BITSF(a2);}
    {v[2]=BITSF(a3);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(416);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[1]=BITSF(a1);}
    a1 = FBITS(f4);
    {v[2]=BITSF(a1);}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(528);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    ST32(sp+48, FBITS(f9));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {float t0=v[32];float t1=v[33];float t2=v[34];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[40]=o0;v[41]=o1;v[42]=o2;}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {a1=FBITS(v[40]);}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {v[16]=BITSF(t0);}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {v[17]=BITSF(a2);}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {v[18]=BITSF(a3);}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    ST32(sp+52, FBITS(f7));
    {u32 a_=sp+(448);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    ST32(sp+68, FBITS(f1));
    f10 = BITSF(a1);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp+72, FBITS(f4));
    {u32 a_=sp+(672);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(464);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+112, a1);
    {v[32]=BITSF(v0);}
    {u32 a_=sp+(432);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    ST32(sp+56, FBITS(f8));
    {v[33]=BITSF(v1);}
    {v0=FBITS(v[42]);}
    ST32(sp+64, FBITS(f21));
    {v[34]=BITSF(a0);}
    f5 = BITSF(v0);
    f0 = BITSF(LD32(s1+344));
    f6 = BITSF(LD32(s1+352));
    {v0=FBITS(v[41]);}
    f20 = f20 - f0;
    f6 = BITSF(FBITS(f6) ^ 0x80000000u);
    f4 = BITSF(v0);
    {v[36]=BITSF(t1);}
    a1 = FBITS(f20);
    v1 = FBITS(f6);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[37]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[38]=BITSF(a1);}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[16]);}
    {a1=FBITS(v[17]);}
    {v0=FBITS(v[18]);}
    f0 = BITSF(a1);
    f14 = BITSF(v0);
    f1 = BITSF(v1);
    f11 = f7 + f0;
    f13 = f9 + f10;
    f12 = f8 + f14;
    f9 = f9 + f1;
    f7 = f7 + f4;
    f8 = f8 + f5;
    f3 = BITSF(v1);
    f17 = f13 - f9;
    f16 = f7 - f11;
    f15 = f8 - f12;
    f2 = BITSF(a1);
    a0 = FBITS(f17);
    {u32 a_=sp+(688);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f16);
    {v[0]=BITSF(a0);}
    v1 = FBITS(f15);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    ST32(sp+116, FBITS(f4));
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    fcc = FCMP(f21, f0, 12);
    ST32(sp+72, FBITS(f20));
    a1 = D_08B1BC70 - (-17296);
    ST32(sp+96, FBITS(f13));
    ST32(sp+100, FBITS(f7));
    ST32(sp+104, FBITS(f8));
    ST32(sp+68, FBITS(f6));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f14));
    ST32(sp+112, FBITS(f9));
    ST32(sp+116, FBITS(f11));
    ST32(sp+120, FBITS(f12));
    ST32(sp+128, FBITS(f17));
    ST32(sp+132, FBITS(f16));
    ST32(sp+136, FBITS(f15));
    cnd_ = fcc;
    f20 = BITSF(LD32(s4-4856));
    if (cnd_) { goto L_089BFFB0; }
    goto L_089BFEA0;
L_089BFEA0:;
    f3 = BITSF(LD32(a1-17296));
    goto L_089BFEA4;
L_089BFEA4:;
    f0 = BITSF(LD32(s4-4856));
    f7 = BITSF(LD32(sp+96));
    f8 = BITSF(LD32(sp+100));
    f0 = f0 - f3;
    f9 = BITSF(LD32(sp+104));
    f6 = BITSF(LD32(sp+112));
    f5 = BITSF(LD32(sp+116));
    f4 = BITSF(LD32(sp+120));
    f10 = f7 * f3;
    f11 = f8 * f3;
    f6 = f6 * f0;
    f3 = f9 * f3;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f6 = f10 + f6;
    f2 = BITSF(LD32(sp+48));
    f5 = f11 + f5;
    f4 = f3 + f4;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f2 = f2 - f7;
    f1 = f1 - f8;
    f0 = f0 - f9;
    ST32(s3+8, FBITS(f4));
    a1 = sp + 208;
    a0 = sp + 0;
    ST32(s3, FBITS(f6));
    ST32(s3+4, FBITS(f5));
    ST32(sp+216, FBITS(f0));
    ST32(sp+212, FBITS(f1));
    ST32(sp+208, FBITS(f2));
    ST32(sp+64, FBITS(f10));
    ST32(sp+68, FBITS(f11));
    ST32(sp+72, FBITS(f3));
    ST32(sp+80, FBITS(f6));
    ST32(sp+84, FBITS(f5));
    ST32(sp+88, FBITS(f4));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089BFF3C;
L_089BFF3C:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+32));
    ST32(s2, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(s2+32, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+12));
    ST32(s2+8, FBITS(f1));
    ST32(s2+12, FBITS(f0));
    f1 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    ST32(s2+16, FBITS(f1));
    ST32(s2+20, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(s2+24, FBITS(f1));
    ST32(s2+28, FBITS(f0));
    sp = sp + 848;
    return (rv_t){ v0, v1, f0 };
L_089BFFB0:;
    {u32 a_=sp+(704);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(a0);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    s0 = sp + 144;
    a1 = sp + 112;
    v0 = LD32(v1-16);
    a2 = sp + 128;
    t0 = 0 + 0;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    v0 = s1 + v0;
    f12 = BITSF(v1);
    f1 = f20 / f0;
    a3 = LD32(v0+4);
    a0 = s0 + 0;
    f22 = f20;
    f0 = f15 * f1;
    f2 = f17 * f1;
    f1 = f16 * f1;
    ST32(sp+136, FBITS(f0));
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, FBITS(f1));
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089C001C;
L_089C001C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0024;
L_089C0024:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    a1 = D_08B1BC70 - (-17296);
    if (cnd_) { goto L_089C00C4; }
    goto L_089C0034;
L_089C0034:;
    f2 = BITSF(LD32(v1));
    f3 = BITSF(LD32(sp+136));
    f1 = BITSF(LD32(sp+128));
    f2 = f20 / f2;
    f0 = BITSF(LD32(sp+132));
    {u32 a_=sp+(720);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = BITSF(LD32(s1+364));
    f5 = f21;
    f0 = f0 * f2;
    f3 = f3 * f2;
    f1 = f1 * f2;
    v0 = FBITS(f0);
    v1 = FBITS(f3);
    a1 = FBITS(f1);
    {v[0]=BITSF(a1);}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+84, FBITS(f0));
    ST32(sp+80, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    f20 = f0 - f4;
    fcc = FCMP(f20, f21, 14);
    cnd_ = fcc;
    ST32(sp+88, FBITS(f3));
    if (cnd_) { goto L_089C00A8; }
    goto L_089C00A4;
L_089C00A4:;
    f5 = f20;
    goto L_089C00A8;
L_089C00A8:;
    fcc = FCMP(f22, f5, 14);
    cnd_ = fcc;
    f0 = f22;
    if (cnd_) { goto L_089C00BC; }
    goto L_089C00B8;
L_089C00B8:;
    f0 = f5;
    goto L_089C00BC;
L_089C00BC:;
    f20 = f0;
    a1 = D_08B1BC70 - (-17296);
    goto L_089C00C4;
L_089C00C4:;
    f2 = BITSF(LD32(a1-17296));
    fcc = FCMP(f20, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089C00E0; }
    goto L_089C00D8;
L_089C00D8:;
    ST32(a1-17296, FBITS(f20));
    goto L_089BFEA0;
L_089C00E0:;
    fcc = FCMP(f2, f20, 12);
    cnd_ = !fcc;
    f3 = BITSF(LD32(a1-17296));
    if (cnd_) { goto L_089BFEA4; }
    goto L_089C00F0;
L_089C00F0:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(s1+368));
    f1 = BITSF(LD32(v0-31328));
    f3 = BITSF(LD32(s4-4856));
    f0 = f0 * f1;
    f0 = f2 + f0;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    ST32(a1-17296, FBITS(f0));
    if (cnd_) { goto L_089C011C; }
    goto L_089C0118;
L_089C0118:;
    f3 = f0;
    goto L_089C011C;
L_089C011C:;
    ST32(a1-17296, FBITS(f3));
    goto L_089BFEA0;
}

/* 089C0124 */
rv_t func_089C0124(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089C0124:;
    sp = sp - 48;
    v0 = LD32(a0+40);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089C0158; }
    goto L_089C014C;
L_089C014C:;
    v0 = LD_U8(a0+195);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C02D0; }
    goto L_089C0158;
L_089C0158:;
    { rv_t r_ = func_089C83F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0160;
L_089C0160:;
    a0 = s1 + 0;
    v0 = func_089C0F80(a0);
    goto L_089C0168;
L_089C0168:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+932); goto L_089C0190; }
    goto L_089C0170;
L_089C0170:;
    goto L_089C0174;
L_089C0174:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089C0190:;
    s3 = 0 + 0;
    v0 = func_0891920C(a0);
    goto L_089C0198;
L_089C0198:;
    s0 = v0 + 0;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C01A0;
L_089C01A0:;
    f1 = BITSF(LD32(s1+936));
    a0 = s0 + 0;
    f20 = f0 - f1;
    { u64 r_ = func_08919258(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C01B0;
L_089C01B0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C01C4; }
    goto L_089C01B8;
L_089C01B8:;
    f12 = f20;
    { rv_t r_ = func_08919BBC(a0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C01C0;
L_089C01C0:;
    s3 = v0 + 0;
    goto L_089C01C4;
L_089C01C4:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089C02A0; }
    goto L_089C01CC;
L_089C01CC:;
    v0 = LD32(s1+940);
    cnd_ = s3 == v0;
    s2 = 0x400000u;
    if (cnd_) { goto L_089C0170; }
    goto L_089C01D8;
L_089C01D8:;
    a1 = LD32(s3+4);
    v0 = 0x410000u;
    s2 = s2 | 0x3;
    a0 = a1 & 0x1;
    v0 = v0 | 0x3;
    v1 = a1 & 0x4;
    cnd_ = v1 == 0;
    if (a0 != 0) s2 = v0;
    if (cnd_) { goto L_089C0200; }
    goto L_089C01F8;
L_089C01F8:;
    v0 = 0x20000u;
    s2 = s2 | v0;
    goto L_089C0200;
L_089C0200:;
    v0 = a1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C0288; }
    goto L_089C020C;
L_089C020C:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0214;
L_089C0214:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    v0 = D_08AEED10 - (-4848);
    f12 = BITSF(LD32(v0-4848));
    goto L_089C0224;
L_089C0224:;
    a1 = 0 + 0;
    func_08810F04(a0, a1, f12);
    goto L_089C022C;
L_089C022C:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    t1 = s0 + 0;
    if (cnd_) { goto L_089C027C; }
    goto L_089C0244;
L_089C0244:;
    a1 = LD32(s3+8);
    a2 = s2 | 0x4;
    a3 = 1;
    t0 = a1 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C025C;
L_089C025C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C026C;
L_089C026C:;
    v1 = LD32(s0+8);
    ST32(s1+940, s3);
    ST32(s1+944, v1);
    goto L_089C0170;
L_089C027C:;
    ST32(s1+940, 0);
    ST32(s1+944, 0);
    goto L_089C0170;
L_089C0288:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0290;
L_089C0290:;
    f12 = BITSF(0);
    s0 = v0 + 0;
    a0 = v0 + 0;
    goto L_089C0224;
L_089C02A0:;
    v1 = D_08AEED0C - (-4852);
    f0 = BITSF(LD32(v1-4852));
    a0 = LD32(v0-12);
    ST32(s1+936, FBITS(f0));
    a0 = s1 + a0;
    a0 = LD32(a0+100);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_089C0174; }
    goto L_089C02C0;
L_089C02C0:;
    a1 = LD32(s1+944);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C02C8;
L_089C02C8:;
    goto L_089C0174;
L_089C02D0:;
    { rv_t r_ = func_089C83F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C02D8;
L_089C02D8:;
    goto L_089C0174;
}

/* 089C02E0 */
rv_t func_089C02E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_089C02E0:;
    sp = sp - 192;
    s0 = a0 + 0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { rv_t r_ = func_089C6CA0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0304;
L_089C0304:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C0334; }
    goto L_089C0310;
L_089C0310:;
    a0 = LD32(s0+40);
    cnd_ = a0 != 0;
    v0 = D_08AEED14 - (-4844);
    if (cnd_) { goto L_089C0340; }
    goto L_089C031C;
L_089C031C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089BE890(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0324;
L_089C0324:;
    v0 = LD32(s0+848);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+848, v0);
    goto L_089C0334;
L_089C0334:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_089C0340:;
    f0 = BITSF(LD32(v0-4844));
    ST32(sp+16, 0);
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, 0);
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0354;
L_089C0354:;
    {u32 a_=sp+(160);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(64);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[96]=BITSF(v1);}
    v1 = LD32(v0+8);
    {v[97]=BITSF(a0);}
    a0 = LD32(v0+12);
    {v[98]=BITSF(v1);}
    {v[0]=BITSF(a0);}
    v1 = LD32(v0+16);
    a0 = LD32(v0+20);
    {v[1]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[2]=BITSF(a0);}
    a0 = LD32(v0+28);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(48);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[20]=BITSF(v1);}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    v1 = LD32(sp+24);
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    a2 = s0 + 540;
    {v0=FBITS(v[17]);}
    ST32(a2+8, FBITS(f3));
    ST32(s0+540, FBITS(f2));
    ST32(a2+4, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_089C031C;
}

/* 089C0424 */
rv_t func_089C0424(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_089C0424:;
    sp = sp - 272;
    s1 = a0 + 0;
    a1 = LD32(a0);
    v1 = LD32(a1-12);
    v0 = LD32(a1+240);
    v1 = a0 + v1;
    s5 = LD32(v1+100);
    a1 = LD32(s5+16);
    t_ = v0;
    s0 = LD32(a1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0478;
L_089C0478:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v0 = LD32(s1+1004);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    cnd_ = v0 == 0;
    ST32(sp+32, FBITS(f8));
    if (cnd_) { goto L_089C069C; }
    goto L_089C04C8;
L_089C04C8:;
    a1 = LD32(s1+1000);
    goto L_089C04CC;
L_089C04CC:;
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089C051C; }
    goto L_089C04D4;
L_089C04D4:;
    v0 = D_08AEED18 - (-4840);
    f20 = BITSF(LD32(v0-4840));
    fp = D_08B45AA8 - (23208);
    v0 = D_08B45A9C - (23196);
    s7 = v0 + 23196;
    s3 = fp + 23208;
    v0 = LD32(s1+1004);
    goto L_089C04F0;
L_089C04F0:;
    s0 = s2 << 2;
    s4 = sp + 112;
    v0 = s0 + v0;
    v1 = LD32(v0);
    s6 = sp + 128;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089C0550; }
    goto L_089C050C;
L_089C050C:;
    s2 = s2 + 1;
    v0 = s2 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+1004); goto L_089C04F0; }
    goto L_089C051C;
L_089C051C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_089C0550:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0558;
L_089C0558:;
    f0 = BITSF(LD32(v0));
    f14 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    v0 = D_08B45A9C - (23196);
    f3 = BITSF(LD32(s7+4));
    f4 = BITSF(LD32(s7+8));
    f5 = BITSF(LD32(fp+23208));
    f6 = BITSF(LD32(s3+4));
    f7 = BITSF(LD32(s3+8));
    f8 = BITSF(LD32(s3+12));
    f9 = BITSF(LD32(s3+16));
    f10 = BITSF(LD32(s3+20));
    f11 = BITSF(LD32(s3+24));
    f12 = BITSF(LD32(s3+28));
    f13 = BITSF(LD32(s3+32));
    f2 = BITSF(LD32(v0+23196));
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = s6 + 0;
    t0 = 1;
    a0 = s5 + 0;
    ST32(sp+96, FBITS(f0));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, FBITS(f3));
    ST32(sp+120, FBITS(f4));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f14));
    ST32(sp+128, FBITS(f5));
    ST32(sp+132, FBITS(f6));
    ST32(sp+136, FBITS(f7));
    ST32(sp+140, FBITS(f8));
    ST32(sp+144, FBITS(f9));
    ST32(sp+148, FBITS(f10));
    ST32(sp+152, FBITS(f11));
    ST32(sp+156, FBITS(f12));
    ST32(sp+160, FBITS(f13));
    { rv_t r_ = func_08807898(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C05EC;
L_089C05EC:;
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+112));
    f4 = BITSF(LD32(sp+96));
    f3 = BITSF(LD32(sp+100));
    f2 = BITSF(LD32(sp+104));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+116));
    a1 = s4 + 0;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+120));
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    f2 = f2 - f0;
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    ST32(sp+176, FBITS(f4));
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+180, FBITS(f3));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    ST32(sp+184, FBITS(f2));
    if (cnd_) { goto L_089C0680; }
    goto L_089C0654;
L_089C0654:;
    v0 = LD32(s1+1004);
    v0 = s0 + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088BAB18(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0664;
L_089C0664:;
    v0 = LD32(s1+1004);
    goto L_089C0668;
L_089C0668:;
    a1 = s6 + 0;
    v0 = s0 + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088BAB50(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0678;
L_089C0678:;
    a1 = LD32(s1+1000);
    goto L_089C050C;
L_089C0680:;
    v0 = LD32(s1+1004);
    a1 = s4 + 0;
    v0 = s0 + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0694;
L_089C0694:;
    v0 = LD32(s1+1004);
    goto L_089C0668;
L_089C069C:;
    ST32(s1+1000, s0);
    a0 = s0 << 2;
    s3 = 0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C06AC;
L_089C06AC:;
    a1 = LD32(s1+1000);
    cnd_ = a1 == 0;
    ST32(s1+1004, v0);
    if (cnd_) { goto L_089C04CC; }
    goto L_089C06B8;
L_089C06B8:;
    fp = D_08B45A9C - (23196);
    s7 = sp + 48;
    s6 = sp + 96;
    s4 = fp + 23196;
    s2 = 0 + 0;
    goto L_089C06CC;
L_089C06CC:;
    a0 = s5 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_088081C0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C06D8;
L_089C06D8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_089C07AC; }
    goto L_089C06E4;
L_089C06E4:;
    { rv_t r_ = func_088BA110(a0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C06EC;
L_089C06EC:;
    v1 = LD32(s1+1004);
    a1 = s0 + 0;
    a0 = s7 + 0;
    v1 = s2 + v1;
    ST32(v1, v0);
    func_0884B4EC(a0, a1);
    goto L_089C0704;
L_089C0704:;
    v0 = LD32(s1+1004);
    a1 = s7 + 0;
    v0 = s2 + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088BAEB8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0718;
L_089C0718:;
    v0 = LD32(s1+1004);
    a1 = 1;
    v0 = s2 + v0;
    a0 = LD32(v0);
    v0 = func_088BB56C(a0, a1);
    goto L_089C072C;
L_089C072C:;
    v0 = LD32(s1+1004);
    a1 = 25;
    v0 = s2 + v0;
    a0 = LD32(v0);
    v0 = func_088BB578(a0, a1);
    goto L_089C0740;
L_089C0740:;
    f0 = BITSF(LD32(fp+23196));
    f1 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+8));
    a0 = s5 + 0;
    a1 = s3 + 0;
    a2 = s6 + 0;
    a3 = 0 + 0;
    t0 = 1;
    ST32(sp+96, FBITS(f0));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f2));
    { rv_t r_ = func_08807898(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0770;
L_089C0770:;
    a1 = s6 + 0;
    v0 = LD32(s1+1004);
    v0 = s2 + v0;
    a0 = LD32(v0);
    { rv_t r_ = func_088BAB18(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0784;
L_089C0784:;
    v0 = D_08AF19C8 - (6600);
    v0 = v0 + 6600;
    ST32(sp+48, v0);
    goto L_089C0790;
L_089C0790:;
    a1 = LD32(s1+1000);
    s3 = s3 + 1;
    v0 = s3 < a1;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_089C06CC; }
    goto L_089C07A4;
L_089C07A4:;
    goto L_089C04CC;
L_089C07AC:;
    v0 = LD32(s1+1004);
    v0 = s2 + v0;
    ST32(v0, 0);
    goto L_089C0790;
}

/* 089C07BC */
void func_089C07BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C07BC:;
    sp = sp - 16;
    a3 = LD32(a0+1004);
    cnd_ = a3 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_089C07F4; }
    goto L_089C07D4;
L_089C07D4:;
    v0 = LD32(a0+1000);
    v1 = a1 << 2;
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    v1 = v1 + a3;
    if (cnd_) { goto L_089C07F4; }
    goto L_089C07E8;
L_089C07E8:;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C0804; }
    goto L_089C07F4;
L_089C07F4:;
    sp = sp + 16;
    return;
L_089C0804:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C080C;
L_089C080C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_089C07F4;
}

/* 089C0828 */
void func_089C0828(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C0828:;
    sp = sp - 32;
    s6 = a3 & 0xff;
    s5 = a2 & 0xff;
    s3 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C0884; }
    goto L_089C0870;
L_089C0870:;
    v0 = LD32(v1+248);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C087C;
L_089C087C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089C08AC; }
    goto L_089C0884;
L_089C0884:;
    goto L_089C0888;
L_089C0888:;
    sp = sp + 32;
    return;
L_089C08AC:;
    a0 = s0 + 0;
    v0 = LD32(v1+248);
    t_ = v0;
    s4 = 3507;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C08BC;
L_089C08BC:;
    v1 = LD32(s0);
    s1 = v0 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C08D0;
L_089C08D0:;
    v1 = v0 + 0;
    v0 = LD32(s1+56);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089C0920; }
    goto L_089C08E4;
L_089C08E4:;
    v0 = LD32(s1+60);
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089C0920; }
    goto L_089C08F4;
L_089C08F4:;
    v0 = LD32(s1+64);
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089C0920; }
    goto L_089C0900;
L_089C0900:;
    v0 = v1 << 2;
    v0 = v0 + s1;
    a0 = LD32(v0+4);
    v1 = s3 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    s4 = LD32(v0);
    v0 = 3507;
    goto L_089C0920;
L_089C0920:;
    cnd_ = s4 == v0;
    if (cnd_) { v0 = LD32(s0+868); goto L_089C0984; }
    goto L_089C0928;
L_089C0928:;
    v1 = LD32(s2+52);
    cnd_ = v1 == 0;
    a3 = s2 + 52;
    if (cnd_) { goto L_089C0960; }
    goto L_089C0934;
L_089C0934:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089C093C;
L_089C093C:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s4 < v1;
    cnd_ = v1 == s4;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_089C096C; }
    goto L_089C0954;
L_089C0954:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089C093C; }
    goto L_089C0960;
L_089C0960:;
    a0 = LD32(a3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089C0B54; }
    goto L_089C096C;
L_089C096C:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089C0978; }
    goto L_089C0974;
L_089C0974:;
    v0 = LD32(a2);
    goto L_089C0978;
L_089C0978:;
    cnd_ = v0 == 0;
    a2 = 0x1c00000u;
    if (cnd_) { goto L_089C0AD8; }
    goto L_089C0980;
L_089C0980:;
    v0 = LD32(s0+868);
    goto L_089C0984;
L_089C0984:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C0888; }
    goto L_089C098C;
L_089C098C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+248);
    t_ = v0;
    s4 = 3507;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C09A0;
L_089C09A0:;
    v1 = LD32(s0);
    s1 = v0 + 0;
    v0 = LD32(v1+288);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C09B4;
L_089C09B4:;
    v1 = v0 + 0;
    v0 = LD32(s1+56);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+868);
    if (cnd_) { goto L_089C0A0C; }
    goto L_089C09C8;
L_089C09C8:;
    v0 = LD32(s1+60);
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089C0A10; }
    goto L_089C09D8;
L_089C09D8:;
    v0 = LD32(s1+64);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_089C0A10; }
    goto L_089C09E8;
L_089C09E8:;
    v0 = v1 << 2;
    v0 = v0 + s1;
    a1 = LD32(v0+4);
    v1 = s3 << 2;
    v0 = a0 << 2;
    v1 = v1 + a1;
    a0 = LD32(v1);
    v0 = v0 + a0;
    s4 = LD32(v0);
    goto L_089C0A0C;
L_089C0A0C:;
    v0 = 3507;
    goto L_089C0A10;
L_089C0A10:;
    cnd_ = s4 == v0;
    a0 = s2 + 52;
    if (cnd_) { goto L_089C0884; }
    goto L_089C0A18;
L_089C0A18:;
    a1 = s4 + 0;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0A24;
L_089C0A24:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C0A30; }
    goto L_089C0A2C;
L_089C0A2C:;
    v1 = LD32(v0);
    goto L_089C0A30;
L_089C0A30:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089C0888; }
    goto L_089C0A38;
L_089C0A38:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0A40;
L_089C0A40:;
    v1 = D_08AF0D38 - (3384);
    v1 = v1 + 3384;
    ST32(v0, v1);
    a0 = s2 + 0;
    t1 = v0 + 0;
    ST32(v0+4, 0);
    a1 = s4 + 0;
    a2 = 9;
    ST32(v0+8, 0);
    a3 = 0 + 0;
    t0 = s4 + 0;
    ST32(v0+12, 0);
    t2 = 0 + 0;
    ST8(v0+16, 0);
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0A7C;
L_089C0A7C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C0884; }
    goto L_089C0A84;
L_089C0A84:;
    cnd_ = s5 == 0;
    ST32(s0+864, s4);
    if (cnd_) { goto L_089C0ACC; }
    goto L_089C0A8C;
L_089C0A8C:;
    v0 = LD32(v0+16);
    v1 = 0x10000u;
    v0 = v0 | v1;
    goto L_089C0A98;
L_089C0A98:;
    cnd_ = s6 == 0;
    ST32(a0+16, v0);
    if (cnd_) { goto L_089C0AC0; }
    goto L_089C0AA0;
L_089C0AA0:;
    v0 = LD32(a0+16);
    v1 = 0x20000u;
    v0 = v0 | v1;
    goto L_089C0AAC;
L_089C0AAC:;
    ST32(a0+16, v0);
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0AB8;
L_089C0AB8:;
    goto L_089C0888;
L_089C0AC0:;
    v0 = LD32(a0+16);
    v0 = (v0 & ~(0x1u << 17)) | ((0 & 0x1) << 17);
    goto L_089C0AAC;
L_089C0ACC:;
    v0 = LD32(v0+16);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    goto L_089C0A98;
L_089C0AD8:;
    a0 = s2 + 0;
    a1 = s4 + 0;
    a2 = a2 | 0x9;
    a3 = 1;
    t0 = s4 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0AF8;
L_089C0AF8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C0980; }
    goto L_089C0B00;
L_089C0B00:;
    cnd_ = s5 == 0;
    ST32(s0+860, s4);
    if (cnd_) { goto L_089C0B48; }
    goto L_089C0B08;
L_089C0B08:;
    v0 = LD32(v0+16);
    v1 = 0x10000u;
    v0 = v0 | v1;
    goto L_089C0B14;
L_089C0B14:;
    cnd_ = s6 == 0;
    ST32(a0+16, v0);
    if (cnd_) { goto L_089C0B3C; }
    goto L_089C0B1C;
L_089C0B1C:;
    v0 = LD32(a0+16);
    v1 = 0x20000u;
    v0 = v0 | v1;
    goto L_089C0B28;
L_089C0B28:;
    ST32(a0+16, v0);
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0B34;
L_089C0B34:;
    v0 = LD32(s0+868);
    goto L_089C0984;
L_089C0B3C:;
    v0 = LD32(a0+16);
    v0 = (v0 & ~(0x1u << 17)) | ((0 & 0x1) << 17);
    goto L_089C0B28;
L_089C0B48:;
    v0 = LD32(v0+16);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    goto L_089C0B14;
L_089C0B54:;
    a2 = 1;
    a1 = s4 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0B60;
L_089C0B60:;
    a2 = v0 + 0;
    goto L_089C096C;
}

/* 089C0B68 */
void func_089C0B68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C0B68:;
    sp = sp - 16;
    a2 = 1;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s0 = LD32(v0+100);
    s2 = s0 + 52;
    cnd_ = s0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089C0BF8; }
    goto L_089C0BA0;
L_089C0BA0:;
    a1 = LD32(s1+860);
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0BA8;
L_089C0BA8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C0BB8; }
    goto L_089C0BB4;
L_089C0BB4:;
    v1 = LD32(v0);
    goto L_089C0BB8;
L_089C0BB8:;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s1+864); goto L_089C0BCC; }
    goto L_089C0BC0;
L_089C0BC0:;
    a1 = LD32(s1+860);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0BC8;
L_089C0BC8:;
    a1 = LD32(s1+864);
    goto L_089C0BCC;
L_089C0BCC:;
    a0 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0BD8;
L_089C0BD8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C0BE8; }
    goto L_089C0BE4;
L_089C0BE4:;
    v1 = LD32(v0);
    goto L_089C0BE8;
L_089C0BE8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089C0BFC; }
    goto L_089C0BF0;
L_089C0BF0:;
    a1 = LD32(s1+864);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0BF8;
L_089C0BF8:;
    goto L_089C0BFC;
L_089C0BFC:;
    sp = sp + 16;
    return;
}

/* 089C0C10 */
u32 func_089C0C10(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C0C10:;
    sp = sp - 16;
    a1 = a0 + 0;
    a2 = 1;
    v1 = LD32(a0);
    a3 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v1 = LD32(v0+100);
    cnd_ = v1 == 0;
    a0 = v1 + 52;
    if (cnd_) { goto L_089C0C54; }
    goto L_089C0C3C;
L_089C0C3C:;
    a1 = LD32(a1+860);
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0C44;
L_089C0C44:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C0C50; }
    goto L_089C0C4C;
L_089C0C4C:;
    v1 = LD32(v0);
    goto L_089C0C50;
L_089C0C50:;
    a3 = v1 + 0;
    goto L_089C0C54;
L_089C0C54:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
}

/* 089C0C64 */
rv_t func_089C0C64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C0C64:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0C80;
L_089C0C80:;
    f1 = BITSF(LD32(s0+20));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s1+932); goto L_089C0CDC; }
    goto L_089C0C94;
L_089C0C94:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    v0 = s1 + 892;
    ST32(s1+892, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    v1 = LD32(s0+16);
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(s0+12));
    ST32(v0+16, v1);
    ST32(v0+20, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    goto L_089C0CC8;
L_089C0CC8:;
    goto L_089C0CCC;
L_089C0CCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C0CDC:;
    a1 = LD32(s0+16);
    cnd_ = v1 == a1;
    v0 = (u32)-1;
    if (cnd_) { goto L_089C0D78; }
    goto L_089C0CE8;
L_089C0CE8:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_089C0D28; }
    goto L_089C0CF0;
L_089C0CF0:;
    f0 = BITSF(LD32(s0));
    goto L_089C0CF4;
L_089C0CF4:;
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    v0 = s1 + 916;
    ST32(s1+916, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(s0+12));
    ST32(v0+16, a1);
    ST32(v0+20, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    ST32(s1+940, 0);
    goto L_089C0CC8;
L_089C0D28:;
    cnd_ = v1 == a1;
    if (cnd_) { f0 = BITSF(LD32(s0)); goto L_089C0CF4; }
    goto L_089C0D30;
L_089C0D30:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    a0 = a0 + 52;
    if (cnd_) { goto L_089C0CF0; }
    goto L_089C0D48;
L_089C0D48:;
    a1 = LD32(s1+944);
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0D54;
L_089C0D54:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089C0D60; }
    goto L_089C0D5C;
L_089C0D5C:;
    a0 = LD32(v0);
    goto L_089C0D60;
L_089C0D60:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = LD32(s0+16); goto L_089C0CF0; }
    goto L_089C0D68;
L_089C0D68:;
    a1 = 2;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C0D70;
L_089C0D70:;
    a1 = LD32(s0+16);
    goto L_089C0CF0;
L_089C0D78:;
    f0 = BITSF(LD32(s1+936));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089C0CCC; }
    goto L_089C0D8C;
L_089C0D8C:;
    v0 = (u32)-1;
    goto L_089C0CE8;
}

/* 089C0D94 */
void func_089C0D94(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089C0D94:;
    sp = sp - 48;
    v0 = LD32(a0+876);
    v1 = LD_U8(v0+17);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C0DFC; }
    goto L_089C0DB8;
L_089C0DB8:;
    s1 = a0 + 892;
    s2 = D_08AEED1C - (-4836);
    f1 = BITSF(LD32(s1+20));
    f0 = BITSF(LD32(s2-4836));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089C0EE0; }
    goto L_089C0DD8;
L_089C0DD8:;
    v0 = LD32(s0);
    goto L_089C0DDC;
L_089C0DDC:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_089C0DEC;
L_089C0DEC:;
    v1 = 0x58d0000u;
    v1 = v1 | 0x13bf;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089C0E14; }
    goto L_089C0DFC;
L_089C0DFC:;
    goto L_089C0E00;
L_089C0E00:;
    goto L_089C0E04;
L_089C0E04:;
    sp = sp + 48;
    return;
L_089C0E14:;
    a0 = s0 + 0;
    v0 = func_089C0F80(a0);
    goto L_089C0E1C;
L_089C0E1C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C0E00; }
    goto L_089C0E24;
L_089C0E24:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089C0E04; }
    goto L_089C0E34;
L_089C0E34:;
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+276);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0E48;
L_089C0E48:;
    v0 = LD32(sp);
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = BITSF(0);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    a0 = LD32(s0+876);
    if (cnd_) { goto L_089C0EB4; }
    goto L_089C0E88;
L_089C0E88:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0E98;
L_089C0E98:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0EAC;
L_089C0EAC:;
    goto L_089C0E00;
L_089C0EB4:;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0EC4;
L_089C0EC4:;
    a0 = LD32(s0+876);
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0ED8;
L_089C0ED8:;
    goto L_089C0E00;
L_089C0EE0:;
    { rv_t r_ = func_089191A0(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0EE8;
L_089C0EE8:;
    f1 = BITSF(LD32(s0+912));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0); goto L_089C0DDC; }
    goto L_089C0EFC;
L_089C0EFC:;
    v1 = LD32(s0+908);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = s0 + 916;
    if (cnd_) { goto L_089C0F4C; }
    goto L_089C0F0C;
L_089C0F0C:;
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+892));
    ST32(v0+4, FBITS(f1));
    ST32(s0+916, FBITS(f0));
    ST32(v0+8, FBITS(f2));
    v1 = LD32(s1+16);
    f1 = BITSF(LD32(s1+12));
    f0 = BITSF(LD32(s1+20));
    ST32(v0+16, v1);
    ST32(v0+20, FBITS(f0));
    ST32(v0+12, FBITS(f1));
    ST32(s0+940, 0);
    f0 = BITSF(LD32(s2-4836));
    goto L_089C0F44;
L_089C0F44:;
    ST32(s1+20, FBITS(f0));
    goto L_089C0DD8;
L_089C0F4C:;
    v0 = LD32(s0+932);
    cnd_ = v0 == v1;
    f0 = BITSF(LD32(s2-4836));
    if (cnd_) { goto L_089C0F44; }
    goto L_089C0F58;
L_089C0F58:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+20, FBITS(f0)); goto L_089C0DD8; }
    goto L_089C0F70;
L_089C0F70:;
    a1 = LD32(s0+944);
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0F78;
L_089C0F78:;
    f0 = BITSF(LD32(s2-4836));
    goto L_089C0F44;
}

/* 089C0F80 */
u32 func_089C0F80(u32 a0)
{
    u32 v0 = 0;
L_089C0F80:;
    v0 = LD32(a0+932);
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    return v0;
}

/* 089C0F90 */
rv_t func_089C0F90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C0F90:;
    sp = sp - 16;
    s1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C0FD0; }
    goto L_089C0FB4;
L_089C0FB4:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC280(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C0FBC;
L_089C0FBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C0FD0:;
    func_089C9D08(a0);
    goto L_089C0FD8;
L_089C0FD8:;
    v0 = LD32(s0+844);
    v0 = v0 | s1;
    ST32(s0+844, v0);
    goto L_089C0FB4;
}

/* 089C0FE8 */
rv_t func_089C0FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C0FE8:;
    sp = sp - 16;
    v1 = 0x10000u;
    v0 = LD32(a0+844);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C1020; }
    goto L_089C1008;
L_089C1008:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC288(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1010;
L_089C1010:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C1020:;
    func_089C9E28(a0);
    goto L_089C1028;
L_089C1028:;
    v0 = LD32(s0+844);
    v0 = (v0 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(s0+844, v0);
    goto L_089C1008;
}

/* 089C1038 */
rv_t func_089C1038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1038:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C9870(a0, t1, t2, t3);
    goto L_089C104C;
L_089C104C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089CC290(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1054;
L_089C1054:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C1064 */
rv_t func_089C1064(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089C1064:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    v0 = D_08AEED20 - (-4832);
    f0 = BITSF(LD32(v0-4832));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v1+8));
    f1 = BITSF(0);
    sp = sp - 64;
    ST32(sp, FBITS(f3));
    v0 = D_08AEED24 - (-4828);
    ST32(sp+20, FBITS(f1));
    ST32(sp+16, FBITS(f1));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f5));
    ST32(sp+24, FBITS(f0));
    f0 = BITSF(LD32(v1+20));
    f2 = BITSF(LD32(v0-4828));
    ST32(sp+16, FBITS(f0));
    f0 = f0 * f2;
    f1 = BITSF(LD32(v1+32));
    f3 = f3 + f0;
    ST32(sp+20, FBITS(f1));
    f1 = f1 * f2;
    f0 = BITSF(LD32(v1+44));
    ST32(a1, FBITS(f3));
    f4 = f4 + f1;
    f0 = f0 * f2;
    ST32(a1+4, FBITS(f4));
    f5 = f5 + f0;
    ST32(a1+8, FBITS(f5));
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 089C10E8 */
rv_t func_089C10E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C10E8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C123C; }
    goto L_089C111C;
L_089C111C:;
    v0 = D_08AEED28 - (-4824);
    f2 = BITSF(LD32(v0-4824));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    v1 = D_08AEED2C - (-4820);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    f7 = BITSF(LD32(v1-4820));
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f2;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f1 = f1 * f2;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f2;
    v0 = D_08C2ADF8 - (-21000);
    f3 = (float)(s32)FBITS(f0);
    f4 = f4 * f2;
    t0 = D_08C2AE08 - (-20984);
    t1 = D_08C2AE18 - (-20968);
    f3 = f3 * f2;
    t2 = D_08C2AEA8 - (-20824);
    s3 = D_08C2AEC8 - (-20792);
    v1 = t2 - 20824;
    ST32(v0-21000, FBITS(f3));
    a1 = v0 - 21000;
    a2 = t0 - 20984;
    a3 = t1 - 20968;
    s0 = s3 - 20792;
    v0 = 4;
    ST32(a3+12, FBITS(f1));
    a0 = 16;
    ST32(a1+4, FBITS(f4));
    ST32(a1+12, FBITS(f1));
    ST32(a2+4, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t0-20984, FBITS(f5));
    ST32(t2-20824, FBITS(f7));
    ST32(t1-20968, FBITS(f1));
    ST32(v1+16, FBITS(f7));
    ST32(v1+28, 0);
    ST32(a1+8, FBITS(f5));
    ST32(s0+4, v0);
    ST32(a2+8, FBITS(f6));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(v1+4, FBITS(f7));
    ST32(v1+8, 0);
    ST32(v1+12, FBITS(f7));
    ST32(v1+20, 0);
    ST32(v1+24, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1204;
L_089C1204:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s3-20792, v0);
    if (cnd_) { goto L_089C1230; }
    goto L_089C1214;
L_089C1214:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089C121C;
L_089C121C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089C121C; }
    goto L_089C1230;
L_089C1230:;
    v0 = s3 - 20792;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089C123C;
L_089C123C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C1260; }
    goto L_089C1250;
L_089C1250:;
    v0 = D_08C2AEC8 - (-20792);
    a0 = LD32(v0-20792);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089C1278; }
    goto L_089C1260;
L_089C1260:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C1278:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1280;
L_089C1280:;
    goto L_089C1260;
}

/* 089C1288 */
rv_t func_089C1288(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1288:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089C10E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C129C;
L_089C129C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C12A8 */
rv_t func_089C12A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C12A8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089C10E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C12BC;
L_089C12BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C12C8 */
rv_t func_089C12C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C12C8:;
    sp = sp - 32;
    s4 = a0 + 672;
    s0 = D_08B022B0 - (8880);
    s0 = s0 + 8880;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2AFB8 - (-20552);
    func_08873E94(a0, a1);
    goto L_089C1300;
L_089C1300:;
    a0 = s1 + 596;
    a1 = s0 + 48;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089C1314;
L_089C1314:;
    a2 = 999;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089D00D0(a0, a1);
    goto L_089C1324;
L_089C1324:;
    v1 = D_08B02008 - (8200);
    v1 = v1 + 8200;
    a1 = v1 + 604;
    v0 = v1 + 400;
    ST32(s1+672, a1);
    a0 = s1 + 544;
    s2 = s3 - 20552;
    ST32(s1+596, v0);
    ST32(s1, v1);
    func_08918FB0(a0);
    goto L_089C134C;
L_089C134C:;
    ST8(s1+568, 0);
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0+23196));
    v0 = s1 + 572;
    ST32(v0+8, FBITS(f0));
    v1 = (u32)-1;
    a0 = 120;
    ST32(v0+4, FBITS(f1));
    v0 = 999;
    ST32(s1+584, v0);
    v0 = (u32)-32748;
    ST32(s1+572, FBITS(f2));
    ST32(s1+588, v1);
    ST8(s1+592, 0);
    ST16(s4+8, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1398;
L_089C1398:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_0895C734(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C13A8;
L_089C13A8:;
    a1 = LD32(s1);
    ST32(s1+176, s0);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C13D0;
L_089C13D0:;
    a0 = LD32(s3-20552);
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

/* 089C141C */
rv_t func_089C141C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C141C:;
    sp = sp - 16;
    v0 = D_08B02008 - (8200);
    v0 = v0 + 8200;
    a3 = v0 + 604;
    v1 = v0 + 400;
    s1 = a0 + 0;
    a1 = 0 + 0;
    a2 = LD32(a0+172);
    ST32(a0+596, v1);
    a2 = a2 & 0x1;
    ST32(a0+672, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089C1514; }
    goto L_089C145C;
L_089C145C:;
    v0 = LD32(s1+176);
    goto L_089C1460;
L_089C1460:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C14FC; }
    goto L_089C1468;
L_089C1468:;
    a1 = LD32(s1+584);
    goto L_089C146C;
L_089C146C:;
    ST32(s1+176, 0);
    a0 = D_08C2A270 - (-23952);
    a2 = 1;
    a0 = a0 - 23952;
    v0 = func_08AC6338(a0, a1, a2);
    goto L_089C1480;
L_089C1480:;
    cnd_ = v0 == 0;
    a0 = D_08C2AFB8 - (-20552);
    if (cnd_) { goto L_089C14B0; }
    goto L_089C1488;
L_089C1488:;
    v1 = LD32(s1+588);
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089C14AC; }
    goto L_089C149C;
L_089C149C:;
    v0 = func_0898A6EC(a0, a1);
    goto L_089C14A4;
L_089C14A4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C14AC;
L_089C14AC:;
    a0 = D_08C2AFB8 - (-20552);
    goto L_089C14B0;
L_089C14B0:;
    s0 = D_08B022B0 - (8880);
    a1 = s1 + 0;
    a0 = a0 - 20552;
    s0 = s0 + 8880;
    func_08AC63C0(a0, a1, 0, 0, 0);
    goto L_089C14C4;
L_089C14C4:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089C14D4;
L_089C14D4:;
    a1 = s0 + 0;
    a0 = s1 + 596;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C14E0;
L_089C14E0:;
    a0 = s1 + 672;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C14E8;
L_089C14E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C14FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C150C;
L_089C150C:;
    a1 = LD32(s1+584);
    goto L_089C146C;
L_089C1514:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C151C;
L_089C151C:;
    v0 = LD32(s1+176);
    goto L_089C1460;
}

/* 089C1524 */
rv_t func_089C1524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1524:;
    sp = sp - 16;
    v0 = D_08B02008 - (8200);
    v0 = v0 + 8200;
    a3 = v0 + 604;
    v1 = v0 + 400;
    s1 = a0 + 0;
    a1 = 0 + 0;
    a2 = LD32(a0+172);
    ST32(a0+596, v1);
    a2 = a2 & 0x1;
    ST32(a0+672, a3);
    cnd_ = a2 != 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089C1624; }
    goto L_089C1564;
L_089C1564:;
    v0 = LD32(s1+176);
    goto L_089C1568;
L_089C1568:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C160C; }
    goto L_089C1570;
L_089C1570:;
    a1 = LD32(s1+584);
    goto L_089C1574;
L_089C1574:;
    ST32(s1+176, 0);
    a0 = D_08C2A270 - (-23952);
    a2 = 1;
    a0 = a0 - 23952;
    v0 = func_08AC6338(a0, a1, a2);
    goto L_089C1588;
L_089C1588:;
    cnd_ = v0 == 0;
    a0 = D_08C2AFB8 - (-20552);
    if (cnd_) { goto L_089C15B8; }
    goto L_089C1590;
L_089C1590:;
    v1 = LD32(s1+588);
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089C15B4; }
    goto L_089C15A4;
L_089C15A4:;
    v0 = func_0898A6EC(a0, a1);
    goto L_089C15AC;
L_089C15AC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C15B4;
L_089C15B4:;
    a0 = D_08C2AFB8 - (-20552);
    goto L_089C15B8;
L_089C15B8:;
    s0 = D_08B022B0 - (8880);
    a1 = s1 + 0;
    a0 = a0 - 20552;
    s0 = s0 + 8880;
    func_08AC63C0(a0, a1, 0, 0, 0);
    goto L_089C15CC;
L_089C15CC:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 48;
    func_089D0318(a0, a1);
    goto L_089C15DC;
L_089C15DC:;
    a1 = s0 + 0;
    a0 = s1 + 596;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C15E8;
L_089C15E8:;
    a0 = s1 + 672;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C15F0;
L_089C15F0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C15F8;
L_089C15F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C160C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C161C;
L_089C161C:;
    a1 = LD32(s1+584);
    goto L_089C1574;
L_089C1624:;
    { rv_t r_ = func_089E3C58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C162C;
L_089C162C:;
    v0 = LD32(s1+176);
    goto L_089C1568;
}

/* 089C1634 */
rv_t func_089C1634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C1634:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_089D6E34(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1648;
L_089C1648:;
    a0 = s0 + 0;
    v1 = LD32(s0);
    v0 = LD32(v1+180);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C165C;
L_089C165C:;
    v0 = LD32(sp);
    a0 = 0x58d0000u;
    a0 = a0 | 0x13bf;
    v1 = LD32(v0);
    cnd_ = v1 == a0;
    v0 = D_08AEED4C - (-4788);
    if (cnd_) { goto L_089C1684; }
    goto L_089C1674;
L_089C1674:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C1684:;
    f0 = BITSF(LD32(v0-4788));
    ST32(s0+100, FBITS(f0));
    goto L_089C1674;
}

/* 089C1690 */
rv_t func_089C1690(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C1690:;
    sp = sp - 32;
    s0 = a0 + 0;
    { rv_t r_ = func_089D50F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C16A8;
L_089C16A8:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089C16D0; }
    goto L_089C16C0;
L_089C16C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C16D0:;
    a1 = 1;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C16D8;
L_089C16D8:;
    v1 = LD32(s0);
    a1 = 2;
    s1 = 0 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB56C(a0, a1);
    goto L_089C16F4;
L_089C16F4:;
    v1 = LD32(s0);
    a1 = 6;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BB578(a0, a1);
    goto L_089C170C;
L_089C170C:;
    v0 = LD32(s0+208);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089C1750; }
    goto L_089C1718;
L_089C1718:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089C1724;
L_089C1724:;
    a1 = 0x87030000u;
    a0 = LD32(s0+208);
    a1 = a1 | 0xa534;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089C1738;
L_089C1738:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C17A0; }
    goto L_089C1740;
L_089C1740:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1748;
L_089C1748:;
    cnd_ = s1 != 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089C1780; }
    goto L_089C1750;
L_089C1750:;
    a1 = 1;
    goto L_089C1754;
L_089C1754:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BAC78(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1764;
L_089C1764:;
    v0 = LD32(s0);
    a1 = 3072;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08864108(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1778;
L_089C1778:;
    goto L_089C16C0;
L_089C1780:;
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    func_088BB24C(a0, a1);
    goto L_089C1794;
L_089C1794:;
    v1 = LD32(s0);
    a1 = 3;
    goto L_089C1754;
L_089C17A0:;
    a0 = sp + 0;
    v0 = func_0881B5C4(a0);
    goto L_089C17A8;
L_089C17A8:;
    v1 = 0x42e0000u;
    v1 = v1 | 0xaf2;
    cnd_ = v0 == v1;
    if (cnd_) { s1 = 1; goto L_089C1740; }
    goto L_089C17B8;
L_089C17B8:;
    a0 = sp + 0;
    v0 = func_0881B5C4(a0);
    goto L_089C17C0;
L_089C17C0:;
    v1 = 0x61f0000u;
    v1 = v1 | 0xbb3b;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_089C1740; }
    goto L_089C17D0;
L_089C17D0:;
    s1 = 1;
    goto L_089C1740;
}

/* 089C17D8 */
rv_t func_089C17D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_089C17D8:;
    sp = sp - 96;
    s1 = a0 + 0;
    { rv_t r_ = func_089D1830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1804;
L_089C1804:;
    v0 = LD32(s1+208);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C1828; }
    goto L_089C1810;
L_089C1810:;
    s2 = D_08C2A270 - (-23952);
    s0 = s2 - 23952;
    v1 = LD32(s0+12);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = sp + 0;
    if (cnd_) { goto L_089C184C; }
    goto L_089C1828;
L_089C1828:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089C184C:;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089C1854;
L_089C1854:;
    a1 = 0x87030000u;
    a0 = LD32(s1+208);
    a1 = a1 | 0xa534;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089C1868;
L_089C1868:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C1880; }
    goto L_089C1870;
L_089C1870:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1878;
L_089C1878:;
    goto L_089C1828;
L_089C1880:;
    a0 = sp + 0;
    v0 = func_0881B5C4(a0);
    goto L_089C1888;
L_089C1888:;
    v1 = 0x42e0000u;
    v1 = v1 | 0xaf2;
    cnd_ = v0 != v1;
    a0 = sp + 16;
    if (cnd_) { goto L_089C1870; }
    goto L_089C1898;
L_089C1898:;
    v0 = LD32(s0+8);
    v1 = LD32(s0+4);
    ST32(sp+16, s0);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    ST32(sp+24, 0);
    cnd_ = v1 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_089C1904; }
    goto L_089C18B8;
L_089C18B8:;
    a2 = LD32(s2-23952);
    a3 = v1 + 0;
    goto L_089C18C0;
L_089C18C0:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089C18F4; }
    goto L_089C18D8;
L_089C18D8:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s2 = LD32(sp+16);
    if (cnd_) { goto L_089C1908; }
    goto L_089C18E8;
L_089C18E8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089C18D8; }
    goto L_089C18F4;
L_089C18F4:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089C18C0; }
    goto L_089C1904;
L_089C1904:;
    s2 = LD32(sp+16);
    goto L_089C1908;
L_089C1908:;
    v1 = LD32(sp+24);
    v0 = LD32(s2+8);
    s6 = LD32(v1);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089C1994; }
    goto L_089C1920;
L_089C1920:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089C1994; }
    goto L_089C192C;
L_089C192C:;
    v0 = LD32(s2);
    goto L_089C1930;
L_089C1930:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089C1984; }
    goto L_089C1944;
L_089C1944:;
    v0 = LD_U8(s0+8);
    goto L_089C1948;
L_089C1948:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s0 + 0; goto L_089C1B6C; }
    goto L_089C1950;
L_089C1950:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089C1B5C; }
    goto L_089C1958;
L_089C1958:;
    v0 = LD32(s0+4);
    ST32(s3+4, v0);
    goto L_089C1960;
L_089C1960:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C196C;
L_089C196C:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089C1978;
L_089C1978:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089C1948; }
    goto L_089C1980;
L_089C1980:;
    v1 = LD32(s2+4);
    goto L_089C1984;
L_089C1984:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089C1930; }
    goto L_089C1994;
L_089C1994:;
    cnd_ = s6 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089C1870; }
    goto L_089C199C;
L_089C199C:;
    a2 = LD32(s1);
    v0 = LD32(s6+4);
    v1 = LD32(a2-12);
    ST32(s1+584, v0);
    v1 = s1 + v1;
    v0 = LD32(v1+16);
    cnd_ = v0 != 0;
    a0 = LD32(v1+44);
    if (cnd_) { goto L_089C19C0; }
    goto L_089C19BC;
L_089C19BC:;
    a1 = LD32(v1+12);
    goto L_089C19C0;
L_089C19C0:;
    v0 = LD32(a2-16);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    v0 = func_0885EF6C(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C19D0;
L_089C19D0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089C1870; }
    goto L_089C19D8;
L_089C19D8:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C19E0;
L_089C19E0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    func_08988A5C(a0);
    goto L_089C19EC;
L_089C19EC:;
    cnd_ = s2 == 0;
    a1 = s0 + 4;
    if (cnd_) { goto L_089C1870; }
    goto L_089C19F4;
L_089C19F4:;
    v0 = LD32(s0+4);
    a0 = LD32(s1);
    ST32(sp+32, v0);
    v1 = LD32(a1+4);
    v0 = LD32(a0-12);
    ST32(sp+36, v1);
    v0 = s1 + v0;
    a0 = v0 + 0;
    v1 = LD32(a1+8);
    a3 = LD32(v0);
    ST32(sp+40, v1);
    v0 = LD32(a1+12);
    ST32(sp+44, v0);
    v0 = D_08AEED50 - (-4784);
    v1 = LD32(a1+16);
    f0 = BITSF(LD32(v0-4784));
    v0 = D_08AEED54 - (-4780);
    ST32(sp+48, v1);
    a2 = LD32(a1+20);
    ST32(sp+44, FBITS(f0));
    f0 = BITSF(LD32(v0-4780));
    ST32(sp+52, a2);
    ST32(sp+40, FBITS(f0));
    v0 = LD32(a3+20);
    t_ = v0;
    s0 = s1 + 572;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1A5C;
L_089C1A5C:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+36));
    f0 = f0 + f1;
    ST32(sp+36, FBITS(f0));
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(v0));
    f0 = f0 + f1;
    ST32(sp+32, FBITS(f0));
    f0 = BITSF(LD32(sp+44));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+44, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 + f1;
    ST32(sp+40, FBITS(f0));
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(v0+8));
    f0 = f0 + f1;
    ST32(sp+52, FBITS(f0));
    f0 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(v0+8));
    v0 = LD32(sp+32);
    f0 = f0 + f1;
    ST32(sp+48, FBITS(f0));
    ST32(s2+12, v0);
    v1 = LD32(sp+36);
    ST32(s2+16, v1);
    v0 = LD32(sp+40);
    ST32(s2+20, v0);
    v1 = LD32(sp+44);
    ST32(s2+24, v1);
    v0 = LD32(sp+48);
    ST32(s2+28, v0);
    v1 = LD32(sp+52);
    ST32(s2+32, v1);
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1B08;
L_089C1B08:;
    a1 = v0 + 0;
    a0 = s2 + 36;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1B14;
L_089C1B14:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1B30;
L_089C1B30:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    a0 = s6 + 0;
    a1 = s2 + 0;
    ST32(s1+572, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    v0 = func_0898A6B0(a0, a1);
    goto L_089C1B54;
L_089C1B54:;
    ST32(s1+588, v0);
    goto L_089C1870;
L_089C1B5C:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089C1960;
L_089C1B6C:;
    s0 = LD32(s0+4);
    goto L_089C1978;
}

/* 089C1B74 */
rv_t func_089C1B74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C1B74:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = s0 + 572;
    { rv_t r_ = func_089D11E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1B94;
L_089C1B94:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1BB0;
L_089C1BB0:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s0+572));
    f4 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    a1 = LD32(s0+584);
    v0 = 999;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    cnd_ = a1 == v0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_089C1CB4; }
    goto L_089C1BEC;
L_089C1BEC:;
    v1 = LD32(s0+588);
    a0 = D_08C2A270 - (-23952);
    v0 = (u32)-1;
    a2 = 1;
    s2 = 0 + 0;
    cnd_ = v1 == v0;
    a0 = a0 - 23952;
    if (cnd_) { goto L_089C1CB4; }
    goto L_089C1C08;
L_089C1C08:;
    v0 = func_08AC6338(a0, a1, a2);
    goto L_089C1C10;
L_089C1C10:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C1C24; }
    goto L_089C1C18;
L_089C1C18:;
    a1 = LD32(s0+588);
    v0 = func_0898A6C4(a0, a1);
    goto L_089C1C20;
L_089C1C20:;
    s2 = v0 + 0;
    goto L_089C1C24;
L_089C1C24:;
    cnd_ = s2 == 0;
    v0 = s2 + 12;
    if (cnd_) { goto L_089C1CB4; }
    goto L_089C1C2C;
L_089C1C2C:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s2+12));
    f3 = BITSF(LD32(v0+12));
    f1 = f1 + f0;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+16));
    ST32(v0+4, FBITS(f1));
    f0 = BITSF(LD32(sp));
    f2 = f2 + f0;
    ST32(s2+12, FBITS(f2));
    f0 = BITSF(LD32(sp+4));
    f3 = f3 + f0;
    ST32(v0+12, FBITS(f3));
    f0 = BITSF(LD32(sp+4));
    f4 = f4 + f0;
    ST32(v0+8, FBITS(f4));
    f0 = BITSF(LD32(sp+8));
    f5 = f5 + f0;
    ST32(v0+20, FBITS(f5));
    f0 = BITSF(LD32(sp+8));
    f6 = f6 + f0;
    ST32(v0+16, FBITS(f6));
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1CA8;
L_089C1CA8:;
    a1 = v0 + 0;
    a0 = s2 + 36;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1CB4;
L_089C1CB4:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1CD0;
L_089C1CD0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s0+572, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089C1D00 */
rv_t func_089C1D00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1D00:;
    sp = sp - 16;
    a2 = a0 + 208;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+208);
    a0 = 0xd09a0000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x5036;
    if (cnd_) { goto L_089C1D44; }
    goto L_089C1D2C;
L_089C1D2C:;
    ST32(s1, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C1D44:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    a1 = LD32(v1+16);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1D58;
L_089C1D58:;
    v0 = LD32(s0+208);
    goto L_089C1D2C;
}

/* 089C1D60 */
rv_t func_089C1D60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C1D60:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089D1610(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1D80;
L_089C1D80:;
    a0 = sp + 0;
    s1 = v0 + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089C1D90;
L_089C1D90:;
    a1 = 0x64ee0000u;
    a0 = s0 + 0;
    a1 = a1 | 0xa9a3;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089C1DA4;
L_089C1DA4:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089C1DD4; }
    goto L_089C1DAC;
L_089C1DAC:;
    s1 = 0 + 0;
    goto L_089C1DB0;
L_089C1DB0:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1DB8;
L_089C1DB8:;
    v0 = s1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C1DD4:;
    v0 = func_0881B5C4(a0);
    goto L_089C1DDC;
L_089C1DDC:;
    ST32(s2+204, v0);
    goto L_089C1DB0;
}

/* 089C1DE4 */
rv_t func_089C1DE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1DE4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089C1E54; }
    goto L_089C1E00;
L_089C1E00:;
    s0 = LD32(a0+176);
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1E14;
L_089C1E14:;
    v1 = LD32(s0);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1E24;
L_089C1E24:;
    v1 = LD32(s1+108);
    v0 = 999;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_089C1E40; }
    goto L_089C1E38;
L_089C1E38:;
    { u64 r_ = func_08956538(a0, a1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C1E40;
L_089C1E40:;
    goto L_089C1E44;
L_089C1E44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C1E54:;
    a0 = LD32(a0+176);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1E68;
L_089C1E68:;
    goto L_089C1E44;
}

/* 089C1E70 */
void func_089C1E70(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1E70:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 700;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1E94;
L_089C1E94:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089C12C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1EA4;
L_089C1EA4:;
    a1 = s1 + 0;
    cnd_ = s2 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089C1EC8; }
    goto L_089C1EB0;
L_089C1EB0:;
    goto L_089C1EB4;
L_089C1EB4:;
    sp = sp + 16;
    return;
L_089C1EC8:;
    v0 = LD32(s2);
    v1 = LD32(v0+60);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1ED8;
L_089C1ED8:;
    a0 = s2 + 0;
    { rv_t r_ = func_089E3DDC(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1EE0;
L_089C1EE0:;
    v0 = LD32(s2+232);
    a0 = s2 + 0;
    v0 = v0 | 0x4;
    ST32(s2+232, v0);
    { rv_t r_ = func_089D52E0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1EF4;
L_089C1EF4:;
    goto L_089C1EB4;
}

/* 089C1EFC */
rv_t func_089C1EFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1EFC:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1F20;
L_089C1F20:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D16F4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1F2C;
L_089C1F2C:;
    a1 = LD_U8(s1+592);
    a0 = s0 + 0;
    { rv_t r_ = func_0882DB94(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1F38;
L_089C1F38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C1F4C */
rv_t func_089C1F4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C1F4C:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089C1F6C;
L_089C1F6C:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089C1F6C; }
    goto L_089C1F90;
L_089C1F90:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089D1738(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C1F9C;
L_089C1F9C:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C1FC0; }
    goto L_089C1FA8;
L_089C1FA8:;
    v0 = LD32(s0);
    v1 = LD_U8(v0);
    ST8(s1+592, v1);
    v0 = LD32(s0);
    v0 = v0 + 1;
    ST32(s0, v0);
    goto L_089C1FC0;
L_089C1FC0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089C1FD0 */
rv_t func_089C1FD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C1FD0:;
    sp = sp - 16;
    v0 = 0x8025;
    a3 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089C2118; }
    goto L_089C1FEC;
L_089C1FEC:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8041;
    if (cnd_) { goto L_089C20B8; }
    goto L_089C1FF8;
L_089C1FF8:;
    v0 = 61;
    cnd_ = v1 == v0;
    v0 = 0x801f;
    if (cnd_) { goto L_089C204C; }
    goto L_089C2004;
L_089C2004:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a0+176); goto L_089C202C; }
    goto L_089C200C;
L_089C200C:;
    a0 = a2 + 0;
    goto L_089C2010;
L_089C2010:;
    a1 = a3 + 0;
    { rv_t r_ = func_089D24F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2018;
L_089C2018:;
    v1 = v0 + 0;
    goto L_089C201C;
L_089C201C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C202C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089C203C; }
    goto L_089C2034;
L_089C2034:;
    v1 = 1;
    goto L_089C201C;
L_089C203C:;
    { rv_t r_ = func_08922AA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2044;
L_089C2044:;
    v1 = 1;
    goto L_089C201C;
L_089C204C:;
    v0 = LD32(a1+24);
    v1 = a0 + 544;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(a0+544, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    a0 = LD32(v0+16);
    f0 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+12));
    ST32(v1+16, a0);
    ST32(v1+20, FBITS(f0));
    ST32(v1+12, FBITS(f1));
    v0 = LD_U8(a2+80);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_089C201C; }
    goto L_089C2090;
L_089C2090:;
    v0 = LD32(a2);
    a0 = a1 + 0;
    a3 = 0 + 0;
    v1 = LD32(v0-16);
    a1 = 2;
    v1 = a2 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C20B0;
L_089C20B0:;
    v1 = 1;
    goto L_089C201C;
L_089C20B8:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+232); goto L_089C210C; }
    goto L_089C20C0;
L_089C20C0:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8083;
    if (cnd_) { goto L_089C20EC; }
    goto L_089C20CC;
L_089C20CC:;
    v0 = 0x8040;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = a2 + 0; goto L_089C2010; }
    goto L_089C20D8;
L_089C20D8:;
    v0 = LD32(a0+232);
    ST8(a0+568, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    goto L_089C20E4;
L_089C20E4:;
    ST32(a2+232, v0);
    goto L_089C200C;
L_089C20EC:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = a2 + 0; goto L_089C2010; }
    goto L_089C20F4;
L_089C20F4:;
    v0 = LD32(a0);
    a0 = LD32(v0-16);
    a0 = a2 + a0;
    { rv_t r_ = func_088744F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2104;
L_089C2104:;
    v1 = 1;
    goto L_089C201C;
L_089C210C:;
    ST8(a0+568, 0);
    v0 = v0 | 0x8;
    goto L_089C20E4;
L_089C2118:;
    v0 = LD32(a0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089C201C; }
    goto L_089C2128;
L_089C2128:;
    a3 = LD32(a1+24);
    cnd_ = a3 == 0;
    if (cnd_) { goto L_089C2184; }
    goto L_089C2134;
L_089C2134:;
    ST8(a0+568, 0);
    v1 = LD_U8(a3+56);
    v1 = v1 & 0x1;
    ST8(a0+568, v1);
    v0 = LD32(a3+56);
    v0 = v0 & 0x2;
    v1 = v1 | v0;
    ST8(a0+568, v1);
    v0 = LD32(a3+56);
    v0 = v0 & 0x4;
    v1 = v1 | v0;
    ST8(a0+568, v1);
    v0 = LD32(a3+56);
    v0 = v0 & 0x8;
    v1 = v1 | v0;
    ST8(a0+568, v1);
    v0 = LD32(a3+56);
    v0 = v0 & 0x10;
    v1 = v1 | v0;
    ST8(a0+568, v1);
    goto L_089C2184;
L_089C2184:;
    { rv_t r_ = func_089D24F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C218C;
L_089C218C:;
    v1 = 1;
    goto L_089C201C;
}

/* 089C2194 */
rv_t func_089C2194(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C2194:;
    sp = sp - 32;
    s3 = a2 & 0xff;
    s2 = a0 + 0;
    v0 = LD_U8(a0+592);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089C2238; }
    goto L_089C21C0;
L_089C21C0:;
    a0 = D_08C2A880 - (-22400);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_089C2238; }
    goto L_089C21D0;
L_089C21D0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089C2220; }
    goto L_089C21F4;
L_089C21F4:;
    a0 = LD32(a1);
    goto L_089C21F8;
L_089C21F8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_089C2284; }
    goto L_089C2210;
L_089C2210:;
    a1 = LD32(a1+4);
    goto L_089C2214;
L_089C2214:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089C21F8; }
    goto L_089C221C;
L_089C221C:;
    s1 = 0 + 0;
    goto L_089C2220;
L_089C2220:;
    cnd_ = s1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089C223C; }
    goto L_089C2228;
L_089C2228:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089C2230;
L_089C2230:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C226C; }
    goto L_089C2238;
L_089C2238:;
    a0 = s2 + 0;
    goto L_089C223C;
L_089C223C:;
    a1 = s0 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_089D35C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2248;
L_089C2248:;
    v1 = v0 + 0;
    goto L_089C2250;
L_089C2250:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C226C:;
    a0 = s1 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C2274;
L_089C2274:;
    cnd_ = v0 != 0;
    v1 = 3;
    if (cnd_) { goto L_089C2238; }
    goto L_089C227C;
L_089C227C:;
    goto L_089C2250;
L_089C2284:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089C2210; }
    goto L_089C2290;
L_089C2290:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089C2214; }
    goto L_089C229C;
L_089C229C:;
    goto L_089C2220;
}

/* 089C22A4 */
rv_t func_089C22A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C22A4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 180;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C22D8;
L_089C22D8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089C2304; }
    goto L_089C22E4;
L_089C22E4:;
    a0 = LD32(v0+24);
    func_089C234C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089C22EC;
L_089C22EC:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2304;
L_089C2304:;
    v1 = LD32(s1+172);
    v0 = 1;
    a0 = s1 + 0;
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    ST8(s1+80, v0);
    if (cnd_) { goto L_089C2334; }
    goto L_089C231C;
L_089C231C:;
    ST8(s1+568, 0);
    goto L_089C2324;
L_089C2324:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C2334:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C233C;
L_089C233C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C2324; }
    goto L_089C2344;
L_089C2344:;
    ST8(s1+568, 0);
    goto L_089C2324;
}

/* 089C234C */
void func_089C234C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C234C:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_089D0E30(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089C2368;
L_089C2368:;
    v0 = s0 + 544;
    f0 = BITSF(LD32(s0+544));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    v1 = s1 + 152;
    ST32(s1+152, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    a0 = LD32(v0+16);
    f0 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+12));
    ST32(v1+16, a0);
    ST32(v1+20, FBITS(f0));
    ST32(v1+12, FBITS(f1));
    v0 = LD_U8(s0+568);
    ST8(s1+176, v0);
    sp = sp + 16;
    return;
}

/* 089C23BC */
u64 func_089C23BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C23BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_089D0EA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C23D8;
L_089C23D8:;
    a1 = LD_U8(s0+176);
    a0 = s1 + 0;
    { u64 r_ = func_089BDF38(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C23E4;
L_089C23E4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089C23F8 */
void func_089C23F8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C23F8:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C241C;
L_089C241C:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 39;
    t0 = 180;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089C2438;
L_089C2438:;
    a0 = s2 + 0;
    func_089C2460(a0);
    goto L_089C2440;
L_089C2440:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089C2448;
L_089C2448:;
    sp = sp + 16;
    return;
}

/* 089C2460 */
void func_089C2460(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_089C2460:;
    sp = sp - 208;
    s0 = a0 + 0;
    a0 = sp + 152;
    func_08918FB0(a0);
    goto L_089C2478;
L_089C2478:;
    a0 = s0 + 0;
    func_089D1080(a0);
    goto L_089C2480;
L_089C2480:;
    a0 = s0 + 0;
    a1 = 152;
    func_088A6514(a1);
    goto L_089C248C;
L_089C248C:;
    a0 = s0 + 0;
    func_08918FEC(a0);
    goto L_089C2494;
L_089C2494:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_088A6514(a1);
    goto L_089C24A0;
L_089C24A0:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 176;
    t0 = 8;
    t1 = 5;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089C24C4;
L_089C24C4:;
    sp = sp + 208;
    return;
}

/* 089C24D4 */
rv_t func_089C24D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089C24D4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C25F8; }
    goto L_089C2508;
L_089C2508:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEED58 - (-4776);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-4776));
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
    t0 = D_08C2AF08 - (-20728);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2AF18 - (-20712);
    a3 = D_08C2AF28 - (-20696);
    v1 = t0 - 20728;
    a1 = v0 - 20712;
    a2 = a3 - 20696;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2AFB8 - (-20552);
    s0 = s3 - 20552;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-20712, FBITS(f5));
    v0 = 4;
    ST32(t0-20728, FBITS(f1));
    ST32(a3-20696, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C25C0;
L_089C25C0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-20552, v0);
    if (cnd_) { goto L_089C25EC; }
    goto L_089C25D0;
L_089C25D0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089C25D8;
L_089C25D8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089C25D8; }
    goto L_089C25EC;
L_089C25EC:;
    v0 = s3 - 20552;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089C25F8;
L_089C25F8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089C261C; }
    goto L_089C260C;
L_089C260C:;
    v0 = D_08C2AFB8 - (-20552);
    a0 = LD32(v0-20552);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089C2634; }
    goto L_089C261C;
L_089C261C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089C2634:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089C263C;
L_089C263C:;
    goto L_089C261C;
}

/* 089C2644 */
rv_t func_089C2644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2644:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089C24D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2658;
L_089C2658:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2664 */
rv_t func_089C2664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2664:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089C24D4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2678;
L_089C2678:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2684 */
void func_089C2684(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_089C2684:;
    v0 = D_08B02D28 - (11560);
    v1 = (u32)-1;
    v0 = v0 + 11560;
    ST32(a0+24, a1);
    ST32(a0, v0);
    ST32(a0+8, v1);
    ST32(a0+4, v1);
    ST32(a0+12, 0);
    ST8(a0+16, 0);
    ST8(a0+17, 0);
    ST8(a0+18, 0);
    ST8(a0+19, 0);
    ST8(a0+20, 0);
    return;
}

/* 089C26BC */
void func_089C26BC(u32 a0)
{
    u32 v0 = 0;
L_089C26BC:;
    v0 = D_08B02D28 - (11560);
    v0 = v0 + 11560;
    ST32(a0, v0);
    return;
}

/* 089C26CC */
rv_t func_089C26CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26CC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C26D4 */
rv_t func_089C26D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26D4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C26DC */
rv_t func_089C26DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26DC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C26E4 */
rv_t func_089C26E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26E4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C26EC */
rv_t func_089C26EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26EC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089C26F4 */
rv_t func_089C26F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26F4:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089C26FC */
rv_t func_089C26FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C26FC:;
    v0 = (u32)-1;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2704 */
rv_t func_089C2704(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C2704:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C270C */
void func_089C270C(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C270C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C2684(a0, a1);
    goto L_089C2720;
L_089C2720:;
    v0 = D_08B02CE8 - (11496);
    v0 = v0 + 11496;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089C273C */
rv_t func_089C273C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C273C:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    a2 = 1;
    if (cnd_) { goto L_089C2750; }
    goto L_089C2748;
L_089C2748:;
    ST8(a0+18, 0);
    return (rv_t){ v0, v1, f0 };
L_089C2750:;
    v1 = LD32(a0+4);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 4;
    if (cnd_) { goto L_089C2778; }
    goto L_089C2760;
L_089C2760:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 4; goto L_089C2780; }
    goto L_089C2768;
L_089C2768:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089C2778; }
    goto L_089C2770;
L_089C2770:;
    return (rv_t){ v0, v1, f0 };
L_089C2778:;
    ST32(a0+8, a2);
    return (rv_t){ v0, v1, f0 };
L_089C2780:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089C2778; }
    goto L_089C2788;
L_089C2788:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2790 */
rv_t func_089C2790(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2790:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C27AC;
L_089C27AC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089C27E0; }
    goto L_089C27B4;
L_089C27B4:;
    v1 = LD32(s0+4);
    v0 = 5;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_089C27EC; }
    goto L_089C27C4;
L_089C27C4:;
    v0 = (s32)v1 < 6;
    cnd_ = v0 == 0;
    v0 = 6;
    if (cnd_) { goto L_089C27D4; }
    goto L_089C27D0;
L_089C27D0:;
    v0 = 1;
    goto L_089C27D4;
L_089C27D4:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_089C27EC; }
    goto L_089C27DC;
L_089C27DC:;
    goto L_089C27E0;
L_089C27E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C27EC:;
    ST32(s0+8, v0);
    goto L_089C27DC;
}

/* 089C27F4 */
rv_t func_089C27F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C27F4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C27FC */
rv_t func_089C27FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089C27FC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2804 */
rv_t func_089C2804(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2804:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = a1 == v0;
    v1 = 1;
    if (cnd_) { goto L_089C2850; }
    goto L_089C281C;
L_089C281C:;
    v0 = a1 < 0x8u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C2850; }
    goto L_089C2828;
L_089C2828:;
    v1 = D_08ADE60C - (-6644);
    v0 = a1 << 2;
    v1 = v1 - 6644;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C2844u: goto L_089C2844; case 0x089C2860u: goto L_089C2860; case 0x089C2870u: goto L_089C2870; case 0x089C2880u: goto L_089C2880; case 0x089C2890u: goto L_089C2890; case 0x089C28A0u: goto L_089C28A0; case 0x089C28B0u: goto L_089C28B0; case 0x089C28C0u: goto L_089C28C0; default: rs_break(0, 0x089c283c); }
L_089C2844:;
    a0 = a2 + 0;
    v0 = func_089C28D0(a0);
    goto L_089C284C;
L_089C284C:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C2850:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C2860:;
    a0 = a2 + 0;
    v0 = func_089C28E8(a0);
    goto L_089C2868;
L_089C2868:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C2870:;
    a0 = a2 + 0;
    v0 = func_089C2954(a0);
    goto L_089C2878;
L_089C2878:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C2880:;
    a0 = a2 + 0;
    v0 = func_089C2970(a0);
    goto L_089C2888;
L_089C2888:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C2890:;
    a0 = a2 + 0;
    v0 = func_089C2938(a0);
    goto L_089C2898;
L_089C2898:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C28A0:;
    a0 = a2 + 0;
    v0 = func_089C2900(a0);
    goto L_089C28A8;
L_089C28A8:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C28B0:;
    a0 = a2 + 0;
    v0 = func_089C291C(a0);
    goto L_089C28B8;
L_089C28B8:;
    v1 = v0 + 0;
    goto L_089C2850;
L_089C28C0:;
    a0 = a2 + 0;
    v0 = func_089C298C(a0);
    goto L_089C28C8;
L_089C28C8:;
    v1 = v0 + 0;
    goto L_089C2850;
}

/* 089C28D0 */
u32 func_089C28D0(u32 a0)
{
    u32 v0 = 0;
L_089C28D0:;
    v0 = 1;
    ST8(a0+16, v0);
    v0 = 1;
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    return v0;
}

/* 089C28E8 */
u32 func_089C28E8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C28E8:;
    v0 = 1;
    v1 = 3;
    ST32(a0+4, v0);
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2900 */
u32 func_089C2900(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2900:;
    v0 = 5;
    ST32(a0+4, v0);
    v1 = 6;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C291C */
u32 func_089C291C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C291C:;
    v0 = 6;
    ST32(a0+4, v0);
    v1 = 7;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2938 */
u32 func_089C2938(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2938:;
    v0 = 4;
    ST32(a0+4, v0);
    v1 = 5;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2954 */
u32 func_089C2954(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2954:;
    v0 = 2;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2970 */
u32 func_089C2970(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2970:;
    v0 = 3;
    ST32(a0+4, v0);
    v1 = 4;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C298C */
u32 func_089C298C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_089C298C:;
    v0 = 7;
    ST32(a0+4, v0);
    v1 = 2;
    a1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+17, a1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C29B0 */
rv_t func_089C29B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C29B0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C29D4;
L_089C29D4:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C2A10; }
    goto L_089C29E8;
L_089C29E8:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C29F8;
L_089C29F8:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(a2+28);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2A0C;
L_089C2A0C:;
    v1 = 1;
    goto L_089C2A10;
L_089C2A10:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2A28 */
rv_t func_089C2A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2A28:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v0 = LD_U8(a0+17);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089C2A50; }
    goto L_089C2A48;
L_089C2A48:;
    cnd_ = s1 != 0;
    if (cnd_) { ST8(a0+17, 0); goto L_089C2A50; }
    goto L_089C2A50;
L_089C2A50:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2A60;
L_089C2A60:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089C2A74; }
    goto L_089C2A68;
L_089C2A68:;
    cnd_ = s1 == 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_089C2A84; }
    goto L_089C2A70;
L_089C2A70:;
    v0 = LD32(s0+8);
    goto L_089C2A74;
L_089C2A74:;
    a0 = (u32)-1;
    cnd_ = v0 == a0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089C2A9C; }
    goto L_089C2A80;
L_089C2A80:;
    ST32(s0+8, a0);
    goto L_089C2A84;
L_089C2A84:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C2A9C:;
    a0 = LD32(s0+4);
    v0 = a0 < 0x8u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C2A84; }
    goto L_089C2AAC;
L_089C2AAC:;
    v1 = D_08ADE62C - (-6612);
    v0 = a0 << 2;
    v1 = v1 - 6612;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C2AC8u: goto L_089C2AC8; case 0x089C2AD8u: goto L_089C2AD8; case 0x089C2AE8u: goto L_089C2AE8; case 0x089C2AF8u: goto L_089C2AF8; case 0x089C2B08u: goto L_089C2B08; case 0x089C2B18u: goto L_089C2B18; case 0x089C2B28u: goto L_089C2B28; case 0x089C2B38u: goto L_089C2B38; default: rs_break(0, 0x089c2ac0); }
L_089C2AC8:;
    a0 = s0 + 0;
    v0 = func_089C2B48(a0);
    goto L_089C2AD0;
L_089C2AD0:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2AD8:;
    a0 = s0 + 0;
    v0 = func_089C2B58();
    goto L_089C2AE0;
L_089C2AE0:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2AE8:;
    a0 = s0 + 0;
    v0 = func_089C2B70();
    goto L_089C2AF0;
L_089C2AF0:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2AF8:;
    a0 = s0 + 0;
    v0 = func_089C2B78();
    goto L_089C2B00;
L_089C2B00:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2B08:;
    a0 = s0 + 0;
    v0 = func_089C2B80();
    goto L_089C2B10;
L_089C2B10:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2B18:;
    a0 = s0 + 0;
    v0 = func_089C2B60();
    goto L_089C2B20;
L_089C2B20:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2B28:;
    a0 = s0 + 0;
    v0 = func_089C2B68();
    goto L_089C2B30;
L_089C2B30:;
    v1 = v0 + 0;
    goto L_089C2A84;
L_089C2B38:;
    a0 = s0 + 0;
    v0 = func_089C2B88();
    goto L_089C2B40;
L_089C2B40:;
    v1 = v0 + 0;
    goto L_089C2A84;
}

/* 089C2B48 */
u32 func_089C2B48(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2B48:;
    v1 = LD_U8(a0+17);
    v0 = 7;
    if (v1 == 0) v0 = 0;
    return v0;
}

/* 089C2B58 */
u32 func_089C2B58(void)
{
    u32 v0 = 0;
L_089C2B58:;
    v0 = 5;
    return v0;
}

/* 089C2B60 */
u32 func_089C2B60(void)
{
    u32 v0 = 0;
L_089C2B60:;
    v0 = 6;
    return v0;
}

/* 089C2B68 */
u32 func_089C2B68(void)
{
    u32 v0 = 0;
L_089C2B68:;
    v0 = 5;
    return v0;
}

/* 089C2B70 */
u32 func_089C2B70(void)
{
    u32 v0 = 0;
L_089C2B70:;
    v0 = 2;
    return v0;
}

/* 089C2B78 */
u32 func_089C2B78(void)
{
    u32 v0 = 0;
L_089C2B78:;
    v0 = 0 + 0;
    return v0;
}

/* 089C2B80 */
u32 func_089C2B80(void)
{
    u32 v0 = 0;
L_089C2B80:;
    v0 = 0 + 0;
    return v0;
}

/* 089C2B88 */
u32 func_089C2B88(void)
{
    u32 v0 = 0;
L_089C2B88:;
    v0 = 7;
    return v0;
}

/* 089C2B90 */
void func_089C2B90(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2B90:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C2684(a0, a1);
    goto L_089C2BA4;
L_089C2BA4:;
    v0 = D_08B02CA8 - (11432);
    v0 = v0 + 11432;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089C2BC0 */
rv_t func_089C2BC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C2BC0:;
    a2 = LD32(a0+4);
    a1 = a1 & 0xff;
    v1 = 1;
    v0 = 5;
    if (a1 != 0) v1 = v0;
    cnd_ = a2 == 0;
    ST8(a0+18, a1);
    if (cnd_) { goto L_089C2BF8; }
    goto L_089C2BDC;
L_089C2BDC:;
    v0 = 3;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_089C2BF0; }
    goto L_089C2BE8;
L_089C2BE8:;
    return (rv_t){ v0, v1, f0 };
L_089C2BF0:;
    ST32(a0+8, v1);
    return (rv_t){ v0, v1, f0 };
L_089C2BF8:;
    ST32(a0+8, v1);
    return (rv_t){ v0, v1, f0 };
}

/* 089C2C00 */
rv_t func_089C2C00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C2C00:;
    v1 = LD32(a0+4);
    v0 = 5;
    cnd_ = v1 == v0;
    a1 = (s32)v1 < 6;
    if (cnd_) { goto L_089C2C2C; }
    goto L_089C2C10;
L_089C2C10:;
    cnd_ = a1 == 0;
    v0 = 6;
    if (cnd_) { goto L_089C2C38; }
    goto L_089C2C18;
L_089C2C18:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 3; goto L_089C2C30; }
    goto L_089C2C24;
L_089C2C24:;
    return (rv_t){ v0, v1, f0 };
L_089C2C2C:;
    v0 = 3;
    goto L_089C2C30;
L_089C2C30:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
L_089C2C38:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 3; goto L_089C2C30; }
    goto L_089C2C40;
L_089C2C40:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2C48 */
rv_t func_089C2C48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C2C48:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 8;
    if (cnd_) { goto L_089C2C68; }
    goto L_089C2C54;
L_089C2C54:;
    v0 = 9;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 8; goto L_089C2C68; }
    goto L_089C2C60;
L_089C2C60:;
    return (rv_t){ v0, v1, f0 };
L_089C2C68:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C2C70 */
rv_t func_089C2C70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C2C70:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 9;
    if (cnd_) { goto L_089C2C90; }
    goto L_089C2C7C;
L_089C2C7C:;
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 9; goto L_089C2C90; }
    goto L_089C2C88;
L_089C2C88:;
    return (rv_t){ v0, v1, f0 };
L_089C2C90:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C2C98 */
rv_t func_089C2C98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2C98:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = a1 == v0;
    v1 = 1;
    if (cnd_) { goto L_089C2CE4; }
    goto L_089C2CB0;
L_089C2CB0:;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C2CE4; }
    goto L_089C2CBC;
L_089C2CBC:;
    v1 = D_08ADE64C - (-6580);
    v0 = a1 << 2;
    v1 = v1 - 6580;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C2CD8u: goto L_089C2CD8; case 0x089C2CF4u: goto L_089C2CF4; case 0x089C2D04u: goto L_089C2D04; case 0x089C2D14u: goto L_089C2D14; case 0x089C2D1Cu: goto L_089C2D1C; case 0x089C2D2Cu: goto L_089C2D2C; case 0x089C2D3Cu: goto L_089C2D3C; case 0x089C2D4Cu: goto L_089C2D4C; case 0x089C2D5Cu: goto L_089C2D5C; default: rs_break(0, 0x089c2cd0); }
L_089C2CD8:;
    a0 = a2 + 0;
    v0 = func_089C2D6C(a0);
    goto L_089C2CE0;
L_089C2CE0:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2CE4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C2CF4:;
    a0 = a2 + 0;
    v0 = func_089C2D84(a0);
    goto L_089C2CFC;
L_089C2CFC:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2D04:;
    a0 = a2 + 0;
    v0 = func_089C2DD4(a0);
    goto L_089C2D0C;
L_089C2D0C:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2D14:;
    v1 = 0 + 0;
    goto L_089C2CE4;
L_089C2D1C:;
    a0 = a2 + 0;
    v0 = func_089C2D9C(a0);
    goto L_089C2D24;
L_089C2D24:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2D2C:;
    a0 = a2 + 0;
    v0 = func_089C2DB8(a0);
    goto L_089C2D34;
L_089C2D34:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2D3C:;
    a0 = a2 + 0;
    v0 = func_089C2E28(a0);
    goto L_089C2D44;
L_089C2D44:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2D4C:;
    a0 = a2 + 0;
    v0 = func_089C2DF0(a0);
    goto L_089C2D54;
L_089C2D54:;
    v1 = v0 + 0;
    goto L_089C2CE4;
L_089C2D5C:;
    a0 = a2 + 0;
    v0 = func_089C2E0C(a0);
    goto L_089C2D64;
L_089C2D64:;
    v1 = v0 + 0;
    goto L_089C2CE4;
}

/* 089C2D6C */
u32 func_089C2D6C(u32 a0)
{
    u32 v0 = 0;
L_089C2D6C:;
    v0 = 1;
    ST8(a0+16, v0);
    v0 = 1;
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    return v0;
}

/* 089C2D84 */
u32 func_089C2D84(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2D84:;
    v0 = 1;
    v1 = 3;
    ST32(a0+4, v0);
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2D9C */
u32 func_089C2D9C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2D9C:;
    v0 = 5;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2DB8 */
u32 func_089C2DB8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2DB8:;
    v0 = 6;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2DD4 */
u32 func_089C2DD4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2DD4:;
    v0 = 3;
    ST32(a0+4, v0);
    v1 = 4;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2DF0 */
u32 func_089C2DF0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2DF0:;
    v0 = 8;
    ST32(a0+4, v0);
    v1 = 5;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2E0C */
u32 func_089C2E0C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2E0C:;
    v0 = 9;
    ST32(a0+4, v0);
    v1 = 6;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2E28 */
u32 func_089C2E28(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C2E28:;
    v0 = 7;
    ST32(a0+4, v0);
    v1 = 2;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C2E44 */
rv_t func_089C2E44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2E44:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2E68;
L_089C2E68:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C2EA4; }
    goto L_089C2E7C;
L_089C2E7C:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2E8C;
L_089C2E8C:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(a2+28);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2EA0;
L_089C2EA0:;
    v1 = 1;
    goto L_089C2EA4;
L_089C2EA4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C2EBC */
rv_t func_089C2EBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C2EBC:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C2EE0;
L_089C2EE0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089C2EF4; }
    goto L_089C2EE8;
L_089C2EE8:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_089C2F04; }
    goto L_089C2EF0;
L_089C2EF0:;
    v0 = LD32(s0+8);
    goto L_089C2EF4;
L_089C2EF4:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s0+4); goto L_089C2F18; }
    goto L_089C2F00;
L_089C2F00:;
    ST32(s0+8, v1);
    goto L_089C2F04;
L_089C2F04:;
    goto L_089C2F08;
L_089C2F08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C2F18:;
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089C2F04; }
    goto L_089C2F24;
L_089C2F24:;
    v0 = v1 << 2;
    v1 = D_08ADE674 - (-6540);
    v1 = v1 - 6540;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C2F40u: goto L_089C2F40; case 0x089C2F50u: goto L_089C2F50; case 0x089C2F60u: goto L_089C2F60; case 0x089C2F70u: goto L_089C2F70; case 0x089C2F78u: goto L_089C2F78; case 0x089C2F88u: goto L_089C2F88; case 0x089C2F98u: goto L_089C2F98; case 0x089C2FA8u: goto L_089C2FA8; case 0x089C2FB8u: goto L_089C2FB8; default: rs_break(0, 0x089c2f38); }
L_089C2F40:;
    a0 = s0 + 0;
    v0 = func_089C2FC8();
    goto L_089C2F48;
L_089C2F48:;
    goto L_089C2F08;
L_089C2F50:;
    a0 = s0 + 0;
    v0 = func_089C2FD0();
    goto L_089C2F58;
L_089C2F58:;
    goto L_089C2F08;
L_089C2F60:;
    a0 = s0 + 0;
    v0 = func_089C2FE8();
    goto L_089C2F68;
L_089C2F68:;
    goto L_089C2F08;
L_089C2F70:;
    v0 = 0 + 0;
    goto L_089C2F04;
L_089C2F78:;
    a0 = s0 + 0;
    v0 = func_089C2FD8();
    goto L_089C2F80;
L_089C2F80:;
    goto L_089C2F08;
L_089C2F88:;
    a0 = s0 + 0;
    v0 = func_089C2FE0();
    goto L_089C2F90;
L_089C2F90:;
    goto L_089C2F08;
L_089C2F98:;
    a0 = s0 + 0;
    v0 = func_089C2FF0();
    goto L_089C2FA0;
L_089C2FA0:;
    goto L_089C2F08;
L_089C2FA8:;
    a0 = s0 + 0;
    v0 = func_089C2FF8();
    goto L_089C2FB0;
L_089C2FB0:;
    goto L_089C2F08;
L_089C2FB8:;
    a0 = s0 + 0;
    v0 = func_089C3000();
    goto L_089C2FC0;
L_089C2FC0:;
    goto L_089C2F08;
}

/* 089C2FC8 */
u32 func_089C2FC8(void)
{
    u32 v0 = 0;
L_089C2FC8:;
    v0 = 0 + 0;
    return v0;
}

/* 089C2FD0 */
u32 func_089C2FD0(void)
{
    u32 v0 = 0;
L_089C2FD0:;
    v0 = 5;
    return v0;
}

/* 089C2FD8 */
u32 func_089C2FD8(void)
{
    u32 v0 = 0;
L_089C2FD8:;
    v0 = 6;
    return v0;
}

/* 089C2FE0 */
u32 func_089C2FE0(void)
{
    u32 v0 = 0;
L_089C2FE0:;
    v0 = 5;
    return v0;
}

/* 089C2FE8 */
u32 func_089C2FE8(void)
{
    u32 v0 = 0;
L_089C2FE8:;
    v0 = 0 + 0;
    return v0;
}

/* 089C2FF0 */
u32 func_089C2FF0(void)
{
    u32 v0 = 0;
L_089C2FF0:;
    v0 = 7;
    return v0;
}

/* 089C2FF8 */
u32 func_089C2FF8(void)
{
    u32 v0 = 0;
L_089C2FF8:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3000 */
u32 func_089C3000(void)
{
    u32 v0 = 0;
L_089C3000:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3008 */
void func_089C3008(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3008:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C2684(a0, a1);
    goto L_089C301C;
L_089C301C:;
    v0 = D_08B02C68 - (11368);
    v0 = v0 + 11368;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089C3038 */
rv_t func_089C3038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C3038:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    a2 = 1;
    if (cnd_) { goto L_089C304C; }
    goto L_089C3044;
L_089C3044:;
    ST8(a0+18, 0);
    return (rv_t){ v0, v1, f0 };
L_089C304C:;
    v1 = LD32(a0+4);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 4;
    if (cnd_) { goto L_089C3074; }
    goto L_089C305C;
L_089C305C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 4; goto L_089C307C; }
    goto L_089C3064;
L_089C3064:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089C3074; }
    goto L_089C306C;
L_089C306C:;
    return (rv_t){ v0, v1, f0 };
L_089C3074:;
    ST32(a0+8, a2);
    return (rv_t){ v0, v1, f0 };
L_089C307C:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089C3074; }
    goto L_089C3084;
L_089C3084:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C308C */
rv_t func_089C308C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C308C:;
    v1 = LD32(a0+4);
    v0 = 5;
    cnd_ = v1 == v0;
    a1 = (s32)v1 < 6;
    if (cnd_) { goto L_089C30D0; }
    goto L_089C309C;
L_089C309C:;
    cnd_ = a1 == 0;
    v0 = 6;
    if (cnd_) { goto L_089C30C0; }
    goto L_089C30A4;
L_089C30A4:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 3; goto L_089C30B8; }
    goto L_089C30B0;
L_089C30B0:;
    return (rv_t){ v0, v1, f0 };
L_089C30B8:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
L_089C30C0:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 3; goto L_089C30B8; }
    goto L_089C30C8;
L_089C30C8:;
    return (rv_t){ v0, v1, f0 };
L_089C30D0:;
    v0 = 4;
    goto L_089C30B8;
}

/* 089C30D8 */
rv_t func_089C30D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C30D8:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 8;
    if (cnd_) { goto L_089C30F8; }
    goto L_089C30E4;
L_089C30E4:;
    v0 = 9;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 8; goto L_089C30F8; }
    goto L_089C30F0;
L_089C30F0:;
    return (rv_t){ v0, v1, f0 };
L_089C30F8:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3100 */
rv_t func_089C3100(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C3100:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 9;
    if (cnd_) { goto L_089C3120; }
    goto L_089C310C;
L_089C310C:;
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 9; goto L_089C3120; }
    goto L_089C3118;
L_089C3118:;
    return (rv_t){ v0, v1, f0 };
L_089C3120:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3128 */
rv_t func_089C3128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3128:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = a1 == v0;
    v1 = 1;
    if (cnd_) { goto L_089C3174; }
    goto L_089C3140;
L_089C3140:;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C3174; }
    goto L_089C314C;
L_089C314C:;
    v1 = D_08ADE69C - (-6500);
    v0 = a1 << 2;
    v1 = v1 - 6500;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C3168u: goto L_089C3168; case 0x089C3184u: goto L_089C3184; case 0x089C3194u: goto L_089C3194; case 0x089C31A4u: goto L_089C31A4; case 0x089C31B4u: goto L_089C31B4; case 0x089C31C4u: goto L_089C31C4; case 0x089C31D4u: goto L_089C31D4; case 0x089C31E4u: goto L_089C31E4; case 0x089C31F4u: goto L_089C31F4; case 0x089C3204u: goto L_089C3204; default: rs_break(0, 0x089c3160); }
L_089C3168:;
    a0 = a2 + 0;
    v0 = func_089C3214(a0);
    goto L_089C3170;
L_089C3170:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C3174:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C3184:;
    a0 = a2 + 0;
    v0 = func_089C322C(a0);
    goto L_089C318C;
L_089C318C:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C3194:;
    a0 = a2 + 0;
    v0 = func_089C3298(a0);
    goto L_089C319C;
L_089C319C:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C31A4:;
    a0 = a2 + 0;
    v0 = func_089C32B4(a0);
    goto L_089C31AC;
L_089C31AC:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C31B4:;
    a0 = a2 + 0;
    v0 = func_089C327C(a0);
    goto L_089C31BC;
L_089C31BC:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C31C4:;
    a0 = a2 + 0;
    v0 = func_089C3244(a0);
    goto L_089C31CC;
L_089C31CC:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C31D4:;
    a0 = a2 + 0;
    v0 = func_089C3260(a0);
    goto L_089C31DC;
L_089C31DC:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C31E4:;
    a0 = a2 + 0;
    v0 = func_089C32D0(a0);
    goto L_089C31EC;
L_089C31EC:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C31F4:;
    a0 = a2 + 0;
    v0 = func_089C32EC(a0);
    goto L_089C31FC;
L_089C31FC:;
    v1 = v0 + 0;
    goto L_089C3174;
L_089C3204:;
    a0 = a2 + 0;
    v0 = func_089C3304(a0);
    goto L_089C320C;
L_089C320C:;
    v1 = v0 + 0;
    goto L_089C3174;
}

/* 089C3214 */
u32 func_089C3214(u32 a0)
{
    u32 v0 = 0;
L_089C3214:;
    v0 = 1;
    ST8(a0+16, v0);
    v0 = 1;
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    return v0;
}

/* 089C322C */
u32 func_089C322C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C322C:;
    v0 = 1;
    v1 = 3;
    ST32(a0+4, v0);
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3244 */
u32 func_089C3244(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3244:;
    v0 = 5;
    ST32(a0+4, v0);
    v1 = 6;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3260 */
u32 func_089C3260(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3260:;
    v0 = 6;
    ST32(a0+4, v0);
    v1 = 7;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C327C */
u32 func_089C327C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C327C:;
    v0 = 4;
    ST32(a0+4, v0);
    v1 = 5;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3298 */
u32 func_089C3298(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3298:;
    v0 = 2;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C32B4 */
u32 func_089C32B4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C32B4:;
    v0 = 3;
    ST32(a0+4, v0);
    v1 = 4;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C32D0 */
u32 func_089C32D0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C32D0:;
    v0 = 7;
    ST32(a0+4, v0);
    v1 = 2;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C32EC */
u32 func_089C32EC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C32EC:;
    v1 = 8;
    v0 = 1;
    ST32(a0+4, v1);
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3304 */
u32 func_089C3304(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3304:;
    v1 = 9;
    v0 = 1;
    ST32(a0+4, v1);
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C331C */
rv_t func_089C331C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C331C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3340;
L_089C3340:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C337C; }
    goto L_089C3354;
L_089C3354:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3364;
L_089C3364:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(a2+28);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3378;
L_089C3378:;
    v1 = 1;
    goto L_089C337C;
L_089C337C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C3394 */
rv_t func_089C3394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3394:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C33B8;
L_089C33B8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089C33CC; }
    goto L_089C33C0;
L_089C33C0:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_089C33DC; }
    goto L_089C33C8;
L_089C33C8:;
    v0 = LD32(s0+8);
    goto L_089C33CC;
L_089C33CC:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = v0 + 0;
    if (cnd_) { goto L_089C33F4; }
    goto L_089C33D8;
L_089C33D8:;
    ST32(s0+8, v1);
    goto L_089C33DC;
L_089C33DC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C33F4:;
    v1 = LD32(s0+4);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089C33DC; }
    goto L_089C3404;
L_089C3404:;
    v0 = v1 << 2;
    v1 = D_08ADE6C4 - (-6460);
    v1 = v1 - 6460;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C3420u: goto L_089C3420; case 0x089C3430u: goto L_089C3430; case 0x089C3440u: goto L_089C3440; case 0x089C3450u: goto L_089C3450; case 0x089C3460u: goto L_089C3460; case 0x089C3470u: goto L_089C3470; case 0x089C3480u: goto L_089C3480; case 0x089C3490u: goto L_089C3490; case 0x089C34A0u: goto L_089C34A0; case 0x089C34B0u: goto L_089C34B0; default: rs_break(0, 0x089c3418); }
L_089C3420:;
    a0 = s0 + 0;
    v0 = func_089C34C0();
    goto L_089C3428;
L_089C3428:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3430:;
    a0 = s0 + 0;
    v0 = func_089C34C8();
    goto L_089C3438;
L_089C3438:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3440:;
    a0 = s0 + 0;
    v0 = func_089C34E0();
    goto L_089C3448;
L_089C3448:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3450:;
    a0 = s0 + 0;
    v0 = func_089C34E8();
    goto L_089C3458;
L_089C3458:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3460:;
    a0 = s0 + 0;
    v0 = func_089C34F0();
    goto L_089C3468;
L_089C3468:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3470:;
    a0 = s0 + 0;
    v0 = func_089C34D0();
    goto L_089C3478;
L_089C3478:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3480:;
    a0 = s0 + 0;
    v0 = func_089C34D8();
    goto L_089C3488;
L_089C3488:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C3490:;
    a0 = s0 + 0;
    v0 = func_089C34F8();
    goto L_089C3498;
L_089C3498:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C34A0:;
    a0 = s0 + 0;
    v0 = func_089C3500();
    goto L_089C34A8;
L_089C34A8:;
    a0 = v0 + 0;
    goto L_089C33DC;
L_089C34B0:;
    a0 = s0 + 0;
    v0 = func_089C3508();
    goto L_089C34B8;
L_089C34B8:;
    a0 = v0 + 0;
    goto L_089C33DC;
}

/* 089C34C0 */
u32 func_089C34C0(void)
{
    u32 v0 = 0;
L_089C34C0:;
    v0 = 0 + 0;
    return v0;
}

/* 089C34C8 */
u32 func_089C34C8(void)
{
    u32 v0 = 0;
L_089C34C8:;
    v0 = 5;
    return v0;
}

/* 089C34D0 */
u32 func_089C34D0(void)
{
    u32 v0 = 0;
L_089C34D0:;
    v0 = 6;
    return v0;
}

/* 089C34D8 */
u32 func_089C34D8(void)
{
    u32 v0 = 0;
L_089C34D8:;
    v0 = 5;
    return v0;
}

/* 089C34E0 */
u32 func_089C34E0(void)
{
    u32 v0 = 0;
L_089C34E0:;
    v0 = 2;
    return v0;
}

/* 089C34E8 */
u32 func_089C34E8(void)
{
    u32 v0 = 0;
L_089C34E8:;
    v0 = 0 + 0;
    return v0;
}

/* 089C34F0 */
u32 func_089C34F0(void)
{
    u32 v0 = 0;
L_089C34F0:;
    v0 = 0 + 0;
    return v0;
}

/* 089C34F8 */
u32 func_089C34F8(void)
{
    u32 v0 = 0;
L_089C34F8:;
    v0 = 7;
    return v0;
}

/* 089C3500 */
u32 func_089C3500(void)
{
    u32 v0 = 0;
L_089C3500:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3508 */
u32 func_089C3508(void)
{
    u32 v0 = 0;
L_089C3508:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3510 */
void func_089C3510(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3510:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C2684(a0, a1);
    goto L_089C3524;
L_089C3524:;
    v0 = D_08B02C28 - (11304);
    v0 = v0 + 11304;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089C3540 */
rv_t func_089C3540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C3540:;
    a2 = LD32(a0+4);
    a1 = a1 & 0xff;
    v1 = 1;
    v0 = 5;
    if (a1 != 0) v1 = v0;
    cnd_ = a2 == 0;
    ST8(a0+18, a1);
    if (cnd_) { goto L_089C3578; }
    goto L_089C355C;
L_089C355C:;
    v0 = 3;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_089C3570; }
    goto L_089C3568;
L_089C3568:;
    return (rv_t){ v0, v1, f0 };
L_089C3570:;
    ST32(a0+8, v1);
    return (rv_t){ v0, v1, f0 };
L_089C3578:;
    ST32(a0+8, v1);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3580 */
rv_t func_089C3580(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C3580:;
    v1 = LD32(a0+4);
    v0 = 5;
    cnd_ = v1 == v0;
    a1 = (s32)v1 < 6;
    if (cnd_) { goto L_089C35AC; }
    goto L_089C3590;
L_089C3590:;
    cnd_ = a1 == 0;
    v0 = 6;
    if (cnd_) { goto L_089C35B8; }
    goto L_089C3598;
L_089C3598:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 3; goto L_089C35B0; }
    goto L_089C35A4;
L_089C35A4:;
    return (rv_t){ v0, v1, f0 };
L_089C35AC:;
    v0 = 3;
    goto L_089C35B0;
L_089C35B0:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
L_089C35B8:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 3; goto L_089C35B0; }
    goto L_089C35C0;
L_089C35C0:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C35C8 */
rv_t func_089C35C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C35C8:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 8;
    if (cnd_) { goto L_089C35E8; }
    goto L_089C35D4;
L_089C35D4:;
    v0 = 9;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 8; goto L_089C35E8; }
    goto L_089C35E0;
L_089C35E0:;
    return (rv_t){ v0, v1, f0 };
L_089C35E8:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C35F0 */
rv_t func_089C35F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C35F0:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 9;
    if (cnd_) { goto L_089C3610; }
    goto L_089C35FC;
L_089C35FC:;
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 9; goto L_089C3610; }
    goto L_089C3608;
L_089C3608:;
    return (rv_t){ v0, v1, f0 };
L_089C3610:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3618 */
rv_t func_089C3618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3618:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = a1 == v0;
    v1 = 1;
    if (cnd_) { goto L_089C3664; }
    goto L_089C3630;
L_089C3630:;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C3664; }
    goto L_089C363C;
L_089C363C:;
    v1 = D_08ADE6EC - (-6420);
    v0 = a1 << 2;
    v1 = v1 - 6420;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C3658u: goto L_089C3658; case 0x089C3674u: goto L_089C3674; case 0x089C3684u: goto L_089C3684; case 0x089C3694u: goto L_089C3694; case 0x089C369Cu: goto L_089C369C; case 0x089C36ACu: goto L_089C36AC; case 0x089C36BCu: goto L_089C36BC; case 0x089C36CCu: goto L_089C36CC; case 0x089C36DCu: goto L_089C36DC; default: rs_break(0, 0x089c3650); }
L_089C3658:;
    a0 = a2 + 0;
    v0 = func_089C36EC(a0);
    goto L_089C3660;
L_089C3660:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C3664:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C3674:;
    a0 = a2 + 0;
    v0 = func_089C3704(a0);
    goto L_089C367C;
L_089C367C:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C3684:;
    a0 = a2 + 0;
    v0 = func_089C3754(a0);
    goto L_089C368C;
L_089C368C:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C3694:;
    v1 = 0 + 0;
    goto L_089C3664;
L_089C369C:;
    a0 = a2 + 0;
    v0 = func_089C371C(a0);
    goto L_089C36A4;
L_089C36A4:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C36AC:;
    a0 = a2 + 0;
    v0 = func_089C3738(a0);
    goto L_089C36B4;
L_089C36B4:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C36BC:;
    a0 = a2 + 0;
    v0 = func_089C37A8(a0);
    goto L_089C36C4;
L_089C36C4:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C36CC:;
    a0 = a2 + 0;
    v0 = func_089C3770(a0);
    goto L_089C36D4;
L_089C36D4:;
    v1 = v0 + 0;
    goto L_089C3664;
L_089C36DC:;
    a0 = a2 + 0;
    v0 = func_089C378C(a0);
    goto L_089C36E4;
L_089C36E4:;
    v1 = v0 + 0;
    goto L_089C3664;
}

/* 089C36EC */
u32 func_089C36EC(u32 a0)
{
    u32 v0 = 0;
L_089C36EC:;
    v0 = 1;
    ST8(a0+16, v0);
    v0 = 1;
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    return v0;
}

/* 089C3704 */
u32 func_089C3704(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3704:;
    v0 = 1;
    v1 = 3;
    ST32(a0+4, v0);
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C371C */
u32 func_089C371C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C371C:;
    v0 = 5;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3738 */
u32 func_089C3738(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3738:;
    v0 = 6;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3754 */
u32 func_089C3754(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3754:;
    v0 = 3;
    ST32(a0+4, v0);
    v1 = 4;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3770 */
u32 func_089C3770(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3770:;
    v0 = 8;
    ST32(a0+4, v0);
    v1 = 5;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C378C */
u32 func_089C378C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C378C:;
    v0 = 9;
    ST32(a0+4, v0);
    v1 = 6;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C37A8 */
u32 func_089C37A8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C37A8:;
    v0 = 7;
    ST32(a0+4, v0);
    v1 = 2;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C37C4 */
rv_t func_089C37C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C37C4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C37E8;
L_089C37E8:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C3824; }
    goto L_089C37FC;
L_089C37FC:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C380C;
L_089C380C:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(a2+28);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3820;
L_089C3820:;
    v1 = 1;
    goto L_089C3824;
L_089C3824:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089C383C */
rv_t func_089C383C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C383C:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3860;
L_089C3860:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+8); goto L_089C3874; }
    goto L_089C3868;
L_089C3868:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_089C3884; }
    goto L_089C3870;
L_089C3870:;
    v0 = LD32(s0+8);
    goto L_089C3874;
L_089C3874:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s0+4); goto L_089C3898; }
    goto L_089C3880;
L_089C3880:;
    ST32(s0+8, v1);
    goto L_089C3884;
L_089C3884:;
    goto L_089C3888;
L_089C3888:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C3898:;
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089C3884; }
    goto L_089C38A4;
L_089C38A4:;
    v0 = v1 << 2;
    v1 = D_08ADE714 - (-6380);
    v1 = v1 - 6380;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C38C0u: goto L_089C38C0; case 0x089C38D0u: goto L_089C38D0; case 0x089C38E0u: goto L_089C38E0; case 0x089C38F0u: goto L_089C38F0; case 0x089C38F8u: goto L_089C38F8; case 0x089C3908u: goto L_089C3908; case 0x089C3918u: goto L_089C3918; case 0x089C3928u: goto L_089C3928; case 0x089C3938u: goto L_089C3938; default: rs_break(0, 0x089c38b8); }
L_089C38C0:;
    a0 = s0 + 0;
    v0 = func_089C3948();
    goto L_089C38C8;
L_089C38C8:;
    goto L_089C3888;
L_089C38D0:;
    a0 = s0 + 0;
    v0 = func_089C3950();
    goto L_089C38D8;
L_089C38D8:;
    goto L_089C3888;
L_089C38E0:;
    a0 = s0 + 0;
    v0 = func_089C3968();
    goto L_089C38E8;
L_089C38E8:;
    goto L_089C3888;
L_089C38F0:;
    v0 = 0 + 0;
    goto L_089C3884;
L_089C38F8:;
    a0 = s0 + 0;
    v0 = func_089C3958();
    goto L_089C3900;
L_089C3900:;
    goto L_089C3888;
L_089C3908:;
    a0 = s0 + 0;
    v0 = func_089C3960();
    goto L_089C3910;
L_089C3910:;
    goto L_089C3888;
L_089C3918:;
    a0 = s0 + 0;
    v0 = func_089C3970();
    goto L_089C3920;
L_089C3920:;
    goto L_089C3888;
L_089C3928:;
    a0 = s0 + 0;
    v0 = func_089C3978();
    goto L_089C3930;
L_089C3930:;
    goto L_089C3888;
L_089C3938:;
    a0 = s0 + 0;
    v0 = func_089C3980();
    goto L_089C3940;
L_089C3940:;
    goto L_089C3888;
}

/* 089C3948 */
u32 func_089C3948(void)
{
    u32 v0 = 0;
L_089C3948:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3950 */
u32 func_089C3950(void)
{
    u32 v0 = 0;
L_089C3950:;
    v0 = 5;
    return v0;
}

/* 089C3958 */
u32 func_089C3958(void)
{
    u32 v0 = 0;
L_089C3958:;
    v0 = 6;
    return v0;
}

/* 089C3960 */
u32 func_089C3960(void)
{
    u32 v0 = 0;
L_089C3960:;
    v0 = 5;
    return v0;
}

/* 089C3968 */
u32 func_089C3968(void)
{
    u32 v0 = 0;
L_089C3968:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3970 */
u32 func_089C3970(void)
{
    u32 v0 = 0;
L_089C3970:;
    v0 = 7;
    return v0;
}

/* 089C3978 */
u32 func_089C3978(void)
{
    u32 v0 = 0;
L_089C3978:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3980 */
u32 func_089C3980(void)
{
    u32 v0 = 0;
L_089C3980:;
    v0 = 0 + 0;
    return v0;
}

/* 089C3988 */
void func_089C3988(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3988:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_089C2684(a0, a1);
    goto L_089C399C;
L_089C399C:;
    v0 = D_08B02BE8 - (11240);
    v0 = v0 + 11240;
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 089C39B8 */
rv_t func_089C39B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C39B8:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_089C39CC; }
    goto L_089C39C4;
L_089C39C4:;
    ST8(a0+18, 0);
    return (rv_t){ v0, v1, f0 };
L_089C39CC:;
    cnd_ = v0 != 0;
    v0 = 5;
    if (cnd_) { goto L_089C39D8; }
    goto L_089C39D4;
L_089C39D4:;
    ST32(a0+8, v0);
    goto L_089C39D8;
L_089C39D8:;
    return (rv_t){ v0, v1, f0 };
}

/* 089C39E0 */
rv_t func_089C39E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C39E0:;
    v1 = LD32(a0+4);
    v0 = 5;
    cnd_ = v1 == v0;
    v0 = 6;
    if (cnd_) { goto L_089C3A00; }
    goto L_089C39F0;
L_089C39F0:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089C3A00; }
    goto L_089C39F8;
L_089C39F8:;
    return (rv_t){ v0, v1, f0 };
L_089C3A00:;
    ST32(a0+8, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3A08 */
rv_t func_089C3A08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C3A08:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 8;
    if (cnd_) { goto L_089C3A28; }
    goto L_089C3A14;
L_089C3A14:;
    v0 = 9;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 8; goto L_089C3A28; }
    goto L_089C3A20;
L_089C3A20:;
    return (rv_t){ v0, v1, f0 };
L_089C3A28:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3A30 */
rv_t func_089C3A30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089C3A30:;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    v0 = 9;
    if (cnd_) { goto L_089C3A50; }
    goto L_089C3A3C;
L_089C3A3C:;
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = 9; goto L_089C3A50; }
    goto L_089C3A48;
L_089C3A48:;
    return (rv_t){ v0, v1, f0 };
L_089C3A50:;
    ST32(a0+8, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 089C3A58 */
rv_t func_089C3A58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3A58:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = a1 == v0;
    v1 = 1;
    if (cnd_) { goto L_089C3AA4; }
    goto L_089C3A70;
L_089C3A70:;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C3AA4; }
    goto L_089C3A7C;
L_089C3A7C:;
    v1 = D_08ADE73C - (-6340);
    v0 = a1 << 2;
    v1 = v1 - 6340;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089C3A98u: goto L_089C3A98; case 0x089C3AB4u: goto L_089C3AB4; case 0x089C3ABCu: goto L_089C3ABC; case 0x089C3ACCu: goto L_089C3ACC; case 0x089C3ADCu: goto L_089C3ADC; case 0x089C3AECu: goto L_089C3AEC; case 0x089C3AFCu: goto L_089C3AFC; default: rs_break(0, 0x089c3a90); }
L_089C3A98:;
    a0 = a2 + 0;
    v0 = func_089C3B0C(a0);
    goto L_089C3AA0;
L_089C3AA0:;
    v1 = v0 + 0;
    goto L_089C3AA4;
L_089C3AA4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089C3AB4:;
    v1 = 0 + 0;
    goto L_089C3AA4;
L_089C3ABC:;
    a0 = a2 + 0;
    v0 = func_089C3B24(a0);
    goto L_089C3AC4;
L_089C3AC4:;
    v1 = v0 + 0;
    goto L_089C3AA4;
L_089C3ACC:;
    a0 = a2 + 0;
    v0 = func_089C3B40(a0);
    goto L_089C3AD4;
L_089C3AD4:;
    v1 = v0 + 0;
    goto L_089C3AA4;
L_089C3ADC:;
    a0 = a2 + 0;
    v0 = func_089C3B5C(a0);
    goto L_089C3AE4;
L_089C3AE4:;
    v1 = v0 + 0;
    goto L_089C3AA4;
L_089C3AEC:;
    a0 = a2 + 0;
    v0 = func_089C3B78(a0);
    goto L_089C3AF4;
L_089C3AF4:;
    v1 = v0 + 0;
    goto L_089C3AA4;
L_089C3AFC:;
    a0 = a2 + 0;
    v0 = func_089C3B94(a0);
    goto L_089C3B04;
L_089C3B04:;
    v1 = v0 + 0;
    goto L_089C3AA4;
}

/* 089C3B0C */
u32 func_089C3B0C(u32 a0)
{
    u32 v0 = 0;
L_089C3B0C:;
    v0 = 1;
    ST8(a0+16, v0);
    v0 = 1;
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    return v0;
}

/* 089C3B24 */
u32 func_089C3B24(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3B24:;
    v0 = 5;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3B40 */
u32 func_089C3B40(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3B40:;
    v0 = 6;
    ST32(a0+4, v0);
    v1 = 1;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3B5C */
u32 func_089C3B5C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3B5C:;
    v0 = 7;
    ST32(a0+4, v0);
    v1 = 2;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3B78 */
u32 func_089C3B78(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3B78:;
    v0 = 8;
    ST32(a0+4, v0);
    v1 = 5;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3B94 */
u32 func_089C3B94(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_089C3B94:;
    v0 = 9;
    ST32(a0+4, v0);
    v1 = 6;
    v0 = 1;
    ST32(a0+12, v1);
    ST8(a0+16, 0);
    return v0;
}

/* 089C3BB0 */
rv_t func_089C3BB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089C3BB0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3BD4;
L_089C3BD4:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089C3C10; }
    goto L_089C3BE8;
L_089C3BE8:;
    v0 = LD32(s0);
    v1 = LD32(v0+40);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3BF8;
L_089C3BF8:;
    a2 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(a2+28);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089C3C0C;
L_089C3C0C:;
    v1 = 1;
    goto L_089C3C10;
L_089C3C10:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}
