#include "game.h"

/* 08A1E05C */
float func_08A1E05C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08A1E05C:;
    sp = sp - 192;
    v0 = 999;
    a1 = LD32(a0+184);
    cnd_ = a1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A1E104; }
    goto L_08A1E094;
L_08A1E094:;
    a0 = D_08C2C0A0 - (-16224);
    a0 = a0 - 16224;
    a2 = 1;
    v0 = func_08AD0BD8(a0, a1, a2);
    goto L_08A1E0A4;
L_08A1E0A4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A1E104; }
    goto L_08A1E0AC;
L_08A1E0AC:;
    a0 = 2;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E0C0;
L_08A1E0C0:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A1E104; }
    goto L_08A1E0C8;
L_08A1E0C8:;
    a3 = LD32(s2+304);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(a3);
    a2 = 1;
    v0 = LD32(v1-16);
    a3 = a3 + v0;
    v1 = LD32(a3+4);
    ST32(t0+4, v1);
    a3 = LD32(s0);
    v0 = LD32(a3-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t0, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E104;
L_08A1E104:;
    a2 = D_08C2AEC8 - (-20792);
    v0 = a2 - 20792;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A1E17C; }
    goto L_08A1E130;
L_08A1E130:;
    a2 = LD32(a2-20792);
    a3 = a1 + 0;
    goto L_08A1E138;
L_08A1E138:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A1E16C; }
    goto L_08A1E150;
L_08A1E150:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A1E180; }
    goto L_08A1E160;
L_08A1E160:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A1E150; }
    goto L_08A1E16C;
L_08A1E16C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A1E138; }
    goto L_08A1E17C;
L_08A1E17C:;
    v1 = LD32(sp+8);
    goto L_08A1E180;
L_08A1E180:;
    s5 = D_08AEF918 - (-1768);
    s4 = 0 + 0;
    cnd_ = v1 == 0;
    f20 = BITSF(LD32(s5-1768));
    if (cnd_) { goto L_08A1E5C8; }
    goto L_08A1E190;
L_08A1E190:;
    s1 = 0x58d0000u;
    s1 = s1 | 0x13bf;
    s0 = LD32(v1);
    goto L_08A1E19C;
L_08A1E19C:;
    s3 = sp + 48;
    v1 = LD32(s0);
    v0 = LD32(v1+260);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E1B0;
L_08A1E1B0:;
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1E674; }
    goto L_08A1E1B8;
L_08A1E1B8:;
    a0 = sp + 0;
    goto L_08A1E1BC;
L_08A1E1BC:;
    a1 = 1;
    func_08AD0D38(a0, a1);
    goto L_08A1E1C4;
L_08A1E1C4:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08A1E19C; }
    goto L_08A1E1D0;
L_08A1E1D0:;
    cnd_ = s4 == 0;
    v0 = D_08B1BD10 - (-17136);
    if (cnd_) { goto L_08A1E5C8; }
    goto L_08A1E1D8;
L_08A1E1D8:;
    f20 = BITSF(LD32(s5-1768));
    s1 = v0 - 17136;
    s6 = 0 + 0;
    s0 = 0 + 0;
    s3 = sp + 48;
    s5 = sp + 64;
    a1 = LD32(s1);
    goto L_08A1E1F4;
L_08A1E1F4:;
    a2 = s3 + 0;
    a0 = s4 + 0;
    func_089C07BC(a0, a1, a2);
    goto L_08A1E200;
L_08A1E200:;
    a0 = s5 + 0;
    a1 = s2 + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E210;
L_08A1E210:;
    f3 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+52));
    f5 = BITSF(LD32(sp+56));
    f1 = BITSF(LD32(sp+64));
    f0 = BITSF(LD32(sp+68));
    f2 = BITSF(LD32(sp+72));
    f1 = f3 - f1;
    f0 = f4 - f0;
    f2 = f5 - f2;
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+20, FBITS(f0));
    s1 = s1 + 4;
    ST32(sp+16, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_08A1E290; }
    goto L_08A1E27C;
L_08A1E27C:;
    f20 = BITSF(v0);
    ST32(sp+32, FBITS(f3));
    s6 = s0 + 0;
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    goto L_08A1E290;
L_08A1E290:;
    s0 = s0 + 1;
    v0 = s0 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A1E1F4; }
    goto L_08A1E2A0;
L_08A1E2A0:;
    v1 = LD32(s2+304);
    a0 = D_08C2A9D8 - (-22056);
    a0 = a0 - 22056;
    a1 = LD32(v1);
    a2 = 1;
    v0 = LD32(a1-16);
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    v0 = func_08AC4D98(a0, a1, a2);
    goto L_08A1E2C4;
L_08A1E2C4:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = s4 + 0;
    a3 = s6 + 0;
    func_08A1E798(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A1E2D8;
L_08A1E2D8:;
    v0 = LD32(s2+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    a0 = 0x805e;
    if (cnd_) { goto L_08A1E3C8; }
    goto L_08A1E2E8;
L_08A1E2E8:;
    v0 = LD32(s2+296);
    goto L_08A1E2EC;
L_08A1E2EC:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08A1E300; }
    goto L_08A1E2F4;
L_08A1E2F4:;
    v0 = v0 - 1;
    ST32(s2+296, v0);
    s1 = LD32(sp);
    goto L_08A1E300;
L_08A1E300:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1E384; }
    goto L_08A1E310;
L_08A1E310:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1E384; }
    goto L_08A1E31C;
L_08A1E31C:;
    v0 = LD32(s1);
    goto L_08A1E320;
L_08A1E320:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1E374; }
    goto L_08A1E334;
L_08A1E334:;
    v0 = LD_U8(s0+8);
    goto L_08A1E338;
L_08A1E338:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A1E3C0; }
    goto L_08A1E340;
L_08A1E340:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1E3B0; }
    goto L_08A1E348;
L_08A1E348:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A1E350;
L_08A1E350:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E35C;
L_08A1E35C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1E368;
L_08A1E368:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1E338; }
    goto L_08A1E370;
L_08A1E370:;
    v1 = LD32(s1+4);
    goto L_08A1E374;
L_08A1E374:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1E320; }
    goto L_08A1E384;
L_08A1E384:;
    goto L_08A1E388;
L_08A1E388:;
    sp = sp + 192;
    return f0;
L_08A1E3B0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A1E350;
L_08A1E3C0:;
    s0 = LD32(s0+4);
    goto L_08A1E368;
L_08A1E3C8:;
    a1 = 60;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E3D8;
L_08A1E3D8:;
    cnd_ = v0 == 0;
    s6 = v0 + 0;
    if (cnd_) { goto L_08A1E2E8; }
    goto L_08A1E3E0;
L_08A1E3E0:;
    s1 = LD32(v0+24);
    v0 = LD32(s2+16);
    a0 = s5 + 0;
    a1 = s2 + 0;
    ST32(s1+4, v0);
    a2 = 1;
    s0 = s1 + 28;
    v0 = LD32(s2+20);
    f20 = BITSF(0);
    s3 = s1 + 40;
    ST32(s1+8, v0);
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E410;
L_08A1E410:;
    f0 = BITSF(LD32(sp+64));
    a0 = sp + 16;
    a1 = s2 + 0;
    ST32(s1+28, FBITS(f0));
    a2 = 1;
    f0 = BITSF(LD32(sp+72));
    ST32(s0+8, FBITS(f0));
    f0 = BITSF(LD32(sp+68));
    ST32(s0+4, FBITS(f0));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E438;
L_08A1E438:;
    f0 = BITSF(LD32(sp+20));
    f4 = BITSF(LD32(sp+36));
    f3 = BITSF(LD32(sp+40));
    f2 = BITSF(LD32(sp+32));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+24));
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+16));
    ST32(sp+68, FBITS(f4));
    f6 = f4;
    f2 = f2 - f0;
    ST32(sp+72, FBITS(f3));
    f5 = f3;
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+64, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    ST32(s1+40, FBITS(f2));
    ST32(s3+4, FBITS(f4));
    cnd_ = fcc;
    ST32(s3+8, FBITS(f3));
    if (cnd_) { goto L_08A1E4F0; }
    goto L_08A1E4AC;
L_08A1E4AC:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[1]);}
    f2 = BITSF(v0);
    ST32(s3+4, v0);
    {v0=FBITS(v[0]);}
    ST32(s3+8, FBITS(f3));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f3));
    ST32(s1+40, v0);
    f6 = BITSF(LD32(s3+4));
    ST32(sp+64, v0);
    f5 = BITSF(LD32(s3+8));
    goto L_08A1E4F0;
L_08A1E4F0:;
    f0 = BITSF(LD32(s2+60));
    f1 = BITSF(LD32(s1+40));
    a1 = LD32(s2+304);
    f2 = f5 * f0;
    f1 = f1 * f0;
    f0 = f6 * f0;
    a0 = a1 + 0;
    ST32(s3+8, FBITS(f2));
    ST32(s1+40, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    v1 = LD32(a1);
    a2 = LD32(v1-16);
    v0 = LD32(v1+48);
    a1 = a1 + a2;
    t_ = v0;
    s0 = LD32(a1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E530;
L_08A1E530:;
    ST32(s1+12, v0);
    ST32(s1+16, s0);
    v1 = LD32(s4);
    f2 = BITSF(LD32(s2+112));
    v0 = LD32(v1-16);
    fcc = FCMP(f20, f2, 12);
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    cnd_ = fcc;
    ST32(s1+52, v1);
    if (cnd_) { goto L_08A1E594; }
    goto L_08A1E558;
L_08A1E558:;
    v0 = D_08AEF91C - (-1764);
    f0 = BITSF(LD32(v0-1764));
    ST32(s1+56, FBITS(f0));
    goto L_08A1E564;
L_08A1E564:;
    a0 = s6 + 0;
    a1 = 1;
    v1 = LD_U8(s2+268);
    a2 = 1;
    ST8(s1, v1);
    v0 = LD_U8(s2+269);
    ST8(s1+24, v0);
    ST32(s6, s0);
    ST32(s6+4, s0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E58C;
L_08A1E58C:;
    v0 = LD32(s2+296);
    goto L_08A1E2EC;
L_08A1E594:;
    f0 = BITSF(LD32(s2+108));
    v0 = D_08AEF91C - (-1764);
    f1 = BITSF(LD32(v0-1764));
    f0 = f0 / f2;
    a0 = sp + 80;
    a1 = sp + 84;
    a2 = sp + 88;
    ST32(sp+84, FBITS(f20));
    ST32(sp+88, FBITS(f1));
    ST32(sp+80, FBITS(f0));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A1E5C0;
L_08A1E5C0:;
    ST32(s1+56, FBITS(f0));
    goto L_08A1E564;
L_08A1E5C8:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A1E384; }
    goto L_08A1E5DC;
L_08A1E5DC:;
    a1 = LD32(s1+4);
    v0 = s4 < a1;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A1E384; }
    goto L_08A1E5EC;
L_08A1E5EC:;
    v0 = LD32(s1);
    goto L_08A1E5F0;
L_08A1E5F0:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A1E644; }
    goto L_08A1E604;
L_08A1E604:;
    v0 = LD_U8(s0+8);
    goto L_08A1E608;
L_08A1E608:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A1E66C; }
    goto L_08A1E610;
L_08A1E610:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1E65C; }
    goto L_08A1E618;
L_08A1E618:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A1E620;
L_08A1E620:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E62C;
L_08A1E62C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A1E638;
L_08A1E638:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A1E608; }
    goto L_08A1E640;
L_08A1E640:;
    a1 = LD32(s1+4);
    goto L_08A1E644;
L_08A1E644:;
    s3 = s3 + 1;
    v0 = s3 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A1E5F0; }
    goto L_08A1E654;
L_08A1E654:;
    goto L_08A1E388;
L_08A1E65C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A1E620;
L_08A1E66C:;
    s0 = LD32(s0+4);
    goto L_08A1E638;
L_08A1E674:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E684;
L_08A1E684:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = 1;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E6AC;
L_08A1E6AC:;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+52));
    f4 = BITSF(LD32(s2+92));
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+56));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    f3 = f3 - f0;
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    ST32(sp+32, FBITS(f2));
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1E1BC; }
    goto L_08A1E71C;
L_08A1E71C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A1E1BC; }
    goto L_08A1E72C;
L_08A1E72C:;
    f20 = BITSF(v0);
    s4 = s0 + 0;
    goto L_08A1E1BC;
}

/* 08A1E738 */
void func_08A1E738(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1E738:;
    sp = sp - 32;
    a2 = 1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = s0 + 0;
    v0 = LD32(s0+276);
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A1E778; }
    goto L_08A1E764;
L_08A1E764:;
    goto L_08A1E768;
L_08A1E768:;
    sp = sp + 32;
    return;
L_08A1E778:;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E780;
L_08A1E780:;
    a0 = LD32(s0+276);
    a2 = sp + 0;
    a1 = s1 + 0;
    func_08A24138(a1, a2);
    goto L_08A1E790;
L_08A1E790:;
    goto L_08A1E768;
}

/* 08A1E798 */
void func_08A1E798(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A1E798:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    v0 = LD32(a1+856);
    v0 = v0 | 0x8;
    ST32(a1+856, v0);
    s0 = LD32(a0+276);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1E82C; }
    goto L_08A1E7D4;
L_08A1E7D4:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E7DC;
L_08A1E7DC:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = s2 << 2;
    v1 = LD32(v0-16);
    v0 = D_08B1BD10 - (-17136);
    v0 = v0 - 17136;
    a0 = a0 + v0;
    v1 = s1 + v1;
    a2 = LD32(a0);
    a1 = LD32(v1+4);
    a0 = s0 + 0;
    func_08A23B24(a0, a1, a2);
    goto L_08A1E80C;
L_08A1E80C:;
    ST32(s3+276, s0);
    sp = sp + 32;
    return;
L_08A1E82C:;
    func_08A23BB8();
    goto L_08A1E834;
L_08A1E834:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E83C;
L_08A1E83C:;
    goto L_08A1E7D4;
}

/* 08A1E844 */
void func_08A1E844(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1E844:;
    v0 = LD32(a1+856);
    sp = sp - 16;
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    s1 = a0 + 0;
    ST32(a1+856, v0);
    s0 = LD32(a0+276);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A1E890; }
    goto L_08A1E870;
L_08A1E870:;
    v0 = 999;
    goto L_08A1E874;
L_08A1E874:;
    ST32(s1+276, 0);
    ST32(s1+184, v0);
    sp = sp + 16;
    return;
L_08A1E890:;
    func_08A23BB8();
    goto L_08A1E898;
L_08A1E898:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E8A0;
L_08A1E8A0:;
    v0 = 999;
    goto L_08A1E874;
}

/* 08A1E8A8 */
float func_08A1E8A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1E8A8:;
    sp = sp - 16;
    a1 = 3;
    a2 = LD32(a0+304);
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E8BC;
L_08A1E8BC:;
    sp = sp + 16;
    return f0;
}

/* 08A1E8C8 */
float func_08A1E8C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1E8C8:;
    sp = sp - 16;
    a1 = 4;
    a2 = LD32(a0+304);
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E8DC;
L_08A1E8DC:;
    sp = sp + 16;
    return f0;
}

/* 08A1E8E8 */
rv_t func_08A1E8E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1E8E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+300);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E90C;
L_08A1E90C:;
    a2 = LD32(s0+304);
    a0 = s0 + 0;
    a1 = v0 + 0;
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E91C;
L_08A1E91C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A1E92C */
void func_08A1E92C(void)
{
L_08A1E92C:;
    return;
}

/* 08A1E934 */
float func_08A1E934(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1E934:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = LD32(a0+364);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    a0 = 0x8064;
    if (cnd_) { goto L_08A1E970; }
    goto L_08A1E960;
L_08A1E960:;
    sp = sp + 16;
    return f0;
L_08A1E970:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1E978;
L_08A1E978:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A1E9BC; }
    goto L_08A1E98C;
L_08A1E98C:;
    a3 = LD32(s0+304);
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(t0, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1E9BC;
L_08A1E9BC:;
    v0 = LD32(s0+296);
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_08A1E960; }
    goto L_08A1E9C8;
L_08A1E9C8:;
    ST32(s0+296, v1);
    goto L_08A1E960;
}

/* 08A1E9D0 */
float func_08A1E9D0(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_08A1E9D0:;
    sp = sp - 208;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A1EA34; }
    goto L_08A1EA00;
L_08A1EA00:;
    v0 = LD32(s1+296);
    goto L_08A1EA04;
L_08A1EA04:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1EA14; }
    goto L_08A1EA0C;
L_08A1EA0C:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A1EA14;
L_08A1EA14:;
    sp = sp + 208;
    return f0;
L_08A1EA34:;
    a0 = 0x805e;
    a1 = 60;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EA48;
L_08A1EA48:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A1EA00; }
    goto L_08A1EA50;
L_08A1EA50:;
    s2 = LD32(v0+24);
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A1EA04; }
    goto L_08A1EA5C;
L_08A1EA5C:;
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    v0 = LD32(v1+264);
    t_ = v0;
    s5 = D_08AEF920 - (-1760);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EA70;
L_08A1EA70:;
    ST32(s2+52, v0);
    v0 = LD32(s1+16);
    a2 = LD32(s1+304);
    ST32(s2+4, v0);
    v0 = LD32(s1+20);
    ST32(s2+8, v0);
    v1 = LD32(s1+152);
    ST32(s2+20, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+240);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EAA0;
L_08A1EAA0:;
    f8 = BITSF(LD32(v0+32));
    a2 = LD32(s1+304);
    f5 = BITSF(LD32(v0));
    f7 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f6 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+24));
    f4 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f5));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+32, FBITS(f8));
    ST32(sp+48, FBITS(f7));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f4));
    ST32(sp+4, FBITS(f7));
    ST32(sp+16, FBITS(f6));
    cnd_ = a2 != 0;
    ST32(sp+28, FBITS(f4));
    if (cnd_) { goto L_08A1EC7C; }
    goto L_08A1EAFC;
L_08A1EAFC:;
    a1 = LD32(a2);
    a0 = a2 + 0;
    v1 = LD32(a1-16);
    v0 = LD32(a1+48);
    v1 = a2 + v1;
    t_ = v0;
    s0 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EB18;
L_08A1EB18:;
    a0 = LD32(s1+304);
    s4 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EB30;
L_08A1EB30:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = s0 + 0;
    a2 = 1;
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    ST32(sp+124, FBITS(f3));
    ST32(sp+128, FBITS(f4));
    ST32(sp+132, FBITS(f5));
    ST32(sp+136, FBITS(f6));
    ST32(sp+140, FBITS(f7));
    ST32(sp+144, FBITS(f8));
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EB8C;
L_08A1EB8C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+304); goto L_08A1EBF4; }
    goto L_08A1EB94;
L_08A1EB94:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EBA8;
L_08A1EBA8:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    ST32(sp+124, FBITS(f3));
    ST32(sp+128, FBITS(f4));
    ST32(sp+132, FBITS(f5));
    ST32(sp+136, FBITS(f6));
    ST32(sp+140, FBITS(f7));
    ST32(sp+144, FBITS(f8));
    a0 = LD32(s1+304);
    goto L_08A1EBF4;
L_08A1EBF4:;
    v1 = LD32(a0);
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = sp + 96;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EC04;
L_08A1EC04:;
    f0 = BITSF(LD32(s1+204));
    f1 = BITSF(LD32(sp+96));
    f2 = BITSF(LD32(sp+100));
    f3 = BITSF(LD32(sp+104));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = BITSF(LD32(s5-1760));
    v0 = s2 + 40;
    ST32(sp+80, FBITS(f1));
    a0 = s3 + 0;
    a1 = 1;
    ST32(sp+84, FBITS(f2));
    a2 = 1;
    ST32(sp+88, FBITS(f3));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(s2+12, s4);
    ST32(s2+16, s0);
    ST32(s2+40, FBITS(f1));
    ST32(s2+56, FBITS(f4));
    v0 = LD_U8(s1+268);
    ST8(s2, v0);
    v1 = LD_U8(s1+269);
    ST8(s2+24, v1);
    ST32(s3, s0);
    ST32(s3+4, s0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EC74;
L_08A1EC74:;
    v0 = LD32(s1+296);
    goto L_08A1EA04;
L_08A1EC7C:;
    v0 = LD32(a2);
    a0 = a2 + 0;
    v1 = LD32(v0+276);
    t_ = v1;
    a1 = sp + 64;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EC90;
L_08A1EC90:;
    v0 = LD32(sp+64);
    f4 = BITSF(0);
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+68);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+72);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f4, 2);
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    if (cnd_) { goto L_08A1ED0C; }
    goto L_08A1ECCC;
L_08A1ECCC:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f4 = BITSF(v0);
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
    goto L_08A1ED0C;
L_08A1ED0C:;
    f0 = BITSF(0);
    fcc = FCMP(f4, f0, 2);
    cnd_ = fcc;
    s5 = D_08AEF920 - (-1760);
    if (cnd_) { goto L_08A1ED90; }
    goto L_08A1ED20;
L_08A1ED20:;
    f1 = BITSF(LD32(s5-1760));
    f5 = BITSF(LD32(sp+72));
    f0 = BITSF(LD32(sp+64));
    f1 = f1 / f4;
    f3 = BITSF(LD32(sp+68));
    v0 = D_08AEF924 - (-1756);
    f4 = BITSF(LD32(v0-1756));
    f2 = BITSF(LD32(sp+56));
    f0 = f0 * f1;
    f5 = f5 * f1;
    f3 = f3 * f1;
    f1 = BITSF(LD32(sp+48));
    f6 = f0 * f4;
    f7 = f5 * f4;
    f4 = f3 * f4;
    ST32(sp+96, FBITS(f0));
    f1 = f1 + f6;
    f2 = f2 + f7;
    f0 = BITSF(LD32(sp+52));
    ST32(sp+100, FBITS(f3));
    f0 = f0 + f4;
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f2));
    ST32(sp+104, FBITS(f5));
    ST32(sp+80, FBITS(f6));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f7));
    goto L_08A1ED90;
L_08A1ED90:;
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = s2 + 28;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EDA4;
L_08A1EDA4:;
    v1 = D_08AEF928 - (-1752);
    f0 = BITSF(LD32(v1-1752));
    f5 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f2 = f2 * f0;
    a2 = LD32(s1+304);
    ST32(sp+80, FBITS(f5));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f2));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f5;
    f0 = f0 + f2;
    f3 = f3 + f4;
    ST32(sp+96, FBITS(f1));
    ST32(sp+104, FBITS(f0));
    ST32(sp+100, FBITS(f3));
    ST32(s0+8, FBITS(f0));
    ST32(s2+28, FBITS(f1));
    ST32(s0+4, FBITS(f3));
    goto L_08A1EAFC;
}

/* 08A1EE08 */
float func_08A1EE08(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 448);
L_08A1EE08:;
    sp = sp - 448;
    s1 = a0 + 0;
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a2 = sp + 160;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    s5 = a1 + 0;
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    ST32(sp+160, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EE64;
L_08A1EE64:;
    a0 = LD32(sp+160);
    cnd_ = a0 != 0;
    a1 = 0xd2f00000u;
    if (cnd_) { goto L_08A1EEA4; }
    goto L_08A1EE70;
L_08A1EE70:;
    goto L_08A1EE74;
L_08A1EE74:;
    sp = sp + 448;
    return f0;
L_08A1EEA4:;
    f12 = BITSF(0);
    a1 = a1 | 0x97cc;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EEB0;
L_08A1EEB0:;
    v0 = D_08AEF92C - (-1748);
    f12 = BITSF(LD32(v0-1748));
    a0 = LD32(sp+160);
    a1 = 0xd2f00000u;
    a1 = a1 | 0x97cd;
    ST32(sp+16, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EECC;
L_08A1EECC:;
    v0 = D_08AEF930 - (-1744);
    f12 = BITSF(LD32(v0-1744));
    a0 = LD32(sp+160);
    a1 = 0xd2f00000u;
    a1 = a1 | 0x97ce;
    ST32(sp+20, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EEE8;
L_08A1EEE8:;
    f12 = BITSF(0);
    a0 = LD32(sp+160);
    a1 = 0x8b220000u;
    a1 = a1 | 0x61a0;
    ST32(sp+24, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EF00;
L_08A1EF00:;
    a1 = 0xbfba0000u;
    a0 = LD32(sp+160);
    a1 = a1 | 0xf153;
    a2 = 0 + 0;
    f20 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EF18;
L_08A1EF18:;
    a0 = LD32(sp+160);
    a1 = 0x8b340000u;
    a1 = a1 | 0x3a2d;
    a2 = 0 + 0;
    fp = v0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EF30;
L_08A1EF30:;
    a0 = LD32(sp+160);
    a1 = 0x944b0000u;
    a1 = a1 | 0x3303;
    a2 = 0 + 0;
    ST32(sp+164, v0);
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EF48;
L_08A1EF48:;
    s6 = v0 + 0;
    v0 = D_08AEF934 - (-1740);
    f0 = BITSF(LD32(v0-1740));
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    f20 = f20 * f0;
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = s6 == 0;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A1F350; }
    goto L_08A1EF6C;
L_08A1EF6C:;
    a1 = s1 + 0;
    a0 = sp + 48;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1EF7C;
L_08A1EF7C:;
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1EF90;
L_08A1EF90:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(224);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(176);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    f2 = BITSF(LD32(sp+48));
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
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    {v[33]=BITSF(a0);}
    v1 = LD32(sp+24);
    {v[34]=BITSF(a1);}
    {v[22]=BITSF(v1);}
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
    f1 = BITSF(LD32(sp+52));
    ST32(sp+80, FBITS(f4));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+56));
    ST32(sp, FBITS(f2));
    f0 = f0 + f5;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f5));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    goto L_08A1F07C;
L_08A1F07C:;
    a1 = LD32(s1+304);
    v1 = 0x8005;
    a2 = LD32(a1);
    v0 = LD32(a2-16);
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = LD32(a2+244); goto L_08A1F220; }
    goto L_08A1F09C;
L_08A1F09C:;
    a1 = LD32(s1+272);
    goto L_08A1F0A0;
L_08A1F0A0:;
    cnd_ = a1 != 0;
    v0 = D_08AEF938 - (-1736);
    if (cnd_) { goto L_08A1F204; }
    goto L_08A1F0A8;
L_08A1F0A8:;
    v0 = LD32(s1+296);
    goto L_08A1F0AC;
L_08A1F0AC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+364); goto L_08A1F0C0; }
    goto L_08A1F0B4;
L_08A1F0B4:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    v0 = LD32(s1+364);
    goto L_08A1F0C0;
L_08A1F0C0:;
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1EE74; }
    goto L_08A1F0CC;
L_08A1F0CC:;
    a0 = 0x807e;
    a1 = 52;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1F0E0;
L_08A1F0E0:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A1EE70; }
    goto L_08A1F0E8;
L_08A1F0E8:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A1EE74; }
    goto L_08A1F0F4;
L_08A1F0F4:;
    a0 = LD32(s1+304);
    cnd_ = a0 == 0;
    s4 = 999;
    if (cnd_) { goto L_08A1F110; }
    goto L_08A1F100;
L_08A1F100:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    s4 = LD32(v0+4);
    goto L_08A1F110;
L_08A1F110:;
    cnd_ = a0 != 0;
    s7 = 999;
    if (cnd_) { goto L_08A1F1EC; }
    goto L_08A1F118;
L_08A1F118:;
    s3 = s0 + 24;
    goto L_08A1F11C;
L_08A1F11C:;
    cnd_ = s6 != 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_08A1F1A8; }
    goto L_08A1F124;
L_08A1F124:;
    f1 = BITSF(LD32(sp+20));
    ST32(sp+80, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    goto L_08A1F138;
L_08A1F138:;
    f0 = BITSF(LD32(sp+88));
    f1 = BITSF(LD32(sp+84));
    v0 = LD32(sp+164);
    ST32(s3+8, FBITS(f0));
    a0 = s2 + 0;
    a1 = 1;
    f0 = BITSF(LD32(sp+80));
    ST32(s0+40, fp);
    a2 = 1;
    ST32(s0+44, s5);
    ST32(s0+12, s7);
    ST32(s0+16, s4);
    ST32(s3, FBITS(f0));
    ST32(s3+4, FBITS(f1));
    ST8(s0+48, v0);
    ST32(s0+36, FBITS(f20));
    v0 = LD_U8(s1+268);
    ST8(s0, v0);
    v1 = LD32(s1+20);
    ST32(s0+8, v1);
    v0 = LD32(s2+28);
    ST32(s2, s4);
    v0 = v0 | 0x1;
    ST32(s2+28, v0);
    ST32(s2+4, s4);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F1A0;
L_08A1F1A0:;
    goto L_08A1EE74;
L_08A1F1A8:;
    a0 = sp + 64;
    a1 = s1 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1F1B8;
L_08A1F1B8:;
    f0 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+64));
    f2 = BITSF(LD32(sp+68));
    f1 = BITSF(LD32(sp+72));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+20));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(sp+80, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f1));
    goto L_08A1F138;
L_08A1F1EC:;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s3 = s0 + 24;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F1FC;
L_08A1F1FC:;
    s7 = v0 + 0;
    goto L_08A1F11C;
L_08A1F204:;
    f12 = BITSF(LD32(v0-1736));
    a2 = LD32(s1+304);
    a0 = s1 + 0;
    f13 = f12;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F218;
L_08A1F218:;
    v0 = LD32(s1+296);
    goto L_08A1F0AC;
L_08A1F220:;
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F228;
L_08A1F228:;
    f6 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0));
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+8));
    f5 = BITSF(0);
    f2 = f2 - f4;
    f3 = f3 - f6;
    {u32 a_=sp+(304);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f7 = f5;
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = 0 + 0;
    {v[13]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+80, FBITS(f4));
    fcc = FCMP(f0, f5, 2);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+88, FBITS(f6));
    ST32(sp+84, FBITS(f0));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f5));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f3));
    if (cnd_) { goto L_08A1F2D8; }
    goto L_08A1F294;
L_08A1F294:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f7 = BITSF(v0);
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
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_08A1F2D8;
L_08A1F2D8:;
    v1 = LD32(s1+304);
    v0 = D_08AEF938 - (-1736);
    f12 = BITSF(LD32(v0-1736));
    a0 = LD32(v1);
    s0 = sp + 96;
    f12 = f7 + f12;
    v0 = LD32(a0-16);
    a1 = sp + 80;
    a2 = sp + 64;
    v1 = v1 + v0;
    a3 = LD32(v1+4);
    t0 = 0 + 0;
    t1 = 0 + 0;
    a0 = s0 + 0;
    func_0883506C(a0, a1, a2, a3, t0, t1, f12);
    goto L_08A1F314;
L_08A1F314:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F31C;
L_08A1F31C:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+84); goto L_08A1F33C; }
    goto L_08A1F32C;
L_08A1F32C:;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+272); goto L_08A1F0A0; }
    goto L_08A1F338;
L_08A1F338:;
    v0 = LD32(s1+84);
    goto L_08A1F33C;
L_08A1F33C:;
    v1 = LD32(s1+80);
    v0 = v0 + 1;
    v1 = (s32)v1 < (s32)v0 ? v1 : v0;
    ST32(s1+84, v1);
    goto L_08A1EE70;
L_08A1F350:;
    a0 = LD32(s1+304);
    v1 = LD32(a0);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+244);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F370;
L_08A1F370:;
    a0 = LD32(s1+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F388;
L_08A1F388:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(288);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {v[20]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[21]=BITSF(v0);}
    {v[33]=BITSF(a0);}
    v1 = LD32(sp+24);
    {v[34]=BITSF(a1);}
    {v[22]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    ST32(sp+56, FBITS(f5));
    {v0=FBITS(v[17]);}
    f3 = BITSF(v0);
    ST32(sp+48, FBITS(f1));
    ST32(sp+64, FBITS(f1));
    ST32(sp+52, v0);
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f5));
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f0 = f0 + f4;
    f2 = f2 + f5;
    f1 = f1 + f3;
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f2));
    goto L_08A1F07C;
}

/* 08A1F478 */
float func_08A1F478(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A1F478:;
    sp = sp - 128;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A1F4EC; }
    goto L_08A1F4B4;
L_08A1F4B4:;
    v0 = LD32(s0+296);
    goto L_08A1F4B8;
L_08A1F4B8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1F4C8; }
    goto L_08A1F4C0;
L_08A1F4C0:;
    v0 = v0 - 1;
    ST32(s0+296, v0);
    goto L_08A1F4C8;
L_08A1F4C8:;
    sp = sp + 128;
    return f0;
L_08A1F4EC:;
    a0 = 0x805e;
    a1 = 60;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1F500;
L_08A1F500:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A1F4B4; }
    goto L_08A1F508;
L_08A1F508:;
    s3 = LD32(v0+24);
    a1 = s0 + 0;
    a2 = 1;
    ST32(s3+4, s1);
    a0 = sp + 0;
    s1 = s3 + 28;
    ST32(s3+8, s2);
    f20 = BITSF(0);
    v0 = LD32(s0+152);
    ST32(s3+20, v0);
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1F534;
L_08A1F534:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    v1 = LD32(s0+304);
    ST32(s3+28, FBITS(f0));
    a0 = v1 + 0;
    f0 = BITSF(LD32(sp+8));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    a1 = LD32(v1);
    a2 = LD32(a1-16);
    v0 = LD32(a1+48);
    v1 = v1 + a2;
    t_ = v0;
    s2 = LD32(v1+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F56C;
L_08A1F56C:;
    s5 = v0 + 0;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(sp, FBITS(f0));
    a1 = sp + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+68);
    t_ = v0;
    a2 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F5A8;
L_08A1F5A8:;
    f0 = BITSF(LD32(s3+28));
    f1 = BITSF(LD32(s1+4));
    f5 = BITSF(LD32(s1+8));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08A1F644; }
    goto L_08A1F608;
L_08A1F608:;
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
    goto L_08A1F644;
L_08A1F644:;
    v0 = LD32(s0+364);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A1F768; }
    goto L_08A1F654;
L_08A1F654:;
    f1 = BITSF(LD32(s0+60));
    goto L_08A1F658;
L_08A1F658:;
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+4));
    ST32(s3+12, s5);
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(s3+16, s2);
    f0 = f0 * f1;
    v0 = s3 + 40;
    v1 = LD32(s0+296);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    ST32(s3+40, FBITS(f2));
    ST32(v0+4, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+8, FBITS(f3));
    if (cnd_) { goto L_08A1F6B4; }
    goto L_08A1F69C;
L_08A1F69C:;
    f1 = BITSF(LD32(s0+300));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A1F75C; }
    goto L_08A1F6B4;
L_08A1F6B4:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    goto L_08A1F6C0;
L_08A1F6C0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F6C8;
L_08A1F6C8:;
    f2 = BITSF(LD32(s0+112));
    f3 = BITSF(0);
    fcc = FCMP(f3, f2, 12);
    cnd_ = fcc;
    ST32(s3+52, v0);
    if (cnd_) { goto L_08A1F728; }
    goto L_08A1F6E0;
L_08A1F6E0:;
    v0 = D_08AEF93C - (-1732);
    f0 = BITSF(LD32(v0-1732));
    ST32(s3+56, FBITS(f0));
    goto L_08A1F6EC;
L_08A1F6EC:;
    a0 = s4 + 0;
    a1 = 1;
    v0 = LD_U8(s0+268);
    a2 = 1;
    ST8(s3, v0);
    v1 = LD_U8(s0+269);
    ST8(s3+24, v1);
    v0 = LD32(s4+28);
    ST32(s4, s2);
    v0 = v0 | 0x1;
    ST32(s4+28, v0);
    ST32(s4+4, s2);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F720;
L_08A1F720:;
    v0 = LD32(s0+296);
    goto L_08A1F4B8;
L_08A1F728:;
    f0 = BITSF(LD32(s0+108));
    v0 = D_08AEF93C - (-1732);
    f1 = BITSF(LD32(v0-1732));
    f0 = f0 / f2;
    a0 = sp + 32;
    a1 = sp + 36;
    a2 = sp + 40;
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A1F754;
L_08A1F754:;
    ST32(s3+56, FBITS(f0));
    goto L_08A1F6EC;
L_08A1F75C:;
    v1 = LD32(a0);
    v0 = LD32(v1+264);
    goto L_08A1F6C0;
L_08A1F768:;
    v1 = LD32(a0);
    v0 = LD32(v1+264);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F778;
L_08A1F778:;
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { f1 = BITSF(LD32(s0+60)); goto L_08A1F658; }
    goto L_08A1F784;
L_08A1F784:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+264);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F798;
L_08A1F798:;
    a0 = D_08C2C21C - (-15844);
    a0 = a0 - 15844;
    a1 = v0 + 0;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1F7AC;
L_08A1F7AC:;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08A1F654; }
    goto L_08A1F7B4;
L_08A1F7B4:;
    a0 = LD32(s0+304);
    a2 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+64);
    t_ = v0;
    a3 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F7CC;
L_08A1F7CC:;
    f0 = BITSF(LD32(s3+28));
    f5 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
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
    ST32(sp, FBITS(f4));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08A1F654; }
    goto L_08A1F82C;
L_08A1F82C:;
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
    goto L_08A1F654;
}

/* 08A1F86C */
void func_08A1F86C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A1F86C:;
    sp = sp - 16;
    f0 = BITSF(0);
    a2 = LD32(a0+304);
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    v0 = a2 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A1F954; }
    goto L_08A1F8A0;
L_08A1F8A0:;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+296); goto L_08A1F944; }
    goto L_08A1F8B0;
L_08A1F8B0:;
    v0 = 1;
    cnd_ = a1 == v0;
    v0 = D_08AEF940 - (-1728);
    if (cnd_) { goto L_08A1F998; }
    goto L_08A1F8BC;
L_08A1F8BC:;
    cnd_ = a1 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A1F8D4; }
    goto L_08A1F8C4;
L_08A1F8C4:;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A1F97C; }
    goto L_08A1F8CC;
L_08A1F8CC:;
    cnd_ = a1 == v0;
    v0 = D_08AEF940 - (-1728);
    if (cnd_) { goto L_08A1F964; }
    goto L_08A1F8D4;
L_08A1F8D4:;
    v0 = D_08AEF940 - (-1728);
    f12 = BITSF(LD32(v0-1728));
    a1 = LD32(s0+272);
    f13 = f12;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F8E8;
L_08A1F8E8:;
    a0 = 0x8067;
    goto L_08A1F8EC;
L_08A1F8EC:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1F8FC;
L_08A1F8FC:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A1F940; }
    goto L_08A1F904;
L_08A1F904:;
    a3 = LD32(s0+304);
    a0 = v0 + 0;
    a1 = 1;
    v1 = LD32(a3);
    a2 = 1;
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(t0, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F940;
L_08A1F940:;
    v0 = LD32(s0+296);
    goto L_08A1F944;
L_08A1F944:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1F958; }
    goto L_08A1F94C;
L_08A1F94C:;
    v0 = v0 - 1;
    ST32(s0+296, v0);
    goto L_08A1F954;
L_08A1F954:;
    goto L_08A1F958;
L_08A1F958:;
    sp = sp + 16;
    return;
L_08A1F964:;
    f12 = BITSF(LD32(v0-1728));
    a1 = LD32(a0+272);
    f13 = f12;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F974;
L_08A1F974:;
    a0 = 0x806a;
    goto L_08A1F8EC;
L_08A1F97C:;
    v0 = D_08AEF940 - (-1728);
    f12 = BITSF(LD32(v0-1728));
    a1 = LD32(a0+272);
    f13 = f12;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F990;
L_08A1F990:;
    a0 = 0x8069;
    goto L_08A1F8EC;
L_08A1F998:;
    f12 = BITSF(LD32(v0-1728));
    a1 = LD32(a0+272);
    f13 = f12;
    { rv_t r_ = func_08A1C0FC(a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1F9A8;
L_08A1F9A8:;
    a0 = 0x8068;
    goto L_08A1F8EC;
}

/* 08A1F9B0 */
float func_08A1F9B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[528] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 528);
L_08A1F9B0:;
    sp = sp - 528;
    a1 = a0 + 0;
    a2 = 1;
    s7 = D_08AEF944 - (-1724);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    s3 = a0 + 0;
    a0 = sp + 0;
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    s0 = sp + 64;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1FA0C;
L_08A1FA0C:;
    f0 = BITSF(LD32(s7-1724));
    a0 = LD32(s3+304);
    ST32(sp+32, 0);
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, 0);
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FA30;
L_08A1FA30:;
    {u32 a_=sp+(448);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+40);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(sp+16, v1);
    a2 = sp + 16;
    a1 = sp + 0;
    ST32(sp+24, FBITS(f3));
    t0 = 0 + 0;
    a0 = s0 + 0;
    ST32(sp+48, v1);
    ST32(sp+56, FBITS(f3));
    t1 = LD32(s3+304);
    ST32(sp+20, v0);
    ST32(sp+52, v0);
    v0 = LD32(t1);
    f12 = BITSF(LD32(s3+92));
    v1 = LD32(v0-16);
    t1 = t1 + v1;
    a3 = LD32(t1+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A1FB0C;
L_08A1FB0C:;
    a0 = s0 + 0;
    v0 = func_08834F00(a0);
    goto L_08A1FB14;
L_08A1FB14:;
    s4 = LD32(v0+4);
    s6 = v0 + 0;
    s5 = 0 < s4;
    cnd_ = s5 != 0;
    ST32(s3+264, s4);
    if (cnd_) { goto L_08A1FD1C; }
    goto L_08A1FB28;
L_08A1FB28:;
    s1 = D_08C2C200 - (-15872);
    s1 = s1 - 15872;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    s2 = sp + 128;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = func_08ABFBA4(a0, 0, 0, 0);
    goto L_08A1FB4C;
L_08A1FB4C:;
    v0 = LD32(s1+16);
    ST32(sp+128, s0);
    ST32(sp+132, v0);
    cnd_ = v0 == 0;
    ST32(sp+136, 0);
    if (cnd_) { goto L_08A1FB88; }
    goto L_08A1FB60;
L_08A1FB60:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A20388; }
    goto L_08A1FB6C;
L_08A1FB6C:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08A1FB88; }
    goto L_08A1FB78;
L_08A1FB78:;
    v0 = LD32(s2+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(s2+4, v1);
    if (cnd_) { goto L_08A1FB60; }
    goto L_08A1FB88;
L_08A1FB88:;
    v1 = LD32(sp+136);
    cnd_ = v1 == 0;
    v0 = D_08AEF948 - (-1720);
    if (cnd_) { goto L_08A1FD00; }
    goto L_08A1FB94;
L_08A1FB94:;
    f21 = BITSF(LD32(v0-1720));
    f20 = BITSF(0);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    s1 = 0 + 0;
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    s0 = LD32(v1);
    goto L_08A1FBAC;
L_08A1FBAC:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FBC8;
L_08A1FBC8:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f3 = f3 - f0;
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f4 = f4 - f1;
    f2 = f2 - f0;
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    a2 = FBITS(f4);
    v1 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a2);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f5 = BITSF(LD32(s3+92));
    a0 = s2 + 0;
    ST32(sp+52, FBITS(f2));
    ST32(sp+48, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f5, 12);
    cnd_ = !fcc;
    ST32(sp+56, FBITS(f4));
    if (cnd_) { goto L_08A1FCEC; }
    goto L_08A1FC38;
L_08A1FC38:;
    {u32 a_=sp+(320);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+16);
    {v[5]=BITSF(s1);}
    {v[8]=BITSF(v0);}
    {v[6]=BITSF(a2);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v1 = LD32(sp+20);
    a1 = LD32(sp+24);
    fcc = FCMP(f0, f20, 2);
    {v[9]=BITSF(v1);}
    ST32(sp+52, FBITS(f20));
    {v[10]=BITSF(a1);}
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    if (cnd_) { goto L_08A1FCB4; }
    goto L_08A1FC80;
L_08A1FC80:;
    {u32 a_=sp+(336);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[16];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
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
    goto L_08A1FCB4;
L_08A1FCB4:;
    v1 = LD32(sp+52);
    v0 = LD32(sp+48);
    a1 = LD32(sp+56);
    {u32 a_=sp+(352);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_08A20370; }
    goto L_08A1FCEC;
L_08A1FCEC:;
    func_08ABFDD0(a0);
    goto L_08A1FCF4;
L_08A1FCF4:;
    v1 = LD32(sp+136);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_08A1FBAC; }
    goto L_08A1FD00;
L_08A1FD00:;
    a0 = LD32(sp+128);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A20360; }
    goto L_08A1FD14;
L_08A1FD14:;
    cnd_ = s5 == 0;
    a1 = s3 + 220;
    if (cnd_) { goto L_08A20350; }
    goto L_08A1FD1C;
L_08A1FD1C:;
    a0 = LD32(s3+304);
    v1 = LD32(a0);
    v0 = LD32(v1+412);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FD30;
L_08A1FD30:;
    v1 = LD32(s3+8);
    cnd_ = v1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_08A2033C; }
    goto L_08A1FD3C;
L_08A1FD3C:;
    f0 = BITSF(LD32(s7-1724));
    goto L_08A1FD40;
L_08A1FD40:;
    f1 = BITSF(LD32(sp+4));
    a1 = LD32(s3+220);
    ST32(sp+56, FBITS(f0));
    v0 = (u32)-1;
    s1 = sp + 32;
    f0 = BITSF(LD32(sp));
    ST32(sp+36, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+48, 0);
    ST32(sp+40, FBITS(f0));
    cnd_ = a1 == v0;
    ST32(sp+52, 0);
    if (cnd_) { goto L_08A20320; }
    goto L_08A1FD74;
L_08A1FD74:;
    a0 = s3 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08A234FC(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FD80;
L_08A1FD80:;
    v0 = LD32(s3+364);
    goto L_08A1FD84;
L_08A1FD84:;
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+304); goto L_08A1FDD8; }
    goto L_08A1FD90;
L_08A1FD90:;
    v0 = LD32(s3+296);
    goto L_08A1FD94;
L_08A1FD94:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1FDA8; }
    goto L_08A1FD9C;
L_08A1FD9C:;
    v0 = v0 - 1;
    ST32(s3+296, v0);
    goto L_08A1FDA4;
L_08A1FDA4:;
    goto L_08A1FDA8;
L_08A1FDA8:;
    goto L_08A1FDAC;
L_08A1FDAC:;
    sp = sp + 528;
    return f0;
L_08A1FDD8:;
    a1 = sp + 144;
    v1 = LD32(a0);
    v0 = LD32(v1+68);
    t_ = v0;
    a2 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FDEC;
L_08A1FDEC:;
    f0 = BITSF(LD32(sp+32));
    f5 = BITSF(LD32(sp+144));
    f4 = BITSF(LD32(sp+148));
    f3 = BITSF(LD32(sp+152));
    f5 = f5 - f0;
    f0 = BITSF(LD32(sp+36));
    {u32 a_=sp+(384);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+40));
    v0 = FBITS(f5);
    {v[12]=BITSF(v0);}
    f3 = f3 - f0;
    v1 = FBITS(f4);
    {v[13]=BITSF(v1);}
    ST32(sp+160, FBITS(f5));
    v0 = FBITS(f3);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+164, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+168, FBITS(f3));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f3));
    if (cnd_) { goto L_08A1FE94; }
    goto L_08A1FE5C;
L_08A1FE5C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+160, v1);
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    goto L_08A1FE94;
L_08A1FE94:;
    s0 = sp + 176;
    a1 = sp + 48;
    a0 = s0 + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FEA4;
L_08A1FEA4:;
    a2 = LD32(s3+4);
    a0 = s1 + 0;
    a1 = s0 + 0;
    a3 = 0 + 0;
    t0 = 143;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FEBC;
L_08A1FEBC:;
    ST32(s3+8, v0);
    a0 = D_08C2B0A8 - (-20312);
    v0 = 999;
    cnd_ = s4 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08A20114; }
    goto L_08A1FED0;
L_08A1FED0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = s4 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A1FF20; }
    goto L_08A1FEF4;
L_08A1FEF4:;
    a0 = LD32(a1);
    goto L_08A1FEF8;
L_08A1FEF8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A20300; }
    goto L_08A1FF10;
L_08A1FF10:;
    a1 = LD32(a1+4);
    goto L_08A1FF14;
L_08A1FF14:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A1FEF8; }
    goto L_08A1FF1C;
L_08A1FF1C:;
    s0 = 0 + 0;
    goto L_08A1FF20;
L_08A1FF20:;
    cnd_ = s0 == 0;
    a0 = D_08C2A6C8 - (-22840);
    if (cnd_) { goto L_08A20118; }
    goto L_08A1FF28;
L_08A1FF28:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FF38;
L_08A1FF38:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1FF40;
L_08A1FF40:;
    s1 = v0 + 0;
    v0 = 2;
    cnd_ = s1 == v0;
    if (cnd_) { a0 = 0x8062; goto L_08A20094; }
    goto L_08A1FF50;
L_08A1FF50:;
    a0 = LD32(s3+304);
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A1FF64;
L_08A1FF64:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A1FF6C;
L_08A1FF6C:;
    cnd_ = v0 == s1;
    if (cnd_) { a0 = 0x8062; goto L_08A20094; }
    goto L_08A1FF74;
L_08A1FF74:;
    v0 = LD_U8(s0+444);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A1FF88; }
    goto L_08A1FF80;
L_08A1FF80:;
    v0 = LD32(s0+852);
    v1 = (v0 >> 5) & 0x1;
    goto L_08A1FF88;
L_08A1FF88:;
    v0 = v1 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A1FDA8; }
    goto L_08A1FF94;
L_08A1FF94:;
    v0 = LD32(s3+184);
    cnd_ = v0 == s4;
    if (cnd_) { v1 = LD32(s3+364); goto L_08A1FFCC; }
    goto L_08A1FFA0;
L_08A1FFA0:;
    v0 = LD32(s0+844);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A1FDAC; }
    goto L_08A1FFB0;
L_08A1FFB0:;
    v0 = LD32(s3+364);
    v1 = 0x40000u;
    ST32(s3+184, s4);
    v0 = v0 | v1;
    ST32(s3+364, v0);
    goto L_08A1FFC4;
L_08A1FFC4:;
    ST32(s3+176, 0);
    goto L_08A1FDA4;
L_08A1FFCC:;
    a0 = 0x40000u;
    v0 = v1 & a0;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s3+176)); goto L_08A1FFE8; }
    goto L_08A1FFDC;
L_08A1FFDC:;
    v0 = v1 | a0;
    ST32(s3+364, v0);
    f0 = BITSF(LD32(s3+176));
    goto L_08A1FFE8;
L_08A1FFE8:;
    f1 = BITSF(LD32(s3+172));
    v0 = D_08AEF94C - (-1716);
    f20 = BITSF(LD32(v0-1716));
    f0 = f0 + f1;
    a0 = sp + 224;
    a1 = sp + 228;
    a2 = sp + 232;
    ST32(sp+224, FBITS(f0));
    ST32(sp+228, 0);
    ST32(sp+232, FBITS(f20));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A20014;
L_08A20014:;
    fcc = FCMP(f20, f0, 14);
    ST32(sp+224, FBITS(f0));
    cnd_ = !fcc;
    ST32(s3+176, FBITS(f0));
    if (cnd_) { goto L_08A1FDA4; }
    goto L_08A20024;
L_08A20024:;
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 48;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20038;
L_08A20038:;
    a0 = 0x8046;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2004C;
L_08A2004C:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A1FDA4; }
    goto L_08A20054;
L_08A20054:;
    ST32(v0, s4);
    a0 = v0 + 0;
    a1 = 1;
    v0 = LD32(s3+304);
    a2 = 1;
    v1 = LD32(v0);
    a3 = LD32(v1-16);
    v0 = v0 + a3;
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20080;
L_08A20080:;
    v0 = LD32(s3+364);
    ST32(s3+176, 0);
    v0 = (v0 & ~(0x1u << 18)) | ((0 & 0x1) << 18);
    ST32(s3+364, v0);
    goto L_08A1FDA4;
L_08A20094:;
    a1 = 12;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A200A4;
L_08A200A4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A1FFC4; }
    goto L_08A200AC;
L_08A200AC:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s0, s4); goto L_08A200F0; }
    goto L_08A200B8;
L_08A200B8:;
    f0 = BITSF(LD32(s3+168));
    a2 = LD32(s3+304);
    ST32(s1+8, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s1, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A200E8;
L_08A200E8:;
    ST32(s1+4, v0);
    ST32(s0, s4);
    goto L_08A200F0;
L_08A200F0:;
    a0 = s0 + 0;
    a1 = 1;
    v0 = LD32(s1);
    a2 = 1;
    ST32(s0+4, v0);
    goto L_08A20104;
L_08A20104:;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2010C;
L_08A2010C:;
    ST32(s3+176, 0);
    goto L_08A1FDA4;
L_08A20114:;
    a0 = D_08C2A6C8 - (-22840);
    goto L_08A20118;
L_08A20118:;
    a0 = a0 - 22840;
    a1 = s4 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20128;
L_08A20128:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A201FC; }
    goto L_08A20130;
L_08A20130:;
    a0 = LD32(s3+304);
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20144;
L_08A20144:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2014C;
L_08A2014C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20160;
L_08A20160:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20168;
L_08A20168:;
    cnd_ = s0 == v0;
    a0 = 0x8001;
    if (cnd_) { goto L_08A1FDA4; }
    goto L_08A20170;
L_08A20170:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20180;
L_08A20180:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A1FFC4; }
    goto L_08A20188;
L_08A20188:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1, s4); goto L_08A201E4; }
    goto L_08A20194;
L_08A20194:;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_08A2019C;
L_08A2019C:;
    f0 = BITSF(LD32(s3+36));
    a2 = LD32(s3+304);
    ST32(s0+12, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A201CC;
L_08A201CC:;
    ST32(s0+8, v0);
    v0 = LD32(s6+8);
    ST32(s0+20, v0);
    v1 = LD32(s6+12);
    ST32(s0+16, v1);
    ST32(s1, s4);
    goto L_08A201E4;
L_08A201E4:;
    a0 = s1 + 0;
    a1 = 1;
    v0 = LD32(s0+4);
    a2 = 1;
    ST32(s1+4, v0);
    goto L_08A20104;
L_08A201FC:;
    a0 = D_08C2B60C - (-18932);
    v0 = 999;
    cnd_ = s4 == v0;
    v1 = a0 - 18932;
    if (cnd_) { goto L_08A1FD90; }
    goto L_08A2020C;
L_08A2020C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-18932);
    v0 = v0 - 1;
    v0 = s4 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2025C; }
    goto L_08A20230;
L_08A20230:;
    a0 = LD32(a1);
    goto L_08A20234;
L_08A20234:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A202E0; }
    goto L_08A2024C;
L_08A2024C:;
    a1 = LD32(a1+4);
    goto L_08A20250;
L_08A20250:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A20234; }
    goto L_08A20258;
L_08A20258:;
    v1 = 0 + 0;
    goto L_08A2025C;
L_08A2025C:;
    cnd_ = v1 == 0;
    a0 = 0x8062;
    if (cnd_) { goto L_08A1FD90; }
    goto L_08A20264;
L_08A20264:;
    a1 = 12;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20274;
L_08A20274:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A1FD90; }
    goto L_08A2027C;
L_08A2027C:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s0, s4); goto L_08A202C0; }
    goto L_08A20288;
L_08A20288:;
    f0 = BITSF(LD32(s3+164));
    a2 = LD32(s3+304);
    ST32(s1+8, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s1, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A202B8;
L_08A202B8:;
    ST32(s1+4, v0);
    ST32(s0, s4);
    goto L_08A202C0;
L_08A202C0:;
    a0 = s0 + 0;
    a1 = 1;
    v0 = LD32(s1);
    a2 = 1;
    ST32(s0+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A202D8;
L_08A202D8:;
    v0 = LD32(s3+296);
    goto L_08A1FD94;
L_08A202E0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A2024C; }
    goto L_08A202EC;
L_08A202EC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A20250; }
    goto L_08A202F8;
L_08A202F8:;
    goto L_08A2025C;
L_08A20300:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A1FF10; }
    goto L_08A2030C;
L_08A2030C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A1FF14; }
    goto L_08A20318;
L_08A20318:;
    goto L_08A1FF20;
L_08A20320:;
    a1 = LD32(s3+212);
    a3 = s3 + 220;
    a0 = s3 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20334;
L_08A20334:;
    v0 = LD32(s3+364);
    goto L_08A1FD84;
L_08A2033C:;
    a1 = s3 + 8;
    a0 = a0 + 2908;
    func_088E89F8(a0, a1);
    goto L_08A20348;
L_08A20348:;
    f0 = BITSF(LD32(s7-1724));
    goto L_08A1FD40;
L_08A20350:;
    a0 = s3 + 0;
    { rv_t r_ = func_08A23554(a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20358;
L_08A20358:;
    goto L_08A1FDA8;
L_08A20360:;
    func_08ABFCF4(a0, 0, 0, 0);
    goto L_08A20368;
L_08A20368:;
    goto L_08A1FD14;
L_08A20370:;
    s5 = 1;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    s4 = LD32(v0+4);
    ST32(s3+264, s4);
    goto L_08A1FD00;
L_08A20388:;
    v1 = LD32(v0+8);
    ST32(s2+8, v1);
    goto L_08A1FB88;
}

/* 08A20394 */
float func_08A20394(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A20394:;
    sp = sp - 48;
    v0 = LD32(a0+308);
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A203D0; }
    goto L_08A203C0;
L_08A203C0:;
    v0 = LD32(a0+364);
    v0 = (v0 >> 13) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0+304); goto L_08A203F0; }
    goto L_08A203D0;
L_08A203D0:;
    goto L_08A203D4;
L_08A203D4:;
    sp = sp + 48;
    return f0;
L_08A203F0:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a1 = LD32(v1);
    a2 = 1;
    v0 = LD32(a1-16);
    v1 = v1 + v0;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20410;
L_08A20410:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A203D0; }
    goto L_08A20418;
L_08A20418:;
    v0 = LD32(s0+160);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A20490; }
    goto L_08A20424;
L_08A20424:;
    s2 = v0 + 0;
    ST32(s0+160, 0);
    goto L_08A2042C;
L_08A2042C:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A203D4; }
    goto L_08A20434;
L_08A20434:;
    a0 = LD32(s0+304);
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2043C;
L_08A2043C:;
    cnd_ = v0 == 0;
    v0 = D_08C2CC0C - (-13300);
    if (cnd_) { goto L_08A20458; }
    goto L_08A20444;
L_08A20444:;
    v0 = LD32(s0+160);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+160, s2); goto L_08A203D0; }
    goto L_08A20450;
L_08A20450:;
    goto L_08A203D4;
L_08A20458:;
    v1 = v0 - 13300;
    ST32(v1+12, s2);
    a0 = 0xb1bc0000u;
    a0 = a0 | 0x8e33;
    ST32(v0-13300, 0);
    a1 = a0 + 0;
    a2 = v1 + 0;
    ST32(v1+8, 0);
    ST32(v1+4, a0);
    v0 = LD32(s0+304);
    a0 = LD32(v0+88);
    f0 = func_089DF378(a0, a1, a2);
    goto L_08A20488;
L_08A20488:;
    goto L_08A203D4;
L_08A20490:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+248);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A204A4;
L_08A204A4:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A204CC; }
    goto L_08A204AC;
L_08A204AC:;
    a1 = LD32(s0+156);
    goto L_08A204B0;
L_08A204B0:;
    v1 = LD32(s0+296);
    v0 = a1 + 1;
    cnd_ = v1 == 0;
    ST32(s0+156, v0);
    if (cnd_) { goto L_08A2042C; }
    goto L_08A204C0;
L_08A204C0:;
    v0 = v1 - 1;
    ST32(s0+296, v0);
    goto L_08A2042C;
L_08A204CC:;
    v1 = LD32(a0);
    v0 = LD32(v1+248);
    t_ = v0;
    s4 = D_08ADF01C - (-4068);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A204DC;
L_08A204DC:;
    s3 = v0 + 0;
    v0 = LD32(s0+156);
    a0 = s4 - 4068;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0+156, 0); goto L_08A204FC; }
    goto L_08A204FC;
L_08A204FC:;
    v1 = LD32(s1);
    v0 = LD32(v1+452);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2050C;
L_08A2050C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A20768; }
    goto L_08A20514;
L_08A20514:;
    v0 = LD32(s1+520);
    goto L_08A20518;
L_08A20518:;
    v0 = (v0 >> 15) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A206D8; }
    goto L_08A20524;
L_08A20524:;
    cnd_ = s2 != 0;
    if (cnd_) { a1 = LD32(s0+156); goto L_08A204B0; }
    goto L_08A2052C;
L_08A2052C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20540;
L_08A20540:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+456);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20554;
L_08A20554:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+304); goto L_08A20664; }
    goto L_08A2055C;
L_08A2055C:;
    cnd_ = s2 != 0;
    if (cnd_) { a1 = LD32(s0+156); goto L_08A204B0; }
    goto L_08A20564;
L_08A20564:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+288);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20578;
L_08A20578:;
    a1 = LD32(s0+156);
    v1 = LD32(s3+56);
    a3 = v0 + 0;
    a0 = s4 - 4068;
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = a3 < v1;
    a2 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 3507;
    if (cnd_) { goto L_08A205DC; }
    goto L_08A205A0;
L_08A205A0:;
    v0 = LD32(s3+60);
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A205E0; }
    goto L_08A205B0;
L_08A205B0:;
    v0 = LD32(s3+64);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A205E0; }
    goto L_08A205C0;
L_08A205C0:;
    v0 = a3 << 2;
    v0 = v0 + s3;
    a0 = LD32(v0+4);
    v1 = a2 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a0 = LD32(v0);
    goto L_08A205DC;
L_08A205DC:;
    v0 = 3507;
    goto L_08A205E0;
L_08A205E0:;
    cnd_ = a0 != v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A204B0; }
    goto L_08A205E8;
L_08A205E8:;
    a0 = LD32(s0+304);
    ST32(s0+156, 0);
    v1 = LD32(a0);
    v0 = LD32(v1+288);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20600;
L_08A20600:;
    a1 = LD32(s0+156);
    v1 = LD32(s3+56);
    a3 = v0 + 0;
    a0 = s4 - 4068;
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = a3 < v1;
    a2 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 3507;
    if (cnd_) { goto L_08A2065C; }
    goto L_08A20628;
L_08A20628:;
    v0 = LD32(s3+60);
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A204B0; }
    goto L_08A20638;
L_08A20638:;
    v0 = LD32(s3+64);
    cnd_ = v0 == 0;
    v0 = a3 << 2;
    if (cnd_) { goto L_08A204B0; }
    goto L_08A20644;
L_08A20644:;
    v0 = v0 + s3;
    a0 = LD32(v0+4);
    v1 = a2 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a0 = LD32(v0);
    goto L_08A2065C;
L_08A2065C:;
    s2 = a0 + 0;
    goto L_08A204B0;
L_08A20664:;
    v1 = LD32(a0);
    v0 = LD32(v1+288);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20674;
L_08A20674:;
    a1 = v0 + 0;
    v0 = LD32(s3+56);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    a0 = 3507;
    if (cnd_) { goto L_08A206C0; }
    goto L_08A20688;
L_08A20688:;
    v1 = LD32(s3+60);
    v0 = 24;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A206C4; }
    goto L_08A2069C;
L_08A2069C:;
    v0 = LD32(s3+64);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A206C4; }
    goto L_08A206AC;
L_08A206AC:;
    v0 = a1 << 2;
    v0 = v0 + s3;
    v1 = LD32(v0+4);
    a0 = LD32(v1+96);
    a0 = LD32(a0);
    goto L_08A206C0;
L_08A206C0:;
    v0 = 3507;
    goto L_08A206C4;
L_08A206C4:;
    cnd_ = a0 != v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A2055C; }
    goto L_08A206CC;
L_08A206CC:;
    ST32(s0+156, 0);
    s2 = 0 + 0;
    goto L_08A2055C;
L_08A206D8:;
    v1 = LD32(a0);
    v0 = LD32(v1+288);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A206E8;
L_08A206E8:;
    a1 = LD32(s0+156);
    a0 = LD32(s3+56);
    a2 = v0 + 0;
    v0 = D_08ADF034 - (-4044);
    v1 = a1 << 2;
    v0 = v0 - 4044;
    v1 = v1 + v0;
    a0 = a2 < a0;
    v1 = LD32(v1);
    cnd_ = a0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_08A20750; }
    goto L_08A20714;
L_08A20714:;
    v0 = LD32(s3+60);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A20754; }
    goto L_08A20724;
L_08A20724:;
    v0 = LD32(s3+64);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A20754; }
    goto L_08A20734;
L_08A20734:;
    v0 = a2 << 2;
    v0 = v0 + s3;
    a0 = LD32(v0+4);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v0 = LD32(v1);
    a1 = LD32(v0);
    goto L_08A20750;
L_08A20750:;
    v0 = 3507;
    goto L_08A20754;
L_08A20754:;
    cnd_ = a1 != v0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08A20524; }
    goto L_08A2075C;
L_08A2075C:;
    ST32(s0+156, 0);
    s2 = 0 + 0;
    goto L_08A20524;
L_08A20768:;
    v1 = LD32(a0);
    v0 = LD32(v1+288);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20778;
L_08A20778:;
    a1 = v0 + 0;
    v0 = LD32(s3+56);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    a0 = 3507;
    if (cnd_) { goto L_08A207C0; }
    goto L_08A2078C;
L_08A2078C:;
    v1 = LD32(s3+60);
    v0 = 22;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A207C4; }
    goto L_08A207A0;
L_08A207A0:;
    v0 = LD32(s3+64);
    cnd_ = v0 == 0;
    v0 = 3507;
    if (cnd_) { goto L_08A207C4; }
    goto L_08A207AC;
L_08A207AC:;
    v0 = a1 << 2;
    v0 = v0 + s3;
    v1 = LD32(v0+4);
    a0 = LD32(v1+88);
    a0 = LD32(a0);
    goto L_08A207C0;
L_08A207C0:;
    v0 = 3507;
    goto L_08A207C4;
L_08A207C4:;
    cnd_ = a0 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A207DC; }
    goto L_08A207CC;
L_08A207CC:;
    cnd_ = s2 != 0;
    if (cnd_) { a1 = LD32(s0+156); goto L_08A204B0; }
    goto L_08A207D4;
L_08A207D4:;
    v0 = LD32(s1+520);
    goto L_08A20518;
L_08A207DC:;
    ST32(s0+156, 0);
    s2 = 0 + 0;
    goto L_08A207CC;
}

/* 08A207E8 */
void func_08A207E8(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_08A207E8:;
    v0 = LD32(a0+160);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+156, 0); goto L_08A207F4; }
    goto L_08A207F4;
L_08A207F4:;
    return;
}

/* 08A207FC */
void func_08A207FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A207FC:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = LD32(a0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20824;
L_08A20824:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+304); goto L_08A20840; }
    goto L_08A2082C;
L_08A2082C:;
    goto L_08A20830;
L_08A20830:;
    sp = sp + 48;
    return;
L_08A20840:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20854;
L_08A20854:;
    v1 = LD32(v0+308);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A20830; }
    goto L_08A20860;
L_08A20860:;
    v0 = LD32(s0+304);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+228);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20878;
L_08A20878:;
    v1 = LD32(v0+308);
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    a0 = a0 | 0xc21c;
    if (cnd_) { goto L_08A2082C; }
    goto L_08A20890;
L_08A20890:;
    a1 = LD32(s0+152);
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2089C;
L_08A2089C:;
    v0 = D_08AEF950 - (-1712);
    f12 = BITSF(LD32(v0-1712));
    a0 = LD32(sp);
    a1 = 0x8ee80000u;
    a1 = a1 | 0xd26f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A208B4;
L_08A208B4:;
    v0 = LD32(s0+364);
    f20 = f0;
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    f12 = f0;
    if (cnd_) { goto L_08A208E8; }
    goto L_08A208C8;
L_08A208C8:;
    a0 = LD32(s0+304);
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A208D0;
L_08A208D0:;
    a2 = LD32(s0+304);
    a0 = s0 + 0;
    a1 = 8;
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A208E0;
L_08A208E0:;
    goto L_08A20830;
L_08A208E8:;
    a1 = LD32(s0+304);
    v0 = LD32(a1);
    v1 = LD32(v0+344);
    t_ = v1;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A208FC;
L_08A208FC:;
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    f12 = f20;
    if (cnd_) { goto L_08A2082C; }
    goto L_08A2090C;
L_08A2090C:;
    a0 = LD32(s0+304);
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20914;
L_08A20914:;
    a2 = LD32(s0+304);
    a0 = s0 + 0;
    a1 = 8;
    { rv_t r_ = func_08A1C248(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20924;
L_08A20924:;
    a1 = LD32(s0+16);
    a2 = LD32(s0+20);
    a0 = s0 + 0;
    f0 = func_08A1F478(a0, a1, a2, 0, 0);
    goto L_08A20934;
L_08A20934:;
    goto L_08A20830;
}

/* 08A2093C */
void func_08A2093C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2093C:;
    sp = sp - 16;
    a1 = 0xb1bc0000u;
    a1 = a1 | 0x8e33;
    v0 = LD32(a0+304);
    s1 = LD32(v0+88);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A20974; }
    goto L_08A20964;
L_08A20964:;
    v0 = func_089DF3B8(a0, a1);
    goto L_08A2096C;
L_08A2096C:;
    cnd_ = v0 == 0;
    a0 = 152;
    if (cnd_) { goto L_08A20988; }
    goto L_08A20974;
L_08A20974:;
    goto L_08A20978;
L_08A20978:;
    sp = sp + 16;
    return;
L_08A20988:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20990;
L_08A20990:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_089A4050(a0, a1);
    goto L_08A209A0;
L_08A209A0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_089DF074(a0, a1, 0, 0, 0);
    goto L_08A209AC;
L_08A209AC:;
    goto L_08A20978;
}

/* 08A209B4 */
void func_08A209B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A209B4:;
    v0 = 0xf4a20000u;
    sp = sp - 48;
    v1 = a1 + 0;
    v0 = v0 | 0xac2b;
    a1 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A20A9C; }
    goto L_08A209D8;
L_08A209D8:;
    v0 = LD32(a0+4);
    a0 = 0x5f6b0000u;
    a0 = a0 | 0x9be0;
    a2 = sp + 16;
    cnd_ = v0 != 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_08A20A00; }
    goto L_08A209F0;
L_08A209F0:;
    goto L_08A209F4;
L_08A209F4:;
    sp = sp + 48;
    return;
L_08A20A00:;
    a1 = LD32(s0+20);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20A08;
L_08A20A08:;
    a1 = 0xaf3e0000u;
    a1 = a1 | 0xbdcc;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_08A209F0; }
    goto L_08A20A18;
L_08A20A18:;
    a0 = LD32(sp+16);
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A20A20;
L_08A20A20:;
    v1 = v0 >> 24;
    f6 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f1 = BITSF(v1);
    f2 = BITSF(v0);
    f3 = (float)(s32)FBITS(f0);
    f4 = (float)(s32)FBITS(f1);
    f5 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f6);
    v0 = D_08AEF954 - (-1708);
    f0 = BITSF(LD32(v0-1708));
    a0 = LD32(s0+4);
    a1 = LD32(s0+152);
    f1 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    a2 = sp + 0;
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f5));
    ST32(sp+12, FBITS(f1));
    v0 = func_089FB4AC(a0, a1, a2, 0, 0, 0);
    goto L_08A20A88;
L_08A20A88:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A209F4; }
    goto L_08A20A90;
L_08A20A90:;
    v0 = LD32(s0+152);
    ST32(s0+4, v0);
    goto L_08A209F4;
L_08A20A9C:;
    func_08A2093C(a0);
    goto L_08A20AA4;
L_08A20AA4:;
    goto L_08A209F4;
}

/* 08A20AAC */
u32 func_08A20AAC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A20AAC:;
    sp = sp - 48;
    s2 = a0 + 0;
    a2 = sp + 0;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20AE8;
L_08A20AE8:;
    a1 = 0x7e770000u;
    a0 = LD32(sp);
    a1 = a1 | 0x9b80;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20AFC;
L_08A20AFC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A20BD0; }
    goto L_08A20B04;
L_08A20B04:;
    v0 = LD32(s2+304);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    s5 = LD32(v0+100);
    cnd_ = s5 == 0;
    if (cnd_) { v1 = LD32(s2+20); goto L_08A20B9C; }
    goto L_08A20B20;
L_08A20B20:;
    v0 = LD32(s2+12);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2+20); goto L_08A20B9C; }
    goto L_08A20B2C;
L_08A20B2C:;
    v1 = LD32(s2+364);
    v0 = (v1 >> 13) & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08ADF008 - (-4088);
    if (cnd_) { goto L_08A20CB0; }
    goto L_08A20B3C;
L_08A20B3C:;
    v0 = D_08ADF00C - (-4084);
    a1 = LD32(v0-4084);
    goto L_08A20B44;
L_08A20B44:;
    v0 = (v1 >> 13) & 0x1;
    cnd_ = v0 == 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08A20CA4; }
    goto L_08A20B50;
L_08A20B50:;
    v0 = D_08ADF014 - (-4076);
    a2 = LD32(v0-4076);
    goto L_08A20B58;
L_08A20B58:;
    v0 = v1 & 0x100;
    cnd_ = v0 == 0;
    s4 = a2 + 0;
    if (cnd_) { goto L_08A20B80; }
    goto L_08A20B64;
L_08A20B64:;
    v0 = (v1 >> 13) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+308); goto L_08A20B84; }
    goto L_08A20B70;
L_08A20B70:;
    s3 = 0x10ed0000u;
    s4 = 0x2e0000u;
    s3 = s3 | 0xd4e;
    s4 = s4 | 0x150b;
    goto L_08A20B80;
L_08A20B80:;
    a0 = LD32(s2+308);
    goto L_08A20B84;
L_08A20B84:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A20C4C; }
    goto L_08A20B8C;
L_08A20B8C:;
    v0 = LD32(a0+4);
    goto L_08A20B90;
L_08A20B90:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+56); goto L_08A20C20; }
    goto L_08A20B98;
L_08A20B98:;
    v1 = LD32(s2+20);
    goto L_08A20B9C;
L_08A20B9C:;
    v0 = 0xf4a20000u;
    v0 = v0 | 0xac2b;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A20C10; }
    goto L_08A20BAC;
L_08A20BAC:;
    v0 = 0xf3030000u;
    v0 = v0 | 0x830d;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A20C00; }
    goto L_08A20BBC;
L_08A20BBC:;
    v0 = 0xf9b70000u;
    v0 = v0 | 0x706b;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A20BF0; }
    goto L_08A20BCC;
L_08A20BCC:;
    goto L_08A20BD0;
L_08A20BD0:;
    sp = sp + 48;
    return v0;
L_08A20BF0:;
    a0 = s2 + 0;
    v0 = func_08A211EC(a0);
    goto L_08A20BF8;
L_08A20BF8:;
    goto L_08A20BD0;
L_08A20C00:;
    a0 = s2 + 0;
    func_08A2107C(a0);
    goto L_08A20C08;
L_08A20C08:;
    v1 = LD32(s2+20);
    goto L_08A20BBC;
L_08A20C10:;
    a0 = s2 + 0;
    func_08A20DFC(a0);
    goto L_08A20C18;
L_08A20C18:;
    v1 = LD32(s2+20);
    goto L_08A20BAC;
L_08A20C20:;
    a2 = LD32(a0);
    v1 = 0x40000000u;
    v0 = v0 | v1;
    ST32(a0+56, v0);
    a1 = s5 + 0;
    a3 = 0 + 0;
    v0 = LD32(a2+12);
    t_ = v0;
    a2 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20C44;
L_08A20C44:;
    v1 = LD32(s2+20);
    goto L_08A20B9C;
L_08A20C4C:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20C54;
L_08A20C54:;
    a1 = LD32(s2+12);
    a0 = v0 + 0;
    s1 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20C64;
L_08A20C64:;
    a0 = 76;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20C6C;
L_08A20C6C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 1;
    { u64 r_ = func_0880E7B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20C80;
L_08A20C80:;
    ST32(s2+308, s0);
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_0880D928(a0, a1);
    goto L_08A20C90;
L_08A20C90:;
    a0 = LD32(s2+308);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s2+20); goto L_08A20B9C; }
    goto L_08A20C9C;
L_08A20C9C:;
    v0 = LD32(a0+4);
    goto L_08A20B90;
L_08A20CA4:;
    v0 = D_08ADF010 - (-4080);
    a2 = LD32(v0-4080);
    goto L_08A20B58;
L_08A20CB0:;
    a1 = LD32(v0-4088);
    goto L_08A20B44;
}

/* 08A20CB8 */
void func_08A20CB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A20CB8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a0+308);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A20CEC; }
    goto L_08A20CD8;
L_08A20CD8:;
    goto L_08A20CDC;
L_08A20CDC:;
    sp = sp + 16;
    return;
L_08A20CEC:;
    v1 = LD32(v1);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20CFC;
L_08A20CFC:;
    v1 = LD32(s0+308);
    s1 = v0 + 0;
    a1 = 1;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A20D50; }
    goto L_08A20D14;
L_08A20D14:;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0+308, 0); goto L_08A20D30; }
    goto L_08A20D1C;
L_08A20D1C:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20D2C;
L_08A20D2C:;
    ST32(s0+308, 0);
    goto L_08A20D30;
L_08A20D30:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A20CD8; }
    goto L_08A20D38;
L_08A20D38:;
    v0 = LD32(s1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20D48;
L_08A20D48:;
    goto L_08A20CDC;
L_08A20D50:;
    { rv_t r_ = func_0880D8EC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20D58;
L_08A20D58:;
    ST32(s0+308, 0);
    goto L_08A20D30;
}

/* 08A20D60 */
rv_t func_08A20D60(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A20D60:;
    sp = sp - 16;
    a3 = LD32(a0+308);
    cnd_ = a3 == 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A20D88; }
    goto L_08A20D74;
L_08A20D74:;
    cnd_ = a1 == 0;
    v0 = LD32(a3+4);
    if (cnd_) { goto L_08A20DA4; }
    goto L_08A20D7C;
L_08A20D7C:;
    a0 = a3 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A20D94; }
    goto L_08A20D88;
L_08A20D88:;
    goto L_08A20D8C;
L_08A20D8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A20D94:;
    { rv_t r_ = func_0880D8EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20D9C;
L_08A20D9C:;
    goto L_08A20D8C;
L_08A20DA4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A20D8C; }
    goto L_08A20DAC;
L_08A20DAC:;
    v0 = LD32(a0+364);
    v0 = v0 & 0x100;
    cnd_ = v0 == 0;
    v0 = D_08ADF010 - (-4080);
    if (cnd_) { goto L_08A20DF4; }
    goto L_08A20DBC;
L_08A20DBC:;
    v0 = D_08ADF018 - (-4072);
    a2 = LD32(v0-4072);
    goto L_08A20DC4;
L_08A20DC4:;
    t0 = LD32(a0+304);
    v1 = LD32(a3);
    a0 = a3 + 0;
    a1 = LD32(t0);
    v0 = LD32(v1+12);
    a3 = 0 + 0;
    v1 = LD32(a1-12);
    t0 = t0 + v1;
    t_ = v0;
    a1 = LD32(t0+100);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20DEC;
L_08A20DEC:;
    goto L_08A20D8C;
L_08A20DF4:;
    a2 = LD32(v0-4080);
    goto L_08A20DC4;
}

/* 08A20DFC */
void func_08A20DFC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A20DFC:;
    sp = sp - 128;
    s2 = a0 + 0;
    a2 = sp + 64;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    ST32(sp+64, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20E40;
L_08A20E40:;
    a0 = LD32(s2+308);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A20E78; }
    goto L_08A20E4C;
L_08A20E4C:;
    goto L_08A20E50;
L_08A20E50:;
    sp = sp + 128;
    return;
L_08A20E78:;
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20E84;
L_08A20E84:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A20E50; }
    goto L_08A20E8C;
L_08A20E8C:;
    v1 = D_08ADEE5C - (-4516);
    v0 = v1 - 4516;
    a2 = LD32(v1-4516);
    t2 = LD32(v0+20);
    v1 = LD32(v0+4);
    a3 = LD32(v0+8);
    t0 = LD32(v0+12);
    t1 = LD32(v0+16);
    v0 = D_08AEF958 - (-1704);
    f12 = BITSF(LD32(v0-1704));
    a0 = LD32(sp+64);
    a1 = 0xc3f10000u;
    a1 = a1 | 0xf774;
    ST32(sp+4, v1);
    s5 = 0 + 0;
    ST32(sp, a2);
    ST32(sp+8, a3);
    ST32(sp+12, t0);
    ST32(sp+16, t1);
    ST32(sp+20, t2);
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20EE0;
L_08A20EE0:;
    v0 = D_08AEF960 - (-1696);
    f12 = BITSF(LD32(v0-1696));
    v0 = D_08AEF95C - (-1700);
    f1 = BITSF(LD32(v0-1700));
    a0 = LD32(sp+64);
    a1 = 0xbe0e0000u;
    a1 = a1 | 0x3ae6;
    f21 = f0 * f1;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A20F04;
L_08A20F04:;
    a0 = LD32(sp+64);
    a1 = 0xaf3e0000u;
    a1 = a1 | 0xbdcc;
    a2 = (u32)-1;
    f20 = f0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A20F1C;
L_08A20F1C:;
    v1 = v0 >> 24;
    f6 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f1 = BITSF(v1);
    f5 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f3 = (float)(s32)FBITS(f1);
    v0 = D_08AEF964 - (-1692);
    f4 = (float)(s32)FBITS(f5);
    f1 = (float)(s32)FBITS(f6);
    f0 = BITSF(LD32(v0-1692));
    v0 = LD32(sp);
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    ST32(sp+44, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    cnd_ = v0 == 0;
    ST32(sp+32, FBITS(f4));
    if (cnd_) { goto L_08A20E4C; }
    goto L_08A20F7C;
L_08A20F7C:;
    s3 = sp + 48;
    a1 = 0 + 0;
    a0 = s3 + 0;
    goto L_08A20F88;
L_08A20F88:;
    s1 = a1 + sp;
    ST32(sp+48, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_08A20F94;
L_08A20F94:;
    a2 = s3 + 0;
    a0 = LD32(sp+64);
    a1 = LD32(s1+4);
    v0 = func_0881BA44(a0, a1, a2);
    goto L_08A20FA4;
L_08A20FA4:;
    a2 = 0x5970000u;
    a2 = a2 | 0x9018;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A20FDC; }
    goto L_08A20FB4;
L_08A20FB4:;
    s5 = s5 + 1;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20FBC;
L_08A20FBC:;
    v0 = s5 << 3;
    v1 = v0 + sp;
    a1 = v0 + 0;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_08A20F88; }
    goto L_08A20FD4;
L_08A20FD4:;
    goto L_08A20E50;
L_08A20FDC:;
    a0 = LD32(sp+64);
    a1 = LD32(s1+4);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A20FE8;
L_08A20FE8:;
    s4 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = 984;
    if (cnd_) { goto L_08A20FFC; }
    goto L_08A20FF4;
L_08A20FF4:;
    a0 = s3 + 0;
    goto L_08A20FB4;
L_08A20FFC:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21004;
L_08A21004:;
    v1 = LD32(s2+304);
    s0 = v0 + 0;
    a0 = LD32(s2+308);
    a1 = LD32(v1);
    f12 = f21;
    a3 = LD32(a0+16);
    v0 = LD32(a1-16);
    f13 = f20;
    a1 = sp + 32;
    v1 = v1 + v0;
    a2 = LD32(v1+4);
    a0 = s0 + 0;
    func_08967B44(a0, a1, a2, a3, f12, f13);
    goto L_08A21038;
L_08A21038:;
    a1 = LD32(s1);
    a0 = s0 + 0;
    func_0880D928(a0, a1);
    goto L_08A21044;
L_08A21044:;
    a0 = LD32(s2+308);
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21058;
L_08A21058:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    a2 = s4 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21074;
L_08A21074:;
    a0 = s3 + 0;
    goto L_08A20FB4;
}

/* 08A2107C */
void func_08A2107C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f13 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A2107C:;
    sp = sp - 64;
    a2 = sp + 16;
    s1 = a0 + 0;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A210B0;
L_08A210B0:;
    a1 = 0xc3f10000u;
    v0 = LD32(s1+304);
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    a1 = a1 | 0xf774;
    if (cnd_) { goto L_08A211D0; }
    goto L_08A210D0;
L_08A210D0:;
    v0 = D_08AEF968 - (-1688);
    f12 = BITSF(LD32(v0-1688));
    a0 = LD32(sp+16);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A210E0;
L_08A210E0:;
    v0 = D_08AEF96C - (-1684);
    f20 = f0;
    a0 = LD32(sp+16);
    f0 = BITSF(LD32(v0-1684));
    a1 = 0xaf3e0000u;
    a1 = a1 | 0xbdcc;
    a2 = (u32)-1;
    f20 = f20 * f0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A21104;
L_08A21104:;
    v1 = v0 >> 24;
    f6 = BITSF(v1);
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    v1 = (v0 >> 8) & 0xff;
    v0 = (v0 >> 16) & 0xff;
    f2 = BITSF(v0);
    f1 = BITSF(v1);
    f3 = (float)(s32)FBITS(f0);
    f5 = (float)(s32)FBITS(f2);
    f4 = (float)(s32)FBITS(f1);
    v0 = D_08AEF970 - (-1680);
    f1 = (float)(s32)FBITS(f6);
    f0 = BITSF(LD32(v0-1680));
    a0 = 372;
    f1 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    ST32(sp+12, FBITS(f1));
    ST32(sp+8, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f5));
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21164;
L_08A21164:;
    s0 = v0 + 0;
    v1 = LD32(s1+304);
    a0 = v0 + 0;
    f13 = BITSF(0);
    a2 = LD32(v1);
    f12 = f20;
    a1 = sp + 0;
    v0 = LD32(a2-16);
    v1 = v1 + v0;
    a2 = LD32(v1+4);
    func_0896BB44(a0, a1, a2, f12, f13);
    goto L_08A21190;
L_08A21190:;
    v0 = LD32(s0+52);
    a1 = 0x8b250000u;
    a0 = s0 + 0;
    v0 = v0 | 0x2;
    ST32(s0+52, v0);
    a1 = a1 | 0x1982;
    v0 = LD32(s1+292);
    ST32(s0+136, v0);
    func_0880D928(a0, a1);
    goto L_08A211B4;
L_08A211B4:;
    v1 = LD32(s0);
    a2 = LD32(s1+292);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    a1 = s2 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A211D0;
L_08A211D0:;
    sp = sp + 64;
    return;
}

/* 08A211EC */
u32 func_08A211EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A211EC:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2121C;
L_08A2121C:;
    v0 = LD32(s1+304);
    v1 = LD32(v0);
    a1 = LD32(v1-12);
    v0 = v0 + a1;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    a0 = 188;
    if (cnd_) { goto L_08A212A8; }
    goto L_08A21238;
L_08A21238:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21240;
L_08A21240:;
    s0 = v0 + 0;
    v0 = LD32(s1+304);
    a3 = LD32(s1+16);
    a1 = LD32(s1+4);
    v1 = LD32(v0);
    a0 = s0 + 0;
    a2 = LD32(v1-16);
    v0 = v0 + a2;
    a2 = LD32(v0+4);
    func_0896AAE0(a0, a1, a2, a3);
    goto L_08A21268;
L_08A21268:;
    v0 = LD32(s0+52);
    a1 = 0x8b250000u;
    a0 = s0 + 0;
    v0 = v0 | 0x2;
    ST32(s0+52, v0);
    a1 = a1 | 0x1982;
    v0 = LD32(s1+292);
    ST32(s0+136, v0);
    func_0880D928(a0, a1);
    goto L_08A2128C;
L_08A2128C:;
    v1 = LD32(s0);
    a2 = LD32(s1+292);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    a1 = s2 + 0;
    t_ = v0;
    a3 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A212A8;
L_08A212A8:;
    sp = sp + 32;
    return v0;
}

/* 08A212C0 */
float func_08A212C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A212C0:;
    sp = sp - 16;
    a1 = 11;
    s0 = a0 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A212D8;
L_08A212D8:;
    v1 = LD32(s0+296);
    cnd_ = v1 == 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_08A212E8; }
    goto L_08A212E4;
L_08A212E4:;
    ST32(s0+296, v0);
    goto L_08A212E8;
L_08A212E8:;
    sp = sp + 16;
    return f0;
}

/* 08A212F8 */
void func_08A212F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A212F8:;
    sp = sp - 80;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0-31324));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A21348; }
    goto L_08A2132C;
L_08A2132C:;
    goto L_08A21330;
L_08A21330:;
    sp = sp + 80;
    return;
L_08A21348:;
    a1 = s1 + 0;
    a0 = sp + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21358;
L_08A21358:;
    a1 = LD32(s1+220);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A215D0; }
    goto L_08A21368;
L_08A21368:;
    a2 = sp + 0;
    { rv_t r_ = func_08A234FC(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21370;
L_08A21370:;
    f2 = BITSF(LD32(s1+124));
    goto L_08A21374;
L_08A21374:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+304); goto L_08A213BC; }
    goto L_08A21388;
L_08A21388:;
    v1 = LD32(s1+364);
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+304); goto L_08A213BC; }
    goto L_08A21398;
L_08A21398:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s1+120));
    v0 = v1 | 0x4000;
    f0 = f0 * f2;
    ST32(s1+364, v0);
    f1 = f1 + f0;
    ST32(s1+120, FBITS(f1));
    v0 = LD32(s1+304);
    goto L_08A213BC;
L_08A213BC:;
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A213EC; }
    goto L_08A213D4;
L_08A213D4:;
    a1 = 0x8b250000u;
    a1 = a1 | 0x1982;
    { rv_t r_ = func_0880A7A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A213E0;
L_08A213E0:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A21400; }
    goto L_08A213E8;
L_08A213E8:;
    v0 = LD32(s1+296);
    goto L_08A213EC;
L_08A213EC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A21330; }
    goto L_08A213F4;
L_08A213F4:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A21330;
L_08A21400:;
    t1 = LD32(v0);
    v1 = (u32)-1;
    v0 = 999;
    ST32(sp+32, v0);
    s0 = sp + 16;
    a1 = s0 + 0;
    ST32(sp+40, v1);
    a2 = sp + 32;
    a3 = sp + 36;
    ST32(sp+36, v1);
    v0 = LD32(t1+88);
    t_ = v0;
    t0 = sp + 40;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21434;
L_08A21434:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A213EC; }
    goto L_08A2143C;
L_08A2143C:;
    v0 = LD32(s1+364);
    v0 = v0 & 0x8000;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s1+316); goto L_08A215B0; }
    goto L_08A2144C;
L_08A2144C:;
    a1 = LD32(sp+32);
    goto L_08A21450;
L_08A21450:;
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A213EC; }
    goto L_08A21458;
L_08A21458:;
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21468;
L_08A21468:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A214A4; }
    goto L_08A21470;
L_08A21470:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21484;
L_08A21484:;
    a0 = LD32(s1+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2149C;
L_08A2149C:;
    cnd_ = s0 == v0;
    v0 = D_08C29338 - (-27848);
    if (cnd_) { goto L_08A2159C; }
    goto L_08A214A4;
L_08A214A4:;
    v0 = LD32(s1+364);
    goto L_08A214A8;
L_08A214A8:;
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A213EC; }
    goto L_08A214B4;
L_08A214B4:;
    cnd_ = s2 == 0;
    if (cnd_) { f1 = BITSF(LD32(s1+40)); goto L_08A214DC; }
    goto L_08A214BC;
L_08A214BC:;
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s2 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { f1 = BITSF(LD32(s1+36)); goto L_08A214DC; }
    goto L_08A214D8;
L_08A214D8:;
    f1 = BITSF(LD32(s1+40));
    goto L_08A214DC;
L_08A214DC:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f20 = f1 * f0;
    f1 = BITSF(0);
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A213EC; }
    goto L_08A214FC;
L_08A214FC:;
    a0 = 0x8001;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21510;
L_08A21510:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A213E8; }
    goto L_08A21518;
L_08A21518:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(sp+32); goto L_08A21578; }
    goto L_08A21524;
L_08A21524:;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_08A2152C;
L_08A2152C:;
    a2 = LD32(s1+304);
    ST32(s0+12, FBITS(f20));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21558;
L_08A21558:;
    ST32(s0+8, v0);
    v0 = LD32(sp+36);
    ST32(s0+20, v0);
    v1 = LD32(sp+40);
    ST32(s0+16, v1);
    v0 = LD32(s1+152);
    ST32(s0, v0);
    v0 = LD32(sp+32);
    goto L_08A21578;
L_08A21578:;
    a0 = s2 + 0;
    a1 = 1;
    ST32(s2, v0);
    a2 = 1;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21594;
L_08A21594:;
    v0 = LD32(s1+296);
    goto L_08A213EC;
L_08A2159C:;
    v1 = LD_U8(v0-27848);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A21330; }
    goto L_08A215A8;
L_08A215A8:;
    v0 = LD32(s1+364);
    goto L_08A214A8;
L_08A215B0:;
    a1 = D_08B45AA8 - (23208);
    a0 = s0 + 0;
    a1 = a1 + 23208;
    a3 = 0 + 0;
    t0 = 15;
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A215C8;
L_08A215C8:;
    a1 = LD32(sp+32);
    goto L_08A21450;
L_08A215D0:;
    a1 = LD32(s1+212);
    a3 = s1 + 220;
    a2 = sp + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A215E0;
L_08A215E0:;
    f2 = BITSF(LD32(s1+124));
    goto L_08A21374;
}

/* 08A215E8 */
float func_08A215E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A215E8:;
    sp = sp - 16;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A21678; }
    goto L_08A21608;
L_08A21608:;
    a0 = LD32(a0+304);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A21668; }
    goto L_08A21614;
L_08A21614:;
    v0 = LD32(a0+84);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A216B8; }
    goto L_08A21620;
L_08A21620:;
    s0 = LD32(a0+84);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1+296); goto L_08A21668; }
    goto L_08A2162C;
L_08A2162C:;
    v0 = LD_U8(s0+11);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A21644; }
    goto L_08A21638;
L_08A21638:;
    v0 = 1;
    ST8(s0+11, v0);
    v0 = LD_U8(s0+8);
    goto L_08A21644;
L_08A21644:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A216A8; }
    goto L_08A2164C;
L_08A2164C:;
    a0 = s0 + 0;
    { rv_t r_ = func_089847F8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21654;
L_08A21654:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2168C; }
    goto L_08A2165C;
L_08A2165C:;
    a0 = s0 + 0;
    f0 = func_08984908(a0);
    goto L_08A21664;
L_08A21664:;
    v0 = LD32(s1+296);
    goto L_08A21668;
L_08A21668:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2167C; }
    goto L_08A21670;
L_08A21670:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    goto L_08A21678;
L_08A21678:;
    goto L_08A2167C;
L_08A2167C:;
    sp = sp + 16;
    return f0;
L_08A2168C:;
    a0 = s1 + 0;
    func_08A1A36C(a0, 0, 0);
    goto L_08A21694;
L_08A21694:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08A19E28(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A216A0;
L_08A216A0:;
    v0 = LD32(s1+296);
    goto L_08A21668;
L_08A216A8:;
    a0 = s0 + 0;
    f0 = func_08984964(a0, t2, t3);
    goto L_08A216B0;
L_08A216B0:;
    v0 = LD32(s1+296);
    goto L_08A21668;
L_08A216B8:;
    { rv_t r_ = func_089DD940(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A216C0;
L_08A216C0:;
    a0 = LD32(s1+304);
    goto L_08A21620;
}

/* 08A216C8 */
float func_08A216C8(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A216C8:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a3 = 0 + 0;
    s0 = a0 + 0;
    a1 = 8;
    v0 = LD32(a0+296);
    a0 = 0x8080;
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_08A21700; }
    goto L_08A216FC;
L_08A216FC:;
    ST32(s0+296, v1);
    goto L_08A21700;
L_08A21700:;
    v0 = LD32(s0+304);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A21720; }
    goto L_08A2170C;
L_08A2170C:;
    goto L_08A21710;
L_08A21710:;
    sp = sp + 16;
    return f0;
L_08A21720:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21728;
L_08A21728:;
    cnd_ = v0 == 0;
    t0 = v0 + 0;
    if (cnd_) { goto L_08A2170C; }
    goto L_08A21730;
L_08A21730:;
    v0 = LD32(v0+24);
    a0 = t0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A2170C; }
    goto L_08A21744;
L_08A21744:;
    ST32(v0, s1);
    a3 = LD32(s0+304);
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(t0+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(t0, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21778;
L_08A21778:;
    goto L_08A21710;
}

/* 08A21780 */
float func_08A21780(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_08A21780:;
    sp = sp - 352;
    v0 = D_08B159FC - (23036);
    a2 = sp + 16;
    s7 = D_08AEF974 - (-1676);
    a1 = sp + 0;
    t0 = 0 + 0;
    s2 = a0 + 0;
    s0 = sp + 48;
    a0 = s0 + 0;
    v1 = LD32(v0+23036);
    f1 = BITSF(LD32(s7-1676));
    t1 = LD32(s2+304);
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(sp+24, FBITS(f1));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v1+20));
    f12 = BITSF(LD32(s2+92));
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(v1+32));
    ST32(sp+20, FBITS(f0));
    f1 = BITSF(LD32(v1+44));
    ST32(sp+24, FBITS(f1));
    v0 = LD32(t1);
    v1 = LD32(v0-16);
    t1 = t1 + v1;
    a3 = LD32(t1+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A21834;
L_08A21834:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2183C;
L_08A2183C:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f1 = f1 + f5;
    f2 = f2 + f4;
    f0 = f0 + f3;
    s5 = LD32(v0+4);
    s3 = v0 + 0;
    ST32(sp+32, FBITS(f1));
    s4 = 0 < s5;
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f4));
    cnd_ = s4 == 0;
    ST32(sp+120, FBITS(f3));
    if (cnd_) { goto L_08A21A2C; }
    goto L_08A21898;
L_08A21898:;
    a1 = sp + 32;
    goto L_08A2189C;
L_08A2189C:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A1CC14(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A218A4;
L_08A218A4:;
    v0 = LD32(s2+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = D_08C2B3A4 - (-19548); goto L_08A218EC; }
    goto L_08A218B4;
L_08A218B4:;
    goto L_08A218B8;
L_08A218B8:;
    sp = sp + 352;
    return f0;
L_08A218EC:;
    a0 = a0 - 19548;
    a1 = s5 + 0;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A218FC;
L_08A218FC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A21938; }
    goto L_08A21904;
L_08A21904:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21918;
L_08A21918:;
    a0 = LD32(s2+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21930;
L_08A21930:;
    cnd_ = s0 == v0;
    v0 = D_08C29338 - (-27848);
    if (cnd_) { goto L_08A21A18; }
    goto L_08A21938;
L_08A21938:;
    cnd_ = s4 != 0;
    a0 = 0x8001;
    if (cnd_) { goto L_08A21958; }
    goto L_08A21940;
L_08A21940:;
    v0 = LD32(s2+296);
    goto L_08A21944;
L_08A21944:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A218B8; }
    goto L_08A2194C;
L_08A2194C:;
    v0 = v0 - 1;
    ST32(s2+296, v0);
    goto L_08A218B8;
L_08A21958:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21968;
L_08A21968:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A21940; }
    goto L_08A21970;
L_08A21970:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s4, s5); goto L_08A219F8; }
    goto L_08A2197C;
L_08A2197C:;
    a0 = s0 + 0;
    func_0897A7BC(a0);
    goto L_08A21984;
L_08A21984:;
    cnd_ = s1 == 0;
    if (cnd_) { f0 = BITSF(LD32(s2+40)); goto L_08A219AC; }
    goto L_08A2198C;
L_08A2198C:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { f0 = BITSF(LD32(s2+36)); goto L_08A219AC; }
    goto L_08A219A8;
L_08A219A8:;
    f0 = BITSF(LD32(s2+40));
    goto L_08A219AC;
L_08A219AC:;
    a2 = LD32(s2+304);
    ST32(s0+12, FBITS(f0));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s0+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A219D8;
L_08A219D8:;
    ST32(s0+8, v0);
    v0 = LD32(s3+8);
    ST32(s0+20, v0);
    v1 = LD32(s3+12);
    ST32(s0+16, v1);
    v0 = LD32(s2+152);
    ST32(s0, v0);
    ST32(s4, s5);
    goto L_08A219F8;
L_08A219F8:;
    a0 = s4 + 0;
    a1 = 1;
    v0 = LD32(s0+4);
    a2 = 1;
    ST32(s4+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21A10;
L_08A21A10:;
    v0 = LD32(s2+296);
    goto L_08A21944;
L_08A21A18:;
    v1 = LD_U8(v0-27848);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A218B8; }
    goto L_08A21A24;
L_08A21A24:;
    goto L_08A21938;
L_08A21A2C:;
    v1 = D_08C2A6C8 - (-22840);
    v1 = v1 - 22840;
    v0 = LD32(v1+8);
    s6 = sp + 128;
    a0 = s6 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+128, v1);
    ST32(sp+132, 0);
    ST32(sp+136, 0);
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21A5C;
L_08A21A5C:;
    v0 = D_08AEF978 - (-1672);
    v1 = LD32(sp+136);
    cnd_ = v1 == 0;
    f21 = BITSF(LD32(v0-1672));
    if (cnd_) { goto L_08A21B10; }
    goto L_08A21A6C;
L_08A21A6C:;
    fp = sp + 176;
    s1 = LD32(v1);
    goto L_08A21A74;
L_08A21A74:;
    v1 = LD32(s1);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21A84;
L_08A21A84:;
    a0 = LD32(s2+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21A9C;
L_08A21A9C:;
    cnd_ = s0 == v0;
    v0 = D_08C29338 - (-27848);
    if (cnd_) { goto L_08A21CEC; }
    goto L_08A21AA4;
L_08A21AA4:;
    v0 = LD_U8(s1+4);
    goto L_08A21AA8;
L_08A21AA8:;
    cnd_ = v0 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A21AFC; }
    goto L_08A21AB0;
L_08A21AB0:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A21AFC; }
    goto L_08A21ABC;
L_08A21ABC:;
    a0 = LD32(s1);
    f20 = BITSF(0);
    v0 = LD32(a0-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { a0 = s6 + 0; goto L_08A21AFC; }
    goto L_08A21AE0;
L_08A21AE0:;
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a0+56); goto L_08A21B34; }
    goto L_08A21AF8;
L_08A21AF8:;
    a0 = s6 + 0;
    goto L_08A21AFC;
L_08A21AFC:;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21B04;
L_08A21B04:;
    v1 = LD32(sp+136);
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_08A21A74; }
    goto L_08A21B10;
L_08A21B10:;
    a0 = LD32(sp+128);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A21898; }
    goto L_08A21B24;
L_08A21B24:;
    { u64 r_ = func_08AC3F94(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21B2C;
L_08A21B2C:;
    a1 = sp + 32;
    goto L_08A2189C;
L_08A21B34:;
    f12 = f20;
    a0 = s1 + 0;
    a1 = sp + 112;
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21B48;
L_08A21B48:;
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(sp+116));
    f2 = BITSF(LD32(sp+120));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(240);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f12 = f20;
    f3 = f3 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    f2 = f2 - f0;
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    ST32(sp+144, FBITS(f4));
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+148, FBITS(f3));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+152, FBITS(f2));
    if (cnd_) { goto L_08A21BF4; }
    goto L_08A21BB0;
L_08A21BB0:;
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
    ST32(sp+168, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, v0);
    ST32(sp+144, FBITS(f2));
    ST32(sp+148, v0);
    ST32(sp+152, FBITS(f3));
    goto L_08A21BF4;
L_08A21BF4:;
    f3 = BITSF(LD32(s2+92));
    fcc = FCMP(f12, f3, 12);
    cnd_ = !fcc;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A21AFC; }
    goto L_08A21C08;
L_08A21C08:;
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    f1 = BITSF(LD32(s2+340));
    {u32 a_=sp+(256);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+152);
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
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s7-1676));
    if (cnd_) { goto L_08A21AFC; }
    goto L_08A21C64;
L_08A21C64:;
    f0 = f0 - f2;
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    a2 = sp + 144;
    if (cnd_) { goto L_08A21AFC; }
    goto L_08A21C78;
L_08A21C78:;
    v0 = LD32(s2+304);
    f12 = f3;
    v1 = LD32(v0);
    a1 = sp + 0;
    t0 = 0 + 0;
    a3 = LD32(v1-16);
    a0 = fp + 0;
    f21 = f0;
    v0 = v0 + a3;
    a3 = LD32(v0+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A21CA4;
L_08A21CA4:;
    a0 = fp + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21CAC;
L_08A21CAC:;
    v1 = LD32(s1);
    a0 = LD32(v0+4);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 != v1;
    if (cnd_) { a0 = s6 + 0; goto L_08A21AFC; }
    goto L_08A21CC8;
L_08A21CC8:;
    f0 = BITSF(LD32(sp+112));
    f1 = BITSF(LD32(sp+120));
    s5 = a0 + 0;
    ST32(sp+32, FBITS(f0));
    s4 = 1;
    f0 = BITSF(LD32(sp+116));
    ST32(sp+40, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    goto L_08A21AF8;
L_08A21CEC:;
    v1 = LD_U8(v0-27848);
    cnd_ = v1 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A21AFC; }
    goto L_08A21CF8;
L_08A21CF8:;
    v0 = LD_U8(s1+4);
    goto L_08A21AA8;
}

/* 08A21D00 */
float func_08A21D00(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A21D00:;
    sp = sp - 112;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A21D54; }
    goto L_08A21D30;
L_08A21D30:;
    goto L_08A21D34;
L_08A21D34:;
    sp = sp + 112;
    return f0;
L_08A21D54:;
    v0 = D_08B159FC - (23036);
    t0 = LD32(v0+23036);
    v1 = D_08AEF97C - (-1668);
    f21 = BITSF(LD32(v1-1668));
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f20 = BITSF(0);
    ST32(sp+24, FBITS(f21));
    a0 = 0x805e;
    a1 = 60;
    ST32(sp+16, FBITS(f20));
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(sp+20, FBITS(f20));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = BITSF(LD32(t0+20));
    ST32(sp+16, FBITS(f0));
    f1 = BITSF(LD32(t0+32));
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(t0+44));
    ST32(sp+24, FBITS(f0));
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A21DB8;
L_08A21DB8:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A21EB4; }
    goto L_08A21DC0;
L_08A21DC0:;
    s1 = LD32(v0+24);
    f0 = BITSF(LD32(sp+8));
    v0 = LD32(s0+16);
    v1 = s1 + 28;
    ST32(v1+8, FBITS(f0));
    a0 = s1 + 40;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp));
    ST32(s1+4, v0);
    ST32(v1+4, FBITS(f1));
    ST32(s1+28, FBITS(f0));
    v0 = LD32(s0+20);
    f1 = BITSF(LD32(s0+60));
    f2 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+20));
    ST32(s1+8, v0);
    f2 = f2 * f1;
    f0 = f0 * f1;
    f3 = f3 * f1;
    v0 = LD32(s0+152);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f3));
    ST32(a0+4, FBITS(f0));
    ST32(s1+20, v0);
    ST32(s1+40, FBITS(f2));
    ST32(a0+8, FBITS(f3));
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21E44;
L_08A21E44:;
    a1 = LD32(s0+304);
    a2 = LD32(a1);
    v1 = LD32(a2-16);
    v1 = a1 + v1;
    s2 = LD32(v1+4);
    ST32(s1+12, v0);
    ST32(s1+16, s2);
    v1 = LD32(a1);
    v0 = LD32(v1+264);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21E70;
L_08A21E70:;
    f1 = BITSF(LD32(s0+112));
    ST32(s1+52, v0);
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f0 = f21;
    if (cnd_) { goto L_08A21ECC; }
    goto L_08A21E88;
L_08A21E88:;
    ST32(s1+56, FBITS(f0));
    goto L_08A21E8C;
L_08A21E8C:;
    a0 = s3 + 0;
    a1 = 1;
    v1 = LD_U8(s0+268);
    a2 = 1;
    ST8(s1, v1);
    v0 = LD_U8(s0+269);
    ST8(s1+24, v0);
    ST32(s3, s2);
    ST32(s3+4, s2);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21EB4;
L_08A21EB4:;
    v0 = LD32(s0+296);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A21D34; }
    goto L_08A21EC0;
L_08A21EC0:;
    v0 = v0 - 1;
    ST32(s0+296, v0);
    goto L_08A21D34;
L_08A21ECC:;
    f1 = f21 / f1;
    f0 = BITSF(LD32(s0+108));
    a0 = sp + 48;
    a1 = sp + 52;
    a2 = sp + 56;
    ST32(sp+52, FBITS(f20));
    ST32(sp+56, FBITS(f21));
    f0 = f0 * f1;
    ST32(sp+48, FBITS(f0));
    f0 = func_08A23AD0(a0, a1, a2);
    goto L_08A21EF4;
L_08A21EF4:;
    ST32(s1+56, FBITS(f0));
    goto L_08A21E8C;
}

/* 08A21EFC */
rv_t func_08A21EFC(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08A21EFC:;
    sp = sp - 176;
    a0 = a1 + 0;
    s1 = a2 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21F24;
L_08A21F24:;
    f2 = BITSF(LD32(v0+8));
    v1 = LD32(s1);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21F4C;
L_08A21F4C:;
    v1 = LD32(s0);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(v1-12);
    ST32(sp+16, FBITS(f0));
    a1 = 0x5a30000u;
    s0 = s0 + a0;
    v1 = LD32(s0);
    f2 = BITSF(LD32(v0+8));
    ST32(sp+20, FBITS(f1));
    a0 = s0 + 0;
    a1 = a1 | 0xe701;
    ST32(sp+24, FBITS(f2));
    a2 = sp + 0;
    a3 = 0 + 0;
    v0 = LD32(v1+60);
    t0 = 1;
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21F98;
L_08A21F98:;
    v1 = LD32(s1);
    a1 = 0x5a30000u;
    a2 = sp + 16;
    v0 = LD32(v1-12);
    a1 = a1 | 0xe701;
    a3 = 0 + 0;
    s1 = s1 + v0;
    v1 = LD32(s1);
    a0 = s1 + 0;
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A21FCC;
L_08A21FCC:;
    f0 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f4 = f4 - f0;
    f0 = BITSF(LD32(sp+4));
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f5 = f5 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f4);
    f1 = BITSF(0);
    f3 = f3 - f0;
    v1 = FBITS(f5);
    {v[0]=BITSF(v0);}
    {v[12]=BITSF(v0);}
    a0 = FBITS(f3);
    {v[1]=BITSF(v1);}
    {v[13]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {v[14]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+32, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+36, FBITS(f5));
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f3));
    if (cnd_) { goto L_08A22090; }
    goto L_08A22054;
L_08A22054:;
    {float s0=v[4];float d0=sqrtf(s0);v[8]=d0;}
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
    goto L_08A22090;
L_08A22090:;
    s0 = sp + 64;
    a2 = sp + 32;
    a1 = sp + 0;
    a3 = 999;
    t0 = 0 + 0;
    a0 = s0 + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A220AC;
L_08A220AC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A220B4;
L_08A220B4:;
    v0 = LD_U8(v0+32);
    v0 = v0 < 0x1u;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
}

/* 08A220D0 */
float func_08A220D0(float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_08A220D0:;
    v0 = D_08AEF980 - (-1664);
    f1 = BITSF(LD32(v0-1664));
    f0 = f12 * f1;
    return f0;
}

/* 08A220E0 */
u32 func_08A220E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08A220E0:;
    sp = sp - 336;
    v1 = 0 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    a0 = LD32(a0+304);
    cnd_ = a0 == a1;
    s1 = a1 + 0;
    if (cnd_) { goto L_08A221A0; }
    goto L_08A22118;
L_08A22118:;
    v1 = LD32(a0);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+52);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22134;
L_08A22134:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22148;
L_08A22148:;
    v1 = 0 + 0;
    {u32 a_=sp+(224);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = s0 == v0;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A221A0; }
    goto L_08A22160;
L_08A22160:;
    v1 = LD32(s1);
    f21 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = 0 + 0; goto L_08A221A0; }
    goto L_08A22184;
L_08A22184:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A221A0; }
    goto L_08A22190;
L_08A22190:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1+244); goto L_08A221C8; }
    goto L_08A2219C;
L_08A2219C:;
    v1 = 0 + 0;
    goto L_08A221A0;
L_08A221A0:;
    goto L_08A221A4;
L_08A221A4:;
    v0 = v1 + 0;
    sp = sp + 336;
    { v[0]=vr0;return v0; }
L_08A221C8:;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A221E0;
L_08A221E0:;
    a0 = LD32(s2+304);
    s0 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A221F8;
L_08A221F8:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f1 = f1 - f3;
    f2 = f2 - f0;
    v0 = D_08AEF984 - (-1660);
    f12 = BITSF(LD32(v0-1660));
    a1 = 0x19560000u;
    a0 = s3 + 0;
    a1 = a1 | 0x5259;
    v0 = FBITS(f1);
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp, FBITS(f1));
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    ST32(sp+4, FBITS(f2));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+8, FBITS(f4));
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f20 = BITSF(v0);
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2226C;
L_08A2226C:;
    f0 = f0 * f0;
    v1 = 0 + 0;
    {u32 a_=sp+(224);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f20, 12);
    {u32 a_=sp+(256);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = fcc;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08A221A0; }
    goto L_08A22290;
L_08A22290:;
    v0 = LD32(sp);
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+4);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    v0 = D_08AEF988 - (-1656);
    if (cnd_) { goto L_08A22308; }
    goto L_08A222C8;
L_08A222C8:;
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
    v0 = D_08AEF988 - (-1656);
    goto L_08A22308;
L_08A22308:;
    f0 = BITSF(LD32(v0-1656));
    a0 = LD32(s2+304);
    ST32(sp+32, FBITS(f21));
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f21));
    v1 = LD32(a0);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+92);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22338;
L_08A22338:;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(112);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(96);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
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
    {v[33]=BITSF(a0);}
    v1 = LD32(sp+40);
    {v[34]=BITSF(a1);}
    {v[18]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=vr0*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+52, FBITS(f2));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+56, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_08A22464; }
    goto L_08A22428;
L_08A22428:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08A22464;
L_08A22464:;
    v0 = D_08AEF98C - (-1652);
    f12 = BITSF(LD32(v0-1652));
    a1 = 0x10000u;
    a0 = s3 + 0;
    a1 = a1 | 0x7a52;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp);
    {v[6]=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = LD32(sp+4);
    v1 = LD32(sp+8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A224C4;
L_08A224C4:;
    f12 = f0;
    f0 = func_08A220D0(f12);
    goto L_08A224CC;
L_08A224CC:;
    v0 = D_08AEF990 - (-1648);
    f1 = BITSF(LD32(v0-1648));
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = 0 + 0;
    f0 = f0 * f1;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A221A4; }
    goto L_08A22514;
L_08A22514:;
    a2 = LD32(s2+304);
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08A21EFC(a1, a2); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22524;
L_08A22524:;
    v1 = 0 < v0;
    goto L_08A221A0;
    v[0]=vr0;
}

/* 08A2252C */
void func_08A2252C(u32 a0, u32 a1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A2252C:;
    sp = sp - 48;
    f0 = BITSF(0);
    s3 = a1 + 0;
    fcc = FCMP(f12, f0, 2);
    s0 = a0 + 0;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_08A22610; }
    goto L_08A22568;
L_08A22568:;
    cnd_ = fcc;
    if (cnd_) { goto L_08A22614; }
    goto L_08A22570;
L_08A22570:;
    v0 = 999;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    cnd_ = s3 == v0;
    a0 = 0x8001;
    if (cnd_) { goto L_08A22614; }
    goto L_08A22588;
L_08A22588:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22590;
L_08A22590:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A22610; }
    goto L_08A22598;
L_08A22598:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A225E4; }
    goto L_08A225A4;
L_08A225A4:;
    func_0897A7BC(a0);
    goto L_08A225AC;
L_08A225AC:;
    a2 = LD32(s0+304);
    ST32(s1+12, FBITS(f20));
    v1 = LD32(a2);
    v0 = LD32(v1-16);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    ST32(s1+4, v1);
    a1 = LD32(a2);
    v0 = LD32(a1+48);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A225D8;
L_08A225D8:;
    ST32(s1+8, v0);
    v0 = LD32(s0+152);
    ST32(s1, v0);
    goto L_08A225E4;
L_08A225E4:;
    ST32(s2, s3);
    a0 = s2 + 0;
    a1 = 1;
    v0 = LD32(s0+304);
    a2 = 1;
    v1 = LD32(v0);
    a3 = LD32(v1-16);
    v0 = v0 + a3;
    v1 = LD32(v0+4);
    ST32(s2+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22610;
L_08A22610:;
    goto L_08A22614;
L_08A22614:;
    sp = sp + 48;
    return;
}

/* 08A22630 */
float func_08A22630(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[496] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 496);
L_08A22630:;
    sp = sp - 496;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A226AC; }
    goto L_08A22674;
L_08A22674:;
    goto L_08A22678;
L_08A22678:;
    sp = sp + 496;
    return f0;
L_08A226AC:;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a2 = sp + 96;
    a0 = a0 | 0xc21c;
    ST32(sp+96, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A226C4;
L_08A226C4:;
    v0 = D_08AEF994 - (-1644);
    f12 = BITSF(LD32(v0-1644));
    a0 = LD32(sp+96);
    a1 = 0x8ee80000u;
    a1 = a1 | 0xd26f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A226DC;
L_08A226DC:;
    a0 = LD32(sp+96);
    a1 = 0x47ad0000u;
    a1 = a1 | 0x7c99;
    a2 = 0 + 0;
    f21 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A226F4;
L_08A226F4:;
    a0 = LD32(sp+96);
    a1 = 0x85290000u;
    a1 = a1 | 0x8d00;
    a2 = 0 + 0;
    s5 = v0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2270C;
L_08A2270C:;
    a0 = LD32(s2+304);
    s4 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+344);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22724;
L_08A22724:;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A22678; }
    goto L_08A22734;
L_08A22734:;
    a1 = s2 + 0;
    a2 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22744;
L_08A22744:;
    a1 = LD32(s2+148);
    a0 = s2 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_08A2341C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22758;
L_08A22758:;
    v1 = D_08C2A6C8 - (-22840);
    v1 = v1 - 22840;
    v0 = LD32(v1+8);
    s6 = sp + 16;
    a0 = s6 + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22788;
L_08A22788:;
    v0 = LD32(sp+24);
    cnd_ = v0 == 0;
    a0 = 0x8032;
    if (cnd_) { goto L_08A227D4; }
    goto L_08A22794;
L_08A22794:;
    s7 = 1;
    s0 = LD32(v0);
    goto L_08A2279C;
L_08A2279C:;
    cnd_ = s0 == 0;
    a2 = LD32(sp+96);
    if (cnd_) { goto L_08A227B8; }
    goto L_08A227A4;
L_08A227A4:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A220E0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A227B0;
L_08A227B0:;
    cnd_ = v0 != 0;
    a0 = 0x8032;
    if (cnd_) { goto L_08A228E4; }
    goto L_08A227B8;
L_08A227B8:;
    a0 = s6 + 0;
    goto L_08A227BC;
L_08A227BC:;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A227C4;
L_08A227C4:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A2279C; }
    goto L_08A227D0;
L_08A227D0:;
    a0 = 0x8032;
    goto L_08A227D4;
L_08A227D4:;
    a1 = 28;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A227E4;
L_08A227E4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A228A0; }
    goto L_08A227EC;
L_08A227EC:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    v0 = 0x9d4a0000u;
    if (cnd_) { goto L_08A22858; }
    goto L_08A227F8;
L_08A227F8:;
    v1 = LD32(s0);
    a3 = LD32(s0+8);
    v0 = v0 | 0x123c;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a3 = (a3 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+4, v0);
    v0 = 37;
    a1 = 0xc3a30000u;
    a0 = LD32(sp+96);
    ST32(s0+12, v0);
    a1 = a1 | 0x1edd;
    a2 = 0 + 0;
    ST32(s0, v1);
    ST32(s0+8, a3);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22834;
L_08A22834:;
    ST32(s0+20, v0);
    a1 = 0xf3ec0000u;
    a1 = a1 | 0xf4fc;
    a0 = LD32(sp+96);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2284C;
L_08A2284C:;
    ST32(s0+16, v0);
    v0 = LD32(s2+148);
    ST32(s0+24, v0);
    goto L_08A22858;
L_08A22858:;
    a3 = LD32(s2+304);
    t0 = LD32(s1+28);
    a0 = s1 + 0;
    v1 = LD32(a3);
    t0 = t0 | 0x1;
    a1 = 1;
    v0 = LD32(v1-16);
    a2 = 1;
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(s1+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(s1+28, t0);
    ST32(s1, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A228A0;
L_08A228A0:;
    a0 = LD32(s2+304);
    f12 = f21;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A228AC;
L_08A228AC:;
    v0 = LD32(s2+296);
    cnd_ = v0 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08A228C4; }
    goto L_08A228B8;
L_08A228B8:;
    v0 = v0 - 1;
    ST32(s2+296, v0);
    a0 = LD32(sp+16);
    goto L_08A228C4;
L_08A228C4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A22674; }
    goto L_08A228D4;
L_08A228D4:;
    { u64 r_ = func_08AC3F94(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A228DC;
L_08A228DC:;
    goto L_08A22678;
L_08A228E4:;
    a1 = 40;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A228F4;
L_08A228F4:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A22D0C; }
    goto L_08A228FC;
L_08A228FC:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    v1 = 0x5b200000u;
    if (cnd_) { goto L_08A22CC4; }
    goto L_08A22908;
L_08A22908:;
    v0 = LD32(s1);
    a0 = LD32(s1+8);
    f20 = BITSF(0);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1, v0);
    a0 = (a0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = D_08AEF998 - (-1640);
    ST32(s1+8, a0);
    v1 = v1 | 0xcc85;
    f22 = BITSF(LD32(v0-1640));
    a0 = LD32(s2+304);
    ST32(s1+4, v1);
    ST32(sp+48, FBITS(f20));
    ST32(sp+52, FBITS(f20));
    ST32(sp+56, FBITS(f22));
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22954;
L_08A22954:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(224);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(128);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(112);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[16]=BITSF(v1);}
    v1 = LD32(sp+56);
    {v[17]=BITSF(v0);}
    {v[18]=BITSF(v1);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(240);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+64, FBITS(f3));
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+68, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+72, FBITS(f4));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f4));
    if (cnd_) { goto L_08A22A90; }
    goto L_08A22A54;
L_08A22A54:;
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
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_08A22A90;
L_08A22A90:;
    ST32(sp+56, FBITS(f22));
    ST32(sp+48, FBITS(f20));
    ST32(sp+52, FBITS(f20));
    v1 = LD32(s0);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22AAC;
L_08A22AAC:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(336);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(320);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(368);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(272);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(256);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[16]=BITSF(v1);}
    v1 = LD32(sp+56);
    {v[17]=BITSF(v0);}
    {v[18]=BITSF(v1);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f4 = BITSF(v0);
    {v0=FBITS(v[20]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(384);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+80, FBITS(f3));
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+84, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    ST32(sp+88, FBITS(f4));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_08A22BE8; }
    goto L_08A22BAC;
L_08A22BAC:;
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
    goto L_08A22BE8;
L_08A22BE8:;
    v0 = LD32(sp+32);
    v1 = LD32(sp+36);
    {u32 a_=sp+(400);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+64);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { ST32(s1+12, s4); goto L_08A22D48; }
    goto L_08A22C3C;
L_08A22C3C:;
    ST32(s1+12, s5);
    ST8(s1+16, s7);
    ST8(s1+17, 0);
    goto L_08A22C48;
L_08A22C48:;
    v1 = LD32(s2+304);
    a0 = LD32(sp+96);
    a1 = 0xc3a30000u;
    v0 = LD32(v1);
    a1 = a1 | 0x1edd;
    a2 = 0 + 0;
    a3 = LD32(v0-16);
    v1 = v1 + a3;
    v0 = LD32(v1+4);
    ST32(s1+20, v0);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22C74;
L_08A22C74:;
    ST32(s1+28, v0);
    a1 = 0xf3ec0000u;
    a1 = a1 | 0xf4fc;
    a0 = LD32(sp+96);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22C8C;
L_08A22C8C:;
    ST32(s1+24, v0);
    a1 = 0xaed20000u;
    a1 = a1 | 0xc55;
    a0 = LD32(sp+96);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22CA4;
L_08A22CA4:;
    ST32(s1+36, v0);
    a1 = 0xaa780000u;
    a1 = a1 | 0x6674;
    a0 = LD32(sp+96);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22CBC;
L_08A22CBC:;
    ST32(s1+32, v0);
    ST8(s1+16, s7);
    goto L_08A22CC4;
L_08A22CC4:;
    v1 = LD32(s2+304);
    t0 = LD32(s3+28);
    a0 = s3 + 0;
    v0 = LD32(v1);
    t0 = t0 | 0x1;
    a1 = 1;
    a3 = LD32(v0-16);
    a2 = 1;
    v1 = v1 + a3;
    v0 = LD32(v1+4);
    ST32(s3+4, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s3+28, t0);
    ST32(s3, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22D0C;
L_08A22D0C:;
    v1 = LD32(s0);
    f12 = BITSF(0);
    a0 = LD32(sp+96);
    v0 = LD32(v1-16);
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    v0 = s0 + v0;
    s0 = LD32(v0+4);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22D30;
L_08A22D30:;
    f12 = f0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_08A2252C(a0, a1, 0, 0, f12);
    goto L_08A22D40;
L_08A22D40:;
    a0 = s6 + 0;
    goto L_08A227BC;
L_08A22D48:;
    ST8(s1+16, 0);
    ST8(s1+17, s7);
    goto L_08A22C48;
}

/* 08A22D54 */
float func_08A22D54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A22D54:;
    sp = sp - 64;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A22DA8; }
    goto L_08A22D84;
L_08A22D84:;
    goto L_08A22D88;
L_08A22D88:;
    sp = sp + 64;
    return f0;
L_08A22DA8:;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22DC0;
L_08A22DC0:;
    v0 = D_08AEF99C - (-1636);
    f12 = BITSF(LD32(v0-1636));
    a0 = LD32(sp);
    a1 = 0x8ee80000u;
    a1 = a1 | 0xd26f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22DD8;
L_08A22DD8:;
    a0 = LD32(sp);
    a1 = 0x47ad0000u;
    a1 = a1 | 0x7c99;
    a2 = 0 + 0;
    f20 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22DF0;
L_08A22DF0:;
    a0 = LD32(s0+304);
    s1 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+344);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22E08;
L_08A22E08:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A22D88; }
    goto L_08A22E18;
L_08A22E18:;
    a0 = LD32(s0+304);
    v1 = LD32(a0);
    v0 = LD32(v1+268);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22E2C;
L_08A22E2C:;
    s3 = v0 + 0;
    v0 = 999;
    cnd_ = s3 == v0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A22D84; }
    goto L_08A22E3C;
L_08A22E3C:;
    a0 = D_08C2A6C8 - (-22840);
    a0 = a0 - 22840;
    a2 = 1;
    { u64 r_ = func_08ABD350(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22E4C;
L_08A22E4C:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A22D84; }
    goto L_08A22E54;
L_08A22E54:;
    a2 = LD32(s0+304);
    a0 = s0 + 0;
    { rv_t r_ = func_08A21EFC(a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22E60;
L_08A22E60:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A22D88; }
    goto L_08A22E68;
L_08A22E68:;
    a0 = 0x8032;
    a1 = 40;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22E7C;
L_08A22E7C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A22F70; }
    goto L_08A22E84;
L_08A22E84:;
    s2 = LD32(v0+24);
    cnd_ = s2 == 0;
    a0 = 0x5b200000u;
    if (cnd_) { goto L_08A22F38; }
    goto L_08A22E90;
L_08A22E90:;
    v0 = LD32(s2);
    v1 = LD32(s2+8);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s2+8, v1);
    a0 = a0 | 0xcc85;
    a1 = 0xc3a30000u;
    ST32(s2, v0);
    a1 = a1 | 0x1edd;
    a2 = 0 + 0;
    ST32(s2+4, a0);
    ST32(s2+12, s1);
    v0 = LD32(s0+304);
    a0 = LD32(sp);
    a3 = LD32(v0);
    v1 = LD32(a3-16);
    v0 = v0 + v1;
    a3 = LD32(v0+4);
    ST32(s2+20, a3);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22EE0;
L_08A22EE0:;
    ST32(s2+28, v0);
    a1 = 0xf3ec0000u;
    a1 = a1 | 0xf4fc;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22EF8;
L_08A22EF8:;
    ST32(s2+24, v0);
    a1 = 0xaed20000u;
    a1 = a1 | 0xc55;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22F10;
L_08A22F10:;
    ST32(s2+36, v0);
    a1 = 0xaa780000u;
    a1 = a1 | 0x6674;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22F28;
L_08A22F28:;
    ST32(s2+32, v0);
    v0 = 1;
    ST8(s2+16, v0);
    ST8(s2+17, 0);
    goto L_08A22F38;
L_08A22F38:;
    v0 = LD32(s0+304);
    t0 = LD32(s4+28);
    a0 = s4 + 0;
    a2 = LD32(v0);
    t0 = t0 | 0x1;
    a1 = 1;
    v1 = LD32(a2-16);
    a2 = 1;
    v0 = v0 + v1;
    a3 = LD32(v0+4);
    ST32(s4+28, t0);
    ST32(s4+4, a3);
    ST32(s4, s3);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22F70;
L_08A22F70:;
    f12 = BITSF(0);
    a0 = LD32(sp);
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A22F84;
L_08A22F84:;
    f12 = f0;
    a0 = s0 + 0;
    a1 = s3 + 0;
    func_08A2252C(a0, a1, 0, 0, f12);
    goto L_08A22F94;
L_08A22F94:;
    a0 = 0x8032;
    a1 = 28;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22FA8;
L_08A22FA8:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A23064; }
    goto L_08A22FB0;
L_08A22FB0:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    v0 = 0x9d4a0000u;
    if (cnd_) { goto L_08A2301C; }
    goto L_08A22FBC;
L_08A22FBC:;
    v1 = LD32(s1);
    a3 = LD32(s1+8);
    v0 = v0 | 0x123c;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a3 = (a3 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s1+4, v0);
    v0 = 38;
    a1 = 0xc3a30000u;
    a0 = LD32(sp);
    ST32(s1+12, v0);
    a1 = a1 | 0x1edd;
    a2 = 0 + 0;
    ST32(s1, v1);
    ST32(s1+8, a3);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A22FF8;
L_08A22FF8:;
    ST32(s1+20, v0);
    a1 = 0xf3ec0000u;
    a1 = a1 | 0xf4fc;
    a0 = LD32(sp);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23010;
L_08A23010:;
    ST32(s1+16, v0);
    v0 = LD32(s0+148);
    ST32(s1+24, v0);
    goto L_08A2301C;
L_08A2301C:;
    a3 = LD32(s0+304);
    t0 = LD32(s4+28);
    a0 = s4 + 0;
    v1 = LD32(a3);
    t0 = t0 | 0x1;
    a1 = 1;
    v0 = LD32(v1-16);
    a2 = 1;
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(s4+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(s4+28, t0);
    ST32(s4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23064;
L_08A23064:;
    a0 = LD32(s0+304);
    f12 = f20;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23070;
L_08A23070:;
    v0 = LD32(s0+296);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A22D88; }
    goto L_08A2307C;
L_08A2307C:;
    v0 = v0 - 1;
    ST32(s0+296, v0);
    goto L_08A22D88;
}

/* 08A23088 */
float func_08A23088(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A23088:;
    sp = sp - 80;
    v0 = LD32(a0+364);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A230DC; }
    goto L_08A230B8;
L_08A230B8:;
    goto L_08A230BC;
L_08A230BC:;
    sp = sp + 80;
    return f0;
L_08A230DC:;
    a1 = LD32(a0+152);
    a0 = 0xd0cd0000u;
    a2 = sp + 16;
    a0 = a0 | 0xc21c;
    ST32(sp+16, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A230F4;
L_08A230F4:;
    v0 = D_08AEF9A0 - (-1632);
    f12 = BITSF(LD32(v0-1632));
    a0 = LD32(sp+16);
    a1 = 0x8ee80000u;
    a1 = a1 | 0xd26f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2310C;
L_08A2310C:;
    a0 = LD32(sp+16);
    a1 = 0x47ad0000u;
    a1 = a1 | 0x7c99;
    a2 = 0 + 0;
    f20 = f0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23124;
L_08A23124:;
    a0 = LD32(s1+304);
    s4 = v0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+344);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2313C;
L_08A2313C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A230BC; }
    goto L_08A2314C;
L_08A2314C:;
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
    goto L_08A23178;
L_08A23178:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = 0x8032;
    if (cnd_) { goto L_08A231C0; }
    goto L_08A23184;
L_08A23184:;
    s2 = LD32(v0);
    goto L_08A23188;
L_08A23188:;
    cnd_ = s2 == 0;
    a2 = LD32(sp+16);
    if (cnd_) { goto L_08A231A4; }
    goto L_08A23190;
L_08A23190:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    v0 = func_08A220E0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2319C;
L_08A2319C:;
    cnd_ = v0 != 0;
    a0 = 0x8032;
    if (cnd_) { goto L_08A232D0; }
    goto L_08A231A4;
L_08A231A4:;
    a0 = sp + 0;
    goto L_08A231A8;
L_08A231A8:;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A231B0;
L_08A231B0:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s2 = LD32(v0); goto L_08A23188; }
    goto L_08A231BC;
L_08A231BC:;
    a0 = 0x8032;
    goto L_08A231C0;
L_08A231C0:;
    a1 = 28;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A231D0;
L_08A231D0:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2328C; }
    goto L_08A231D8;
L_08A231D8:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    v0 = 0x9d4a0000u;
    if (cnd_) { goto L_08A23244; }
    goto L_08A231E4;
L_08A231E4:;
    v1 = LD32(s0);
    a3 = LD32(s0+8);
    v0 = v0 | 0x123c;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a3 = (a3 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+4, v0);
    v0 = 37;
    a1 = 0xc3a30000u;
    a0 = LD32(sp+16);
    ST32(s0+12, v0);
    a1 = a1 | 0x1edd;
    a2 = 0 + 0;
    ST32(s0, v1);
    ST32(s0+8, a3);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23220;
L_08A23220:;
    ST32(s0+20, v0);
    a1 = 0xf3ec0000u;
    a1 = a1 | 0xf4fc;
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23238;
L_08A23238:;
    ST32(s0+16, v0);
    v0 = LD32(s1+148);
    ST32(s0+24, v0);
    goto L_08A23244;
L_08A23244:;
    a3 = LD32(s1+304);
    t0 = LD32(s2+28);
    a0 = s2 + 0;
    v1 = LD32(a3);
    t0 = t0 | 0x1;
    a1 = 1;
    v0 = LD32(v1-16);
    a2 = 1;
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(s2+4, v1);
    v0 = LD32(a3);
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    v0 = LD32(a3+4);
    ST32(s2+28, t0);
    ST32(s2, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2328C;
L_08A2328C:;
    a0 = LD32(s1+304);
    f12 = f20;
    { rv_t r_ = func_089DCE7C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23298;
L_08A23298:;
    v0 = LD32(s1+296);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A232B0; }
    goto L_08A232A4;
L_08A232A4:;
    v0 = v0 - 1;
    ST32(s1+296, v0);
    a0 = LD32(sp);
    goto L_08A232B0;
L_08A232B0:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A230B8; }
    goto L_08A232C0;
L_08A232C0:;
    { u64 r_ = func_08AC3F94(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A232C8;
L_08A232C8:;
    goto L_08A230BC;
L_08A232D0:;
    a1 = 40;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A232E0;
L_08A232E0:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A233E0; }
    goto L_08A232E8;
L_08A232E8:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A23398; }
    goto L_08A232F4;
L_08A232F4:;
    v0 = LD32(s0);
    v1 = LD32(s0+8);
    a0 = 0x5b200000u;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+8, v1);
    a0 = a0 | 0xcc85;
    a1 = 0xc3a30000u;
    ST32(s0, v0);
    a1 = a1 | 0x1edd;
    ST32(s0+4, a0);
    ST32(s0+12, s4);
    v0 = LD32(s1+304);
    a0 = LD32(sp+16);
    a3 = LD32(v0);
    v1 = LD32(a3-16);
    v0 = v0 + v1;
    a3 = LD32(v0+4);
    ST32(s0+20, a3);
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23344;
L_08A23344:;
    ST32(s0+28, v0);
    a1 = 0xf3ec0000u;
    a1 = a1 | 0xf4fc;
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2335C;
L_08A2335C:;
    ST32(s0+24, v0);
    a1 = 0xaed20000u;
    a1 = a1 | 0xc55;
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23374;
L_08A23374:;
    ST32(s0+36, v0);
    a1 = 0xaa780000u;
    a1 = a1 | 0x6674;
    a0 = LD32(sp+16);
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2338C;
L_08A2338C:;
    ST32(s0+32, v0);
    ST8(s0+17, 0);
    ST8(s0+16, 0);
    goto L_08A23398;
L_08A23398:;
    v1 = LD32(s1+304);
    t0 = LD32(s3+28);
    a0 = s3 + 0;
    v0 = LD32(v1);
    t0 = t0 | 0x1;
    a1 = 1;
    a3 = LD32(v0-16);
    a2 = 1;
    v1 = v1 + a3;
    v0 = LD32(v1+4);
    ST32(s3+4, v0);
    v1 = LD32(s2);
    v0 = LD32(v1-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s3+28, t0);
    ST32(s3, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A233E0;
L_08A233E0:;
    v1 = LD32(s2);
    f12 = BITSF(0);
    a0 = LD32(sp+16);
    v0 = LD32(v1-16);
    a1 = 0x8fbb0000u;
    a1 = a1 | 0x8757;
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23404;
L_08A23404:;
    f12 = f0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_08A2252C(a0, a1, 0, 0, f12);
    goto L_08A23414;
L_08A23414:;
    a0 = sp + 0;
    goto L_08A231A8;
}

/* 08A2341C */
rv_t func_08A2341C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2341C:;
    sp = sp - 16;
    s2 = a3 + 0;
    v0 = LD_U16(a0+366);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08A23498; }
    goto L_08A23444;
L_08A23444:;
    v0 = LD32(a0+304);
    v1 = LD_U8(v0+195);
    cnd_ = v1 == 0;
    v0 = D_08ADF044 - (-4028);
    if (cnd_) { goto L_08A234F4; }
    goto L_08A23454;
L_08A23454:;
    v0 = D_08ADF040 - (-4032);
    a3 = LD32(v0-4032);
    goto L_08A2345C;
L_08A2345C:;
    v0 = D_08B309FC - (2556);
    a2 = LD32(v0+2556);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A23480; }
    goto L_08A2346C;
L_08A2346C:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a2+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_08A23480;
L_08A23480:;
    v1 = D_08B30A04 - (2564);
    v0 = LD32(v1+2564);
    v0 = v0 - a0;
    v0 = (s32)v0 < (s32)a3;
    cnd_ = v0 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A234B0; }
    goto L_08A23498;
L_08A23498:;
    goto L_08A2349C;
L_08A2349C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A234B0:;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A234B8;
L_08A234B8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A23498; }
    goto L_08A234C0;
L_08A234C0:;
    f12 = BITSF(LD32(v0+84));
    a0 = s1 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A234CC;
L_08A234CC:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A2349C; }
    goto L_08A234D4;
L_08A234D4:;
    v0 = D_08AEF9A4 - (-1628);
    f12 = BITSF(LD32(v0-1628));
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A234EC;
L_08A234EC:;
    goto L_08A2349C;
L_08A234F4:;
    a3 = LD32(v0-4028);
    goto L_08A2345C;
}

/* 08A234FC */
rv_t func_08A234FC(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A234FC:;
    sp = sp - 16;
    v1 = a1 + 0;
    v0 = (u32)-1;
    a0 = a1 + 0;
    cnd_ = v1 == v0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A23520; }
    goto L_08A23518;
L_08A23518:;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23520;
L_08A23520:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A2352C */
void func_08A2352C(u32 a1, float f12)
{
    u32 v0 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2352C:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08A23548; }
    goto L_08A23540;
L_08A23540:;
    func_088E00E0(a0, f12);
    goto L_08A23548;
L_08A23548:;
    sp = sp + 16;
    return;
}

/* 08A23554 */
rv_t func_08A23554(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A23554:;
    v0 = LD32(a1);
    sp = sp - 16;
    s1 = (u32)-1;
    a0 = a1 + 0;
    s0 = a1 + 0;
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08A23580; }
    goto L_08A23578;
L_08A23578:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23580;
L_08A23580:;
    ST32(s0, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A23598 */
u32 func_08A23598(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A23598:;
    sp = sp - 48;
    v0 = 4;
    s2 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A235E4; }
    goto L_08A235C4;
L_08A235C4:;
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a1 = s0 + 0;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A235D8;
L_08A235D8:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A23608; }
    goto L_08A235E4;
L_08A235E4:;
    goto L_08A235E8;
L_08A235E8:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_08A23608:;
    a1 = 0x10670000u;
    a0 = v0 + 0;
    a1 = a1 | 0x4eb6;
    a2 = 0 + 0;
    { u64 r_ = func_0896CF4C(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2361C;
L_08A2361C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A235E4; }
    goto L_08A23624;
L_08A23624:;
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    a1 = s0 + 0;
    a2 = 1;
    v0 = func_0881C500(a0, a1, a2);
    goto L_08A23638;
L_08A23638:;
    s3 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A235E4; }
    goto L_08A23644;
L_08A23644:;
    cnd_ = v0 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A23654; }
    goto L_08A2364C;
L_08A2364C:;
    goto L_08A235E8;
L_08A23654:;
    a0 = 0xd0cd0000u;
    goto L_08A23658;
L_08A23658:;
    a3 = s4 + 0;
    a0 = a0 | 0xc21c;
    a1 = s0 + 0;
    a2 = 1;
    v0 = func_0881C5AC(a0, a1, a2, a3);
    goto L_08A2366C;
L_08A2366C:;
    a1 = 0xbeeb0000u;
    s4 = s4 + 1;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = a1 | 0x1a1c;
    cnd_ = v0 == 0;
    a2 = 4;
    if (cnd_) { goto L_08A23698; }
    goto L_08A23688;
L_08A23688:;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A23690;
L_08A23690:;
    cnd_ = v0 == s2;
    if (cnd_) { a0 = LD32(s1); goto L_08A235E4; }
    goto L_08A23698;
L_08A23698:;
    v0 = s4 < s3;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0xd0cd0000u; goto L_08A23658; }
    goto L_08A236A4;
L_08A236A4:;
    a0 = s0 + 0;
    goto L_08A235E4;
}

/* 08A236AC */
void func_08A236AC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_08A236AC:;
    sp = sp - 336;
    s5 = a2 + 0;
    s4 = a1 + 0;
    v0 = LD32(a0+304);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A23714; }
    goto L_08A236E8;
L_08A236E8:;
    goto L_08A236EC;
L_08A236EC:;
    sp = sp + 336;
    return;
L_08A23714:;
    a1 = a0 + 0;
    a2 = 1;
    a0 = sp + 0;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23734;
L_08A23734:;
    v1 = D_08C2CC00 - (-13312);
    a0 = v1 - 13312;
    v0 = D_08AEF9A8 - (-1624);
    f3 = BITSF(LD32(v0-1624));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(v1-13312));
    f2 = BITSF(LD32(a0+4));
    f0 = f0 + f3;
    ST32(sp+32, FBITS(f1));
    s6 = D_08AEF9AC - (-1620);
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    a0 = LD32(s2+304);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    v1 = LD32(a0);
    v0 = LD32(v1+92);
    t_ = v0;
    s0 = sp + 80;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23784;
L_08A23784:;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(176);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(160);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
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
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+40);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    t1 = LD32(s2+304);
    {v0=FBITS(v[17]);}
    ST32(sp+16, FBITS(f2));
    a2 = sp + 16;
    a1 = sp + 0;
    ST32(sp+24, FBITS(f3));
    t0 = 1;
    a0 = s0 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f3));
    ST32(sp+20, v0);
    ST32(sp+68, v0);
    v0 = LD32(t1);
    f12 = BITSF(LD32(s6-1620));
    v1 = LD32(v0-16);
    t1 = t1 + v1;
    a3 = LD32(t1+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08A23864;
L_08A23864:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2386C;
L_08A2386C:;
    v1 = LD32(v0+4);
    s1 = v0 + 0;
    v0 = D_08C29E84 - (-24956);
    cnd_ = v1 != 0;
    s3 = v0 - 24956;
    if (cnd_) { goto L_08A23888; }
    goto L_08A23880;
L_08A23880:;
    v0 = D_08C29E64 - (-24988);
    s3 = v0 - 24988;
    goto L_08A23888;
L_08A23888:;
    f0 = BITSF(LD32(s6-1620));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v0 = D_08AEF9B0 - (-1616);
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    f20 = BITSF(LD32(v0-1616));
    s0 = sp + 64;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    f12 = f20;
    a3 = 0 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+72, FBITS(f0));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f3));
    func_0897BFA8(a0, a1, a2, a3, f12);
    goto L_08A238F8;
L_08A238F8:;
    v0 = D_08AEF9B4 - (-1612);
    f0 = BITSF(LD32(s1));
    f3 = BITSF(LD32(sp+24));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = f3 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = f0 + f3;
    f2 = f2 + f5;
    f1 = f1 + f4;
    a1 = sp + 144;
    ST32(sp+72, FBITS(f0));
    a0 = s0 + 0;
    a2 = s3 + 0;
    f0 = BITSF(LD32(v0-1612));
    f12 = f20;
    a3 = 0 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f1));
    ST32(sp+144, FBITS(f0));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f3));
    { rv_t r_ = func_0897B28C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A23968;
L_08A23968:;
    a1 = LD32(s1+4);
    cnd_ = a1 != 0;
    f12 = BITSF(LD32(s1));
    if (cnd_) { goto L_08A2397C; }
    goto L_08A23974;
L_08A23974:;
    v0 = D_08ADEE84 - (-4476);
    a1 = LD32(v0-4476);
    goto L_08A2397C;
L_08A2397C:;
    ST32(s4, a1);
    a0 = s2 + 0;
    ST32(s5, FBITS(f12));
    func_08A23994(a0, a1, f12);
    goto L_08A2398C;
L_08A2398C:;
    goto L_08A236EC;
}

/* 08A23994 */
void func_08A23994(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0;
L_08A23994:;
    v0 = 1;
    ST8(a0+360, v0);
    ST32(a0+352, a1);
    ST32(a0+356, FBITS(f12));
    return;
}

/* 08A239A8 */
void func_08A239A8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
    float f0 = 0;
L_08A239A8:;
    v0 = LD32(a0+352);
    f0 = BITSF(LD32(a0+356));
    ST8(a0+360, 0);
    ST32(a1, v0);
    v0 = 999;
    ST32(a2, FBITS(f0));
    ST32(a0+352, v0);
    ST32(a0+356, 0);
    return;
}

/* 08A239CC */
u64 func_08A239CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A239CC:;
    v0 = a0 + 0;
    a1 = a1 ^ 0xffff;
    v0 = v0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    t1 = D_08C2CB4C - (-13492);
    t2 = D_08C2CB5C - (-13476);
    t3 = D_08C2CB6C - (-13460);
    t0 = D_08C2CC00 - (-13312);
    a0 = D_08ADEE74 - (-4492);
    a1 = a1 & v0;
    v1 = t1 - 13492;
    a2 = t2 - 13476;
    a3 = t3 - 13460;
    t4 = t0 - 13312;
    cnd_ = a1 == 0;
    a0 = a0 - 4492;
    if (cnd_) { goto L_08A23AC4; }
    goto L_08A23A18;
L_08A23A18:;
    v0 = D_08AEF9B8 - (-1608);
    f4 = BITSF(LD32(v0-1608));
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    ST32(t4+8, 0);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    ST32(t0-13312, 0);
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
    v0 = D_08AEF9BC - (-1604);
    f3 = (float)(s32)FBITS(f0);
    f1 = f1 * f4;
    f0 = BITSF(LD32(v0-1604));
    ST32(v1+4, FBITS(f5));
    f3 = f3 * f4;
    ST32(a3+12, FBITS(f1));
    ST32(a2+4, FBITS(f3));
    ST32(v1+12, FBITS(f1));
    ST32(t1-13492, FBITS(f2));
    ST32(t2-13476, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t3-13460, FBITS(f1));
    ST32(t4+4, FBITS(f0));
    ST32(v1+8, FBITS(f6));
    ST32(a3+4, FBITS(f1));
    ST32(a2+8, FBITS(f3));
    ST32(a3+8, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23AB8;
L_08A23AB8:;
    v1 = D_08B1BD20 - (-17120);
    v1 = v1 - 17120;
    ST32(v1+20, v0);
    goto L_08A23AC4;
L_08A23AC4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A23AD0 */
float func_08A23AD0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A23AD0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08A23AFC; }
    goto L_08A23AE8;
L_08A23AE8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A23AFC; }
    goto L_08A23AFC;
L_08A23AFC:;
    return f0;
}

/* 08A23B04 */
rv_t func_08A23B04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A23B04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08A239CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A23B18;
L_08A23B18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A23B24 */
void func_08A23B24(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A23B24:;
    sp = sp - 16;
    v0 = 1;
    v1 = D_08B1BD7C - (-17028);
    v1 = v1 - 17028;
    ST8(a0+24, v0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0, a1);
    a1 = 0 + 0;
    v0 = LD32(v1);
    goto L_08A23B5C;
L_08A23B5C:;
    cnd_ = a2 == v0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A23BAC; }
    goto L_08A23B64;
L_08A23B64:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_08A23B5C; }
    goto L_08A23B74;
L_08A23B74:;
    v0 = D_08B1BD8C - (-17012);
    s0 = v0 - 17012;
    v1 = LD32(s0+24);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A23B9C; }
    goto L_08A23B8C;
L_08A23B8C:;
    sp = sp + 16;
    return;
L_08A23B9C:;
    a0 = LD32(s0+20);
    v0 = func_0883AE14(a0);
    goto L_08A23BA4;
L_08A23BA4:;
    ST32(s0+24, v0);
    goto L_08A23B8C;
L_08A23BAC:;
    ST32(a0+16, a1);
    ST32(a0+12, a1);
    goto L_08A23B64;
}

/* 08A23BB8 */
void func_08A23BB8(void)
{
L_08A23BB8:;
    return;
}

/* 08A23BC0 */
void func_08A23BC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A23BC0:;
    v0 = LD32(a0+16);
    v1 = LD32(a0+8);
    a1 = a0 + 0;
    a0 = LD32(a0+12);
    v0 = v0 + v1;
    v0 = v0 & 0x3;
    cnd_ = v0 == a0;
    ST32(a1+16, v0);
    if (cnd_) { goto L_08A23BE8; }
    goto L_08A23BE0;
L_08A23BE0:;
    return;
L_08A23BE8:;
    v0 = LD32(a1+4);
    v0 = v0 + 1;
    ST32(a1+4, v0);
    return;
}

/* 08A23BF8 */
u32 func_08A23BF8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 224);
L_08A23BF8:;
    sp = sp - 224;
    a3 = D_08C2AEC8 - (-20792);
    v0 = 999;
    t0 = a0 + 0;
    s3 = a1 + 0;
    a2 = LD32(a0);
    cnd_ = a2 == v0;
    v1 = a3 - 20792;
    if (cnd_) { goto L_08A23E70; }
    goto L_08A23C48;
L_08A23C48:;
    v0 = LD32(v1+4);
    v1 = LD32(a3-20792);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A23C98; }
    goto L_08A23C6C;
L_08A23C6C:;
    a0 = LD32(a1);
    goto L_08A23C70;
L_08A23C70:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A23E7C; }
    goto L_08A23C88;
L_08A23C88:;
    a1 = LD32(a1+4);
    goto L_08A23C8C;
L_08A23C8C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A23C70; }
    goto L_08A23C94;
L_08A23C94:;
    s2 = 0 + 0;
    goto L_08A23C98;
L_08A23C98:;
    cnd_ = s2 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A23E70; }
    goto L_08A23CA0;
L_08A23CA0:;
    v0 = D_08AEF9C0 - (-1600);
    f21 = BITSF(LD32(v0-1600));
    f20 = BITSF(0);
    v0 = D_08B1BD7C - (-17028);
    s7 = v0 - 17028;
    v0 = 0xbf800000u;
    {vr0=BITSF(s5);}
    s1 = t0 + 20;
    {vr1=BITSF(v0);}
    s4 = 0 + 0;
    {vr2=BITSF(s5);}
    fp = sp + 16;
    s6 = s7 + 0;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    goto L_08A23CD8;
L_08A23CD8:;
    v0 = s4 + 3;
    v0 = v0 & 0x3;
    v0 = v0 << 2;
    v0 = v0 + s7;
    a1 = LD32(v0);
    s0 = LD32(s6);
    a0 = s2 + 0;
    a2 = sp + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_089C07BC(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A23CFC;
L_08A23CFC:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = fp + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;func_089C07BC(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];});
    goto L_08A23D0C;
L_08A23D0C:;
    f8 = BITSF(LD32(s3));
    f4 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp));
    f9 = BITSF(LD32(s3+4));
    f10 = BITSF(LD32(s3+8));
    f8 = f8 - f4;
    f5 = BITSF(LD32(sp+20));
    f4 = f4 - f0;
    f6 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f9 = f9 - f5;
    f10 = f10 - f6;
    f5 = f5 - f1;
    f6 = f6 - f0;
    {u32 a_=sp+(96);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = FBITS(f8);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f5);
    {vr1=BITSF(v0);}
    v0 = FBITS(f9);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f6);
    {vr2=BITSF(v0);}
    v0 = FBITS(f10);
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v[10]=BITSF(v0);}
    {v0=FBITS(v[6]);}
    f7 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    {v0=FBITS(v[5]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    ST32(sp+32, FBITS(f4));
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    v0 = FBITS(f7);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+36, FBITS(f5));
    fcc = FCMP(f20, f0, 12);
    ST32(sp+40, FBITS(f6));
    ST32(sp+48, FBITS(f20));
    ST32(sp+52, FBITS(f21));
    ST32(sp+56, FBITS(f20));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f7));
    ST32(sp+80, FBITS(f8));
    ST32(sp+84, FBITS(f9));
    cnd_ = !fcc;
    ST32(sp+88, FBITS(f10));
    if (cnd_) { goto L_08A23E68; }
    goto L_08A23E08;
L_08A23E08:;
    v0 = 1;
    s5 = s5 + 1;
    ST8(s1, v0);
    goto L_08A23E14;
L_08A23E14:;
    s4 = s4 + 1;
    v0 = s4 < 0x4u;
    s6 = s6 + 4;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A23CD8; }
    goto L_08A23E28;
L_08A23E28:;
    v0 = s5 ^ 0x4;
    v0 = 0 < v0;
    goto L_08A23E30;
L_08A23E30:;
    sp = sp + 224;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return v0; }
L_08A23E68:;
    ST8(s1, 0);
    goto L_08A23E14;
L_08A23E70:;
    v0 = 0 + 0;
    ST8(t0+24, 0);
    goto L_08A23E30;
L_08A23E7C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A23C88; }
    goto L_08A23E88;
L_08A23E88:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A23C8C; }
    goto L_08A23E94;
L_08A23E94:;
    goto L_08A23C98;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08A23E9C */
void func_08A23E9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A23E9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A23BF8(a0, a1);
    goto L_08A23EB0;
L_08A23EB0:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+24, 0); goto L_08A23F04; }
    goto L_08A23EB8;
L_08A23EB8:;
    v1 = LD32(s0+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = 1; goto L_08A23F28; }
    goto L_08A23EC4;
L_08A23EC4:;
    v0 = LD32(s0+16);
    v1 = v0 + s0;
    a1 = LD_U8(v1+20);
    a0 = v0 + 5;
    v0 = v0 + 3;
    a0 = a0 & 0x3;
    cnd_ = a1 == 0;
    v0 = v0 & 0x3;
    if (cnd_) { goto L_08A23F04; }
    goto L_08A23EE4;
L_08A23EE4:;
    v0 = v0 + s0;
    v1 = LD_U8(v0+20);
    cnd_ = v1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A23F14; }
    goto L_08A23EF4;
L_08A23EF4:;
    v0 = a0 + s0;
    v1 = LD_U8(v0+20);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A23F14; }
    goto L_08A23F04;
L_08A23F04:;
    goto L_08A23F08;
L_08A23F08:;
    goto L_08A23F0C;
L_08A23F0C:;
    sp = sp + 16;
    return;
L_08A23F14:;
    ST32(s0+8, v0);
    goto L_08A23F18;
L_08A23F18:;
    a0 = s0 + 0;
    func_08A23BC0(a0);
    goto L_08A23F20;
L_08A23F20:;
    goto L_08A23F08;
L_08A23F28:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08A23F80; }
    goto L_08A23F30;
L_08A23F30:;
    v0 = (u32)-1;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A23F08; }
    goto L_08A23F3C;
L_08A23F3C:;
    v0 = LD32(s0+16);
    v1 = v0 + s0;
    a0 = LD_U8(v1+20);
    v0 = v0 + 3;
    v0 = v0 & 0x3;
    v1 = v0 + 3;
    cnd_ = a0 == 0;
    a1 = v1 & 0x3;
    if (cnd_) { goto L_08A23F08; }
    goto L_08A23F5C;
L_08A23F5C:;
    v0 = v0 + s0;
    v1 = LD_U8(v0+20);
    cnd_ = v1 == 0;
    v0 = a1 + s0;
    if (cnd_) { goto L_08A23F18; }
    goto L_08A23F6C;
L_08A23F6C:;
    v1 = LD_U8(v0+20);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08A23F0C; }
    goto L_08A23F78;
L_08A23F78:;
    ST8(s0+24, 0);
    goto L_08A23F08;
L_08A23F80:;
    v1 = v0 + s0;
    a0 = LD_U8(v1+20);
    v0 = v0 + 5;
    cnd_ = a0 == 0;
    v0 = v0 & 0x3;
    if (cnd_) { goto L_08A23FAC; }
    goto L_08A23F94;
L_08A23F94:;
    v0 = v0 + s0;
    v1 = LD_U8(v0+20);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A23F08; }
    goto L_08A23FA4;
L_08A23FA4:;
    goto L_08A23F18;
L_08A23FAC:;
    v0 = v0 + s0;
    v1 = LD_U8(v0+20);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A23F08; }
    goto L_08A23FBC;
L_08A23FBC:;
    ST8(s0+24, 0);
    goto L_08A23F08;
}

/* 08A23FC4 */
void func_08A23FC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A23FC4:;
    sp = sp - 64;
    s3 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0);
    a0 = D_08C2AEC8 - (-20792);
    a0 = a0 - 20792;
    v0 = func_08AD0DDC(a0, a1, a2);
    goto L_08A24000;
L_08A24000:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A24130; }
    goto L_08A24008;
L_08A24008:;
    s5 = LD32(s3+4);
    cnd_ = (s32)s5 <= 0;
    v0 = D_08B1BD7C - (-17028);
    if (cnd_) { goto L_08A24088; }
    goto L_08A24014;
L_08A24014:;
    s4 = v0 - 17028;
    s6 = sp + 16;
    s1 = 0 + 0;
    goto L_08A24020;
L_08A24020:;
    v0 = s1 + 5;
    goto L_08A24024;
L_08A24024:;
    v0 = v0 & 0x3;
    v1 = s1 << 2;
    v0 = v0 << 2;
    v0 = v0 + s4;
    v1 = v1 + s4;
    s0 = LD32(v0);
    a1 = LD32(v1);
    a0 = s2 + 0;
    a2 = sp + 0;
    func_089C07BC(a0, a1, a2);
    goto L_08A2404C;
L_08A2404C:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s6 + 0;
    func_089C07BC(a0, a1, a2);
    goto L_08A2405C;
L_08A2405C:;
    s1 = s1 + 1;
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = s6 + 0;
    func_08A24138(a1, a2);
    goto L_08A24070;
L_08A24070:;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    v0 = s1 + 5;
    if (cnd_) { goto L_08A24024; }
    goto L_08A2407C;
L_08A2407C:;
    s5 = s5 - 1;
    cnd_ = (s32)s5 > 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A24020; }
    goto L_08A24088;
L_08A24088:;
    s1 = LD32(s3+12);
    v0 = LD32(s3+16);
    cnd_ = s1 == v0;
    v0 = D_08B1BD7C - (-17028);
    if (cnd_) { goto L_08A24108; }
    goto L_08A24098;
L_08A24098:;
    v1 = LD32(s3+8);
    s4 = v0 - 17028;
    s6 = sp + 16;
    goto L_08A240A4;
L_08A240A4:;
    v0 = s1 + v1;
    v0 = v0 & 0x3;
    v1 = s1 << 2;
    v0 = v0 << 2;
    v1 = v1 + s4;
    v0 = v0 + s4;
    a1 = LD32(v1);
    s0 = LD32(v0);
    a0 = s2 + 0;
    a2 = s6 + 0;
    func_089C07BC(a0, a1, a2);
    goto L_08A240D0;
L_08A240D0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    func_089C07BC(a0, a1, a2);
    goto L_08A240E0;
L_08A240E0:;
    a0 = s3 + 0;
    a1 = s6 + 0;
    a2 = sp + 0;
    func_08A24138(a1, a2);
    goto L_08A240F0;
L_08A240F0:;
    v1 = LD32(s3+8);
    a0 = LD32(s3+16);
    v0 = s1 + v1;
    v0 = v0 & 0x3;
    cnd_ = v0 != a0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A240A4; }
    goto L_08A24108;
L_08A24108:;
    sp = sp + 64;
    return;
L_08A24130:;
    ST8(s3+24, 0);
    goto L_08A24108;
}

/* 08A24138 */
void func_08A24138(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24138:;
    a0 = a1 + 0;
    a1 = a2 + 0;
    a2 = D_08B1BD8C - (-17012);
    sp = sp - 16;
    a2 = a2 - 17012;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24154;
L_08A24154:;
    a0 = 1;
    v1 = LD32(v0+72);
    v1 = (v1 & ~(0x1u << 1)) | ((a0 & 0x1) << 1);
    ST32(v0+72, v1);
    ST32(v0+40, a0);
    ST32(v0+28, 0);
    sp = sp + 16;
    return;
}

/* 08A24178 */
u64 func_08A24178(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24178:;
    v0 = a0 + 0;
    a1 = a1 ^ 0xffff;
    v0 = v0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    t0 = D_08C2CC1C - (-13284);
    t1 = D_08C2CC2C - (-13268);
    t2 = D_08C2CC3C - (-13252);
    a0 = D_08ADF048 - (-4024);
    a1 = a1 & v0;
    v1 = t0 - 13284;
    a2 = t1 - 13268;
    a3 = t2 - 13252;
    cnd_ = a1 == 0;
    a0 = a0 - 4024;
    if (cnd_) { goto L_08A24254; }
    goto L_08A241BC;
L_08A241BC:;
    v0 = D_08AEF9C4 - (-1596);
    f4 = BITSF(LD32(v0-1596));
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
    ST32(t0-13284, FBITS(f2));
    ST32(t1-13268, FBITS(f6));
    ST32(t2-13252, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24248;
L_08A24248:;
    v1 = D_08B1BD8C - (-17012);
    v1 = v1 - 17012;
    ST32(v1+20, v0);
    goto L_08A24254;
L_08A24254:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A24260 */
rv_t func_08A24260(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24260:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08A24178(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24274;
L_08A24274:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A24280 */
rv_t func_08A24280(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24280:;
    v0 = 999;
    ST32(a0, v0);
    v0 = (u32)-1;
    sp = sp - 16;
    ST32(a0+4, a1);
    ST8(a0+12, a2);
    ST32(a0+36, v0);
    ST32(a0+8, 0);
    s0 = a0 + 0;
    s0 = s0 + 16;
    f0 = func_08A24438(a0);
    goto L_08A242B4;
L_08A242B4:;
    v1 = 0 + 0;
    goto L_08A242B8;
L_08A242B8:;
    v1 = v1 + 1;
    v0 = v1 < 0x2u;
    ST32(s0, 0);
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A242B8; }
    goto L_08A242CC;
L_08A242CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A242DC */
rv_t func_08A242DC(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A242DC:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a2 + 0;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 2;
    s0 = a0 + 0;
    a0 = 0x805f;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24310;
L_08A24310:;
    s0 = s0 & 0xff;
    v1 = LD32(v0+24);
    s1 = s1 & 0xff;
    a0 = v0 + 0;
    ST8(v1, s0);
    a1 = 1;
    a2 = 1;
    ST8(v1+1, s1);
    v1 = 2;
    ST32(v0+4, s2);
    ST32(v0, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24340;
L_08A24340:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A24358 */
rv_t func_08A24358(u32 a0, u32 a1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A24358:;
    sp = sp - 32;
    a3 = 0 + 0;
    s1 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8060;
    s0 = s0 & 0xff;
    f20 = f12;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24390;
L_08A24390:;
    v1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    ST8(v1, s0);
    a2 = 1;
    ST32(v1+4, FBITS(f20));
    v1 = 2;
    ST32(v0+4, s1);
    ST32(v0, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A243B8;
L_08A243B8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A243D0 */
rv_t func_08A243D0(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A243D0:;
    sp = sp - 16;
    a3 = 0 + 0;
    s1 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = 0x8061;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A243FC;
L_08A243FC:;
    s0 = s0 & 0xff;
    v1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    ST8(v1, s0);
    v1 = 2;
    a2 = 1;
    ST32(v0+4, s1);
    ST32(v0, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24424;
L_08A24424:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A24438 */
float func_08A24438(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A24438:;
    sp = sp - 48;
    a1 = LD32(a0+4);
    cnd_ = a1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A24468; }
    goto L_08A24454;
L_08A24454:;
    sp = sp + 48;
    return f0;
L_08A24468:;
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2447C;
L_08A2447C:;
    v1 = D_08AEF9C8 - (-1592);
    f20 = BITSF(LD32(v1-1592));
    a0 = LD32(sp);
    a1 = 0x9a7a0000u;
    a1 = a1 | 0x4f2;
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24498;
L_08A24498:;
    ST32(s0+24, FBITS(f0));
    a1 = 0x57100000u;
    a1 = a1 | 0x128;
    a0 = LD32(sp);
    f12 = f20;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A244B0;
L_08A244B0:;
    ST32(s0+28, FBITS(f0));
    a1 = 0x52250000u;
    f12 = f20;
    a0 = LD32(sp);
    a1 = a1 | 0x2d4d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A244C8;
L_08A244C8:;
    ST32(s0+32, FBITS(f0));
    a1 = 0xf9b00000u;
    a1 = a1 | 0x16a;
    a0 = LD32(sp);
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A244E0;
L_08A244E0:;
    v1 = D_08AEF9CC - (-1588);
    f3 = BITSF(LD32(v1-1588));
    f0 = BITSF(LD32(s0+24));
    ST32(s0+36, v0);
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    f1 = f3;
    if (cnd_) { goto L_08A24504; }
    goto L_08A24500;
L_08A24500:;
    f1 = f0;
    goto L_08A24504;
L_08A24504:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s0+24, FBITS(f1));
    if (cnd_) { goto L_08A2451C; }
    goto L_08A24518;
L_08A24518:;
    f0 = f1;
    goto L_08A2451C;
L_08A2451C:;
    f1 = BITSF(LD32(s0+28));
    ST32(s0+24, FBITS(f0));
    fcc = FCMP(f3, f1, 14);
    cnd_ = fcc;
    f0 = f3;
    if (cnd_) { goto L_08A24538; }
    goto L_08A24534;
L_08A24534:;
    f0 = f1;
    goto L_08A24538;
L_08A24538:;
    f2 = BITSF(0);
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s0+28, FBITS(f0));
    if (cnd_) { goto L_08A24550; }
    goto L_08A2454C;
L_08A2454C:;
    f2 = f0;
    goto L_08A24550;
L_08A24550:;
    f0 = BITSF(LD32(s0+32));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0+28, FBITS(f2));
    if (cnd_) { goto L_08A2456C; }
    goto L_08A24568;
L_08A24568:;
    f1 = f0;
    goto L_08A2456C;
L_08A2456C:;
    fcc = FCMP(f3, f1, 14);
    f0 = f3;
    cnd_ = fcc;
    ST32(s0+32, FBITS(f1));
    if (cnd_) { goto L_08A24580; }
    goto L_08A2457C;
L_08A2457C:;
    f0 = f1;
    goto L_08A24580;
L_08A24580:;
    ST32(s0+32, FBITS(f0));
    goto L_08A24454;
}

/* 08A24588 */
rv_t func_08A24588(u32 a0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A24588:;
    sp = sp - 32;
    v0 = D_08AEF9D0 - (-1584);
    f20 = f12;
    a1 = 0xaab70000u;
    a1 = a1 | 0x656d;
    f12 = BITSF(LD32(v0-1584));
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A245AC;
L_08A245AC:;
    v0 = D_08AEF9D4 - (-1580);
    f1 = BITSF(LD32(v0-1580));
    v1 = D_08AEF9D8 - (-1576);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f2 = BITSF(LD32(v1-1576));
    if (cnd_) { goto L_08A245CC; }
    goto L_08A245C8;
L_08A245C8:;
    f0 = f1;
    goto L_08A245CC;
L_08A245CC:;
    f0 = f20 / f0;
    f1 = f0 - f2;
    fcc = FCMP(f2, f0, 14);
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A245F8; }
    goto L_08A245E8;
L_08A245E8:;
    f1 = BITSF(F2I(f1, 1));
    v0 = 0x80000000u;
    v1 = FBITS(f1);
    v1 = v1 | v0;
    goto L_08A245F8;
L_08A245F8:;
    v0 = v1 & 0xff;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A24608 */
float func_08A24608(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24608:;
    sp = sp - 16;
    v0 = D_08AEF9DC - (-1572);
    a1 = 0x8e930000u;
    f12 = BITSF(LD32(v0-1572));
    a1 = a1 | 0x9053;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24624;
L_08A24624:;
    v0 = D_08AEF9E0 - (-1568);
    f1 = BITSF(LD32(v0-1568));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_08A2463C; }
    goto L_08A2463C;
L_08A2463C:;
    sp = sp + 16;
    return f0;
}

/* 08A24648 */
float func_08A24648(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A24648:;
    f12 = BITSF(0);
    a1 = 0x78ed0000u;
    sp = sp - 32;
    a1 = a1 | 0x25f0;
    s0 = a0 + 0;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24678;
L_08A24678:;
    v0 = D_08AEF9E4 - (-1564);
    f12 = BITSF(LD32(v0-1564));
    a1 = 0x8e930000u;
    a0 = s0 + 0;
    a1 = a1 | 0x9053;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24694;
L_08A24694:;
    v0 = D_08AEF9EC - (-1556);
    f12 = BITSF(LD32(v0-1556));
    v0 = D_08AEF9E8 - (-1560);
    f22 = BITSF(LD32(v0-1560));
    a1 = 0xaab70000u;
    f21 = f0;
    fcc = FCMP(f22, f0, 14);
    a0 = s0 + 0;
    cnd_ = fcc;
    a1 = a1 | 0x656d;
    if (cnd_) { goto L_08A246C0; }
    goto L_08A246BC;
L_08A246BC:;
    f21 = f22;
    goto L_08A246C0;
L_08A246C0:;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A246C8;
L_08A246C8:;
    v0 = D_08AEF9F0 - (-1552);
    f20 = f0;
    f0 = BITSF(LD32(v0-1552));
    a1 = 0x8c230000u;
    v0 = D_08AEF9F4 - (-1548);
    fcc = FCMP(f0, f20, 14);
    a0 = s0 + 0;
    f12 = BITSF(LD32(v0-1548));
    cnd_ = fcc;
    a1 = a1 | 0xf176;
    if (cnd_) { goto L_08A246F4; }
    goto L_08A246F0;
L_08A246F0:;
    f20 = f0;
    goto L_08A246F4;
L_08A246F4:;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A246FC;
L_08A246FC:;
    f1 = f0;
    f0 = f22 / f20;
    v0 = D_08AEF9F8 - (-1544);
    f0 = f21 * f0;
    f0 = f0 - f1;
    f1 = BITSF(LD32(v0-1544));
    f0 = f22 / f0;
    f0 = f0 * f1;
    f0 = f23 + f0;
    sp = sp + 32;
    return f0;
}

/* 08A24740 */
rv_t func_08A24740(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24740:;
    sp = sp - 16;
    v0 = D_08AEF9FC - (-1540);
    a1 = 0x8c230000u;
    f12 = BITSF(LD32(v0-1540));
    a1 = a1 | 0xf176;
    { rv_t r_ = func_0896CDCC(a0, a1, t1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2475C;
L_08A2475C:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = D_08AEFA00 - (-1536);
    if (cnd_) { goto L_08A2477C; }
    goto L_08A24774;
L_08A24774:;
    f0 = BITSF(LD32(v0-1536));
    f0 = f0 / f1;
    goto L_08A2477C;
L_08A2477C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A24788 */
rv_t func_08A24788(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A24788:;
    sp = sp - 32;
    v0 = 0x805e;
    s1 = a0 + 0;
    a2 = LD_U16(a1+16);
    v1 = a2 & 0xffff;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2486C; }
    goto L_08A247B0;
L_08A247B0:;
    v0 = a0 << 2;
    goto L_08A247B4;
L_08A247B4:;
    v0 = v0 + s1;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08A247EC; }
    goto L_08A247D0;
L_08A247D0:;
    ST32(v0+16, FBITS(f1));
    v1 = a2 & 0xffff;
    goto L_08A247D8;
L_08A247D8:;
    v0 = 0x805e;
    cnd_ = v1 == v0;
    v0 = 0x807e;
    if (cnd_) { goto L_08A24828; }
    goto L_08A247E4;
L_08A247E4:;
    cnd_ = v1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A24804; }
    goto L_08A247EC;
L_08A247EC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A24804:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = 1; goto L_08A247EC; }
    goto L_08A24810;
L_08A24810:;
    a2 = LD32(a1+12);
    a1 = LD32(a1+8);
    goto L_08A24818;
L_08A24818:;
    a0 = s1 + 0;
    f0 = func_08A24888(a0, a1, a2);
    goto L_08A24820;
L_08A24820:;
    v1 = 1;
    goto L_08A247EC;
L_08A24828:;
    s0 = LD32(a1+24);
    cnd_ = s0 == 0;
    a3 = s0 + 40;
    if (cnd_) { goto L_08A24860; }
    goto L_08A24834;
L_08A24834:;
    v0 = LD32(s0+20);
    a2 = s0 + 28;
    ST32(sp, v0);
    t2 = 1;
    a0 = LD32(s0+4);
    a1 = LD32(s0+8);
    t0 = LD32(s0+16);
    t1 = LD32(s0+12);
    t3 = LD32(s0+52);
    f12 = BITSF(LD32(s0+56));
    func_08A01590(a0, a1, a2, a3, t0, t1, t2, t3, f12, sp);
    goto L_08A24860;
L_08A24860:;
    a2 = LD32(s0+12);
    a1 = LD32(s0+8);
    goto L_08A24818;
L_08A2486C:;
    v0 = LD32(a1+24);
    a0 = LD_U8(v0+24);
    v1 = a0 < 0x2u;
    cnd_ = v1 == 0;
    v1 = a2 & 0xffff;
    if (cnd_) { goto L_08A247D8; }
    goto L_08A24880;
L_08A24880:;
    v0 = a0 << 2;
    goto L_08A247B4;
}

/* 08A24888 */
float func_08A24888(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A24888:;
    sp = sp - 112;
    s3 = a1 + 0;
    s2 = a2 + 0;
    v0 = LD32(a0+36);
    cnd_ = (s32)v0 < 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A24AF4; }
    goto L_08A248C4;
L_08A248C4:;
    v0 = 999;
    cnd_ = a2 == v0;
    v0 = 0xc56c0000u;
    if (cnd_) { goto L_08A24AF4; }
    goto L_08A248D0;
L_08A248D0:;
    v0 = v0 | 0x8efd;
    s6 = 0 + 0;
    cnd_ = a1 == v0;
    s4 = (u32)-1;
    if (cnd_) { goto L_08A24B74; }
    goto L_08A248E0;
L_08A248E0:;
    s5 = D_08C2C190 - (-15984);
    v0 = s5 - 15984;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+48, v0);
    v1 = v1 + 1;
    s0 = sp + 48;
    ST32(v0+8, v1);
    ST32(sp+56, 0);
    cnd_ = a0 == 0;
    ST32(sp+52, 0);
    if (cnd_) { goto L_08A24958; }
    goto L_08A2490C;
L_08A2490C:;
    a1 = LD32(s5-15984);
    a2 = a0 + 0;
    goto L_08A24914;
L_08A24914:;
    a0 = LD32(s0+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_08A24948; }
    goto L_08A2492C;
L_08A2492C:;
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A2495C; }
    goto L_08A2493C;
L_08A2493C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08A2492C; }
    goto L_08A24948;
L_08A24948:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A24914; }
    goto L_08A24958;
L_08A24958:;
    a0 = s0 + 0;
    goto L_08A2495C;
L_08A2495C:;
    a1 = 1;
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2496C;
L_08A2496C:;
    v0 = LD32(sp+56);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+36); goto L_08A249E8; }
    goto L_08A24978;
L_08A24978:;
    f20 = BITSF(0);
    a2 = LD32(v0);
    goto L_08A24980;
L_08A24980:;
    a0 = s0 + 0;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A249D0; }
    goto L_08A2498C;
L_08A2498C:;
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    v0 = a2 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08A249D0; }
    goto L_08A249AC;
L_08A249AC:;
    v1 = LD32(v1-16);
    v1 = a2 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A249D0; }
    goto L_08A249C4;
L_08A249C4:;
    v0 = LD32(a2+136);
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(a2+244); goto L_08A24B58; }
    goto L_08A249D0;
L_08A249D0:;
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A249D8;
L_08A249D8:;
    v0 = LD32(sp+56);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(v0); goto L_08A24980; }
    goto L_08A249E4;
L_08A249E4:;
    v0 = LD32(s1+36);
    goto L_08A249E8;
L_08A249E8:;
    v0 = (s32)v0 < (s32)s6;
    cnd_ = v0 == 0;
    s1 = LD32(sp+48);
    if (cnd_) { goto L_08A24A70; }
    goto L_08A249F4;
L_08A249F4:;
    v0 = 999;
    cnd_ = s4 == v0;
    v1 = s5 - 15984;
    if (cnd_) { goto L_08A24A70; }
    goto L_08A24A00;
L_08A24A00:;
    v0 = LD32(v1+4);
    v1 = D_08C2C190 - (-15984);
    a0 = LD32(v1-15984);
    v0 = v0 - 1;
    v0 = s4 & v0;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A24A54; }
    goto L_08A24A28;
L_08A24A28:;
    a0 = LD32(a1);
    goto L_08A24A2C;
L_08A24A2C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A24B38; }
    goto L_08A24A44;
L_08A24A44:;
    a1 = LD32(a1+4);
    goto L_08A24A48;
L_08A24A48:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A24A2C; }
    goto L_08A24A50;
L_08A24A50:;
    v1 = 0 + 0;
    goto L_08A24A54;
L_08A24A54:;
    cnd_ = v1 == 0;
    s1 = LD32(sp+48);
    if (cnd_) { goto L_08A24A70; }
    goto L_08A24A5C;
L_08A24A5C:;
    v0 = LD32(v1);
    a0 = LD32(v0-16);
    a0 = v1 + a0;
    { rv_t r_ = func_088744F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24A6C;
L_08A24A6C:;
    s1 = LD32(sp+48);
    goto L_08A24A70;
L_08A24A70:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A24AF4; }
    goto L_08A24A80;
L_08A24A80:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A24AF4; }
    goto L_08A24A8C;
L_08A24A8C:;
    v0 = LD32(s1);
    goto L_08A24A90;
L_08A24A90:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A24AE4; }
    goto L_08A24AA4;
L_08A24AA4:;
    v0 = LD_U8(s0+8);
    goto L_08A24AA8;
L_08A24AA8:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A24B30; }
    goto L_08A24AB0;
L_08A24AB0:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A24B20; }
    goto L_08A24AB8;
L_08A24AB8:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A24AC0;
L_08A24AC0:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24ACC;
L_08A24ACC:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A24AD8;
L_08A24AD8:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A24AA8; }
    goto L_08A24AE0;
L_08A24AE0:;
    v1 = LD32(s1+4);
    goto L_08A24AE4;
L_08A24AE4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A24A90; }
    goto L_08A24AF4;
L_08A24AF4:;
    goto L_08A24AF8;
L_08A24AF8:;
    sp = sp + 112;
    return f0;
L_08A24B20:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A24AC0;
L_08A24B30:;
    s0 = LD32(s0+4);
    goto L_08A24AD8;
L_08A24B38:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A24A44; }
    goto L_08A24B44;
L_08A24B44:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A24A48; }
    goto L_08A24B50;
L_08A24B50:;
    goto L_08A24A54;
L_08A24B58:;
    cnd_ = v0 != s2;
    if (cnd_) { goto L_08A249D0; }
    goto L_08A24B60;
L_08A24B60:;
    v1 = LD32(v1+4);
    s6 = s6 + 1;
    v0 = v1 < s4;
    if (v0 != 0) s4 = v1;
    goto L_08A249D0;
L_08A24B74:;
    s0 = D_08C2ADE8 - (-21016);
    v0 = s0 - 21016;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A24BF0; }
    goto L_08A24BA0;
L_08A24BA0:;
    a2 = LD32(s0-21016);
    a3 = a1 + 0;
    goto L_08A24BA8;
L_08A24BA8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A24BDC; }
    goto L_08A24BC0;
L_08A24BC0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08A24BF0; }
    goto L_08A24BD0;
L_08A24BD0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A24BC0; }
    goto L_08A24BDC;
L_08A24BDC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A24BA8; }
    goto L_08A24BEC;
L_08A24BEC:;
    a0 = sp + 0;
    goto L_08A24BF0;
L_08A24BF0:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08ABDD18(a0, a1);
    goto L_08A24C00;
L_08A24C00:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+36); goto L_08A24C7C; }
    goto L_08A24C0C;
L_08A24C0C:;
    f20 = BITSF(0);
    a2 = LD32(v0);
    goto L_08A24C14;
L_08A24C14:;
    a0 = sp + 0;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A24C64; }
    goto L_08A24C20;
L_08A24C20:;
    v1 = LD32(a2);
    v0 = LD32(v1-12);
    v0 = a2 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08A24C64; }
    goto L_08A24C40;
L_08A24C40:;
    v1 = LD32(v1-16);
    v1 = a2 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A24C64; }
    goto L_08A24C58;
L_08A24C58:;
    v0 = LD32(a2+260);
    cnd_ = v0 == s2;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A24E0C; }
    goto L_08A24C64;
L_08A24C64:;
    func_08ABDD18(a0, a1);
    goto L_08A24C6C;
L_08A24C6C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(v0); goto L_08A24C14; }
    goto L_08A24C78;
L_08A24C78:;
    v0 = LD32(s1+36);
    goto L_08A24C7C;
L_08A24C7C:;
    v0 = (s32)v0 < (s32)s6;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08A24D48; }
    goto L_08A24C88;
L_08A24C88:;
    v0 = 999;
    cnd_ = s4 == v0;
    v1 = s0 - 21016;
    if (cnd_) { goto L_08A24D48; }
    goto L_08A24C94;
L_08A24C94:;
    v0 = LD32(v1+4);
    v1 = D_08C2ADE8 - (-21016);
    a0 = LD32(v1-21016);
    v0 = v0 - 1;
    v0 = s4 & v0;
    v0 = v0 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A24CE8; }
    goto L_08A24CBC;
L_08A24CBC:;
    a0 = LD32(a1);
    goto L_08A24CC0;
L_08A24CC0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A24DEC; }
    goto L_08A24CD8;
L_08A24CD8:;
    a1 = LD32(a1+4);
    goto L_08A24CDC;
L_08A24CDC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A24CC0; }
    goto L_08A24CE4;
L_08A24CE4:;
    s1 = 0 + 0;
    goto L_08A24CE8;
L_08A24CE8:;
    cnd_ = s1 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08A24D48; }
    goto L_08A24CF0;
L_08A24CF0:;
    s0 = sp + 16;
    a0 = s0 + 0;
    func_0897A7A0(a0);
    goto L_08A24CFC;
L_08A24CFC:;
    v0 = LD32(sp+44);
    a0 = s1 + 0;
    v0 = v0 | 0x1;
    ST32(sp+44, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    ST32(sp+28, FBITS(f0));
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(sp+20, v1);
    v0 = LD32(s1);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24D44;
L_08A24D44:;
    s1 = LD32(sp);
    goto L_08A24D48;
L_08A24D48:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A24AF4; }
    goto L_08A24D58;
L_08A24D58:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A24AF4; }
    goto L_08A24D64;
L_08A24D64:;
    v0 = LD32(s1);
    goto L_08A24D68;
L_08A24D68:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A24DBC; }
    goto L_08A24D7C;
L_08A24D7C:;
    v0 = LD_U8(s0+8);
    goto L_08A24D80;
L_08A24D80:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A24DE4; }
    goto L_08A24D88;
L_08A24D88:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A24DD4; }
    goto L_08A24D90;
L_08A24D90:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A24D98;
L_08A24D98:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24DA4;
L_08A24DA4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A24DB0;
L_08A24DB0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A24D80; }
    goto L_08A24DB8;
L_08A24DB8:;
    v1 = LD32(s1+4);
    goto L_08A24DBC;
L_08A24DBC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A24D68; }
    goto L_08A24DCC;
L_08A24DCC:;
    goto L_08A24AF8;
L_08A24DD4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A24D98;
L_08A24DE4:;
    s0 = LD32(s0+4);
    goto L_08A24DB0;
L_08A24DEC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A24CD8; }
    goto L_08A24DF8;
L_08A24DF8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A24CDC; }
    goto L_08A24E04;
L_08A24E04:;
    goto L_08A24CE8;
L_08A24E0C:;
    s6 = s6 + 1;
    v0 = v1 < s4;
    if (v0 != 0) s4 = v1;
    goto L_08A24C64;
}

/* 08A24E1C */
float func_08A24E1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A24E1C:;
    sp = sp - 16;
    t0 = D_08C2CCFC - (-13060);
    v1 = LD32(t0-13060);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A24E60; }
    goto L_08A24E34;
L_08A24E34:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08A24E3C;
L_08A24E3C:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08A24E70; }
    goto L_08A24E54;
L_08A24E54:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08A24E3C; }
    goto L_08A24E60;
L_08A24E60:;
    v0 = t0 - 13060;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A24E90; }
    goto L_08A24E70;
L_08A24E70:;
    cnd_ = a3 == 0;
    v0 = D_08AEFA04 - (-1532);
    if (cnd_) { goto L_08A24E88; }
    goto L_08A24E78;
L_08A24E78:;
    f0 = BITSF(LD32(a3));
    goto L_08A24E7C;
L_08A24E7C:;
    sp = sp + 16;
    return f0;
L_08A24E88:;
    f0 = BITSF(LD32(v0-1532));
    goto L_08A24E7C;
L_08A24E90:;
    a2 = 1;
    v0 = func_08AD0E70(a0, a1, a2);
    goto L_08A24E98;
L_08A24E98:;
    a3 = v0 + 0;
    goto L_08A24E70;
}

/* 08A24EA0 */
void func_08A24EA0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A24EA0:;
    sp = sp - 64;
    a0 = 0xd0cd0000u;
    a1 = 0x2e0000u;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0x6d1;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A24EE4;
L_08A24EE4:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    v0 = D_08AEFA08 - (-1528);
    if (cnd_) { goto L_08A25020; }
    goto L_08A24EF0;
L_08A24EF0:;
    a0 = 0xd0cd0000u;
    a0 = a0 | 0xc21c;
    v0 = func_0881C478(a0);
    goto L_08A24EFC;
L_08A24EFC:;
    s3 = v0 + 0;
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A24FF4; }
    goto L_08A24F08;
L_08A24F08:;
    v0 = D_08AEFA08 - (-1528);
    f20 = BITSF(0);
    f21 = BITSF(LD32(v0-1528));
    v0 = D_08C2CCFC - (-13060);
    s5 = v0 - 13060;
    s4 = D_08AEFA0C - (-1524);
    a0 = 0xd0cd0000u;
    goto L_08A24F24;
L_08A24F24:;
    a0 = a0 | 0xc21c;
    a1 = s2 + 0;
    v0 = func_0881C4B0(a0, a1);
    goto L_08A24F30;
L_08A24F30:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A24FE4; }
    goto L_08A24F38;
L_08A24F38:;
    f12 = BITSF(LD32(s4-1524));
    a1 = 0x3e7b0000u;
    a0 = v0 + 0;
    a1 = a1 | 0x434f;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24F4C;
L_08A24F4C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    ST32(sp+4, FBITS(f0));
    if (cnd_) { goto L_08A24F6C; }
    goto L_08A24F5C;
L_08A24F5C:;
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    a0 = D_08C2CCFC - (-13060);
    if (cnd_) { goto L_08A24F74; }
    goto L_08A24F6C;
L_08A24F6C:;
    ST32(sp+4, FBITS(f21));
    a0 = D_08C2CCFC - (-13060);
    goto L_08A24F74;
L_08A24F74:;
    v1 = a0 - 13060;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    s0 = LD32(s0);
    if (cnd_) { goto L_08A24FE4; }
    goto L_08A24F84;
L_08A24F84:;
    v0 = LD32(a0-13060);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_08A24FB8; }
    goto L_08A24F90;
L_08A24F90:;
    v1 = v0 + 0;
    goto L_08A24F94;
L_08A24F94:;
    a0 = v1 + 12;
    s1 = v1 + 8;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_08A24FE4; }
    goto L_08A24FAC;
L_08A24FAC:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A24F94; }
    goto L_08A24FB8;
L_08A24FB8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A24FC0;
L_08A24FC0:;
    ST32(v0, s0);
    v1 = LD32(s5+4);
    f0 = BITSF(LD32(sp+4));
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(v0+4, FBITS(f0));
    ST32(s5+4, v1);
    ST32(s1, v0);
    goto L_08A24FE4;
L_08A24FE4:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)s3;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0xd0cd0000u; goto L_08A24F24; }
    goto L_08A24FF4;
L_08A24FF4:;
    sp = sp + 64;
    return;
L_08A25020:;
    f12 = BITSF(LD32(v0-1528));
    a1 = 0x311d0000u;
    a1 = a1 | 0x4dbf;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25030;
L_08A25030:;
    v0 = D_08B1BDE8 - (-16920);
    ST32(v0-16920, FBITS(f0));
    goto L_08A24EF0;
}

/* 08A2503C */
void func_08A2503C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2503C:;
    sp = sp - 16;
    s1 = D_08C2CCFC - (-13060);
    s0 = LD32(s1-13060);
    s2 = s1 - 13060;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A25088; }
    goto L_08A25060;
L_08A25060:;
    v0 = LD32(s0+8);
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A250E0; }
    goto L_08A25070;
L_08A25070:;
    v0 = LD32(s0+12);
    goto L_08A25074;
L_08A25074:;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A250D0; }
    goto L_08A25080;
L_08A25080:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A25088;
L_08A25088:;
    v0 = LD32(s2+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A250C0; }
    goto L_08A25094;
L_08A25094:;
    v0 = s1 - 13060;
    goto L_08A25098;
L_08A25098:;
    ST32(s2+16, 0);
    ST32(s1-13060, 0);
    ST32(s2+12, 0);
    ST32(v0+4, 0);
    sp = sp + 16;
    return;
L_08A250C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A250C8;
L_08A250C8:;
    v0 = s1 - 13060;
    goto L_08A25098;
L_08A250D0:;
    func_08AD0EE8(a0, a1, t1, t2, t3);
    goto L_08A250D8;
L_08A250D8:;
    goto L_08A25080;
L_08A250E0:;
    func_08AD0EE8(a0, a1, t1, t2, t3);
    goto L_08A250E8;
L_08A250E8:;
    v0 = LD32(s0+12);
    goto L_08A25074;
}

/* 08A250F0 */
float func_08A250F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A250F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08979DF4();
    goto L_08A25104;
L_08A25104:;
    v1 = 2;
    cnd_ = v0 == v1;
    if (cnd_) { f0 = BITSF(LD32(s0+28)); goto L_08A2511C; }
    goto L_08A25110;
L_08A25110:;
    v0 = func_08979DF4();
    goto L_08A25118;
L_08A25118:;
    f0 = BITSF(LD32(s0+24));
    goto L_08A2511C;
L_08A2511C:;
    sp = sp + 16;
    return f0;
}

/* 08A2512C */
rv_t func_08A2512C(u32 a0, u32 a1, u32 t1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2512C:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    t2 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = t2 & v0;
    t3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A25218; }
    goto L_08A25158;
L_08A25158:;
    v0 = D_08AEFA10 - (-1520);
    f3 = BITSF(LD32(v0-1520));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    t0 = D_08C2CC4C - (-13236);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    t1 = D_08C2CC5C - (-13220);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f3;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f3;
    a2 = D_08C2CC6C - (-13204);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    a3 = D_08C2CCFC - (-13060);
    a0 = a3 - 13060;
    f1 = f1 * f3;
    v0 = t0 - 13236;
    v1 = t1 - 13220;
    a1 = a2 - 13204;
    ST32(a1+12, FBITS(f2));
    ST32(v0+4, FBITS(f4));
    ST32(v0+8, FBITS(f5));
    ST32(v0+12, FBITS(f2));
    ST32(v1+4, FBITS(f6));
    ST32(v1+8, FBITS(f6));
    ST32(t0-13236, FBITS(f1));
    ST32(t1-13220, FBITS(f5));
    ST32(v1+12, FBITS(f2));
    ST32(a2-13204, FBITS(f2));
    ST32(a3-13060, 0);
    ST32(a0+20, 0);
    ST32(a1+8, FBITS(f2));
    ST32(a1+4, FBITS(f2));
    ST32(a0+4, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    goto L_08A25218;
L_08A25218:;
    v0 = t3 < 0x1u;
    v0 = t2 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A25270; }
    goto L_08A25228;
L_08A25228:;
    v0 = D_08C2CCFC - (-13060);
    s0 = LD32(v0-13060);
    cnd_ = s0 == 0;
    s1 = v0 - 13060;
    if (cnd_) { goto L_08A25258; }
    goto L_08A25238;
L_08A25238:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A252A0; }
    goto L_08A25244;
L_08A25244:;
    a1 = LD32(s0+12);
    goto L_08A25248;
L_08A25248:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A25290; }
    goto L_08A25250;
L_08A25250:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A25258;
L_08A25258:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A25280; }
    goto L_08A25264;
L_08A25264:;
    ST32(s1+16, 0);
    goto L_08A25268;
L_08A25268:;
    ST32(s1+12, 0);
    goto L_08A25270;
L_08A25270:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A25280:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A25288;
L_08A25288:;
    ST32(s1+16, 0);
    goto L_08A25268;
L_08A25290:;
    a0 = s1 + 0;
    func_08AD0EE8(a0, a1, t1, t2, t3);
    goto L_08A25298;
L_08A25298:;
    goto L_08A25250;
L_08A252A0:;
    a0 = s1 + 0;
    func_08AD0EE8(a0, a1, t1, t2, t3);
    goto L_08A252A8;
L_08A252A8:;
    a1 = LD32(s0+12);
    goto L_08A25248;
}

/* 08A252B0 */
rv_t func_08A252B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A252B0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A2512C(a0, a1, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A252C4;
L_08A252C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A252D0 */
rv_t func_08A252D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A252D0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A2512C(a0, a1, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A252E4;
L_08A252E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A252F0 */
rv_t func_08A252F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A252F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = 1;
    func_08A052C8();
    goto L_08A2530C;
L_08A2530C:;
    v0 = 109;
    v1 = LD_U16(s0+16);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 110;
    if (cnd_) { goto L_08A253E0; }
    goto L_08A2531C;
L_08A2531C:;
    cnd_ = v0 == 0;
    v0 = 0x8055;
    if (cnd_) { goto L_08A25398; }
    goto L_08A25324;
L_08A25324:;
    v0 = 8;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 9;
    if (cnd_) { goto L_08A25348; }
    goto L_08A25330;
L_08A25330:;
    cnd_ = v0 == 0;
    v0 = 90;
    if (cnd_) { goto L_08A25368; }
    goto L_08A25338;
L_08A25338:;
    v0 = v1 - 3;
    goto L_08A2533C;
L_08A2533C:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = 0 + 0; goto L_08A25348; }
    goto L_08A25348;
L_08A25348:;
    f0 = func_08A052D4(0, 0, 0);
    goto L_08A25350;
L_08A25350:;
    v0 = s1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A25368:;
    cnd_ = v1 == v0;
    v0 = 108;
    if (cnd_) { goto L_08A25388; }
    goto L_08A25370;
L_08A25370:;
    cnd_ = v1 != v0;
    if (cnd_) { s1 = 0 + 0; goto L_08A25348; }
    goto L_08A25378;
L_08A25378:;
    a0 = s0 + 0;
    func_089F1B68(a0, 0, 0, 0);
    goto L_08A25380;
L_08A25380:;
    goto L_08A25348;
L_08A25388:;
    a0 = s0 + 0;
    v0 = func_08A25684(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A25390;
L_08A25390:;
    s1 = v0 + 0;
    goto L_08A25348;
L_08A25398:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_08A253D0; }
    goto L_08A253A0;
L_08A253A0:;
    cnd_ = v0 != 0;
    v0 = 0xffff0000u;
    if (cnd_) { goto L_08A253C4; }
    goto L_08A253A8;
L_08A253A8:;
    v0 = 129;
    cnd_ = v1 == v0;
    v0 = 0x8031;
    if (cnd_) { goto L_08A25348; }
    goto L_08A253B4;
L_08A253B4:;
    cnd_ = v1 != v0;
    if (cnd_) { s1 = 0 + 0; goto L_08A25348; }
    goto L_08A253BC;
L_08A253BC:;
    goto L_08A25348;
L_08A253C4:;
    v0 = v0 | 0x7f88;
    v0 = v1 + v0;
    goto L_08A2533C;
L_08A253D0:;
    a0 = s0 + 0;
    v0 = func_08A2594C(a0, 0, 0, 0);
    goto L_08A253D8;
L_08A253D8:;
    s1 = v0 + 0;
    goto L_08A25348;
L_08A253E0:;
    a0 = s0 + 0;
    func_089E51CC(a0, 0, 0, 0);
    goto L_08A253E8;
L_08A253E8:;
    goto L_08A25348;
}

/* 08A253F0 */
u32 func_08A253F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A253F0:;
    sp = sp - 16;
    a0 = a0 & 0xffff;
    v0 = 90;
    a1 = a1 & 0xffff;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2541C; }
    goto L_08A2540C;
L_08A2540C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A2541C:;
    v0 = 0x8011;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A255F0; }
    goto L_08A25428;
L_08A25428:;
    cnd_ = v0 != 0;
    v0 = 0x8019;
    if (cnd_) { goto L_08A25558; }
    goto L_08A25430;
L_08A25430:;
    v0 = 0x8008;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A25544; }
    goto L_08A2543C;
L_08A2543C:;
    cnd_ = v0 != 0;
    v0 = 0x800e;
    if (cnd_) { goto L_08A254C8; }
    goto L_08A25444;
L_08A25444:;
    v0 = 0x8004;
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    v0 = 0x8005;
    if (cnd_) { goto L_08A254AC; }
    goto L_08A25454;
L_08A25454:;
    v0 = 0x8003;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = 7;
    if (cnd_) { goto L_08A2549C; }
    goto L_08A25464;
L_08A25464:;
    cnd_ = a1 == v0;
    v0 = 0x8002;
    if (cnd_) { goto L_08A2548C; }
    goto L_08A2546C;
L_08A2546C:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A2547C; }
    goto L_08A25474;
L_08A25474:;
    v1 = 0 + 0;
    goto L_08A2540C;
L_08A2547C:;
    func_08981534(a0, a1, t1, t2, t3);
    goto L_08A25484;
L_08A25484:;
    v1 = 1;
    goto L_08A2540C;
L_08A2548C:;
    func_08A08620(a0, a1, t1, t2, t3);
    goto L_08A25494;
L_08A25494:;
    v1 = 1;
    goto L_08A2540C;
L_08A2549C:;
    func_089D1018(a0, a1, t1, t2, t3);
    goto L_08A254A4;
L_08A254A4:;
    v1 = 1;
    goto L_08A2540C;
L_08A254AC:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A2540C; }
    goto L_08A254B4;
L_08A254B4:;
    a0 = 90;
    a1 = 0x8005;
    func_089A8DEC(a0, a1, t1, t2, t3);
    goto L_08A254C0;
L_08A254C0:;
    v1 = 1;
    goto L_08A2540C;
L_08A254C8:;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A25530; }
    goto L_08A254D0;
L_08A254D0:;
    cnd_ = v0 != 0;
    v0 = 0x800f;
    if (cnd_) { goto L_08A254F8; }
    goto L_08A254D8;
L_08A254D8:;
    v0 = 0x8009;
    cnd_ = a1 != v0;
    v0 = 0x800d;
    if (cnd_) { goto L_08A2546C; }
    goto L_08A254E4;
L_08A254E4:;
    a0 = 90;
    a1 = 0x8009;
    func_089886A8(a0, a1, t1, t2, t3);
    goto L_08A254F0;
L_08A254F0:;
    v1 = 1;
    goto L_08A2540C;
L_08A254F8:;
    cnd_ = a1 == v0;
    v0 = 0x8010;
    if (cnd_) { goto L_08A2551C; }
    goto L_08A25500;
L_08A25500:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A2540C; }
    goto L_08A25508;
L_08A25508:;
    a0 = 90;
    a1 = 0x8010;
    func_089E7ECC(a0, a1, t1, t2, t3);
    goto L_08A25514;
L_08A25514:;
    v1 = 1;
    goto L_08A2540C;
L_08A2551C:;
    a0 = 90;
    a1 = 0x800f;
    func_089E8958(a0, a1, t1, t2, t3);
    goto L_08A25528;
L_08A25528:;
    v1 = 1;
    goto L_08A2540C;
L_08A25530:;
    a0 = 90;
    a1 = 0x800e;
    func_089F17C0(a0, a1, t1, t2, t3);
    goto L_08A2553C;
L_08A2553C:;
    v1 = 1;
    goto L_08A2540C;
L_08A25544:;
    a0 = 90;
    a1 = 0x8008;
    func_089EDF40(a0, a1, t1, t2, t3);
    goto L_08A25550;
L_08A25550:;
    v1 = 1;
    goto L_08A2540C;
L_08A25558:;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A2548C; }
    goto L_08A25560;
L_08A25560:;
    cnd_ = v0 != 0;
    v0 = 0x801e;
    if (cnd_) { goto L_08A25600; }
    goto L_08A25568;
L_08A25568:;
    v0 = 0x8015;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A255F0; }
    goto L_08A25574;
L_08A25574:;
    cnd_ = v0 != 0;
    v0 = 0x8017;
    if (cnd_) { goto L_08A255B8; }
    goto L_08A2557C;
L_08A2557C:;
    v0 = 0x8013;
    cnd_ = a1 == v0;
    v0 = 0x8014;
    if (cnd_) { goto L_08A255A4; }
    goto L_08A25588;
L_08A25588:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A2540C; }
    goto L_08A25590;
L_08A25590:;
    a0 = 90;
    a1 = 0x8014;
    func_089C23F8(a0, a1, t1, t2, t3);
    goto L_08A2559C;
L_08A2559C:;
    v1 = 1;
    goto L_08A2540C;
L_08A255A4:;
    a0 = 90;
    a1 = 0x8013;
    func_089F0B74(a0, a1, t1, t2, t3);
    goto L_08A255B0;
L_08A255B0:;
    v1 = 1;
    goto L_08A2540C;
L_08A255B8:;
    cnd_ = a1 == v0;
    v0 = 0x8018;
    if (cnd_) { goto L_08A255DC; }
    goto L_08A255C0;
L_08A255C0:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A2540C; }
    goto L_08A255C8;
L_08A255C8:;
    a0 = 90;
    a1 = 0x8018;
    func_089F86C0(a0, a1, t1, t2, t3);
    goto L_08A255D4;
L_08A255D4:;
    v1 = 1;
    goto L_08A2540C;
L_08A255DC:;
    a0 = 90;
    a1 = 0x8017;
    func_089EF9A8(a0, a1, t1, t2, t3);
    goto L_08A255E8;
L_08A255E8:;
    v1 = 1;
    goto L_08A2540C;
L_08A255F0:;
    func_089FDF98(a0, a1, t1, t2, t3);
    goto L_08A255F8;
L_08A255F8:;
    v1 = 1;
    goto L_08A2540C;
L_08A25600:;
    cnd_ = a1 == v0;
    v0 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A25664; }
    goto L_08A25608;
L_08A25608:;
    cnd_ = v0 != 0;
    v0 = 0x8026;
    if (cnd_) { goto L_08A25640; }
    goto L_08A25610;
L_08A25610:;
    v0 = 0x801c;
    cnd_ = a1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_08A2562C; }
    goto L_08A2561C;
L_08A2561C:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A2540C; }
    goto L_08A25624;
L_08A25624:;
    goto L_08A2549C;
L_08A2562C:;
    a0 = 90;
    a1 = 0x801c;
    func_08A101F0(a0, a1, t1, t2, t3);
    goto L_08A25638;
L_08A25638:;
    v1 = 1;
    goto L_08A2540C;
L_08A25640:;
    cnd_ = a1 == v0;
    v0 = 0x8028;
    if (cnd_) { goto L_08A255F0; }
    goto L_08A25648;
L_08A25648:;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A2540C; }
    goto L_08A25650;
L_08A25650:;
    a0 = 90;
    a1 = 0x8028;
    func_08A1582C(a0, a1, t1, t2, t3);
    goto L_08A2565C;
L_08A2565C:;
    v1 = 1;
    goto L_08A2540C;
L_08A25664:;
    a0 = 90;
    a1 = 0x801e;
    func_089BBA58(a0, a1, t1, t2, t3);
    goto L_08A25670;
L_08A25670:;
    v1 = 1;
    goto L_08A2540C;
}

/* 08A25678 */
float func_08A25678(void)
{
    float f0 = 0;
L_08A25678:;
    f0 = BITSF(0);
    return f0;
}

/* 08A25684 */
u32 func_08A25684(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A25684:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = 0x800e;
    a1 = 0 + 0;
    a0 = LD_U16(a0+18);
    cnd_ = a0 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A25748; }
    goto L_08A256AC;
L_08A256AC:;
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 != 0;
    v0 = 0x8017;
    if (cnd_) { goto L_08A257FC; }
    goto L_08A256B8;
L_08A256B8:;
    v0 = 0x8002;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A257D8; }
    goto L_08A256C4;
L_08A256C4:;
    cnd_ = v0 != 0;
    v0 = 0x8006;
    if (cnd_) { goto L_08A2576C; }
    goto L_08A256CC;
L_08A256CC:;
    v0 = 17;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 18;
    if (cnd_) { goto L_08A25748; }
    goto L_08A256D8;
L_08A256D8:;
    cnd_ = v0 == 0;
    v0 = 21;
    if (cnd_) { goto L_08A2572C; }
    goto L_08A256E0;
L_08A256E0:;
    v0 = 7;
    cnd_ = a0 == v0;
    v0 = 9;
    if (cnd_) { goto L_08A2570C; }
    goto L_08A256EC;
L_08A256EC:;
    cnd_ = a0 == v0;
    v0 = ((u32)(uintptr_t)func_089F2CF0) - (11504);
    if (cnd_) { goto L_08A25710; }
    goto L_08A256F4;
L_08A256F4:;
    goto L_08A256F8;
L_08A256F8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08A2570C:;
    v0 = ((u32)(uintptr_t)func_089F2CF0) - (11504);
    goto L_08A25710;
L_08A25710:;
    s0 = v0 + 11504;
    goto L_08A25714;
L_08A25714:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A2571C;
L_08A2571C:;
    t_ = s0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25724;
L_08A25724:;
    a1 = 1;
    goto L_08A256F4;
L_08A2572C:;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 22;
    if (cnd_) { goto L_08A25748; }
    goto L_08A25734;
L_08A25734:;
    cnd_ = v0 == 0;
    v0 = 0x8001;
    if (cnd_) { goto L_08A25758; }
    goto L_08A2573C;
L_08A2573C:;
    v0 = 19;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A25748;
L_08A25748:;
    a0 = s1 + 0;
    func_08A25994(a0, t2, t3);
    goto L_08A25750;
L_08A25750:;
    a1 = 1;
    goto L_08A25714;
L_08A25758:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A25760;
L_08A25760:;
    v0 = ((u32)(uintptr_t)func_089DD2C0) - (-11584);
    s0 = v0 - 11584;
    goto L_08A25714;
L_08A2576C:;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A257F0; }
    goto L_08A25774;
L_08A25774:;
    cnd_ = v0 != 0;
    v0 = 0x8009;
    if (cnd_) { goto L_08A257A8; }
    goto L_08A2577C;
L_08A2577C:;
    v0 = 0x8004;
    cnd_ = a0 == v0;
    v0 = 0x8005;
    if (cnd_) { goto L_08A2579C; }
    goto L_08A25788;
L_08A25788:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A25790;
L_08A25790:;
    v0 = ((u32)(uintptr_t)func_08999684) - (-27004);
    s0 = v0 - 27004;
    goto L_08A25714;
L_08A2579C:;
    v0 = ((u32)(uintptr_t)func_089A95F8) - (-27144);
    s0 = v0 - 27144;
    goto L_08A25714;
L_08A257A8:;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A257E4; }
    goto L_08A257B0;
L_08A257B0:;
    cnd_ = v0 != 0;
    v0 = 0x800d;
    if (cnd_) { goto L_08A257D0; }
    goto L_08A257B8;
L_08A257B8:;
    v0 = 0x8008;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A257C4;
L_08A257C4:;
    v0 = ((u32)(uintptr_t)func_089EA8F4) - (-22284);
    s0 = v0 - 22284;
    goto L_08A25714;
L_08A257D0:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A257D8;
L_08A257D8:;
    v0 = ((u32)(uintptr_t)func_0897E370) - (-7312);
    s0 = v0 - 7312;
    goto L_08A25714;
L_08A257E4:;
    v0 = ((u32)(uintptr_t)func_089872D4) - (29396);
    s0 = v0 + 29396;
    goto L_08A25714;
L_08A257F0:;
    v0 = ((u32)(uintptr_t)func_08992BAC) - (11180);
    s0 = v0 + 11180;
    goto L_08A25714;
L_08A257FC:;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A25940; }
    goto L_08A25804;
L_08A25804:;
    cnd_ = v0 != 0;
    v0 = 0x801d;
    if (cnd_) { goto L_08A258A0; }
    goto L_08A2580C;
L_08A2580C:;
    v0 = 0x8011;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A25894; }
    goto L_08A25818;
L_08A25818:;
    cnd_ = v0 != 0;
    v0 = 0x8014;
    if (cnd_) { goto L_08A2584C; }
    goto L_08A25820;
L_08A25820:;
    v0 = 0x800f;
    cnd_ = a0 == v0;
    v0 = 0x8010;
    if (cnd_) { goto L_08A25840; }
    goto L_08A2582C;
L_08A2582C:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A25834;
L_08A25834:;
    v0 = ((u32)(uintptr_t)func_089E66A0) - (26272);
    s0 = v0 + 26272;
    goto L_08A25714;
L_08A25840:;
    v0 = ((u32)(uintptr_t)func_089E6F18) - (28440);
    s0 = v0 + 28440;
    goto L_08A25714;
L_08A2584C:;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A25888; }
    goto L_08A25854;
L_08A25854:;
    cnd_ = v0 != 0;
    v0 = 0x8015;
    if (cnd_) { goto L_08A25874; }
    goto L_08A2585C;
L_08A2585C:;
    v0 = 0x8013;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A25868;
L_08A25868:;
    v0 = ((u32)(uintptr_t)func_089EBAE8) - (-17688);
    s0 = v0 - 17688;
    goto L_08A25714;
L_08A25874:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A2587C;
L_08A2587C:;
    v0 = ((u32)(uintptr_t)func_089F6090) - (24720);
    s0 = v0 + 24720;
    goto L_08A25714;
L_08A25888:;
    v0 = ((u32)(uintptr_t)func_089BD444) - (-11196);
    s0 = v0 - 11196;
    goto L_08A25714;
L_08A25894:;
    v0 = ((u32)(uintptr_t)func_089FCD84) - (-12924);
    s0 = v0 - 12924;
    goto L_08A25714;
L_08A258A0:;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A25934; }
    goto L_08A258A8;
L_08A258A8:;
    cnd_ = v0 != 0;
    v0 = 0x8026;
    if (cnd_) { goto L_08A258EC; }
    goto L_08A258B0;
L_08A258B0:;
    v0 = 0x8019;
    cnd_ = a0 == v0;
    v1 = (s32)a0 < (s32)v0;
    if (cnd_) { goto L_08A258E0; }
    goto L_08A258BC;
L_08A258BC:;
    v0 = ((u32)(uintptr_t)func_089F47E0) - (18400);
    cnd_ = v1 != 0;
    s0 = v0 + 18400;
    if (cnd_) { goto L_08A25714; }
    goto L_08A258C8;
L_08A258C8:;
    v0 = 0x801c;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A258D4;
L_08A258D4:;
    v0 = ((u32)(uintptr_t)func_08A0E1C8) - (-7736);
    s0 = v0 - 7736;
    goto L_08A25714;
L_08A258E0:;
    v0 = ((u32)(uintptr_t)func_08A05264) - (21092);
    s0 = v0 + 21092;
    goto L_08A25714;
L_08A258EC:;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08A25928; }
    goto L_08A258F4;
L_08A258F4:;
    cnd_ = v0 != 0;
    v0 = 0x8028;
    if (cnd_) { goto L_08A25914; }
    goto L_08A258FC;
L_08A258FC:;
    v0 = 0x801e;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A25908;
L_08A25908:;
    v0 = ((u32)(uintptr_t)func_089B68CC) - (26828);
    s0 = v0 + 26828;
    goto L_08A25714;
L_08A25914:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A256F8; }
    goto L_08A2591C;
L_08A2591C:;
    v0 = ((u32)(uintptr_t)func_08A13F78) - (16248);
    s0 = v0 + 16248;
    goto L_08A25714;
L_08A25928:;
    v0 = ((u32)(uintptr_t)func_089FEBF4) - (-5132);
    s0 = v0 - 5132;
    goto L_08A25714;
L_08A25934:;
    v0 = ((u32)(uintptr_t)func_089B1FD8) - (8152);
    s0 = v0 + 8152;
    goto L_08A25714;
L_08A25940:;
    v0 = ((u32)(uintptr_t)func_089EB2D0) - (-19760);
    s0 = v0 - 19760;
    goto L_08A25714;
}

/* 08A2594C */
u32 func_08A2594C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2594C:;
    sp = sp - 16;
    v1 = ((u32)(uintptr_t)func_089EC1E4) - (-15900);
    v0 = 0x800e;
    a1 = LD_U16(a0+18);
    v1 = v1 - 15900;
    cnd_ = a1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A2597C; }
    goto L_08A2596C;
L_08A2596C:;
    goto L_08A25970;
L_08A25970:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_08A2597C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A25970; }
    goto L_08A25984;
L_08A25984:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2598C;
L_08A2598C:;
    a2 = 1;
    goto L_08A2596C;
}

/* 08A25994 */
void func_08A25994(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A25994:;
    sp = sp - 16;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a3 = 0 + 0;
    a2 = LD_U16(a0+18);
    a0 = 93;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A259BC;
L_08A259BC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A259E4; }
    goto L_08A259C4;
L_08A259C4:;
    v0 = LD32(s1+4);
    ST32(s0, v0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A259D0;
L_08A259D0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A259E4;
L_08A259E4:;
    sp = sp + 16;
    return;
}

/* 08A259F8 */
u32 func_08A259F8(void)
{
    u32 v0 = 0;
L_08A259F8:;
    v0 = 0 + 0;
    return v0;
}

/* 08A25A00 */
u32 func_08A25A00(void)
{
    u32 v0 = 0;
L_08A25A00:;
    v0 = 0 + 0;
    return v0;
}

/* 08A25A08 */
u32 func_08A25A08(void)
{
    u32 v0 = 0;
L_08A25A08:;
    v0 = 0 + 0;
    return v0;
}

/* 08A25A10 */
u32 func_08A25A10(void)
{
    u32 v0 = 0;
L_08A25A10:;
    v0 = 0 + 0;
    return v0;
}

/* 08A25A18 */
rv_t func_08A25A18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A25A18:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2CD14 - (-13036);
    t1 = D_08C2CD24 - (-13020);
    t2 = D_08C2CD34 - (-13004);
    a1 = a1 & a0;
    v1 = t0 - 13036;
    a2 = t1 - 13020;
    cnd_ = a1 == 0;
    a3 = t2 - 13004;
    if (cnd_) { goto L_08A25AD0; }
    goto L_08A25A48;
L_08A25A48:;
    v0 = D_08AEFA14 - (-1516);
    f4 = BITSF(LD32(v0-1516));
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
    ST32(t0-13036, FBITS(f2));
    ST32(t1-13020, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-13004, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A25AD0;
L_08A25AD0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A25AD8 */
rv_t func_08A25AD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A25AD8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A25A18(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25AEC;
L_08A25AEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A25AF8 */
void func_08A25AF8(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08A25AF8:;
    v0 = D_08B15388 - (21384);
    v0 = v0 + 21384;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+4, a1);
    ST8(a0+8, v0);
    ST8(a0+9, 0);
    return;
}

/* 08A25B18 */
rv_t func_08A25B18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A25B18:;
    v1 = LD_U16(a1+16);
    v0 = 2;
    a2 = 0 + 0;
    cnd_ = v1 == v0;
    a1 = (s32)v1 < 2;
    if (cnd_) { goto L_08A25B50; }
    goto L_08A25B2C;
L_08A25B2C:;
    v0 = 0xffff0000u;
    cnd_ = a1 != 0;
    v0 = v0 | 0x7f88;
    if (cnd_) { goto L_08A25B48; }
    goto L_08A25B38;
L_08A25B38:;
    v0 = v1 + v0;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A25B50; }
    goto L_08A25B48;
L_08A25B48:;
    v0 = LD_U8(a0+8);
    a2 = v0 ^ 0x1;
    goto L_08A25B50;
L_08A25B50:;
    v0 = a2 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A25B58 */
void func_08A25B58(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A25B58:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A25AF8(a0, a1);
    goto L_08A25B6C;
L_08A25B6C:;
    v0 = D_08B15370 - (21360);
    v0 = v0 + 21360;
    ST32(s0, v0);
    ST32(s0+12, 0);
    sp = sp + 16;
    return;
}

/* 08A25B8C */
rv_t func_08A25B8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A25B8C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08A25B18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25BA8;
L_08A25BA8:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A25BC8; }
    goto L_08A25BB0;
L_08A25BB0:;
    a1 = LD_U16(s0+16);
    v0 = 0x8078;
    cnd_ = a1 == v0;
    v0 = 0x8079;
    if (cnd_) { goto L_08A25C0C; }
    goto L_08A25BC0;
L_08A25BC0:;
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A25BE0; }
    goto L_08A25BC8;
L_08A25BC8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A25BE0:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A25BF4; }
    goto L_08A25BEC;
L_08A25BEC:;
    v1 = 1;
    goto L_08A25BC8;
L_08A25BF4:;
    a0 = s1 + 0;
    v0 = LD32(v1+8);
    goto L_08A25BFC;
L_08A25BFC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25C04;
L_08A25C04:;
    v1 = 1;
    goto L_08A25BC8;
L_08A25C0C:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = 1; goto L_08A25BC8; }
    goto L_08A25C18;
L_08A25C18:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+4);
    goto L_08A25BFC;
}

/* 08A25C28 */
rv_t func_08A25C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A25C28:;
    sp = sp - 32;
    v0 = 1;
    s4 = a0 + 0;
    v1 = LD_U8(a0+9);
    cnd_ = v1 == 0;
    ST8(a0+8, v0);
    if (cnd_) { goto L_08A25CD8; }
    goto L_08A25C58;
L_08A25C58:;
    a2 = LD32(a0+4);
    v0 = 999;
    a0 = D_08C2C200 - (-15872);
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08A25CD4; }
    goto L_08A25C6C;
L_08A25C6C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A25CBC; }
    goto L_08A25C90;
L_08A25C90:;
    a0 = LD32(a1);
    goto L_08A25C94;
L_08A25C94:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A260D0; }
    goto L_08A25CAC;
L_08A25CAC:;
    a1 = LD32(a1+4);
    goto L_08A25CB0;
L_08A25CB0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A25C94; }
    goto L_08A25CB8;
L_08A25CB8:;
    s0 = 0 + 0;
    goto L_08A25CBC;
L_08A25CBC:;
    cnd_ = s0 == 0;
    if (cnd_) { ST8(s4+9, 0); goto L_08A25CD8; }
    goto L_08A25CC4;
L_08A25CC4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25CCC;
L_08A25CCC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A260B4; }
    goto L_08A25CD4;
L_08A25CD4:;
    ST8(s4+9, 0);
    goto L_08A25CD8;
L_08A25CD8:;
    a2 = LD32(s4+12);
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    v0 = a2 & 0x2;
    if (cnd_) { goto L_08A25D74; }
    goto L_08A25CE8;
L_08A25CE8:;
    a3 = LD32(s4+4);
    a0 = D_08B29024 - (-28636);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 28636;
    if (cnd_) { goto L_08A25D60; }
    goto L_08A25CFC;
L_08A25CFC:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28636);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A25D4C; }
    goto L_08A25D20;
L_08A25D20:;
    a0 = LD32(a1);
    goto L_08A25D24;
L_08A25D24:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A26094; }
    goto L_08A25D3C;
L_08A25D3C:;
    a1 = LD32(a1+4);
    goto L_08A25D40;
L_08A25D40:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A25D24; }
    goto L_08A25D48;
L_08A25D48:;
    a0 = 0 + 0;
    goto L_08A25D4C;
L_08A25D4C:;
    cnd_ = a0 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08A25D64; }
    goto L_08A25D54;
L_08A25D54:;
    { rv_t r_ = func_08876648(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25D5C;
L_08A25D5C:;
    a2 = LD32(s4+12);
    goto L_08A25D60;
L_08A25D60:;
    v0 = a2 + 0;
    goto L_08A25D64;
L_08A25D64:;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s4+12, v0);
    a2 = v0 + 0;
    v0 = a2 & 0x2;
    goto L_08A25D74;
L_08A25D74:;
    cnd_ = v0 == 0;
    v0 = a2 & 0x4;
    if (cnd_) { goto L_08A25E08; }
    goto L_08A25D7C;
L_08A25D7C:;
    a3 = LD32(s4+4);
    a0 = D_08B28FFC - (-28676);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 28676;
    if (cnd_) { goto L_08A25DF4; }
    goto L_08A25D90;
L_08A25D90:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28676);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A25DE0; }
    goto L_08A25DB4;
L_08A25DB4:;
    a0 = LD32(a1);
    goto L_08A25DB8;
L_08A25DB8:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A26074; }
    goto L_08A25DD0;
L_08A25DD0:;
    a1 = LD32(a1+4);
    goto L_08A25DD4;
L_08A25DD4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A25DB8; }
    goto L_08A25DDC;
L_08A25DDC:;
    a0 = 0 + 0;
    goto L_08A25DE0;
L_08A25DE0:;
    cnd_ = a0 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08A25DF8; }
    goto L_08A25DE8;
L_08A25DE8:;
    { rv_t r_ = func_08874C84(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25DF0;
L_08A25DF0:;
    a2 = LD32(s4+12);
    goto L_08A25DF4;
L_08A25DF4:;
    v0 = a2 + 0;
    goto L_08A25DF8;
L_08A25DF8:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s4+12, v0);
    a2 = v0 + 0;
    v0 = a2 & 0x4;
    goto L_08A25E08;
L_08A25E08:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s4+4); goto L_08A25FF4; }
    goto L_08A25E10;
L_08A25E10:;
    v0 = a2 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s4+4); goto L_08A25FC8; }
    goto L_08A25E1C;
L_08A25E1C:;
    v0 = a2 & 0x10;
    cnd_ = v0 == 0;
    v0 = a2 & 0x20;
    if (cnd_) { goto L_08A25EAC; }
    goto L_08A25E28;
L_08A25E28:;
    a2 = LD32(s4+4);
    a1 = D_08C2B928 - (-18136);
    v0 = 999;
    v1 = a1 - 18136;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A25E90; }
    goto L_08A25E40;
L_08A25E40:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-18136);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A25E90; }
    goto L_08A25E64;
L_08A25E64:;
    a0 = LD32(a1);
    goto L_08A25E68;
L_08A25E68:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A25FA8; }
    goto L_08A25E80;
L_08A25E80:;
    a1 = LD32(a1+4);
    goto L_08A25E84;
L_08A25E84:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A25E68; }
    goto L_08A25E8C;
L_08A25E8C:;
    a0 = 0 + 0;
    goto L_08A25E90;
L_08A25E90:;
    { rv_t r_ = func_08A58368(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25E98;
L_08A25E98:;
    v0 = LD32(s4+12);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(s4+12, v0);
    a2 = v0 + 0;
    v0 = a2 & 0x20;
    goto L_08A25EAC;
L_08A25EAC:;
    cnd_ = v0 == 0;
    v0 = a2 & 0x40;
    if (cnd_) { goto L_08A25F38; }
    goto L_08A25EB4;
L_08A25EB4:;
    a2 = LD32(s4+4);
    a1 = D_08C2B890 - (-18288);
    v0 = 999;
    v1 = a1 - 18288;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A25F1C; }
    goto L_08A25ECC;
L_08A25ECC:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-18288);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A25F1C; }
    goto L_08A25EF0;
L_08A25EF0:;
    a0 = LD32(a1);
    goto L_08A25EF4;
L_08A25EF4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A25F88; }
    goto L_08A25F0C;
L_08A25F0C:;
    a1 = LD32(a1+4);
    goto L_08A25F10;
L_08A25F10:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A25EF4; }
    goto L_08A25F18;
L_08A25F18:;
    a0 = 0 + 0;
    goto L_08A25F1C;
L_08A25F1C:;
    { rv_t r_ = func_08A536F0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25F24;
L_08A25F24:;
    v0 = LD32(s4+12);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s4+12, v0);
    a2 = v0 + 0;
    v0 = a2 & 0x40;
    goto L_08A25F38;
L_08A25F38:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s4+4); goto L_08A25F60; }
    goto L_08A25F40;
L_08A25F40:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A25F60:;
    a0 = D_08C2B890 - (-18288);
    a0 = a0 - 18288;
    a2 = 1;
    v0 = func_08AD1000(a0, a1, a2);
    goto L_08A25F70;
L_08A25F70:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A5562C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25F78;
L_08A25F78:;
    v0 = LD32(s4+12);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s4+12, v0);
    goto L_08A25F40;
L_08A25F88:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25F10; }
    goto L_08A25F94;
L_08A25F94:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25F10; }
    goto L_08A25FA0;
L_08A25FA0:;
    goto L_08A25F1C;
L_08A25FA8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25E84; }
    goto L_08A25FB4;
L_08A25FB4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25E84; }
    goto L_08A25FC0;
L_08A25FC0:;
    goto L_08A25E90;
L_08A25FC8:;
    a0 = D_08C2C200 - (-15872);
    a2 = 1;
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A25FD8;
L_08A25FD8:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A25FE0;
L_08A25FE0:;
    v0 = LD32(s4+12);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s4+12, v0);
    a2 = v0 + 0;
    goto L_08A25E1C;
L_08A25FF4:;
    a0 = D_08C2C200 - (-15872);
    a2 = 1;
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26004;
L_08A26004:;
    a0 = LD32(v0);
    s2 = v0 + 0;
    s3 = D_08C2C21C - (-15844);
    v0 = LD32(a0-16);
    s1 = s3 - 15844;
    v1 = LD32(s1+4);
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26034;
L_08A26034:;
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
    v0 = LD32(s4+12);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(s4+12, v0);
    a2 = v0 + 0;
    goto L_08A25E10;
L_08A26074:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25DD4; }
    goto L_08A26080;
L_08A26080:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25DD4; }
    goto L_08A2608C;
L_08A2608C:;
    goto L_08A25DE0;
L_08A26094:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25D40; }
    goto L_08A260A0;
L_08A260A0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25D40; }
    goto L_08A260AC;
L_08A260AC:;
    goto L_08A25D4C;
L_08A260B4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A260BC;
L_08A260BC:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A260C8;
L_08A260C8:;
    ST8(s4+9, 0);
    goto L_08A25CD8;
L_08A260D0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A25CAC; }
    goto L_08A260DC;
L_08A260DC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A25CB0; }
    goto L_08A260E8;
L_08A260E8:;
    goto L_08A25CBC;
}

/* 08A260F0 */
rv_t func_08A260F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A260F0:;
    sp = sp - 32;
    s6 = D_08C2C200 - (-15872);
    a2 = 1;
    s1 = a0 + 0;
    ST8(a0+8, 0);
    a1 = LD32(a0+4);
    a0 = s6 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26130;
L_08A26130:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A26148; }
    goto L_08A26138;
L_08A26138:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26140;
L_08A26140:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A26554; }
    goto L_08A26148;
L_08A26148:;
    a1 = LD32(s1+4);
    goto L_08A2614C;
L_08A2614C:;
    a0 = D_08B29024 - (-28636);
    a0 = a0 - 28636;
    a2 = 1;
    { u64 r_ = func_08AB719C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2615C;
L_08A2615C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A26240; }
    goto L_08A26164;
L_08A26164:;
    s0 = LD32(s1+4);
    s3 = D_08B29040 - (-28608);
    v0 = 999;
    cnd_ = s0 == v0;
    s5 = s3 - 28608;
    if (cnd_) { goto L_08A26240; }
    goto L_08A26178;
L_08A26178:;
    a0 = s5 + 0;
    f0 = func_08AB0544(a0, 0, 0, 0);
    goto L_08A26180;
L_08A26180:;
    a2 = LD32(s3-28608);
    cnd_ = a2 == 0;
    if (cnd_) { a1 = LD32(s5+4); goto L_08A261E0; }
    goto L_08A2618C;
L_08A2618C:;
    a1 = LD32(a2+8);
    goto L_08A26190;
L_08A26190:;
    cnd_ = a1 == 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A261D4; }
    goto L_08A26198;
L_08A26198:;
    v0 = LD_U8(a1+8);
    goto L_08A2619C;
L_08A2619C:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A261C8; }
    goto L_08A261A4;
L_08A261A4:;
    a0 = LD32(a1);
    v1 = LD32(a0);
    a3 = a0 + 0;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A26540; }
    goto L_08A261C4;
L_08A261C4:;
    a1 = LD32(a1+4);
    goto L_08A261C8;
L_08A261C8:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A2619C; }
    goto L_08A261D0;
L_08A261D0:;
    a2 = LD32(a2+4);
    goto L_08A261D4;
L_08A261D4:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2+8); goto L_08A26190; }
    goto L_08A261DC;
L_08A261DC:;
    a1 = LD32(s5+4);
    goto L_08A261E0;
L_08A261E0:;
    cnd_ = a1 == 0;
    if (cnd_) { a3 = 0 + 0; goto L_08A26224; }
    goto L_08A261E8;
L_08A261E8:;
    v0 = LD_U8(a1+8);
    goto L_08A261EC;
L_08A261EC:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A26218; }
    goto L_08A261F4;
L_08A261F4:;
    a0 = LD32(a1);
    v1 = LD32(a0);
    a3 = a0 + 0;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A2652C; }
    goto L_08A26214;
L_08A26214:;
    a1 = LD32(a1+4);
    goto L_08A26218;
L_08A26218:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A261EC; }
    goto L_08A26220;
L_08A26220:;
    a3 = 0 + 0;
    goto L_08A26224;
L_08A26224:;
    cnd_ = a3 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A26240; }
    goto L_08A2622C;
L_08A2622C:;
    a1 = 1;
    func_0887666C(a0, a1, 0, 0, 0);
    goto L_08A26234;
L_08A26234:;
    v0 = LD32(s1+12);
    v0 = v0 | 0x1;
    ST32(s1+12, v0);
    goto L_08A26240;
L_08A26240:;
    a1 = LD32(s1+4);
    a0 = D_08B28FFC - (-28676);
    a0 = a0 - 28676;
    a2 = 1;
    v0 = func_08AA4D2C(a0, a1, a2);
    goto L_08A26254;
L_08A26254:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A26334; }
    goto L_08A2625C;
L_08A2625C:;
    v0 = LD32(v0);
    s4 = D_08B29018 - (-28648);
    s5 = s4 - 28648;
    v1 = LD32(v0-12);
    v0 = 999;
    v1 = s3 + v1;
    s0 = LD32(v1+4);
    cnd_ = s0 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A2632C; }
    goto L_08A26280;
L_08A26280:;
    a0 = s5 + 0;
    f0 = func_08AAFE90(a0, 0, 0, 0);
    goto L_08A26288;
L_08A26288:;
    a2 = LD32(s4-28648);
    cnd_ = a2 == 0;
    if (cnd_) { a1 = LD32(s5+4); goto L_08A262E8; }
    goto L_08A26294;
L_08A26294:;
    a1 = LD32(a2+8);
    goto L_08A26298;
L_08A26298:;
    cnd_ = a1 == 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_08A262DC; }
    goto L_08A262A0;
L_08A262A0:;
    v0 = LD_U8(a1+8);
    goto L_08A262A4;
L_08A262A4:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A262D0; }
    goto L_08A262AC;
L_08A262AC:;
    a0 = LD32(a1);
    v1 = LD32(a0);
    a3 = a0 + 0;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A26518; }
    goto L_08A262CC;
L_08A262CC:;
    a1 = LD32(a1+4);
    goto L_08A262D0;
L_08A262D0:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A262A4; }
    goto L_08A262D8;
L_08A262D8:;
    a2 = LD32(a2+4);
    goto L_08A262DC;
L_08A262DC:;
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(a2+8); goto L_08A26298; }
    goto L_08A262E4;
L_08A262E4:;
    a1 = LD32(s5+4);
    goto L_08A262E8;
L_08A262E8:;
    cnd_ = a1 == 0;
    if (cnd_) { a3 = 0 + 0; goto L_08A2632C; }
    goto L_08A262F0;
L_08A262F0:;
    v0 = LD_U8(a1+8);
    goto L_08A262F4;
L_08A262F4:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A26320; }
    goto L_08A262FC;
L_08A262FC:;
    a0 = LD32(a1);
    v1 = LD32(a0);
    a3 = a0 + 0;
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0+4);
    cnd_ = v1 == s0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A26504; }
    goto L_08A2631C;
L_08A2631C:;
    a1 = LD32(a1+4);
    goto L_08A26320;
L_08A26320:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08A262F4; }
    goto L_08A26328;
L_08A26328:;
    a3 = 0 + 0;
    goto L_08A2632C;
L_08A2632C:;
    cnd_ = a3 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A264EC; }
    goto L_08A26334;
L_08A26334:;
    cnd_ = s2 == 0;
    v1 = D_08C2C21C - (-15844);
    if (cnd_) { goto L_08A263A0; }
    goto L_08A2633C;
L_08A2633C:;
    a1 = LD32(s2);
    t0 = v1 - 15844;
    v0 = LD32(a1-16);
    a0 = LD32(t0+4);
    a1 = LD32(v1-15844);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a1 = LD32(a1);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A26394; }
    goto L_08A26374;
L_08A26374:;
    s0 = t0 + 0;
    v0 = LD32(a1);
    goto L_08A2637C;
L_08A2637C:;
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(s0+8); goto L_08A264A0; }
    goto L_08A26384;
L_08A26384:;
    a2 = a1 + 0;
    a1 = LD32(a1+4);
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08A2637C; }
    goto L_08A26394;
L_08A26394:;
    v0 = LD32(s1+12);
    v0 = v0 | 0x4;
    ST32(s1+12, v0);
    goto L_08A263A0;
L_08A263A0:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A582E4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A263A8;
L_08A263A8:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_08A2647C; }
    goto L_08A263B0;
L_08A263B0:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A584F8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A263B8;
L_08A263B8:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_08A26454; }
    goto L_08A263C0;
L_08A263C0:;
    a0 = LD32(s1+4);
    v0 = func_08A538D8(a0);
    goto L_08A263C8;
L_08A263C8:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_08A2642C; }
    goto L_08A263D0;
L_08A263D0:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A557BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A263D8;
L_08A263D8:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_08A26408; }
    goto L_08A263E0;
L_08A263E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A26408:;
    a0 = s6 - 15872;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26414;
L_08A26414:;
    a0 = v0 + 0;
    { u64 r_ = func_08A556D8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2641C;
L_08A2641C:;
    v0 = LD32(s1+12);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST32(s1+12, v0);
    goto L_08A263E0;
L_08A2642C:;
    a0 = D_08C2B890 - (-18288);
    a0 = a0 - 18288;
    a2 = 1;
    v0 = func_08AD1000(a0, a1, a2);
    goto L_08A2643C;
L_08A2643C:;
    a0 = v0 + 0;
    func_08A537CC(a0);
    goto L_08A26444;
L_08A26444:;
    v0 = LD32(s1+12);
    v0 = v0 | 0x20;
    ST32(s1+12, v0);
    goto L_08A263D0;
L_08A26454:;
    a0 = D_08C2B928 - (-18136);
    a0 = a0 - 18136;
    a2 = 1;
    v0 = func_08AD0F6C(a0, a1, a2);
    goto L_08A26464;
L_08A26464:;
    a0 = v0 + 0;
    func_08A58414(a0);
    goto L_08A2646C;
L_08A2646C:;
    v0 = LD32(s1+12);
    v0 = v0 | 0x10;
    ST32(s1+12, v0);
    goto L_08A263C0;
L_08A2647C:;
    a0 = s6 - 15872;
    a2 = 1;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26488;
L_08A26488:;
    a0 = v0 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26490;
L_08A26490:;
    v0 = LD32(s1+12);
    v0 = v0 | 0x8;
    ST32(s1+12, v0);
    goto L_08A263B0;
L_08A264A0:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A264E4; }
    goto L_08A264A8;
L_08A264A8:;
    cnd_ = a2 == 0;
    v0 = D_08C2C21C - (-15844);
    if (cnd_) { goto L_08A264D0; }
    goto L_08A264B0;
L_08A264B0:;
    v0 = LD32(a1+4);
    ST32(a2+4, v0);
    goto L_08A264B8;
L_08A264B8:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A264C0;
L_08A264C0:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08A26394;
L_08A264D0:;
    v1 = LD32(v0-15844);
    a0 = LD32(a1+4);
    v1 = a3 + v1;
    ST32(v1, a0);
    goto L_08A264B8;
L_08A264E4:;
    ST8(a1+8, v0);
    goto L_08A26394;
L_08A264EC:;
    a1 = 1;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_08A264F4;
L_08A264F4:;
    v0 = LD32(s1+12);
    v0 = v0 | 0x2;
    ST32(s1+12, v0);
    goto L_08A26334;
L_08A26504:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A26320; }
    goto L_08A26510;
L_08A26510:;
    goto L_08A2632C;
L_08A26518:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A262D0; }
    goto L_08A26524;
L_08A26524:;
    goto L_08A2632C;
L_08A2652C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A26218; }
    goto L_08A26538;
L_08A26538:;
    goto L_08A26224;
L_08A26540:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A261C8; }
    goto L_08A2654C;
L_08A2654C:;
    goto L_08A26224;
L_08A26554:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2655C;
L_08A2655C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26568;
L_08A26568:;
    v0 = v0 ^ 0x1;
    ST8(s1+9, v0);
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2657C;
L_08A2657C:;
    a1 = LD32(s1+4);
    goto L_08A2614C;
}

/* 08A26584 */
void func_08A26584(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A26584:;
    sp = sp - 32;
    s3 = D_08C2CDF4 - (-12812);
    s2 = s3 - 12812;
    s1 = a0 + 0;
    s0 = a2 & 0xff;
    func_08A25AF8(a0, a1);
    goto L_08A265B0;
L_08A265B0:;
    v0 = 63;
    ST32(s1+12, v0);
    v0 = (u32)-1;
    a0 = 12;
    ST32(s1+16, v0);
    v0 = D_08B15358 - (21336);
    v0 = v0 + 21336;
    v1 = LD32(s2+4);
    ST32(s1, v0);
    v0 = 1;
    v1 = v1 - 1;
    ST8(s1+23, s0);
    ST8(s1+22, v0);
    s0 = LD32(s1+4);
    ST8(s1+20, 0);
    s0 = s0 & v1;
    ST8(s1+21, 0);
    s0 = s0 << 2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A265FC;
L_08A265FC:;
    a0 = LD32(s3-12812);
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

/* 08A26640 */
void func_08A26640(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26640:;
    v0 = D_08B15358 - (21336);
    v0 = v0 + 21336;
    ST32(a0, v0);
    a1 = a0 + 0;
    a0 = D_08C2CDF4 - (-12812);
    sp = sp - 16;
    a0 = a0 - 12812;
    func_08AD1094(a0, a1, t1, t2, t3);
    goto L_08A26664;
L_08A26664:;
    sp = sp + 16;
    return;
}

/* 08A26670 */
u64 func_08A26670(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_08A26670:;
    v0 = D_08C28F60 - (-28832);
    a1 = LD32(v0-28832);
    v0 = LD32(a0+12);
    v1 = 1;
    v1 = v1 << (a1 & 31);
    v0 = v0 & v1;
    v0 = 0 < v0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A26690 */
rv_t func_08A26690(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26690:;
    sp = sp - 16;
    v0 = 1;
    s1 = a0 + 0;
    a1 = LD32(a0+4);
    ST8(s1+8, v0);
    a0 = D_08B28FD4 - (-28716);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 28716;
    if (cnd_) { goto L_08A267E0; }
    goto L_08A266C4;
L_08A266C4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28716);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A26708; }
    goto L_08A266E8;
L_08A266E8:;
    a0 = LD32(v1);
    goto L_08A266EC;
L_08A266EC:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A26874; }
    goto L_08A266F8;
L_08A266F8:;
    v1 = LD32(v1+4);
    goto L_08A266FC;
L_08A266FC:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_08A266EC; }
    goto L_08A26704;
L_08A26704:;
    s0 = 0 + 0;
    goto L_08A26708;
L_08A26708:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A267E4; }
    goto L_08A26710;
L_08A26710:;
    v0 = LD_U8(s1+20);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A26864; }
    goto L_08A2671C;
L_08A2671C:;
    a1 = LD32(s1+16);
    s2 = (u32)-1;
    cnd_ = a1 == s2;
    a1 = a1 < 0x1u;
    if (cnd_) { goto L_08A26738; }
    goto L_08A2672C;
L_08A2672C:;
    a0 = s0 + 0;
    { rv_t r_ = func_088741DC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26734;
L_08A26734:;
    ST32(s1+16, s2);
    goto L_08A26738;
L_08A26738:;
    v0 = LD_U8(s1+9);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+23); goto L_08A267D8; }
    goto L_08A26744;
L_08A26744:;
    a2 = LD32(s1+4);
    a0 = D_08C2C31C - (-15588);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15588;
    if (cnd_) { goto L_08A267D4; }
    goto L_08A26758;
L_08A26758:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A267A8; }
    goto L_08A2677C;
L_08A2677C:;
    a0 = LD32(a1);
    goto L_08A26780;
L_08A26780:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A26844; }
    goto L_08A26798;
L_08A26798:;
    a1 = LD32(a1+4);
    goto L_08A2679C;
L_08A2679C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A26780; }
    goto L_08A267A4;
L_08A267A4:;
    a0 = 0 + 0;
    goto L_08A267A8;
L_08A267A8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s1+23); goto L_08A267D8; }
    goto L_08A267B0;
L_08A267B0:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s1+23); goto L_08A267D8; }
    goto L_08A267C8;
L_08A267C8:;
    a1 = 0 + 0;
    { u64 r_ = func_088BB1D8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A267D0;
L_08A267D0:;
    ST8(s1+9, 0);
    goto L_08A267D4;
L_08A267D4:;
    v0 = LD_U8(s1+23);
    goto L_08A267D8;
L_08A267D8:;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A267F8; }
    goto L_08A267E0;
L_08A267E0:;
    goto L_08A267E4;
L_08A267E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A267F8:;
    a0 = 0x8078;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26808;
L_08A26808:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A267E0; }
    goto L_08A26810;
L_08A26810:;
    v0 = LD32(v0+28);
    v1 = 2;
    ST32(a3, v1);
    v0 = v0 | 0x1;
    a0 = a3 + 0;
    ST32(a3+28, v0);
    a1 = 1;
    a2 = 1;
    v0 = LD32(s1+4);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2683C;
L_08A2683C:;
    goto L_08A267E4;
L_08A26844:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A2679C; }
    goto L_08A26850;
L_08A26850:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A2679C; }
    goto L_08A2685C;
L_08A2685C:;
    goto L_08A267A8;
L_08A26864:;
    a1 = 0 + 0;
    { rv_t r_ = func_08874390(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2686C;
L_08A2686C:;
    ST8(s1+20, 0);
    goto L_08A2671C;
L_08A26874:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A266F8; }
    goto L_08A26880;
L_08A26880:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08A266FC; }
    goto L_08A2688C;
L_08A2688C:;
    goto L_08A26708;
}

/* 08A26894 */
rv_t func_08A26894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26894:;
    sp = sp - 16;
    a2 = 1;
    s1 = a0 + 0;
    ST8(a0+8, 0);
    a1 = LD32(a0+4);
    a0 = D_08B28FD4 - (-28716);
    a0 = a0 - 28716;
    { u64 r_ = func_08AA4CA4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A268C4;
L_08A268C4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A26948; }
    goto L_08A268CC;
L_08A268CC:;
    a1 = LD32(s1+4);
    a0 = D_08C2C31C - (-15588);
    a0 = a0 - 15588;
    a2 = 1;
    { u64 r_ = func_08ACE6B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A268E0;
L_08A268E0:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A2691C; }
    goto L_08A268E8;
L_08A268E8:;
    v1 = LD32(v0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s0 = LD32(v0+4);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A2691C; }
    goto L_08A26900;
L_08A26900:;
    a0 = s0 + 0;
    { u64 r_ = func_088BB1C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26908;
L_08A26908:;
    v0 = v0 ^ 0x1;
    ST8(s1+9, v0);
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2691C;
L_08A2691C:;
    a0 = s2 + 0;
    v0 = func_088744C8(a0, 0, 0, 0);
    goto L_08A26924;
L_08A26924:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A269C8; }
    goto L_08A2692C;
L_08A2692C:;
    a0 = s2 + 0;
    { u64 r_ = func_0887427C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26934;
L_08A26934:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A269AC; }
    goto L_08A2693C;
L_08A2693C:;
    v0 = LD_U8(s1+23);
    goto L_08A26940;
L_08A26940:;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A26960; }
    goto L_08A26948;
L_08A26948:;
    goto L_08A2694C;
L_08A2694C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A26960:;
    a0 = 0x8079;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26970;
L_08A26970:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A26948; }
    goto L_08A26978;
L_08A26978:;
    v0 = LD32(v0+28);
    v1 = 2;
    ST32(a3, v1);
    v0 = v0 | 0x1;
    a0 = a3 + 0;
    ST32(a3+28, v0);
    a1 = 1;
    a2 = 1;
    v0 = LD32(s1+4);
    ST32(a3+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A269A4;
L_08A269A4:;
    goto L_08A2694C;
L_08A269AC:;
    a0 = s2 + 0;
    v0 = func_08874360(a0);
    goto L_08A269B4;
L_08A269B4:;
    ST32(s1+16, v0);
    a0 = s2 + 0;
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A269C0;
L_08A269C0:;
    v0 = LD_U8(s1+23);
    goto L_08A26940;
L_08A269C8:;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A269D0;
L_08A269D0:;
    v0 = 1;
    ST8(s1+20, v0);
    goto L_08A2692C;
}

/* 08A269DC */
void func_08A269DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A269DC:;
    sp = sp - 48;
    a2 = D_08C2CDF4 - (-12812);
    v0 = a2 - 12812;
    s1 = a0 & 0xff;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08A26A74; }
    goto L_08A26A28;
L_08A26A28:;
    a2 = LD32(a2-12812);
    a3 = a1 + 0;
    goto L_08A26A30;
L_08A26A30:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A26A64; }
    goto L_08A26A48;
L_08A26A48:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A26A78; }
    goto L_08A26A58;
L_08A26A58:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A26A48; }
    goto L_08A26A64;
L_08A26A64:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A26A30; }
    goto L_08A26A74;
L_08A26A74:;
    v0 = LD32(sp+8);
    goto L_08A26A78;
L_08A26A78:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_08A26AEC; }
    goto L_08A26A80;
L_08A26A80:;
    s0 = LD32(v0);
    goto L_08A26A84;
L_08A26A84:;
    v0 = LD_U8(s0+22);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A26A98; }
    goto L_08A26A90;
L_08A26A90:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08A26AD4; }
    goto L_08A26A98;
L_08A26A98:;
    ST8(s0+22, 0);
    { u64 r_ = func_08A26670(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26AA0;
L_08A26AA0:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A26AB4; }
    goto L_08A26AA8;
L_08A26AA8:;
    v0 = LD_U8(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08A26BC0; }
    goto L_08A26AB4;
L_08A26AB4:;
    { u64 r_ = func_08A26670(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26ABC;
L_08A26ABC:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A26AD4; }
    goto L_08A26AC4;
L_08A26AC4:;
    v0 = LD_U8(s0+8);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A26BA8; }
    goto L_08A26AD0;
L_08A26AD0:;
    a0 = sp + 0;
    goto L_08A26AD4;
L_08A26AD4:;
    a1 = 1;
    func_08AD113C(a0);
    goto L_08A26ADC;
L_08A26ADC:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08A26A84; }
    goto L_08A26AE8;
L_08A26AE8:;
    s1 = LD32(sp);
    goto L_08A26AEC;
L_08A26AEC:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A26B70; }
    goto L_08A26AFC;
L_08A26AFC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A26B70; }
    goto L_08A26B08;
L_08A26B08:;
    v0 = LD32(s1);
    goto L_08A26B0C;
L_08A26B0C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A26B60; }
    goto L_08A26B20;
L_08A26B20:;
    v0 = LD_U8(s0+8);
    goto L_08A26B24;
L_08A26B24:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A26BA0; }
    goto L_08A26B2C;
L_08A26B2C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A26B90; }
    goto L_08A26B34;
L_08A26B34:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A26B3C;
L_08A26B3C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26B48;
L_08A26B48:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A26B54;
L_08A26B54:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A26B24; }
    goto L_08A26B5C;
L_08A26B5C:;
    v1 = LD32(s1+4);
    goto L_08A26B60;
L_08A26B60:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A26B0C; }
    goto L_08A26B70;
L_08A26B70:;
    sp = sp + 48;
    return;
L_08A26B90:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A26B3C;
L_08A26BA0:;
    s0 = LD32(s0+4);
    goto L_08A26B54;
L_08A26BA8:;
    v0 = LD32(s0);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26BB8;
L_08A26BB8:;
    a0 = sp + 0;
    goto L_08A26AD4;
L_08A26BC0:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26BCC;
L_08A26BCC:;
    a0 = sp + 0;
    goto L_08A26AD4;
}

/* 08A26BD4 */
rv_t func_08A26BD4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26BD4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26BF8;
L_08A26BF8:;
    a0 = s0 + 0;
    a1 = LD32(s1+12);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26C04;
L_08A26C04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A26C18 */
rv_t func_08A26C18(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A26C18:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26C3C;
L_08A26C3C:;
    s0 = s0 + 12;
    v0 = LD32(sp);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A26C64; }
    goto L_08A26C50;
L_08A26C50:;
    goto L_08A26C54;
L_08A26C54:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A26C64:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26C6C;
L_08A26C6C:;
    goto L_08A26C54;
}

/* 08A26C74 */
u64 func_08A26C74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26C74:;
    sp = sp - 16;
    ST32(sp, 0);
    t0 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_08A26C88;
L_08A26C88:;
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
    if (cnd_) { goto L_08A26C88; }
    goto L_08A26CB0;
L_08A26CB0:;
    v0 = LD32(t0+12);
    a3 = sp + 4;
    a2 = 0 + 0;
    ST32(sp+4, v0);
    goto L_08A26CC0;
L_08A26CC0:;
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
    if (cnd_) { goto L_08A26CC0; }
    goto L_08A26CE8;
L_08A26CE8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A26CF0 */
void func_08A26CF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26CF0:;
    sp = sp - 16;
    ST32(sp, 0);
    t0 = a0 + 0;
    a3 = sp + 0;
    a2 = 0 + 0;
    goto L_08A26D04;
L_08A26D04:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(a1, v0);
    ST8(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A26D04; }
    goto L_08A26D28;
L_08A26D28:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A26D64; }
    goto L_08A26D34;
L_08A26D34:;
    a2 = t0 + 12;
    a3 = 0 + 0;
    goto L_08A26D3C;
L_08A26D3C:;
    v1 = LD32(a1);
    a3 = a3 + 1;
    a0 = a3 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a2, v0);
    a2 = a2 + 1;
    v0 = LD32(a1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(a1, v0);
    if (cnd_) { goto L_08A26D3C; }
    goto L_08A26D64;
L_08A26D64:;
    sp = sp + 16;
    return;
}

/* 08A26D6C */
rv_t func_08A26D6C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A26D6C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A26E90; }
    goto L_08A26DA0;
L_08A26DA0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEFA18 - (-1512);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-1512));
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
    t0 = D_08C2CDC4 - (-12860);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2CDD4 - (-12844);
    a3 = D_08C2CDE4 - (-12828);
    v1 = t0 - 12860;
    a1 = v0 - 12844;
    a2 = a3 - 12828;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2CDF4 - (-12812);
    s0 = s3 - 12812;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-12844, FBITS(f5));
    v0 = 4;
    ST32(t0-12860, FBITS(f1));
    ST32(a3-12828, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26E58;
L_08A26E58:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-12812, v0);
    if (cnd_) { goto L_08A26E84; }
    goto L_08A26E68;
L_08A26E68:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08A26E70;
L_08A26E70:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A26E70; }
    goto L_08A26E84;
L_08A26E84:;
    v0 = s3 - 12812;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08A26E90;
L_08A26E90:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A26EB4; }
    goto L_08A26EA4;
L_08A26EA4:;
    v0 = D_08C2CDF4 - (-12812);
    a0 = LD32(v0-12812);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A26ECC; }
    goto L_08A26EB4;
L_08A26EB4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A26ECC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A26ED4;
L_08A26ED4:;
    goto L_08A26EB4;
}

/* 08A26EDC */
rv_t func_08A26EDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26EDC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A26D6C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26EF0;
L_08A26EF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A26EFC */
rv_t func_08A26EFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26EFC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A26D6C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A26F10;
L_08A26F10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A26F1C */
u32 func_08A26F1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A26F1C:;
    sp = sp - 16;
    v0 = a0 < 0x5u;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A26F50; }
    goto L_08A26F30;
L_08A26F30:;
    v1 = D_08ADF0C8 - (-3896);
    v0 = a0 << 2;
    v1 = v1 - 3896;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A26F4Cu: goto L_08A26F4C; case 0x08A26F68u: goto L_08A26F68; case 0x08A26F70u: goto L_08A26F70; case 0x08A26F78u: goto L_08A26F78; case 0x08A26F80u: goto L_08A26F80; default: rs_break(0, 0x08a26f44); }
L_08A26F4C:;
    v1 = 49;
    goto L_08A26F50;
L_08A26F50:;
    a0 = v1 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A26F5C;
L_08A26F5C:;
    sp = sp + 16;
    return v0;
L_08A26F68:;
    v1 = 50;
    goto L_08A26F50;
L_08A26F70:;
    v1 = 51;
    goto L_08A26F50;
L_08A26F78:;
    v1 = 52;
    goto L_08A26F50;
L_08A26F80:;
    v1 = 53;
    goto L_08A26F50;
}

/* 08A26F88 */
u64 func_08A26F88(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A26F88:;
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A26FB8; }
    goto L_08A26F94;
L_08A26F94:;
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A26FB8; }
    goto L_08A26F9C;
L_08A26F9C:;
    v0 = 2;
    cnd_ = a0 == v0;
    v1 = 3;
    if (cnd_) { goto L_08A26FB8; }
    goto L_08A26FA8;
L_08A26FA8:;
    v0 = 3;
    cnd_ = a0 == v0;
    v1 = 2;
    if (cnd_) { goto L_08A26FB8; }
    goto L_08A26FB4;
L_08A26FB4:;
    v1 = 4;
    goto L_08A26FB8;
L_08A26FB8:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A26FC0 */
u64 func_08A26FC0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A26FC0:;
    v0 = 1;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_08A26FEC; }
    goto L_08A26FCC;
L_08A26FCC:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A26FEC; }
    goto L_08A26FD4;
L_08A26FD4:;
    v0 = 2;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A26FEC; }
    goto L_08A26FE0;
L_08A26FE0:;
    v0 = 3;
    cnd_ = a0 != v0;
    if (cnd_) { v1 = 2; goto L_08A26FEC; }
    goto L_08A26FEC;
L_08A26FEC:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A26FF4 */
u64 func_08A26FF4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A26FF4:;
    a2 = 2;
    cnd_ = a0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A27028; }
    goto L_08A27000;
L_08A27000:;
    v0 = 1;
    cnd_ = a0 != v0;
    if (cnd_) { a2 = 4; goto L_08A27020; }
    goto L_08A2700C;
L_08A2700C:;
    v0 = D_08B1BB5C - (-17572);
    a0 = LD32(v0-17572);
    v1 = 3;
    a2 = a1 + 0;
    if (a0 != 0) a2 = v1;
    goto L_08A27020;
L_08A27020:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A27028:;
    v0 = D_08B1BB5C - (-17572);
    v1 = LD32(v0-17572);
    if (v1 == 0) a2 = 0;
    goto L_08A27020;
}

/* 08A27038 */
u32 func_08A27038(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A27038:;
    v0 = D_08B1BDEC - (-16916);
    v1 = a0 << 2;
    v0 = v0 - 16916;
    v1 = v1 + v0;
    a0 = (s32)a0 < 2;
    v0 = D_08ADF0DC - (-3876);
    cnd_ = a0 != 0;
    v0 = v0 - 3876;
    if (cnd_) { goto L_08A27060; }
    goto L_08A27058;
L_08A27058:;
    return v0;
L_08A27060:;
    v0 = LD32(v1);
    return v0;
}

/* 08A27068 */
u32 func_08A27068(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27068:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A2709C; }
    goto L_08A27078;
L_08A27078:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = 348; goto L_08A27084; }
    goto L_08A27084;
L_08A27084:;
    a0 = v1 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A27090;
L_08A27090:;
    sp = sp + 16;
    return v0;
L_08A2709C:;
    v1 = 349;
    goto L_08A27084;
}

/* 08A270A4 */
u32 func_08A270A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A270A4:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A270D8; }
    goto L_08A270B4;
L_08A270B4:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = 350; goto L_08A270C0; }
    goto L_08A270C0;
L_08A270C0:;
    a0 = v1 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A270CC;
L_08A270CC:;
    sp = sp + 16;
    return v0;
L_08A270D8:;
    v1 = 351;
    goto L_08A270C0;
}

/* 08A270E0 */
u64 func_08A270E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A270E0:;
    v0 = 4;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_08A27108; }
    goto L_08A270EC;
L_08A270EC:;
    v0 = a0 - 2;
    cnd_ = a1 == 0;
    v1 = a0 < 0x2u;
    if (cnd_) { goto L_08A27108; }
    goto L_08A270F8;
L_08A270F8:;
    v1 = v0 < 0x2u;
    v0 = 1;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08A27108; }
    goto L_08A27108;
L_08A27108:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A27110 */
rv_t func_08A27110(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A27110:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2CE04 - (-12796);
    t1 = D_08C2CE14 - (-12780);
    t2 = D_08C2CE24 - (-12764);
    a1 = a1 & a0;
    v1 = t0 - 12796;
    a2 = t1 - 12780;
    cnd_ = a1 == 0;
    a3 = t2 - 12764;
    if (cnd_) { goto L_08A271C8; }
    goto L_08A27140;
L_08A27140:;
    v0 = D_08AEFA1C - (-1508);
    f4 = BITSF(LD32(v0-1508));
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
    ST32(t0-12796, FBITS(f2));
    ST32(t1-12780, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-12764, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A271C8;
L_08A271C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A271D0 */
rv_t func_08A271D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A271D0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A27110(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A271E4;
L_08A271E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A271F0 */
void func_08A271F0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08A271F0:;
    a0 = (u32)-1;
    v0 = D_08B1BDF8 - (-16904);
    v1 = D_08C2CE64 - (-12700);
    ST32(v0-16904, a0);
    v0 = D_08C2CE65 - (-12699);
    ST8(v1-12700, 0);
    v1 = D_08C2CE66 - (-12698);
    ST8(v0-12699, 0);
    v0 = D_08C2CE67 - (-12697);
    ST8(v1-12698, 0);
    v1 = D_08C2CE68 - (-12696);
    ST8(v0-12697, 0);
    v0 = D_08C2CE6C - (-12692);
    ST8(v1-12696, 0);
    v1 = D_08C2CE70 - (-12688);
    ST32(v0-12692, 0);
    v0 = D_08B1BDF4 - (-16908);
    ST32(v1-12688, 0);
    ST32(v0-16908, a0);
    return;
}

/* 08A27240 */
void func_08A27240(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08A27240:;
    a0 = (u32)-1;
    v0 = D_08B1BDF8 - (-16904);
    v1 = D_08C2CE65 - (-12699);
    ST32(v0-16904, a0);
    v0 = D_08C2CE66 - (-12698);
    ST8(v1-12699, 0);
    v1 = D_08C2CE67 - (-12697);
    ST8(v0-12698, 0);
    v0 = D_08C2CE68 - (-12696);
    ST8(v1-12697, 0);
    v1 = D_08C2CE6C - (-12692);
    ST8(v0-12696, 0);
    v0 = D_08C2CE70 - (-12688);
    ST32(v1-12692, 0);
    v1 = D_08B1BDF4 - (-16908);
    ST32(v0-12688, 0);
    ST32(v1-16908, a0);
    return;
}

/* 08A27288 */
void func_08A27288(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08A27288:;
    a0 = (u32)-1;
    v0 = D_08B1BDF8 - (-16904);
    v1 = D_08C2CE6C - (-12692);
    ST32(v0-16904, a0);
    v0 = D_08C2CE70 - (-12688);
    ST32(v1-12692, 0);
    v1 = D_08B1BDF4 - (-16908);
    ST32(v0-12688, 0);
    ST32(v1-16908, a0);
    return;
}

/* 08A272B0 */
void func_08A272B0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A272B0:;
    sp = sp - 16;
    s0 = D_08C2CE70 - (-12688);
    v0 = 3;
    v1 = LD32(s0-12688);
    s1 = D_08C2CE68 - (-12696);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A27324; }
    goto L_08A272D4;
L_08A272D4:;
    v0 = 1;
    goto L_08A272D8;
L_08A272D8:;
    ST8(s1-12696, v0);
    goto L_08A272DC;
L_08A272DC:;
    v1 = LD32(s0-12688);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = LD_U8(s1-12696);
    if (cnd_) { goto L_08A272F8; }
    goto L_08A272EC;
L_08A272EC:;
    func_0883BFA8();
    goto L_08A272F4;
L_08A272F4:;
    v0 = LD_U8(s1-12696);
    goto L_08A272F8;
L_08A272F8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A27314; }
    goto L_08A27300;
L_08A27300:;
    goto L_08A27304;
L_08A27304:;
    sp = sp + 16;
    return;
L_08A27314:;
    func_08897F68(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A2731C;
L_08A2731C:;
    goto L_08A27304;
L_08A27324:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2732C;
L_08A2732C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A272D8; }
    goto L_08A27338;
L_08A27338:;
    ST8(s1-12696, 0);
    goto L_08A272DC;
}

/* 08A27340 */
void func_08A27340(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27340:;
    sp = sp - 16;
    s0 = D_08C2CE66 - (-12698);
    { u64 r_ = func_08897BBC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27354;
L_08A27354:;
    cnd_ = v0 == 0;
    v0 = D_08C2CE65 - (-12699);
    if (cnd_) { goto L_08A273A8; }
    goto L_08A2735C;
L_08A2735C:;
    v1 = LD_U8(v0-12699);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A27388; }
    goto L_08A27368;
L_08A27368:;
    v0 = LD_U8(s0-12698);
    a0 = (u32)-1;
    a1 = 0 + 0;
    a2 = 7;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A27394; }
    goto L_08A27384;
L_08A27384:;
    goto L_08A27388;
L_08A27388:;
    sp = sp + 16;
    return;
L_08A27394:;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2739C;
L_08A2739C:;
    v1 = 1;
    ST8(s0-12698, v1);
    goto L_08A27384;
L_08A273A8:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A273B0;
L_08A273B0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2CE65 - (-12699); goto L_08A2735C; }
    goto L_08A273BC;
L_08A273BC:;
    func_08A6A280(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A273C4;
L_08A273C4:;
    func_088894BC();
    goto L_08A273CC;
L_08A273CC:;
    v0 = D_08C2CE65 - (-12699);
    goto L_08A2735C;
}

/* 08A273D4 */
void func_08A273D4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A273D4:;
    sp = sp - 16;
    v0 = D_08C2CE65 - (-12699);
    v1 = LD_U8(v0-12699);
    cnd_ = v1 != 0;
    v0 = D_08C2CE68 - (-12696);
    if (cnd_) { goto L_08A27414; }
    goto L_08A273EC;
L_08A273EC:;
    v1 = LD_U8(v0-12696);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A27404; }
    goto L_08A273F8;
L_08A273F8:;
    goto L_08A273FC;
L_08A273FC:;
    sp = sp + 16;
    return;
L_08A27404:;
    func_08897E28(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A2740C;
L_08A2740C:;
    goto L_08A273FC;
L_08A27414:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2741C;
L_08A2741C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2CE68 - (-12696); goto L_08A273EC; }
    goto L_08A27428;
L_08A27428:;
    v0 = func_08901790();
    goto L_08A27430;
L_08A27430:;
    func_08889520();
    goto L_08A27438;
L_08A27438:;
    v0 = D_08C2CE68 - (-12696);
    goto L_08A273EC;
}

/* 08A27440 */
void func_08A27440(void)
{
L_08A27440:;
    return;
}

/* 08A27448 */
void func_08A27448(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27448:;
    v0 = D_08C2CE70 - (-12688);
    sp = sp - 16;
    ST32(v0-12688, a0);
    func_08A27440();
    goto L_08A27460;
L_08A27460:;
    v0 = D_08C2CE65 - (-12699);
    a0 = LD_U8(v0-12699);
    v1 = D_08C2CE67 - (-12697);
    cnd_ = a0 != 0;
    ST8(v1-12697, 0);
    if (cnd_) { goto L_08A27480; }
    goto L_08A27474;
L_08A27474:;
    goto L_08A27478;
L_08A27478:;
    sp = sp + 16;
    return;
L_08A27480:;
    func_0883A610(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A27488;
L_08A27488:;
    goto L_08A27478;
}

/* 08A27490 */
void func_08A27490(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27490:;
    sp = sp - 16;
    v0 = D_08B29BF8 - (-25608);
    v1 = LD32(v0-25608);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A274B4; }
    goto L_08A274A8;
L_08A274A8:;
    sp = sp + 16;
    return;
L_08A274B4:;
    v0 = D_08C2CE66 - (-12698);
    v1 = D_08C2CE65 - (-12699);
    ST8(v0-12698, 0);
    ST8(v1-12699, 0);
    func_08A2753C();
    goto L_08A274C8;
L_08A274C8:;
    a0 = (u32)-1;
    v0 = D_08B1BDF8 - (-16904);
    v1 = D_08B1BDF4 - (-16908);
    ST32(v0-16904, a0);
    v0 = D_08C2CE68 - (-12696);
    ST32(v1-16908, a0);
    v1 = D_08C2CE67 - (-12697);
    ST8(v0-12696, 0);
    ST8(v1-12697, 0);
    goto L_08A274A8;
}

/* 08A274F0 */
void func_08A274F0(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A274F0:;
    sp = sp - 16;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27500;
L_08A27500:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A27518; }
    goto L_08A2750C;
L_08A2750C:;
    goto L_08A27510;
L_08A27510:;
    sp = sp + 16;
    return;
L_08A27518:;
    func_0883BFA8();
    goto L_08A27520;
L_08A27520:;
    func_0883BF38();
    goto L_08A27528;
L_08A27528:;
    goto L_08A27510;
}

/* 08A27530 */
void func_08A27530(u32 a0)
{
    u32 v0 = 0;
L_08A27530:;
    v0 = D_08C2CE64 - (-12700);
    ST8(v0-12700, a0);
    return;
}

/* 08A2753C */
void func_08A2753C(void)
{
L_08A2753C:;
    return;
}

/* 08A27544 */
u64 func_08A27544(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A27544:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    v0 = a0 - 1;
    cnd_ = v1 == 0;
    v0 = v0 < 0x6u;
    if (cnd_) { goto L_08A27564; }
    goto L_08A27558;
L_08A27558:;
    cnd_ = v0 == 0;
    v0 = D_08C2CE6C - (-12692);
    if (cnd_) { goto L_08A27564; }
    goto L_08A27560;
L_08A27560:;
    ST32(v0-12692, a0);
    goto L_08A27564;
L_08A27564:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A2756C */
u64 func_08A2756C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A2756C:;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 == 0;
    v0 = a0 < 0x15u;
    if (cnd_) { goto L_08A27588; }
    goto L_08A2757C;
L_08A2757C:;
    cnd_ = v0 == 0;
    v0 = D_08B1BDF8 - (-16904);
    if (cnd_) { goto L_08A27588; }
    goto L_08A27584;
L_08A27584:;
    ST32(v0-16904, a0);
    goto L_08A27588;
L_08A27588:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A27590 */
u64 func_08A27590(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27590:;
    sp = sp - 16;
    a1 = (u32)-1;
    a2 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    cnd_ = a0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A275C0; }
    goto L_08A275B0;
L_08A275B0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A275C0:;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A275C8;
L_08A275C8:;
    v1 = 1;
    goto L_08A275B0;
}

/* 08A275D0 */
void func_08A275D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A275D0:;
    sp = sp - 16;
    a1 = (u32)-1;
    a2 = 5;
    a3 = 0 + 0;
    t0 = 0 + 0;
    cnd_ = a0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A27600; }
    goto L_08A275F0;
L_08A275F0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A27600:;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27608;
L_08A27608:;
    v1 = 1;
    goto L_08A275F0;
}

/* 08A27610 */
rv_t func_08A27610(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A27610:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2CE34 - (-12748);
    t1 = D_08C2CE44 - (-12732);
    t2 = D_08C2CE54 - (-12716);
    a1 = a1 & a0;
    v1 = t0 - 12748;
    a2 = t1 - 12732;
    cnd_ = a1 == 0;
    a3 = t2 - 12716;
    if (cnd_) { goto L_08A276C8; }
    goto L_08A27640;
L_08A27640:;
    v0 = D_08AEFA20 - (-1504);
    f4 = BITSF(LD32(v0-1504));
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
    ST32(t0-12748, FBITS(f2));
    ST32(t1-12732, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-12716, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A276C8;
L_08A276C8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A276D0 */
rv_t func_08A276D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A276D0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A27610(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A276E4;
L_08A276E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A276F0 */
rv_t func_08A276F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A276F0:;
    a0 = 0x14ec0000u;
    sp = sp - 16;
    a0 = a0 | 0x419f;
    s1 = D_08C2CEDC - (-12580);
    { rv_t r_ = func_0888B320(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27710;
L_08A27710:;
    v1 = D_08ADF0E0 - (-3872);
    s0 = v1 - 3872;
    a0 = s0 + 0;
    ST32(s1-12580, v0);
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27724;
L_08A27724:;
    a0 = 0xdd220000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x4948;
    if (cnd_) { goto L_08A27824; }
    goto L_08A27730;
L_08A27730:;
    v0 = D_08ADF11C - (-3812);
    goto L_08A27734;
L_08A27734:;
    s0 = v0 - 3812;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27740;
L_08A27740:;
    cnd_ = v0 != 0;
    a0 = 0xc3170000u;
    if (cnd_) { goto L_08A27770; }
    goto L_08A27748;
L_08A27748:;
    v0 = LD32(s1-12580);
    a3 = 0x7fff0000u;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 392;
    if (cnd_) { goto L_08A2780C; }
    goto L_08A2776C;
L_08A2776C:;
    a0 = 0xc3170000u;
    goto L_08A27770;
L_08A27770:;
    a0 = a0 | 0xf67b;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27780;
L_08A27780:;
    a0 = 0xb4cd0000u;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a0 = a0 | 0xf1ed;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27794;
L_08A27794:;
    a0 = D_08C2CEAC - (-12628);
    a0 = a0 - 12628;
    func_08A34290(a0);
    goto L_08A277A0;
L_08A277A0:;
    func_08A28BCC();
    goto L_08A277A8;
L_08A277A8:;
    f0 = func_08A36BA0(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A277B0;
L_08A277B0:;
    v0 = D_08C28DC4 - (-29244);
    a1 = LD32(v0-29244);
    a0 = (u32)-1;
    v0 = D_08B1BDFC - (-16900);
    ST32(v0-16900, a0);
    v1 = D_08C2CEA8 - (-12632);
    v0 = 1;
    cnd_ = a1 == v0;
    ST8(v1-12632, 0);
    if (cnd_) { goto L_08A277EC; }
    goto L_08A277D4;
L_08A277D4:;
    goto L_08A277D8;
L_08A277D8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A277EC:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    a0 = 1;
    if (cnd_) { goto L_08A277D4; }
    goto L_08A277FC;
L_08A277FC:;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27804;
L_08A27804:;
    goto L_08A277D8;
L_08A2780C:;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A27814;
L_08A27814:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2781C;
L_08A2781C:;
    a0 = 0xc3170000u;
    goto L_08A27770;
L_08A27824:;
    { rv_t r_ = func_0888B320(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2782C;
L_08A2782C:;
    a3 = 0x7fff0000u;
    a1 = v0 + 392;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A27730; }
    goto L_08A2784C;
L_08A2784C:;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A27854;
L_08A27854:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2785C;
L_08A2785C:;
    v0 = D_08ADF11C - (-3812);
    goto L_08A27734;
}

/* 08A27864 */
rv_t func_08A27864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27864:;
    sp = sp - 16;
    v0 = D_08ADF0E0 - (-3872);
    s0 = v0 - 3872;
    a0 = s0 + 0;
    v0 = D_08C2CEDC - (-12580);
    ST32(v0-12580, 0);
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27888;
L_08A27888:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A27984; }
    goto L_08A27890;
L_08A27890:;
    v0 = D_08ADF11C - (-3812);
    goto L_08A27894;
L_08A27894:;
    s0 = v0 - 3812;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A278A0;
L_08A278A0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A27974; }
    goto L_08A278A8;
L_08A278A8:;
    a0 = 0xc3170000u;
    goto L_08A278AC;
L_08A278AC:;
    a0 = a0 | 0xf67b;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A278B4;
L_08A278B4:;
    a0 = 0xb4cd0000u;
    a0 = a0 | 0xf1ed;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A278C0;
L_08A278C0:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A278C8;
L_08A278C8:;
    cnd_ = v0 == 0;
    s0 = D_08C28DC4 - (-29244);
    if (cnd_) { goto L_08A27944; }
    goto L_08A278D0;
L_08A278D0:;
    v0 = LD32(s0-29244);
    a0 = 3;
    v0 = v0 ^ 0x5;
    if (v0 == 0) a0 = 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A278E4;
L_08A278E4:;
    v1 = LD32(s0-29244);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = D_08B2BB6D - (-17555);
    if (cnd_) { goto L_08A27928; }
    goto L_08A278F4;
L_08A278F4:;
    v0 = D_08C2CEB0 - (-12624);
    goto L_08A278F8;
L_08A278F8:;
    v1 = LD32(v0-12624);
    cnd_ = (s32)v1 < 0;
    if (cnd_) { goto L_08A27918; }
    goto L_08A27904;
L_08A27904:;
    goto L_08A27908;
L_08A27908:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27918:;
    { u64 r_ = func_08A28C3C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27920;
L_08A27920:;
    goto L_08A27908;
L_08A27928:;
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = D_08C2CEB0 - (-12624); goto L_08A278F8; }
    goto L_08A27934;
L_08A27934:;
    a0 = 0 + 0;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2793C;
L_08A2793C:;
    v0 = D_08C2CEB0 - (-12624);
    goto L_08A278F8;
L_08A27944:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2794C;
L_08A2794C:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    s0 = D_08C28DC4 - (-29244);
    if (cnd_) { goto L_08A278E4; }
    goto L_08A2795C;
L_08A2795C:;
    v0 = D_08C2C3E0 - (-15392);
    v1 = LD32(v0-15392);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A278E4; }
    goto L_08A2796C;
L_08A2796C:;
    ST8(v1+76, v0);
    goto L_08A278E4;
L_08A27974:;
    a0 = s0 + 0;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2797C;
L_08A2797C:;
    a0 = 0xc3170000u;
    goto L_08A278AC;
L_08A27984:;
    a0 = s0 + 0;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2798C;
L_08A2798C:;
    v0 = D_08ADF11C - (-3812);
    goto L_08A27894;
}

/* 08A27994 */
rv_t func_08A27994(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27994:;
    sp = sp - 16;
    a0 = D_08ADF150 - (-3760);
    a1 = a1 & 0xff;
    a0 = a0 - 3760;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A279BC; }
    goto L_08A279B0;
L_08A279B0:;
    a1 = 0x1def0000u;
    cnd_ = a2 == 0;
    a1 = a1 | 0xe5cc;
    if (cnd_) { goto L_08A279D4; }
    goto L_08A279BC;
L_08A279BC:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A279C4;
L_08A279C4:;
    goto L_08A279C8;
L_08A279C8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A279D4:;
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A279E0;
L_08A279E0:;
    v1 = D_08C2CEAC - (-12628);
    a0 = v1 - 12628;
    a2 = LD32(a0+4);
    a3 = LD32(v1-12628);
    a0 = D_08ADF1B0 - (-3664);
    a0 = a0 - 3664;
    a2 = a3 - a2;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27A04;
L_08A27A04:;
    goto L_08A279C8;
}

/* 08A27A0C */
rv_t func_08A27A0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27A0C:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08ADF1C4 - (-3644);
    a0 = a0 - 3644;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A27A34; }
    goto L_08A27A2C;
L_08A27A2C:;
    cnd_ = a2 == 0;
    a3 = v1 < 0x8u;
    if (cnd_) { goto L_08A27A4C; }
    goto L_08A27A34;
L_08A27A34:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27A3C;
L_08A27A3C:;
    v0 = 1;
    goto L_08A27A40;
L_08A27A40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27A4C:;
    v0 = D_08ADFBF4 - (-1036);
    v0 = v0 - 1036;
    v1 = v1 << 2;
    a0 = 0x330000u;
    v1 = v1 + v0;
    a0 = a0 | 0x155f;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A27A40; }
    goto L_08A27A6C;
L_08A27A6C:;
    a1 = LD32(v1);
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27A74;
L_08A27A74:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27A7C;
L_08A27A7C:;
    v0 = 1;
    goto L_08A27A40;
}

/* 08A27A84 */
rv_t func_08A27A84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A27A84:;
    sp = sp - 80;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A27AAC; }
    goto L_08A27AA4;
L_08A27AA4:;
    cnd_ = a2 == 0;
    v0 = a0 < 0x8u;
    if (cnd_) { goto L_08A27AD4; }
    goto L_08A27AAC;
L_08A27AAC:;
    a0 = D_08ADF1C4 - (-3644);
    a0 = a0 - 3644;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27AB8;
L_08A27AB8:;
    v1 = 1;
    goto L_08A27ABC;
L_08A27ABC:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A27AD4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A27ABC; }
    goto L_08A27ADC;
L_08A27ADC:;
    cnd_ = a0 == 0;
    s1 = D_08B1C044 - (-16316);
    if (cnd_) { goto L_08A27B78; }
    goto L_08A27AE4;
L_08A27AE4:;
    f1 = BITSF(s0);
    cnd_ = (s32)s0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A27B5C; }
    goto L_08A27AF0;
L_08A27AF0:;
    v0 = D_08AEFA24 - (-1500);
    f1 = BITSF(LD32(v0-1500));
    v1 = D_08AEFA28 - (-1496);
    f2 = BITSF(LD32(v1-1496));
    f0 = f0 * f1;
    v1 = LD32(s1-16316);
    v0 = 0x5ac30000u;
    a0 = D_08ADF1F8 - (-3592);
    f0 = f0 + f2;
    v0 = v0 | 0xa2c4;
    a0 = a0 - 3592;
    a1 = sp + 16;
    f1 = f0 + f1;
    ST32(sp+16, v0);
    ST32(sp+24, v1);
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f1));
    ST8(sp+20, 0);
    ST32(sp+28, 0);
    ST32(sp+44, 0);
    ST32(sp+48, 0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27B54;
L_08A27B54:;
    v1 = 1;
    goto L_08A27ABC;
L_08A27B5C:;
    v1 = s0 >> 1;
    v0 = s0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A27AF0;
L_08A27B78:;
    v0 = D_08B263B8 - (25528);
    a1 = LD32(v0+25528);
    a0 = D_08ADF204 - (-3580);
    a0 = a0 - 3580;
    a2 = sp + 0;
    ST8(sp, 0);
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A27B94;
L_08A27B94:;
    v1 = LD_U8(sp);
    cnd_ = v1 == 0;
    ST32(s1-16316, v0);
    if (cnd_) { goto L_08A27AE4; }
    goto L_08A27BA0;
L_08A27BA0:;
    func_0883A610(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A27BA8;
L_08A27BA8:;
    goto L_08A27AE4;
}

/* 08A27BB0 */
rv_t func_08A27BB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27BB0:;
    sp = sp - 16;
    v0 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08ADF1C4 - (-3644);
    a0 = a0 - 3644;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A27BD8; }
    goto L_08A27BD0;
L_08A27BD0:;
    cnd_ = a2 == 0;
    v1 = v0 < 0x8u;
    if (cnd_) { goto L_08A27BF0; }
    goto L_08A27BD8;
L_08A27BD8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27BE0;
L_08A27BE0:;
    v0 = 1;
    goto L_08A27BE4;
L_08A27BE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27BF0:;
    a0 = D_08C2CEAC - (-12628);
    a1 = v0 + 0;
    a0 = a0 - 12628;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A27BE4; }
    goto L_08A27C04;
L_08A27C04:;
    v0 = func_08A342E8(a0, a1);
    goto L_08A27C0C;
L_08A27C0C:;
    a0 = D_08ADF22C - (-3540);
    a1 = v0 + 0;
    a0 = a0 - 3540;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27C1C;
L_08A27C1C:;
    v0 = 1;
    goto L_08A27BE4;
}

/* 08A27C24 */
rv_t func_08A27C24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A27C24:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A27C44; }
    goto L_08A27C3C;
L_08A27C3C:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A27C68; }
    goto L_08A27C44;
L_08A27C44:;
    a0 = D_08ADF234 - (-3532);
    a0 = a0 - 3532;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27C50;
L_08A27C50:;
    v1 = 1;
    goto L_08A27C54;
L_08A27C54:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A27C68:;
    cnd_ = a0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A27C54; }
    goto L_08A27C70;
L_08A27C70:;
    a0 = D_08ADF0E0 - (-3872);
    a0 = a0 - 3872;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A27C7C;
L_08A27C7C:;
    s0 = v0 + 0;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27C84;
L_08A27C84:;
    v1 = 0xb4cd0000u;
    v1 = v1 | 0xf1ed;
    cnd_ = v0 == v1;
    v1 = D_08ADFC14 - (-1004);
    if (cnd_) { goto L_08A27CC0; }
    goto L_08A27C94;
L_08A27C94:;
    v0 = s0 << 2;
    v1 = v1 - 1004;
    v0 = v0 + v1;
    goto L_08A27CA0;
L_08A27CA0:;
    a1 = LD32(v0);
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27CB0;
L_08A27CB0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27CB8;
L_08A27CB8:;
    v1 = 1;
    goto L_08A27C54;
L_08A27CC0:;
    a0 = D_08ADF11C - (-3812);
    a0 = a0 - 3812;
    v0 = func_08899420(a0, 0, 0, 0);
    goto L_08A27CCC;
L_08A27CCC:;
    a2 = v0 + 0;
    v0 = s0 < 0x8u;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A27C54; }
    goto L_08A27CE0;
L_08A27CE0:;
    v1 = D_08ADF284 - (-3452);
    v0 = s0 << 2;
    v1 = v1 - 3452;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A27CFCu: goto L_08A27CFC; case 0x08A27D7Cu: goto L_08A27D7C; case 0x08A27D8Cu: goto L_08A27D8C; case 0x08A27D9Cu: goto L_08A27D9C; case 0x08A27DACu: goto L_08A27DAC; case 0x08A27DBCu: goto L_08A27DBC; case 0x08A27DC8u: goto L_08A27DC8; case 0x08A27DD4u: goto L_08A27DD4; default: rs_break(0, 0x08a27cf4); }
L_08A27CFC:;
    v0 = D_08ADC5E8 - (-14872);
    v1 = a2 << 2;
    v0 = v0 - 14872;
    goto L_08A27D08;
L_08A27D08:;
    v1 = v1 + v0;
    s0 = LD32(v1);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A27D2C; }
    goto L_08A27D18;
L_08A27D18:;
    v0 = a2 << 2;
    cnd_ = a3 != 0;
    v0 = v0 + a3;
    if (cnd_) { goto L_08A27CA0; }
    goto L_08A27D24;
L_08A27D24:;
    v1 = 1;
    goto L_08A27C54;
L_08A27D2C:;
    v0 = func_08A28C68();
    goto L_08A27D34;
L_08A27D34:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08A27D40;
L_08A27D40:;
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27D58;
L_08A27D58:;
    a1 = 0x99350000u;
    a0 = LD32(sp);
    a1 = a1 | 0x83fc;
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A27D6C;
L_08A27D6C:;
    a0 = v0 + 0;
    v0 = func_08834304(a0);
    goto L_08A27D74;
L_08A27D74:;
    goto L_08A27CB0;
L_08A27D7C:;
    v0 = D_08ADC610 - (-14832);
    v1 = a2 << 2;
    v0 = v0 - 14832;
    goto L_08A27D08;
L_08A27D8C:;
    v0 = D_08ADC630 - (-14800);
    v1 = a2 << 2;
    v0 = v0 - 14800;
    goto L_08A27D08;
L_08A27D9C:;
    v0 = D_08ADC648 - (-14776);
    v1 = a2 << 2;
    v0 = v0 - 14776;
    goto L_08A27D08;
L_08A27DAC:;
    v0 = D_08ADC668 - (-14744);
    v1 = a2 << 2;
    v0 = v0 - 14744;
    goto L_08A27D08;
L_08A27DBC:;
    v0 = D_08ADFC34 - (-972);
    a3 = v0 - 972;
    goto L_08A27D18;
L_08A27DC8:;
    v0 = D_08ADFC44 - (-956);
    a3 = v0 - 956;
    goto L_08A27D18;
L_08A27DD4:;
    v0 = D_08ADFC54 - (-940);
    a3 = v0 - 940;
    goto L_08A27D18;
}

/* 08A27DE0 */
rv_t func_08A27DE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27DE0:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08ADF2A4 - (-3420);
    v0 = v0 & 0xff;
    a0 = a0 - 3420;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A27E1C; }
    goto L_08A27E00;
L_08A27E00:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27E08;
L_08A27E08:;
    goto L_08A27E0C;
L_08A27E0C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27E1C:;
    s0 = 0 + 0;
    { u64 r_ = func_08A28C3C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27E24;
L_08A27E24:;
    a0 = 0x820c0000u;
    a0 = a0 | 0x81de;
    { u64 r_ = func_0888AB24(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27E30;
L_08A27E30:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A27E48; }
    goto L_08A27E3C;
L_08A27E3C:;
    v0 = func_0888561C(a0, a1);
    goto L_08A27E44;
L_08A27E44:;
    s0 = v0 + 0;
    goto L_08A27E48;
L_08A27E48:;
    a0 = 0x820c0000u;
    a0 = a0 | 0x81de;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27E54;
L_08A27E54:;
    a0 = s0 + 0;
    a1 = 1;
    cnd_ = s0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A27E08; }
    goto L_08A27E64;
L_08A27E64:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27E6C;
L_08A27E6C:;
    goto L_08A27E0C;
}

/* 08A27E74 */
rv_t func_08A27E74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27E74:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08ADF30C - (-3316);
    v0 = v0 & 0xff;
    a0 = a0 - 3316;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A27EB0; }
    goto L_08A27E98;
L_08A27E98:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27EA0;
L_08A27EA0:;
    goto L_08A27EA4;
L_08A27EA4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27EB0:;
    a0 = 0xc7700000u;
    a0 = a0 | 0x7e47;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27EBC;
L_08A27EBC:;
    goto L_08A27EA4;
}

/* 08A27EC4 */
rv_t func_08A27EC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27EC4:;
    sp = sp - 16;
    v0 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08ADF35C - (-3236);
    a0 = a0 - 3236;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A27EEC; }
    goto L_08A27EE4;
L_08A27EE4:;
    cnd_ = a2 == 0;
    v0 = v0 < 0x8u;
    if (cnd_) { goto L_08A27F04; }
    goto L_08A27EEC;
L_08A27EEC:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27EF4;
L_08A27EF4:;
    goto L_08A27EF8;
L_08A27EF8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27F04:;
    a0 = 0xb4cd0000u;
    a0 = a0 | 0xf1ed;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A27EF4; }
    goto L_08A27F18;
L_08A27F18:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27F20;
L_08A27F20:;
    goto L_08A27EF8;
}

/* 08A27F28 */
rv_t func_08A27F28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27F28:;
    sp = sp - 16;
    v0 = D_08C2933C - (-27844);
    s0 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08ADF0E0 - (-3872);
    a0 = a0 - 3872;
    s1 = v0 - 27844;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A27F78; }
    goto L_08A27F54;
L_08A27F54:;
    a0 = D_08ADF3D0 - (-3120);
    a0 = a0 - 3120;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A27F60;
L_08A27F60:;
    goto L_08A27F64;
L_08A27F64:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A27F78:;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A27F80;
L_08A27F80:;
    a2 = v0 + 0;
    a1 = 0 + 0;
    a3 = s0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_08977A34(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27F94;
L_08A27F94:;
    a0 = D_08C2CEAC - (-12628);
    a0 = a0 - 12628;
    func_08A34290(a0);
    goto L_08A27FA0;
L_08A27FA0:;
    v0 = 1;
    ST8(s1+6, v0);
    f0 = func_08A36BA0(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A27FAC;
L_08A27FAC:;
    a0 = 0xb4cd0000u;
    a0 = a0 | 0xf1ed;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27FB8;
L_08A27FB8:;
    a0 = 0x820c0000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x81de;
    if (cnd_) { goto L_08A27FC8; }
    goto L_08A27FC4;
L_08A27FC4:;
    ST32(v0+172, 0);
    goto L_08A27FC8;
L_08A27FC8:;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A27FD0;
L_08A27FD0:;
    goto L_08A27F64;
}

/* 08A27FD8 */
rv_t func_08A27FD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A27FD8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08ADF42C - (-3028);
    v0 = v0 & 0xff;
    a0 = a0 - 3028;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2808C; }
    goto L_08A27FF8;
L_08A27FF8:;
    v0 = D_08C2933C - (-27844);
    s0 = v0 - 27844;
    v0 = D_08C2CEA8 - (-12632);
    v1 = LD_U8(v0-12632);
    a0 = D_08ADF0E0 - (-3872);
    cnd_ = v1 != 0;
    a0 = a0 - 3872;
    if (cnd_) { goto L_08A28028; }
    goto L_08A28014;
L_08A28014:;
    goto L_08A28018;
L_08A28018:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A28028:;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A28030;
L_08A28030:;
    a2 = v0 + 0;
    a1 = 0 + 0;
    a0 = s0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_08977A34(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28044;
L_08A28044:;
    a0 = D_08C2CEAC - (-12628);
    a0 = a0 - 12628;
    func_08A34290(a0);
    goto L_08A28050;
L_08A28050:;
    v0 = D_08C2CEDC - (-12580);
    v1 = LD32(v0-12580);
    a1 = 0 + 0;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A2806C; }
    goto L_08A28064;
L_08A28064:;
    func_0888FCA8(a0, a1);
    goto L_08A2806C;
L_08A2806C:;
    v0 = 1;
    ST8(s0+6, v0);
    f0 = func_08A36BA0(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A28078;
L_08A28078:;
    a0 = 0x820c0000u;
    a0 = a0 | 0x81de;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28084;
L_08A28084:;
    goto L_08A28018;
L_08A2808C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28094;
L_08A28094:;
    goto L_08A28018;
}

/* 08A2809C */
rv_t func_08A2809C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A2809C:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    s2 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A28110; }
    goto L_08A280D0;
L_08A280D0:;
    a0 = D_08ADF488 - (-2936);
    a0 = a0 - 2936;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A280DC;
L_08A280DC:;
    a0 = 1;
    goto L_08A280E0;
L_08A280E0:;
    v0 = a0 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A28110:;
    a0 = D_08ADF0E0 - (-3872);
    a0 = a0 - 3872;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A2811C;
L_08A2811C:;
    s5 = v0 << 1;
    s0 = v0 + 0;
    s6 = D_08ADFC84 - (-892);
    v0 = s5 + v0;
    a0 = s6 - 892;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = s2 < v1;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A280E0; }
    goto L_08A28148;
L_08A28148:;
    v0 = D_08C2CEDC - (-12580);
    s4 = LD32(v0-12580);
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A28160;
L_08A28160:;
    v1 = v0 < 0x1u;
    s1 = v0 + 0;
    v0 = s4 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A280E0; }
    goto L_08A28178;
L_08A28178:;
    s7 = D_08B1BDFC - (-16900);
    v0 = LD32(s7-16900);
    cnd_ = v0 == s0;
    s3 = s0 < 0x8u;
    if (cnd_) { goto L_08A281BC; }
    goto L_08A28188;
L_08A28188:;
    cnd_ = s3 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A281B0; }
    goto L_08A28190;
L_08A28190:;
    v1 = D_08ADF4D8 - (-2856);
    v0 = s0 << 2;
    v1 = v1 - 2856;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A281ACu: goto L_08A281AC; case 0x08A28350u: goto L_08A28350; case 0x08A28358u: goto L_08A28358; case 0x08A28360u: goto L_08A28360; case 0x08A28368u: goto L_08A28368; case 0x08A28370u: goto L_08A28370; case 0x08A28378u: goto L_08A28378; case 0x08A28380u: goto L_08A28380; default: rs_break(0, 0x08a281a4); }
L_08A281AC:;
    a1 = LD32(s1+4);
    goto L_08A281B0;
L_08A281B0:;
    a0 = s4 + 0;
    func_0888FCA8(a0, a1);
    goto L_08A281B8;
L_08A281B8:;
    ST32(s7-16900, s0);
    goto L_08A281BC;
L_08A281BC:;
    cnd_ = s3 == 0;
    v0 = s0 < 0x5u;
    if (cnd_) { goto L_08A281F4; }
    goto L_08A281C4;
L_08A281C4:;
    v1 = D_08ADF4F8 - (-2824);
    v0 = s0 << 2;
    v1 = v1 - 2824;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A281E0u: goto L_08A281E0; case 0x08A28318u: goto L_08A28318; case 0x08A28320u: goto L_08A28320; case 0x08A28328u: goto L_08A28328; case 0x08A28330u: goto L_08A28330; case 0x08A28338u: goto L_08A28338; case 0x08A28340u: goto L_08A28340; case 0x08A28348u: goto L_08A28348; default: rs_break(0, 0x08a281d8); }
L_08A281E0:;
    v0 = LD32(s1+4);
    goto L_08A281E4;
L_08A281E4:;
    v0 = 0 < v0;
    v1 = D_08C2CEA8 - (-12632);
    ST8(v1-12632, v0);
    v0 = s0 < 0x5u;
    goto L_08A281F4;
L_08A281F4:;
    cnd_ = v0 == 0;
    v0 = s5 + s0;
    if (cnd_) { goto L_08A28234; }
    goto L_08A281FC;
L_08A281FC:;
    v1 = D_08ADF518 - (-2792);
    v0 = s0 << 2;
    v1 = v1 - 2792;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A28218u: goto L_08A28218; case 0x08A282D8u: goto L_08A282D8; case 0x08A282E8u: goto L_08A282E8; case 0x08A282F8u: goto L_08A282F8; case 0x08A28308u: goto L_08A28308; default: rs_break(0, 0x08a28210); }
L_08A28218:;
    v0 = D_08ADC5E8 - (-14872);
    v1 = s2 << 2;
    v0 = v0 - 14872;
    goto L_08A28224;
L_08A28224:;
    v1 = v1 + v0;
    s1 = LD32(v1);
    cnd_ = s1 != 0;
    v0 = s5 + s0;
    if (cnd_) { goto L_08A28278; }
    goto L_08A28234;
L_08A28234:;
    v1 = s6 - 892;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    a1 = 0xa40c0000u;
    cnd_ = v1 == 0;
    a1 = a1 | 0x5954;
    if (cnd_) { goto L_08A2825C; }
    goto L_08A28250;
L_08A28250:;
    v0 = s2 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    goto L_08A2825C;
L_08A2825C:;
    a0 = 0x330000u;
    a0 = a0 | 0x155f;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28268;
L_08A28268:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28270;
L_08A28270:;
    a0 = 1;
    goto L_08A280E0;
L_08A28278:;
    v0 = func_08A28C68();
    goto L_08A28280;
L_08A28280:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08A2828C;
L_08A2828C:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 0;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A282A4;
L_08A282A4:;
    a1 = 0xe8b10000u;
    a0 = LD32(sp);
    a1 = a1 | 0x62ce;
    a2 = (u32)-1;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A282B8;
L_08A282B8:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = s5 + s0; goto L_08A28234; }
    goto L_08A282C8;
L_08A282C8:;
    v0 = func_08834304(a0);
    goto L_08A282D0;
L_08A282D0:;
    goto L_08A28268;
L_08A282D8:;
    v0 = D_08ADC610 - (-14832);
    v1 = s2 << 2;
    v0 = v0 - 14832;
    goto L_08A28224;
L_08A282E8:;
    v0 = D_08ADC630 - (-14800);
    v1 = s2 << 2;
    v0 = v0 - 14800;
    goto L_08A28224;
L_08A282F8:;
    v0 = D_08ADC648 - (-14776);
    v1 = s2 << 2;
    v0 = v0 - 14776;
    goto L_08A28224;
L_08A28308:;
    v0 = D_08ADC668 - (-14744);
    v1 = s2 << 2;
    v0 = v0 - 14744;
    goto L_08A28224;
L_08A28318:;
    v0 = LD32(s1+8);
    goto L_08A281E4;
L_08A28320:;
    v0 = LD32(s1+12);
    goto L_08A281E4;
L_08A28328:;
    v0 = LD32(s1+16);
    goto L_08A281E4;
L_08A28330:;
    v0 = LD32(s1+20);
    goto L_08A281E4;
L_08A28338:;
    v0 = LD32(s1+24);
    goto L_08A281E4;
L_08A28340:;
    v0 = LD32(s1+28);
    goto L_08A281E4;
L_08A28348:;
    v0 = LD32(s1+32);
    goto L_08A281E4;
L_08A28350:;
    a1 = LD32(s1+8);
    goto L_08A281B0;
L_08A28358:;
    a1 = LD32(s1+12);
    goto L_08A281B0;
L_08A28360:;
    a1 = LD32(s1+16);
    goto L_08A281B0;
L_08A28368:;
    a1 = LD32(s1+20);
    goto L_08A281B0;
L_08A28370:;
    a1 = LD32(s1+24);
    goto L_08A281B0;
L_08A28378:;
    a1 = LD32(s1+28);
    goto L_08A281B0;
L_08A28380:;
    a1 = LD32(s1+32);
    goto L_08A281B0;
}

/* 08A28388 */
rv_t func_08A28388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A28388:;
    sp = sp - 112;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A283E0; }
    goto L_08A283B0;
L_08A283B0:;
    a0 = D_08ADF52C - (-2772);
    a0 = a0 - 2772;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A283BC;
L_08A283BC:;
    v0 = 1;
    goto L_08A283C0;
L_08A283C0:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_08A283E0:;
    a0 = D_08ADF0E0 - (-3872);
    a0 = a0 - 3872;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A283EC;
L_08A283EC:;
    s2 = v0 + 0;
    v0 = v0 << 1;
    v0 = v0 + s2;
    v1 = D_08ADFC84 - (-892);
    v0 = v0 << 2;
    v1 = v1 - 892;
    v0 = v0 + v1;
    a0 = LD32(v0+8);
    a0 = s0 < a0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A283C0; }
    goto L_08A28418;
L_08A28418:;
    v0 = s2 < 0x5u;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A28454; }
    goto L_08A28424;
L_08A28424:;
    v1 = D_08ADF57C - (-2692);
    v0 = s2 << 2;
    v1 = v1 - 2692;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A28440u: goto L_08A28440; case 0x08A28580u: goto L_08A28580; case 0x08A28590u: goto L_08A28590; case 0x08A285A0u: goto L_08A285A0; case 0x08A285B0u: goto L_08A285B0; default: rs_break(0, 0x08a28438); }
L_08A28440:;
    v0 = D_08ADC5E8 - (-14872);
    v1 = s0 << 2;
    v0 = v0 - 14872;
    goto L_08A2844C;
L_08A2844C:;
    v1 = v1 + v0;
    s1 = LD32(v1);
    goto L_08A28454;
L_08A28454:;
    ST32(sp, 0);
    s3 = 0 + 0;
    s0 = 0 + 0;
    ST32(sp+4, 0);
    s4 = 1;
    cnd_ = s1 != 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A284D4; }
    goto L_08A28470;
L_08A28470:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    v1 = s2 ^ 0x3;
    v0 = 0xc91b0000u;
    a0 = D_08ADF1F8 - (-3592);
    v1 = v1 < 0x1u;
    v0 = v0 | 0x7788;
    a0 = a0 - 3592;
    a1 = sp + 16;
    ST32(sp+16, v0);
    ST32(sp+20, s3);
    ST32(sp+24, s0);
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST8(sp+44, v1);
    ST8(sp+45, s4);
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+28, s4);
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A284CC;
L_08A284CC:;
    v0 = 1;
    goto L_08A283C0;
L_08A284D4:;
    v0 = func_08A28C68();
    goto L_08A284DC;
L_08A284DC:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08A284E8;
L_08A284E8:;
    a0 = 0xd0cd0000u;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    a2 = sp + 64;
    ST32(sp+64, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28500;
L_08A28500:;
    a1 = 0xe9770000u;
    a0 = LD32(sp+64);
    a1 = a1 | 0x2a8d;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28514;
L_08A28514:;
    a0 = LD32(sp+64);
    a1 = 0xdc090000u;
    a1 = a1 | 0xff0;
    a2 = 0 + 0;
    s3 = v0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2852C;
L_08A2852C:;
    a0 = LD32(sp+64);
    cnd_ = a0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A28470; }
    goto L_08A28538;
L_08A28538:;
    f12 = BITSF(LD32(sp));
    a1 = 0x99600000u;
    a1 = a1 | 0x2006;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28548;
L_08A28548:;
    f12 = BITSF(LD32(sp+4));
    a0 = LD32(sp+64);
    a1 = 0x99600000u;
    a1 = a1 | 0x2007;
    ST32(sp, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28560;
L_08A28560:;
    a1 = 0x99600000u;
    f12 = BITSF(LD32(sp+8));
    a0 = LD32(sp+64);
    a1 = a1 | 0x2008;
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28578;
L_08A28578:;
    ST32(sp+8, FBITS(f0));
    goto L_08A28470;
L_08A28580:;
    v0 = D_08ADC610 - (-14832);
    v1 = s0 << 2;
    v0 = v0 - 14832;
    goto L_08A2844C;
L_08A28590:;
    v0 = D_08ADC630 - (-14800);
    v1 = s0 << 2;
    v0 = v0 - 14800;
    goto L_08A2844C;
L_08A285A0:;
    v0 = D_08ADC648 - (-14776);
    v1 = s0 << 2;
    v0 = v0 - 14776;
    goto L_08A2844C;
L_08A285B0:;
    v0 = D_08ADC668 - (-14744);
    v1 = s0 << 2;
    v0 = v0 - 14744;
    goto L_08A2844C;
}

/* 08A285C0 */
rv_t func_08A285C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A285C0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    a0 = D_08ADF0E0 - (-3872);
    cnd_ = a1 == 0;
    a0 = a0 - 3872;
    if (cnd_) { goto L_08A28600; }
    goto L_08A285E0;
L_08A285E0:;
    a0 = D_08ADF590 - (-2672);
    a0 = a0 - 2672;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A285EC;
L_08A285EC:;
    v0 = 1;
    goto L_08A285F0;
L_08A285F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A28600:;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A28608;
L_08A28608:;
    v1 = v0 << 1;
    v1 = v1 + v0;
    a0 = D_08ADFC84 - (-892);
    a0 = a0 - 892;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a3 = LD32(v1+8);
    a0 = D_08C2CEAC - (-12628);
    a1 = v0 + 0;
    a3 = s0 < a3;
    a0 = a0 - 12628;
    a2 = s0 + 0;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A285F0; }
    goto L_08A28640;
L_08A28640:;
    v0 = func_08A34440(a0, a1, a2);
    goto L_08A28648;
L_08A28648:;
    a0 = D_08ADF22C - (-3540);
    a0 = a0 - 3540;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28658;
L_08A28658:;
    v0 = 1;
    goto L_08A285F0;
}

/* 08A28660 */
rv_t func_08A28660(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A28660:;
    sp = sp - 96;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A286B8; }
    goto L_08A28688;
L_08A28688:;
    a0 = D_08ADF5E0 - (-2592);
    a0 = a0 - 2592;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28694;
L_08A28694:;
    v0 = 1;
    goto L_08A28698;
L_08A28698:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08A286B8:;
    a0 = D_08ADF0E0 - (-3872);
    a0 = a0 - 3872;
    v0 = func_08899420(a0, t1, t2, t3);
    goto L_08A286C4;
L_08A286C4:;
    s2 = v0 << 1;
    s0 = v0 + 0;
    s3 = D_08ADFC84 - (-892);
    v0 = s2 + v0;
    v0 = v0 << 2;
    a0 = s3 - 892;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = s1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A28698; }
    goto L_08A286F0;
L_08A286F0:;
    cnd_ = s1 == 0;
    s4 = D_08B1C048 - (-16312);
    if (cnd_) { goto L_08A28794; }
    goto L_08A286F8;
L_08A286F8:;
    v0 = s2 + s0;
    goto L_08A286FC;
L_08A286FC:;
    v1 = s3 - 892;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    v1 = s1 << 5;
    cnd_ = a0 != 0;
    v0 = a0 + v1;
    if (cnd_) { goto L_08A28720; }
    goto L_08A28718;
L_08A28718:;
    v0 = D_08ADFC64 - (-924);
    v0 = v0 - 924;
    goto L_08A28720;
L_08A28720:;
    f7 = BITSF(LD32(v0+28));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    a2 = LD32(s4-16312);
    v1 = 0x5ac30000u;
    a0 = D_08ADF1F8 - (-3592);
    v1 = v1 | 0xa2c4;
    v0 = 1;
    a0 = a0 - 3592;
    a1 = sp + 16;
    ST32(sp+16, v1);
    ST8(sp+20, v0);
    ST32(sp+24, a2);
    ST32(sp+28, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    ST32(sp+44, FBITS(f4));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f7));
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2878C;
L_08A2878C:;
    v0 = 1;
    goto L_08A28698;
L_08A28794:;
    v0 = D_08B263B8 - (25528);
    a1 = LD32(v0+25528);
    a0 = D_08ADF204 - (-3580);
    a0 = a0 - 3580;
    a2 = sp + 0;
    ST8(sp, 0);
    v0 = func_0883A334(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A287B0;
L_08A287B0:;
    v1 = LD_U8(sp);
    cnd_ = v1 == 0;
    ST32(s4-16312, v0);
    if (cnd_) { goto L_08A286F8; }
    goto L_08A287BC;
L_08A287BC:;
    func_0883A610(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A287C4;
L_08A287C4:;
    v0 = s2 + s0;
    goto L_08A286FC;
}

/* 08A287CC */
void func_08A287CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A287CC:;
    a0 = D_08ADF634 - (-2508);
    a1 = ((u32)(uintptr_t)func_08A276F0) - (30448);
    sp = sp - 16;
    a0 = a0 - 2508;
    a1 = a1 + 30448;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A287FC;
L_08A287FC:;
    a0 = D_08ADF66C - (-2452);
    a1 = ((u32)(uintptr_t)func_08A27864) - (30820);
    a0 = a0 - 2452;
    a1 = a1 + 30820;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28818;
L_08A28818:;
    a0 = D_08ADF6A8 - (-2392);
    a1 = ((u32)(uintptr_t)func_08A27DE0) - (32224);
    a0 = a0 - 2392;
    a1 = a1 + 32224;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28834;
L_08A28834:;
    a0 = D_08ADF6D8 - (-2344);
    a1 = ((u32)(uintptr_t)func_08A27E74) - (32372);
    a0 = a0 - 2344;
    a1 = a1 + 32372;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28850;
L_08A28850:;
    a0 = D_08ADF718 - (-2280);
    a1 = ((u32)(uintptr_t)func_08A27C24) - (31780);
    a0 = a0 - 2280;
    a1 = a1 + 31780;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2886C;
L_08A2886C:;
    a0 = D_08ADF748 - (-2232);
    a1 = ((u32)(uintptr_t)func_08A27994) - (31124);
    a0 = a0 - 2232;
    a1 = a1 + 31124;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28888;
L_08A28888:;
    a0 = D_08ADF77C - (-2180);
    a1 = ((u32)(uintptr_t)func_08A27A0C) - (31244);
    a0 = a0 - 2180;
    a1 = a1 + 31244;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A288A4;
L_08A288A4:;
    a0 = D_08ADF7C4 - (-2108);
    a1 = ((u32)(uintptr_t)func_08A27A84) - (31364);
    a0 = a0 - 2108;
    a1 = a1 + 31364;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A288C0;
L_08A288C0:;
    a0 = D_08ADF80C - (-2036);
    a1 = ((u32)(uintptr_t)func_08A27BB0) - (31664);
    a0 = a0 - 2036;
    a1 = a1 + 31664;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A288DC;
L_08A288DC:;
    a0 = D_08ADF854 - (-1964);
    a1 = ((u32)(uintptr_t)func_08A27EC4) - (32452);
    a0 = a0 - 1964;
    a1 = a1 + 32452;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A288F8;
L_08A288F8:;
    a0 = D_08ADF89C - (-1892);
    a1 = ((u32)(uintptr_t)func_08A2809C) - (-32612);
    a0 = a0 - 1892;
    a1 = a1 - 32612;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28914;
L_08A28914:;
    a0 = D_08ADF8E4 - (-1820);
    a1 = ((u32)(uintptr_t)func_08A28388) - (-31864);
    a0 = a0 - 1820;
    a1 = a1 - 31864;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28930;
L_08A28930:;
    a0 = D_08ADF92C - (-1748);
    a1 = ((u32)(uintptr_t)func_08A285C0) - (-31296);
    a0 = a0 - 1748;
    a1 = a1 - 31296;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2894C;
L_08A2894C:;
    a0 = D_08ADF974 - (-1676);
    a1 = ((u32)(uintptr_t)func_08A28660) - (-31136);
    a0 = a0 - 1676;
    a1 = a1 - 31136;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28968;
L_08A28968:;
    a0 = D_08ADF9BC - (-1604);
    a1 = ((u32)(uintptr_t)func_08A27F28) - (32552);
    a0 = a0 - 1604;
    a1 = a1 + 32552;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A28984;
L_08A28984:;
    a0 = D_08ADFA04 - (-1532);
    a1 = ((u32)(uintptr_t)func_08A27FD8) - (32728);
    a0 = a0 - 1532;
    a1 = a1 + 32728;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A289A0;
L_08A289A0:;
    v1 = D_08C2933C - (-27844);
    s2 = v1 - 27844;
    a0 = s2 + 0;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A289B4;
L_08A289B4:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A28A64; }
    goto L_08A289BC;
L_08A289BC:;
    v0 = D_08ADFA48 - (-1464);
    s0 = v0 - 1464;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A289CC;
L_08A289CC:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A28B9C; }
    goto L_08A289D4;
L_08A289D4:;
    v0 = D_08ADFA80 - (-1408);
    goto L_08A289D8;
L_08A289D8:;
    s0 = v0 - 1408;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A289E4;
L_08A289E4:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A28B6C; }
    goto L_08A289EC;
L_08A289EC:;
    v0 = D_08ADFABC - (-1348);
    goto L_08A289F0;
L_08A289F0:;
    s0 = v0 - 1348;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A289FC;
L_08A289FC:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A28B3C; }
    goto L_08A28A04;
L_08A28A04:;
    v0 = D_08ADFAF4 - (-1292);
    goto L_08A28A08;
L_08A28A08:;
    s0 = v0 - 1292;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28A14;
L_08A28A14:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A28B0C; }
    goto L_08A28A1C;
L_08A28A1C:;
    v0 = D_08ADFB30 - (-1232);
    goto L_08A28A20;
L_08A28A20:;
    s0 = v0 - 1232;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28A2C;
L_08A28A2C:;
    cnd_ = v0 == 0;
    a3 = 0x7fff0000u;
    if (cnd_) { goto L_08A28ADC; }
    goto L_08A28A34;
L_08A28A34:;
    v0 = D_08ADFB6C - (-1172);
    goto L_08A28A38;
L_08A28A38:;
    s0 = v0 - 1172;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28A44;
L_08A28A44:;
    cnd_ = v0 == 0;
    a1 = D_08C2CEAC - (-12628);
    if (cnd_) { goto L_08A28AA4; }
    goto L_08A28A4C;
L_08A28A4C:;
    v0 = D_08ADFBA8 - (-1112);
    goto L_08A28A50;
L_08A28A50:;
    s0 = v0 - 1112;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28A5C;
L_08A28A5C:;
    cnd_ = v0 == 0;
    a1 = D_08C2CEA8 - (-12632);
    if (cnd_) { goto L_08A28A7C; }
    goto L_08A28A64;
L_08A28A64:;
    goto L_08A28A68;
L_08A28A68:;
    sp = sp + 16;
    return;
L_08A28A7C:;
    a1 = a1 - 12632;
    a0 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28A90;
L_08A28A90:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28A9C;
L_08A28A9C:;
    goto L_08A28A68;
L_08A28AA4:;
    a3 = 0x7fff0000u;
    a1 = a1 - 12628;
    a1 = a1 + 4;
    a0 = s0 + 0;
    a2 = 0x80000000u;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A28AC8;
L_08A28AC8:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28AD4;
L_08A28AD4:;
    v0 = D_08ADFBA8 - (-1112);
    goto L_08A28A50;
L_08A28ADC:;
    a1 = s2 + 1496;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A28AF8;
L_08A28AF8:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28B04;
L_08A28B04:;
    v0 = D_08ADFB6C - (-1172);
    goto L_08A28A38;
L_08A28B0C:;
    a1 = s1 + 20;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A28B28;
L_08A28B28:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28B34;
L_08A28B34:;
    v0 = D_08ADFB30 - (-1232);
    goto L_08A28A20;
L_08A28B3C:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A28B58;
L_08A28B58:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28B64;
L_08A28B64:;
    v0 = D_08ADFAF4 - (-1292);
    goto L_08A28A08;
L_08A28B6C:;
    a1 = s1 + 32;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A28B88;
L_08A28B88:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28B94;
L_08A28B94:;
    v0 = D_08ADFABC - (-1348);
    goto L_08A289F0;
L_08A28B9C:;
    a1 = s1 + 28;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A28BB8;
L_08A28BB8:;
    a1 = s2 + 6;
    a0 = s0 + 0;
    func_08897918(a0, a1, 0, 0, 0);
    goto L_08A28BC4;
L_08A28BC4:;
    v0 = D_08ADFA80 - (-1408);
    goto L_08A289D8;
}

/* 08A28BCC */
void func_08A28BCC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28BCC:;
    a0 = D_08C2933C - (-27844);
    sp = sp - 16;
    a0 = a0 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A28BE4;
L_08A28BE4:;
    a2 = v0 + 0;
    v0 = D_08C2CEB4 - (-12620);
    a3 = v0 - 12620;
    t0 = a2 + 32;
    goto L_08A28BF4;
L_08A28BF4:;
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
    if (cnd_) { goto L_08A28BF4; }
    goto L_08A28C20;
L_08A28C20:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    ST32(a3, v0);
    ST32(a3+4, v1);
    sp = sp + 16;
    return;
}

/* 08A28C3C */
u64 func_08A28C3C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28C3C:;
    a0 = D_08C2933C - (-27844);
    a2 = D_08C2CEB4 - (-12620);
    sp = sp - 16;
    a0 = a0 - 27844;
    a2 = a2 - 12620;
    a1 = 0 + 0;
    { u64 r_ = func_08977940(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28C5C;
L_08A28C5C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A28C68 */
u32 func_08A28C68(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08A28C68:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    a0 = D_08B1BE00 - (-16896);
    if (cnd_) { goto L_08A28C90; }
    goto L_08A28C78;
L_08A28C78:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A28C90; }
    goto L_08A28C88;
L_08A28C88:;
    v0 = LD32(v0+24);
    ST32(a0-16896, v0);
    goto L_08A28C90;
L_08A28C90:;
    v0 = LD32(a0-16896);
    return v0;
}

/* 08A28C98 */
u64 func_08A28C98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28C98:;
    v0 = a0 + 0;
    a1 = a1 ^ 0xffff;
    v0 = v0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    t0 = D_08C2CE78 - (-12680);
    t1 = D_08C2CE88 - (-12664);
    t2 = D_08C2CE98 - (-12648);
    a0 = D_08C2CEAC - (-12628);
    a1 = a1 & v0;
    v1 = t0 - 12680;
    a2 = t1 - 12664;
    a3 = t2 - 12648;
    a0 = a0 - 12628;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A28E38; }
    goto L_08A28CE4;
L_08A28CE4:;
    v0 = D_08AEFA2C - (-1492);
    f4 = BITSF(LD32(v0-1492));
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
    ST32(t0-12680, FBITS(f2));
    ST32(t1-12664, FBITS(f6));
    ST32(t2-12648, FBITS(f1));
    func_08A34280(a0);
    goto L_08A28D70;
L_08A28D70:;
    v1 = D_08ADFC64 - (-924);
    v0 = v1 - 924;
    a3 = LD32(v1-924);
    t4 = LD32(v0+28);
    t5 = LD32(v0+8);
    t6 = LD32(v0+12);
    t7 = LD32(v0+16);
    s0 = LD32(v0+20);
    s1 = LD32(v0+24);
    t2 = LD32(v0+4);
    t0 = D_08B1BE04 - (-16892);
    t1 = D_08B1BE84 - (-16764);
    t3 = D_08B1BF04 - (-16636);
    a2 = D_08B1BF84 - (-16508);
    v0 = t0 - 16892;
    v1 = t1 - 16764;
    a0 = t3 - 16636;
    a1 = a2 - 16508;
    ST32(a2-16508, a3);
    ST32(t0-16892, a3);
    ST32(v0+28, t4);
    ST32(t1-16764, a3);
    ST32(v1+28, t4);
    ST32(t3-16636, a3);
    ST32(a0+28, t4);
    ST32(v0+4, t2);
    ST32(v0+8, t5);
    ST32(v0+12, t6);
    ST32(v0+16, t7);
    ST32(v0+20, s0);
    ST32(v0+24, s1);
    ST32(v1+4, t2);
    ST32(v1+8, t5);
    ST32(v1+12, t6);
    ST32(v1+16, t7);
    ST32(v1+20, s0);
    ST32(v1+24, s1);
    ST32(a0+4, t2);
    ST32(a0+8, t5);
    ST32(a0+12, t6);
    ST32(a0+16, t7);
    ST32(a0+20, s0);
    ST32(a0+24, s1);
    ST32(a1+4, t2);
    ST32(a1+28, t4);
    ST32(a1+8, t5);
    ST32(a1+12, t6);
    ST32(a1+16, t7);
    ST32(a1+20, s0);
    ST32(a1+24, s1);
    goto L_08A28E38;
L_08A28E38:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A28E4C */
rv_t func_08A28E4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28E4C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08A28C98(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28E60;
L_08A28E60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A28E6C */
u64 func_08A28E6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A28E6C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v0 = D_08C2CEE4 - (-12572);
    v1 = D_08C2CEEC - (-12564);
    a1 = a1 & a0;
    a3 = v1 - 12564;
    cnd_ = a1 == 0;
    a2 = v0 - 12572;
    if (cnd_) { goto L_08A28EA8; }
    goto L_08A28E94;
L_08A28E94:;
    ST32(a2+4, 0);
    ST32(v0-12572, 0);
    ST32(v1-12564, 0);
    ST32(a3+8, 0);
    ST32(a3+4, 0);
    goto L_08A28EA8;
L_08A28EA8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A28EB0 */
rv_t func_08A28EB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28EB0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_08A28E6C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28EC4;
L_08A28EC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A28ED0 */
void func_08A28ED0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28ED0:;
    sp = sp - 16;
    s1 = D_08B1C134 - (-16076);
    v0 = D_08C2CF31 - (-12495);
    s0 = D_08C2CF30 - (-12496);
    v1 = D_08B1C138 - (-16072);
    a0 = LD_U8(s0-12496);
    a1 = LD32(s1-16076);
    ST8(v0-12495, a0);
    ST32(v1-16072, a1);
    func_088A27DC();
    goto L_08A28F04;
L_08A28F04:;
    v0 = LD_U8(s0-12496);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A28F54; }
    goto L_08A28F10;
L_08A28F10:;
    v0 = LD32(s1-16076);
    goto L_08A28F14;
L_08A28F14:;
    a0 = 7;
    a1 = 4;
    cnd_ = v0 != 0;
    a2 = 8;
    if (cnd_) { goto L_08A28F30; }
    goto L_08A28F24;
L_08A28F24:;
    a0 = 7;
    a1 = 3;
    a2 = 8;
    goto L_08A28F30;
L_08A28F30:;
    func_088A28B0(a0, a1, a2);
    goto L_08A28F38;
L_08A28F38:;
    { rv_t r_ = func_088A1F70(0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A28F40;
L_08A28F40:;
    sp = sp + 16;
    return;
L_08A28F54:;
    func_088A29F8();
    goto L_08A28F5C;
L_08A28F5C:;
    v0 = LD32(s1-16076);
    goto L_08A28F14;
}

/* 08A28F64 */
void func_08A28F64(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A28F64:;
    sp = sp - 16;
    func_08A271F0();
    goto L_08A28F74;
L_08A28F74:;
    a0 = 999;
    v0 = D_08B1C150 - (-16048);
    ST32(v0-16048, a0);
    v1 = D_08C2D190 - (-11888);
    v0 = D_08C2D188 - (-11896);
    a1 = v1 - 11888;
    ST8(v0-11896, 0);
    v1 = D_08C2D0A6 - (-12122);
    v0 = D_08C2D0A5 - (-12123);
    ST8(v0-12123, 0);
    v0 = D_08C2D0A7 - (-12121);
    a0 = 0 + 0;
    ST8(v1-12122, 0);
    v1 = D_08C2D0AC - (-12116);
    ST8(v0-12121, 0);
    v0 = D_08C2D0B8 - (-12104);
    ST32(v1-12116, 0);
    v1 = D_08C2D0BC - (-12100);
    ST32(v0-12104, 0);
    ST32(v1-12100, 0);
    goto L_08A28FC4;
L_08A28FC4:;
    v1 = a0 + a1;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    cnd_ = v0 != 0;
    ST8(v1, 0);
    if (cnd_) { goto L_08A28FC4; }
    goto L_08A28FD8;
L_08A28FD8:;
    func_08A32FAC();
    goto L_08A28FE0;
L_08A28FE0:;
    a0 = D_08C2CF34 - (-12492);
    a0 = a0 - 12492;
    a1 = 0 + 0;
    a2 = 360;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A28FF4;
L_08A28FF4:;
    sp = sp + 16;
    return;
}

/* 08A29000 */
void func_08A29000(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A29000:;
    sp = sp - 16;
    func_08A27240();
    goto L_08A29018;
L_08A29018:;
    func_08A274F0();
    goto L_08A29020;
L_08A29020:;
    a0 = 4;
    v0 = D_08B1C148 - (-16056);
    a1 = (u32)-1;
    ST32(v0-16056, a0);
    v0 = D_08B1C14C - (-16052);
    v1 = D_08C2D0EC - (-12052);
    ST32(v0-16052, a1);
    v0 = D_08AEFA30 - (-1488);
    t1 = v1 - 12052;
    f0 = BITSF(LD32(v0-1488));
    v1 = D_08B1C154 - (-16044);
    a2 = 999;
    ST32(v1-16044, FBITS(f0));
    v0 = D_08B1C158 - (-16040);
    v1 = D_08C2D0A5 - (-12123);
    ST32(v0-16040, a2);
    v0 = D_08C2D0A4 - (-12124);
    t0 = D_08C2D0D0 - (-12080);
    ST8(v1-12123, 0);
    v1 = D_08B1C13C - (-16068);
    a3 = t0 - 12080;
    ST8(v0-12124, 0);
    v0 = D_08C2D0A8 - (-12120);
    a0 = 0 + 0;
    ST8(v1-16068, 0);
    v1 = D_08B1C140 - (-16064);
    ST8(v0-12120, 0);
    v0 = D_08C2D0AC - (-12116);
    ST32(v1-16064, a1);
    v1 = D_08C2D0B0 - (-12112);
    ST32(v0-12116, 0);
    v0 = D_08C2D0B4 - (-12108);
    ST32(v1-12112, 0);
    v1 = D_08B1C150 - (-16048);
    ST32(v0-12108, 0);
    v0 = D_08C2D0C0 - (-12096);
    ST32(v1-16048, a2);
    v1 = D_08C2D0C4 - (-12092);
    ST32(v0-12096, 0);
    v0 = D_08C2D0C8 - (-12088);
    ST32(v1-12092, 0);
    v1 = D_08C2D0CC - (-12084);
    ST32(v0-12088, 0);
    ST32(v1-12084, 0);
    ST32(t0-12080, 0);
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    goto L_08A290DC;
L_08A290DC:;
    a0 = a0 + 1;
    v0 = a0 < 0x8u;
    ST32(t1, 0);
    cnd_ = v0 != 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A290DC; }
    goto L_08A290F0;
L_08A290F0:;
    s2 = D_08C2D10C - (-12020);
    s0 = LD32(s2-12020);
    cnd_ = s0 == 0;
    s1 = s2 - 12020;
    if (cnd_) { goto L_08A29124; }
    goto L_08A29100;
L_08A29100:;
    v1 = LD32(s1+12);
    goto L_08A29104;
L_08A29104:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08A2921C; }
    goto L_08A29114;
L_08A29114:;
    { u64 r_ = func_08A94748(a0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2911C;
L_08A2911C:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08A29104; }
    goto L_08A29124;
L_08A29124:;
    v0 = s2 - 12020;
    ST32(v0+4, 0);
    s0 = D_08C2D134 - (-11980);
    a0 = v0 + 20;
    ST32(v0+16, 0);
    s0 = s0 - 11980;
    ST32(s2-12020, 0);
    { rv_t r_ = func_08AD12DC(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29144;
L_08A29144:;
    a0 = s0 + 0;
    s0 = s0 + 20;
    { rv_t r_ = func_08AD12DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29150;
L_08A29150:;
    s2 = D_08C2D15C - (-11940);
    a0 = s0 + 0;
    { rv_t r_ = func_08AD12DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2915C;
L_08A2915C:;
    s0 = LD32(s2-11940);
    cnd_ = s0 == 0;
    s1 = s2 - 11940;
    if (cnd_) { goto L_08A2918C; }
    goto L_08A29168;
L_08A29168:;
    v1 = LD32(s1+12);
    goto L_08A2916C;
L_08A2916C:;
    v0 = s0 + 0;
    a0 = s0 + 0;
    cnd_ = v1 != 0;
    s0 = LD32(s0+8);
    if (cnd_) { goto L_08A2920C; }
    goto L_08A2917C;
L_08A2917C:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A29184;
L_08A29184:;
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08A2916C; }
    goto L_08A2918C;
L_08A2918C:;
    v0 = s2 - 11940;
    ST32(v0+16, 0);
    a0 = D_08C2D170 - (-11920);
    a0 = a0 - 11920;
    ST32(v0+4, 0);
    ST32(s2-11940, 0);
    { rv_t r_ = func_08AD134C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A291A8;
L_08A291A8:;
    a1 = 1;
    v0 = D_08B1C15D - (-16035);
    ST8(v0-16035, a1);
    a0 = (u32)-1;
    v0 = D_08B1C168 - (-16024);
    ST32(v0-16024, a0);
    v1 = D_08B1C15C - (-16036);
    v0 = D_08C2D18A - (-11894);
    ST8(v1-16036, a1);
    v1 = D_08C2D18B - (-11893);
    ST8(v0-11894, 0);
    v0 = D_08C2D18C - (-11892);
    ST8(v1-11893, 0);
    v1 = D_08C2D198 - (-11880);
    ST8(v0-11892, 0);
    v0 = D_08C2D19C - (-11876);
    ST32(v1-11880, 0);
    ST32(v0-11876, 0);
    func_08A32C1C(0, 0, 0, 0);
    goto L_08A291F4;
L_08A291F4:;
    sp = sp + 16;
    return;
L_08A2920C:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29214;
L_08A29214:;
    goto L_08A29184;
L_08A2921C:;
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29224;
L_08A29224:;
    goto L_08A2911C;
}

/* 08A2922C */
void func_08A2922C(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2922C:;
    sp = sp - 16;
    func_08A33234();
    goto L_08A2923C;
L_08A2923C:;
    func_08A27288();
    goto L_08A29244;
L_08A29244:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A29260; }
    goto L_08A29254;
L_08A29254:;
    goto L_08A29258;
L_08A29258:;
    sp = sp + 16;
    return;
L_08A29260:;
    { u64 r_ = func_088A1EC0(0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A29268;
L_08A29268:;
    goto L_08A29258;
}

/* 08A29270 */
void func_08A29270(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A29270:;
    sp = sp - 16;
    s1 = D_08C2D09C - (-12132);
    v0 = LD_U8(s1-12132);
    s0 = D_08C2D0A0 - (-12128);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A292A4; }
    goto L_08A29290;
L_08A29290:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(s0-12128));
    f1 = BITSF(LD32(v0-31328));
    f0 = f0 + f1;
    ST32(s0-12128, FBITS(f0));
    goto L_08A292A4;
L_08A292A4:;
    v0 = D_08AEFA34 - (-1484);
    f0 = BITSF(LD32(s0-12128));
    f1 = BITSF(LD32(v0-1484));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = D_08C2CF34 - (-12492);
    if (cnd_) { goto L_08A293CC; }
    goto L_08A292C0;
L_08A292C0:;
    func_08A272B0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A292C8;
L_08A292C8:;
    func_08A33270();
    goto L_08A292D0;
L_08A292D0:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = D_08B2BBF4 - (-17420);
    if (cnd_) { goto L_08A2930C; }
    goto L_08A292E0;
L_08A292E0:;
    v0 = D_08C2CF30 - (-12496);
    v1 = D_08C2CF31 - (-12495);
    a0 = LD_U8(v0-12496);
    v0 = LD_U8(v1-12495);
    cnd_ = a0 == v0;
    v0 = D_08B1C134 - (-16076);
    if (cnd_) { goto L_08A293B0; }
    goto L_08A292F8;
L_08A292F8:;
    func_08A28ED0();
    goto L_08A29300;
L_08A29300:;
    func_088A1F20(0, 0, 0, 0, 0);
    goto L_08A29308;
L_08A29308:;
    v0 = D_08B2BBF4 - (-17420);
    goto L_08A2930C;
L_08A2930C:;
    v1 = LD32(v0-17420);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A293A0; }
    goto L_08A29318;
L_08A29318:;
    { u64 r_ = func_08897BBC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A29320;
L_08A29320:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2937C; }
    goto L_08A29328;
L_08A29328:;
    func_08A27340();
    goto L_08A29330;
L_08A29330:;
    v0 = D_08B29974 - (-26252);
    a0 = LD32(v0-26252);
    v1 = D_08C28D80 - (-29312);
    a1 = LD32(v1-29312);
    a0 = 0 < a0;
    v0 = D_08C2D18D - (-11891);
    v1 = 4;
    cnd_ = a1 == v1;
    ST8(v0-11891, a0);
    if (cnd_) { goto L_08A2935C; }
    goto L_08A29354;
L_08A29354:;
    func_088D9E78();
    goto L_08A2935C;
L_08A2935C:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A29364;
L_08A29364:;
    v0 = v0 & 0xff;
    sp = sp + 16;
    return;
L_08A2937C:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A29384;
L_08A29384:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A29328; }
    goto L_08A29390;
L_08A29390:;
    func_08A2B0B4();
    goto L_08A29398;
L_08A29398:;
    goto L_08A29328;
L_08A293A0:;
    { rv_t r_ = func_088AE030(0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A293A8;
L_08A293A8:;
    goto L_08A29318;
L_08A293B0:;
    v1 = D_08B1C138 - (-16072);
    a0 = LD32(v0-16076);
    v0 = LD32(v1-16072);
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A292F8; }
    goto L_08A293C4;
L_08A293C4:;
    goto L_08A29300;
L_08A293CC:;
    a0 = a0 - 12492;
    a1 = 0 + 0;
    a2 = 360;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A293DC;
L_08A293DC:;
    v1 = D_08C2CF32 - (-12494);
    ST8(v1-12494, 0);
    ST8(s1-12132, 0);
    ST32(s0-12128, 0);
    goto L_08A292C0;
}

/* 08A293F0 */
void func_08A293F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A293F0:;
    sp = sp - 16;
    v1 = 1;
    v0 = D_08C2CE65 - (-12699);
    ST8(v0-12699, v1);
    s0 = a0 + 0;
    func_08A27448(a0);
    goto L_08A29410;
L_08A29410:;
    func_08A29600();
    goto L_08A29418;
L_08A29418:;
    v0 = D_08C2D198 - (-11880);
    ST32(v0-11880, s0);
    sp = sp + 16;
    return;
}

/* 08A29430 */
void func_08A29430(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A29430:;
    sp = sp - 16;
    v1 = 999;
    v0 = D_08B1C150 - (-16048);
    a1 = 4;
    s0 = D_08C2D10C - (-12020);
    ST32(v0-16048, v1);
    v1 = D_08AEFA38 - (-1480);
    v0 = D_08B1C148 - (-16056);
    f0 = BITSF(LD32(v1-1480));
    ST32(v0-16056, a1);
    v0 = D_08B1C154 - (-16044);
    s0 = s0 - 12020;
    ST32(v0-16044, FBITS(f0));
    v1 = D_08C2D0A5 - (-12123);
    v0 = D_08C2D0AC - (-12116);
    a0 = s0 + 0;
    ST8(v1-12123, 0);
    s0 = s0 + 20;
    v1 = D_08C2D0B8 - (-12104);
    ST32(v0-12116, 0);
    v0 = D_08B1C13C - (-16068);
    ST32(v1-12104, 0);
    ST8(v0-16068, 0);
    { rv_t r_ = func_08AD12DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29498;
L_08A29498:;
    a0 = s0 + 0;
    s0 = D_08C2D134 - (-11980);
    s0 = s0 - 11980;
    { rv_t r_ = func_08AD12DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A294A8;
L_08A294A8:;
    a0 = s0 + 0;
    s0 = s0 + 20;
    { rv_t r_ = func_08AD12DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A294B4;
L_08A294B4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08AD12DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A294BC;
L_08A294BC:;
    func_08A27490();
    goto L_08A294C4;
L_08A294C4:;
    sp = sp + 16;
    return;
}

/* 08A294D4 */
rv_t func_08A294D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A294D4:;
    sp = sp - 16;
    a0 = D_08ADFF30 - (-208);
    a1 = a1 & 0xff;
    a0 = a0 - 208;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A29500; }
    goto L_08A294F4;
L_08A294F4:;
    a1 = 0xea160000u;
    cnd_ = a2 == 0;
    a1 = a1 | 0x2f3;
    if (cnd_) { goto L_08A2951C; }
    goto L_08A29500;
L_08A29500:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29508;
L_08A29508:;
    goto L_08A2950C;
L_08A2950C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2951C:;
    v0 = D_08AEFA3C - (-1476);
    v1 = D_08B1C154 - (-16044);
    f2 = BITSF(LD32(v0-1476));
    f0 = BITSF(LD32(v1-16044));
    f1 = BITSF(0);
    a0 = 0x330000u;
    f0 = f0 + f2;
    a0 = a0 | 0x155f;
    f3 = f0 - f2;
    fcc = FCMP(f1, f0, 12);
    f0 = f0 + f2;
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A29554; }
    goto L_08A29550;
L_08A29550:;
    f0 = BITSF(F2I(f3, 1));
    goto L_08A29554;
L_08A29554:;
    v0 = FBITS(f0);
    s0 = 0 + 0;
    s0 = (s32)v0 > (s32)s0 ? v0 : s0;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29564;
L_08A29564:;
    a0 = D_08ADFFC8 - (-56);
    a0 = a0 - 56;
    a1 = v0 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A29578;
L_08A29578:;
    goto L_08A2950C;
}

/* 08A29580 */
rv_t func_08A29580(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08A29580:;
    sp = sp - 272;
    a0 = D_08ADFFD4 - (-44);
    a1 = a1 & 0xff;
    a0 = a0 - 44;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A295A4; }
    goto L_08A2959C;
L_08A2959C:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A295BC; }
    goto L_08A295A4;
L_08A295A4:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A295AC;
L_08A295AC:;
    goto L_08A295B0;
L_08A295B0:;
    v0 = 1;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_08A295BC:;
    v0 = func_08A62930();
    goto L_08A295C4;
L_08A295C4:;
    v1 = D_08B1C04C - (-16308);
    a1 = LD32(v1-16308);
    a0 = sp + 0;
    a2 = 256;
    t0 = v0 + 0;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A295E0;
L_08A295E0:;
    v1 = D_08B15AF4 - (23284);
    a2 = LD32(v1+23284);
    a0 = D_08AE0040 - (64);
    a0 = a0 + 64;
    a1 = sp + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A295F8;
L_08A295F8:;
    goto L_08A295B0;
}

/* 08A29600 */
void func_08A29600(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A29600:;
    sp = sp - 16;
    v0 = D_08C2CE70 - (-12688);
    a0 = ((u32)(uintptr_t)func_08A2A834) - (-22476);
    v1 = LD32(v0-12688);
    v0 = 2;
    cnd_ = v1 == v0;
    a0 = a0 - 22476;
    if (cnd_) { goto L_08A2963C; }
    goto L_08A29620;
L_08A29620:;
    a0 = ((u32)(uintptr_t)func_08A2A83C) - (-22468);
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = a0 - 22468;
    if (cnd_) { goto L_08A2963C; }
    goto L_08A29630;
L_08A29630:;
    goto L_08A29634;
L_08A29634:;
    sp = sp + 16;
    return;
L_08A2963C:;
    func_0888A6F8(a0);
    goto L_08A29644;
L_08A29644:;
    goto L_08A29634;
}

/* 08A2964C */
u32 func_08A2964C(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2964C:;
    sp = sp - 16;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A29674; }
    goto L_08A29664;
L_08A29664:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A29674:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2967C;
L_08A2967C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A29664; }
    goto L_08A29688;
L_08A29688:;
    v1 = 0 + 0;
    goto L_08A29664;
}

/* 08A29690 */
void func_08A29690(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A29690:;
    a0 = D_08AE0064 - (100);
    a1 = ((u32)(uintptr_t)func_08A2E864) - (-6044);
    sp = sp - 32;
    a0 = a0 + 100;
    a1 = a1 - 6044;
    a2 = 1;
    a3 = 0 + 0;
    s5 = D_08AE008C - (140);
    s5 = s5 + 140;
    s4 = D_08AE00C8 - (200);
    s4 = s4 + 200;
    s3 = D_08AE0104 - (260);
    s3 = s3 + 260;
    s2 = D_08AE0144 - (324);
    s2 = s2 + 324;
    s1 = D_08AE0180 - (384);
    s1 = s1 + 384;
    func_088976C4(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A296F4;
L_08A296F4:;
    a0 = D_08AE01C0 - (448);
    a1 = ((u32)(uintptr_t)func_08A2E8B4) - (-5964);
    a0 = a0 + 448;
    a1 = a1 - 5964;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29710;
L_08A29710:;
    a0 = D_08AE01E8 - (488);
    a1 = ((u32)(uintptr_t)func_08A2E924) - (-5852);
    a0 = a0 + 488;
    a1 = a1 - 5852;
    a2 = 1;
    a3 = 0 + 0;
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2972C;
L_08A2972C:;
    a0 = D_08AE0218 - (536);
    a1 = ((u32)(uintptr_t)func_08A2E9A0) - (-5728);
    a0 = a0 + 536;
    a1 = a1 - 5728;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29748;
L_08A29748:;
    a0 = D_08AE0244 - (580);
    a1 = ((u32)(uintptr_t)func_08A2EA04) - (-5628);
    a0 = a0 + 580;
    a1 = a1 - 5628;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29764;
L_08A29764:;
    a0 = D_08AE0268 - (616);
    a1 = ((u32)(uintptr_t)func_08A2EA54) - (-5548);
    a0 = a0 + 616;
    a1 = a1 - 5548;
    a2 = 1;
    a3 = 0 + 0;
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29780;
L_08A29780:;
    a0 = D_08AE0294 - (660);
    a1 = ((u32)(uintptr_t)func_08A2EAC8) - (-5432);
    a0 = a0 + 660;
    a1 = a1 - 5432;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2979C;
L_08A2979C:;
    a0 = D_08AE02C0 - (704);
    a1 = ((u32)(uintptr_t)func_08A2EB0C) - (-5364);
    a0 = a0 + 704;
    a1 = a1 - 5364;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A297B8;
L_08A297B8:;
    a0 = D_08AE02F0 - (752);
    a1 = ((u32)(uintptr_t)func_08A2EB50) - (-5296);
    a0 = a0 + 752;
    a1 = a1 - 5296;
    a2 = 1;
    a3 = 0 + 0;
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A297D4;
L_08A297D4:;
    a0 = D_08AE0328 - (808);
    a1 = ((u32)(uintptr_t)func_08A2EC10) - (-5104);
    a0 = a0 + 808;
    a1 = a1 - 5104;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A297F0;
L_08A297F0:;
    a0 = D_08AE0354 - (852);
    a1 = ((u32)(uintptr_t)func_08A2EC80) - (-4992);
    a0 = a0 + 852;
    a1 = a1 - 4992;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2980C;
L_08A2980C:;
    a0 = D_08AE0380 - (896);
    a1 = ((u32)(uintptr_t)func_08A2ECB8) - (-4936);
    a0 = a0 + 896;
    a1 = a1 - 4936;
    a2 = 1;
    a3 = 0 + 0;
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29828;
L_08A29828:;
    a0 = D_08AE03A4 - (932);
    a1 = ((u32)(uintptr_t)func_08A2EE38) - (-4552);
    a0 = a0 + 932;
    a1 = a1 - 4552;
    a2 = 1;
    a3 = 0 + 0;
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29844;
L_08A29844:;
    a0 = D_08AE03D8 - (984);
    a1 = ((u32)(uintptr_t)func_08A2EED0) - (-4400);
    a0 = a0 + 984;
    a1 = a1 - 4400;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29860;
L_08A29860:;
    a0 = D_08AE03F4 - (1012);
    a1 = ((u32)(uintptr_t)func_08A2EF58) - (-4264);
    a0 = a0 + 1012;
    a1 = a1 - 4264;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2987C;
L_08A2987C:;
    a0 = D_08AE0428 - (1064);
    a1 = ((u32)(uintptr_t)func_08A2EFF0) - (-4112);
    a0 = a0 + 1064;
    a1 = a1 - 4112;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29898;
L_08A29898:;
    a0 = D_08AE0458 - (1112);
    a1 = ((u32)(uintptr_t)func_08A2F098) - (-3944);
    a0 = a0 + 1112;
    a1 = a1 - 3944;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A298B4;
L_08A298B4:;
    a0 = D_08AE048C - (1164);
    a1 = ((u32)(uintptr_t)func_08A2F174) - (-3724);
    a0 = a0 + 1164;
    a1 = a1 - 3724;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A298D0;
L_08A298D0:;
    a0 = D_08AE04B4 - (1204);
    a1 = ((u32)(uintptr_t)func_08A2F540) - (-2752);
    a0 = a0 + 1204;
    a1 = a1 - 2752;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A298EC;
L_08A298EC:;
    a0 = D_08AE04E8 - (1256);
    a1 = ((u32)(uintptr_t)func_08A2F5A4) - (-2652);
    a0 = a0 + 1256;
    a1 = a1 - 2652;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29908;
L_08A29908:;
    a0 = D_08AE0520 - (1312);
    a1 = ((u32)(uintptr_t)func_08A2F728) - (-2264);
    a0 = a0 + 1312;
    a1 = a1 - 2264;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29924;
L_08A29924:;
    a0 = D_08AE053C - (1340);
    a1 = ((u32)(uintptr_t)func_08A2F794) - (-2156);
    a0 = a0 + 1340;
    a1 = a1 - 2156;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29940;
L_08A29940:;
    a0 = D_08AE0558 - (1368);
    a1 = ((u32)(uintptr_t)func_08A2F7F4) - (-2060);
    a0 = a0 + 1368;
    a1 = a1 - 2060;
    a2 = 1;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2995C;
L_08A2995C:;
    a0 = D_08AE057C - (1404);
    a1 = ((u32)(uintptr_t)func_08A2FB5C) - (-1188);
    a0 = a0 + 1404;
    a1 = a1 - 1188;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29978;
L_08A29978:;
    a0 = D_08AE059C - (1436);
    a1 = ((u32)(uintptr_t)func_08A2FC18) - (-1000);
    a0 = a0 + 1436;
    a1 = a1 - 1000;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29994;
L_08A29994:;
    a0 = D_08AE05CC - (1484);
    a1 = ((u32)(uintptr_t)func_08A2FCE0) - (-800);
    a0 = a0 + 1484;
    a1 = a1 - 800;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A299B0;
L_08A299B0:;
    a0 = D_08AE05F0 - (1520);
    a1 = ((u32)(uintptr_t)func_08A2FDB8) - (-584);
    a0 = a0 + 1520;
    a1 = a1 - 584;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A299CC;
L_08A299CC:;
    a0 = D_08AE061C - (1564);
    a1 = ((u32)(uintptr_t)func_08A2FE48) - (-440);
    a0 = a0 + 1564;
    a1 = a1 - 440;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A299E8;
L_08A299E8:;
    a0 = D_08AE0640 - (1600);
    a1 = ((u32)(uintptr_t)func_08A2FED0) - (-304);
    a0 = a0 + 1600;
    a1 = a1 - 304;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29A04;
L_08A29A04:;
    a0 = D_08AE0668 - (1640);
    a1 = ((u32)(uintptr_t)func_08A2FF48) - (-184);
    a0 = a0 + 1640;
    a1 = a1 - 184;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29A20;
L_08A29A20:;
    a0 = D_08AE0680 - (1664);
    a1 = ((u32)(uintptr_t)func_08A2FF94) - (-108);
    a0 = a0 + 1664;
    a1 = a1 - 108;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29A3C;
L_08A29A3C:;
    a0 = D_08AE06A4 - (1700);
    a1 = ((u32)(uintptr_t)func_08A2FFEC) - (-20);
    a0 = a0 + 1700;
    a1 = a1 - 20;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29A58;
L_08A29A58:;
    a0 = D_08AE06D4 - (1748);
    a1 = ((u32)(uintptr_t)func_08A3007C) - (124);
    a0 = a0 + 1748;
    a1 = a1 + 124;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29A74;
L_08A29A74:;
    a0 = D_08AE0700 - (1792);
    a1 = ((u32)(uintptr_t)func_08A3010C) - (268);
    a0 = a0 + 1792;
    a1 = a1 + 268;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29A90;
L_08A29A90:;
    a0 = D_08AE072C - (1836);
    a1 = ((u32)(uintptr_t)func_08A301A4) - (420);
    a0 = a0 + 1836;
    a1 = a1 + 420;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29AAC;
L_08A29AAC:;
    a0 = D_08AE075C - (1884);
    a1 = ((u32)(uintptr_t)func_08A3023C) - (572);
    a0 = a0 + 1884;
    a1 = a1 + 572;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29AC8;
L_08A29AC8:;
    a0 = D_08AE0788 - (1928);
    a1 = ((u32)(uintptr_t)func_08A30034) - (52);
    a0 = a0 + 1928;
    a1 = a1 + 52;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29AE4;
L_08A29AE4:;
    a0 = D_08AE07B4 - (1972);
    a1 = ((u32)(uintptr_t)func_08A300C4) - (196);
    a0 = a0 + 1972;
    a1 = a1 + 196;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29B00;
L_08A29B00:;
    a0 = D_08AE07DC - (2012);
    a1 = ((u32)(uintptr_t)func_08A30158) - (344);
    a0 = a0 + 2012;
    a1 = a1 + 344;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29B1C;
L_08A29B1C:;
    a0 = D_08AE0800 - (2048);
    a1 = ((u32)(uintptr_t)func_08A301F0) - (496);
    a0 = a0 + 2048;
    a1 = a1 + 496;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29B38;
L_08A29B38:;
    a0 = D_08AE082C - (2092);
    a1 = ((u32)(uintptr_t)func_08A30288) - (648);
    a0 = a0 + 2092;
    a1 = a1 + 648;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29B54;
L_08A29B54:;
    a0 = D_08AE0854 - (2132);
    a1 = ((u32)(uintptr_t)func_08A294D4) - (-27436);
    a0 = a0 + 2132;
    a1 = a1 - 27436;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29B70;
L_08A29B70:;
    a0 = D_08AE087C - (2172);
    a1 = ((u32)(uintptr_t)func_08A302D4) - (724);
    a0 = a0 + 2172;
    a1 = a1 + 724;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29B8C;
L_08A29B8C:;
    a0 = D_08AE08A4 - (2212);
    a1 = ((u32)(uintptr_t)func_08A303B4) - (948);
    a0 = a0 + 2212;
    a1 = a1 + 948;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29BA8;
L_08A29BA8:;
    a0 = D_08AE08CC - (2252);
    a1 = ((u32)(uintptr_t)func_08A30458) - (1112);
    a0 = a0 + 2252;
    a1 = a1 + 1112;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29BC4;
L_08A29BC4:;
    a0 = D_08AE08F4 - (2292);
    a1 = ((u32)(uintptr_t)func_08A304E8) - (1256);
    a0 = a0 + 2292;
    a1 = a1 + 1256;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29BE0;
L_08A29BE0:;
    a0 = D_08AE0918 - (2328);
    a1 = ((u32)(uintptr_t)func_08A30658) - (1624);
    a0 = a0 + 2328;
    a1 = a1 + 1624;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29BFC;
L_08A29BFC:;
    a0 = D_08AE0940 - (2368);
    a1 = ((u32)(uintptr_t)func_08A2F624) - (-2524);
    a0 = a0 + 2368;
    a1 = a1 - 2524;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29C18;
L_08A29C18:;
    a0 = D_08AE0968 - (2408);
    a1 = ((u32)(uintptr_t)func_08A29580) - (-27264);
    a0 = a0 + 2408;
    a1 = a1 - 27264;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29C34;
L_08A29C34:;
    a0 = D_08AE0990 - (2448);
    a1 = ((u32)(uintptr_t)func_08A31F10) - (7952);
    a0 = a0 + 2448;
    a1 = a1 + 7952;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29C50;
L_08A29C50:;
    a0 = D_08AE09C0 - (2496);
    a1 = ((u32)(uintptr_t)func_08A2EB9C) - (-5220);
    a0 = a0 + 2496;
    a1 = a1 - 5220;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29C6C;
L_08A29C6C:;
    a0 = D_08AE09EC - (2540);
    a1 = ((u32)(uintptr_t)func_08A307D0) - (2000);
    a0 = a0 + 2540;
    a1 = a1 + 2000;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29C88;
L_08A29C88:;
    a0 = D_08AE0A18 - (2584);
    a1 = ((u32)(uintptr_t)func_08A30870) - (2160);
    a0 = a0 + 2584;
    a1 = a1 + 2160;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29CA4;
L_08A29CA4:;
    a0 = D_08AE0A44 - (2628);
    a1 = ((u32)(uintptr_t)func_08A30974) - (2420);
    a0 = a0 + 2628;
    a1 = a1 + 2420;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29CC0;
L_08A29CC0:;
    a0 = D_08AE0A78 - (2680);
    a1 = ((u32)(uintptr_t)func_08A30AAC) - (2732);
    a0 = a0 + 2680;
    a1 = a1 + 2732;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29CDC;
L_08A29CDC:;
    a0 = D_08AE0AB0 - (2736);
    a1 = ((u32)(uintptr_t)func_08A30B44) - (2884);
    a0 = a0 + 2736;
    a1 = a1 + 2884;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29CF8;
L_08A29CF8:;
    a0 = D_08AE0AE8 - (2792);
    a1 = ((u32)(uintptr_t)func_08A30BDC) - (3036);
    a0 = a0 + 2792;
    a1 = a1 + 3036;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29D14;
L_08A29D14:;
    a0 = D_08AE0B14 - (2836);
    a1 = ((u32)(uintptr_t)func_08A30D18) - (3352);
    a0 = a0 + 2836;
    a1 = a1 + 3352;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29D30;
L_08A29D30:;
    a0 = D_08AE0B38 - (2872);
    a1 = ((u32)(uintptr_t)func_08A306D4) - (1748);
    a0 = a0 + 2872;
    a1 = a1 + 1748;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29D4C;
L_08A29D4C:;
    a0 = D_08AE0B60 - (2912);
    a1 = ((u32)(uintptr_t)func_08A30734) - (1844);
    a0 = a0 + 2912;
    a1 = a1 + 1844;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29D68;
L_08A29D68:;
    a0 = D_08AE0B84 - (2948);
    a1 = ((u32)(uintptr_t)func_08A30778) - (1912);
    a0 = a0 + 2948;
    a1 = a1 + 1912;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29D84;
L_08A29D84:;
    a0 = D_08AE0BB0 - (2992);
    a1 = ((u32)(uintptr_t)func_08A30F80) - (3968);
    a0 = a0 + 2992;
    a1 = a1 + 3968;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29DA0;
L_08A29DA0:;
    a0 = D_08AE0BE8 - (3048);
    a1 = ((u32)(uintptr_t)func_08A31034) - (4148);
    a0 = a0 + 3048;
    a1 = a1 + 4148;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29DBC;
L_08A29DBC:;
    a0 = D_08AE0C1C - (3100);
    a1 = ((u32)(uintptr_t)func_08A31150) - (4432);
    a0 = a0 + 3100;
    a1 = a1 + 4432;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29DD8;
L_08A29DD8:;
    a0 = D_08AE0C5C - (3164);
    a1 = ((u32)(uintptr_t)func_08A31298) - (4760);
    a0 = a0 + 3164;
    a1 = a1 + 4760;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29DF4;
L_08A29DF4:;
    a0 = D_08AE0CA0 - (3232);
    a1 = ((u32)(uintptr_t)func_08A31344) - (4932);
    a0 = a0 + 3232;
    a1 = a1 + 4932;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29E10;
L_08A29E10:;
    a0 = D_08AE0CE4 - (3300);
    a1 = ((u32)(uintptr_t)func_08A313F0) - (5104);
    a0 = a0 + 3300;
    a1 = a1 + 5104;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29E2C;
L_08A29E2C:;
    a0 = D_08AE0D14 - (3348);
    a1 = ((u32)(uintptr_t)func_08A30EAC) - (3756);
    a0 = a0 + 3348;
    a1 = a1 + 3756;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29E48;
L_08A29E48:;
    a0 = D_08AE0D44 - (3396);
    a1 = ((u32)(uintptr_t)func_08A30EF8) - (3832);
    a0 = a0 + 3396;
    a1 = a1 + 3832;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29E64;
L_08A29E64:;
    a0 = D_08AE0D70 - (3440);
    a1 = ((u32)(uintptr_t)func_08A30F3C) - (3900);
    a0 = a0 + 3440;
    a1 = a1 + 3900;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29E80;
L_08A29E80:;
    a0 = D_08AE0DA4 - (3492);
    a1 = ((u32)(uintptr_t)func_08A3154C) - (5452);
    a0 = a0 + 3492;
    a1 = a1 + 5452;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29E9C;
L_08A29E9C:;
    a0 = D_08AE0DB8 - (3512);
    a1 = ((u32)(uintptr_t)func_08A31B44) - (6980);
    a0 = a0 + 3512;
    a1 = a1 + 6980;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29EB8;
L_08A29EB8:;
    a0 = D_08AE0DD4 - (3540);
    a1 = ((u32)(uintptr_t)func_08A31B8C) - (7052);
    a0 = a0 + 3540;
    a1 = a1 + 7052;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29ED4;
L_08A29ED4:;
    a0 = D_08AE0DF8 - (3576);
    a1 = ((u32)(uintptr_t)func_08A31C38) - (7224);
    a0 = a0 + 3576;
    a1 = a1 + 7224;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29EF0;
L_08A29EF0:;
    a0 = D_08AE0E18 - (3608);
    a1 = ((u32)(uintptr_t)func_08A31CA4) - (7332);
    a0 = a0 + 3608;
    a1 = a1 + 7332;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29F0C;
L_08A29F0C:;
    a0 = D_08AE0E44 - (3652);
    a1 = ((u32)(uintptr_t)func_08A2F684) - (-2428);
    a0 = a0 + 3652;
    a1 = a1 - 2428;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29F28;
L_08A29F28:;
    a0 = D_08AE0E6C - (3692);
    a1 = ((u32)(uintptr_t)func_08A31E2C) - (7724);
    a0 = a0 + 3692;
    a1 = a1 + 7724;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29F44;
L_08A29F44:;
    a0 = D_08AE0E84 - (3716);
    a1 = ((u32)(uintptr_t)func_08A319F4) - (6644);
    a0 = a0 + 3716;
    a1 = a1 + 6644;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29F60;
L_08A29F60:;
    a0 = D_08AE0EA8 - (3752);
    a1 = ((u32)(uintptr_t)func_08A31A94) - (6804);
    a0 = a0 + 3752;
    a1 = a1 + 6804;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29F7C;
L_08A29F7C:;
    a0 = D_08AE0ECC - (3788);
    a1 = ((u32)(uintptr_t)func_08A317CC) - (6092);
    a0 = a0 + 3788;
    a1 = a1 + 6092;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29F98;
L_08A29F98:;
    a0 = D_08AE0EF0 - (3824);
    a1 = ((u32)(uintptr_t)func_08A31918) - (6424);
    a0 = a0 + 3824;
    a1 = a1 + 6424;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29FB4;
L_08A29FB4:;
    a0 = D_08AE0F18 - (3864);
    a1 = ((u32)(uintptr_t)func_08A31750) - (5968);
    a0 = a0 + 3864;
    a1 = a1 + 5968;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29FD0;
L_08A29FD0:;
    a0 = D_08AE0F38 - (3896);
    a1 = ((u32)(uintptr_t)func_08A318B4) - (6324);
    a0 = a0 + 3896;
    a1 = a1 + 6324;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A29FEC;
L_08A29FEC:;
    a0 = D_08AE0F60 - (3936);
    a1 = ((u32)(uintptr_t)func_08A31994) - (6548);
    a0 = a0 + 3936;
    a1 = a1 + 6548;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08AE0F8C - (3980);
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2A00C;
L_08A2A00C:;
    s0 = s0 + 3980;
    a1 = D_08C2D1A4 - (-11868);
    a2 = 21;
    a3 = 1;
    t0 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11868;
    func_08897890(a0, a1, a2, a3, t0);
    goto L_08A2A02C;
L_08A2A02C:;
    a1 = D_08AE0FB4 - (4020);
    a0 = s0 + 0;
    a1 = a1 + 4020;
    s0 = D_08AE0FE0 - (4064);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A040;
L_08A2A040:;
    s0 = s0 + 4064;
    a1 = D_08C2D19C - (-11876);
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 3;
    a0 = s0 + 0;
    a1 = a1 - 11876;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A2A064;
L_08A2A064:;
    a1 = D_08AE1014 - (4116);
    a0 = s0 + 0;
    a1 = a1 + 4116;
    s0 = D_08AE1050 - (4176);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A078;
L_08A2A078:;
    s0 = s0 + 4176;
    a1 = D_08C2D3D2 - (-11310);
    a2 = 1;
    a3 = 0 + 0;
    a1 = a1 - 11310;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A094;
L_08A2A094:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A09C;
L_08A2A09C:;
    a1 = D_08AE1084 - (4228);
    a0 = s0 + 0;
    a1 = a1 + 4228;
    s0 = D_08AE10C8 - (4296);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A0B0;
L_08A2A0B0:;
    s0 = s0 + 4296;
    a1 = D_08B1C160 - (-16032);
    a2 = 0 + 0;
    a3 = 2;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 16032;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A2A0D4;
L_08A2A0D4:;
    a1 = D_08AE10E8 - (4328);
    a1 = a1 + 4328;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A0E4;
L_08A2A0E4:;
    a0 = s0 + 0;
    s0 = D_08AE1114 - (4372);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A0F0;
L_08A2A0F0:;
    s0 = s0 + 4372;
    a1 = D_08B1C164 - (-16028);
    a2 = 0 + 0;
    a3 = 6;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 16028;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A2A114;
L_08A2A114:;
    a1 = D_08AE1134 - (4404);
    a1 = a1 + 4404;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A124;
L_08A2A124:;
    a0 = s0 + 0;
    s0 = D_08AE1160 - (4448);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A130;
L_08A2A130:;
    s0 = s0 + 4448;
    a1 = D_08C2D198 - (-11880);
    a2 = 0 + 0;
    a3 = 7;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11880;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A2A154;
L_08A2A154:;
    a1 = D_08AE1180 - (4480);
    a1 = a1 + 4480;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A164;
L_08A2A164:;
    a0 = s0 + 0;
    s0 = D_08AE11A4 - (4516);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A170;
L_08A2A170:;
    s0 = s0 + 4516;
    a1 = D_08B1C168 - (-16024);
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 21;
    a0 = s0 + 0;
    a1 = a1 - 16024;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A2A194;
L_08A2A194:;
    a1 = D_08AE11C4 - (4548);
    a1 = a1 + 4548;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A1A4;
L_08A2A1A4:;
    a0 = s0 + 0;
    s0 = D_08AE11E8 - (4584);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A1B0;
L_08A2A1B0:;
    s0 = s0 + 4584;
    a1 = D_08C2D188 - (-11896);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11896;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A1CC;
L_08A2A1CC:;
    a1 = D_08AE1220 - (4640);
    a0 = s0 + 0;
    a1 = a1 + 4640;
    s0 = D_08AE128C - (4748);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A1E0;
L_08A2A1E0:;
    s0 = s0 + 4748;
    a1 = D_08C2D189 - (-11895);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11895;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A1FC;
L_08A2A1FC:;
    a1 = D_08AE12B4 - (4788);
    a1 = a1 + 4788;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A20C;
L_08A2A20C:;
    a0 = s0 + 0;
    s0 = D_08AE12E0 - (4832);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A218;
L_08A2A218:;
    s0 = s0 + 4832;
    a1 = D_08C2D18A - (-11894);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11894;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A234;
L_08A2A234:;
    a1 = D_08AE1314 - (4884);
    a1 = a1 + 4884;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A244;
L_08A2A244:;
    a0 = s0 + 0;
    s0 = D_08AE1354 - (4948);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A250;
L_08A2A250:;
    s0 = s0 + 4948;
    a1 = D_08C2D18B - (-11893);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11893;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A26C;
L_08A2A26C:;
    a1 = D_08AE137C - (4988);
    a1 = a1 + 4988;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A27C;
L_08A2A27C:;
    a0 = s0 + 0;
    s0 = D_08AE13C4 - (5060);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A288;
L_08A2A288:;
    s0 = s0 + 5060;
    a1 = D_08C2D18C - (-11892);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11892;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A2A4;
L_08A2A2A4:;
    a1 = D_08AE13F8 - (5112);
    a1 = a1 + 5112;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A2B4;
L_08A2A2B4:;
    a0 = s0 + 0;
    s0 = D_08AE143C - (5180);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A2C0;
L_08A2A2C0:;
    s0 = s0 + 5180;
    a1 = D_08B1C15C - (-16036);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 16036;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A2DC;
L_08A2A2DC:;
    a1 = D_08AE146C - (5228);
    a0 = s0 + 0;
    a1 = a1 + 5228;
    s0 = D_08AE14B8 - (5304);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A2F0;
L_08A2A2F0:;
    s0 = s0 + 5304;
    a1 = D_08B1C15D - (-16035);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 16035;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A30C;
L_08A2A30C:;
    a1 = D_08AE14EC - (5356);
    a1 = a1 + 5356;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A31C;
L_08A2A31C:;
    a0 = s0 + 0;
    s0 = D_08AE1528 - (5416);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A328;
L_08A2A328:;
    s0 = s0 + 5416;
    a3 = 0x7fff0000u;
    a1 = D_08B1C148 - (-16056);
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    a0 = s0 + 0;
    a1 = a1 - 16056;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A2A350;
L_08A2A350:;
    a1 = D_08AE1554 - (5460);
    a1 = a1 + 5460;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A360;
L_08A2A360:;
    a0 = s0 + 0;
    s0 = D_08AE158C - (5516);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A36C;
L_08A2A36C:;
    s0 = s0 + 5516;
    a1 = D_08C2D0A8 - (-12120);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 12120;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A388;
L_08A2A388:;
    a1 = D_08AE15BC - (5564);
    a1 = a1 + 5564;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A398;
L_08A2A398:;
    a0 = s0 + 0;
    s0 = D_08AE15F4 - (5620);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A3A4;
L_08A2A3A4:;
    s0 = s0 + 5620;
    a1 = D_08C2D0A9 - (-12119);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 12119;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A3C0;
L_08A2A3C0:;
    a1 = D_08AE1628 - (5672);
    a1 = a1 + 5672;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A3D0;
L_08A2A3D0:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A3D8;
L_08A2A3D8:;
    v1 = D_08AEFA44 - (-1468);
    v0 = D_08AEFA40 - (-1472);
    f12 = BITSF(LD32(v0-1472));
    f13 = BITSF(LD32(v1-1468));
    s0 = D_08AE1664 - (5732);
    s0 = s0 + 5732;
    a1 = D_08B1C154 - (-16044);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 16044;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_08A2A408;
L_08A2A408:;
    a1 = D_08AE1688 - (5768);
    a1 = a1 + 5768;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A418;
L_08A2A418:;
    a0 = s0 + 0;
    s0 = D_08AE16D4 - (5844);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A424;
L_08A2A424:;
    s0 = s0 + 5844;
    a1 = D_08C2D0A4 - (-12124);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 12124;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A440;
L_08A2A440:;
    a1 = D_08AE1700 - (5888);
    a1 = a1 + 5888;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A450;
L_08A2A450:;
    a0 = s0 + 0;
    s0 = D_08AE173C - (5948);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A45C;
L_08A2A45C:;
    s0 = s0 + 5948;
    a1 = D_08C2D18D - (-11891);
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = a1 - 11891;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A478;
L_08A2A478:;
    a1 = D_08AE176C - (5996);
    a0 = s0 + 0;
    a1 = a1 + 5996;
    s0 = D_08AE17AC - (6060);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A48C;
L_08A2A48C:;
    s0 = s0 + 6060;
    a1 = D_08C2D0AC - (-12116);
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 8;
    a0 = s0 + 0;
    a1 = a1 - 12116;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A2A4B0;
L_08A2A4B0:;
    a1 = D_08AE17DC - (6108);
    a1 = a1 + 6108;
    a0 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A4C0;
L_08A2A4C0:;
    a0 = s0 + 0;
    s0 = D_08B1C12C - (-16084);
    s0 = s0 - 16084;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A4D0;
L_08A2A4D0:;
    a0 = s5 + 0;
    a1 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A4E8;
L_08A2A4E8:;
    a1 = s0 + 0;
    s0 = D_08B1C130 - (-16080);
    a0 = s4 + 0;
    s0 = s0 - 16080;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A504;
L_08A2A504:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A518;
L_08A2A518:;
    a1 = s0 + 1;
    a0 = s2 + 0;
    a2 = 1;
    a3 = 0 + 0;
    s0 = s0 + 2;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A530;
L_08A2A530:;
    a1 = s0 + 0;
    s0 = D_08AE181C - (6172);
    a2 = 1;
    a3 = 0 + 0;
    s0 = s0 + 6172;
    a0 = s1 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A54C;
L_08A2A54C:;
    a0 = s5 + 0;
    a1 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A558;
L_08A2A558:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A564;
L_08A2A564:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A570;
L_08A2A570:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A57C;
L_08A2A57C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    s0 = D_08AE184C - (6220);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A58C;
L_08A2A58C:;
    s0 = s0 + 6220;
    a1 = D_08C2D3D0 - (-11312);
    a2 = 1;
    a3 = 0 + 0;
    a1 = a1 - 11312;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A5A8;
L_08A2A5A8:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A5B0;
L_08A2A5B0:;
    a1 = D_08AE1884 - (6276);
    a0 = s0 + 0;
    a1 = a1 + 6276;
    s0 = D_08AE18B8 - (6328);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A5C4;
L_08A2A5C4:;
    s0 = s0 + 6328;
    a1 = D_08C2D3D1 - (-11311);
    a2 = 1;
    a3 = 0 + 0;
    a1 = a1 - 11311;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A5E0;
L_08A2A5E0:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A5E8;
L_08A2A5E8:;
    a1 = D_08AE18F4 - (6388);
    a0 = s0 + 0;
    a1 = a1 + 6388;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A5F8;
L_08A2A5F8:;
    a0 = D_08AE1924 - (6436);
    a1 = ((u32)(uintptr_t)func_08A31FA8) - (8104);
    a0 = a0 + 6436;
    a1 = a1 + 8104;
    a2 = 1;
    a3 = 0 + 0;
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2A614;
L_08A2A614:;
    a0 = D_08AE1958 - (6488);
    a1 = ((u32)(uintptr_t)func_08A32018) - (8216);
    a0 = a0 + 6488;
    a1 = a1 + 8216;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08AE1994 - (6548);
    func_08897694(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2A634;
L_08A2A634:;
    s0 = s0 + 6548;
    a1 = D_08B1C16C - (-16020);
    a1 = a1 - 16020;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A650;
L_08A2A650:;
    a0 = s0 + 0;
    s0 = D_08AE19CC - (6604);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A65C;
L_08A2A65C:;
    s0 = s0 + 6604;
    a1 = D_08B1C16D - (-16019);
    a1 = a1 - 16019;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A678;
L_08A2A678:;
    a0 = s0 + 0;
    s0 = D_08AE1A00 - (6656);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A684;
L_08A2A684:;
    s0 = s0 + 6656;
    a1 = D_08C2CF32 - (-12494);
    a1 = a1 - 12494;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A6A0;
L_08A2A6A0:;
    a0 = s0 + 0;
    s0 = D_08AE1A28 - (6696);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A6AC;
L_08A2A6AC:;
    s0 = s0 + 6696;
    a3 = 0x7fff0000u;
    a1 = D_08C2D1A0 - (-11872);
    t0 = 1;
    t1 = 0 + 0;
    a1 = a1 - 11872;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    a0 = s0 + 0;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A2A6D4;
L_08A2A6D4:;
    s1 = D_08B1C050 - (-16304);
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A6E0;
L_08A2A6E0:;
    a0 = LD32(s1-16304);
    a1 = D_08C2CF30 - (-12496);
    a1 = a1 - 12496;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A6F8;
L_08A2A6F8:;
    a0 = LD32(s1-16304);
    s0 = D_08B1C058 - (-16296);
    s1 = 0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A708;
L_08A2A708:;
    v1 = D_08B1C054 - (-16300);
    a0 = LD32(v1-16300);
    a1 = ((u32)(uintptr_t)func_08A31DBC) - (7612);
    a1 = a1 + 7612;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2A724;
L_08A2A724:;
    a0 = LD32(s0-16296);
    a1 = D_08B1C134 - (-16076);
    a1 = a1 - 16076;
    a2 = 0 + 0;
    a3 = 1;
    t0 = 1;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A2A744;
L_08A2A744:;
    a0 = LD32(s0-16296);
    s5 = D_08AE1A60 - (6752);
    s4 = D_08AE1A6C - (6764);
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A754;
L_08A2A754:;
    v1 = D_08B1C05C - (-16292);
    a0 = LD32(v1-16292);
    a1 = ((u32)(uintptr_t)func_08A31DF4) - (7668);
    a1 = a1 + 7668;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A2A770;
L_08A2A770:;
    v1 = D_08C2D190 - (-11888);
    v0 = D_08C2D1D0 - (-11824);
    s3 = v1 - 11888;
    s0 = v0 - 11824;
    s2 = D_08AE1A9C - (6812);
    goto L_08A2A784;
L_08A2A784:;
    t1 = s1 + 0;
    t0 = s4 + 6764;
    a0 = s0 + 0;
    a1 = s5 + 6752;
    a2 = 32;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A7A0;
L_08A2A7A0:;
    a1 = s1 + s3;
    a2 = 1;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2A7B4;
L_08A2A7B4:;
    a0 = s0 + 0;
    a1 = s2 + 6812;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_08A2A7C0;
L_08A2A7C0:;
    s1 = s1 + 1;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A2A7CC;
L_08A2A7CC:;
    v1 = s1 < 0x8u;
    cnd_ = v1 != 0;
    s0 = s0 + 64;
    if (cnd_) { goto L_08A2A784; }
    goto L_08A2A7D8;
L_08A2A7D8:;
    func_08A287CC(0, 0, 0);
    goto L_08A2A7E0;
L_08A2A7E0:;
    func_08A3646C(0, 0, 0);
    goto L_08A2A7E8;
L_08A2A7E8:;
    func_08A622B0();
    goto L_08A2A7F0;
L_08A2A7F0:;
    func_08A32FB8(0, 0, 0);
    goto L_08A2A7F8;
L_08A2A7F8:;
    func_08A3502C(0, 0, 0);
    goto L_08A2A800;
L_08A2A800:;
    func_089750A8();
    goto L_08A2A808;
L_08A2A808:;
    func_088A1D7C();
    goto L_08A2A810;
L_08A2A810:;
    sp = sp + 32;
    return;
}

/* 08A2A834 */
rv_t func_08A2A834(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A2A834:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A2A83C */
rv_t func_08A2A83C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A2A83C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A2A844 */
rv_t func_08A2A844(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08A2A844:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A2A8E8; }
    goto L_08A2A854;
L_08A2A854:;
    a2 = LD32(v0+20);
    a0 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08A2A8E8; }
    goto L_08A2A868;
L_08A2A868:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2A8B8; }
    goto L_08A2A88C;
L_08A2A88C:;
    a0 = LD32(a1);
    goto L_08A2A890;
L_08A2A890:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A2A8F0; }
    goto L_08A2A8A8;
L_08A2A8A8:;
    a1 = LD32(a1+4);
    goto L_08A2A8AC;
L_08A2A8AC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A2A890; }
    goto L_08A2A8B4;
L_08A2A8B4:;
    a0 = 0 + 0;
    goto L_08A2A8B8;
L_08A2A8B8:;
    cnd_ = a0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A2A8E8; }
    goto L_08A2A8C0;
L_08A2A8C0:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A2A8E8; }
    goto L_08A2A8E4;
L_08A2A8E4:;
    a1 = 1;
    goto L_08A2A8E8;
L_08A2A8E8:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
L_08A2A8F0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A2A8AC; }
    goto L_08A2A8FC;
L_08A2A8FC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A2A8AC; }
    goto L_08A2A908;
L_08A2A908:;
    goto L_08A2A8B8;
}

/* 08A2A910 */
u64 func_08A2A910(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2A910:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08A2A928;
L_08A2A928:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A2A95C; }
    goto L_08A2A934;
L_08A2A934:;
    v0 = D_08C2B89C - (-18276);
    goto L_08A2A938;
L_08A2A938:;
    v1 = LD32(v0-18276);
    cnd_ = v1 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A2A94C; }
    goto L_08A2A944;
L_08A2A944:;
    s0 = 1;
    goto L_08A2A948;
L_08A2A948:;
    v0 = s0 + 0;
    goto L_08A2A94C;
L_08A2A94C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A2A95C:;
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2A964;
L_08A2A964:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = 1; goto L_08A2A948; }
    goto L_08A2A96C;
L_08A2A96C:;
    v0 = D_08C2B89C - (-18276);
    goto L_08A2A938;
}

/* 08A2A974 */
u32 func_08A2A974(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2A974:;
    sp = sp - 16;
    v0 = D_08C2D0B8 - (-12104);
    v1 = a0 + 0;
    a3 = LD32(v0-12104);
    a0 = 0xfe220000u;
    v0 = 2;
    a1 = 1;
    a2 = 1;
    a0 = a0 | 0x36dd;
    cnd_ = a3 == v0;
    t0 = v1 & 0xff;
    if (cnd_) { goto L_08A2A9FC; }
    goto L_08A2A9A4;
L_08A2A9A4:;
    v0 = D_08C2D0A6 - (-12122);
    v1 = LD_U8(v0-12122);
    a0 = 0xc5e0000u;
    cnd_ = v1 != 0;
    a0 = a0 | 0x5c81;
    if (cnd_) { goto L_08A2A9FC; }
    goto L_08A2A9B8;
L_08A2A9B8:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    a0 = 0xc5e0000u;
    a0 = a0 | 0x5c81;
    a1 = 1;
    a2 = 1;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A2A9FC; }
    goto L_08A2A9D8;
L_08A2A9D8:;
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A2A9F4; }
    goto L_08A2A9E4;
L_08A2A9E4:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
L_08A2A9F4:;
    cnd_ = t0 != 0;
    if (cnd_) { a0 = 0x681c0000u; goto L_08A2AA0C; }
    goto L_08A2A9FC;
L_08A2A9FC:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2AA04;
L_08A2AA04:;
    a3 = 1;
    goto L_08A2A9E4;
L_08A2AA0C:;
    a0 = a0 | 0x35f;
    goto L_08A2A9FC;
}

/* 08A2AA14 */
u32 func_08A2AA14(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2AA14:;
    a0 = 0xe7b40000u;
    sp = sp - 16;
    a0 = a0 | 0x8898;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2AA30;
L_08A2AA30:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 08A2AA40 */
u32 func_08A2AA40(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08A2AA40:;
    v1 = D_08C311D4 - (4564);
    v0 = LD32(v1+4564);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2AA64; }
    goto L_08A2AA54;
L_08A2AA54:;
    v0 = D_08C2D0A7 - (-12121);
    v1 = LD_U8(v0-12121);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A2AA68; }
    goto L_08A2AA64;
L_08A2AA64:;
    a0 = 1;
    goto L_08A2AA68;
L_08A2AA68:;
    v0 = a0 + 0;
    return v0;
}

/* 08A2AA70 */
u32 func_08A2AA70(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2AA70:;
    sp = sp - 16;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AA80;
L_08A2AA80:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2AAA0; }
    goto L_08A2AA8C;
L_08A2AA8C:;
    v0 = D_08B1BDF4 - (-16908);
    a0 = LD32(v0-16908);
    v1 = 15;
    cnd_ = a0 == v1;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2AAAC; }
    goto L_08A2AAA0;
L_08A2AAA0:;
    sp = sp + 16;
    return v0;
L_08A2AAAC:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AAB4;
L_08A2AAB4:;
    a0 = 0x8e760000u;
    v1 = 0xe44f0000u;
    a0 = a0 | 0x136b;
    v1 = v1 | 0xe2ba;
    v1 = v0 ^ v1;
    v0 = v0 ^ a0;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08A2AAA0; }
    goto L_08A2AAE0;
L_08A2AAE0:;
    v0 = func_08A2AA40();
    goto L_08A2AAE8;
L_08A2AAE8:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    goto L_08A2AAA0;
}

/* 08A2AAF4 */
void func_08A2AAF4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2AAF4:;
    sp = sp - 16;
    v0 = D_08C2CE64 - (-12700);
    v1 = LD_U8(v0-12700);
    cnd_ = v1 != 0;
    s0 = D_08B285B4 - (-31308);
    if (cnd_) { goto L_08A2AB30; }
    goto L_08A2AB14;
L_08A2AB14:;
    v1 = 0 + 0;
    goto L_08A2AB18;
L_08A2AB18:;
    goto L_08A2AB1C;
L_08A2AB1C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A2AB30:;
    s1 = D_08C2D0C8 - (-12088);
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AB38;
L_08A2AB38:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2AB18; }
    goto L_08A2AB40;
L_08A2AB40:;
    f1 = BITSF(LD32(s0-31308));
    f0 = BITSF(LD32(s1-12088));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A2AB1C; }
    goto L_08A2AB58;
L_08A2AB58:;
    v0 = D_08C29328 - (-27864);
    a1 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a1 == v1;
    a0 = 14;
    if (cnd_) { goto L_08A2ABA4; }
    goto L_08A2AB6C;
L_08A2AB6C:;
    a0 = 13;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AB74;
L_08A2AB74:;
    a0 = 0x8af00000u;
    a0 = a0 | 0x6fb0;
    goto L_08A2AB7C;
L_08A2AB7C:;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2AB88;
L_08A2AB88:;
    v0 = D_08AEFA48 - (-1464);
    f0 = BITSF(LD32(s0-31308));
    f1 = BITSF(LD32(v0-1464));
    v1 = 1;
    f0 = f0 + f1;
    ST32(s1-12088, FBITS(f0));
    goto L_08A2AB18;
L_08A2ABA4:;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2ABAC;
L_08A2ABAC:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    goto L_08A2AB7C;
}

/* 08A2ABB8 */
void func_08A2ABB8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A2ABB8:;
    v1 = D_08C2D188 - (-11896);
    v0 = LD_U8(v1-11896);
    a0 = a0 & 0xff;
    cnd_ = v0 != a0;
    if (cnd_) { ST8(v1-11896, a0); goto L_08A2ABCC; }
    goto L_08A2ABCC;
L_08A2ABCC:;
    return;
}

/* 08A2ABD4 */
u64 func_08A2ABD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A2ABD4:;
    sp = sp - 48;
    v0 = D_08C2C3E0 - (-15392);
    s2 = LD32(v0-15392);
    cnd_ = s2 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_08A2ACC8; }
    goto L_08A2ABFC;
L_08A2ABFC:;
    a0 = LD32(s2+24);
    { u64 r_ = func_08A2A910(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AC04;
L_08A2AC04:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2ACCC; }
    goto L_08A2AC0C;
L_08A2AC0C:;
    a2 = D_08C2B890 - (-18288);
    v0 = a2 - 18288;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    s1 = 0 + 0;
    ST32(v0+8, v1);
    a0 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A2AC88; }
    goto L_08A2AC3C;
L_08A2AC3C:;
    a2 = LD32(a2-18288);
    a3 = a1 + 0;
    goto L_08A2AC44;
L_08A2AC44:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08A2AC78; }
    goto L_08A2AC5C;
L_08A2AC5C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A2AC8C; }
    goto L_08A2AC6C;
L_08A2AC6C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2AC5C; }
    goto L_08A2AC78;
L_08A2AC78:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A2AC44; }
    goto L_08A2AC88;
L_08A2AC88:;
    v0 = LD32(sp+8);
    goto L_08A2AC8C;
L_08A2AC8C:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A2ACB8; }
    goto L_08A2AC94;
L_08A2AC94:;
    a0 = sp + 0;
    a1 = 1;
    s0 = LD32(v0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2ACA4;
L_08A2ACA4:;
    cnd_ = s1 == s3;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A2ACF8; }
    goto L_08A2ACAC;
L_08A2ACAC:;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A2AC94; }
    goto L_08A2ACB4;
L_08A2ACB4:;
    a0 = LD32(sp);
    goto L_08A2ACB8;
L_08A2ACB8:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2ACE8; }
    goto L_08A2ACC8;
L_08A2ACC8:;
    v0 = 0 + 0;
    goto L_08A2ACCC;
L_08A2ACCC:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A2ACE8:;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2ACF0;
L_08A2ACF0:;
    v0 = 0 + 0;
    goto L_08A2ACCC;
L_08A2ACF8:;
    v1 = LD32(s2+24);
    v0 = LD32(s0+84);
    cnd_ = v1 != v0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A2ACB8; }
    goto L_08A2AD08;
L_08A2AD08:;
    a0 = LD32(s0);
    a1 = LD32(sp);
    v0 = LD32(a0-16);
    v1 = LD32(a1+8);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    v1 = v1 - 1;
    v0 = D_08B1C150 - (-16048);
    ST32(v0-16048, a0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08A2AD3C; }
    goto L_08A2AD34;
L_08A2AD34:;
    v0 = 1;
    goto L_08A2ACCC;
L_08A2AD3C:;
    a0 = a1 + 0;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AD44;
L_08A2AD44:;
    v0 = 1;
    goto L_08A2ACCC;
}

/* 08A2AD4C */
void func_08A2AD4C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A2AD4C:;
    sp = sp - 48;
    v1 = D_08B1BDF8 - (-16904);
    v0 = (u32)-1;
    a0 = LD32(v1-16904);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A2ADA0; }
    goto L_08A2AD80;
L_08A2AD80:;
    ST32(v1-16904, v0);
    v0 = D_08B1BDF4 - (-16908);
    v1 = D_08B1C168 - (-16024);
    ST32(v0-16908, a0);
    v0 = 3;
    cnd_ = a0 == v0;
    ST32(v1-16024, a0);
    if (cnd_) { goto L_08A2ADC0; }
    goto L_08A2AD9C;
L_08A2AD9C:;
    goto L_08A2ADA0;
L_08A2ADA0:;
    sp = sp + 48;
    return;
L_08A2ADC0:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A2AD9C; }
    goto L_08A2ADD0;
L_08A2ADD0:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    s4 = LD32(v0+24);
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2ADE0;
L_08A2ADE0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2AD9C; }
    goto L_08A2ADE8;
L_08A2ADE8:;
    a0 = LD32(v0+144);
    { u64 r_ = func_0888AA60(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2ADF0;
L_08A2ADF0:;
    cnd_ = v0 == 0;
    v0 = D_08C2B890 - (-18288);
    if (cnd_) { goto L_08A2AF98; }
    goto L_08A2ADF8;
L_08A2ADF8:;
    s0 = v0 - 18288;
    v1 = LD32(s0+8);
    a0 = sp + 0;
    a1 = 1;
    v1 = v1 + 1;
    ST32(s0+8, v1);
    s2 = D_08B1C140 - (-16064);
    s3 = 0 + 0;
    ST32(sp, s0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AE28;
L_08A2AE28:;
    v1 = LD32(s2-16064);
    cnd_ = (s32)v1 < 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A2AE90; }
    goto L_08A2AE34;
L_08A2AE34:;
    v0 = LD32(s0+12);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A2AE90; }
    goto L_08A2AE44;
L_08A2AE44:;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A2AF70; }
    goto L_08A2AE4C;
L_08A2AE4C:;
    a0 = LD32(s2-16064);
    v0 = func_08A32CEC(a0);
    goto L_08A2AE54;
L_08A2AE54:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2AE70; }
    goto L_08A2AE5C;
L_08A2AE5C:;
    v0 = LD32(sp+8);
    v1 = LD32(v0);
    a0 = LD32(v1+84);
    cnd_ = a0 == s4;
    if (cnd_) { goto L_08A2AF4C; }
    goto L_08A2AE70;
L_08A2AE70:;
    a0 = sp + 0;
    goto L_08A2AE74;
L_08A2AE74:;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AE84;
L_08A2AE84:;
    cnd_ = s5 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A2AEF4; }
    goto L_08A2AE8C;
L_08A2AE8C:;
    v0 = LD32(sp+8);
    goto L_08A2AE90;
L_08A2AE90:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2AEE8; }
    goto L_08A2AE98;
L_08A2AE98:;
    s2 = 0x55f10000u;
    s2 = s2 | 0xf71;
    a1 = s3 + s2;
    goto L_08A2AEA4;
L_08A2AEA4:;
    a0 = s1 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2AEAC;
L_08A2AEAC:;
    s0 = v0 + 0;
    a0 = sp + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A2AED4; }
    goto L_08A2AEC0;
L_08A2AEC0:;
    v0 = LD32(sp+8);
    v1 = LD32(v0);
    a2 = LD32(v1+84);
    cnd_ = a2 == s4;
    if (cnd_) { goto L_08A2AF30; }
    goto L_08A2AED4;
L_08A2AED4:;
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AEDC;
L_08A2AEDC:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a1 = s3 + s2;
    if (cnd_) { goto L_08A2AEA4; }
    goto L_08A2AEE8;
L_08A2AEE8:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_08A2AF14; }
    goto L_08A2AEF0;
L_08A2AEF0:;
    a0 = LD32(sp);
    goto L_08A2AEF4;
L_08A2AEF4:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2AD9C; }
    goto L_08A2AF04;
L_08A2AF04:;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AF0C;
L_08A2AF0C:;
    goto L_08A2ADA0;
L_08A2AF14:;
    a0 = s1 + 0;
    v0 = func_08884FB0(a0);
    goto L_08A2AF1C;
L_08A2AF1C:;
    a0 = v0 + 0;
    goto L_08A2AF20;
L_08A2AF20:;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AF28;
L_08A2AF28:;
    a0 = LD32(sp);
    goto L_08A2AEF4;
L_08A2AF30:;
    func_08A32C84();
    goto L_08A2AF38;
L_08A2AF38:;
    a1 = LD32(s0+144);
    a0 = s1 + 0;
    f0 = func_08884FB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2AF44;
L_08A2AF44:;
    a0 = LD32(s0+144);
    goto L_08A2AF20;
L_08A2AF4C:;
    s5 = 1;
    func_08A32C84();
    goto L_08A2AF54;
L_08A2AF54:;
    a1 = LD32(s0+144);
    a0 = s1 + 0;
    f0 = func_08884FB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2AF60;
L_08A2AF60:;
    a0 = LD32(s0+144);
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AF68;
L_08A2AF68:;
    a0 = sp + 0;
    goto L_08A2AE74;
L_08A2AF70:;
    a0 = sp + 0;
    goto L_08A2AF74;
L_08A2AF74:;
    a1 = 1;
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AF7C;
L_08A2AF7C:;
    v0 = LD32(s2-16064);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A2AF74; }
    goto L_08A2AF90;
L_08A2AF90:;
    goto L_08A2AE4C;
L_08A2AF98:;
    a0 = 3;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2AFA0;
L_08A2AFA0:;
    goto L_08A2ADA0;
}

/* 08A2AFA8 */
void func_08A2AFA8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u32 t_;
L_08A2AFA8:;
    a2 = D_08C2CE6C - (-12692);
    a0 = LD32(a2-12692);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A2B038; }
    goto L_08A2AFB8;
L_08A2AFB8:;
    a3 = D_08C2CE70 - (-12688);
    v0 = LD32(a3-12688);
    cnd_ = v0 == a0;
    if (cnd_) { ST32(a2-12692, 0); goto L_08A2B038; }
    goto L_08A2AFC8;
L_08A2AFC8:;
    v0 = D_08C2CE65 - (-12699);
    v1 = LD_U8(v0-12699);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A2B038; }
    goto L_08A2AFD8;
L_08A2AFD8:;
    v0 = a0 < 0x7u;
    cnd_ = v0 == 0;
    v1 = LD32(a2-12692);
    if (cnd_) { goto L_08A2B024; }
    goto L_08A2AFE4;
L_08A2AFE4:;
    v1 = D_08AE1AD4 - (6868);
    v0 = a0 << 2;
    v1 = v1 + 6868;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A2B000u: goto L_08A2B000; case 0x08A2B014u: goto L_08A2B014; case 0x08A2B020u: goto L_08A2B020; case 0x08A2B040u: goto L_08A2B040; default: rs_break(0, 0x08a2aff8); }
L_08A2B000:;
    v0 = LD32(a3-12688);
    v0 = v0 - 3;
    v0 = v0 < 0x3u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a2-12692); goto L_08A2B024; }
    goto L_08A2B014;
L_08A2B014:;
    v1 = 1;
    v0 = D_08C2CE67 - (-12697);
    ST8(v0-12697, v1);
    goto L_08A2B020;
L_08A2B020:;
    v1 = LD32(a2-12692);
    goto L_08A2B024;
L_08A2B024:;
    v0 = D_08C2D198 - (-11880);
    ST32(a2-12692, 0);
    a1 = 1;
    ST32(v0-11880, v1);
    ST32(a3-12688, v1);
    goto L_08A2B038;
L_08A2B038:;
    v0 = a1 + 0;
    return;
L_08A2B040:;
    v0 = 1;
    v1 = D_08C2CE67 - (-12697);
    a0 = 3;
    ST8(v1-12697, v0);
    ST32(a2-12692, a0);
    goto L_08A2B020;
}

/* 08A2B058 */
void func_08A2B058(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2B058:;
    sp = sp - 16;
    v0 = D_08B29BF8 - (-25608);
    s1 = LD32(v0-25608);
    cnd_ = s1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A2B08C; }
    goto L_08A2B078;
L_08A2B078:;
    goto L_08A2B080;
L_08A2B080:;
    sp = sp + 16;
    return;
L_08A2B08C:;
    a0 = s0 + 0;
    v0 = func_0888B184(a0);
    goto L_08A2B094;
L_08A2B094:;
    a0 = LD32(v0+144);
    s0 = s0 + 1;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B0A0;
L_08A2B0A0:;
    v1 = s0 < s1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A2B08C; }
    goto L_08A2B0AC;
L_08A2B0AC:;
    goto L_08A2B080;
}

/* 08A2B0B4 */
void func_08A2B0B4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2B0B4:;
    sp = sp - 16;
    func_08A2AD4C();
    goto L_08A2B0C4;
L_08A2B0C4:;
    func_08A2AFA8();
    goto L_08A2B0CC;
L_08A2B0CC:;
    v1 = D_08C2CE65 - (-12699);
    v0 = LD_U8(v1-12699);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2B120; }
    goto L_08A2B0DC;
L_08A2B0DC:;
    v0 = D_08C2CE67 - (-12697);
    v1 = LD_U8(v0-12697);
    cnd_ = v1 != 0;
    v0 = D_08C2CE70 - (-12688);
    if (cnd_) { goto L_08A2B120; }
    goto L_08A2B0EC;
L_08A2B0EC:;
    v0 = LD32(v0-12688);
    v1 = v0 < 0x6u;
    cnd_ = v1 == 0;
    v1 = D_08AE1AF0 - (6896);
    if (cnd_) { goto L_08A2B120; }
    goto L_08A2B0FC;
L_08A2B0FC:;
    v0 = v0 << 2;
    v1 = v1 + 6896;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A2B114u: goto L_08A2B114; case 0x08A2B11Cu: goto L_08A2B11C; case 0x08A2B128u: goto L_08A2B128; default: rs_break(0, 0x08a2b10c); }
L_08A2B114:;
    func_08A2B138();
    goto L_08A2B11C;
L_08A2B11C:;
    goto L_08A2B120;
L_08A2B120:;
    sp = sp + 16;
    return;
L_08A2B128:;
    func_08A2B410();
    goto L_08A2B130;
L_08A2B130:;
    goto L_08A2B120;
}

/* 08A2B138 */
void func_08A2B138(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2B138:;
    sp = sp - 16;
    v0 = D_08B1BDF4 - (-16908);
    v1 = D_08B1C168 - (-16024);
    a0 = LD32(v0-16908);
    v0 = D_08C2D1A0 - (-11872);
    ST32(v0-11872, 0);
    ST32(v1-16024, a0);
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B164;
L_08A2B164:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2B238; }
    goto L_08A2B16C;
L_08A2B16C:;
    a0 = 0xceb60000u;
    goto L_08A2B170;
L_08A2B170:;
    a0 = a0 | 0x5b46;
    func_08A2C3BC(a0);
    goto L_08A2B178;
L_08A2B178:;
    a0 = 0x25dc0000u;
    a0 = a0 | 0x4ae2;
    func_08A2C3BC(a0);
    goto L_08A2B184;
L_08A2B184:;
    a0 = 0x45490000u;
    a0 = a0 | 0x1426;
    func_08A2C3BC(a0);
    goto L_08A2B190;
L_08A2B190:;
    a0 = 0x5d020000u;
    a0 = a0 | 0x17c0;
    func_08A2C3BC(a0);
    goto L_08A2B19C;
L_08A2B19C:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v1 = D_08AEFA4C - (-1460);
    f2 = BITSF(LD32(v0+148));
    f3 = BITSF(LD32(v1-1460));
    v0 = v0 + 148;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f2, f3, 14);
    s1 = D_08C2D0DC - (-12068);
    s0 = s1 - 12068;
    cnd_ = fcc;
    ST32(s0+12, FBITS(f0));
    if (cnd_) { goto L_08A2B1D0; }
    goto L_08A2B1CC;
L_08A2B1CC:;
    f2 = f3;
    goto L_08A2B1D0;
L_08A2B1D0:;
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    ST32(s1-12068, FBITS(f2));
    if (cnd_) { goto L_08A2B1E8; }
    goto L_08A2B1E4;
L_08A2B1E4:;
    f1 = f3;
    goto L_08A2B1E8;
L_08A2B1E8:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    ST32(s0+4, FBITS(f1));
    if (cnd_) { goto L_08A2B200; }
    goto L_08A2B1FC;
L_08A2B1FC:;
    f0 = f3;
    goto L_08A2B200;
L_08A2B200:;
    f12 = f0 * f2;
    ST32(s0+8, FBITS(f0));
    a0 = 0 + 0;
    func_088D9DF0(a0, f12);
    goto L_08A2B210;
L_08A2B210:;
    f0 = BITSF(LD32(s1-12068));
    f12 = BITSF(LD32(s0+4));
    a0 = 1;
    f12 = f12 * f0;
    func_088D9DF0(a0, f12);
    goto L_08A2B224;
L_08A2B224:;
    sp = sp + 16;
    return;
L_08A2B238:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B240;
L_08A2B240:;
    cnd_ = v0 != 0;
    a0 = 0xceb60000u;
    if (cnd_) { goto L_08A2B170; }
    goto L_08A2B248;
L_08A2B248:;
    s0 = D_08C2D0BC - (-12100);
    v1 = LD32(s0-12100);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_08A2B2A4; }
    goto L_08A2B25C;
L_08A2B25C:;
    v0 = v1 << 2;
    v1 = D_08AE1B08 - (6920);
    v1 = v1 + 6920;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A2B278u: goto L_08A2B278; case 0x08A2B2C4u: goto L_08A2B2C4; case 0x08A2B314u: goto L_08A2B314; case 0x08A2B374u: goto L_08A2B374; case 0x08A2B39Cu: goto L_08A2B39C; default: rs_break(0, 0x08a2b270); }
L_08A2B278:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B280;
L_08A2B280:;
    a0 = 0 + 0;
    v0 = 2;
    v1 = D_08C2D0B8 - (-12104);
    ST32(v1-12104, v0);
    v0 = func_08A2A974(a0);
    goto L_08A2B294;
L_08A2B294:;
    a0 = 0x77e60000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0xbbf;
    if (cnd_) { goto L_08A2B2AC; }
    goto L_08A2B2A0;
L_08A2B2A0:;
    v0 = 5;
    goto L_08A2B2A4;
L_08A2B2A4:;
    ST32(s0-12100, v0);
    goto L_08A2B16C;
L_08A2B2AC:;
    a1 = 1;
    a2 = 1;
    goto L_08A2B2B4;
L_08A2B2B4:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B2BC;
L_08A2B2BC:;
    v0 = 5;
    goto L_08A2B2A4;
L_08A2B2C4:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B2CC;
L_08A2B2CC:;
    v0 = D_08C2932D - (-27859);
    ST8(v0-27859, 0);
    v1 = D_08C2D0B8 - (-12104);
    v0 = D_08C2932C - (-27860);
    ST32(v1-12104, 0);
    ST8(v0-27860, 0);
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B2E8;
L_08A2B2E8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2B2FC; }
    goto L_08A2B2F0;
L_08A2B2F0:;
    a0 = 0x818b0000u;
    goto L_08A2B2F4;
L_08A2B2F4:;
    a0 = a0 | 0xcce4;
    goto L_08A2B2AC;
L_08A2B2FC:;
    a0 = 0 + 0;
    { rv_t r_ = func_088A4A78(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B304;
L_08A2B304:;
    func_088A4898(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2B30C;
L_08A2B30C:;
    a0 = 0x818b0000u;
    goto L_08A2B2F4;
L_08A2B314:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B31C;
L_08A2B31C:;
    v0 = D_08C2932D - (-27859);
    ST8(v0-27859, 0);
    v1 = D_08C2D0B8 - (-12104);
    v0 = D_08C2932C - (-27860);
    ST32(v1-12104, 0);
    ST8(v0-27860, 0);
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B338;
L_08A2B338:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2B35C; }
    goto L_08A2B340;
L_08A2B340:;
    a0 = 0 + 0;
    v0 = func_08A2A974(a0);
    goto L_08A2B348;
L_08A2B348:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 5; goto L_08A2B2A4; }
    goto L_08A2B350;
L_08A2B350:;
    a0 = 0x4a710000u;
    goto L_08A2B354;
L_08A2B354:;
    a0 = a0 | 0x61b4;
    goto L_08A2B2AC;
L_08A2B35C:;
    a0 = 0 + 0;
    { rv_t r_ = func_088A4A78(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B364;
L_08A2B364:;
    func_088A4898(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2B36C;
L_08A2B36C:;
    goto L_08A2B340;
L_08A2B374:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B37C;
L_08A2B37C:;
    a0 = 0x73c0000u;
    v1 = 1;
    v0 = D_08C2D0B8 - (-12104);
    a0 = a0 | 0x5b9d;
    a1 = 1;
    a2 = 1;
    ST32(v0-12104, v1);
    goto L_08A2B2B4;
L_08A2B39C:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B3A4;
L_08A2B3A4:;
    v0 = D_08C2932D - (-27859);
    ST8(v0-27859, 0);
    v1 = D_08C2D0B8 - (-12104);
    v0 = D_08C2932C - (-27860);
    ST32(v1-12104, 0);
    ST8(v0-27860, 0);
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B3C0;
L_08A2B3C0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2B3F8; }
    goto L_08A2B3C8;
L_08A2B3C8:;
    v0 = func_08A3CC1C();
    goto L_08A2B3D0;
L_08A2B3D0:;
    cnd_ = v0 == 0;
    a0 = 0x4a710000u;
    if (cnd_) { goto L_08A2B354; }
    goto L_08A2B3D8;
L_08A2B3D8:;
    v0 = D_08B1CA20 - (-13792);
    v1 = LD_U8(v0-13792);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A2B340; }
    goto L_08A2B3E8;
L_08A2B3E8:;
    v0 = func_08A2AA14();
    goto L_08A2B3F0;
L_08A2B3F0:;
    goto L_08A2B348;
L_08A2B3F8:;
    a0 = 0 + 0;
    { rv_t r_ = func_088A4A78(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B400;
L_08A2B400:;
    func_088A4898(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2B408;
L_08A2B408:;
    goto L_08A2B3C8;
}

/* 08A2B410 */
void func_08A2B410(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f20 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A2B410:;
    sp = sp - 144;
    v0 = D_08C2B89C - (-18276);
    s3 = LD32(v0-18276);
    cnd_ = s3 == 0;
    s2 = D_08C2D0A5 - (-12123);
    if (cnd_) { goto L_08A2B464; }
    goto L_08A2B450;
L_08A2B450:;
    v0 = LD_U8(s2-12123);
    cnd_ = v0 != 0;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08A2B468; }
    goto L_08A2B45C;
L_08A2B45C:;
    v0 = D_08C2D0AC - (-12116);
    ST32(v0-12116, 0);
    goto L_08A2B464;
L_08A2B464:;
    v0 = D_08B1BB5C - (-17572);
    goto L_08A2B468;
L_08A2B468:;
    v1 = LD32(v0-17572);
    s1 = D_08C29328 - (-27864);
    s6 = D_08B1BDF4 - (-16908);
    a0 = LD32(s1-27864);
    a1 = LD32(s6-16908);
    v0 = D_08B1C160 - (-16032);
    ST32(v0-16032, v1);
    v1 = D_08B1C168 - (-16024);
    v0 = D_08B1C164 - (-16028);
    ST32(v1-16024, a1);
    fp = D_08C2D15C - (-11940);
    s5 = D_08B1C148 - (-16056);
    ST32(v0-16028, a0);
    { rv_t r_ = func_08A2A844(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B4A0;
L_08A2B4A0:;
    v1 = D_08C2D170 - (-11920);
    a3 = v1 - 11920;
    a0 = fp - 11940;
    v1 = D_08B1B91C - (-18148);
    a1 = LD32(v1-18148);
    a2 = LD32(a0+16);
    v1 = LD32(a3+16);
    a0 = LD32(s5-16056);
    a3 = LD_U8(s2-12123);
    a2 = a2 + v1;
    a0 = a0 ^ a1;
    v1 = D_08C2D189 - (-11895);
    ST8(v1-11895, v0);
    a1 = a1 ^ 0x4;
    v0 = D_08C2D18A - (-11894);
    a0 = a0 < 0x1u;
    a1 = a1 < 0x1u;
    a2 = a2 < 0x1u;
    ST8(v0-11894, a0);
    v1 = D_08C2D18B - (-11893);
    v0 = D_08B1C16C - (-16020);
    ST8(v1-11893, a1);
    cnd_ = a3 == 0;
    ST8(v0-16020, a2);
    if (cnd_) { goto L_08A2BE78; }
    goto L_08A2B500;
L_08A2B500:;
    v1 = D_08C2D0AC - (-12116);
    goto L_08A2B504;
L_08A2B504:;
    v0 = LD32(v1-12116);
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    a0 = 0xbf670000u;
    if (cnd_) { goto L_08A2BE5C; }
    goto L_08A2B514;
L_08A2B514:;
    v0 = LD_U8(s2-12123);
    goto L_08A2B518;
L_08A2B518:;
    cnd_ = v0 != 0;
    v0 = LD_U8(s2-12123);
    if (cnd_) { goto L_08A2B534; }
    goto L_08A2B520;
L_08A2B520:;
    v0 = D_08C2D0AC - (-12116);
    v1 = LD32(v0-12116);
    cnd_ = v1 != 0;
    v0 = D_08AEFA50 - (-1456);
    if (cnd_) { goto L_08A2BE3C; }
    goto L_08A2B530;
L_08A2B530:;
    v0 = LD_U8(s2-12123);
    goto L_08A2B534;
L_08A2B534:;
    cnd_ = v0 == 0;
    v0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A2B668; }
    goto L_08A2B53C;
L_08A2B53C:;
    s3 = D_08C28F3C - (-28868);
    v1 = LD32(s3-28868);
    v0 = 6;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 7;
    if (cnd_) { goto L_08A2BCFC; }
    goto L_08A2B550;
L_08A2B550:;
    cnd_ = v0 == 0;
    v0 = 8;
    if (cnd_) { goto L_08A2BCC8; }
    goto L_08A2B558;
L_08A2B558:;
    v0 = 4;
    cnd_ = v1 == v0;
    v1 = LD32(s6-16908);
    if (cnd_) { goto L_08A2BC90; }
    goto L_08A2B564;
L_08A2B564:;
    v1 = LD32(s3-28868);
    goto L_08A2B568;
L_08A2B568:;
    v0 = 6;
    cnd_ = v1 == v0;
    v1 = LD32(s6-16908);
    if (cnd_) { goto L_08A2B580; }
    goto L_08A2B574;
L_08A2B574:;
    func_08A2CB8C(0, 0, 0);
    goto L_08A2B57C;
L_08A2B57C:;
    v1 = LD32(s6-16908);
    goto L_08A2B580;
L_08A2B580:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = D_08C2C3E0 - (-15392);
    if (cnd_) { goto L_08A2BC80; }
    goto L_08A2B58C;
L_08A2B58C:;
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    v1 = D_08B1C13C - (-16068);
    if (cnd_) { goto L_08A2B5A4; }
    goto L_08A2B598;
L_08A2B598:;
    v0 = LD32(v0+24);
    ST32(s5-16056, v0);
    goto L_08A2B5A0;
L_08A2B5A0:;
    v1 = D_08B1C13C - (-16068);
    goto L_08A2B5A4;
L_08A2B5A4:;
    v0 = LD_U8(v1-16068);
    cnd_ = v0 == 0;
    v1 = LD32(s5-16056);
    if (cnd_) { goto L_08A2B610; }
    goto L_08A2B5B0;
L_08A2B5B0:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = D_08AE1B1C - (6940);
    if (cnd_) { goto L_08A2B610; }
    goto L_08A2B5BC;
L_08A2B5BC:;
    s7 = v0 + 6940;
    s4 = 0 + 0;
    v0 = 1;
    goto L_08A2B5C8;
L_08A2B5C8:;
    cnd_ = s4 == v0;
    a0 = 0xf16e0000u;
    if (cnd_) { goto L_08A2BC68; }
    goto L_08A2B5D0;
L_08A2B5D0:;
    a0 = 0x8af00000u;
    s0 = 0xf66b0000u;
    s3 = 0x9b10000u;
    a0 = a0 | 0x6fb0;
    s0 = s0 | 0x8a11;
    cnd_ = s4 == 0;
    s3 = s3 | 0x4de2;
    if (cnd_) { goto L_08A2BB44; }
    goto L_08A2B5EC;
L_08A2B5EC:;
    v1 = 2;
    cnd_ = s4 == v1;
    v0 = 3;
    if (cnd_) { goto L_08A2BC4C; }
    goto L_08A2B5F8;
L_08A2B5F8:;
    cnd_ = s4 == v0;
    if (cnd_) { a0 = 0x636b0000u; goto L_08A2BB30; }
    goto L_08A2B600;
L_08A2B600:;
    s4 = s4 + 1;
    goto L_08A2B604;
L_08A2B604:;
    v0 = s4 < 0x4u;
    goto L_08A2B608;
L_08A2B608:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A2B5C8; }
    goto L_08A2B610;
L_08A2B610:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B618;
L_08A2B618:;
    v1 = 0xc5810000u;
    v1 = v1 | 0x23d1;
    cnd_ = v0 == v1;
    v1 = LD32(s6-16908);
    if (cnd_) { goto L_08A2BAD0; }
    goto L_08A2B628;
L_08A2B628:;
    v0 = 13;
    cnd_ = v1 == v0;
    v0 = 18;
    if (cnd_) { goto L_08A2B8E4; }
    goto L_08A2B634;
L_08A2B634:;
    cnd_ = v1 == v0;
    v0 = 20;
    if (cnd_) { goto L_08A2B8E4; }
    goto L_08A2B63C;
L_08A2B63C:;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_08A2B8E4; }
    goto L_08A2B644;
L_08A2B644:;
    cnd_ = v1 == v0;
    a0 = D_08C2D184 - (-11900);
    if (cnd_) { goto L_08A2B8E4; }
    goto L_08A2B64C;
L_08A2B64C:;
    v0 = 14;
    cnd_ = v1 == v0;
    ST32(a0-11900, 0);
    if (cnd_) { goto L_08A2B720; }
    goto L_08A2B658;
L_08A2B658:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = D_08C28F50 - (-28848);
    if (cnd_) { goto L_08A2B724; }
    goto L_08A2B664;
L_08A2B664:;
    v0 = D_08C2933C - (-27844);
    goto L_08A2B668;
L_08A2B668:;
    v0 = v0 - 27844;
    v1 = D_08AEFA64 - (-1436);
    f2 = BITSF(LD32(v0+148));
    f3 = BITSF(LD32(v1-1436));
    v0 = v0 + 148;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f2, f3, 14);
    s1 = D_08C2D0DC - (-12068);
    s0 = s1 - 12068;
    cnd_ = fcc;
    ST32(s0+12, FBITS(f0));
    if (cnd_) { goto L_08A2B698; }
    goto L_08A2B694;
L_08A2B694:;
    f2 = f3;
    goto L_08A2B698;
L_08A2B698:;
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    ST32(s1-12068, FBITS(f2));
    if (cnd_) { goto L_08A2B6B0; }
    goto L_08A2B6AC;
L_08A2B6AC:;
    f1 = f3;
    goto L_08A2B6B0;
L_08A2B6B0:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    ST32(s0+4, FBITS(f1));
    if (cnd_) { goto L_08A2B6C8; }
    goto L_08A2B6C4;
L_08A2B6C4:;
    f0 = f3;
    goto L_08A2B6C8;
L_08A2B6C8:;
    f12 = f0 * f2;
    ST32(s0+8, FBITS(f0));
    a0 = 0 + 0;
    func_088D9DF0(a0, f12);
    goto L_08A2B6D8;
L_08A2B6D8:;
    f0 = BITSF(LD32(s1-12068));
    f12 = BITSF(LD32(s0+4));
    a0 = 1;
    f12 = f12 * f0;
    func_088D9DF0(a0, f12);
    goto L_08A2B6EC;
L_08A2B6EC:;
    sp = sp + 144;
    return;
L_08A2B720:;
    v0 = D_08C28F50 - (-28848);
    goto L_08A2B724;
L_08A2B724:;
    v1 = D_08B285B4 - (-31308);
    f1 = BITSF(LD32(v0-28848));
    f0 = BITSF(LD32(v1-31308));
    f2 = BITSF(LD32(a0-11900));
    f0 = f1 - f0;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_08A2B748; }
    goto L_08A2B748;
L_08A2B748:;
    v0 = D_08AEFA60 - (-1440);
    f1 = BITSF(LD32(v0-1440));
    f2 = BITSF(F2I(f0, 1));
    fcc = FCMP(f1, f0, 14);
    a0 = FBITS(f2);
    cnd_ = !fcc;
    v1 = 0x88880000u;
    if (cnd_) { goto L_08A2B778; }
    goto L_08A2B764;
L_08A2B764:;
    f0 = f0 - f1;
    v0 = 0x80000000u;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    a0 = a0 | v0;
    goto L_08A2B778;
L_08A2B778:;
    v1 = v1 | 0x8889;
    { u64 p_ = (u64)a0 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = hi;
    t0 = v1 >> 5;
    v0 = t0 << 4;
    v0 = v0 - t0;
    v0 = v0 << 2;
    cnd_ = a0 == 0;
    t1 = a0 - v0;
    if (cnd_) { goto L_08A2B8C0; }
    goto L_08A2B79C;
L_08A2B79C:;
    s2 = sp + 48;
    a1 = D_08AE1B70 - (7024);
    a1 = a1 + 7024;
    a0 = s2 + 0;
    a2 = 8;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B7B8;
L_08A2B7B8:;
    v0 = D_08C2932C - (-27860);
    goto L_08A2B7BC;
L_08A2B7BC:;
    v1 = LD_U8(v0-27860);
    s1 = 0x8ca20000u;
    s0 = 0xc2480000u;
    v1 = v1 ^ 0x1;
    s1 = s1 | 0x2260;
    cnd_ = v1 != 0;
    s0 = s0 | 0xcac8;
    if (cnd_) { goto L_08A2B804; }
    goto L_08A2B7D8;
L_08A2B7D8:;
    v0 = D_08C2932D - (-27859);
    v1 = LD_U8(v0-27859);
    s1 = 0x964c0000u;
    s0 = 0xcbf30000u;
    s1 = s1 | 0xcba0;
    cnd_ = v1 != 0;
    s0 = s0 | 0x7408;
    if (cnd_) { goto L_08A2B804; }
    goto L_08A2B7F4;
L_08A2B7F4:;
    s1 = 0xd4210000u;
    s0 = 0x9c80000u;
    s1 = s1 | 0x9756;
    s0 = s0 | 0x3fbe;
    goto L_08A2B804;
L_08A2B804:;
    v1 = LD32(s6-16908);
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 14;
    if (cnd_) { goto L_08A2B888; }
    goto L_08A2B814;
L_08A2B814:;
    cnd_ = v1 != v0;
    v0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A2B668; }
    goto L_08A2B81C;
L_08A2B81C:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    func_08A2CD78(a0, 0, 0, 0);
    goto L_08A2B828;
L_08A2B828:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    func_08A2DD50(a0);
    goto L_08A2B834;
L_08A2B834:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B840;
L_08A2B840:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2933C - (-27844); goto L_08A2B668; }
    goto L_08A2B848;
L_08A2B848:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    goto L_08A2B850;
L_08A2B850:;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B858;
L_08A2B858:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2B664; }
    goto L_08A2B860;
L_08A2B860:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2B868;
L_08A2B868:;
    v1 = 1002;
    cnd_ = v0 != v1;
    if (cnd_) { v0 = D_08C2933C - (-27844); goto L_08A2B668; }
    goto L_08A2B874;
L_08A2B874:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B880;
L_08A2B880:;
    v0 = D_08C2933C - (-27844);
    goto L_08A2B668;
L_08A2B888:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    func_08A2CD78(a0, 0, 0, 0);
    goto L_08A2B894;
L_08A2B894:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    func_08A2DD50(a0);
    goto L_08A2B8A0;
L_08A2B8A0:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2B8AC;
L_08A2B8AC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A2B664; }
    goto L_08A2B8B8;
L_08A2B8B8:;
    goto L_08A2B850;
L_08A2B8C0:;
    s2 = sp + 48;
    a1 = D_08AE1B84 - (7044);
    a1 = a1 + 7044;
    a0 = s2 + 0;
    a2 = 1;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B8DC;
L_08A2B8DC:;
    v0 = D_08C2932C - (-27860);
    goto L_08A2B7BC;
L_08A2B8E4:;
    v1 = D_08C2D184 - (-11900);
    f1 = BITSF(LD32(v1-11900));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = D_08B1C144 - (-16060);
    if (cnd_) { goto L_08A2B920; }
    goto L_08A2B900;
L_08A2B900:;
    v0 = LD_U8(a1-16060);
    cnd_ = v0 != 0;
    v0 = D_08AEFA5C - (-1444);
    if (cnd_) { goto L_08A2B924; }
    goto L_08A2B90C;
L_08A2B90C:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(v1-11900, FBITS(f0));
    goto L_08A2B664;
L_08A2B920:;
    v0 = D_08AEFA5C - (-1444);
    goto L_08A2B924;
L_08A2B924:;
    f0 = BITSF(LD32(v0-1444));
    a0 = fp - 11940;
    ST8(a1-16060, 0);
    s2 = sp + 64;
    ST32(v1-11900, FBITS(f0));
    { rv_t r_ = func_08AD134C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B93C;
L_08A2B93C:;
    v0 = D_08C2D170 - (-11920);
    a0 = v0 - 11920;
    { rv_t r_ = func_08AD134C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2B948;
L_08A2B948:;
    a1 = D_08C29F04 - (-24828);
    v0 = a1 - 24828;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+64, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+72, 0);
    cnd_ = a0 == 0;
    ST32(sp+68, 0);
    if (cnd_) { goto L_08A2B9BC; }
    goto L_08A2B970;
L_08A2B970:;
    a1 = LD32(a1-24828);
    a2 = a0 + 0;
    goto L_08A2B978;
L_08A2B978:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08A2B9AC; }
    goto L_08A2B990;
L_08A2B990:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+72); goto L_08A2B9C0; }
    goto L_08A2B9A0;
L_08A2B9A0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08A2B990; }
    goto L_08A2B9AC;
L_08A2B9AC:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08A2B978; }
    goto L_08A2B9BC;
L_08A2B9BC:;
    a0 = LD32(sp+72);
    goto L_08A2B9C0;
L_08A2B9C0:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A2BA1C; }
    goto L_08A2B9C8;
L_08A2B9C8:;
    s4 = 0x58d0000u;
    s3 = D_08C2B3A4 - (-19548);
    s7 = 0x8014;
    s4 = s4 | 0x13bf;
    s6 = ((u32)(uintptr_t)func_08A2E2E4) - (-7452);
    s0 = LD32(a0);
    goto L_08A2B9E0;
L_08A2B9E0:;
    a1 = 1;
    a0 = s2 + 0;
    func_08AD13BC(a0, a1);
    goto L_08A2B9EC;
L_08A2B9EC:;
    a0 = s0 + 0;
    v0 = func_0897E364(a0);
    goto L_08A2B9F4;
L_08A2B9F4:;
    a0 = s3 - 19548;
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_08A2BA48; }
    goto L_08A2BA00;
L_08A2BA00:;
    v0 = LD32(s0+72);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2BA48; }
    goto L_08A2BA10;
L_08A2BA10:;
    a0 = LD32(sp+72);
    goto L_08A2BA14;
L_08A2BA14:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08A2B9E0; }
    goto L_08A2BA1C;
L_08A2BA1C:;
    func_08A32698(a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2BA24;
L_08A2BA24:;
    a0 = LD32(sp+64);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2B664; }
    goto L_08A2BA38;
L_08A2BA38:;
    { u64 r_ = func_08AD1460(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BA40;
L_08A2BA40:;
    v0 = D_08C2933C - (-27844);
    goto L_08A2B668;
L_08A2BA48:;
    a1 = LD32(s0+4);
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BA50;
L_08A2BA50:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A2BA70; }
    goto L_08A2BA58;
L_08A2BA58:;
    a0 = LD32(v0);
    v0 = LD32(a0-16);
    v0 = a1 + v0;
    v1 = LD_U16(v0+8);
    cnd_ = v1 == s7;
    if (cnd_) { a0 = LD32(a0-12); goto L_08A2BAB4; }
    goto L_08A2BA70;
L_08A2BA70:;
    s1 = LD32(s0+64);
    goto L_08A2BA74;
L_08A2BA74:;
    v0 = LD32(s5-16056);
    a1 = s0 + 0;
    a0 = fp - 11940;
    cnd_ = s1 == v0;
    a2 = s6 - 7452;
    if (cnd_) { goto L_08A2BAA4; }
    goto L_08A2BA88;
L_08A2BA88:;
    a0 = v0 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BA90;
L_08A2BA90:;
    v1 = D_08C2D170 - (-11920);
    a1 = s0 + 0;
    a0 = v1 - 11920;
    cnd_ = s1 != v0;
    a2 = s6 - 7452;
    if (cnd_) { goto L_08A2BA10; }
    goto L_08A2BAA4;
L_08A2BAA4:;
    func_08AD11B8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2BAAC;
L_08A2BAAC:;
    a0 = LD32(sp+72);
    goto L_08A2BA14;
L_08A2BAB4:;
    a0 = a1 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08A2BAC0;
L_08A2BAC0:;
    cnd_ = v0 != s4;
    if (cnd_) { s1 = LD32(s0+64); goto L_08A2BA74; }
    goto L_08A2BAC8;
L_08A2BAC8:;
    a0 = LD32(sp+72);
    goto L_08A2BA14;
L_08A2BAD0:;
    { rv_t r_ = func_08A2A844(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BAD8;
L_08A2BAD8:;
    cnd_ = v0 == 0;
    v0 = D_08C2D0A8 - (-12120);
    if (cnd_) { goto L_08A2BAEC; }
    goto L_08A2BAE0;
L_08A2BAE0:;
    v1 = LD_U8(v0-12120);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s6-16908); goto L_08A2B628; }
    goto L_08A2BAEC;
L_08A2BAEC:;
    v0 = D_08AEFA50 - (-1456);
    f0 = BITSF(LD32(v0-1456));
    v1 = D_08B1C154 - (-16044);
    a0 = 0xc5810000u;
    ST32(v1-16044, FBITS(f0));
    v1 = D_08B1C15D - (-16035);
    a0 = a0 | 0x23d1;
    v0 = D_08C2D18C - (-11892);
    ST8(v1-16035, 0);
    v1 = D_08B1C13C - (-16068);
    ST8(v0-11892, 0);
    ST8(v1-16068, 0);
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BB20;
L_08A2BB20:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BB28;
L_08A2BB28:;
    v1 = LD32(s6-16908);
    goto L_08A2B628;
L_08A2BB30:;
    s0 = 0xb55a0000u;
    s3 = 0xc94f0000u;
    a0 = a0 | 0x2446;
    s0 = s0 | 0xa7bb;
    s3 = s3 | 0xa90c;
    goto L_08A2BB44;
L_08A2BB44:;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BB4C;
L_08A2BB4C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2B600; }
    goto L_08A2BB54;
L_08A2BB54:;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BB60;
L_08A2BB60:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2BB78; }
    goto L_08A2BB68;
L_08A2BB68:;
    v1 = LD32(s5-16056);
    v0 = v1 < 0x5u;
    cnd_ = v0 != 0;
    v0 = v1 << 4;
    if (cnd_) { goto L_08A2BC0C; }
    goto L_08A2BB78;
L_08A2BB78:;
    a0 = s2 + 0;
    goto L_08A2BB7C;
L_08A2BB7C:;
    a1 = s3 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BB84;
L_08A2BB84:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2B600; }
    goto L_08A2BB8C;
L_08A2BB8C:;
    a0 = LD32(s5-16056);
    v0 = a0 < 0x5u;
    cnd_ = v0 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_08A2B604; }
    goto L_08A2BB9C;
L_08A2BB9C:;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BBA4;
L_08A2BBA4:;
    a0 = LD32(s5-16056);
    s0 = v0 << 4;
    s0 = s0 + s7;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BBB4;
L_08A2BBB4:;
    v0 = v0 << 4;
    v0 = v0 + s7;
    f12 = BITSF(LD32(s0));
    f13 = BITSF(LD32(v0+4));
    a1 = 0 + 0;
    a0 = s1 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2BBD0;
L_08A2BBD0:;
    a0 = LD32(s5-16056);
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BBD8;
L_08A2BBD8:;
    a0 = LD32(s5-16056);
    s0 = v0 << 4;
    s0 = s0 + s7;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BBE8;
L_08A2BBE8:;
    v0 = v0 << 4;
    v0 = v0 + s7;
    f12 = BITSF(LD32(s0+8));
    f13 = BITSF(LD32(v0+12));
    a0 = s1 + 0;
    a1 = 1;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2BC04;
L_08A2BC04:;
    v0 = s4 < 0x4u;
    goto L_08A2B608;
L_08A2BC0C:;
    v0 = v0 + s7;
    f13 = BITSF(LD32(v0+4));
    f12 = BITSF(LD32(v0));
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2BC24;
L_08A2BC24:;
    v0 = LD32(s5-16056);
    a0 = s1 + 0;
    a1 = 1;
    v0 = v0 << 4;
    v0 = v0 + s7;
    f13 = BITSF(LD32(v0+12));
    f12 = BITSF(LD32(v0+8));
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2BC44;
L_08A2BC44:;
    a0 = s2 + 0;
    goto L_08A2BB7C;
L_08A2BC4C:;
    a0 = 0xc0f10000u;
    s0 = 0x4240000u;
    s3 = 0x8bc10000u;
    a0 = a0 | 0x53f6;
    s0 = s0 | 0x2a0b;
    s3 = s3 | 0xd75c;
    goto L_08A2BB44;
L_08A2BC68:;
    s0 = 0xb77b0000u;
    s3 = 0xc8240000u;
    a0 = a0 | 0x6b20;
    s0 = s0 | 0xe8a1;
    s3 = s3 | 0x4872;
    goto L_08A2BB44;
L_08A2BC80:;
    a0 = 0 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BC88;
L_08A2BC88:;
    ST32(s5-16056, v0);
    goto L_08A2B5A0;
L_08A2BC90:;
    v0 = 19;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s3-28868); goto L_08A2B568; }
    goto L_08A2BC9C;
L_08A2BC9C:;
    func_08A2B058();
    goto L_08A2BCA4;
L_08A2BCA4:;
    a0 = 19;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BCAC;
L_08A2BCAC:;
    a0 = 0x3b5e0000u;
    a0 = a0 | 0xa17f;
    goto L_08A2BCB4;
L_08A2BCB4:;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BCC0;
L_08A2BCC0:;
    v1 = LD32(s3-28868);
    goto L_08A2B568;
L_08A2BCC8:;
    cnd_ = v1 != v0;
    v1 = LD32(s3-28868);
    if (cnd_) { goto L_08A2B568; }
    goto L_08A2BCD0;
L_08A2BCD0:;
    v1 = LD32(s6-16908);
    v0 = 15;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s3-28868); goto L_08A2B568; }
    goto L_08A2BCE0;
L_08A2BCE0:;
    func_08A2B058();
    goto L_08A2BCE8;
L_08A2BCE8:;
    a0 = 15;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BCF0;
L_08A2BCF0:;
    a0 = 0xe44f0000u;
    a0 = a0 | 0xe2ba;
    goto L_08A2BCB4;
L_08A2BCFC:;
    v1 = LD32(s6-16908);
    v0 = 20;
    cnd_ = v1 == v0;
    s0 = D_08B1C154 - (-16044);
    if (cnd_) { goto L_08A2BD3C; }
    goto L_08A2BD0C;
L_08A2BD0C:;
    func_08A2B058();
    goto L_08A2BD14;
L_08A2BD14:;
    v0 = D_08AEFA54 - (-1452);
    f0 = BITSF(LD32(v0-1452));
    a0 = 20;
    ST32(s0-16044, FBITS(f0));
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BD28;
L_08A2BD28:;
    a0 = 0xc0f10000u;
    a0 = a0 | 0x53f6;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BD3C;
L_08A2BD3C:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0-16044));
    f20 = BITSF(0);
    f0 = f0 - f1;
    fcc = FCMP(f20, f0, 14);
    f1 = f0;
    cnd_ = fcc;
    ST32(s0-16044, FBITS(f0));
    if (cnd_) { goto L_08A2BD64; }
    goto L_08A2BD60;
L_08A2BD60:;
    f1 = f20;
    goto L_08A2BD64;
L_08A2BD64:;
    a0 = 0xc0f10000u;
    v0 = D_08B1C154 - (-16044);
    a0 = a0 | 0x53f6;
    ST32(v0-16044, FBITS(f1));
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BD78;
L_08A2BD78:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2B564; }
    goto L_08A2BD80;
L_08A2BD80:;
    v0 = D_08AEFA58 - (-1448);
    v1 = D_08C28F48 - (-28856);
    f2 = BITSF(LD32(v0-1448));
    f0 = BITSF(LD32(v1-28856));
    f1 = f0 + f2;
    f0 = f1 + f2;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A2BDB0; }
    goto L_08A2BDA8;
L_08A2BDA8:;
    f0 = f1 - f2;
    f0 = BITSF(F2I(f0, 1));
    goto L_08A2BDB0;
L_08A2BDB0:;
    t0 = FBITS(f0);
    s2 = sp + 48;
    a1 = D_08AE1B88 - (7048);
    a1 = a1 + 7048;
    a2 = 256;
    a3 = 1;
    a0 = s2 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BDD0;
L_08A2BDD0:;
    a1 = 0x18c10000u;
    a1 = a1 | 0xd7fe;
    a0 = s0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BDE0;
L_08A2BDE0:;
    s1 = v0 + 0;
    v0 = D_08C2CF34 - (-12492);
    v1 = LD_U16(v0-12492);
    cnd_ = v1 != 0;
    a1 = v0 - 12492;
    if (cnd_) { goto L_08A2BE24; }
    goto L_08A2BDF4;
L_08A2BDF4:;
    cnd_ = s1 == 0;
    v1 = LD32(s3-28868);
    if (cnd_) { goto L_08A2B568; }
    goto L_08A2BDFC;
L_08A2BDFC:;
    a0 = s1 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2BE04;
L_08A2BE04:;
    v1 = 1002;
    cnd_ = v0 != v1;
    if (cnd_) { v1 = LD32(s3-28868); goto L_08A2B568; }
    goto L_08A2BE10;
L_08A2BE10:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BE1C;
L_08A2BE1C:;
    v1 = LD32(s3-28868);
    goto L_08A2B568;
L_08A2BE24:;
    a0 = s1 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BE2C;
L_08A2BE2C:;
    v1 = 1;
    v0 = D_08C2D09C - (-12132);
    ST8(v0-12132, v1);
    goto L_08A2B564;
L_08A2BE3C:;
    f0 = BITSF(LD32(v0-1456));
    s0 = D_08B1C154 - (-16044);
    v0 = 1;
    ST32(s0-16044, FBITS(f0));
    ST8(s2-12123, v0);
    v0 = func_08A2C024();
    goto L_08A2BE54;
L_08A2BE54:;
    ST8(s2-12123, v0);
    goto L_08A2B530;
L_08A2BE5C:;
    a0 = a0 | 0x9e15;
    func_08A2C950(a0);
    goto L_08A2BE64;
L_08A2BE64:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    func_08A2C950(a0);
    goto L_08A2BE70;
L_08A2BE70:;
    v0 = LD_U8(s2-12123);
    goto L_08A2B518;
L_08A2BE78:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    func_08A2C6F8(a0);
    goto L_08A2BE84;
L_08A2BE84:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    func_08A2C6F8(a0);
    goto L_08A2BE90;
L_08A2BE90:;
    func_08A2C140();
    goto L_08A2BE98;
L_08A2BE98:;
    v0 = D_08C291F8 - (-28168);
    a0 = LD32(v0-28168);
    v0 = func_08978738(a0);
    goto L_08A2BEA4;
L_08A2BEA4:;
    s0 = v0 + 0;
    v0 = LD32(s1-27864);
    cnd_ = v0 != 0;
    v0 = D_08C29324 - (-27868);
    if (cnd_) { goto L_08A2BEC0; }
    goto L_08A2BEB4;
L_08A2BEB4:;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    a0 = 354;
    if (cnd_) { goto L_08A2C014; }
    goto L_08A2BEC0;
L_08A2BEC0:;
    a0 = LD32(s1-27864);
    v0 = func_08973540(a0);
    goto L_08A2BEC8;
L_08A2BEC8:;
    cnd_ = s0 == 0;
    s7 = v0 + 0;
    if (cnd_) { goto L_08A2B500; }
    goto L_08A2BED0;
L_08A2BED0:;
    a0 = s0 + 0;
    v0 = func_08977398(a0);
    goto L_08A2BED8;
L_08A2BED8:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A2BEE4;
L_08A2BEE4:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    s4 = v0 + 0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BEF4;
L_08A2BEF4:;
    cnd_ = v0 == 0;
    a1 = 0x5a30000u;
    if (cnd_) { goto L_08A2BF24; }
    goto L_08A2BEFC;
L_08A2BEFC:;
    a0 = v0 + 0;
    a1 = a1 | 0xaa1d;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BF08;
L_08A2BF08:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2BF24; }
    goto L_08A2BF10;
L_08A2BF10:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2BF18;
L_08A2BF18:;
    v1 = 1002;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s1 + 0; goto L_08A2C004; }
    goto L_08A2BF24;
L_08A2BF24:;
    a0 = 0x30890000u;
    goto L_08A2BF28;
L_08A2BF28:;
    a0 = a0 | 0xe67d;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BF30;
L_08A2BF30:;
    cnd_ = v0 == 0;
    a1 = 0x46290000u;
    if (cnd_) { goto L_08A2BF60; }
    goto L_08A2BF38;
L_08A2BF38:;
    a0 = v0 + 0;
    a1 = a1 | 0x4c85;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BF44;
L_08A2BF44:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2BF60; }
    goto L_08A2BF4C;
L_08A2BF4C:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2BF54;
L_08A2BF54:;
    v1 = 1002;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s1 + 0; goto L_08A2BFF4; }
    goto L_08A2BF60;
L_08A2BF60:;
    a0 = 0x636b0000u;
    goto L_08A2BF64;
L_08A2BF64:;
    a0 = a0 | 0x2446;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BF6C;
L_08A2BF6C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2B500; }
    goto L_08A2BF74;
L_08A2BF74:;
    a1 = 0xdbc70000u;
    a0 = v0 + 0;
    a1 = a1 | 0x48e;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BF84;
L_08A2BF84:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2BFA0; }
    goto L_08A2BF8C;
L_08A2BF8C:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2BF94;
L_08A2BF94:;
    v1 = 1002;
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A2BFE4; }
    goto L_08A2BFA0;
L_08A2BFA0:;
    a1 = 0xdbca0000u;
    goto L_08A2BFA4;
L_08A2BFA4:;
    a0 = s0 + 0;
    a1 = a1 | 0x193d;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2BFB0;
L_08A2BFB0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2B500; }
    goto L_08A2BFB8;
L_08A2BFB8:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2BFC0;
L_08A2BFC0:;
    v1 = 1002;
    cnd_ = v0 != v1;
    v1 = D_08C2D0AC - (-12116);
    if (cnd_) { goto L_08A2B504; }
    goto L_08A2BFCC;
L_08A2BFCC:;
    cnd_ = s7 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A2B504; }
    goto L_08A2BFD4;
L_08A2BFD4:;
    a1 = s7 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BFDC;
L_08A2BFDC:;
    v1 = D_08C2D0AC - (-12116);
    goto L_08A2B504;
L_08A2BFE4:;
    a1 = s4 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BFEC;
L_08A2BFEC:;
    a1 = 0xdbca0000u;
    goto L_08A2BFA4;
L_08A2BFF4:;
    a1 = s4 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2BFFC;
L_08A2BFFC:;
    a0 = 0x636b0000u;
    goto L_08A2BF64;
L_08A2C004:;
    a1 = s4 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C00C;
L_08A2C00C:;
    a0 = 0x30890000u;
    goto L_08A2BF28;
L_08A2C014:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A2C01C;
L_08A2C01C:;
    goto L_08A2BEC8;
}

/* 08A2C024 */
u32 func_08A2C024(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2C024:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    s0 = LD32(v0-15392);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2C058; }
    goto L_08A2C044;
L_08A2C044:;
    v0 = LD32(s0+4);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A2C06C; }
    goto L_08A2C054;
L_08A2C054:;
    v0 = 0 + 0;
    goto L_08A2C058;
L_08A2C058:;
    sp = sp + 16;
    return v0;
L_08A2C06C:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08A2C124; }
    goto L_08A2C07C;
L_08A2C07C:;
    s1 = D_08B1C148 - (-16056);
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C084;
L_08A2C084:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2C114; }
    goto L_08A2C08C;
L_08A2C08C:;
    func_08A2B058();
    goto L_08A2C094;
L_08A2C094:;
    a1 = LD32(s1-16056);
    a3 = 1;
    v0 = D_08B1C13C - (-16068);
    ST8(v0-16068, a3);
    v1 = D_08B1C15D - (-16035);
    v0 = 4;
    cnd_ = a1 == v0;
    ST8(v1-16035, a3);
    if (cnd_) { goto L_08A2C0CC; }
    goto L_08A2C0B4;
L_08A2C0B4:;
    v0 = D_08C2D18C - (-11892);
    a0 = s0 + 0;
    ST8(v0-11892, 0);
    v0 = func_08A09190(a0, a1, 0, 0);
    goto L_08A2C0C4;
L_08A2C0C4:;
    v0 = 1;
    goto L_08A2C058;
L_08A2C0CC:;
    a0 = 0x636b0000u;
    a0 = a0 | 0x2446;
    a1 = 1;
    a2 = 1;
    v0 = D_08C2D18C - (-11892);
    ST8(v0-11892, a3);
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C0E8;
L_08A2C0E8:;
    a0 = 1;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C0F0;
L_08A2C0F0:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08A2C058; }
    goto L_08A2C104;
L_08A2C104:;
    a0 = 1;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C10C;
L_08A2C10C:;
    v0 = 1;
    goto L_08A2C058;
L_08A2C114:;
    a0 = 0 + 0;
    v0 = func_08A3CC7C(a0);
    goto L_08A2C11C;
L_08A2C11C:;
    ST32(s1-16056, v0);
    goto L_08A2C08C;
L_08A2C124:;
    v1 = LD32(v0-17572);
    s1 = D_08B1C148 - (-16056);
    cnd_ = v1 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A2C11C; }
    goto L_08A2C134;
L_08A2C134:;
    s1 = D_08B1C148 - (-16056);
    ST32(s1-16056, 0);
    goto L_08A2C08C;
}

/* 08A2C140 */
void func_08A2C140(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A2C140:;
    a0 = 0xbf670000u;
    sp = sp - 64;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C16C;
L_08A2C16C:;
    cnd_ = v0 != 0;
    v0 = D_08C2B890 - (-18288);
    if (cnd_) { goto L_08A2C198; }
    goto L_08A2C174;
L_08A2C174:;
    goto L_08A2C178;
L_08A2C178:;
    sp = sp + 64;
    return;
L_08A2C198:;
    s0 = v0 - 18288;
    v1 = LD32(s0+8);
    s1 = sp + 16;
    a0 = s1 + 0;
    v1 = v1 + 1;
    a1 = 1;
    ST32(s0+8, v1);
    ST32(sp+16, s0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C1C4;
L_08A2C1C4:;
    v0 = D_08C2CEE4 - (-12572);
    f5 = BITSF(LD32(v0-12572));
    f3 = BITSF(0);
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    v0 = v0 - 12572;
    if (cnd_) { goto L_08A2C3B4; }
    goto L_08A2C1E0;
L_08A2C1E0:;
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s0+12); goto L_08A2C26C; }
    goto L_08A2C1F4;
L_08A2C1F4:;
    v0 = D_08AEFA68 - (-1432);
    f0 = BITSF(LD32(v0-1432));
    v1 = D_08AEFA6C - (-1428);
    v0 = D_08C2CEEC - (-12564);
    f0 = f0 / f1;
    f4 = BITSF(LD32(v1-1428));
    f1 = BITSF(LD32(v0-12564));
    v1 = v0 - 12564;
    v0 = D_08C2D0D0 - (-12080);
    ST32(v0-12080, FBITS(f1));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+4));
    v1 = v0 - 12080;
    ST32(v1+8, FBITS(f2));
    v0 = D_08C2D0C0 - (-12096);
    ST32(v1+4, FBITS(f3));
    v1 = D_08C2D0C4 - (-12092);
    f1 = f4 / f5;
    f0 = f0 * f4;
    ST32(v0-12096, FBITS(f1));
    ST32(v1-12092, FBITS(f0));
    goto L_08A2C248;
L_08A2C248:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2C174; }
    goto L_08A2C25C;
L_08A2C25C:;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C264;
L_08A2C264:;
    goto L_08A2C178;
L_08A2C26C:;
    cnd_ = (s32)v0 <= 0;
    a0 = LD32(sp+24);
    if (cnd_) { goto L_08A2C248; }
    goto L_08A2C274;
L_08A2C274:;
    f22 = f3;
    f20 = f3;
    f23 = f3;
    cnd_ = a0 != 0;
    f21 = f3;
    if (cnd_) { goto L_08A2C300; }
    goto L_08A2C288;
L_08A2C288:;
    a0 = s1 + 0;
    goto L_08A2C28C;
L_08A2C28C:;
    a1 = 1;
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C29C;
L_08A2C29C:;
    f2 = f20 - f21;
    v0 = D_08AEFA68 - (-1432);
    f1 = BITSF(LD32(v0-1432));
    f3 = f22 - f23;
    v0 = FBITS(f2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = D_08AEFA70 - (-1424);
    f2 = BITSF(LD32(v0-1424));
    v0 = FBITS(f3);
    f1 = f1 / f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    v0 = D_08C2D0D0 - (-12080);
    v1 = v0 - 12080;
    ST32(v0-12080, 0);
    v0 = D_08C2D0C0 - (-12096);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    v1 = D_08C2D0C4 - (-12092);
    f0 = f2 / f0;
    f1 = f1 * f2;
    ST32(v0-12096, FBITS(f0));
    ST32(v1-12092, FBITS(f1));
    goto L_08A2C248;
L_08A2C300:;
    a0 = LD32(a0);
    goto L_08A2C304;
L_08A2C304:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C320;
L_08A2C320:;
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f23, f1, 14);
    f5 = f23;
    f3 = f22;
    f6 = f21;
    f2 = f20;
    a0 = s1 + 0;
    a1 = 1;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_08A2C35C; }
    goto L_08A2C358;
L_08A2C358:;
    f5 = f1;
    goto L_08A2C35C;
L_08A2C35C:;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    f23 = f5;
    if (cnd_) { goto L_08A2C370; }
    goto L_08A2C36C;
L_08A2C36C:;
    f3 = f1;
    goto L_08A2C370;
L_08A2C370:;
    fcc = FCMP(f6, f4, 14);
    cnd_ = fcc;
    f22 = f3;
    if (cnd_) { goto L_08A2C384; }
    goto L_08A2C380;
L_08A2C380:;
    f6 = f4;
    goto L_08A2C384;
L_08A2C384:;
    fcc = FCMP(f4, f2, 14);
    cnd_ = fcc;
    f21 = f6;
    if (cnd_) { goto L_08A2C398; }
    goto L_08A2C394;
L_08A2C394:;
    f2 = f4;
    goto L_08A2C398;
L_08A2C398:;
    f20 = f2;
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C3A0;
L_08A2C3A0:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08A2C304; }
    goto L_08A2C3AC;
L_08A2C3AC:;
    a0 = s1 + 0;
    goto L_08A2C28C;
L_08A2C3B4:;
    f1 = BITSF(LD32(v0+4));
    goto L_08A2C1F4;
}

/* 08A2C3BC */
void func_08A2C3BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A2C3BC:;
    v0 = 0x45490000u;
    sp = sp - 80;
    v0 = v0 | 0x1426;
    s5 = 0 + 0;
    s4 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A2C6DC; }
    goto L_08A2C404;
L_08A2C404:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0x5d020000u;
    if (cnd_) { goto L_08A2C68C; }
    goto L_08A2C410;
L_08A2C410:;
    v0 = 0x25dc0000u;
    v0 = v0 | 0x4ae2;
    cnd_ = a0 == v0;
    a0 = 0x338a0000u;
    if (cnd_) { goto L_08A2C454; }
    goto L_08A2C420;
L_08A2C420:;
    goto L_08A2C424;
L_08A2C424:;
    goto L_08A2C428;
L_08A2C428:;
    sp = sp + 80;
    return;
L_08A2C454:;
    s2 = 0x64240000u;
    s3 = 0x205f0000u;
    a0 = a0 | 0x2c7e;
    s2 = s2 | 0x1b93;
    s3 = s3 | 0x5567;
    goto L_08A2C468;
L_08A2C468:;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C470;
L_08A2C470:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2C420; }
    goto L_08A2C478;
L_08A2C478:;
    a1 = s2 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C484;
L_08A2C484:;
    a1 = s3 + 0;
    a0 = s1 + 0;
    s6 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C494;
L_08A2C494:;
    s7 = v0 + 0;
    v0 = 0x45490000u;
    v0 = v0 | 0x1426;
    s3 = 0 + 0;
    s2 = 0 + 0;
    cnd_ = s0 == v0;
    fp = 0 + 0;
    if (cnd_) { goto L_08A2C4CC; }
    goto L_08A2C4B0;
L_08A2C4B0:;
    v0 = v0 < s0;
    cnd_ = v0 != 0;
    v0 = 0x5d020000u;
    if (cnd_) { goto L_08A2C640; }
    goto L_08A2C4BC;
L_08A2C4BC:;
    v0 = 0x25dc0000u;
    v0 = v0 | 0x4ae2;
    goto L_08A2C4C4;
L_08A2C4C4:;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_08A2C424; }
    goto L_08A2C4CC;
L_08A2C4CC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C4D8;
L_08A2C4D8:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A2C4F4; }
    goto L_08A2C4E0;
L_08A2C4E0:;
    a0 = v0 + 0;
    s3 = LD32(v0+240);
    v0 = func_08895E68(a0);
    goto L_08A2C4EC;
L_08A2C4EC:;
    fp = LD32(s4+252);
    s2 = v0 + 0;
    goto L_08A2C4F4;
L_08A2C4F4:;
    v0 = 0 < s7;
    v1 = 0 < s6;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2C424; }
    goto L_08A2C508;
L_08A2C508:;
    v0 = 0 < s5;
    v1 = 0 < s4;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A2C428; }
    goto L_08A2C51C;
L_08A2C51C:;
    v0 = s3 < s2;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A2C428; }
    goto L_08A2C528;
L_08A2C528:;
    f1 = BITSF(s2);
    cnd_ = (s32)s2 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A2C624; }
    goto L_08A2C534;
L_08A2C534:;
    f1 = BITSF(s3);
    cnd_ = (s32)s3 < 0;
    f20 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A2C608; }
    goto L_08A2C540;
L_08A2C540:;
    f20 = f0 / f20;
    v0 = D_08AEFA74 - (-1420);
    f0 = BITSF(LD32(v0-1420));
    v0 = D_08AEFA78 - (-1416);
    a0 = s7 + 0;
    f20 = f20 * f0;
    f0 = BITSF(LD32(v0-1416));
    f20 = f20 + f0;
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C564;
L_08A2C564:;
    ST32(sp+4, v1);
    a0 = s6 + 0;
    f13 = BITSF(LD32(sp+4));
    ST32(sp, v0);
    f13 = f13 * f20;
    f12 = BITSF(LD32(sp));
    func_088801A8(a0, f12, f13);
    goto L_08A2C580;
L_08A2C580:;
    f0 = BITSF(LD32(sp+4));
    v0 = s3 - 1;
    f1 = BITSF(v0);
    f20 = f0 * f20;
    f13 = (float)(s32)FBITS(f1);
    cnd_ = (s32)v0 < 0;
    f0 = f0 - f20;
    if (cnd_) { goto L_08A2C5EC; }
    goto L_08A2C59C;
L_08A2C59C:;
    f1 = BITSF(fp);
    f13 = f0 / f13;
    a0 = LD32(s6);
    cnd_ = (s32)fp < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08A2C5D0; }
    goto L_08A2C5B0;
L_08A2C5B0:;
    f12 = BITSF(0);
    f13 = f13 * f0;
    v0 = LD32(a0+32);
    f14 = f12;
    t_ = v0;
    a0 = s6 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C5C8;
L_08A2C5C8:;
    goto L_08A2C424;
L_08A2C5D0:;
    v1 = fp >> 1;
    v0 = fp & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A2C5B0;
L_08A2C5EC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f13 = (float)(s32)FBITS(f1);
    f13 = f13 + f13;
    goto L_08A2C59C;
L_08A2C608:;
    v0 = s3 & 0x1;
    v1 = s3 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f20 = (float)(s32)FBITS(f1);
    f20 = f20 + f20;
    goto L_08A2C540;
L_08A2C624:;
    v1 = s2 >> 1;
    v0 = s2 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08A2C534;
L_08A2C640:;
    v0 = v0 | 0x17c0;
    cnd_ = s0 == v0;
    v0 = 0xceb60000u;
    if (cnd_) { goto L_08A2C654; }
    goto L_08A2C64C;
L_08A2C64C:;
    v0 = v0 | 0x5b46;
    goto L_08A2C4C4;
L_08A2C654:;
    a1 = 0x5d020000u;
    a0 = s1 + 0;
    a1 = a1 | 0x17c0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C664;
L_08A2C664:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_08A2C4F4; }
    goto L_08A2C66C;
L_08A2C66C:;
    s3 = LD32(v0+380);
    a0 = v0 + 0;
    v0 = func_0888FD54(a0);
    goto L_08A2C678;
L_08A2C678:;
    s2 = v0 + 0;
    v0 = D_08C2D1A0 - (-11872);
    fp = LD32(s5+392);
    ST32(v0-11872, s3);
    goto L_08A2C4F4;
L_08A2C68C:;
    v0 = v0 | 0x17c0;
    cnd_ = a0 == v0;
    v0 = 0xceb60000u;
    if (cnd_) { goto L_08A2C6C0; }
    goto L_08A2C698;
L_08A2C698:;
    a0 = 0x338a0000u;
    s2 = 0x37e30000u;
    s3 = 0xc4890000u;
    v0 = v0 | 0x5b46;
    a0 = a0 | 0x2c7e;
    s2 = s2 | 0x63cd;
    cnd_ = s0 != v0;
    s3 = s3 | 0x146d;
    if (cnd_) { goto L_08A2C420; }
    goto L_08A2C6B8;
L_08A2C6B8:;
    goto L_08A2C468;
L_08A2C6C0:;
    a0 = 0xe7ac0000u;
    s2 = 0xacd00000u;
    s3 = 0xed3a0000u;
    a0 = a0 | 0xf711;
    s2 = s2 | 0x59ef;
    s3 = s3 | 0xe28b;
    goto L_08A2C468;
L_08A2C6DC:;
    a0 = 0xc2380000u;
    s2 = 0x7a650000u;
    s3 = 0xd23e0000u;
    a0 = a0 | 0xe078;
    s2 = s2 | 0x1a70;
    s3 = s3 | 0x322a;
    goto L_08A2C468;
}

/* 08A2C6F8 */
void func_08A2C6F8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A2C6F8:;
    v0 = 0x30890000u;
    sp = sp - 96;
    v0 = v0 | 0xe67d;
    s5 = 0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A2C92C; }
    goto L_08A2C730;
L_08A2C730:;
    v0 = 0xbf670000u;
    v0 = v0 | 0x9e15;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2C770; }
    goto L_08A2C740;
L_08A2C740:;
    v0 = v1 + 0;
    sp = sp + 96;
    return;
L_08A2C770:;
    v0 = D_08AEFA7C - (-1412);
    v1 = D_08AEFA80 - (-1408);
    f20 = BITSF(LD32(v0-1412));
    f21 = BITSF(LD32(v1-1408));
    s0 = 0x1cce0000u;
    s3 = 0x501d0000u;
    s0 = s0 | 0x3d7f;
    s3 = s3 | 0x9098;
    goto L_08A2C790;
L_08A2C790:;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C798;
L_08A2C798:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2C834; }
    goto L_08A2C7A0;
L_08A2C7A0:;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C7AC;
L_08A2C7AC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2C800; }
    goto L_08A2C7B4;
L_08A2C7B4:;
    v0 = D_08C2CEE0 - (-12576);
    a0 = LD32(v0-12576);
    s4 = 0 + 0;
    v0 = func_0883AE54(a0);
    goto L_08A2C7C4;
L_08A2C7C4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2C7D8; }
    goto L_08A2C7CC;
L_08A2C7CC:;
    func_0883AEA0();
    goto L_08A2C7D4;
L_08A2C7D4:;
    s4 = LD32(s0+12);
    goto L_08A2C7D8;
L_08A2C7D8:;
    v1 = LD32(s1);
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C7E8;
L_08A2C7E8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_08A2C804; }
    goto L_08A2C7F0;
L_08A2C7F0:;
    v0 = s4 + 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A2C8FC; }
    goto L_08A2C800;
L_08A2C800:;
    v1 = LD32(s2);
    goto L_08A2C804;
L_08A2C804:;
    a0 = s2 + 0;
    v0 = LD32(v1+156);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C814;
L_08A2C814:;
    cnd_ = v0 != 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_08A2C8D4; }
    goto L_08A2C81C;
L_08A2C81C:;
    a1 = s3 + 0;
    v0 = LD32(v1+156);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C82C;
L_08A2C82C:;
    cnd_ = v0 == 0;
    v0 = D_08AEFA88 - (-1400);
    if (cnd_) { goto L_08A2C83C; }
    goto L_08A2C834;
L_08A2C834:;
    v1 = s5 + 0;
    goto L_08A2C740;
L_08A2C83C:;
    f0 = BITSF(LD32(v0-1400));
    a0 = 2004;
    a1 = sp + 0;
    ST32(sp+12, FBITS(f0));
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, FBITS(f0));
    v0 = func_0888A0E0(a0, a1, 0, 0, 0);
    goto L_08A2C85C;
L_08A2C85C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A2C834; }
    goto L_08A2C864;
L_08A2C864:;
    v0 = LD32(v0);
    a1 = D_08AE1B90 - (7056);
    a1 = a1 + 7056;
    v1 = LD32(v0+96);
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C87C;
L_08A2C87C:;
    a1 = 1;
    a2 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2C88C;
L_08A2C88C:;
    v0 = LD32(s1);
    f14 = BITSF(0);
    f12 = f20;
    v1 = LD32(v0+32);
    f13 = f21;
    t_ = v1;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C8A8;
L_08A2C8A8:;
    a2 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(a2+116);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C8BC;
L_08A2C8BC:;
    v1 = LD32(s1);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C8CC;
L_08A2C8CC:;
    v1 = s5 + 0;
    goto L_08A2C740;
L_08A2C8D4:;
    v0 = LD32(v1+136);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C8E0;
L_08A2C8E0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_08A2C81C; }
    goto L_08A2C8E8;
L_08A2C8E8:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    func_0888A704(a0, a1);
    goto L_08A2C8F4;
L_08A2C8F4:;
    v1 = LD32(s2);
    goto L_08A2C81C;
L_08A2C8FC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = LD32(v1+124);
    t_ = v0;
    s5 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C910;
L_08A2C910:;
    v1 = LD32(s1);
    ST32(v0+160, s4);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2C924;
L_08A2C924:;
    v1 = LD32(s2);
    goto L_08A2C804;
L_08A2C92C:;
    v0 = D_08AEFA84 - (-1404);
    v1 = D_08AEFA80 - (-1408);
    f20 = BITSF(LD32(v0-1404));
    f21 = BITSF(LD32(v1-1408));
    s0 = 0x95620000u;
    s3 = 0x8b0c0000u;
    s0 = s0 | 0xb5e7;
    s3 = s3 | 0x1930;
    goto L_08A2C790;
}

/* 08A2C950 */
void func_08A2C950(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A2C950:;
    v0 = 0x30890000u;
    sp = sp - 128;
    v0 = v0 | 0xe67d;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A2CB70; }
    goto L_08A2C994;
L_08A2C994:;
    v0 = 0xbf670000u;
    v0 = v0 | 0x9e15;
    cnd_ = a0 == v0;
    v0 = D_08AEFA8C - (-1396);
    if (cnd_) { goto L_08A2C9DC; }
    goto L_08A2C9A4;
L_08A2C9A4:;
    goto L_08A2C9A8;
L_08A2C9A8:;
    sp = sp + 128;
    return;
L_08A2C9DC:;
    v1 = D_08AEFA90 - (-1392);
    f20 = BITSF(LD32(v0-1396));
    f21 = BITSF(LD32(v1-1392));
    s3 = 0x55f10000u;
    s3 = s3 | 0xf71;
    goto L_08A2C9F0;
L_08A2C9F0:;
    v1 = D_08C2B890 - (-18288);
    v1 = v1 - 18288;
    v0 = LD32(v1+8);
    s4 = sp + 16;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a0 = s4 + 0;
    s1 = 0 + 0;
    ST32(sp+16, v1);
    s6 = D_08C2D0AC - (-12116);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CA28;
L_08A2CA28:;
    a0 = s0 + 0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CA30;
L_08A2CA30:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2CAE0; }
    goto L_08A2CA38;
L_08A2CA38:;
    a0 = LD32(sp+24);
    cnd_ = a0 == 0;
    v0 = 0xbf670000u;
    if (cnd_) { goto L_08A2CAE0; }
    goto L_08A2CA44;
L_08A2CA44:;
    v0 = v0 | 0x9e15;
    v0 = s0 ^ v0;
    s5 = D_08C2D0D0 - (-12080);
    s0 = v0 < 0x1u;
    fp = D_08C2D0C0 - (-12096);
    s7 = D_08C2D0C4 - (-12092);
    v1 = LD32(a0);
    goto L_08A2CA60;
L_08A2CA60:;
    cnd_ = v1 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A2CACC; }
    goto L_08A2CA68;
L_08A2CA68:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CA84;
L_08A2CA84:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    a1 = s3 + s1;
    a0 = s2 + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CAA8;
L_08A2CAA8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A2CAC8; }
    goto L_08A2CAB0;
L_08A2CAB0:;
    v0 = LD32(s6-12116);
    f14 = BITSF(0);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A2CB08; }
    goto L_08A2CAC4;
L_08A2CAC4:;
    s1 = s1 + 1;
    goto L_08A2CAC8;
L_08A2CAC8:;
    a0 = s4 + 0;
    goto L_08A2CACC;
L_08A2CACC:;
    a1 = 1;
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CAD4;
L_08A2CAD4:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08A2CA60; }
    goto L_08A2CAE0;
L_08A2CAE0:;
    a0 = LD32(sp+16);
    ST32(s6-12116, s1);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2C9A4; }
    goto L_08A2CAF8;
L_08A2CAF8:;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CB00;
L_08A2CB00:;
    goto L_08A2C9A8;
L_08A2CB08:;
    v0 = D_08C2D0D0 - (-12080);
    v0 = v0 - 12080;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s5-12080));
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(fp-12096));
    f12 = f12 - f0;
    f13 = f13 - f1;
    f3 = BITSF(LD32(s7-12092));
    v0 = LD32(v1);
    f12 = f12 * f2;
    f13 = f13 * f3;
    v1 = LD32(v0+32);
    f12 = f20 + f12;
    t_ = v1;
    f13 = f21 - f13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CB4C;
L_08A2CB4C:;
    v0 = s1 < 0x1u;
    v0 = v0 & s0;
    a0 = s2 + 0;
    cnd_ = v0 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08A2CAC4; }
    goto L_08A2CB60;
L_08A2CB60:;
    s1 = s1 + 1;
    f0 = func_08884FB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2CB68;
L_08A2CB68:;
    a0 = s4 + 0;
    goto L_08A2CACC;
L_08A2CB70:;
    v0 = D_08AEFA8C - (-1396);
    v1 = D_08AEFA90 - (-1392);
    f20 = BITSF(LD32(v0-1396));
    f21 = BITSF(LD32(v1-1392));
    s3 = 0xefeb0000u;
    s3 = s3 | 0xa409;
    goto L_08A2C9F0;
}

/* 08A2CB8C */
void func_08A2CB8C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A2CB8C:;
    sp = sp - 48;
    v0 = D_08B285B4 - (-31308);
    v1 = D_08C28F4C - (-28852);
    s0 = D_08C2D0A4 - (-12124);
    f0 = BITSF(LD32(v0-31308));
    f1 = BITSF(LD32(v1-28852));
    v0 = D_08C28F5C - (-28836);
    f2 = BITSF(LD32(v0-28836));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_08A2CBCC; }
    goto L_08A2CBC8;
L_08A2CBC8:;
    v1 = 0 + 0;
    goto L_08A2CBCC;
L_08A2CBCC:;
    a2 = D_08C2D0A8 - (-12120);
    v0 = v1 & 0xff;
    ST8(s0-12124, v1);
    a1 = a2 - 12120;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2CBF4; }
    goto L_08A2CBE4;
L_08A2CBE4:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = 1; goto L_08A2CBF4; }
    goto L_08A2CBF4;
L_08A2CBF4:;
    v0 = D_08C2C3E0 - (-15392);
    v1 = LD32(v0-15392);
    cnd_ = v1 == 0;
    ST8(a1, a0);
    if (cnd_) { goto L_08A2CD64; }
    goto L_08A2CC04;
L_08A2CC04:;
    v0 = LD32(v1+4);
    v0 = v0 ^ 0x6;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2CD64; }
    goto L_08A2CC14;
L_08A2CC14:;
    f1 = BITSF(LD32(v1+16));
    f0 = BITSF(0);
    v1 = D_08B1C154 - (-16044);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    ST32(v1-16044, FBITS(f1));
    if (cnd_) { goto L_08A2CC34; }
    goto L_08A2CC30;
L_08A2CC30:;
    ST8(a2-12120, 0);
    goto L_08A2CC34;
L_08A2CC34:;
    v0 = LD_U8(s0-12124);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2CD38; }
    goto L_08A2CC40;
L_08A2CC40:;
    v0 = D_08AEFA94 - (-1388);
    f3 = BITSF(LD32(v0-1388));
    f0 = BITSF(LD32(v1-16044));
    f1 = BITSF(0);
    f2 = f0 + f3;
    f0 = f2 + f3;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_08A2CC70; }
    goto L_08A2CC68;
L_08A2CC68:;
    f0 = f2 - f3;
    f0 = BITSF(F2I(f0, 1));
    goto L_08A2CC70;
L_08A2CC70:;
    v0 = FBITS(f0);
    t0 = 0 + 0;
    a1 = D_08AE1B88 - (7048);
    a0 = sp + 0;
    t0 = (s32)v0 > (s32)t0 ? v0 : t0;
    a1 = a1 + 7048;
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CC94;
L_08A2CC94:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CCA0;
L_08A2CCA0:;
    cnd_ = v0 == 0;
    a1 = 0xea350000u;
    if (cnd_) { goto L_08A2CCE4; }
    goto L_08A2CCA8;
L_08A2CCA8:;
    a0 = v0 + 0;
    a1 = a1 | 0x3654;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CCB4;
L_08A2CCB4:;
    cnd_ = v0 == 0;
    a1 = 0x85040000u;
    if (cnd_) { goto L_08A2CCE4; }
    goto L_08A2CCBC;
L_08A2CCBC:;
    a0 = v0 + 0;
    a1 = a1 | 0x1382;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CCC8;
L_08A2CCC8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2CCE4; }
    goto L_08A2CCD0;
L_08A2CCD0:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2CCD8;
L_08A2CCD8:;
    v1 = 1002;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s0 + 0; goto L_08A2CD54; }
    goto L_08A2CCE4;
L_08A2CCE4:;
    a0 = 0xc5810000u;
    goto L_08A2CCE8;
L_08A2CCE8:;
    a0 = a0 | 0x23d1;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CCF0;
L_08A2CCF0:;
    cnd_ = v0 == 0;
    a1 = 0x1b630000u;
    if (cnd_) { goto L_08A2CD34; }
    goto L_08A2CCF8;
L_08A2CCF8:;
    a0 = v0 + 0;
    a1 = a1 | 0xc410;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CD04;
L_08A2CD04:;
    cnd_ = v0 == 0;
    a1 = 0x10680000u;
    if (cnd_) { goto L_08A2CD34; }
    goto L_08A2CD0C;
L_08A2CD0C:;
    a0 = v0 + 0;
    a1 = a1 | 0xd646;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CD18;
L_08A2CD18:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2CD34; }
    goto L_08A2CD20;
L_08A2CD20:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2CD28;
L_08A2CD28:;
    v1 = 1002;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s0 + 0; goto L_08A2CD44; }
    goto L_08A2CD34;
L_08A2CD34:;
    goto L_08A2CD38;
L_08A2CD38:;
    sp = sp + 48;
    return;
L_08A2CD44:;
    a1 = sp + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CD4C;
L_08A2CD4C:;
    goto L_08A2CD38;
L_08A2CD54:;
    a1 = sp + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CD5C;
L_08A2CD5C:;
    a0 = 0xc5810000u;
    goto L_08A2CCE8;
L_08A2CD64:;
    { rv_t r_ = func_08973960(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CD6C;
L_08A2CD6C:;
    v1 = D_08B1C154 - (-16044);
    ST32(v1-16044, FBITS(f0));
    goto L_08A2CC34;
}

/* 08A2CD78 */
void func_08A2CD78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[512] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 512);
L_08A2CD78:;
    v0 = 0x30890000u;
    sp = sp - 512;
    v0 = v0 | 0xe67d;
    fp = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A2DD18; }
    goto L_08A2CDE4;
L_08A2CDE4:;
    v0 = 0xbf670000u;
    v0 = v0 | 0x9e15;
    cnd_ = a0 == v0;
    v0 = D_08AEFAA0 - (-1376);
    if (cnd_) { goto L_08A2CE54; }
    goto L_08A2CDF4;
L_08A2CDF4:;
    goto L_08A2CDF8;
L_08A2CDF8:;
    sp = sp + 512;
    return;
L_08A2CE54:;
    f24 = BITSF(LD32(v0-1376));
    v1 = D_08AEFA98 - (-1384);
    f26 = BITSF(LD32(v1-1384));
    s6 = 0x501d0000u;
    v0 = 0xf3670000u;
    v0 = v0 | 0xf26;
    s6 = s6 | 0x9098;
    f23 = f24;
    ST32(sp+400, 0);
    ST32(sp+404, v0);
    goto L_08A2CE7C;
L_08A2CE7C:;
    v0 = D_08AEFAC0 - (-1344);
    f1 = BITSF(LD32(v0-1344));
    v0 = D_08AE1BA8 - (7080);
    a1 = v0 + 7080;
    v0 = D_08AEFAB0 - (-1360);
    f0 = BITSF(LD32(v0-1360));
    v0 = D_08AEFAB4 - (-1356);
    v1 = D_08AEFAAC - (-1364);
    ST32(sp+272, FBITS(f0));
    a0 = D_08AEFAC4 - (-1340);
    a2 = 256;
    f0 = BITSF(LD32(v0-1356));
    v0 = D_08AEFAB8 - (-1352);
    f2 = BITSF(LD32(v1-1364));
    ST32(sp+276, FBITS(f0));
    v1 = D_08AE1BAC - (7084);
    t0 = v1 + 7084;
    f0 = BITSF(LD32(v0-1352));
    v0 = D_08AEFABC - (-1348);
    f3 = BITSF(LD32(a0-1340));
    ST32(sp+280, FBITS(f0));
    a0 = sp + 0;
    a3 = 1;
    f0 = BITSF(LD32(v0-1348));
    ST32(sp+268, FBITS(f2));
    ST32(sp+284, FBITS(f0));
    ST32(sp+296, FBITS(f1));
    ST32(sp+300, FBITS(f3));
    ST32(sp+256, 0);
    ST32(sp+260, 0);
    ST32(sp+264, FBITS(f2));
    ST32(sp+288, FBITS(f1));
    ST32(sp+292, FBITS(f1));
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CF04;
L_08A2CF04:;
    a0 = D_08C29F04 - (-24828);
    v1 = a0 - 24828;
    a0 = LD32(v1+12);
    v0 = 0 + 0;
    s3 = (s32)a0 > (s32)v0 ? a0 : v0;
    v0 = func_0897364C();
    goto L_08A2CF1C;
L_08A2CF1C:;
    cnd_ = v0 == 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A2DCF0; }
    goto L_08A2CF24;
L_08A2CF24:;
    s3 = s3 + 2;
    goto L_08A2CF28;
L_08A2CF28:;
    a0 = fp + 0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2CF30;
L_08A2CF30:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2CDF4; }
    goto L_08A2CF38;
L_08A2CF38:;
    v0 = LD32(sp+400);
    v1 = LD32(sp+400);
    a0 = D_08C2D10C - (-12020);
    v0 = v0 << 2;
    ST32(sp+408, v0);
    v0 = v0 + v1;
    v1 = v0 << 2;
    a1 = a0 - 12020;
    a0 = v1 + a1;
    v0 = LD32(a0+16);
    v0 = (s32)v0 < (s32)s3;
    cnd_ = v0 == 0;
    s5 = v1 + 0;
    if (cnd_) { goto L_08A2D014; }
    goto L_08A2CF6C;
L_08A2CF6C:;
    s7 = a1 + 0;
    s4 = a0 + 0;
    a0 = s2 + 0;
    goto L_08A2CF78;
L_08A2CF78:;
    a1 = s6 + 0;
    { rv_t r_ = func_0888818C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CF80;
L_08A2CF80:;
    f12 = BITSF(0);
    s1 = s5 + s7;
    a0 = v0 + 0;
    a1 = 0 + 0;
    f13 = f12;
    a2 = sp + 0;
    a3 = sp + 256;
    t0 = sp + 288;
    t1 = sp + 272;
    t2 = 1087;
    cnd_ = v0 == 0;
    t3 = 0 + 0;
    if (cnd_) { goto L_08A2D004; }
    goto L_08A2CFB0;
L_08A2CFB0:;
    v0 = func_08A2E5E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13);
    goto L_08A2CFB8;
L_08A2CFB8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 12;
    if (cnd_) { goto L_08A2D014; }
    goto L_08A2CFC4;
L_08A2CFC4:;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2DCE0; }
    goto L_08A2CFD0;
L_08A2CFD0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2CFD8;
L_08A2CFD8:;
    v1 = v0 + 0;
    goto L_08A2CFDC;
L_08A2CFDC:;
    v0 = LD32(s1);
    ST32(v1, s0);
    ST32(v1+4, 0);
    cnd_ = v0 == 0;
    ST32(v1+8, v0);
    if (cnd_) { goto L_08A2DCD8; }
    goto L_08A2CFF0;
L_08A2CFF0:;
    ST32(v0+4, v1);
    goto L_08A2CFF4;
L_08A2CFF4:;
    v0 = LD32(s1+16);
    ST32(s1, v1);
    v0 = v0 + 1;
    ST32(s1+16, v0);
    goto L_08A2D004;
L_08A2D004:;
    v0 = LD32(s4+16);
    v0 = (s32)v0 < (s32)s3;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A2CF78; }
    goto L_08A2D014;
L_08A2D014:;
    v1 = LD32(sp+408);
    a0 = LD32(sp+400);
    v0 = v1 + a0;
    a0 = D_08C2D10C - (-12020);
    v1 = a0 - 12020;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    ST32(sp+304, v0);
    ST32(sp+308, a0);
    s7 = sp + 320;
    v0 = D_08C29F04 - (-24828);
    v1 = v0 - 24828;
    v0 = LD32(v1+8);
    a0 = s7 + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s5 = sp + 336;
    ST32(sp+320, v1);
    ST32(sp+324, 0);
    ST32(sp+328, 0);
    func_08AD13BC(a0, a1);
    goto L_08A2D070;
L_08A2D070:;
    a1 = D_08C2B8E8 - (-18200);
    v0 = a1 - 18200;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+336, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+344, 0);
    cnd_ = a0 == 0;
    ST32(sp+340, 0);
    if (cnd_) { goto L_08A2D0E4; }
    goto L_08A2D098;
L_08A2D098:;
    a1 = LD32(a1-18200);
    a2 = a0 + 0;
    goto L_08A2D0A0;
L_08A2D0A0:;
    a0 = LD32(s5+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s5+8, v1);
    if (cnd_) { goto L_08A2D0D4; }
    goto L_08A2D0B8;
L_08A2D0B8:;
    v1 = LD32(s5+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08C2B928 - (-18136); goto L_08A2D0E8; }
    goto L_08A2D0C8;
L_08A2D0C8:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s5+8, v0);
    if (cnd_) { goto L_08A2D0B8; }
    goto L_08A2D0D4;
L_08A2D0D4:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s5+4, v0);
    if (cnd_) { goto L_08A2D0A0; }
    goto L_08A2D0E4;
L_08A2D0E4:;
    a1 = D_08C2B928 - (-18136);
    goto L_08A2D0E8;
L_08A2D0E8:;
    v0 = a1 - 18136;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+352, v0);
    v1 = v1 + 1;
    s4 = sp + 352;
    ST32(v0+8, v1);
    ST32(sp+360, 0);
    cnd_ = a0 == 0;
    ST32(sp+356, 0);
    if (cnd_) { goto L_08A2D15C; }
    goto L_08A2D110;
L_08A2D110:;
    a1 = LD32(a1-18136);
    a2 = a0 + 0;
    goto L_08A2D118;
L_08A2D118:;
    a0 = LD32(s4+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s4+8, v1);
    if (cnd_) { goto L_08A2D14C; }
    goto L_08A2D130;
L_08A2D130:;
    v1 = LD32(s4+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+308); goto L_08A2D160; }
    goto L_08A2D140;
L_08A2D140:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s4+8, v0);
    if (cnd_) { goto L_08A2D130; }
    goto L_08A2D14C;
L_08A2D14C:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s4+4, v0);
    if (cnd_) { goto L_08A2D118; }
    goto L_08A2D15C;
L_08A2D15C:;
    a0 = LD32(sp+308);
    goto L_08A2D160;
L_08A2D160:;
    s6 = sp + 304;
    cnd_ = a0 == 0;
    a1 = s6 + 0;
    if (cnd_) { goto L_08A2D400; }
    goto L_08A2D16C;
L_08A2D16C:;
    v1 = D_08AEFAC4 - (-1340);
    v0 = D_08AEFAE8 - (-1304);
    f28 = BITSF(LD32(v1-1340));
    f29 = BITSF(LD32(v0-1304));
    v1 = D_08AEFAEC - (-1300);
    v0 = D_08AEFAF0 - (-1296);
    f30 = BITSF(LD32(v1-1300));
    f31 = BITSF(LD32(v0-1296));
    goto L_08A2D18C;
L_08A2D18C:;
    s1 = LD32(a0);
    a0 = a1 + 0;
    func_08AD15B0(a0);
    goto L_08A2D198;
L_08A2D198:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A2D3F4; }
    goto L_08A2D1A0;
L_08A2D1A0:;
    a1 = 256;
    a2 = 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D1AC;
L_08A2D1AC:;
    v0 = LD32(sp+328);
    cnd_ = v0 == 0;
    a0 = s7 + 0;
    if (cnd_) { goto L_08A2D9F0; }
    goto L_08A2D1B8;
L_08A2D1B8:;
    s3 = LD32(v0);
    a1 = 1;
    func_08AD13BC(a0, a1);
    goto L_08A2D1C4;
L_08A2D1C4:;
    cnd_ = s3 == 0;
    a0 = D_08C2B3A4 - (-19548);
    if (cnd_) { goto L_08A2D3F4; }
    goto L_08A2D1CC;
L_08A2D1CC:;
    a1 = LD32(s3+4);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D1DC;
L_08A2D1DC:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2D3F4; }
    goto L_08A2D1E4;
L_08A2D1E4:;
    a1 = LD32(v0);
    v1 = 0x8014;
    v0 = LD32(a1-16);
    v0 = s2 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { a0 = LD32(a1-12); goto L_08A2D9CC; }
    goto L_08A2D200;
L_08A2D200:;
    v0 = LD32(s2+84);
    goto L_08A2D204;
L_08A2D204:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08A2D22C; }
    goto L_08A2D20C;
L_08A2D20C:;
    f0 = BITSF(LD32(v0+12));
    v0 = D_08B1BBA8 - (-17496);
    f1 = BITSF(LD32(v0-17496));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = LD32(sp+308);
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2D228;
L_08A2D228:;
    v0 = LD32(s2);
    goto L_08A2D22C;
L_08A2D22C:;
    f12 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = s2 + v1;
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f12, 14);
    cnd_ = fcc;
    a0 = LD32(sp+308);
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2D24C;
L_08A2D24C:;
    v0 = LD_U8(s2+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2D258;
L_08A2D258:;
    v0 = LD_U8(s2+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2D264;
L_08A2D264:;
    v0 = LD32(s3+68);
    a0 = D_08AEFAAC - (-1364);
    v1 = LD32(s3+72);
    f22 = BITSF(LD32(a0-1364));
    s0 = 12;
    a0 = v0 < 0xdu;
    if (a0 != 0) s0 = v0;
    v1 = (v1 >> 1) & 0x1;
    v0 = D_08AEFAC0 - (-1344);
    f25 = f12;
    f27 = BITSF(LD32(v0-1344));
    cnd_ = v1 != 0;
    f21 = f22;
    if (cnd_) { goto L_08A2D9C4; }
    goto L_08A2D298;
L_08A2D298:;
    v0 = D_08AEFAC8 - (-1336);
    v1 = D_08AEFACC - (-1332);
    f25 = BITSF(LD32(v0-1336));
    f21 = BITSF(LD32(v1-1332));
    v0 = D_08AEFAD0 - (-1328);
    v1 = D_08AEFAC4 - (-1340);
    f22 = BITSF(LD32(v0-1328));
    f27 = BITSF(LD32(v1-1340));
    goto L_08A2D2B8;
L_08A2D2B8:;
    a0 = D_08AE28DC - (10460);
    a0 = a0 + 10460;
    s0 = s0 << 4;
    s0 = s0 + a0;
    f12 = BITSF(LD32(s0));
    f13 = BITSF(LD32(s0+4));
    a1 = 0 + 0;
    a0 = s1 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2D2DC;
L_08A2D2DC:;
    f13 = BITSF(LD32(s0+12));
    f12 = BITSF(LD32(s0+8));
    a1 = 1;
    a0 = s1 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2D2F0;
L_08A2D2F0:;
    f12 = f21;
    f13 = f22;
    a0 = s1 + 0;
    func_088801A8(a0, f12, f13);
    goto L_08A2D300;
L_08A2D300:;
    a1 = 256;
    a2 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D310;
L_08A2D310:;
    v1 = LD32(s2);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D320;
L_08A2D320:;
    v1 = D_08AEFAD4 - (-1324);
    f20 = BITSF(LD32(v0));
    v1 = v1 - 1324;
    v0 = D_08C2D0D0 - (-12080);
    f0 = BITSF(LD32(v0-12080));
    f2 = BITSF(LD32(v1));
    v1 = LD32(s2);
    f20 = f20 - f0;
    f1 = f21 * f2;
    v0 = D_08C2D0C0 - (-12096);
    f2 = BITSF(LD32(v0-12096));
    v0 = LD32(v1+244);
    f20 = f20 - f1;
    a0 = s2 + 0;
    t_ = v0;
    f20 = f20 * f2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D360;
L_08A2D360:;
    v1 = D_08C2D0D0 - (-12080);
    a0 = D_08AEFAD4 - (-1324);
    v1 = v1 - 12080;
    a0 = a0 - 1324;
    f2 = BITSF(LD32(a0));
    f13 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+8));
    f1 = f22 * f2;
    v0 = D_08C2D0C4 - (-12092);
    f13 = f13 - f0;
    f2 = BITSF(LD32(v0-12092));
    v0 = LD32(s1);
    f20 = f23 + f20;
    f13 = f13 - f1;
    v1 = LD32(v0+32);
    f14 = BITSF(0);
    a0 = s1 + 0;
    f13 = f13 * f2;
    f12 = f20;
    t_ = v1;
    f13 = f24 - f13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D3B4;
L_08A2D3B4:;
    v1 = D_08B1C148 - (-16056);
    s0 = LD32(s3+64);
    a0 = LD32(v1-16056);
    cnd_ = s0 == a0;
    if (cnd_) { v0 = LD_U8(s2+195); goto L_08A2D98C; }
    goto L_08A2D3C8;
L_08A2D3C8:;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D3D0;
L_08A2D3D0:;
    cnd_ = s0 == v0;
    v0 = D_08AEFAC4 - (-1340);
    if (cnd_) { goto L_08A2D978; }
    goto L_08A2D3D8;
L_08A2D3D8:;
    f12 = f25;
    a0 = s1 + 0;
    f15 = f27;
    f13 = f25;
    goto L_08A2D3E8;
L_08A2D3E8:;
    f14 = f25;
    goto L_08A2D3EC;
L_08A2D3EC:;
    func_0888740C(a0, f12, f13, f14, f15);
    goto L_08A2D3F4;
L_08A2D3F4:;
    a0 = LD32(sp+308);
    goto L_08A2D3F8;
L_08A2D3F8:;
    cnd_ = a0 != 0;
    a1 = s6 + 0;
    if (cnd_) { goto L_08A2D18C; }
    goto L_08A2D400;
L_08A2D400:;
    v0 = func_0897364C();
    goto L_08A2D408;
L_08A2D408:;
    cnd_ = v0 != 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A2D584; }
    goto L_08A2D410;
L_08A2D410:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    v0 = D_08AEFB08 - (-1272);
    if (cnd_) { goto L_08A2D588; }
    goto L_08A2D420;
L_08A2D420:;
    s1 = LD32(sp+352);
    goto L_08A2D424;
L_08A2D424:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A2D4A8; }
    goto L_08A2D434;
L_08A2D434:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A2D4A8; }
    goto L_08A2D440;
L_08A2D440:;
    v0 = LD32(s1);
    goto L_08A2D444;
L_08A2D444:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A2D498; }
    goto L_08A2D458;
L_08A2D458:;
    v0 = LD_U8(s0+8);
    goto L_08A2D45C;
L_08A2D45C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A2D57C; }
    goto L_08A2D464;
L_08A2D464:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2D56C; }
    goto L_08A2D46C;
L_08A2D46C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A2D474;
L_08A2D474:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D480;
L_08A2D480:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A2D48C;
L_08A2D48C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A2D45C; }
    goto L_08A2D494;
L_08A2D494:;
    v1 = LD32(s1+4);
    goto L_08A2D498;
L_08A2D498:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2D444; }
    goto L_08A2D4A8;
L_08A2D4A8:;
    s1 = LD32(sp+336);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A2D530; }
    goto L_08A2D4BC;
L_08A2D4BC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A2D530; }
    goto L_08A2D4C8;
L_08A2D4C8:;
    v0 = LD32(s1);
    goto L_08A2D4CC;
L_08A2D4CC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A2D520; }
    goto L_08A2D4E0;
L_08A2D4E0:;
    v0 = LD_U8(s0+8);
    goto L_08A2D4E4;
L_08A2D4E4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A2D564; }
    goto L_08A2D4EC;
L_08A2D4EC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2D554; }
    goto L_08A2D4F4;
L_08A2D4F4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A2D4FC;
L_08A2D4FC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D508;
L_08A2D508:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A2D514;
L_08A2D514:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A2D4E4; }
    goto L_08A2D51C;
L_08A2D51C:;
    v1 = LD32(s1+4);
    goto L_08A2D520;
L_08A2D520:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2D4CC; }
    goto L_08A2D530;
L_08A2D530:;
    a0 = LD32(sp+320);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2CDF4; }
    goto L_08A2D544;
L_08A2D544:;
    { u64 r_ = func_08AD1460(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D54C;
L_08A2D54C:;
    goto L_08A2CDF8;
L_08A2D554:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A2D4FC;
L_08A2D564:;
    s0 = LD32(s0+4);
    goto L_08A2D514;
L_08A2D56C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A2D474;
L_08A2D57C:;
    s0 = LD32(s0+4);
    goto L_08A2D48C;
L_08A2D584:;
    v0 = D_08AEFB08 - (-1272);
    goto L_08A2D588;
L_08A2D588:;
    f2 = BITSF(LD32(v0-1272));
    v0 = D_08AE1BA8 - (7080);
    a1 = v0 + 7080;
    v0 = D_08AEFB0C - (-1268);
    f0 = BITSF(LD32(v0-1268));
    v0 = D_08AEFB10 - (-1264);
    a0 = D_08AEFAC0 - (-1344);
    ST32(sp+272, FBITS(f0));
    v1 = D_08AE1BAC - (7084);
    t0 = v1 + 7084;
    f0 = BITSF(LD32(v0-1264));
    v0 = D_08AEFB14 - (-1260);
    f1 = BITSF(LD32(a0-1344));
    ST32(sp+276, FBITS(f0));
    a2 = 256;
    a3 = 1;
    f0 = BITSF(LD32(v0-1260));
    v0 = D_08AEFB18 - (-1256);
    a0 = sp + 0;
    ST32(sp+280, FBITS(f0));
    s4 = D_08C2D134 - (-11980);
    s5 = D_08C2BDB8 - (-16968);
    f0 = BITSF(LD32(v0-1256));
    ST32(sp+268, FBITS(f2));
    ST32(sp+284, FBITS(f0));
    ST32(sp+300, FBITS(f1));
    ST32(sp+264, FBITS(f2));
    ST32(sp+288, FBITS(f1));
    ST32(sp+292, FBITS(f1));
    ST32(sp+296, FBITS(f1));
    ST32(sp+256, 0);
    ST32(sp+260, 0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D60C;
L_08A2D60C:;
    a0 = fp + 0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D614;
L_08A2D614:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2D68C; }
    goto L_08A2D61C;
L_08A2D61C:;
    a0 = LD32(sp+408);
    v1 = LD32(sp+400);
    a1 = s5 - 16968;
    v0 = a0 + v1;
    v0 = v0 << 2;
    v1 = s4 - 11980;
    a0 = v0 + v1;
    v0 = LD32(a0+16);
    v1 = LD32(a1+12);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_08A2D68C; }
    goto L_08A2D64C;
L_08A2D64C:;
    s1 = a0 + 0;
    a1 = LD32(s1+16);
    goto L_08A2D654;
L_08A2D654:;
    v0 = LD32(sp+404);
    a0 = s2 + 0;
    a1 = v0 + a1;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D664;
L_08A2D664:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A2D68C; }
    goto L_08A2D670;
L_08A2D670:;
    func_08AD152C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2D678;
L_08A2D678:;
    v0 = LD32(s1+16);
    v1 = LD32(s3+12);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+16); goto L_08A2D654; }
    goto L_08A2D68C;
L_08A2D68C:;
    v1 = LD32(sp+408);
    a0 = LD32(sp+400);
    s3 = sp + 368;
    ST32(sp+372, 0);
    v0 = v1 + a0;
    v0 = v0 << 2;
    v1 = s4 - 11980;
    v0 = v0 + v1;
    a0 = s3 + 0;
    ST32(sp+368, v0);
    func_08AD15B0(a0);
    goto L_08A2D6B8;
L_08A2D6B8:;
    v0 = s5 - 16968;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    s2 = sp + 384;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+384, v0);
    ST32(sp+388, 0);
    cnd_ = a0 == 0;
    ST32(sp+392, 0);
    if (cnd_) { goto L_08A2D72C; }
    goto L_08A2D6E0;
L_08A2D6E0:;
    a1 = LD32(s5-16968);
    a2 = a0 + 0;
    goto L_08A2D6E8;
L_08A2D6E8:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08A2D71C; }
    goto L_08A2D700;
L_08A2D700:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+372); goto L_08A2D730; }
    goto L_08A2D710;
L_08A2D710:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08A2D700; }
    goto L_08A2D71C;
L_08A2D71C:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08A2D6E8; }
    goto L_08A2D72C;
L_08A2D72C:;
    a0 = LD32(sp+372);
    goto L_08A2D730;
L_08A2D730:;
    cnd_ = a0 == 0;
    v0 = D_08AEFAC4 - (-1340);
    if (cnd_) { goto L_08A2D788; }
    goto L_08A2D738;
L_08A2D738:;
    f21 = BITSF(LD32(v0-1340));
    s6 = D_08C2D0D0 - (-12080);
    s7 = s6 - 12080;
    s5 = D_08AEFAF4 - (-1292);
    s1 = LD32(a0);
    goto L_08A2D74C;
L_08A2D74C:;
    a0 = s3 + 0;
    func_08AD15B0(a0);
    goto L_08A2D754;
L_08A2D754:;
    a0 = s1 + 0;
    a2 = 1;
    cnd_ = s1 == 0;
    a1 = 256;
    if (cnd_) { goto L_08A2D77C; }
    goto L_08A2D764;
L_08A2D764:;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D76C;
L_08A2D76C:;
    v0 = LD32(sp+392);
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A2D830; }
    goto L_08A2D77C;
L_08A2D77C:;
    a0 = LD32(sp+372);
    goto L_08A2D780;
L_08A2D780:;
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08A2D74C; }
    goto L_08A2D788;
L_08A2D788:;
    s1 = LD32(sp+384);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A2D420; }
    goto L_08A2D79C;
L_08A2D79C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A2D420; }
    goto L_08A2D7A8;
L_08A2D7A8:;
    v0 = LD32(s1);
    goto L_08A2D7AC;
L_08A2D7AC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A2D800; }
    goto L_08A2D7C0;
L_08A2D7C0:;
    v0 = LD_U8(s0+8);
    goto L_08A2D7C4;
L_08A2D7C4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08A2D828; }
    goto L_08A2D7CC;
L_08A2D7CC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2D818; }
    goto L_08A2D7D4;
L_08A2D7D4:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08A2D7DC;
L_08A2D7DC:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D7E8;
L_08A2D7E8:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08A2D7F4;
L_08A2D7F4:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08A2D7C4; }
    goto L_08A2D7FC;
L_08A2D7FC:;
    v1 = LD32(s1+4);
    goto L_08A2D800;
L_08A2D800:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2D7AC; }
    goto L_08A2D810;
L_08A2D810:;
    s1 = LD32(sp+352);
    goto L_08A2D424;
L_08A2D818:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08A2D7DC;
L_08A2D828:;
    s0 = LD32(s0+4);
    goto L_08A2D7F4;
L_08A2D830:;
    s0 = LD32(v0);
    s4 = D_08B1C148 - (-16056);
    { u64 r_ = func_08AC7140(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D83C;
L_08A2D83C:;
    a1 = 256;
    a2 = 0 + 0;
    cnd_ = s0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A2D77C; }
    goto L_08A2D84C;
L_08A2D84C:;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D854;
L_08A2D854:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D870;
L_08A2D870:;
    v1 = LD32(s0);
    f20 = BITSF(LD32(v0));
    f0 = BITSF(LD32(s6-12080));
    a0 = LD32(v1-12);
    v0 = D_08C2D0C0 - (-12096);
    f20 = f20 - f0;
    a0 = s0 + a0;
    v1 = LD32(a0);
    f0 = BITSF(LD32(v0-12096));
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f20 * f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D8A0;
L_08A2D8A0:;
    f13 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s7+8));
    v0 = D_08C2D0C4 - (-12092);
    f1 = BITSF(LD32(v0-12092));
    f13 = f13 - f0;
    v0 = LD32(s1);
    f20 = f26 + f20;
    f14 = BITSF(0);
    a1 = LD32(v0+32);
    v0 = D_08AEFA9C - (-1380);
    f13 = f13 * f1;
    v0 = v0 - 1380;
    f0 = BITSF(LD32(v0));
    f12 = f20;
    a0 = s1 + 0;
    t_ = a1;
    f13 = f0 - f13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D8E4;
L_08A2D8E4:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D8F4;
L_08A2D8F4:;
    f12 = BITSF(0);
    v1 = LD32(s4-16056);
    a0 = s0 + 0;
    cnd_ = v0 == v1;
    f13 = f12;
    if (cnd_) { goto L_08A2D964; }
    goto L_08A2D908;
L_08A2D908:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2D918;
L_08A2D918:;
    a0 = LD32(s4-16056);
    s0 = v0 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2D924;
L_08A2D924:;
    f13 = BITSF(0);
    a0 = s1 + 0;
    f12 = f21;
    cnd_ = s0 == v0;
    f14 = f13;
    if (cnd_) { goto L_08A2D954; }
    goto L_08A2D938;
L_08A2D938:;
    f15 = BITSF(LD32(s5-1292));
    a0 = s1 + 0;
    f13 = f21;
    goto L_08A2D944;
L_08A2D944:;
    func_0888740C(a0, f12, f13, f14, f15);
    goto L_08A2D94C;
L_08A2D94C:;
    a0 = LD32(sp+372);
    goto L_08A2D780;
L_08A2D954:;
    v1 = D_08AEFAC4 - (-1340);
    f12 = BITSF(LD32(v1-1340));
    f15 = BITSF(LD32(s5-1292));
    goto L_08A2D944;
L_08A2D964:;
    v0 = D_08AEFAC4 - (-1340);
    f14 = BITSF(LD32(v0-1340));
    f15 = BITSF(LD32(s5-1292));
    a0 = s1 + 0;
    goto L_08A2D944;
L_08A2D978:;
    f12 = BITSF(LD32(v0-1340));
    f13 = f25;
    a0 = s1 + 0;
    f15 = f27;
    goto L_08A2D3E8;
L_08A2D98C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AEFAC4 - (-1340); goto L_08A2D9AC; }
    goto L_08A2D994;
L_08A2D994:;
    a0 = s1 + 0;
    f14 = f25;
    f15 = f27;
    f12 = f28;
    f13 = f28;
    goto L_08A2D3EC;
L_08A2D9AC:;
    f14 = BITSF(LD32(a0-1340));
    f12 = f25;
    a0 = s1 + 0;
    f15 = f27;
    f13 = f25;
    goto L_08A2D3EC;
L_08A2D9C4:;
    s0 = 11;
    goto L_08A2D2B8;
L_08A2D9CC:;
    a0 = s2 + a0;
    a0 = a0 + 88;
    v0 = func_088D1C74(a0);
    goto L_08A2D9D8;
L_08A2D9D8:;
    v1 = 0x58d0000u;
    v1 = v1 | 0x13bf;
    cnd_ = v0 != v1;
    if (cnd_) { v0 = LD32(s2+84); goto L_08A2D204; }
    goto L_08A2D9E8;
L_08A2D9E8:;
    a0 = LD32(sp+308);
    goto L_08A2D3F8;
L_08A2D9F0:;
    v0 = func_0897364C();
    goto L_08A2D9F8;
L_08A2D9F8:;
    cnd_ = v0 == 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A2DB7C; }
    goto L_08A2DA00;
L_08A2DA00:;
    v0 = LD32(sp+344);
    cnd_ = v0 == 0;
    a0 = LD32(sp+308);
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2DA0C;
L_08A2DA0C:;
    s0 = LD32(v0);
    a0 = s5 + 0;
    a1 = 1;
    func_08AD15D4(a0, a1);
    goto L_08A2DA1C;
L_08A2DA1C:;
    v0 = 0 < s0;
    v1 = 0 < s1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+308); goto L_08A2D3F8; }
    goto L_08A2DA30;
L_08A2DA30:;
    v0 = D_08AEFADC - (-1316);
    v1 = D_08AEFAD8 - (-1320);
    f13 = BITSF(LD32(v0-1316));
    f12 = BITSF(LD32(v1-1320));
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2DA4C;
L_08A2DA4C:;
    v0 = D_08AEFAE0 - (-1312);
    v1 = D_08AEFAE4 - (-1308);
    f12 = BITSF(LD32(v0-1312));
    f13 = BITSF(LD32(v1-1308));
    a1 = 1;
    a0 = s1 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2DA68;
L_08A2DA68:;
    f12 = f29;
    f13 = f29;
    a0 = s1 + 0;
    func_088801A8(a0, f12, f13);
    goto L_08A2DA78;
L_08A2DA78:;
    a2 = 0 + 0;
    a1 = 256;
    a0 = s1 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DA88;
L_08A2DA88:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DAA4;
L_08A2DAA4:;
    f20 = BITSF(LD32(v0));
    v0 = LD32(s0);
    a0 = D_08C2D0D0 - (-12080);
    f0 = BITSF(LD32(a0-12080));
    a0 = LD32(v0-12);
    v1 = D_08C2D0C0 - (-12096);
    f20 = f20 - f0;
    a0 = s0 + a0;
    f1 = BITSF(LD32(v1-12096));
    v1 = LD32(a0);
    f20 = f20 - f30;
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f20 * f1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DADC;
L_08A2DADC:;
    a0 = D_08C2D0D0 - (-12080);
    a0 = a0 - 12080;
    f0 = BITSF(LD32(a0+8));
    f13 = BITSF(LD32(v0+8));
    v0 = D_08C2D0C4 - (-12092);
    f1 = BITSF(LD32(v0-12092));
    f13 = f13 - f0;
    v0 = LD32(s1);
    f20 = f23 + f20;
    f14 = BITSF(0);
    f13 = f13 - f30;
    a1 = LD32(v0+32);
    f12 = f20;
    a0 = s1 + 0;
    f13 = f13 * f1;
    t_ = a1;
    f13 = f24 - f13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DB20;
L_08A2DB20:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DB30;
L_08A2DB30:;
    a0 = D_08B1C148 - (-16056);
    v1 = LD32(a0-16056);
    cnd_ = v0 == v1;
    v0 = D_08AEFAF4 - (-1292);
    if (cnd_) { goto L_08A2DB5C; }
    goto L_08A2DB40;
L_08A2DB40:;
    a0 = D_08AEFAC4 - (-1340);
    f12 = BITSF(LD32(a0-1340));
    f15 = BITSF(LD32(v0-1292));
    a0 = s1 + 0;
    f13 = f31;
    f14 = f31;
    goto L_08A2D3EC;
L_08A2DB5C:;
    v0 = D_08AEFAC4 - (-1340);
    v1 = D_08AEFAF4 - (-1292);
    f14 = BITSF(LD32(v0-1340));
    f15 = BITSF(LD32(v1-1292));
    a0 = s1 + 0;
    f12 = f31;
    f13 = f31;
    goto L_08A2D3EC;
L_08A2DB7C:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 != v1;
    a0 = LD32(sp+308);
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2DB8C;
L_08A2DB8C:;
    v0 = LD32(sp+360);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2DB98;
L_08A2DB98:;
    s0 = LD32(v0);
    a0 = s4 + 0;
    a1 = 1;
    func_08ACEF54(a0, a1);
    goto L_08A2DBA8;
L_08A2DBA8:;
    v0 = 0 < s0;
    v1 = 0 < s1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = LD32(sp+308);
    if (cnd_) { goto L_08A2D3F8; }
    goto L_08A2DBBC;
L_08A2DBBC:;
    a0 = s0 + 0;
    { u64 r_ = func_089EB9D0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DBC4;
L_08A2DBC4:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+308); goto L_08A2D3F8; }
    goto L_08A2DBCC;
L_08A2DBCC:;
    v0 = LD32(s0+96);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+308); goto L_08A2D3F8; }
    goto L_08A2DBD8;
L_08A2DBD8:;
    v0 = LD_U8(s0+104);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+308); goto L_08A2D3F8; }
    goto L_08A2DBE4;
L_08A2DBE4:;
    v0 = D_08AEFAF8 - (-1288);
    v1 = D_08AEFAFC - (-1284);
    f12 = BITSF(LD32(v0-1288));
    f13 = BITSF(LD32(v1-1284));
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2DC00;
L_08A2DC00:;
    v0 = D_08AEFB00 - (-1280);
    v1 = D_08AEFB04 - (-1276);
    f12 = BITSF(LD32(v0-1280));
    f13 = BITSF(LD32(v1-1276));
    a1 = 1;
    a0 = s1 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2DC1C;
L_08A2DC1C:;
    f12 = f29;
    f13 = f29;
    a0 = s1 + 0;
    func_088801A8(a0, f12, f13);
    goto L_08A2DC2C;
L_08A2DC2C:;
    a1 = 256;
    a2 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DC3C;
L_08A2DC3C:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DC4C;
L_08A2DC4C:;
    v1 = D_08C2D0D0 - (-12080);
    f0 = BITSF(LD32(v1-12080));
    f20 = BITSF(LD32(v0));
    v1 = LD32(s0);
    a0 = D_08C2D0C0 - (-12096);
    f20 = f20 - f0;
    f1 = BITSF(LD32(a0-12096));
    v0 = LD32(v1+12);
    a0 = s0 + 0;
    f20 = f20 - f30;
    t_ = v0;
    f20 = f20 * f1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DC7C;
L_08A2DC7C:;
    f13 = BITSF(LD32(v0+8));
    v0 = D_08C2D0D0 - (-12080);
    v0 = v0 - 12080;
    f0 = BITSF(LD32(v0+8));
    v1 = D_08C2D0C4 - (-12092);
    f1 = BITSF(LD32(v1-12092));
    f13 = f13 - f0;
    v0 = LD32(s1);
    f20 = f23 + f20;
    f14 = BITSF(0);
    f13 = f13 - f30;
    v1 = LD32(v0+32);
    f12 = f20;
    a0 = s1 + 0;
    f13 = f13 * f1;
    t_ = v1;
    f13 = f24 - f13;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DCC0;
L_08A2DCC0:;
    f14 = BITSF(0);
    a0 = s1 + 0;
    f12 = f28;
    f13 = f28;
    f15 = f28;
    goto L_08A2D3EC;
L_08A2DCD8:;
    ST32(s1+4, v1);
    goto L_08A2CFF4;
L_08A2DCE0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DCE8;
L_08A2DCE8:;
    v1 = v0 + 0;
    goto L_08A2CFDC;
L_08A2DCF0:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 != v1;
    v0 = D_08C2B928 - (-18136);
    if (cnd_) { goto L_08A2CF28; }
    goto L_08A2DD00;
L_08A2DD00:;
    v0 = v0 - 18136;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2CF28; }
    goto L_08A2DD0C;
L_08A2DD0C:;
    v0 = LD32(v0+12);
    s3 = s3 + v0;
    goto L_08A2CF28;
L_08A2DD18:;
    v1 = D_08AEFAA0 - (-1376);
    v0 = D_08AEFAA4 - (-1372);
    f24 = BITSF(LD32(v1-1376));
    v1 = 0x80970000u;
    f26 = BITSF(LD32(v0-1372));
    a0 = 1;
    v0 = D_08AEFAA8 - (-1368);
    v1 = v1 | 0xfb8e;
    f23 = BITSF(LD32(v0-1368));
    ST32(sp+400, a0);
    s6 = 0x8b0c0000u;
    s6 = s6 | 0x1930;
    ST32(sp+404, v1);
    goto L_08A2CE7C;
}

/* 08A2DD50 */
void func_08A2DD50(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08A2DD50:;
    v0 = 0x30890000u;
    sp = sp - 160;
    v0 = v0 | 0xe67d;
    s3 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A2E2C8; }
    goto L_08A2DDA8;
L_08A2DDA8:;
    v0 = 0xbf670000u;
    v0 = v0 | 0x9e15;
    cnd_ = a0 == v0;
    v0 = D_08AEFB1C - (-1252);
    if (cnd_) { goto L_08A2DE04; }
    goto L_08A2DDB8;
L_08A2DDB8:;
    goto L_08A2DDBC;
L_08A2DDBC:;
    sp = sp + 160;
    return;
L_08A2DE04:;
    v1 = D_08AEFB20 - (-1248);
    f22 = BITSF(LD32(v0-1252));
    f26 = BITSF(LD32(v1-1248));
    s7 = 0x55f10000u;
    s7 = s7 | 0xf71;
    goto L_08A2DE18;
L_08A2DE18:;
    a0 = s3 + 0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DE20;
L_08A2DE20:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_08A2DDB8; }
    goto L_08A2DE28;
L_08A2DE28:;
    v1 = D_08C2B890 - (-18288);
    v1 = v1 - 18288;
    v0 = LD32(v1+8);
    fp = D_08C2D0B0 - (-12112);
    a0 = sp + 16;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    a1 = 1;
    s0 = 0 + 0;
    ST32(fp-12112, 0);
    ST32(sp+64, 0);
    ST32(sp+16, v1);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DE64;
L_08A2DE64:;
    a2 = LD32(sp+24);
    cnd_ = a2 == 0;
    v1 = D_08C2D0AC - (-12116);
    if (cnd_) { goto L_08A2DF14; }
    goto L_08A2DE70;
L_08A2DE70:;
    v0 = LD32(v1-12116);
    cnd_ = v0 == 0;
    v0 = D_08AEFB28 - (-1240);
    if (cnd_) { goto L_08A2DF18; }
    goto L_08A2DE7C;
L_08A2DE7C:;
    f25 = BITSF(LD32(v0-1240));
    v0 = D_08AEFB30 - (-1232);
    v1 = D_08AEFB2C - (-1236);
    f23 = BITSF(LD32(v0-1232));
    v0 = D_08AEFB38 - (-1224);
    f20 = BITSF(LD32(v1-1236));
    f21 = BITSF(LD32(v0-1224));
    v1 = D_08AEFB34 - (-1228);
    f24 = BITSF(LD32(v1-1228));
    v1 = D_08C2D190 - (-11888);
    s6 = v1 - 11888;
    a0 = sp + 16;
    goto L_08A2DEAC;
L_08A2DEAC:;
    a1 = 1;
    s1 = LD32(a2);
    { u64 r_ = func_08AC06EC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DEB8;
L_08A2DEB8:;
    a1 = s7 + s0;
    a0 = s5 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2DEC4;
L_08A2DEC4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2DEF0; }
    goto L_08A2DECC;
L_08A2DECC:;
    cnd_ = s1 == 0;
    a2 = LD32(sp+24);
    if (cnd_) { goto L_08A2DEF4; }
    goto L_08A2DED4;
L_08A2DED4:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s6, 0); goto L_08A2DEF0; }
    goto L_08A2DEE0;
L_08A2DEE0:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A2E08C; }
    goto L_08A2DEEC;
L_08A2DEEC:;
    ST8(s6, 0);
    goto L_08A2DEF0;
L_08A2DEF0:;
    a2 = LD32(sp+24);
    goto L_08A2DEF4;
L_08A2DEF4:;
    s0 = s0 + 1;
    cnd_ = a2 == 0;
    s6 = s6 + 1;
    if (cnd_) { goto L_08A2DF14; }
    goto L_08A2DF00;
L_08A2DF00:;
    a0 = D_08C2D0AC - (-12116);
    v0 = LD32(a0-12116);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a0 = sp + 16;
    if (cnd_) { goto L_08A2DEAC; }
    goto L_08A2DF14;
L_08A2DF14:;
    v1 = D_08C2D0AC - (-12116);
    goto L_08A2DF18;
L_08A2DF18:;
    v0 = s0 < 0x8u;
    cnd_ = v0 == 0;
    ST32(v1-12116, s0);
    if (cnd_) { goto L_08A2DF40; }
    goto L_08A2DF24;
L_08A2DF24:;
    v0 = D_08C2D190 - (-11888);
    a0 = v0 - 11888;
    goto L_08A2DF2C;
L_08A2DF2C:;
    v1 = s0 + a0;
    s0 = s0 + 1;
    v0 = s0 < 0x8u;
    cnd_ = v0 != 0;
    ST8(v1, 0);
    if (cnd_) { goto L_08A2DF2C; }
    goto L_08A2DF40;
L_08A2DF40:;
    v0 = 0xbf670000u;
    v0 = v0 | 0x9e15;
    cnd_ = s3 == v0;
    if (cnd_) { v1 = LD32(fp-12112); goto L_08A2DF74; }
    goto L_08A2DF50;
L_08A2DF50:;
    a0 = LD32(sp+16);
    goto L_08A2DF54;
L_08A2DF54:;
    v0 = LD32(a0+8);
    goto L_08A2DF58;
L_08A2DF58:;
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2DDB8; }
    goto L_08A2DF64;
L_08A2DF64:;
    { u64 r_ = func_08AC0790(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2DF6C;
L_08A2DF6C:;
    goto L_08A2DDBC;
L_08A2DF74:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A2E07C; }
    goto L_08A2DF7C;
L_08A2DF7C:;
    s5 = LD32(s5+156);
    cnd_ = v1 == v0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A2E060; }
    goto L_08A2DF88;
L_08A2DF88:;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A2E02C; }
    goto L_08A2DF90;
L_08A2DF90:;
    v0 = D_08C2D0EC - (-12052);
    s3 = v0 - 12052;
    s6 = D_08C2D0B0 - (-12112);
    goto L_08A2DF9C;
L_08A2DF9C:;
    v1 = LD32(fp-12112);
    s0 = s2 + 1;
    s1 = s2 << 2;
    { u32 x_ = s0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s1 = s1 + s3;
    a0 = LD32(s1);
    a1 = 2;
    v0 = hi;
    v0 = v0 << 2;
    v0 = v0 + s3;
    v1 = LD32(v0);
    a2 = LD32(v1+144);
    func_0888CD28(a0, a1, a2);
    goto L_08A2DFD0;
L_08A2DFD0:;
    a2 = LD32(fp-12112);
    a0 = LD32(s1);
    a1 = 3;
    v0 = a2 + s2;
    v0 = v0 - 1;
    { u32 x_ = v0, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s2 = s0 + 0;
    v1 = hi;
    v1 = v1 << 2;
    v1 = v1 + s3;
    v0 = LD32(v1);
    a2 = LD32(v0+144);
    func_0888CD28(a0, a1, a2);
    goto L_08A2E004;
L_08A2E004:;
    v1 = LD32(s1);
    a0 = LD32(s6-12112);
    v0 = LD32(v1+144);
    a0 = s0 < a0;
    v1 = 1;
    v0 = v0 ^ s5;
    cnd_ = a0 != 0;
    if (v0 == 0) s4 = v1;
    if (cnd_) { goto L_08A2DF9C; }
    goto L_08A2E024;
L_08A2E024:;
    cnd_ = s4 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08A2DF54; }
    goto L_08A2E02C;
L_08A2E02C:;
    func_08A32C84();
    goto L_08A2E034;
L_08A2E034:;
    v0 = LD32(sp+64);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08C2D0EC - (-12052); goto L_08A2E054; }
    goto L_08A2E040;
L_08A2E040:;
    a0 = LD32(v0+144);
    goto L_08A2E044;
L_08A2E044:;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E04C;
L_08A2E04C:;
    a0 = LD32(sp+16);
    goto L_08A2DF54;
L_08A2E054:;
    v1 = LD32(v0-12052);
    a0 = LD32(v1+144);
    goto L_08A2E044;
L_08A2E060:;
    v0 = D_08C2D0EC - (-12052);
    v1 = LD32(v0-12052);
    a0 = LD32(v1+144);
    cnd_ = a0 != s5;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08A2E02C; }
    goto L_08A2E074;
L_08A2E074:;
    v0 = LD32(a0+8);
    goto L_08A2DF58;
L_08A2E07C:;
    func_08A32C84();
    goto L_08A2E084;
L_08A2E084:;
    a0 = LD32(sp+16);
    goto L_08A2DF54;
L_08A2E08C:;
    ST8(s6, v0);
    v1 = LD32(s1);
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E0A0;
L_08A2E0A0:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A2E0BC; }
    goto L_08A2E0A8;
L_08A2E0A8:;
    v1 = LD32(s2+156);
    v0 = 32;
    cnd_ = v1 == v0;
    a1 = 0x6c960000u;
    if (cnd_) { goto L_08A2E27C; }
    goto L_08A2E0B8;
L_08A2E0B8:;
    a0 = s2 + 0;
    goto L_08A2E0BC;
L_08A2E0BC:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_0888CD38(a0, a1, a2, a3, t0);
    goto L_08A2E0D0;
L_08A2E0D0:;
    a0 = LD32(s1+84);
    v0 = a0 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+32, FBITS(f21)); goto L_08A2E260; }
    goto L_08A2E0E0;
L_08A2E0E0:;
    v0 = D_08B1C148 - (-16056);
    v1 = LD32(v0-16056);
    cnd_ = v1 == a0;
    v1 = LD32(fp-12112);
    if (cnd_) { goto L_08A2E204; }
    goto L_08A2E0F0;
L_08A2E0F0:;
    ST32(sp+32, FBITS(f20));
    ST32(sp+36, FBITS(f25));
    ST32(sp+40, FBITS(f25));
    ST32(sp+44, FBITS(f23));
    ST32(sp+48, FBITS(f20));
    ST32(sp+52, FBITS(f24));
    ST32(sp+56, FBITS(f24));
    goto L_08A2E10C;
L_08A2E10C:;
    ST32(sp+60, FBITS(f20));
    goto L_08A2E110;
L_08A2E110:;
    v1 = LD32(s2);
    goto L_08A2E114;
L_08A2E114:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E120;
L_08A2E120:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_08A2E1B4; }
    goto L_08A2E12C;
L_08A2E12C:;
    v0 = LD32(s1);
    goto L_08A2E130;
L_08A2E130:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E148;
L_08A2E148:;
    v1 = D_08C2D0D0 - (-12080);
    f12 = BITSF(LD32(v1-12080));
    v1 = v1 - 12080;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v1+8));
    a0 = D_08C2D0C4 - (-12092);
    f12 = f3 - f12;
    f13 = f4 - f13;
    v1 = D_08C2D0C0 - (-12096);
    f1 = BITSF(LD32(v1-12096));
    f0 = BITSF(LD32(a0-12092));
    f2 = BITSF(LD32(v0+4));
    f12 = f12 * f1;
    f13 = f13 * f0;
    v1 = LD32(s2);
    ST32(sp+4, FBITS(f2));
    f12 = f22 + f12;
    f13 = f26 - f13;
    ST32(sp, FBITS(f3));
    f14 = BITSF(0);
    ST32(sp+8, FBITS(f4));
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E1AC;
L_08A2E1AC:;
    a2 = LD32(sp+24);
    goto L_08A2DEF4;
L_08A2E1B4:;
    a0 = s2 + 0;
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E1C4;
L_08A2E1C4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A2E1D4; }
    goto L_08A2E1CC;
L_08A2E1CC:;
    a1 = sp + 32;
    func_08887420(a0, a1);
    goto L_08A2E1D4;
L_08A2E1D4:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E1E8;
L_08A2E1E8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A2E130; }
    goto L_08A2E1F0;
L_08A2E1F0:;
    a0 = v0 + 0;
    a1 = sp + 48;
    func_08887420(a0, a1);
    goto L_08A2E1FC;
L_08A2E1FC:;
    v0 = LD32(s1);
    goto L_08A2E130;
L_08A2E204:;
    a0 = D_08C2D0EC - (-12052);
    a0 = a0 - 12052;
    v0 = v1 << 2;
    v0 = v0 + a0;
    ST32(v0, s2);
    v1 = v1 + 1;
    v0 = LD32(sp+64);
    ST32(sp+32, FBITS(f25));
    ST32(fp-12112, v1);
    ST32(sp+36, FBITS(f25));
    ST32(sp+40, FBITS(f20));
    ST32(sp+44, FBITS(f23));
    ST32(sp+48, FBITS(f24));
    ST32(sp+52, FBITS(f24));
    ST32(sp+56, FBITS(f20));
    cnd_ = v0 != 0;
    ST32(sp+60, FBITS(f20));
    if (cnd_) { goto L_08A2E110; }
    goto L_08A2E248;
L_08A2E248:;
    v0 = LD32(s1+116);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(sp+64, s2); goto L_08A2E110; }
    goto L_08A2E258;
L_08A2E258:;
    v1 = LD32(s2);
    goto L_08A2E114;
L_08A2E260:;
    ST32(sp+36, FBITS(f21));
    ST32(sp+40, FBITS(f21));
    ST32(sp+44, FBITS(f23));
    ST32(sp+48, FBITS(f21));
    ST32(sp+52, FBITS(f21));
    ST32(sp+56, FBITS(f21));
    goto L_08A2E10C;
L_08A2E27C:;
    a0 = s5 + 0;
    a1 = a1 | 0x6747;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E288;
L_08A2E288:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A2E0B8; }
    goto L_08A2E290;
L_08A2E290:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2E298;
L_08A2E298:;
    v1 = 1002;
    cnd_ = v0 != v1;
    if (cnd_) { a0 = s2 + 0; goto L_08A2E0BC; }
    goto L_08A2E2A4;
L_08A2E2A4:;
    v1 = LD32(s1);
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E2B4;
L_08A2E2B4:;
    a1 = v0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E2C0;
L_08A2E2C0:;
    a0 = s2 + 0;
    goto L_08A2E0BC;
L_08A2E2C8:;
    v0 = D_08AEFB24 - (-1244);
    v1 = D_08AEFB20 - (-1248);
    f22 = BITSF(LD32(v0-1244));
    f26 = BITSF(LD32(v1-1248));
    s7 = 0xefeb0000u;
    s7 = s7 | 0xa409;
    goto L_08A2DE18;
}

/* 08A2E2E4 */
rv_t func_08A2E2E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E2E4:;
    sp = sp - 16;
    v1 = (u32)(s32)LD_S16(a1+20);
    v0 = (u32)(s32)LD_S16(a0+20);
    a3 = (u32)(s32)LD_S16(a0+18);
    t1 = (u32)(s32)LD_S16(a1+18);
    a2 = (u32)(s32)LD_S16(a0+16);
    t0 = (u32)(s32)LD_S16(a1+16);
    a0 = v0 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A2E320(a0, a1, a2, a3, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E310;
L_08A2E310:;
    v0 = (s32)v0 < 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A2E320 */
u64 func_08A2E320(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E320:;
    t3 = a0 + 0;
    t2 = a1 + 0;
    t3 = (u32)(s32)(s16)t3;
    t2 = (u32)(s32)(s16)t2;
    a0 = a2 + 0;
    a1 = a3 + 0;
    a2 = t0 + 0;
    sp = sp - 16;
    v1 = (s32)t2 < (s32)t3;
    t0 = 1;
    v0 = (u32)-1;
    if (v1 == 0) t0 = v0;
    a0 = (u32)(s32)(s16)a0;
    a1 = (u32)(s32)(s16)a1;
    a2 = (u32)(s32)(s16)a2;
    cnd_ = t3 == t2;
    a3 = (u32)(s32)(s16)t1;
    if (cnd_) { goto L_08A2E378; }
    goto L_08A2E368;
L_08A2E368:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A2E378:;
    { u64 r_ = func_08A2E388(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E380;
L_08A2E380:;
    t0 = v0 + 0;
    goto L_08A2E368;
}

/* 08A2E388 */
u64 func_08A2E388(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
L_08A2E388:;
    a0 = (u32)(s32)(s16)a0;
    t0 = (u32)(s32)(s16)a1;
    a2 = (u32)(s32)(s16)a2;
    a1 = (u32)(s32)(s16)a3;
    v0 = t0 ^ a1;
    a3 = a0 ^ a2;
    v0 = 0 < v0;
    v1 = 0 < a3;
    v1 = v1 | v0;
    a2 = (s32)a2 < (s32)a0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2E3D8; }
    goto L_08A2E3B8;
L_08A2E3B8:;
    v0 = a3 < 0x1u;
    v1 = (s32)t0 < (s32)a1;
    v1 = v0 & v1;
    cnd_ = a2 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A2E3D4; }
    goto L_08A2E3CC;
L_08A2E3CC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A2E3D8; }
    goto L_08A2E3D4;
L_08A2E3D4:;
    v0 = 1;
    goto L_08A2E3D8;
L_08A2E3D8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A2E3E0 */
rv_t func_08A2E3E0(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E3E0:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    a0 = LD32(v0-15392);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2E410; }
    goto L_08A2E3F8;
L_08A2E3F8:;
    v0 = LD32(a0+4);
    v0 = v0 - 5;
    v0 = v0 < 0x2u;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2E420; }
    goto L_08A2E410;
L_08A2E410:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2E420:;
    { rv_t r_ = func_08A091C8(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E428;
L_08A2E428:;
    v1 = v0 + 0;
    goto L_08A2E410;
}

/* 08A2E430 */
void func_08A2E430(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E430:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    s0 = LD32(v0-15392);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A2E470; }
    goto L_08A2E44C;
L_08A2E44C:;
    v0 = LD32(s0+4);
    v0 = v0 ^ 0x3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2E47C; }
    goto L_08A2E45C;
L_08A2E45C:;
    v0 = D_08B1C150 - (-16048);
    goto L_08A2E460;
L_08A2E460:;
    a1 = LD32(v0-16048);
    a0 = s0 + 0;
    func_08A08EF8(a0, a1);
    goto L_08A2E46C;
L_08A2E46C:;
    goto L_08A2E470;
L_08A2E470:;
    sp = sp + 16;
    return;
L_08A2E47C:;
    { rv_t r_ = func_08A2E48C(t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E484;
L_08A2E484:;
    v0 = D_08B1C150 - (-16048);
    goto L_08A2E460;
}

/* 08A2E48C */
rv_t func_08A2E48C(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E48C:;
    sp = sp - 16;
    v0 = D_08C2C3E0 - (-15392);
    v1 = LD32(v0-15392);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2E5A8; }
    goto L_08A2E4B0;
L_08A2E4B0:;
    v0 = D_08C2B0A8 - (-20312);
    s0 = LD32(v1+20);
    a2 = LD32(v0-20312);
    t0 = v0 - 20312;
    a3 = 999;
    goto L_08A2E4C4;
L_08A2E4C4:;
    cnd_ = s0 == a3;
    a0 = 0x8001;
    if (cnd_) { goto L_08A2E528; }
    goto L_08A2E4CC;
L_08A2E4CC:;
    v0 = LD32(t0+4);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + a2;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2E518; }
    goto L_08A2E4EC;
L_08A2E4EC:;
    a0 = LD32(a1);
    goto L_08A2E4F0;
L_08A2E4F0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08A2E5C0; }
    goto L_08A2E508;
L_08A2E508:;
    a1 = LD32(a1+4);
    goto L_08A2E50C;
L_08A2E50C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08A2E4F0; }
    goto L_08A2E514;
L_08A2E514:;
    v1 = 0 + 0;
    goto L_08A2E518;
L_08A2E518:;
    cnd_ = v1 == 0;
    a0 = 0x8001;
    if (cnd_) { goto L_08A2E528; }
    goto L_08A2E520;
L_08A2E520:;
    s0 = LD32(v1+524);
    goto L_08A2E4C4;
L_08A2E528:;
    a1 = 32;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E538;
L_08A2E538:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A2E5A4; }
    goto L_08A2E540;
L_08A2E540:;
    s1 = LD32(v0+24);
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(s2+28); goto L_08A2E584; }
    goto L_08A2E54C;
L_08A2E54C:;
    a0 = s1 + 0;
    func_0897A7BC(a0);
    goto L_08A2E554;
L_08A2E554:;
    ST32(s1+4, s0);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E55C;
L_08A2E55C:;
    ST32(s1+8, v0);
    v0 = D_08AEFB3C - (-1220);
    v1 = (u32)-1;
    a0 = LD32(s1+28);
    f0 = BITSF(LD32(v0-1220));
    ST32(s1, v1);
    a0 = a0 | 0x1;
    ST32(s1+12, FBITS(f0));
    ST32(s1+28, a0);
    v0 = LD32(s2+28);
    goto L_08A2E584;
L_08A2E584:;
    ST32(s2+4, s0);
    a0 = s2 + 0;
    v0 = v0 | 0x1;
    ST32(s2+28, v0);
    a1 = 1;
    a2 = 1;
    ST32(s2, s0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E5A4;
L_08A2E5A4:;
    v0 = 1;
    goto L_08A2E5A8;
L_08A2E5A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2E5C0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A2E508; }
    goto L_08A2E5CC;
L_08A2E5CC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08A2E50C; }
    goto L_08A2E5D8;
L_08A2E5D8:;
    goto L_08A2E518;
}

/* 08A2E5E0 */
u32 func_08A2E5E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A2E5E0:;
    sp = sp - 112;
    fp = t3 & 0xff;
    s7 = t2 + 0;
    s6 = t0 + 0;
    s5 = a1 + 0;
    s4 = a0 + 0;
    s3 = 0 + 0;
    s2 = a2 + 0;
    s1 = sp + 0;
    s0 = sp + 16;
    f21 = f13;
    f20 = f12;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    t4 = LD32(a3+12);
    a3 = LD32(a3+8);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a3);
    ST32(sp+12, t4);
    v0 = LD32(t1);
    a1 = LD32(t1+12);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    cnd_ = s4 == 0;
    ST32(sp+28, a1);
    if (cnd_) { goto L_08A2E7D8; }
    goto L_08A2E684;
L_08A2E684:;
    cnd_ = a2 == 0;
    if (cnd_) { ST32(sp+32, 0); goto L_08A2E6B0; }
    goto L_08A2E68C;
L_08A2E68C:;
    a0 = a2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E694;
L_08A2E694:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+36, v0);
    ST32(sp+40, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E6A8;
L_08A2E6A8:;
    cnd_ = v0 != 0;
    ST32(sp+32, v0);
    if (cnd_) { goto L_08A2E850; }
    goto L_08A2E6B0;
L_08A2E6B0:;
    ST32(sp+40, 0);
    ST32(sp+36, 0);
    a0 = sp + 32;
    goto L_08A2E6BC;
L_08A2E6BC:;
    a1 = s1 + 0;
    a2 = s6 + 0;
    v0 = func_0888A5E8(a0, a1, a2, t1, t2, t3);
    goto L_08A2E6C8;
L_08A2E6C8:;
    a0 = LD32(sp+32);
    cnd_ = a0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A2E840; }
    goto L_08A2E6D4;
L_08A2E6D4:;
    ST32(sp+40, 0);
    cnd_ = s3 == 0;
    ST32(sp+36, 0);
    if (cnd_) { goto L_08A2E7D8; }
    goto L_08A2E6E0;
L_08A2E6E0:;
    cnd_ = s5 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_08A2E700; }
    goto L_08A2E6E8;
L_08A2E6E8:;
    v1 = LD32(s3);
    a1 = s5 + 0;
    v0 = LD32(v1+96);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E6FC;
L_08A2E6FC:;
    v0 = LD32(s3);
    goto L_08A2E700;
L_08A2E700:;
    f14 = BITSF(0);
    f12 = f20;
    v1 = LD32(v0+32);
    f13 = f21;
    t_ = v1;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E718;
L_08A2E718:;
    a0 = s3 + 0;
    a2 = 0 + 0;
    a1 = 1087;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E728;
L_08A2E728:;
    a0 = s3 + 0;
    a1 = s7 + 0;
    a2 = 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E738;
L_08A2E738:;
    v1 = LD32(s4);
    a0 = s4 + 0;
    v0 = LD32(v1+116);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E74C;
L_08A2E74C:;
    cnd_ = fp == 0;
    if (cnd_) { f12 = BITSF(LD32(s0)); goto L_08A2E814; }
    goto L_08A2E754;
L_08A2E754:;
    a1 = s6 + 0;
    a0 = s4 + 0;
    func_0888744C(a0, a1);
    goto L_08A2E760;
L_08A2E760:;
    a0 = s3 + 0;
    v0 = func_08880710(a0);
    goto L_08A2E768;
L_08A2E768:;
    f15 = BITSF(LD32(s0+12));
    f13 = BITSF(LD32(s0+4));
    f14 = BITSF(LD32(s0+8));
    f12 = BITSF(LD32(s0));
    a2 = s1 + 0;
    a0 = s4 + 0;
    a1 = v0 + 0;
    v0 = func_0888BE48(a0, a1, a2, f12, f13, f14, f15);
    goto L_08A2E788;
L_08A2E788:;
    s1 = v0 + 0;
    v0 = D_08AEFB40 - (-1216);
    f20 = BITSF(LD32(v0-1216));
    a0 = s4 + 0;
    a1 = 1;
    f12 = f20;
    { rv_t r_ = func_0888C0C8(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E7A4;
L_08A2E7A4:;
    a1 = v0 + 0;
    a2 = s1 + 0;
    a0 = s4 + 0;
    s0 = v0 + 0;
    func_0888C1DC(a0, a1, a2);
    goto L_08A2E7B8;
L_08A2E7B8:;
    a0 = s4 + 0;
    f12 = f20;
    func_0888C26C(a0, f12);
    goto L_08A2E7C4;
L_08A2E7C4:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    a3 = 0xffff;
    { u64 r_ = func_0888C288(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E7D8;
L_08A2E7D8:;
    v0 = s3 + 0;
    goto L_08A2E7DC;
L_08A2E7DC:;
    sp = sp + 112;
    return v0;
L_08A2E814:;
    f13 = BITSF(LD32(s0+4));
    a1 = 0 + 0;
    a0 = s3 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2E824;
L_08A2E824:;
    f13 = BITSF(LD32(s0+12));
    f12 = BITSF(LD32(s0+8));
    a0 = s3 + 0;
    a1 = 1;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A2E838;
L_08A2E838:;
    v0 = s3 + 0;
    goto L_08A2E7DC;
L_08A2E840:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E848;
L_08A2E848:;
    ST32(sp+32, 0);
    goto L_08A2E6D4;
L_08A2E850:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E85C;
L_08A2E85C:;
    a0 = sp + 32;
    goto L_08A2E6BC;
}

/* 08A2E864 */
rv_t func_08A2E864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E864:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A2E880; }
    goto L_08A2E878;
L_08A2E878:;
    cnd_ = a1 == 0;
    v1 = a0 < 0x15u;
    if (cnd_) { goto L_08A2E89C; }
    goto L_08A2E880;
L_08A2E880:;
    a0 = D_08AE1BCC - (7116);
    a0 = a0 + 7116;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E88C;
L_08A2E88C:;
    v0 = 1;
    goto L_08A2E890;
L_08A2E890:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2E89C:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2E890; }
    goto L_08A2E8A4;
L_08A2E8A4:;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E8AC;
L_08A2E8AC:;
    v0 = 1;
    goto L_08A2E890;
}

/* 08A2E8B4 */
rv_t func_08A2E8B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E8B4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1BF4 - (7156);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 7156;
    if (cnd_) { goto L_08A2E8E8; }
    goto L_08A2E8D0;
L_08A2E8D0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E8D8;
L_08A2E8D8:;
    goto L_08A2E8DC;
L_08A2E8DC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2E8E8:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E8F0;
L_08A2E8F0:;
    a0 = 0x818b0000u;
    a0 = a0 | 0xcce4;
    cnd_ = v0 != a0;
    if (cnd_) {  goto L_08A2E8DC; }
    goto L_08A2E900;
L_08A2E900:;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2E908;
L_08A2E908:;
    a0 = 0x5b530000u;
    a1 = 1;
    a2 = 1;
    a0 = a0 | 0xeb0d;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E91C;
L_08A2E91C:;
    goto L_08A2E8DC;
}

/* 08A2E924 */
rv_t func_08A2E924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E924:;
    sp = sp - 16;
    v0 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AE1C1C - (7196);
    a0 = a0 + 7196;
    s0 = v0 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A2E954; }
    goto L_08A2E94C;
L_08A2E94C:;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = D_08C2933C - (-27844); goto L_08A2E970; }
    goto L_08A2E954;
L_08A2E954:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E95C;
L_08A2E95C:;
    goto L_08A2E960;
L_08A2E960:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2E970:;
    a1 = D_08C2D1A4 - (-11868);
    a0 = a0 - 27844;
    a1 = a1 - 11868;
    { rv_t r_ = func_089783BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E980;
L_08A2E980:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    cnd_ = s0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A2E95C; }
    goto L_08A2E990;
L_08A2E990:;
    { rv_t r_ = func_08A2EA54(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E998;
L_08A2E998:;
    goto L_08A2E960;
}

/* 08A2E9A0 */
rv_t func_08A2E9A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2E9A0:;
    v0 = a0 + 0;
    t0 = D_08C2933C - (-27844);
    sp = sp - 16;
    a0 = D_08AE1C44 - (7236);
    a1 = D_08AE1C88 - (7304);
    t0 = t0 - 27844;
    v0 = v0 & 0xff;
    a0 = a0 + 7236;
    a1 = a1 + 7304;
    t0 = t0 + 8;
    a2 = 32;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A2E9F0; }
    goto L_08A2E9D8;
L_08A2E9D8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E9E0;
L_08A2E9E0:;
    goto L_08A2E9E4;
L_08A2E9E4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2E9F0:;
    a0 = D_08C2D1A4 - (-11868);
    a0 = a0 - 11868;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2E9FC;
L_08A2E9FC:;
    goto L_08A2E9E4;
}

/* 08A2EA04 */
rv_t func_08A2EA04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EA04:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1C90 - (7312);
    a1 = D_08C2D1A4 - (-11868);
    v0 = v0 & 0xff;
    a0 = a0 + 7312;
    cnd_ = v0 == 0;
    a1 = a1 - 11868;
    if (cnd_) { goto L_08A2EA40; }
    goto L_08A2EA28;
L_08A2EA28:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EA30;
L_08A2EA30:;
    goto L_08A2EA34;
L_08A2EA34:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EA40:;
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    { rv_t r_ = func_089783BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EA4C;
L_08A2EA4C:;
    goto L_08A2EA34;
}

/* 08A2EA54 */
rv_t func_08A2EA54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EA54:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1CDC - (7388);
    a2 = a2 & 0xff;
    a0 = a0 + 7388;
    v0 = v0 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A2EA80; }
    goto L_08A2EA78;
L_08A2EA78:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A2EA98; }
    goto L_08A2EA80;
L_08A2EA80:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EA88;
L_08A2EA88:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EA98:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2EAB8; }
    goto L_08A2EAA0;
L_08A2EAA0:;
    func_08A62208();
    goto L_08A2EAA8;
L_08A2EAA8:;
    v1 = 1;
    goto L_08A2EAAC;
L_08A2EAAC:;
    v0 = D_08C2D0A7 - (-12121);
    ST8(v0-12121, v1);
    goto L_08A2EA88;
L_08A2EAB8:;
    func_08A621E8();
    goto L_08A2EAC0;
L_08A2EAC0:;
    v1 = 1;
    goto L_08A2EAAC;
}

/* 08A2EAC8 */
rv_t func_08A2EAC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EAC8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1D10 - (7440);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 7440;
    if (cnd_) { goto L_08A2EAFC; }
    goto L_08A2EAE4;
L_08A2EAE4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EAEC;
L_08A2EAEC:;
    goto L_08A2EAF0;
L_08A2EAF0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EAFC:;
    { u64 r_ = func_08A62274(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EB04;
L_08A2EB04:;
    goto L_08A2EAF0;
}

/* 08A2EB0C */
rv_t func_08A2EB0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EB0C:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1D2C - (7468);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 7468;
    if (cnd_) { goto L_08A2EB40; }
    goto L_08A2EB28;
L_08A2EB28:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EB30;
L_08A2EB30:;
    goto L_08A2EB34;
L_08A2EB34:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EB40:;
    { u64 r_ = func_08A62294(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EB48;
L_08A2EB48:;
    goto L_08A2EB34;
}

/* 08A2EB50 */
rv_t func_08A2EB50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EB50:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1D4C - (7500);
    a2 = a2 & 0xff;
    a0 = a0 + 7500;
    v1 = v0 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A2EB7C; }
    goto L_08A2EB74;
L_08A2EB74:;
    cnd_ = a1 == 0;
    v0 = D_08C29342 - (-27838);
    if (cnd_) { goto L_08A2EB94; }
    goto L_08A2EB7C;
L_08A2EB7C:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EB84;
L_08A2EB84:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EB94:;
    ST8(v0-27838, v1);
    goto L_08A2EB84;
}

/* 08A2EB9C */
rv_t func_08A2EB9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EB9C:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = 0xff3c0000u;
    v0 = v0 & 0xff;
    a0 = a0 | 0xceff;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A2EBCC; }
    goto L_08A2EBBC;
L_08A2EBBC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EBCC:;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EBD4;
L_08A2EBD4:;
    a2 = v0 + 0;
    v0 = D_08C29370 - (-27792);
    v1 = LD32(v0-27792);
    a1 = 0xabd00000u;
    a0 = a2 + 0;
    v1 = v1 < 0x2u;
    cnd_ = v1 != 0;
    a1 = a1 | 0xb76;
    if (cnd_) { goto L_08A2EC00; }
    goto L_08A2EBF4;
L_08A2EBF4:;
    a1 = 0x13700000u;
    a0 = a2 + 0;
    a1 = a1 | 0x447a;
    goto L_08A2EC00;
L_08A2EC00:;
    f0 = func_08884FB8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A2EC08;
L_08A2EC08:;
    v1 = 1;
    goto L_08A2EBBC;
}

/* 08A2EC10 */
rv_t func_08A2EC10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EC10:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1D84 - (7556);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 7556;
    if (cnd_) { goto L_08A2EC70; }
    goto L_08A2EC2C;
L_08A2EC2C:;
    v0 = D_08C29918 - (-26344);
    v1 = LD32(v0-26344);
    a0 = 0xe5890000u;
    cnd_ = v1 == 0;
    a0 = a0 | 0x97ef;
    if (cnd_) { goto L_08A2EC50; }
    goto L_08A2EC40;
L_08A2EC40:;
    goto L_08A2EC44;
L_08A2EC44:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EC50:;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EC58;
L_08A2EC58:;
    a1 = 0 + 0;
    a0 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08A2ECB8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EC68;
L_08A2EC68:;
    goto L_08A2EC44;
L_08A2EC70:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EC78;
L_08A2EC78:;
    goto L_08A2EC44;
}

/* 08A2EC80 */
rv_t func_08A2EC80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EC80:;
    sp = sp - 16;
    v0 = a0 & 0xff;
    a0 = D_08AE1D84 - (7556);
    cnd_ = v0 != 0;
    a0 = a0 + 7556;
    if (cnd_) { goto L_08A2ECA8; }
    goto L_08A2EC98;
L_08A2EC98:;
    goto L_08A2EC9C;
L_08A2EC9C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2ECA8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2ECB0;
L_08A2ECB0:;
    goto L_08A2EC9C;
}

/* 08A2ECB8 */
rv_t func_08A2ECB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A2ECB8:;
    sp = sp - 48;
    a2 = a2 & 0xff;
    a0 = a0 & 0xff;
    a1 = a1 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A2ECEC; }
    goto L_08A2ECE4;
L_08A2ECE4:;
    cnd_ = a1 == 0;
    v0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_08A2ED1C; }
    goto L_08A2ECEC;
L_08A2ECEC:;
    a0 = D_08AE1D84 - (7556);
    a0 = a0 + 7556;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2ECF8;
L_08A2ECF8:;
    goto L_08A2ECFC;
L_08A2ECFC:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A2ED1C:;
    s0 = v0 - 27844;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A2ECFC; }
    goto L_08A2ED28;
L_08A2ED28:;
    cnd_ = a0 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_08A2ED5C; }
    goto L_08A2ED30;
L_08A2ED30:;
    v0 = LD32(s0+1500);
    v1 = LD_U8(s0+6);
    v0 = 0 < v0;
    a1 = s0 + 0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2ED50; }
    goto L_08A2ED48;
L_08A2ED48:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(a1+6, a0); goto L_08A2ED58; }
    goto L_08A2ED50;
L_08A2ED50:;
    a0 = 1;
    ST8(a1+6, a0);
    goto L_08A2ED58;
L_08A2ED58:;
    ST32(a2+1500, 0);
    goto L_08A2ED5C;
L_08A2ED5C:;
    ST32(sp, 0);
    func_08979AD8();
    goto L_08A2ED64;
L_08A2ED64:;
    a0 = 5;
    func_08978CB4(a0);
    goto L_08A2ED6C;
L_08A2ED6C:;
    s1 = LD32(s0+1500);
    v0 = s1 < 0xbu;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A2ECF8; }
    goto L_08A2ED7C;
L_08A2ED7C:;
    v0 = D_08B1C060 - (-16288);
    v1 = s1 << 2;
    v0 = v0 - 16288;
    s0 = v1 + v0;
    s4 = 1;
    s3 = D_08B1BB5C - (-17572);
    goto L_08A2ED94;
L_08A2ED94:;
    a0 = LD32(s0);
    a1 = sp + 0;
    a2 = 2;
    s1 = s1 + 1;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EDA8;
L_08A2EDA8:;
    cnd_ = v0 == 0;
    v0 = s1 < 0xbu;
    if (cnd_) { goto L_08A2EDCC; }
    goto L_08A2EDB0;
L_08A2EDB0:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = LD32(s0); goto L_08A2EE24; }
    goto L_08A2EDB8;
L_08A2EDB8:;
    a0 = LD32(sp);
    goto L_08A2EDBC;
L_08A2EDBC:;
    a1 = 5;
    a2 = 1;
    { u64 r_ = func_089798B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EDC8;
L_08A2EDC8:;
    v0 = s1 < 0xbu;
    goto L_08A2EDCC;
L_08A2EDCC:;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A2ED94; }
    goto L_08A2EDD4;
L_08A2EDD4:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A2ECFC; }
    goto L_08A2EDDC;
L_08A2EDDC:;
    s0 = 1;
    v0 = D_08B1BB3C - (-17604);
    ST32(v0-17604, s0);
    v1 = D_08B1BB38 - (-17608);
    v0 = D_08C2932C - (-27860);
    a0 = 0 + 0;
    ST8(v1-17608, s0);
    v1 = D_08C2932D - (-27859);
    ST8(v0-27860, 0);
    v0 = D_08C2D0A6 - (-12122);
    ST8(v0-12122, 0);
    ST8(v1-27859, 0);
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EE10;
L_08A2EE10:;
    a0 = 3;
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EE18;
L_08A2EE18:;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, s0);
    goto L_08A2ECF8;
L_08A2EE24:;
    s2 = 1;
    ST32(s3-17572, s4);
    func_08978924(a0, 0, 0, 0);
    goto L_08A2EE30;
L_08A2EE30:;
    a0 = LD32(sp);
    goto L_08A2EDBC;
}

/* 08A2EE38 */
rv_t func_08A2EE38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EE38:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1DB8 - (7608);
    a2 = a2 & 0xff;
    a0 = a0 + 7608;
    v0 = v0 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A2EE64; }
    goto L_08A2EE5C;
L_08A2EE5C:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A2EE7C; }
    goto L_08A2EE64;
L_08A2EE64:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EE6C;
L_08A2EE6C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EE7C:;
    a0 = v0 + 0;
    func_08A3C574(a0);
    goto L_08A2EE84;
L_08A2EE84:;
    a1 = 1;
    v0 = D_08B1BB38 - (-17608);
    ST8(v0-17608, a1);
    v1 = D_08B1BB3C - (-17604);
    v0 = D_08C2932C - (-27860);
    ST32(v1-17604, a1);
    a0 = 0 + 0;
    v1 = D_08C2932D - (-27859);
    ST8(v0-27860, 0);
    v0 = D_08C2D0A6 - (-12122);
    ST8(v1-27859, 0);
    ST8(v0-12122, 0);
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EEB8;
L_08A2EEB8:;
    a0 = 6;
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2EEC0;
L_08A2EEC0:;
    v1 = 4;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, v1);
    goto L_08A2EE6C;
}

/* 08A2EED0 */
rv_t func_08A2EED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EED0:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AE1DF4 - (7668);
    a0 = a0 + 7668;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A2EEF8; }
    goto L_08A2EEF0;
L_08A2EEF0:;
    cnd_ = a1 == 0;
    a3 = v1 < 0x14u;
    if (cnd_) { goto L_08A2EF10; }
    goto L_08A2EEF8;
L_08A2EEF8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EF00;
L_08A2EF00:;
    v0 = 1;
    goto L_08A2EF04;
L_08A2EF04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EF10:;
    v0 = D_08B1C08C - (-16244);
    v0 = v0 - 16244;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a2 = 1;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2EF04; }
    goto L_08A2EF2C;
L_08A2EF2C:;
    v0 = D_08C2937B - (-27781);
    a1 = LD_U8(v0-27781);
    v0 = D_08AEFB48 - (-1208);
    a0 = LD32(v1);
    f12 = BITSF(LD32(v0-1208));
    func_08A69188(a0, a1, a2, f12);
    goto L_08A2EF44;
L_08A2EF44:;
    a0 = D_08B29960 - (-26272);
    a0 = a0 - 26272;
    { rv_t r_ = func_0889679C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EF50;
L_08A2EF50:;
    v0 = 1;
    goto L_08A2EF04;
}

/* 08A2EF58 */
rv_t func_08A2EF58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EF58:;
    sp = sp - 16;
    a3 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AE1E18 - (7704);
    a0 = a0 + 7704;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A2EF80; }
    goto L_08A2EF78;
L_08A2EF78:;
    cnd_ = a2 == 0;
    v1 = a3 < 0x14u;
    if (cnd_) { goto L_08A2EF98; }
    goto L_08A2EF80;
L_08A2EF80:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EF88;
L_08A2EF88:;
    goto L_08A2EF8C;
L_08A2EF8C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2EF98:;
    v0 = D_08C2933C - (-27844);
    cnd_ = v1 == 0;
    a1 = v0 - 27844;
    if (cnd_) { goto L_08A2EF88; }
    goto L_08A2EFA4;
L_08A2EFA4:;
    v0 = D_08B1C08C - (-16244);
    a0 = a3 << 3;
    v0 = v0 - 16244;
    v1 = LD32(a1+1504);
    a2 = a0 + v0;
    a0 = LD32(a1+1500);
    v0 = a0 < v1;
    if (v0 == 0) v1 = a0;
    v1 = v1 < a3;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A2EF88; }
    goto L_08A2EFD0;
L_08A2EFD0:;
    a0 = LD32(a2+4);
    v0 = func_0897A064(a0, a1);
    goto L_08A2EFD8;
L_08A2EFD8:;
    a0 = D_08AE1E5C - (7772);
    a0 = a0 + 7772;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2EFE8;
L_08A2EFE8:;
    goto L_08A2EF8C;
}

/* 08A2EFF0 */
rv_t func_08A2EFF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2EFF0:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1E68 - (7784);
    v0 = v0 & 0xff;
    a0 = a0 + 7784;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2F088; }
    goto L_08A2F014;
L_08A2F014:;
    v0 = D_08C2933C - (-27844);
    s0 = v0 - 27844;
    v0 = D_08B2AC5F - (-21409);
    v1 = LD_U8(v0-21409);
    s1 = s0 + 1508;
    a1 = s0 + 1570;
    a2 = s0 + 1672;
    a0 = s1 + 0;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2F050; }
    goto L_08A2F03C;
L_08A2F03C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F050:;
    { rv_t r_ = func_088A0CC8(a0, a1, a2, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F058;
L_08A2F058:;
    v0 = LD_U16(s1+62);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A2F03C; }
    goto L_08A2F064;
L_08A2F064:;
    v0 = LD_U16(s0+1508);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08A2F03C; }
    goto L_08A2F070;
L_08A2F070:;
    v0 = LD_U16(s1+164);
    v1 = D_08B1C15C - (-16036);
    v0 = 0 < v0;
    ST8(v1-16036, v0);
    v0 = 1;
    goto L_08A2F03C;
L_08A2F088:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F090;
L_08A2F090:;
    v0 = 1;
    goto L_08A2F03C;
}

/* 08A2F098 */
rv_t func_08A2F098(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_08A2F098:;
    v0 = a0 + 0;
    sp = sp - 256;
    a0 = D_08AE1E98 - (7832);
    v0 = v0 & 0xff;
    a0 = a0 + 7832;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2F164; }
    goto L_08A2F0B8;
L_08A2F0B8:;
    v0 = D_08AE1C88 - (7304);
    s0 = v0 + 7304;
    v0 = D_08B2AC5F - (-21409);
    v1 = LD_U8(v0-21409);
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 31;
    a3 = 1;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2F0F0; }
    goto L_08A2F0E0;
L_08A2F0E0:;
    sp = sp + 256;
    return (rv_t){ v0, v1, f0 };
L_08A2F0F0:;
    v0 = D_08B2ACA8 - (-21336);
    t0 = LD32(v0-21336);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F0FC;
L_08A2F0FC:;
    v1 = D_08B2ACAC - (-21332);
    t0 = LD32(v1-21332);
    a0 = sp + 62;
    a1 = s0 + 0;
    a2 = 51;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F118;
L_08A2F118:;
    v1 = D_08B1C15C - (-16036);
    v0 = LD_U8(v1-16036);
    a0 = sp + 164;
    a1 = s0 + 0;
    a2 = 31;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_08A2F150; }
    goto L_08A2F134;
L_08A2F134:;
    ST16(sp+164, 0);
    a0 = D_08C2933C - (-27844);
    goto L_08A2F13C;
L_08A2F13C:;
    a1 = sp + 0;
    a0 = a0 - 27844;
    { rv_t r_ = func_08977C00(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F148;
L_08A2F148:;
    v0 = 1;
    goto L_08A2F0E0;
L_08A2F150:;
    v0 = D_08B2ACB0 - (-21328);
    t0 = LD32(v0-21328);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F15C;
L_08A2F15C:;
    a0 = D_08C2933C - (-27844);
    goto L_08A2F13C;
L_08A2F164:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F16C;
L_08A2F16C:;
    v0 = 1;
    goto L_08A2F0E0;
}

/* 08A2F174 */
rv_t func_08A2F174(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08A2F174:;
    sp = sp - 176;
    a2 = a2 & 0xff;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A2F1B8; }
    goto L_08A2F1B0;
L_08A2F1B0:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A2F1F8; }
    goto L_08A2F1B8;
L_08A2F1B8:;
    a0 = D_08AE1ED0 - (7888);
    a0 = a0 + 7888;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F1C4;
L_08A2F1C4:;
    goto L_08A2F1C8;
L_08A2F1C8:;
    v0 = 1;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_08A2F1F8:;
    func_08979AD8();
    goto L_08A2F200;
L_08A2F200:;
    a0 = 0x338a0000u;
    v0 = D_08C2D19C - (-11876);
    a0 = a0 | 0x2c7e;
    ST32(v0-11876, 0);
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F214;
L_08A2F214:;
    cnd_ = v0 == 0;
    a1 = 0x25dc0000u;
    if (cnd_) { goto L_08A2F244; }
    goto L_08A2F21C;
L_08A2F21C:;
    a0 = v0 + 0;
    a1 = a1 | 0x4ae2;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F228;
L_08A2F228:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2F244; }
    goto L_08A2F230;
L_08A2F230:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A2F238;
L_08A2F238:;
    v1 = 2005;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s0 + 0; goto L_08A2F530; }
    goto L_08A2F244;
L_08A2F244:;
    v1 = 0 + 0;
    goto L_08A2F248;
L_08A2F248:;
    a0 = sp + 0;
    goto L_08A2F24C;
L_08A2F24C:;
    ST32(a0, v1);
    v1 = v1 + 1;
    v0 = v1 < 0x16u;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A2F24C; }
    goto L_08A2F260;
L_08A2F260:;
    v0 = D_08B25AC8 - (23240);
    t3 = v0 + 23240;
    a3 = LD32(v0+23240);
    t0 = LD32(t3+4);
    t2 = 0 + 0;
    t1 = 22;
    goto L_08A2F278;
L_08A2F278:;
    v1 = (u32)((s32)a3 >> 16);
    v0 = a3 << 16;
    a3 = v0 + v1;
    a3 = a3 + t0;
    v0 = a3 >> 1;
    { u32 x_ = v0, y_ = t1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = (u32)((s32)a3 >> 16);
    v1 = a3 << 16;
    t0 = t0 + a3;
    a3 = v1 + a0;
    a3 = a3 + t0;
    a1 = a3 >> 1;
    t2 = t2 + 1;
    a2 = t2 < 0x14u;
    t0 = t0 + a3;
    a0 = hi;
    { u32 x_ = a1, y_ = t1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 << 2;
    a0 = a0 + sp;
    a1 = LD32(a0);
    v1 = hi;
    v1 = v1 << 2;
    v1 = v1 + sp;
    v0 = LD32(v1);
    ST32(a0, v0);
    cnd_ = a2 != 0;
    ST32(v1, a1);
    if (cnd_) { goto L_08A2F278; }
    goto L_08A2F2E4;
L_08A2F2E4:;
    v0 = s1 < 0x16u;
    v1 = 22;
    if (v0 != 0) v1 = s1;
    a0 = D_08B25AC8 - (23240);
    ST32(sp+120, v1);
    s6 = 0 + 0;
    ST32(t3+4, t0);
    cnd_ = v1 == 0;
    ST32(a0+23240, a3);
    if (cnd_) { goto L_08A2F1C4; }
    goto L_08A2F308;
L_08A2F308:;
    s5 = sp + 0;
    goto L_08A2F30C;
L_08A2F30C:;
    s1 = LD32(s5);
    a0 = 0 + 0;
    s0 = 0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F320;
L_08A2F320:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2F510; }
    goto L_08A2F328;
L_08A2F328:;
    a0 = 1;
    a1 = s1 + 0;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F334;
L_08A2F334:;
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A2F49C; }
    goto L_08A2F33C;
L_08A2F33C:;
    cnd_ = s0 == 0;
    fp = LD32(sp+112);
    if (cnd_) { goto L_08A2F484; }
    goto L_08A2F344;
L_08A2F344:;
    ST32(sp+124, 0);
    goto L_08A2F348;
L_08A2F348:;
    s3 = 0 + 0;
    s0 = 0 + 0;
    s4 = 1;
    s7 = 2;
    s2 = sp + 96;
    goto L_08A2F35C;
L_08A2F35C:;
    cnd_ = s0 == s4;
    v0 = (s32)s0 < 2;
    if (cnd_) { goto L_08A2F450; }
    goto L_08A2F364;
L_08A2F364:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2F42C; }
    goto L_08A2F36C;
L_08A2F36C:;
    cnd_ = s0 == s7;
    a0 = 3;
    if (cnd_) { goto L_08A2F408; }
    goto L_08A2F374;
L_08A2F374:;
    s0 = s0 + 1;
    goto L_08A2F378;
L_08A2F378:;
    v0 = (s32)s0 < 3;
    cnd_ = v0 != 0;
    v1 = D_08B25AC8 - (23240);
    if (cnd_) { goto L_08A2F35C; }
    goto L_08A2F384;
L_08A2F384:;
    v0 = LD32(v1+23240);
    a0 = v1 + 23240;
    a1 = LD32(a0+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v1 = s3 - 1;
    a0 = 0 + 0;
    v0 = v0 + a1;
    v1 = (s32)v1 > (s32)a0 ? v1 : a0;
    v1 = v1 + 1;
    a0 = v0 >> 1;
    { u32 x_ = a0, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = D_08B25AC8 - (23240);
    a1 = a1 + v0;
    v1 = v1 + 23240;
    ST32(v1+4, a1);
    a1 = D_08B25AC8 - (23240);
    a0 = fp + 0;
    ST32(a1+23240, v0);
    a2 = LD32(sp+124);
    a3 = hi;
    a3 = a3 << 2;
    a3 = a3 + sp;
    a1 = LD32(a3+96);
    { u64 r_ = func_089798B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F3EC;
L_08A2F3EC:;
    v1 = LD32(sp+120);
    goto L_08A2F3F0;
L_08A2F3F0:;
    s6 = s6 + 1;
    v0 = s6 < v1;
    cnd_ = v0 != 0;
    s5 = s5 + 4;
    if (cnd_) { goto L_08A2F30C; }
    goto L_08A2F400;
L_08A2F400:;
    goto L_08A2F1C8;
L_08A2F408:;
    a1 = s1 + 0;
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F410;
L_08A2F410:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08A2F378; }
    goto L_08A2F418;
L_08A2F418:;
    a1 = 3;
    ST32(s2, a1);
    goto L_08A2F420;
L_08A2F420:;
    s3 = s3 + 1;
    s2 = s2 + 4;
    goto L_08A2F374;
L_08A2F42C:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = s0 + 1; goto L_08A2F378; }
    goto L_08A2F434;
L_08A2F434:;
    a0 = 0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F440;
L_08A2F440:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08A2F378; }
    goto L_08A2F448;
L_08A2F448:;
    ST32(s2, 0);
    goto L_08A2F420;
L_08A2F450:;
    a0 = 1;
    a1 = s1 + 0;
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F45C;
L_08A2F45C:;
    cnd_ = v0 == 0;
    a0 = 2;
    if (cnd_) { goto L_08A2F46C; }
    goto L_08A2F464;
L_08A2F464:;
    ST32(s2, s0);
    goto L_08A2F420;
L_08A2F46C:;
    a1 = s1 + 0;
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F474;
L_08A2F474:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 + 1; goto L_08A2F378; }
    goto L_08A2F47C;
L_08A2F47C:;
    ST32(s2, s7);
    goto L_08A2F420;
L_08A2F484:;
    cnd_ = s2 == 0;
    v1 = LD32(sp+120);
    if (cnd_) { goto L_08A2F3F0; }
    goto L_08A2F48C;
L_08A2F48C:;
    a0 = 1;
    fp = LD32(sp+116);
    ST32(sp+124, a0);
    goto L_08A2F348;
L_08A2F49C:;
    a0 = s1 + 0;
    v0 = func_08977338(a0);
    goto L_08A2F4A4;
L_08A2F4A4:;
    a0 = v0 + 0;
    a1 = sp + 116;
    a2 = 1;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F4B4;
L_08A2F4B4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2F33C; }
    goto L_08A2F4BC;
L_08A2F4BC:;
    cnd_ = s0 == 0;
    s2 = 1;
    if (cnd_) { goto L_08A2F484; }
    goto L_08A2F4C4;
L_08A2F4C4:;
    a1 = D_08B25AC8 - (23240);
    v0 = LD32(a1+23240);
    a0 = a1 + 23240;
    v1 = LD32(a0+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    a1 = a1 + 23240;
    ST32(a1+4, v1);
    a0 = (v0 >> 1) & 0x1;
    v1 = D_08B25AC8 - (23240);
    cnd_ = a0 == 0;
    ST32(v1+23240, v0);
    if (cnd_) { goto L_08A2F508; }
    goto L_08A2F500;
L_08A2F500:;
    s2 = 0 + 0;
    goto L_08A2F33C;
L_08A2F508:;
    s0 = 0 + 0;
    goto L_08A2F33C;
L_08A2F510:;
    a0 = s1 + 0;
    v0 = func_08977308(a0);
    goto L_08A2F518;
L_08A2F518:;
    a0 = v0 + 0;
    a1 = sp + 112;
    a2 = 0 + 0;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F528;
L_08A2F528:;
    s0 = 0 < v0;
    goto L_08A2F328;
L_08A2F530:;
    a1 = 0 + 0;
    { rv_t r_ = func_08895BD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F538;
L_08A2F538:;
    v1 = 0 + 0;
    goto L_08A2F248;
}

/* 08A2F540 */
rv_t func_08A2F540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2F540:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = 0x820c0000u;
    v0 = v0 & 0xff;
    a1 = 1;
    a2 = 1;
    cnd_ = v0 == 0;
    a0 = a0 | 0x81de;
    if (cnd_) { goto L_08A2F580; }
    goto L_08A2F564;
L_08A2F564:;
    a0 = D_08AE1EF4 - (7924);
    a0 = a0 + 7924;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F570;
L_08A2F570:;
    goto L_08A2F574;
L_08A2F574:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F580:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F588;
L_08A2F588:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F594;
L_08A2F594:;
    a0 = 4;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F59C;
L_08A2F59C:;
    goto L_08A2F574;
}

/* 08A2F5A4 */
rv_t func_08A2F5A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2F5A4:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AE1F1C - (7964);
    a0 = a0 + 7964;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A2F5D0; }
    goto L_08A2F5C4;
L_08A2F5C4:;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A2F5E8; }
    goto L_08A2F5D0;
L_08A2F5D0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F5D8;
L_08A2F5D8:;
    goto L_08A2F5DC;
L_08A2F5DC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F5E8:;
    a0 = 0xcd120000u;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = a0 | 0xe72f;
    if (cnd_) { goto L_08A2F600; }
    goto L_08A2F5F8;
L_08A2F5F8:;
    v0 = D_08B1BE00 - (-16896);
    ST32(v0-16896, v1);
    goto L_08A2F600;
L_08A2F600:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F608;
L_08A2F608:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F614;
L_08A2F614:;
    a0 = 2;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F61C;
L_08A2F61C:;
    goto L_08A2F5DC;
}

/* 08A2F624 */
rv_t func_08A2F624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2F624:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1F44 - (8004);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 8004;
    if (cnd_) { goto L_08A2F674; }
    goto L_08A2F640;
L_08A2F640:;
    v0 = D_08C311D4 - (4564);
    a0 = LD32(v0+4564);
    v1 = D_08C2D0A7 - (-12121);
    v0 = 4;
    cnd_ = a0 == v0;
    ST8(v1-12121, 0);
    if (cnd_) { goto L_08A2F668; }
    goto L_08A2F658;
L_08A2F658:;
    goto L_08A2F65C;
L_08A2F65C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F668:;
    v0 = D_08B1CA20 - (-13792);
    ST8(v0-13792, 0);
    goto L_08A2F658;
L_08A2F674:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F67C;
L_08A2F67C:;
    goto L_08A2F65C;
}

/* 08A2F684 */
rv_t func_08A2F684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2F684:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1F70 - (8048);
    v0 = v0 & 0xff;
    a0 = a0 + 8048;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2F6C0; }
    goto L_08A2F6A4;
L_08A2F6A4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F6AC;
L_08A2F6AC:;
    goto L_08A2F6B0;
L_08A2F6B0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F6C0:;
    func_08979AD8();
    goto L_08A2F6C8;
L_08A2F6C8:;
    a0 = 0x338a0000u;
    a0 = a0 | 0x2c7e;
    v0 = D_08C2D19C - (-11876);
    ST32(v0-11876, 0);
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F6DC;
L_08A2F6DC:;
    a1 = 0x25dc0000u;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = a1 | 0x4ae2;
    if (cnd_) { goto L_08A2F6AC; }
    goto L_08A2F6EC;
L_08A2F6EC:;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F6F4;
L_08A2F6F4:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A2F6AC; }
    goto L_08A2F700;
L_08A2F700:;
    v0 = func_08888FD8(a0);
    goto L_08A2F708;
L_08A2F708:;
    v1 = 2005;
    a0 = s0 + 0;
    cnd_ = v0 != v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A2F6AC; }
    goto L_08A2F718;
L_08A2F718:;
    { rv_t r_ = func_08895BD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F720;
L_08A2F720:;
    goto L_08A2F6B0;
}

/* 08A2F728 */
rv_t func_08A2F728(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2F728:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1F94 - (8084);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 8084;
    if (cnd_) { goto L_08A2F784; }
    goto L_08A2F744;
L_08A2F744:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2F774; }
    goto L_08A2F758;
L_08A2F758:;
    a0 = 0xa4b30000u;
    goto L_08A2F75C;
L_08A2F75C:;
    a0 = a0 | 0x256b;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F764;
L_08A2F764:;
    goto L_08A2F768;
L_08A2F768:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F774:;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F77C;
L_08A2F77C:;
    a0 = 0xa4b30000u;
    goto L_08A2F75C;
L_08A2F784:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F78C;
L_08A2F78C:;
    goto L_08A2F768;
}

/* 08A2F794 */
rv_t func_08A2F794(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2F794:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1FB8 - (8120);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 8120;
    if (cnd_) { goto L_08A2F7E4; }
    goto L_08A2F7B0;
L_08A2F7B0:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2F7D4; }
    goto L_08A2F7C4;
L_08A2F7C4:;
    goto L_08A2F7C8;
L_08A2F7C8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2F7D4:;
    { rv_t r_ = func_08971BFC(t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F7DC;
L_08A2F7DC:;
    goto L_08A2F7C8;
L_08A2F7E4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F7EC;
L_08A2F7EC:;
    goto L_08A2F7C8;
}

/* 08A2F7F4 */
rv_t func_08A2F7F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A2F7F4:;
    sp = sp - 48;
    a2 = a2 & 0xff;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A2F828; }
    goto L_08A2F820;
L_08A2F820:;
    cnd_ = a1 == 0;
    v1 = D_08C29F04 - (-24828);
    if (cnd_) { goto L_08A2F858; }
    goto L_08A2F828;
L_08A2F828:;
    a0 = D_08AE1FD0 - (8144);
    a0 = a0 + 8144;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F834;
L_08A2F834:;
    v0 = 1;
    goto L_08A2F838;
L_08A2F838:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A2F858:;
    v1 = v1 - 24828;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    s3 = 0 + 0;
    s2 = 0 + 0;
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AD13BC(a0, a1);
    goto L_08A2F888;
L_08A2F888:;
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AD13BC(a0, a1);
    goto L_08A2F89C;
L_08A2F89C:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A2F8E4; }
    goto L_08A2F8A8;
L_08A2F8A8:;
    s4 = 1;
    s0 = LD32(a0);
    goto L_08A2F8B0;
L_08A2F8B0:;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A2F8CC; }
    goto L_08A2F8B8;
L_08A2F8B8:;
    v0 = LD32(s0+72);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A2FB24; }
    goto L_08A2F8C8;
L_08A2F8C8:;
    a0 = sp + 0;
    goto L_08A2F8CC;
L_08A2F8CC:;
    a1 = 1;
    func_08AD13BC(a0, a1);
    goto L_08A2F8D4;
L_08A2F8D4:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08A2F8B0; }
    goto L_08A2F8E0;
L_08A2F8E0:;
    v0 = 1;
    goto L_08A2F8E4;
L_08A2F8E4:;
    cnd_ = s1 == v0;
    v0 = s2 < 0x8u;
    if (cnd_) { goto L_08A2FB10; }
    goto L_08A2F8EC;
L_08A2F8EC:;
    v0 = 2;
    cnd_ = s1 == v0;
    v0 = s3 < 0x8u;
    if (cnd_) { goto L_08A2FB10; }
    goto L_08A2F8F8;
L_08A2F8F8:;
    v0 = D_08C2D0A5 - (-12123);
    v1 = LD_U8(v0-12123);
    cnd_ = v1 == 0;
    v0 = (s32)s1 < 3;
    if (cnd_) { goto L_08A2FA20; }
    goto L_08A2F908;
L_08A2F908:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08A2FA20; }
    goto L_08A2F910;
L_08A2F910:;
    cnd_ = s1 == a0;
    v0 = (s32)s1 < 2;
    if (cnd_) { goto L_08A2FA00; }
    goto L_08A2F918;
L_08A2F918:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A2F9EC; }
    goto L_08A2F920;
L_08A2F920:;
    cnd_ = s1 == v0;
    v0 = D_08B1BB5C - (-17572);
    if (cnd_) { goto L_08A2F954; }
    goto L_08A2F928;
L_08A2F928:;
    a0 = LD32(sp);
    goto L_08A2F92C;
L_08A2F92C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2F944; }
    goto L_08A2F93C;
L_08A2F93C:;
    v0 = 0 + 0;
    goto L_08A2F838;
L_08A2F944:;
    { u64 r_ = func_08AD1460(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F94C;
L_08A2F94C:;
    v0 = 0 + 0;
    goto L_08A2F838;
L_08A2F954:;
    v1 = LD32(v0-17572);
    cnd_ = v1 != 0;
    v1 = D_08B1C148 - (-16056);
    if (cnd_) { goto L_08A2F9E0; }
    goto L_08A2F960;
L_08A2F960:;
    ST32(v1-16056, a0);
    goto L_08A2F964;
L_08A2F964:;
    v0 = D_08C2C3E0 - (-15392);
    a0 = LD32(v0-15392);
    cnd_ = a0 == 0;
    s0 = 0 < a0;
    if (cnd_) { goto L_08A2F998; }
    goto L_08A2F974;
L_08A2F974:;
    a1 = LD32(v1-16056);
    v0 = func_08A09190(a0, a1, 0, 0);
    goto L_08A2F97C;
L_08A2F97C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A2F998; }
    goto L_08A2F984;
L_08A2F984:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2F9D0; }
    goto L_08A2F998;
L_08A2F998:;
    a0 = 0x636b0000u;
    goto L_08A2F99C;
L_08A2F99C:;
    a0 = a0 | 0x2446;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F9A4;
L_08A2F9A4:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2F9C0; }
    goto L_08A2F9B8;
L_08A2F9B8:;
    v0 = s0 + 0;
    goto L_08A2F838;
L_08A2F9C0:;
    { u64 r_ = func_08AD1460(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2F9C8;
L_08A2F9C8:;
    v0 = s0 + 0;
    goto L_08A2F838;
L_08A2F9D0:;
    a0 = 0 + 0;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2F9D8;
L_08A2F9D8:;
    a0 = 0x636b0000u;
    goto L_08A2F99C;
L_08A2F9E0:;
    v0 = 3;
    goto L_08A2F9E4;
L_08A2F9E4:;
    ST32(v1-16056, v0);
    goto L_08A2F964;
L_08A2F9EC:;
    v1 = D_08B1C148 - (-16056);
    cnd_ = s1 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A2F9E4; }
    goto L_08A2F9F8;
L_08A2F9F8:;
    a0 = LD32(sp);
    goto L_08A2F92C;
L_08A2FA00:;
    v0 = D_08B1BB5C - (-17572);
    v1 = LD32(v0-17572);
    cnd_ = v1 != 0;
    v1 = D_08B1C148 - (-16056);
    if (cnd_) { goto L_08A2FA18; }
    goto L_08A2FA10;
L_08A2FA10:;
    ST32(v1-16056, 0);
    goto L_08A2F964;
L_08A2FA18:;
    v0 = 2;
    goto L_08A2F9E4;
L_08A2FA20:;
    v0 = func_08978770();
    goto L_08A2FA28;
L_08A2FA28:;
    a1 = D_08AE1FF0 - (8176);
    a0 = v0 + 0;
    a1 = a1 + 8176;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FA3C;
L_08A2FA3C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0xbf670000u; goto L_08A2FAEC; }
    goto L_08A2FA44;
L_08A2FA44:;
    a0 = 0x636b0000u;
    a0 = a0 | 0x2446;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FA50;
L_08A2FA50:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FA5C;
L_08A2FA5C:;
    a0 = 0x2700000u;
    a0 = a0 | 0x9172;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FA68;
L_08A2FA68:;
    v1 = D_08C2932C - (-27860);
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2FADC; }
    goto L_08A2FA7C;
L_08A2FA7C:;
    func_08A2E430(0, 0);
    goto L_08A2FA84;
L_08A2FA84:;
    v0 = D_08AEFB4C - (-1204);
    f0 = BITSF(LD32(v0-1204));
    a0 = 0xa4b30000u;
    v1 = D_08B1C154 - (-16044);
    a0 = a0 | 0x256b;
    a1 = 1;
    a2 = 1;
    v0 = D_08B1C13C - (-16068);
    ST32(v1-16044, FBITS(f0));
    ST8(v0-16068, 0);
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FAB0;
L_08A2FAB0:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FAB8;
L_08A2FAB8:;
    a0 = LD32(sp);
    goto L_08A2FABC;
L_08A2FABC:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08A2F834; }
    goto L_08A2FACC;
L_08A2FACC:;
    { u64 r_ = func_08AD1460(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FAD4;
L_08A2FAD4:;
    v0 = 1;
    goto L_08A2F838;
L_08A2FADC:;
    a0 = 0 + 0;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FAE4;
L_08A2FAE4:;
    goto L_08A2FA7C;
L_08A2FAEC:;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FAF4;
L_08A2FAF4:;
    a0 = 0x636b0000u;
    a0 = a0 | 0x2446;
    a1 = 1;
    goto L_08A2FB00;
L_08A2FB00:;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FB08;
L_08A2FB08:;
    a0 = LD32(sp);
    goto L_08A2FABC;
L_08A2FB10:;
    a0 = 0x7730000u;
    cnd_ = v0 != 0;
    a0 = a0 | 0x2395;
    if (cnd_) { goto L_08A2F8F8; }
    goto L_08A2FB1C;
L_08A2FB1C:;
    a1 = 1;
    goto L_08A2FB00;
L_08A2FB24:;
    v0 = func_0897E364(a0);
    goto L_08A2FB2C;
L_08A2FB2C:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A2F8CC; }
    goto L_08A2FB34;
L_08A2FB34:;
    a0 = LD32(s0+64);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FB3C;
L_08A2FB3C:;
    a0 = LD32(s0+64);
    v0 = v0 < 0x1u;
    s2 = s2 + v0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FB4C;
L_08A2FB4C:;
    v0 = v0 ^ s4;
    v0 = v0 < 0x1u;
    s3 = s3 + v0;
    goto L_08A2F8C8;
}

/* 08A2FB5C */
rv_t func_08A2FB5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FB5C:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE1FF8 - (8184);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 8184;
    if (cnd_) { goto L_08A2FC08; }
    goto L_08A2FB78;
L_08A2FB78:;
    v0 = D_08B1C15D - (-16035);
    v1 = LD_U8(v0-16035);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A2FBA0; }
    goto L_08A2FB88;
L_08A2FB88:;
    v0 = D_08B1BDF4 - (-16908);
    a0 = LD32(v0-16908);
    v1 = 3;
    cnd_ = a0 == v1;
    v0 = D_08C2CE70 - (-12688);
    if (cnd_) { goto L_08A2FBAC; }
    goto L_08A2FB9C;
L_08A2FB9C:;
    goto L_08A2FBA0;
L_08A2FBA0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FBAC:;
    v1 = LD32(v0-12688);
    cnd_ = v1 != a0;
    if (cnd_) { goto L_08A2FBA0; }
    goto L_08A2FBB8;
L_08A2FBB8:;
    v0 = D_08C28F60 - (-28832);
    v1 = LD32(v0-28832);
    cnd_ = v1 != 0;
    a0 = 0xbf670000u;
    if (cnd_) { goto L_08A2FBDC; }
    goto L_08A2FBC8;
L_08A2FBC8:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FBD0;
L_08A2FBD0:;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_08A2FBA0; }
    goto L_08A2FBD8;
L_08A2FBD8:;
    a0 = 0xbf670000u;
    goto L_08A2FBDC;
L_08A2FBDC:;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FBE4;
L_08A2FBE4:;
    a0 = 0x636b0000u;
    a0 = a0 | 0x2446;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FBF8;
L_08A2FBF8:;
    a0 = 1;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FC00;
L_08A2FC00:;
    goto L_08A2FBA0;
L_08A2FC08:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FC10;
L_08A2FC10:;
    goto L_08A2FBA0;
}

/* 08A2FC18 */
rv_t func_08A2FC18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FC18:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A2FCCC; }
    goto L_08A2FC30;
L_08A2FC30:;
    v0 = D_08C2C3E0 - (-15392);
    s1 = LD32(v0-15392);
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2FC98; }
    goto L_08A2FC40;
L_08A2FC40:;
    v0 = LD32(s1+4);
    v0 = v0 ^ 0x3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A2FCBC; }
    goto L_08A2FC50;
L_08A2FC50:;
    v0 = D_08C2D188 - (-11896);
    goto L_08A2FC54;
L_08A2FC54:;
    s0 = LD_U8(v0-11896);
    cnd_ = s0 == 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_08A2FC70; }
    goto L_08A2FC60;
L_08A2FC60:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { s0 = 0 + 0; goto L_08A2FC80; }
    goto L_08A2FC70;
L_08A2FC70:;
    { u64 r_ = func_08A3CC70(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FC78;
L_08A2FC78:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = 0 + 0; goto L_08A2FC80; }
    goto L_08A2FC80;
L_08A2FC80:;
    func_08A2B058();
    goto L_08A2FC88;
L_08A2FC88:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A2FCAC; }
    goto L_08A2FC90;
L_08A2FC90:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A09138(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FC98;
L_08A2FC98:;
    goto L_08A2FC9C;
L_08A2FC9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FCAC:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A090FC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FCB4;
L_08A2FCB4:;
    goto L_08A2FC9C;
L_08A2FCBC:;
    { rv_t r_ = func_08A2E48C(t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FCC4;
L_08A2FCC4:;
    v0 = D_08C2D188 - (-11896);
    goto L_08A2FC54;
L_08A2FCCC:;
    a0 = D_08AE202C - (8236);
    a0 = a0 + 8236;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FCD8;
L_08A2FCD8:;
    v0 = 1;
    goto L_08A2FC98;
}

/* 08A2FCE0 */
rv_t func_08A2FCE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FCE0:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2078 - (8312);
    v0 = v0 & 0xff;
    a0 = a0 + 8312;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A2FDA8; }
    goto L_08A2FD00;
L_08A2FD00:;
    v0 = D_08C2D0A5 - (-12123);
    v1 = LD_U8(v0-12123);
    a0 = 0xbf670000u;
    cnd_ = v1 != 0;
    a0 = a0 | 0x9e15;
    if (cnd_) { goto L_08A2FD28; }
    goto L_08A2FD14;
L_08A2FD14:;
    v0 = 1;
    goto L_08A2FD18;
L_08A2FD18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FD28:;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FD30;
L_08A2FD30:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A2FD14; }
    goto L_08A2FD38;
L_08A2FD38:;
    v0 = D_08C2D0CC - (-12084);
    f1 = BITSF(LD32(v0-12084));
    v0 = D_08AEFB50 - (-1200);
    f0 = BITSF(LD32(v0-1200));
    v1 = D_08B285B4 - (-31308);
    f2 = BITSF(LD32(v1-31308));
    f1 = f1 + f0;
    a0 = 0xaa0e0000u;
    a0 = a0 | 0xf08f;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2FD18; }
    goto L_08A2FD6C;
L_08A2FD6C:;
    v0 = LD32(a1+156);
    s0 = v0 + a0;
    a0 = s0 + 0;
    { u64 r_ = func_08A2ABD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FD7C;
L_08A2FD7C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_08A2FD18; }
    goto L_08A2FD84;
L_08A2FD84:;
    func_08A2E430(0, 0);
    goto L_08A2FD8C;
L_08A2FD8C:;
    a0 = 0xbf670000u;
    v0 = D_08B1C140 - (-16064);
    a0 = a0 | 0x9e15;
    ST32(v0-16064, s0);
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FDA0;
L_08A2FDA0:;
    v0 = 1;
    goto L_08A2FD18;
L_08A2FDA8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FDB0;
L_08A2FDB0:;
    v0 = 1;
    goto L_08A2FD18;
}

/* 08A2FDB8 */
rv_t func_08A2FDB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FDB8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE20AC - (8364);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 8364;
    if (cnd_) { goto L_08A2FDEC; }
    goto L_08A2FDD4;
L_08A2FDD4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FDDC;
L_08A2FDDC:;
    goto L_08A2FDE0;
L_08A2FDE0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FDEC:;
    { rv_t r_ = func_08A2A844(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FDF4;
L_08A2FDF4:;
    cnd_ = v0 == 0;
    v1 = D_08C2932C - (-27860);
    if (cnd_) { goto L_08A2FE1C; }
    goto L_08A2FDFC;
L_08A2FDFC:;
    v0 = LD_U8(v1-27860);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A2FDDC; }
    goto L_08A2FE0C;
L_08A2FE0C:;
    { rv_t r_ = func_08971F20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FE14;
L_08A2FE14:;
    goto L_08A2FDE0;
L_08A2FE1C:;
    { rv_t r_ = func_08A2E48C(0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FE24;
L_08A2FE24:;
    cnd_ = v0 != 0;
    v1 = D_08C2932C - (-27860);
    if (cnd_) { goto L_08A2FDFC; }
    goto L_08A2FE2C;
L_08A2FE2C:;
    a0 = (u32)-1;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FE34;
L_08A2FE34:;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FE40;
L_08A2FE40:;
    goto L_08A2FDE0;
}

/* 08A2FE48 */
rv_t func_08A2FE48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FE48:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE20EC - (8428);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 8428;
    if (cnd_) { goto L_08A2FE7C; }
    goto L_08A2FE64;
L_08A2FE64:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FE6C;
L_08A2FE6C:;
    v0 = 1;
    goto L_08A2FE70;
L_08A2FE70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FE7C:;
    { rv_t r_ = func_08A2A844(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FE84;
L_08A2FE84:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2FE70; }
    goto L_08A2FE8C;
L_08A2FE8C:;
    v0 = D_08B1C154 - (-16044);
    v1 = D_08AEFB54 - (-1196);
    f1 = BITSF(LD32(v0-16044));
    f0 = BITSF(LD32(v1-1196));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A2FE70; }
    goto L_08A2FEAC;
L_08A2FEAC:;
    { rv_t r_ = func_08A2E3E0(0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FEB4;
L_08A2FEB4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08A2FE70; }
    goto L_08A2FEBC;
L_08A2FEBC:;
    a0 = 0xc5810000u;
    a0 = a0 | 0x23d1;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FEC8;
L_08A2FEC8:;
    v0 = 1;
    goto L_08A2FE70;
}

/* 08A2FED0 */
rv_t func_08A2FED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FED0:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE212C - (8492);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 8492;
    if (cnd_) { goto L_08A2FF38; }
    goto L_08A2FEEC;
L_08A2FEEC:;
    v0 = D_08B1BDF4 - (-16908);
    v1 = LD32(v0-16908);
    a0 = 0x636b0000u;
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = a0 | 0x2446;
    if (cnd_) { goto L_08A2FF14; }
    goto L_08A2FF04;
L_08A2FF04:;
    goto L_08A2FF08;
L_08A2FF08:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FF14:;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FF1C;
L_08A2FF1C:;
    a0 = 0x8e760000u;
    a1 = 1;
    a0 = a0 | 0x136b;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FF30;
L_08A2FF30:;
    goto L_08A2FF08;
L_08A2FF38:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FF40;
L_08A2FF40:;
    goto L_08A2FF08;
}

/* 08A2FF48 */
rv_t func_08A2FF48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FF48:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2158 - (8536);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 8536;
    if (cnd_) { goto L_08A2FF7C; }
    goto L_08A2FF64;
L_08A2FF64:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FF6C;
L_08A2FF6C:;
    goto L_08A2FF70;
L_08A2FF70:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FF7C:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FF84;
L_08A2FF84:;
    a0 = 2;
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FF8C;
L_08A2FF8C:;
    goto L_08A2FF70;
}

/* 08A2FF94 */
rv_t func_08A2FF94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FF94:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2188 - (8584);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 8584;
    if (cnd_) { goto L_08A2FFC8; }
    goto L_08A2FFB0;
L_08A2FFB0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A2FFB8;
L_08A2FFB8:;
    goto L_08A2FFBC;
L_08A2FFBC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A2FFC8:;
    a0 = 0 + 0;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A2FFD0;
L_08A2FFD0:;
    v1 = 2;
    v0 = D_08C28DC8 - (-29240);
    a0 = 1;
    ST32(v0-29240, v1);
    func_08A3CC54(a0);
    goto L_08A2FFE4;
L_08A2FFE4:;
    goto L_08A2FFBC;
}

/* 08A2FFEC */
rv_t func_08A2FFEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A2FFEC:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30008; }
    goto L_08A30000;
L_08A30000:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A30024; }
    goto L_08A30008;
L_08A30008:;
    a0 = D_08AE21CC - (8652);
    a0 = a0 + 8652;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30014;
L_08A30014:;
    v0 = 1;
    goto L_08A3001C;
L_08A3001C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30024:;
    { rv_t r_ = func_08A32064(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3002C;
L_08A3002C:;
    goto L_08A3001C;
}

/* 08A30034 */
rv_t func_08A30034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30034:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30050; }
    goto L_08A30048;
L_08A30048:;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A3006C; }
    goto L_08A30050;
L_08A30050:;
    a0 = D_08AE21F4 - (8692);
    a0 = a0 + 8692;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3005C;
L_08A3005C:;
    v0 = 1;
    goto L_08A30064;
L_08A30064:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3006C:;
    { rv_t r_ = func_08A32064(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30074;
L_08A30074:;
    goto L_08A30064;
}

/* 08A3007C */
rv_t func_08A3007C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3007C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30098; }
    goto L_08A30090;
L_08A30090:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A300B4; }
    goto L_08A30098;
L_08A30098:;
    a0 = D_08AE2218 - (8728);
    a0 = a0 + 8728;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A300A4;
L_08A300A4:;
    v0 = 1;
    goto L_08A300AC;
L_08A300AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A300B4:;
    { rv_t r_ = func_08A323C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A300BC;
L_08A300BC:;
    goto L_08A300AC;
}

/* 08A300C4 */
rv_t func_08A300C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A300C4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A300E0; }
    goto L_08A300D8;
L_08A300D8:;
    cnd_ = a2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A300FC; }
    goto L_08A300E0;
L_08A300E0:;
    a0 = D_08AE2240 - (8768);
    a0 = a0 + 8768;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A300EC;
L_08A300EC:;
    v0 = 1;
    goto L_08A300F4;
L_08A300F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A300FC:;
    { rv_t r_ = func_08A323C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30104;
L_08A30104:;
    goto L_08A300F4;
}

/* 08A3010C */
rv_t func_08A3010C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3010C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A3012C; }
    goto L_08A30120;
L_08A30120:;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A30148; }
    goto L_08A3012C;
L_08A3012C:;
    a0 = D_08AE2264 - (8804);
    a0 = a0 + 8804;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30138;
L_08A30138:;
    v0 = 1;
    goto L_08A30140;
L_08A30140:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30148:;
    { rv_t r_ = func_08A3253C(a0, a1, a2, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30150;
L_08A30150:;
    goto L_08A30140;
}

/* 08A30158 */
rv_t func_08A30158(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30158:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A30178; }
    goto L_08A3016C;
L_08A3016C:;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A30194; }
    goto L_08A30178;
L_08A30178:;
    a0 = D_08AE228C - (8844);
    a0 = a0 + 8844;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30184;
L_08A30184:;
    v0 = 1;
    goto L_08A3018C;
L_08A3018C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30194:;
    { rv_t r_ = func_08A3253C(a0, a1, a2, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3019C;
L_08A3019C:;
    goto L_08A3018C;
}

/* 08A301A4 */
rv_t func_08A301A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A301A4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A301C4; }
    goto L_08A301B8;
L_08A301B8:;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A301E0; }
    goto L_08A301C4;
L_08A301C4:;
    a0 = D_08AE22B0 - (8880);
    a0 = a0 + 8880;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A301D0;
L_08A301D0:;
    v0 = 1;
    goto L_08A301D8;
L_08A301D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A301E0:;
    { rv_t r_ = func_08A3253C(a0, a1, a2, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A301E8;
L_08A301E8:;
    goto L_08A301D8;
}

/* 08A301F0 */
rv_t func_08A301F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A301F0:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A30210; }
    goto L_08A30204;
L_08A30204:;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_08A3022C; }
    goto L_08A30210;
L_08A30210:;
    a0 = D_08AE22DC - (8924);
    a0 = a0 + 8924;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3021C;
L_08A3021C:;
    v0 = 1;
    goto L_08A30224;
L_08A30224:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3022C:;
    { rv_t r_ = func_08A3253C(a0, a1, a2, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30234;
L_08A30234:;
    goto L_08A30224;
}

/* 08A3023C */
rv_t func_08A3023C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3023C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A3025C; }
    goto L_08A30250;
L_08A30250:;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_08A30278; }
    goto L_08A3025C;
L_08A3025C:;
    a0 = D_08AE2304 - (8964);
    a0 = a0 + 8964;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30268;
L_08A30268:;
    v0 = 1;
    goto L_08A30270;
L_08A30270:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30278:;
    { rv_t r_ = func_08A3253C(a0, a1, a2, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30280;
L_08A30280:;
    goto L_08A30270;
}

/* 08A30288 */
rv_t func_08A30288(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30288:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    v0 = a2 & 0xff;
    if (cnd_) { goto L_08A302A8; }
    goto L_08A3029C;
L_08A3029C:;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_08A302C4; }
    goto L_08A302A8;
L_08A302A8:;
    a0 = D_08AE2330 - (9008);
    a0 = a0 + 9008;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A302B4;
L_08A302B4:;
    v0 = 1;
    goto L_08A302BC;
L_08A302BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A302C4:;
    { rv_t r_ = func_08A3253C(a0, a1, a2, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A302CC;
L_08A302CC:;
    goto L_08A302BC;
}

/* 08A302D4 */
rv_t func_08A302D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A302D4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2358 - (9048);
    v0 = v0 & 0xff;
    a0 = a0 + 9048;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A30318; }
    goto L_08A302F8;
L_08A302F8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30300;
L_08A30300:;
    goto L_08A30304;
L_08A30304:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30318:;
    s0 = D_08B285B4 - (-31308);
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30320;
L_08A30320:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    s1 = D_08C2D0C8 - (-12088);
    if (cnd_) { goto L_08A30300; }
    goto L_08A3032C;
L_08A3032C:;
    f1 = BITSF(LD32(s0-31308));
    f0 = BITSF(LD32(s1-12088));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A30304; }
    goto L_08A30344;
L_08A30344:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3034C;
L_08A3034C:;
    v1 = 0x8af00000u;
    v1 = v1 | 0x6fb0;
    cnd_ = v0 == v1;
    a0 = 0x8af00000u;
    if (cnd_) { goto L_08A30378; }
    goto L_08A3035C;
L_08A3035C:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30364;
L_08A30364:;
    v1 = 0x30890000u;
    v1 = v1 | 0xe67d;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08A30304; }
    goto L_08A30374;
L_08A30374:;
    a0 = 0x8af00000u;
    goto L_08A30378;
L_08A30378:;
    a0 = a0 | 0x6fb0;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30380;
L_08A30380:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3038C;
L_08A3038C:;
    v0 = D_08AEFB58 - (-1192);
    f0 = BITSF(LD32(v0-1192));
    f1 = BITSF(LD32(s0-31308));
    v0 = D_08B1BDF4 - (-16908);
    ST32(v0-16908, 0);
    f1 = f1 + f0;
    v0 = D_08B1C168 - (-16024);
    ST32(v0-16024, 0);
    ST32(s1-12088, FBITS(f1));
    goto L_08A30300;
}

/* 08A303B4 */
rv_t func_08A303B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A303B4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE239C - (9116);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 9116;
    if (cnd_) { goto L_08A303E8; }
    goto L_08A303D0;
L_08A303D0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A303D8;
L_08A303D8:;
    goto L_08A303DC;
L_08A303DC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A303E8:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A303F0;
L_08A303F0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A303DC; }
    goto L_08A303FC;
L_08A303FC:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30404;
L_08A30404:;
    v1 = 0x30890000u;
    v1 = v1 | 0xe67d;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08A303DC; }
    goto L_08A30414;
L_08A30414:;
    v0 = D_08C29328 - (-27864);
    a1 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a1 == v1;
    a0 = 13;
    if (cnd_) { goto L_08A303DC; }
    goto L_08A30428;
L_08A30428:;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30430;
L_08A30430:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3043C;
L_08A3043C:;
    a0 = 0x8af00000u;
    a0 = a0 | 0x6fb0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30450;
L_08A30450:;
    goto L_08A303DC;
}

/* 08A30458 */
rv_t func_08A30458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30458:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE23C8 - (9160);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 9160;
    if (cnd_) { goto L_08A3048C; }
    goto L_08A30474;
L_08A30474:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3047C;
L_08A3047C:;
    goto L_08A30480;
L_08A30480:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3048C:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30494;
L_08A30494:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A30480; }
    goto L_08A304A0;
L_08A304A0:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A304A8;
L_08A304A8:;
    v1 = 0x8af00000u;
    v1 = v1 | 0x6fb0;
    cnd_ = v0 != v1;
    a0 = 14;
    if (cnd_) { goto L_08A3047C; }
    goto L_08A304B8;
L_08A304B8:;
    { u64 r_ = func_08A2756C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A304C0;
L_08A304C0:;
    a0 = 0x8af00000u;
    a0 = a0 | 0x6fb0;
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A304CC;
L_08A304CC:;
    a0 = 0x30890000u;
    a0 = a0 | 0xe67d;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A304E0;
L_08A304E0:;
    goto L_08A30480;
}

/* 08A304E8 */
rv_t func_08A304E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A304E8:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A3052C; }
    goto L_08A30504;
L_08A30504:;
    a0 = D_08AE23F4 - (9204);
    a0 = a0 + 9204;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30510;
L_08A30510:;
    goto L_08A30514;
L_08A30514:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3052C:;
    a0 = 0xe44f0000u;
    a0 = a0 | 0xe2ba;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30538;
L_08A30538:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A30510; }
    goto L_08A30540;
L_08A30540:;
    a1 = 0x31be0000u;
    a0 = v0 + 0;
    a1 = a1 | 0xb06d;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30550;
L_08A30550:;
    s1 = v0 + 0;
    v0 = D_08C2CF34 - (-12492);
    v1 = LD_U16(v0-12492);
    a0 = 0 < s1;
    v1 = 0 < v1;
    v1 = v1 & a0;
    cnd_ = v1 != 0;
    a1 = v0 - 12492;
    if (cnd_) { goto L_08A30640; }
    goto L_08A30570;
L_08A30570:;
    s2 = D_08C2D18A - (-11894);
    v0 = LD_U8(s2-11894);
    a1 = 0xc1130000u;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = a1 | 0xa85e;
    if (cnd_) { goto L_08A30594; }
    goto L_08A30588;
L_08A30588:;
    a1 = 0x52a60000u;
    a0 = s0 + 0;
    a1 = a1 | 0xd167;
    goto L_08A30594;
L_08A30594:;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3059C;
L_08A3059C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A30510; }
    goto L_08A305A4;
L_08A305A4:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A305AC;
L_08A305AC:;
    v1 = 1002;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_08A30514; }
    goto L_08A305B8;
L_08A305B8:;
    v0 = D_08B1C14C - (-16052);
    a0 = LD32(v0-16052);
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    v0 = D_08C2D0B4 - (-12108);
    if (cnd_) { goto L_08A305D8; }
    goto L_08A305CC;
L_08A305CC:;
    a1 = LD32(v0-12108);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A30624; }
    goto L_08A305D8;
L_08A305D8:;
    v0 = LD_U8(s2-11894);
    a1 = 0x76ec0000u;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A30620; }
    goto L_08A305E8;
L_08A305E8:;
    s0 = D_08B1C148 - (-16056);
    a0 = LD32(s0-16056);
    a1 = 0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08A305F8;
L_08A305F8:;
    a1 = 0x76ec0000u;
    cnd_ = v0 == 0;
    a0 = 2;
    if (cnd_) { goto L_08A30620; }
    goto L_08A30604;
L_08A30604:;
    a0 = LD32(s0-16056);
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3060C;
L_08A3060C:;
    a1 = 0x76ec0000u;
    cnd_ = v0 == 0;
    a0 = 3;
    if (cnd_) { goto L_08A30620; }
    goto L_08A30618;
L_08A30618:;
    a1 = 0x76ec0000u;
    a0 = 1;
    goto L_08A30620;
L_08A30620:;
    a1 = a1 | 0xf915;
    goto L_08A30624;
L_08A30624:;
    v0 = func_0897A064(a0, a1);
    goto L_08A3062C;
L_08A3062C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30638;
L_08A30638:;
    goto L_08A30514;
L_08A30640:;
    a0 = s1 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30648;
L_08A30648:;
    v1 = 1;
    v0 = D_08C2D09C - (-12132);
    ST8(v0-12132, v1);
    goto L_08A30570;
}

/* 08A30658 */
rv_t func_08A30658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30658:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2428 - (9256);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 9256;
    if (cnd_) { goto L_08A306C4; }
    goto L_08A30674;
L_08A30674:;
    v0 = D_08C2D18A - (-11894);
    v1 = LD_U8(v0-11894);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A306A8; }
    goto L_08A30684;
L_08A30684:;
    v0 = D_08C29328 - (-27864);
    v1 = LD32(v0-27864);
    a0 = 0x681c0000u;
    v0 = 5;
    a0 = a0 | 0x35f;
    a1 = 1;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_08A306B4; }
    goto L_08A306A4;
L_08A306A4:;
    goto L_08A306A8;
L_08A306A8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A306B4:;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A306BC;
L_08A306BC:;
    goto L_08A306A8;
L_08A306C4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A306CC;
L_08A306CC:;
    goto L_08A306A8;
}

/* 08A306D4 */
rv_t func_08A306D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A306D4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2460 - (9312);
    v0 = v0 & 0xff;
    a0 = a0 + 9312;
    a1 = 10;
    cnd_ = v0 == 0;
    a2 = 50;
    if (cnd_) { goto L_08A30710; }
    goto L_08A306F8;
L_08A306F8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30700;
L_08A30700:;
    goto L_08A30704;
L_08A30704:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30710:;
    a0 = 0 + 0;
    func_088A1DC0(a0, a1, a2);
    goto L_08A30718;
L_08A30718:;
    func_08A28ED0();
    goto L_08A30720;
L_08A30720:;
    a0 = 6;
    a1 = 0 + 0;
    { u64 r_ = func_088A2188(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3072C;
L_08A3072C:;
    goto L_08A30704;
}

/* 08A30734 */
rv_t func_08A30734(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30734:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2484 - (9348);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 9348;
    if (cnd_) { goto L_08A30768; }
    goto L_08A30750;
L_08A30750:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30758;
L_08A30758:;
    goto L_08A3075C;
L_08A3075C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30768:;
    { u64 r_ = func_088A1EC0(a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30770;
L_08A30770:;
    goto L_08A3075C;
}

/* 08A30778 */
rv_t func_08A30778(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30778:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE24A8 - (9384);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 9384;
    if (cnd_) { goto L_08A307C0; }
    goto L_08A30794;
L_08A30794:;
    v0 = D_08B2ACF1 - (-21263);
    v1 = LD_U8(v0-21263);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A307B0; }
    goto L_08A307A4;
L_08A307A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A307B0:;
    { rv_t r_ = func_088A1F70(a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A307B8;
L_08A307B8:;
    v0 = 1;
    goto L_08A307A4;
L_08A307C0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A307C8;
L_08A307C8:;
    v0 = 1;
    goto L_08A307A4;
}

/* 08A307D0 */
rv_t func_08A307D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A307D0:;
    sp = sp - 80;
    a1 = a1 & 0xff;
    a3 = a0 + 0;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30850; }
    goto L_08A307E8;
L_08A307E8:;
    cnd_ = a2 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A30828; }
    goto L_08A307F0;
L_08A307F0:;
    a1 = sp + 0;
    a2 = 32;
    cnd_ = a0 != 0;
    t0 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A30818; }
    goto L_08A30800;
L_08A30800:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = LD32(t0-20980);
    if (cnd_) { goto L_08A3081C; }
    goto L_08A30810;
L_08A30810:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_08A30858; }
    goto L_08A30818;
L_08A30818:;
    v0 = LD32(t0-20980);
    goto L_08A3081C;
L_08A3081C:;
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A30838; }
    goto L_08A30828;
L_08A30828:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A30838:;
    func_088A2664(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A30840;
L_08A30840:;
    a0 = D_08AE1C88 - (7304);
    a0 = a0 + 7304;
    a1 = sp + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30850;
L_08A30850:;
    v1 = 1;
    goto L_08A30828;
L_08A30858:;
    a0 = 187;
    v0 = func_0897A064(a0, a1);
    goto L_08A30860;
L_08A30860:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30868;
L_08A30868:;
    v1 = 1;
    goto L_08A30828;
}

/* 08A30870 */
rv_t func_08A30870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A30870:;
    sp = sp - 288;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A30890; }
    goto L_08A30888;
L_08A30888:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A308B8; }
    goto L_08A30890;
L_08A30890:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    goto L_08A30898;
L_08A30898:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A308A0;
L_08A308A0:;
    v1 = 1;
    goto L_08A308A4;
L_08A308A4:;
    v0 = v1 + 0;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08A308B8:;
    cnd_ = a0 != 0;
    a1 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A308D8; }
    goto L_08A308C0;
L_08A308C0:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = LD32(a1-20980);
    if (cnd_) { goto L_08A308DC; }
    goto L_08A308D0;
L_08A308D0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE2514 - (9492); goto L_08A3096C; }
    goto L_08A308D8;
L_08A308D8:;
    v0 = LD32(a1-20980);
    goto L_08A308DC;
L_08A308DC:;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A308A4; }
    goto L_08A308E8;
L_08A308E8:;
    v0 = func_088A26F8(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A308F0;
L_08A308F0:;
    a0 = v0 + 0;
    a1 = sp + 256;
    a2 = sp + 0;
    a3 = 256;
    s0 = v0 + 0;
    v0 = func_08978B54(a0, a1, a2, a3);
    goto L_08A30908;
L_08A30908:;
    cnd_ = v0 == 0;
    a0 = D_08AE1BA8 - (7080);
    if (cnd_) { goto L_08A30958; }
    goto L_08A30910;
L_08A30910:;
    a0 = sp + 0;
    v0 = func_08977398(a0);
    goto L_08A30918;
L_08A30918:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = D_08AE1BA8 - (7080); goto L_08A30958; }
    goto L_08A30928;
L_08A30928:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A30930;
L_08A30930:;
    a0 = LD32(sp+256);
    s0 = v0 + 0;
    v0 = func_08A270A4(a0);
    goto L_08A3093C;
L_08A3093C:;
    a0 = D_08AE2518 - (9496);
    a0 = a0 + 9496;
    a1 = s0 + 0;
    a2 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30950;
L_08A30950:;
    v1 = 1;
    goto L_08A308A4;
L_08A30958:;
    a0 = a0 + 7080;
    a1 = s0 + 0;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30964;
L_08A30964:;
    v1 = 1;
    goto L_08A308A4;
L_08A3096C:;
    a0 = a0 + 9492;
    goto L_08A30898;
}

/* 08A30974 */
rv_t func_08A30974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A30974:;
    sp = sp - 288;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A309A0; }
    goto L_08A30998;
L_08A30998:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A309D0; }
    goto L_08A309A0;
L_08A309A0:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    goto L_08A309A8;
L_08A309A8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A309B0;
L_08A309B0:;
    v1 = 1;
    goto L_08A309B4;
L_08A309B4:;
    v0 = v1 + 0;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08A309D0:;
    cnd_ = s0 != 0;
    a0 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A309F0; }
    goto L_08A309D8;
L_08A309D8:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = LD32(a0-20980);
    if (cnd_) { goto L_08A309F4; }
    goto L_08A309E8;
L_08A309E8:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE2514 - (9492); goto L_08A30AA4; }
    goto L_08A309F0;
L_08A309F0:;
    v0 = LD32(a0-20980);
    goto L_08A309F4;
L_08A309F4:;
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A309B4; }
    goto L_08A30A00;
L_08A30A00:;
    a0 = s0 + 0;
    v0 = func_088A26BC(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A30A08;
L_08A30A08:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    v0 = func_089735E0(a0);
    goto L_08A30A14;
L_08A30A14:;
    s1 = v0 + 0;
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    a0 = D_08AE1BA8 - (7080);
    if (cnd_) { goto L_08A30A90; }
    goto L_08A30A24;
L_08A30A24:;
    a0 = s0 + 0;
    v0 = func_088A26F8(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A30A2C;
L_08A30A2C:;
    a0 = v0 + 0;
    a1 = sp + 256;
    a2 = sp + 0;
    a3 = 256;
    v0 = func_08978B54(a0, a1, a2, a3);
    goto L_08A30A40;
L_08A30A40:;
    cnd_ = v0 == 0;
    a0 = D_08AE1BA8 - (7080);
    if (cnd_) { goto L_08A30A90; }
    goto L_08A30A48;
L_08A30A48:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A30A60; }
    goto L_08A30A50;
L_08A30A50:;
    a0 = sp + 0;
    v0 = func_089772E4(a0);
    goto L_08A30A58;
L_08A30A58:;
    cnd_ = v0 != 0;
    a0 = 353;
    if (cnd_) { goto L_08A30A80; }
    goto L_08A30A60;
L_08A30A60:;
    a0 = s1 + 0;
    v0 = func_089734CC(a0);
    goto L_08A30A68;
L_08A30A68:;
    a0 = D_08AE1C88 - (7304);
    goto L_08A30A6C;
L_08A30A6C:;
    a0 = a0 + 7304;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30A78;
L_08A30A78:;
    v1 = 1;
    goto L_08A309B4;
L_08A30A80:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A30A88;
L_08A30A88:;
    a0 = D_08AE1C88 - (7304);
    goto L_08A30A6C;
L_08A30A90:;
    a0 = a0 + 7080;
    a1 = s2 + 0;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30A9C;
L_08A30A9C:;
    v1 = 1;
    goto L_08A309B4;
L_08A30AA4:;
    a0 = a0 + 9492;
    goto L_08A309A8;
}

/* 08A30AAC */
rv_t func_08A30AAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30AAC:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30AC8; }
    goto L_08A30AC0;
L_08A30AC0:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A30AEC; }
    goto L_08A30AC8;
L_08A30AC8:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    goto L_08A30AD0;
L_08A30AD0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30AD8;
L_08A30AD8:;
    v1 = 1;
    goto L_08A30ADC;
L_08A30ADC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30AEC:;
    cnd_ = a0 != 0;
    a1 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A30B0C; }
    goto L_08A30AF4;
L_08A30AF4:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = LD32(a1-20980);
    if (cnd_) { goto L_08A30B10; }
    goto L_08A30B04;
L_08A30B04:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE2514 - (9492); goto L_08A30B3C; }
    goto L_08A30B0C;
L_08A30B0C:;
    v0 = LD32(a1-20980);
    goto L_08A30B10;
L_08A30B10:;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A30ADC; }
    goto L_08A30B1C;
L_08A30B1C:;
    v0 = func_088A2734(a0);
    goto L_08A30B24;
L_08A30B24:;
    a0 = D_08AE2528 - (9512);
    a0 = a0 + 9512;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30B34;
L_08A30B34:;
    v1 = 1;
    goto L_08A30ADC;
L_08A30B3C:;
    a0 = a0 + 9492;
    goto L_08A30AD0;
}

/* 08A30B44 */
rv_t func_08A30B44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30B44:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30B60; }
    goto L_08A30B58;
L_08A30B58:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A30B84; }
    goto L_08A30B60;
L_08A30B60:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    goto L_08A30B68;
L_08A30B68:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30B70;
L_08A30B70:;
    v1 = 1;
    goto L_08A30B74;
L_08A30B74:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30B84:;
    cnd_ = a0 != 0;
    a1 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A30BA4; }
    goto L_08A30B8C;
L_08A30B8C:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = LD32(a1-20980);
    if (cnd_) { goto L_08A30BA8; }
    goto L_08A30B9C;
L_08A30B9C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE2514 - (9492); goto L_08A30BD4; }
    goto L_08A30BA4;
L_08A30BA4:;
    v0 = LD32(a1-20980);
    goto L_08A30BA8;
L_08A30BA8:;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A30B74; }
    goto L_08A30BB4;
L_08A30BB4:;
    v0 = func_088A276C(a0);
    goto L_08A30BBC;
L_08A30BBC:;
    a0 = D_08AE2528 - (9512);
    a0 = a0 + 9512;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30BCC;
L_08A30BCC:;
    v1 = 1;
    goto L_08A30B74;
L_08A30BD4:;
    a0 = a0 + 9492;
    goto L_08A30B68;
}

/* 08A30BDC */
rv_t func_08A30BDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A30BDC:;
    sp = sp - 80;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30BF8; }
    goto L_08A30BF0;
L_08A30BF0:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A30C1C; }
    goto L_08A30BF8;
L_08A30BF8:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    goto L_08A30C00;
L_08A30C00:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30C08;
L_08A30C08:;
    v1 = 1;
    goto L_08A30C0C;
L_08A30C0C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A30C1C:;
    cnd_ = a0 != 0;
    a1 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A30C3C; }
    goto L_08A30C24;
L_08A30C24:;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    v0 = LD32(a1-20980);
    if (cnd_) { goto L_08A30C40; }
    goto L_08A30C34;
L_08A30C34:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE2514 - (9492); goto L_08A30D10; }
    goto L_08A30C3C;
L_08A30C3C:;
    v0 = LD32(a1-20980);
    goto L_08A30C40;
L_08A30C40:;
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A30C0C; }
    goto L_08A30C4C;
L_08A30C4C:;
    v0 = func_088A27A4(a0);
    goto L_08A30C54;
L_08A30C54:;
    t6 = v0 + 0;
    v0 = D_08AE2574 - (9588);
    cnd_ = t6 == 0;
    t7 = v0 + 9588;
    if (cnd_) { goto L_08A30CF0; }
    goto L_08A30C64;
L_08A30C64:;
    a0 = D_08AE254C - (9548);
    a1 = D_08AE2560 - (9568);
    v0 = a0 + 9548;
    v1 = a1 + 9568;
    a2 = LD32(a0+9548);
    t2 = LD32(v0+16);
    a0 = LD32(v0+4);
    t3 = LD32(a1+9568);
    a3 = LD32(v0+12);
    a1 = LD32(v0+8);
    t4 = LD32(v1+16);
    t0 = LD32(v1+4);
    v0 = LD32(v1+8);
    t1 = LD32(v1+12);
    ST32(sp+8, a1);
    t5 = 0 + 0;
    ST32(sp+12, a3);
    ST32(sp+16, t2);
    ST32(sp+32, t3);
    ST32(sp+36, t0);
    ST32(sp+40, v0);
    ST32(sp+44, t1);
    ST32(sp+48, t4);
    ST32(sp, a2);
    a2 = sp + 32;
    ST32(sp+4, a0);
    a0 = sp + 0;
    goto L_08A30CD0;
L_08A30CD0:;
    v0 = LD32(a2);
    t5 = t5 + 1;
    v1 = t5 < 0x5u;
    v0 = t6 < v0;
    cnd_ = v0 == 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08A30D08; }
    goto L_08A30CE8;
L_08A30CE8:;
    cnd_ = v1 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A30CD0; }
    goto L_08A30CF0;
L_08A30CF0:;
    a0 = D_08AE2578 - (9592);
    a0 = a0 + 9592;
    a1 = t7 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30D00;
L_08A30D00:;
    v1 = 1;
    goto L_08A30C0C;
L_08A30D08:;
    t7 = LD32(a0);
    goto L_08A30CF0;
L_08A30D10:;
    a0 = a0 + 9492;
    goto L_08A30C00;
}

/* 08A30D18 */
rv_t func_08A30D18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A30D18:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A30D40; }
    goto L_08A30D38;
L_08A30D38:;
    cnd_ = a2 == 0;
    v1 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_08A30D68; }
    goto L_08A30D40;
L_08A30D40:;
    a0 = D_08AE2580 - (9600);
    a0 = a0 + 9600;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30D4C;
L_08A30D4C:;
    v1 = 1;
    goto L_08A30D50;
L_08A30D50:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A30D68:;
    v0 = LD32(v1-20980);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A30D50; }
    goto L_08A30D78;
L_08A30D78:;
    v0 = func_088A2AA4(a0);
    goto L_08A30D80;
L_08A30D80:;
    cnd_ = v0 != 0;
    v0 = D_08B2AEF4 - (-20748);
    if (cnd_) { goto L_08A30E58; }
    goto L_08A30D88;
L_08A30D88:;
    v1 = D_08B2AEF0 - (-20752);
    ST8(v0-20748, 0);
    ST32(v1-20752, 0);
    a0 = s0 + 0;
    goto L_08A30D98;
L_08A30D98:;
    v0 = D_08B2AE98 - (-20840);
    ST32(v0-20840, 0);
    v0 = func_088A26BC(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A30DA4;
L_08A30DA4:;
    a0 = v0 + 0;
    v0 = func_089735E0(a0);
    goto L_08A30DAC;
L_08A30DAC:;
    v1 = v0 ^ 0x6;
    if (v1 == 0) v0 = 0;
    a0 = v0 + 0;
    func_08978CB4(a0);
    goto L_08A30DBC;
L_08A30DBC:;
    a0 = s0 + 0;
    v0 = func_088A26F8(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A30DC4;
L_08A30DC4:;
    a0 = v0 + 0;
    func_08978B00(a0);
    goto L_08A30DCC;
L_08A30DCC:;
    s1 = 1;
    v0 = D_08B1BB3C - (-17604);
    v1 = D_08B1BB38 - (-17608);
    a0 = s0 + 0;
    ST32(v0-17604, s1);
    v0 = D_08C2932C - (-27860);
    ST8(v1-17608, 0);
    v1 = D_08C2932D - (-27859);
    ST8(v1-27859, s1);
    ST8(v0-27860, s1);
    v0 = func_088A2C44(a0);
    goto L_08A30DF8;
L_08A30DF8:;
    a0 = s0 + 0;
    ST32(sp, v0);
    ST8(sp+4, 0);
    ST8(sp+5, 0);
    v0 = func_088A2CB4(a0);
    goto L_08A30E0C;
L_08A30E0C:;
    a1 = v0 + 0;
    a0 = sp + 0;
    func_08979784(a0, a1);
    goto L_08A30E18;
L_08A30E18:;
    a0 = 5;
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30E20;
L_08A30E20:;
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30E28;
L_08A30E28:;
    cnd_ = v0 != 0;
    v0 = D_08B2AE2C - (-20948);
    if (cnd_) { goto L_08A30E3C; }
    goto L_08A30E30;
L_08A30E30:;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, s1);
    goto L_08A30D4C;
L_08A30E3C:;
    v1 = LD32(v0-20948);
    cnd_ = v1 != 0;
    v1 = 3;
    if (cnd_) { goto L_08A30E4C; }
    goto L_08A30E48;
L_08A30E48:;
    v1 = 2;
    goto L_08A30E4C;
L_08A30E4C:;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, v1);
    goto L_08A30D4C;
L_08A30E58:;
    a3 = D_08B25AC8 - (23240);
    v0 = LD32(a3+23240);
    t0 = a3 + 23240;
    v1 = LD32(t0+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    ST32(t0+4, v1);
    a2 = 1;
    v1 = D_08B2AEF4 - (-20748);
    ST8(v1-20748, a2);
    a1 = v0 + 0;
    v1 = D_08B2AEF0 - (-20752);
    a0 = s0 + 0;
    ST32(a3+23240, v0);
    ST32(v1-20752, v0);
    func_088A2B34(a0, a1);
    goto L_08A30EA4;
L_08A30EA4:;
    a0 = s0 + 0;
    goto L_08A30D98;
}

/* 08A30EAC */
rv_t func_08A30EAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30EAC:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2460 - (9312);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 9312;
    if (cnd_) { goto L_08A30EE0; }
    goto L_08A30EC8;
L_08A30EC8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30ED0;
L_08A30ED0:;
    goto L_08A30ED4;
L_08A30ED4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30EE0:;
    a0 = 1;
    func_088ADF78(a0, t1, t2, t3);
    goto L_08A30EE8;
L_08A30EE8:;
    { rv_t r_ = func_088AE030(0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30EF0;
L_08A30EF0:;
    goto L_08A30ED4;
}

/* 08A30EF8 */
rv_t func_08A30EF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30EF8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2484 - (9348);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 9348;
    if (cnd_) { goto L_08A30F2C; }
    goto L_08A30F14;
L_08A30F14:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30F1C;
L_08A30F1C:;
    goto L_08A30F20;
L_08A30F20:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30F2C:;
    { u64 r_ = func_088AE1EC(a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A30F34;
L_08A30F34:;
    goto L_08A30F20;
}

/* 08A30F3C */
rv_t func_08A30F3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30F3C:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE24A8 - (9384);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 9384;
    if (cnd_) { goto L_08A30F70; }
    goto L_08A30F58;
L_08A30F58:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30F60;
L_08A30F60:;
    goto L_08A30F64;
L_08A30F64:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30F70:;
    func_088AE2C0();
    goto L_08A30F78;
L_08A30F78:;
    goto L_08A30F64;
}

/* 08A30F80 */
rv_t func_08A30F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A30F80:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A30F9C; }
    goto L_08A30F94;
L_08A30F94:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A30FBC; }
    goto L_08A30F9C;
L_08A30F9C:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A30FA8;
L_08A30FA8:;
    a2 = 1;
    goto L_08A30FAC;
L_08A30FAC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A30FBC:;
    cnd_ = a0 != 0;
    v1 = D_08B2BBF8 - (-17416);
    if (cnd_) { goto L_08A30FD0; }
    goto L_08A30FC4;
L_08A30FC4:;
    v0 = LD32(v1-17416);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A3101C; }
    goto L_08A30FD0;
L_08A30FD0:;
    v0 = LD32(v1-17416);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A30FAC; }
    goto L_08A30FE0;
L_08A30FE0:;
    v0 = func_088AE2CC(a0);
    goto L_08A30FE8;
L_08A30FE8:;
    a1 = v0 + 0;
    v0 = LD32(v0+104);
    v1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A30FAC; }
    goto L_08A31004;
L_08A31004:;
    a0 = D_08AE1C88 - (7304);
    a1 = a1 + 20;
    a0 = a0 + 7304;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31014;
L_08A31014:;
    a2 = 1;
    goto L_08A30FAC;
L_08A3101C:;
    a0 = 187;
    v0 = func_0897A064(a0, a1);
    goto L_08A31024;
L_08A31024:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3102C;
L_08A3102C:;
    a2 = 1;
    goto L_08A30FAC;
}

/* 08A31034 */
rv_t func_08A31034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A31034:;
    sp = sp - 288;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31054; }
    goto L_08A3104C;
L_08A3104C:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A31078; }
    goto L_08A31054;
L_08A31054:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31060;
L_08A31060:;
    a1 = 1;
    goto L_08A31064;
L_08A31064:;
    v0 = a1 + 0;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08A31078:;
    cnd_ = a0 != 0;
    v1 = D_08B2BBF8 - (-17416);
    if (cnd_) { goto L_08A3108C; }
    goto L_08A31080;
L_08A31080:;
    v0 = LD32(v1-17416);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE25A4 - (9636); goto L_08A31140; }
    goto L_08A3108C;
L_08A3108C:;
    v0 = LD32(v1-17416);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31064; }
    goto L_08A3109C;
L_08A3109C:;
    v0 = func_088AE2CC(a0);
    goto L_08A310A4;
L_08A310A4:;
    a0 = LD32(v0+104);
    v0 = v0 < 0x1u;
    v1 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31064; }
    goto L_08A310BC;
L_08A310BC:;
    v0 = func_08979BE0(a0);
    goto L_08A310C4;
L_08A310C4:;
    a0 = v0 + 0;
    a1 = sp + 256;
    a2 = sp + 0;
    a3 = 256;
    s0 = v0 + 0;
    v0 = func_08978B54(a0, a1, a2, a3);
    goto L_08A310DC;
L_08A310DC:;
    cnd_ = v0 == 0;
    a0 = D_08AE1BA8 - (7080);
    if (cnd_) { goto L_08A3112C; }
    goto L_08A310E4;
L_08A310E4:;
    a0 = sp + 0;
    v0 = func_08977398(a0);
    goto L_08A310EC;
L_08A310EC:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = D_08AE1BA8 - (7080); goto L_08A3112C; }
    goto L_08A310FC;
L_08A310FC:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A31104;
L_08A31104:;
    a0 = LD32(sp+256);
    s0 = v0 + 0;
    v0 = func_08A270A4(a0);
    goto L_08A31110;
L_08A31110:;
    a0 = D_08AE2518 - (9496);
    a0 = a0 + 9496;
    a1 = s0 + 0;
    a2 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31124;
L_08A31124:;
    a1 = 1;
    goto L_08A31064;
L_08A3112C:;
    a0 = a0 + 7080;
    a1 = s0 + 0;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31138;
L_08A31138:;
    a1 = 1;
    goto L_08A31064;
L_08A31140:;
    a0 = a0 + 9636;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31148;
L_08A31148:;
    a1 = 1;
    goto L_08A31064;
}

/* 08A31150 */
rv_t func_08A31150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08A31150:;
    sp = sp - 288;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31178; }
    goto L_08A31170;
L_08A31170:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A311A4; }
    goto L_08A31178;
L_08A31178:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31184;
L_08A31184:;
    a1 = 1;
    goto L_08A31188;
L_08A31188:;
    v0 = a1 + 0;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_08A311A4:;
    cnd_ = a0 != 0;
    v1 = D_08B2BBF8 - (-17416);
    if (cnd_) { goto L_08A311B8; }
    goto L_08A311AC;
L_08A311AC:;
    v0 = LD32(v1-17416);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE25A4 - (9636); goto L_08A31288; }
    goto L_08A311B8;
L_08A311B8:;
    v0 = LD32(v1-17416);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31188; }
    goto L_08A311C8;
L_08A311C8:;
    v0 = func_088AE2CC(a0);
    goto L_08A311D0;
L_08A311D0:;
    s0 = LD32(v0+104);
    v0 = v0 < 0x1u;
    v1 = s0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31188; }
    goto L_08A311E8;
L_08A311E8:;
    a0 = s0 + 0;
    v0 = func_08979C1C(a0);
    goto L_08A311F0;
L_08A311F0:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    v0 = func_089735E0(a0);
    goto L_08A311FC;
L_08A311FC:;
    s1 = v0 + 0;
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    a0 = D_08AE1BA8 - (7080);
    if (cnd_) { goto L_08A3127C; }
    goto L_08A3120C;
L_08A3120C:;
    a0 = s0 + 0;
    v0 = func_08979BE0(a0);
    goto L_08A31214;
L_08A31214:;
    a0 = v0 + 0;
    a1 = sp + 256;
    a2 = sp + 0;
    a3 = 256;
    v0 = func_08978B54(a0, a1, a2, a3);
    goto L_08A31228;
L_08A31228:;
    cnd_ = v0 == 0;
    a0 = D_08AE1BA8 - (7080);
    if (cnd_) { goto L_08A3127C; }
    goto L_08A31230;
L_08A31230:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A31248; }
    goto L_08A31238;
L_08A31238:;
    a0 = sp + 0;
    v0 = func_089772E4(a0);
    goto L_08A31240;
L_08A31240:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 353; goto L_08A3126C; }
    goto L_08A31248;
L_08A31248:;
    a0 = s1 + 0;
    v0 = func_089734CC(a0);
    goto L_08A31250;
L_08A31250:;
    a0 = D_08AE25A8 - (9640);
    goto L_08A31254;
L_08A31254:;
    a0 = a0 + 9640;
    a1 = v0 + 0;
    goto L_08A3125C;
L_08A3125C:;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31264;
L_08A31264:;
    a1 = 1;
    goto L_08A31188;
L_08A3126C:;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A31274;
L_08A31274:;
    a0 = D_08AE25A8 - (9640);
    goto L_08A31254;
L_08A3127C:;
    a0 = a0 + 7080;
    a1 = s2 + 0;
    goto L_08A3125C;
L_08A31288:;
    a0 = a0 + 9636;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31290;
L_08A31290:;
    a1 = 1;
    goto L_08A31188;
}

/* 08A31298 */
rv_t func_08A31298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31298:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A312B4; }
    goto L_08A312AC;
L_08A312AC:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A312D4; }
    goto L_08A312B4;
L_08A312B4:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A312C0;
L_08A312C0:;
    a1 = 1;
    goto L_08A312C4;
L_08A312C4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A312D4:;
    cnd_ = a0 != 0;
    v1 = D_08B2BBF8 - (-17416);
    if (cnd_) { goto L_08A312E8; }
    goto L_08A312DC;
L_08A312DC:;
    v0 = LD32(v1-17416);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE25A4 - (9636); goto L_08A31334; }
    goto L_08A312E8;
L_08A312E8:;
    v0 = LD32(v1-17416);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A312C4; }
    goto L_08A312F8;
L_08A312F8:;
    v0 = func_088AE2CC(a0);
    goto L_08A31300;
L_08A31300:;
    a0 = v0 + 0;
    v0 = LD32(v0+104);
    v1 = a0 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A312C4; }
    goto L_08A3131C;
L_08A3131C:;
    a1 = LD32(a0+12);
    a0 = D_08AE2528 - (9512);
    a0 = a0 + 9512;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3132C;
L_08A3132C:;
    a1 = 1;
    goto L_08A312C4;
L_08A31334:;
    a0 = a0 + 9636;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3133C;
L_08A3133C:;
    a1 = 1;
    goto L_08A312C4;
}

/* 08A31344 */
rv_t func_08A31344(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31344:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A31360; }
    goto L_08A31358;
L_08A31358:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A31380; }
    goto L_08A31360;
L_08A31360:;
    a0 = D_08AE24C8 - (9416);
    a0 = a0 + 9416;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3136C;
L_08A3136C:;
    a1 = 1;
    goto L_08A31370;
L_08A31370:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31380:;
    cnd_ = a0 != 0;
    v1 = D_08B2BBF8 - (-17416);
    if (cnd_) { goto L_08A31394; }
    goto L_08A31388;
L_08A31388:;
    v0 = LD32(v1-17416);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = D_08AE25A4 - (9636); goto L_08A313E0; }
    goto L_08A31394;
L_08A31394:;
    v0 = LD32(v1-17416);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31370; }
    goto L_08A313A4;
L_08A313A4:;
    v0 = func_088AE2CC(a0);
    goto L_08A313AC;
L_08A313AC:;
    a0 = v0 + 0;
    v0 = LD32(v0+104);
    v1 = a0 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31370; }
    goto L_08A313C8;
L_08A313C8:;
    a1 = LD32(a0+16);
    a0 = D_08AE2528 - (9512);
    a0 = a0 + 9512;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A313D8;
L_08A313D8:;
    a1 = 1;
    goto L_08A31370;
L_08A313E0:;
    a0 = a0 + 9636;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A313E8;
L_08A313E8:;
    a1 = 1;
    goto L_08A31370;
}

/* 08A313F0 */
rv_t func_08A313F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A313F0:;
    sp = sp - 48;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31544; }
    goto L_08A31414;
L_08A31414:;
    cnd_ = a2 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A31430; }
    goto L_08A3141C;
L_08A3141C:;
    v1 = D_08B2BBF8 - (-17416);
    v0 = LD32(v1-17416);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31450; }
    goto L_08A31430;
L_08A31430:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A31450:;
    v0 = func_088AE2CC(a0);
    goto L_08A31458;
L_08A31458:;
    s2 = LD32(v0+104);
    v1 = v0 < 0x1u;
    s1 = v0 + 0;
    s3 = v0 + 20;
    v0 = s2 < 0x1u;
    v1 = v1 | v0;
    a1 = 0 + 0;
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A31430; }
    goto L_08A3147C;
L_08A3147C:;
    v0 = func_08979C1C(a0);
    goto L_08A31484;
L_08A31484:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08979BE0(a0);
    goto L_08A31490;
L_08A31490:;
    t0 = LD32(s1+12);
    t1 = LD32(s1+16);
    a0 = D_08AE25AC - (9644);
    a3 = v0 + 0;
    a2 = s0 + 0;
    a1 = s3 + 0;
    a0 = a0 + 9644;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A314B0;
L_08A314B0:;
    a0 = s2 + 0;
    v0 = func_08979C1C(a0);
    goto L_08A314B8;
L_08A314B8:;
    a0 = v0 + 0;
    v0 = func_089735E0(a0);
    goto L_08A314C0;
L_08A314C0:;
    v1 = v0 ^ 0x6;
    if (v1 == 0) v0 = 0;
    a0 = v0 + 0;
    func_08978CB4(a0);
    goto L_08A314D0;
L_08A314D0:;
    a0 = s2 + 0;
    v0 = func_08979BE0(a0);
    goto L_08A314D8;
L_08A314D8:;
    a0 = v0 + 0;
    func_08978B00(a0);
    goto L_08A314E0;
L_08A314E0:;
    a2 = 1;
    v0 = D_08C2932C - (-27860);
    ST8(v0-27860, a2);
    v1 = D_08C2932D - (-27859);
    v0 = D_08B1BB38 - (-17608);
    ST8(v0-17608, 0);
    v0 = D_08B1BB3C - (-17604);
    a0 = sp + 0;
    ST8(v1-27859, 0);
    a1 = LD32(s1);
    ST32(v0-17604, a2);
    ST32(sp, a1);
    v0 = LD32(s1+4);
    ST32(sp+4, v0);
    a1 = LD_U16(s1+8);
    func_08979784(a0, a1);
    goto L_08A31520;
L_08A31520:;
    v1 = LD32(s1+88);
    v0 = D_08B2AE98 - (-20840);
    a0 = 5;
    ST32(v0-20840, v1);
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31534;
L_08A31534:;
    v1 = 3;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, v1);
    { u64 r_ = func_088AE1EC(0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31544;
L_08A31544:;
    a1 = 1;
    goto L_08A31430;
}

/* 08A3154C */
rv_t func_08A3154C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A3154C:;
    sp = sp - 48;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s2 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A3158C; }
    goto L_08A3157C;
L_08A3157C:;
    s1 = 0 + 0;
    s0 = 0 + 0;
    cnd_ = a2 == 0;
    s3 = D_08C2CF28 - (-12504);
    if (cnd_) { goto L_08A315C0; }
    goto L_08A3158C;
L_08A3158C:;
    a0 = D_08AE25CC - (9676);
    a0 = a0 + 9676;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31598;
L_08A31598:;
    v0 = 1;
    goto L_08A3159C;
L_08A3159C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A315C0:;
    a1 = LD32(s3-12504);
    goto L_08A315C4;
L_08A315C4:;
    a0 = s1 + 0;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A315CC;
L_08A315CC:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A315E0; }
    goto L_08A315D4;
L_08A315D4:;
    cnd_ = s0 == s2;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A315F4; }
    goto L_08A315DC;
L_08A315DC:;
    s1 = s1 + 1;
    goto L_08A315E0;
L_08A315E0:;
    v0 = s1 < 0x2u;
    cnd_ = v0 != 0;
    a1 = LD32(s3-12504);
    if (cnd_) { goto L_08A315C4; }
    goto L_08A315EC;
L_08A315EC:;
    v0 = 0 + 0;
    goto L_08A3159C;
L_08A315F4:;
    v0 = s1 < 0x2u;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3159C; }
    goto L_08A31600;
L_08A31600:;
    s5 = D_08C2CF2C - (-12500);
    v1 = LD32(s5-12500);
    v0 = 1;
    cnd_ = v1 == v0;
    s4 = 6;
    if (cnd_) { goto L_08A31748; }
    goto L_08A31614;
L_08A31614:;
    cnd_ = v1 == 0;
    if (cnd_) { s4 = 0 + 0; goto L_08A31630; }
    goto L_08A3161C;
L_08A3161C:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08A31740; }
    goto L_08A31628;
L_08A31628:;
    cnd_ = v1 == v0;
    if (cnd_) { s4 = 3; goto L_08A31630; }
    goto L_08A31630;
L_08A31630:;
    cnd_ = s1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A31724; }
    goto L_08A31638;
L_08A31638:;
    cnd_ = s1 == v0;
    a1 = LD32(s3-12504);
    if (cnd_) { goto L_08A31714; }
    goto L_08A31640;
L_08A31640:;
    v0 = D_08C29328 - (-27864);
    goto L_08A31644;
L_08A31644:;
    a0 = s4 + 0;
    s2 = LD32(v0-27864);
    func_08978CB4(a0);
    goto L_08A31650;
L_08A31650:;
    v0 = 1;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_08A316FC; }
    goto L_08A3165C;
L_08A3165C:;
    a0 = LD32(s3-12504);
    v0 = func_08977308(a0);
    goto L_08A31664;
L_08A31664:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    goto L_08A31670;
L_08A31670:;
    { u64 r_ = func_08978800(a0, a1, a2, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31678;
L_08A31678:;
    s0 = v0 + 0;
    a0 = s2 + 0;
    func_08978CB4(a0);
    goto L_08A31684;
L_08A31684:;
    cnd_ = s0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A316E4; }
    goto L_08A3168C;
L_08A3168C:;
    a0 = 0x49ac0000u;
    a0 = a0 | 0x44e2;
    v0 = D_08C2D19C - (-11876);
    ST32(s5-12500, 0);
    ST32(s3-12504, 0);
    ST32(v0-11876, 0);
    func_08A275D0(a0);
    goto L_08A316A8;
L_08A316A8:;
    a0 = 0xceb60000u;
    a0 = a0 | 0x5b46;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A316B4;
L_08A316B4:;
    v1 = D_08C2D3D2 - (-11310);
    v0 = LD_U8(v1-11310);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0xe21f0000u; goto L_08A316D4; }
    goto L_08A316C4;
L_08A316C4:;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3159C; }
    goto L_08A316CC;
L_08A316CC:;
    v0 = 1;
    goto L_08A3159C;
L_08A316D4:;
    a0 = a0 | 0x6f9e;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A316DC;
L_08A316DC:;
    goto L_08A316C4;
L_08A316E4:;
    a0 = LD32(sp);
    a1 = s4 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_089798B8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A316F4;
L_08A316F4:;
    s2 = v0 + 0;
    goto L_08A3168C;
L_08A316FC:;
    a0 = LD32(s3-12504);
    v0 = func_08977338(a0);
    goto L_08A31704;
L_08A31704:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 1;
    goto L_08A31670;
L_08A31714:;
    a0 = 0 + 0;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3171C;
L_08A3171C:;
    s1 = v0 < 0x1u;
    goto L_08A31640;
L_08A31724:;
    a1 = LD32(s3-12504);
    a0 = 1;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31730;
L_08A31730:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = 1; goto L_08A31640; }
    goto L_08A31738;
L_08A31738:;
    v0 = D_08C29328 - (-27864);
    goto L_08A31644;
L_08A31740:;
    s4 = 2;
    goto L_08A31630;
L_08A31748:;
    s4 = 1;
    goto L_08A31630;
}

/* 08A31750 */
rv_t func_08A31750(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31750:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE262C - (9772);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 9772;
    if (cnd_) { goto L_08A317BC; }
    goto L_08A3176C;
L_08A3176C:;
    v0 = D_08C2D19C - (-11876);
    v1 = LD32(v0-11876);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A317AC; }
    goto L_08A31780;
L_08A31780:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A3179C; }
    goto L_08A3178C;
L_08A3178C:;
    goto L_08A31790;
L_08A31790:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3179C:;
    { rv_t r_ = func_08A318B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A317A4;
L_08A317A4:;
    goto L_08A31790;
L_08A317AC:;
    { rv_t r_ = func_08A31994(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A317B4;
L_08A317B4:;
    goto L_08A31790;
L_08A317BC:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A317C4;
L_08A317C4:;
    goto L_08A31790;
}

/* 08A317CC */
rv_t func_08A317CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A317CC:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s2 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31800; }
    goto L_08A317F8;
L_08A317F8:;
    cnd_ = a2 == 0;
    s4 = D_08C2CF2C - (-12500);
    if (cnd_) { goto L_08A31834; }
    goto L_08A31800;
L_08A31800:;
    a0 = D_08AE2654 - (9812);
    a0 = a0 + 9812;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3180C;
L_08A3180C:;
    v1 = 1;
    goto L_08A31810;
L_08A31810:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A31834:;
    ST32(s4-12500, 0);
    a0 = s4 + 0;
    s0 = 0 + 0;
    s3 = D_08C2CF28 - (-12504);
    s1 = s4 + 0;
    goto L_08A31848;
L_08A31848:;
    a0 = LD32(a0-12500);
    a1 = LD32(s3-12504);
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31854;
L_08A31854:;
    cnd_ = v0 == 0;
    a0 = D_08C2CF2C - (-12500);
    if (cnd_) { goto L_08A31864; }
    goto L_08A3185C;
L_08A3185C:;
    cnd_ = s0 == s2;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A31878; }
    goto L_08A31864;
L_08A31864:;
    v0 = LD32(s1-12500);
    v0 = v0 + 1;
    v1 = v0 < 0x4u;
    cnd_ = v1 != 0;
    ST32(s1-12500, v0);
    if (cnd_) { goto L_08A31848; }
    goto L_08A31878;
L_08A31878:;
    v0 = LD32(s4-12500);
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A31810; }
    goto L_08A31888;
L_08A31888:;
    a0 = 0x90f00000u;
    a0 = a0 | 0x29d1;
    v1 = 2;
    v0 = D_08C2D19C - (-11876);
    ST32(v0-11876, v1);
    func_08A275D0(a0);
    goto L_08A318A0;
L_08A318A0:;
    a0 = 0x49ac0000u;
    a0 = a0 | 0x44e2;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A318AC;
L_08A318AC:;
    v1 = 1;
    goto L_08A31810;
}

/* 08A318B4 */
rv_t func_08A318B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A318B4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = 0x49ac0000u;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 | 0x44e2;
    if (cnd_) { goto L_08A318EC; }
    goto L_08A318D0;
L_08A318D0:;
    a0 = D_08AE266C - (9836);
    a0 = a0 + 9836;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A318DC;
L_08A318DC:;
    goto L_08A318E0;
L_08A318E0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A318EC:;
    v0 = 1;
    v1 = D_08C2D19C - (-11876);
    a1 = D_08C2CF2C - (-12500);
    ST32(v1-11876, v0);
    ST32(a1-12500, 0);
    func_08A275D0(a0);
    goto L_08A31904;
L_08A31904:;
    a0 = 0x90f00000u;
    a0 = a0 | 0x29d1;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31910;
L_08A31910:;
    goto L_08A318E0;
}

/* 08A31918 */
rv_t func_08A31918(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31918:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AE2688 - (9864);
    a0 = a0 + 9864;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A31940; }
    goto L_08A31938;
L_08A31938:;
    cnd_ = a2 == 0;
    a1 = v1 < 0x16u;
    if (cnd_) { goto L_08A31958; }
    goto L_08A31940;
L_08A31940:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31948;
L_08A31948:;
    v0 = 1;
    goto L_08A3194C;
L_08A3194C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31958:;
    a0 = 0xceb60000u;
    a0 = a0 | 0x5b46;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3194C; }
    goto L_08A31968;
L_08A31968:;
    v0 = D_08C2CF28 - (-12504);
    ST32(v0-12504, v1);
    v1 = 1;
    v0 = D_08C2D19C - (-11876);
    ST32(v0-11876, v1);
    func_08A275D0(a0);
    goto L_08A31980;
L_08A31980:;
    a0 = 0x90f00000u;
    a0 = a0 | 0x29d1;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3198C;
L_08A3198C:;
    v0 = 1;
    goto L_08A3194C;
}

/* 08A31994 */
rv_t func_08A31994(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31994:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = 0x90f00000u;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 | 0x29d1;
    if (cnd_) { goto L_08A319CC; }
    goto L_08A319B0;
L_08A319B0:;
    a0 = D_08AE26A4 - (9892);
    a0 = a0 + 9892;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A319BC;
L_08A319BC:;
    goto L_08A319C0;
L_08A319C0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A319CC:;
    v0 = D_08C2CF28 - (-12504);
    v1 = D_08C2D19C - (-11876);
    ST32(v0-12504, 0);
    ST32(v1-11876, 0);
    func_08A275D0(a0);
    goto L_08A319E0;
L_08A319E0:;
    a0 = 0xceb60000u;
    a0 = a0 | 0x5b46;
    { u64 r_ = func_08A27590(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A319EC;
L_08A319EC:;
    goto L_08A319C0;
}

/* 08A319F4 */
rv_t func_08A319F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A319F4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31A14; }
    goto L_08A31A0C;
L_08A31A0C:;
    cnd_ = a2 == 0;
    v0 = a0 < 0x2u;
    if (cnd_) { goto L_08A31A38; }
    goto L_08A31A14;
L_08A31A14:;
    a0 = D_08AE2514 - (9492);
    a0 = a0 + 9492;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31A20;
L_08A31A20:;
    v1 = 1;
    goto L_08A31A24;
L_08A31A24:;
    goto L_08A31A28;
L_08A31A28:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31A38:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A31A24; }
    goto L_08A31A40;
L_08A31A40:;
    cnd_ = a0 == 0;
    s0 = 1;
    if (cnd_) { goto L_08A31A5C; }
    goto L_08A31A48;
L_08A31A48:;
    v0 = 1;
    cnd_ = a0 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A31A5C; }
    goto L_08A31A54;
L_08A31A54:;
    goto L_08A31A28;
L_08A31A5C:;
    v0 = D_08C2CF28 - (-12504);
    a1 = LD32(v0-12504);
    a0 = s0 + 0;
    { u64 r_ = func_089771D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31A6C;
L_08A31A6C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_08A31A24; }
    goto L_08A31A74;
L_08A31A74:;
    a0 = s0 + 0;
    v0 = func_08A27068(a0);
    goto L_08A31A7C;
L_08A31A7C:;
    a0 = D_08AE1E5C - (7772);
    a0 = a0 + 7772;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31A8C;
L_08A31A8C:;
    v1 = 1;
    goto L_08A31A24;
}

/* 08A31A94 */
rv_t func_08A31A94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31A94:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31ABC; }
    goto L_08A31AB4;
L_08A31AB4:;
    cnd_ = a2 == 0;
    v0 = a0 < 0x4u;
    if (cnd_) { goto L_08A31AE0; }
    goto L_08A31ABC;
L_08A31ABC:;
    a0 = D_08AE2514 - (9492);
    a0 = a0 + 9492;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31AC8;
L_08A31AC8:;
    goto L_08A31ACC;
L_08A31ACC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31AE0:;
    cnd_ = v0 == 0;
    s1 = D_08C2CF28 - (-12504);
    if (cnd_) { goto L_08A31AC8; }
    goto L_08A31AE8;
L_08A31AE8:;
    a1 = LD32(s1-12504);
    { u64 r_ = func_08977218(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31AF0;
L_08A31AF0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A31ACC; }
    goto L_08A31AF8;
L_08A31AF8:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08A31B14; }
    goto L_08A31B00;
L_08A31B00:;
    a0 = LD32(s1-12504);
    v0 = func_089772B4(a0);
    goto L_08A31B08;
L_08A31B08:;
    a0 = 353;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A31B34; }
    goto L_08A31B14;
L_08A31B14:;
    a0 = s0 + 0;
    v0 = func_089734CC(a0);
    goto L_08A31B1C;
L_08A31B1C:;
    a0 = D_08AE1E5C - (7772);
    goto L_08A31B20;
L_08A31B20:;
    a0 = a0 + 7772;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31B2C;
L_08A31B2C:;
    goto L_08A31ACC;
L_08A31B34:;
    v0 = func_0897A064(a0, a1);
    goto L_08A31B3C;
L_08A31B3C:;
    a0 = D_08AE1E5C - (7772);
    goto L_08A31B20;
}

/* 08A31B44 */
rv_t func_08A31B44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31B44:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A31B60; }
    goto L_08A31B58;
L_08A31B58:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A31B7C; }
    goto L_08A31B60;
L_08A31B60:;
    a0 = D_08AE26C0 - (9920);
    a0 = a0 + 9920;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31B6C;
L_08A31B6C:;
    goto L_08A31B70;
L_08A31B70:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31B7C:;
    { u64 r_ = func_089799EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31B84;
L_08A31B84:;
    goto L_08A31B70;
}

/* 08A31B8C */
rv_t func_08A31B8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31B8C:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A31C24; }
    goto L_08A31BA0;
L_08A31BA0:;
    a0 = 0x338a0000u;
    a0 = a0 | 0x2c7e;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31BAC;
L_08A31BAC:;
    cnd_ = v0 == 0;
    a1 = 0x25dc0000u;
    if (cnd_) { goto L_08A31BDC; }
    goto L_08A31BB4;
L_08A31BB4:;
    a0 = v0 + 0;
    a1 = a1 | 0x4ae2;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31BC0;
L_08A31BC0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A31BDC; }
    goto L_08A31BC8;
L_08A31BC8:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_08A31BD0;
L_08A31BD0:;
    v1 = 2005;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s0 + 0; goto L_08A31BF0; }
    goto L_08A31BDC;
L_08A31BDC:;
    v0 = 0 + 0;
    goto L_08A31BE0;
L_08A31BE0:;
    goto L_08A31BE4;
L_08A31BE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31BF0:;
    a1 = 0 + 0;
    s0 = D_08C292BC - (-27972);
    { rv_t r_ = func_08895BD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31BFC;
L_08A31BFC:;
    v0 = LD32(s0-27972);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A31BE0; }
    goto L_08A31C08;
L_08A31C08:;
    a0 = 0 + 0;
    { u64 r_ = func_089799EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31C10;
L_08A31C10:;
    v0 = LD32(s0-27972);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A31C08; }
    goto L_08A31C1C;
L_08A31C1C:;
    goto L_08A31BE4;
L_08A31C24:;
    a0 = D_08AE26E8 - (9960);
    a0 = a0 + 9960;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31C30;
L_08A31C30:;
    v0 = 1;
    goto L_08A31BE0;
}

/* 08A31C38 */
rv_t func_08A31C38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31C38:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A31C54; }
    goto L_08A31C4C;
L_08A31C4C:;
    cnd_ = a2 == 0;
    v1 = a0 < 0x16u;
    if (cnd_) { goto L_08A31C70; }
    goto L_08A31C54;
L_08A31C54:;
    a0 = D_08AE2704 - (9988);
    a0 = a0 + 9988;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31C60;
L_08A31C60:;
    v0 = 1;
    goto L_08A31C64;
L_08A31C64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31C70:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A31C64; }
    goto L_08A31C78;
L_08A31C78:;
    v0 = func_08977368(a0);
    goto L_08A31C80;
L_08A31C80:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A31C8C;
L_08A31C8C:;
    a0 = D_08AE1E5C - (7772);
    a0 = a0 + 7772;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31C9C;
L_08A31C9C:;
    v0 = 1;
    goto L_08A31C64;
}

/* 08A31CA4 */
rv_t func_08A31CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A31CA4:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A31CD4; }
    goto L_08A31CCC;
L_08A31CCC:;
    cnd_ = a2 == 0;
    v1 = D_08C292BC - (-27972);
    if (cnd_) { goto L_08A31D04; }
    goto L_08A31CD4;
L_08A31CD4:;
    a0 = D_08AE2750 - (10064);
    a0 = a0 + 10064;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31CE0;
L_08A31CE0:;
    v1 = 1;
    goto L_08A31CE4;
L_08A31CE4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A31D04:;
    v0 = LD32(v1-27972);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A31CE4; }
    goto L_08A31D14;
L_08A31D14:;
    s2 = 0 + 0;
    v0 = func_08979858(a0);
    goto L_08A31D1C;
L_08A31D1C:;
    a0 = v0 + 0;
    v0 = func_08978738(a0);
    goto L_08A31D24;
L_08A31D24:;
    a0 = s0 + 0;
    s1 = v0 + 0;
    v0 = func_08979878(a0);
    goto L_08A31D30;
L_08A31D30:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A31DAC; }
    goto L_08A31D38;
L_08A31D38:;
    a0 = s1 + 0;
    v0 = func_08977398(a0);
    goto L_08A31D40;
L_08A31D40:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A31D4C;
L_08A31D4C:;
    cnd_ = s2 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A31D94; }
    goto L_08A31D54;
L_08A31D54:;
    a0 = 354;
    a1 = 0 + 0;
    v0 = func_0897A064(a0, a1);
    goto L_08A31D60;
L_08A31D60:;
    a0 = s0 + 0;
    goto L_08A31D64;
L_08A31D64:;
    s1 = v0 + 0;
    v0 = func_08979898(a0);
    goto L_08A31D6C;
L_08A31D6C:;
    a0 = v0 + 0;
    v0 = func_08A270A4(a0);
    goto L_08A31D74;
L_08A31D74:;
    a0 = D_08AE2790 - (10128);
    a0 = a0 + 10128;
    a1 = s3 + 0;
    a2 = s1 + 0;
    a3 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31D8C;
L_08A31D8C:;
    v1 = 1;
    goto L_08A31CE4;
L_08A31D94:;
    a0 = s0 + 0;
    v0 = func_08979878(a0);
    goto L_08A31D9C;
L_08A31D9C:;
    a0 = v0 + 0;
    v0 = func_08973540(a0);
    goto L_08A31DA4;
L_08A31DA4:;
    a0 = s0 + 0;
    goto L_08A31D64;
L_08A31DAC:;
    a0 = s1 + 0;
    v0 = func_089772E4(a0);
    goto L_08A31DB4;
L_08A31DB4:;
    s2 = 0 < v0;
    goto L_08A31D38;
}

/* 08A31DBC */
rv_t func_08A31DBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A31DBC:;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = 1; goto L_08A31DEC; }
    goto L_08A31DC8;
L_08A31DC8:;
    v0 = D_08B2ACF1 - (-21263);
    v1 = LD_U8(v0-21263);
    a0 = D_08C2CF30 - (-12496);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A31DEC; }
    goto L_08A31DDC;
L_08A31DDC:;
    v0 = LD_U8(a0-12496);
    v0 = v0 ^ 0x1;
    ST8(a0-12496, v0);
    v0 = 1;
    goto L_08A31DEC;
L_08A31DEC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A31DF4 */
rv_t func_08A31DF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A31DF4:;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = 1; goto L_08A31E24; }
    goto L_08A31E00;
L_08A31E00:;
    v0 = D_08B2ACF1 - (-21263);
    v1 = LD_U8(v0-21263);
    a0 = D_08B1C134 - (-16076);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A31E24; }
    goto L_08A31E14;
L_08A31E14:;
    v0 = LD32(a0-16076);
    v0 = v0 ^ 0x1;
    ST32(a0-16076, v0);
    v0 = 1;
    goto L_08A31E24;
L_08A31E24:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A31E2C */
rv_t func_08A31E2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31E2C:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A31EFC; }
    goto L_08A31E44;
L_08A31E44:;
    v0 = D_08C292BC - (-27972);
    v1 = LD32(v0-27972);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A31E68; }
    goto L_08A31E54;
L_08A31E54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31E68:;
    s0 = 1;
    v0 = D_08B1BB3C - (-17604);
    ST32(v0-17604, s0);
    v0 = D_08B1BB38 - (-17608);
    s1 = 0 + 0;
    ST8(v0-17608, s0);
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31E84;
L_08A31E84:;
    v1 = D_08C2932C - (-27860);
    ST8(v1-27860, v0);
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31E90;
L_08A31E90:;
    cnd_ = v0 == 0;
    v0 = D_08C2932D - (-27859);
    if (cnd_) { goto L_08A31EA8; }
    goto L_08A31E98;
L_08A31E98:;
    v0 = D_08B2AE2C - (-20948);
    v1 = LD32(v0-20948);
    s1 = v1 < 0x1u;
    v0 = D_08C2932D - (-27859);
    goto L_08A31EA8;
L_08A31EA8:;
    v1 = 1;
    a0 = 4;
    ST8(v0-27859, s1);
    v0 = D_08C2D0A6 - (-12122);
    ST8(v0-12122, v1);
    { u64 r_ = func_08A27544(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31EC0;
L_08A31EC0:;
    { u64 r_ = func_088A4B54(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A31EC8;
L_08A31EC8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B2AE2C - (-20948); goto L_08A31EE0; }
    goto L_08A31ED0;
L_08A31ED0:;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, s0);
    goto L_08A31ED8;
L_08A31ED8:;
    v0 = 1;
    goto L_08A31E54;
L_08A31EE0:;
    v1 = LD32(v0-20948);
    cnd_ = v1 != 0;
    v1 = 3;
    if (cnd_) { goto L_08A31EF0; }
    goto L_08A31EEC;
L_08A31EEC:;
    v1 = 2;
    goto L_08A31EF0;
L_08A31EF0:;
    v0 = D_08C2D0BC - (-12100);
    ST32(v0-12100, v1);
    goto L_08A31ED8;
L_08A31EFC:;
    a0 = D_08AE2514 - (9492);
    a0 = a0 + 9492;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31F08;
L_08A31F08:;
    v0 = 1;
    goto L_08A31E54;
}

/* 08A31F10 */
rv_t func_08A31F10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A31F10:;
    v0 = a0 + 0;
    sp = sp - 80;
    a0 = D_08AE27B0 - (10160);
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = a0 + 10160;
    if (cnd_) { goto L_08A31F98; }
    goto L_08A31F2C;
L_08A31F2C:;
    v0 = D_08B15FAC - (24492);
    v1 = LD32(v0+24492);
    a1 = D_08AE2578 - (9592);
    t0 = D_08B2AC68 - (-21400);
    v1 = ~(0 | v1);
    a1 = a1 + 9592;
    t0 = t0 - 21400;
    a0 = sp + 0;
    a2 = 31;
    cnd_ = v1 != 0;
    a3 = 1;
    if (cnd_) { goto L_08A31F78; }
    goto L_08A31F58;
L_08A31F58:;
    t0 = D_08C2933C - (-27844);
    a1 = D_08AE1C88 - (7304);
    t0 = t0 - 27844;
    a1 = a1 + 7304;
    t0 = t0 + 8;
    a0 = sp + 0;
    a2 = 31;
    a3 = 1;
    goto L_08A31F78;
L_08A31F78:;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31F80;
L_08A31F80:;
    a0 = sp + 0;
    func_088AD4E0(a0, 0, 0, 0);
    goto L_08A31F88;
L_08A31F88:;
    goto L_08A31F8C;
L_08A31F8C:;
    v0 = 1;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08A31F98:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31FA0;
L_08A31FA0:;
    goto L_08A31F8C;
}

/* 08A31FA8 */
rv_t func_08A31FA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A31FA8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE27F0 - (10224);
    a1 = a1 & 0xff;
    a0 = a0 + 10224;
    v1 = v0 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A31FD4; }
    goto L_08A31FCC;
L_08A31FCC:;
    cnd_ = a2 == 0;
    v0 = D_08C2D3D0 - (-11312);
    if (cnd_) { goto L_08A31FEC; }
    goto L_08A31FD4;
L_08A31FD4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A31FDC;
L_08A31FDC:;
    goto L_08A31FE0;
L_08A31FE0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A31FEC:;
    cnd_ = v1 != 0;
    ST8(v0-11312, v1);
    if (cnd_) { goto L_08A31FDC; }
    goto L_08A31FF4;
L_08A31FF4:;
    v0 = D_08B2AE28 - (-20952);
    v1 = LD32(v0-20952);
    v0 = 6;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A31FDC; }
    goto L_08A32008;
L_08A32008:;
    { rv_t r_ = func_088A4AF8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32010;
L_08A32010:;
    goto L_08A31FE0;
}

/* 08A32018 */
rv_t func_08A32018(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32018:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2828 - (10280);
    a1 = a1 & 0xff;
    a0 = a0 + 10280;
    v1 = v0 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A32044; }
    goto L_08A3203C;
L_08A3203C:;
    cnd_ = a2 == 0;
    v0 = D_08C2D3D1 - (-11311);
    if (cnd_) { goto L_08A3205C; }
    goto L_08A32044;
L_08A32044:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3204C;
L_08A3204C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3205C:;
    ST8(v0-11311, v1);
    goto L_08A3204C;
}

/* 08A32064 */
rv_t func_08A32064(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_08A32064:;
    sp = sp - 544;
    v0 = D_08B1C144 - (-16060);
    s1 = a1 & 0xff;
    v1 = LD_U8(v0-16060);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A32178; }
    goto L_08A3209C;
L_08A3209C:;
    a2 = D_08B1BDF4 - (-16908);
    v1 = LD32(a2-16908);
    v0 = 20;
    cnd_ = v1 == v0;
    v0 = D_08B1C16D - (-16019);
    if (cnd_) { goto L_08A323B4; }
    goto L_08A320B0;
L_08A320B0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A32370; }
    goto L_08A320B8;
L_08A320B8:;
    cnd_ = (s32)a0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A320F8; }
    goto L_08A320C0;
L_08A320C0:;
    a1 = D_08C2D15C - (-11940);
    v1 = a1 - 11940;
    v0 = LD32(v1+16);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A320F8; }
    goto L_08A320D8;
L_08A320D8:;
    v1 = LD32(a1-11940);
    cnd_ = a0 == 0;
    v0 = a0 - 1;
    if (cnd_) { goto L_08A320F4; }
    goto L_08A320E4;
L_08A320E4:;
    a1 = (u32)-1;
    goto L_08A320E8;
L_08A320E8:;
    v0 = v0 - 1;
    cnd_ = v0 != a1;
    v1 = LD32(v1+8);
    if (cnd_) { goto L_08A320E8; }
    goto L_08A320F4;
L_08A320F4:;
    v1 = LD32(v1);
    goto L_08A320F8;
L_08A320F8:;
    s0 = v1 + 0;
    v0 = a0 < 0x1u;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v1 = LD32(a2-16908);
    if (cnd_) { goto L_08A3214C; }
    goto L_08A32110;
L_08A32110:;
    v0 = 18;
    s2 = 0 + 0;
    cnd_ = v1 == v0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08A32348; }
    goto L_08A32120;
L_08A32120:;
    v0 = (s32)v1 < 19;
    cnd_ = v0 == 0;
    v0 = 20;
    if (cnd_) { goto L_08A32304; }
    goto L_08A3212C;
L_08A3212C:;
    v0 = 13;
    cnd_ = v1 == v0;
    a0 = 0x8af00000u;
    if (cnd_) { goto L_08A322C8; }
    goto L_08A32138;
L_08A32138:;
    v0 = 0 < s2;
    goto L_08A3213C;
L_08A3213C:;
    v1 = 0 < s3;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A321A0; }
    goto L_08A3214C;
L_08A3214C:;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A32178; }
    goto L_08A32154;
L_08A32154:;
    a0 = s0 + 0;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3215C;
L_08A3215C:;
    v1 = LD32(s0+72);
    a0 = v0 + 4;
    v1 = (v1 >> 1) & 0x1;
    if (v1 != 0) v0 = a0;
    a0 = v0 + 0;
    { rv_t r_ = func_08898160(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32174;
L_08A32174:;
    v0 = 1;
    goto L_08A32178;
L_08A32178:;
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
L_08A321A0:;
    s2 = LD32(s0+64);
    v0 = func_0897364C();
    goto L_08A321A8;
L_08A321A8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A321F0; }
    goto L_08A321B0;
L_08A321B0:;
    a0 = s2 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A321B8;
L_08A321B8:;
    a0 = v0 + 0;
    v0 = func_08973AA0(a0, 0, 0, 0);
    goto L_08A321C0;
L_08A321C0:;
    a1 = D_08AE2860 - (10336);
    a1 = a1 + 10336;
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A321DC;
L_08A321DC:;
    a0 = s3 + 0;
    goto L_08A321E0;
L_08A321E0:;
    a1 = sp + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A321E8;
L_08A321E8:;
    goto L_08A3214C;
L_08A321F0:;
    a0 = s2 + 0;
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A321F8;
L_08A321F8:;
    s4 = D_08C29324 - (-27868);
    s5 = v0 + 0;
    v0 = LD_U8(s4-27868);
    cnd_ = v0 == 0;
    s6 = 6;
    if (cnd_) { goto L_08A322B8; }
    goto L_08A3220C;
L_08A3220C:;
    v0 = LD_U8(s4-27868);
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A322A8; }
    goto L_08A32218;
L_08A32218:;
    a0 = s1 < 0x1u;
    v0 = func_08975390(a0);
    goto L_08A32220;
L_08A32220:;
    v1 = LD_U8(s4-27868);
    goto L_08A32224;
L_08A32224:;
    s1 = v0 + 0;
    v0 = D_08AE2870 - (10352);
    cnd_ = v1 != 0;
    s4 = v0 + 10352;
    if (cnd_) { goto L_08A3223C; }
    goto L_08A32234;
L_08A32234:;
    v0 = D_08AE2874 - (10356);
    s4 = v0 + 10356;
    goto L_08A3223C;
L_08A3223C:;
    v0 = (u32)-1;
    cnd_ = s5 == v0;
    if (cnd_) { a1 = D_08AE2878 - (10360); goto L_08A32280; }
    goto L_08A32248;
L_08A32248:;
    a0 = s2 + 0;
    { u64 r_ = func_08973A0C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32250;
L_08A32250:;
    a1 = D_08AE2890 - (10384);
    a1 = a1 + 10384;
    t0 = v0 + 0;
    t1 = s4 + 0;
    t2 = s1 + 0;
    t3 = s6 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32278;
L_08A32278:;
    a0 = s3 + 0;
    goto L_08A321E0;
L_08A32280:;
    a1 = a1 + 10360;
    t0 = s4 + 0;
    t1 = s1 + 0;
    t2 = s6 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A322A0;
L_08A322A0:;
    a0 = s3 + 0;
    goto L_08A321E0;
L_08A322A8:;
    a1 = 0 + 0;
    v0 = func_08973CD8(a0, a1);
    goto L_08A322B0;
L_08A322B0:;
    v1 = LD_U8(s4-27868);
    goto L_08A32224;
L_08A322B8:;
    a0 = 0 + 0;
    v0 = func_08973B10(a0, 0, 0, 0);
    goto L_08A322C0;
L_08A322C0:;
    s6 = v0 + 0;
    goto L_08A3220C;
L_08A322C8:;
    a0 = a0 | 0x6fb0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A322D0;
L_08A322D0:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A32138; }
    goto L_08A322D8;
L_08A322D8:;
    v0 = 0xfbdb0000u;
    a1 = 0xcb1a0000u;
    v0 = v0 | 0x837a;
    a1 = a1 | 0xd78c;
    goto L_08A322E8;
L_08A322E8:;
    if (s1 == 0) a1 = v0;
    a0 = s2 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A322F4;
L_08A322F4:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A32138; }
    goto L_08A322FC;
L_08A322FC:;
    s2 = 0 + 0;
    goto L_08A32138;
L_08A32304:;
    cnd_ = v1 != v0;
    v0 = 0 < s2;
    if (cnd_) { goto L_08A3213C; }
    goto L_08A3230C;
L_08A3230C:;
    a0 = 0xc0f10000u;
    a0 = a0 | 0x53f6;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32318;
L_08A32318:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A32138; }
    goto L_08A32320;
L_08A32320:;
    v0 = 0xa1e0000u;
    a1 = 0xd95d0000u;
    v0 = v0 | 0x3cc0;
    a1 = a1 | 0x90d2;
    a0 = s2 + 0;
    if (s1 == 0) a1 = v0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3233C;
L_08A3233C:;
    s3 = v0 + 0;
    if (v0 == 0) s2 = 0;
    goto L_08A32138;
L_08A32348:;
    a0 = 0xf16e0000u;
    a0 = a0 | 0x6b20;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32354;
L_08A32354:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A32138; }
    goto L_08A3235C;
L_08A3235C:;
    v0 = 0xcda40000u;
    a1 = 0x9ce30000u;
    v0 = v0 | 0x86ea;
    a1 = a1 | 0xdafc;
    goto L_08A322E8;
L_08A32370:;
    cnd_ = (s32)a0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A320F8; }
    goto L_08A32378;
L_08A32378:;
    a1 = D_08C2D170 - (-11920);
    v1 = a1 - 11920;
    v0 = LD32(v1+16);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A320F8; }
    goto L_08A32390;
L_08A32390:;
    v1 = LD32(a1-11920);
    cnd_ = a0 == 0;
    v0 = a0 - 1;
    if (cnd_) { goto L_08A320F4; }
    goto L_08A3239C;
L_08A3239C:;
    a1 = (u32)-1;
    goto L_08A323A0;
L_08A323A0:;
    v0 = v0 - 1;
    cnd_ = v0 != a1;
    v1 = LD32(v1+8);
    if (cnd_) { goto L_08A323A0; }
    goto L_08A323AC;
L_08A323AC:;
    v1 = LD32(v1);
    goto L_08A320F8;
L_08A323B4:;
    v1 = LD_U8(v0-16019);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A32178; }
    goto L_08A323C0;
L_08A323C0:;
    goto L_08A320B0;
}

/* 08A323C8 */
rv_t func_08A323C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A323C8:;
    sp = sp - 16;
    v0 = D_08B1C144 - (-16060);
    a2 = a0 + 0;
    v1 = LD_U8(v0-16060);
    a1 = a1 & 0xff;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A324A0; }
    goto L_08A323E8;
L_08A323E8:;
    v0 = D_08B1BDF4 - (-16908);
    a0 = LD32(v0-16908);
    v1 = 20;
    cnd_ = a0 == v1;
    v0 = D_08B1C16D - (-16019);
    if (cnd_) { goto L_08A32528; }
    goto L_08A323FC;
L_08A323FC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A324E8; }
    goto L_08A32404;
L_08A32404:;
    cnd_ = (s32)a2 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A32444; }
    goto L_08A3240C;
L_08A3240C:;
    a0 = D_08C2D15C - (-11940);
    v1 = a0 - 11940;
    v0 = LD32(v1+16);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A32444; }
    goto L_08A32424;
L_08A32424:;
    v1 = LD32(a0-11940);
    cnd_ = a2 == 0;
    v0 = a2 - 1;
    if (cnd_) { goto L_08A32440; }
    goto L_08A32430;
L_08A32430:;
    a0 = (u32)-1;
    goto L_08A32434;
L_08A32434:;
    v0 = v0 - 1;
    cnd_ = v0 != a0;
    v1 = LD32(v1+8);
    if (cnd_) { goto L_08A32434; }
    goto L_08A32440;
L_08A32440:;
    v1 = LD32(v1);
    goto L_08A32444;
L_08A32444:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A324A0; }
    goto L_08A3244C;
L_08A3244C:;
    a1 = LD32(v1+4);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32460;
L_08A32460:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3248C; }
    goto L_08A32468;
L_08A32468:;
    v1 = LD32(v0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(a0+196); goto L_08A324AC; }
    goto L_08A3248C;
L_08A3248C:;
    a0 = D_08AE28BC - (10428);
    a0 = a0 + 10428;
    goto L_08A32494;
L_08A32494:;
    { rv_t r_ = func_08898160(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3249C;
L_08A3249C:;
    v0 = 1;
    goto L_08A324A0;
L_08A324A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A324AC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A324C0; }
    goto L_08A324B4;
L_08A324B4:;
    a0 = D_08AE28C0 - (10432);
    a0 = a0 + 10432;
    goto L_08A32494;
L_08A324C0:;
    { u64 r_ = func_089DD748(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A324C8;
L_08A324C8:;
    a0 = D_08AE28C4 - (10436);
    cnd_ = v0 != 0;
    a0 = a0 + 10436;
    if (cnd_) { goto L_08A32494; }
    goto L_08A324D4;
L_08A324D4:;
    a0 = D_08AE28C8 - (10440);
    a0 = a0 + 10440;
    goto L_08A32494;
L_08A324E0:;
    v1 = 0 + 0;
    goto L_08A32444;
L_08A324E8:;
    cnd_ = (s32)a2 < 0;
    a1 = D_08C2D170 - (-11920);
    if (cnd_) { goto L_08A324E0; }
    goto L_08A324F0;
L_08A324F0:;
    v1 = a1 - 11920;
    v0 = LD32(v1+16);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A32444; }
    goto L_08A32504;
L_08A32504:;
    a0 = a2 - 1;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = LD32(a1-11920);
    if (cnd_) { goto L_08A32440; }
    goto L_08A32514;
L_08A32514:;
    a0 = a0 - 1;
    cnd_ = a0 != v0;
    v1 = LD32(v1+8);
    if (cnd_) { goto L_08A32514; }
    goto L_08A32520;
L_08A32520:;
    v1 = LD32(v1);
    goto L_08A32444;
L_08A32528:;
    v1 = LD_U8(v0-16019);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A324A0; }
    goto L_08A32534;
L_08A32534:;
    goto L_08A323FC;
}

/* 08A3253C */
rv_t func_08A3253C(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3253C:;
    sp = sp - 32;
    v0 = D_08B1C144 - (-16060);
    a3 = a0 + 0;
    v1 = LD_U8(v0-16060);
    a1 = a1 & 0xff;
    a2 = a2 & 0xffff;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A32608; }
    goto L_08A32560;
L_08A32560:;
    v0 = D_08B1BDF4 - (-16908);
    a0 = LD32(v0-16908);
    v1 = 20;
    cnd_ = a0 == v1;
    v0 = D_08B1C16D - (-16019);
    if (cnd_) { goto L_08A32674; }
    goto L_08A32574;
L_08A32574:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A32634; }
    goto L_08A3257C;
L_08A3257C:;
    cnd_ = (s32)a3 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A325BC; }
    goto L_08A32584;
L_08A32584:;
    a0 = D_08C2D15C - (-11940);
    v1 = a0 - 11940;
    v0 = LD32(v1+16);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A325BC; }
    goto L_08A3259C;
L_08A3259C:;
    v1 = LD32(a0-11940);
    cnd_ = a3 == 0;
    v0 = a3 - 1;
    if (cnd_) { goto L_08A325B8; }
    goto L_08A325A8;
L_08A325A8:;
    a0 = (u32)-1;
    goto L_08A325AC;
L_08A325AC:;
    v0 = v0 - 1;
    cnd_ = v0 != a0;
    v1 = LD32(v1+8);
    if (cnd_) { goto L_08A325AC; }
    goto L_08A325B8;
L_08A325B8:;
    v1 = LD32(v1);
    goto L_08A325BC;
L_08A325BC:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A32608; }
    goto L_08A325C4;
L_08A325C4:;
    v0 = 1;
    cnd_ = a2 == v0;
    v0 = (s32)a2 < 2;
    if (cnd_) { goto L_08A32624; }
    goto L_08A325D0;
L_08A325D0:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A32614; }
    goto L_08A325D8;
L_08A325D8:;
    cnd_ = a2 == v0;
    if (cnd_) { t0 = (u32)(s32)LD_S16(v1+18); goto L_08A325E4; }
    goto L_08A325E0;
L_08A325E0:;
    t0 = 0 + 0;
    goto L_08A325E4;
L_08A325E4:;
    a1 = D_08AE1B88 - (7048);
    a1 = a1 + 7048;
    a2 = 4;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A325FC;
L_08A325FC:;
    a0 = sp + 0;
    { rv_t r_ = func_08898160(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32604;
L_08A32604:;
    v0 = 1;
    goto L_08A32608;
L_08A32608:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A32614:;
    cnd_ = a2 != 0;
    if (cnd_) { t0 = 0 + 0; goto L_08A325E4; }
    goto L_08A3261C;
L_08A3261C:;
    t0 = (u32)(s32)LD_S16(v1+20);
    goto L_08A325E4;
L_08A32624:;
    t0 = (u32)(s32)LD_S16(v1+16);
    goto L_08A325E4;
L_08A3262C:;
    v1 = 0 + 0;
    goto L_08A325BC;
L_08A32634:;
    cnd_ = (s32)a3 < 0;
    a1 = D_08C2D170 - (-11920);
    if (cnd_) { goto L_08A3262C; }
    goto L_08A3263C;
L_08A3263C:;
    v1 = a1 - 11920;
    v0 = LD32(v1+16);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A325BC; }
    goto L_08A32650;
L_08A32650:;
    a0 = a3 - 1;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = LD32(a1-11920);
    if (cnd_) { goto L_08A325B8; }
    goto L_08A32660;
L_08A32660:;
    a0 = a0 - 1;
    cnd_ = a0 != v0;
    v1 = LD32(v1+8);
    if (cnd_) { goto L_08A32660; }
    goto L_08A3266C;
L_08A3266C:;
    v1 = LD32(v1);
    goto L_08A325BC;
L_08A32674:;
    v1 = LD_U8(v0-16019);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A32608; }
    goto L_08A32680;
L_08A32680:;
    goto L_08A32574;
}

/* 08A32688 */
void func_08A32688(void)
{
    u32 v0 = 0, v1 = 0;
L_08A32688:;
    v1 = 1;
    v0 = D_08B1C144 - (-16060);
    ST8(v0-16060, v1);
    return;
}

/* 08A32698 */
void func_08A32698(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A32698:;
    sp = sp - 96;
    v0 = D_08B1BDF4 - (-16908);
    a1 = 20;
    a0 = LD32(v0-16908);
    v0 = D_08B1C144 - (-16060);
    v0 = LD_U8(v0-16060);
    cnd_ = a0 == a1;
    ST32(sp, v0);
    if (cnd_) { goto L_08A32C04; }
    goto L_08A326F0;
L_08A326F0:;
    v0 = D_08AEFB60 - (-1184);
    goto L_08A326F4;
L_08A326F4:;
    f23 = BITSF(LD32(v0-1184));
    v0 = D_08AEFB5C - (-1188);
    f22 = BITSF(LD32(v0-1188));
    v0 = 13;
    s4 = 0 + 0;
    ST32(sp+4, 0);
    fp = 0 + 0;
    s7 = 0 + 0;
    cnd_ = a0 == v0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A32BB8; }
    goto L_08A3271C;
L_08A3271C:;
    v0 = 18;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = 0xf16e0000u; goto L_08A32B70; }
    goto L_08A32728;
L_08A32728:;
    cnd_ = a0 == a1;
    v0 = 1;
    if (cnd_) { goto L_08A32B20; }
    goto L_08A32730;
L_08A32730:;
    cnd_ = a0 == v0;
    a0 = 0x636b0000u;
    if (cnd_) { goto L_08A32AF8; }
    goto L_08A32738;
L_08A32738:;
    v1 = LD32(sp+4);
    ST32(sp+12, 0);
    cnd_ = v1 == 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_08A32760; }
    goto L_08A32748;
L_08A32748:;
    a0 = v1 + 0;
    a1 = 256;
    a2 = 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32758;
L_08A32758:;
    a0 = 1;
    ST32(sp+12, a0);
    goto L_08A32760;
L_08A32760:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A32780; }
    goto L_08A3276C;
L_08A3276C:;
    a1 = 256;
    a2 = 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32778;
L_08A32778:;
    v1 = 1;
    ST32(sp+16, v1);
    goto L_08A32780;
L_08A32780:;
    s5 = 0 + 0;
    goto L_08A32784;
L_08A32784:;
    cnd_ = s5 != 0;
    v0 = D_08C2D170 - (-11920);
    if (cnd_) { goto L_08A32AEC; }
    goto L_08A3278C;
L_08A3278C:;
    a0 = D_08C2D15C - (-11940);
    a0 = a0 - 11940;
    s6 = LD32(a0+16);
    goto L_08A32798;
L_08A32798:;
    v0 = D_08AEFB64 - (-1180);
    v1 = D_08AEFB78 - (-1160);
    f20 = BITSF(LD32(v0-1180));
    f21 = BITSF(LD32(v1-1160));
    s1 = 0 + 0;
    goto L_08A327AC;
L_08A327AC:;
    cnd_ = s4 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A327CC; }
    goto L_08A327B4;
L_08A327B4:;
    v0 = s7 + s1;
    a1 = fp + s1;
    if (s5 != 0) a1 = v0;
    a0 = s4 + 0;
    { rv_t r_ = func_0888818C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A327C8;
L_08A327C8:;
    s2 = v0 + 0;
    goto L_08A327CC;
L_08A327CC:;
    v0 = s1 < s6;
    cnd_ = v0 == 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_08A32AD0; }
    goto L_08A327D8;
L_08A327D8:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A32AD0; }
    goto L_08A327E0;
L_08A327E0:;
    cnd_ = s5 != 0;
    if (cnd_) { goto L_08A32A88; }
    goto L_08A327E8;
L_08A327E8:;
    cnd_ = (s32)s1 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3282C; }
    goto L_08A327F0;
L_08A327F0:;
    a0 = D_08C2D15C - (-11940);
    a0 = a0 - 11940;
    v0 = LD32(a0+16);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08A3282C; }
    goto L_08A32808;
L_08A32808:;
    v0 = D_08C2D15C - (-11940);
    v1 = s1 - 1;
    a0 = (u32)-1;
    cnd_ = v1 == a0;
    v0 = LD32(v0-11940);
    if (cnd_) { goto L_08A32828; }
    goto L_08A3281C;
L_08A3281C:;
    v1 = v1 - 1;
    cnd_ = v1 != a0;
    v0 = LD32(v0+8);
    if (cnd_) { goto L_08A3281C; }
    goto L_08A32828;
L_08A32828:;
    v0 = LD32(v0);
    goto L_08A3282C;
L_08A3282C:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A328C8; }
    goto L_08A32834;
L_08A32834:;
    v0 = LD32(v0+72);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A32A24; }
    goto L_08A32844;
L_08A32844:;
    cnd_ = s2 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A32990; }
    goto L_08A3284C;
L_08A3284C:;
    a0 = s2 + 0;
    a1 = 256;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32858;
L_08A32858:;
    v0 = D_08AEFB68 - (-1176);
    v1 = D_08AEFB6C - (-1172);
    f12 = BITSF(LD32(v0-1176));
    f13 = BITSF(LD32(v1-1172));
    a0 = s2 + 0;
    a1 = 0 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A32874;
L_08A32874:;
    v0 = D_08AEFB70 - (-1168);
    v1 = D_08AEFB74 - (-1164);
    f12 = BITSF(LD32(v0-1168));
    f13 = BITSF(LD32(v1-1164));
    a0 = s2 + 0;
    a1 = 1;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A32890;
L_08A32890:;
    v0 = LD32(sp+16);
    goto L_08A32894;
L_08A32894:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A328CC; }
    goto L_08A3289C;
L_08A3289C:;
    v0 = D_08B1C158 - (-16040);
    a0 = LD32(v0-16040);
    v1 = 999;
    cnd_ = a0 == v1;
    if (cnd_) { s1 = s1 + 1; goto L_08A328CC; }
    goto L_08A328B0;
L_08A328B0:;
    v0 = LD32(s3);
    v1 = LD32(v0-12);
    v1 = s3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08A32924; }
    goto L_08A328C8;
L_08A328C8:;
    s1 = s1 + 1;
    goto L_08A328CC;
L_08A328CC:;
    v0 = s1 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A327AC; }
    goto L_08A328D8;
L_08A328D8:;
    s5 = s5 + 1;
    v0 = s5 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A32784; }
    goto L_08A328E8;
L_08A328E8:;
    sp = sp + 96;
    return;
L_08A32924:;
    a1 = 256;
    a2 = 0 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32930;
L_08A32930:;
    v1 = LD32(sp+8);
    f12 = f22;
    cnd_ = s5 == 0;
    a0 = LD32(v1);
    if (cnd_) { goto L_08A32944; }
    goto L_08A32940;
L_08A32940:;
    f12 = f23;
    goto L_08A32944;
L_08A32944:;
    f0 = BITSF(s1);
    cnd_ = (s32)s1 < 0;
    f13 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A32974; }
    goto L_08A32950;
L_08A32950:;
    f13 = f13 * f20;
    v0 = LD32(a0+32);
    f14 = BITSF(0);
    a0 = LD32(sp+8);
    f13 = f13 + f21;
    t_ = v0;
    ST32(sp+16, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3296C;
L_08A3296C:;
    s1 = s1 + 1;
    goto L_08A328CC;
L_08A32974:;
    v0 = s1 & 0x1;
    v1 = s1 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f13 = (float)(s32)FBITS(f0);
    f13 = f13 + f13;
    goto L_08A32950;
L_08A32990:;
    v0 = LD32(sp+12);
    goto L_08A32994;
L_08A32994:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A32894; }
    goto L_08A3299C;
L_08A3299C:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A329B0;
L_08A329B0:;
    cnd_ = s0 != v0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A32894; }
    goto L_08A329B8;
L_08A329B8:;
    a0 = LD32(sp+4);
    a1 = 256;
    a2 = 0 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A329C8;
L_08A329C8:;
    v1 = LD32(sp+4);
    f0 = BITSF(s1);
    v0 = D_08AEFB5C - (-1188);
    a0 = LD32(v1);
    f12 = BITSF(LD32(v0-1188));
    cnd_ = (s32)s1 < 0;
    f13 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08A32A08; }
    goto L_08A329E4;
L_08A329E4:;
    f13 = f13 * f20;
    v0 = LD32(a0+32);
    f14 = BITSF(0);
    a0 = LD32(sp+4);
    f13 = f13 + f21;
    t_ = v0;
    ST32(sp+12, 0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32A00;
L_08A32A00:;
    v0 = LD32(sp+16);
    goto L_08A32894;
L_08A32A08:;
    v0 = s1 & 0x1;
    v1 = s1 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f13 = (float)(s32)FBITS(f0);
    f13 = f13 + f13;
    goto L_08A329E4;
L_08A32A24:;
    cnd_ = s2 == 0;
    v0 = 12;
    if (cnd_) { goto L_08A32990; }
    goto L_08A32A2C;
L_08A32A2C:;
    s0 = LD32(s3+68);
    a0 = s2 + 0;
    v1 = s0 < 0xdu;
    a1 = 256;
    a2 = 0 + 0;
    if (v1 == 0) s0 = v0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32A48;
L_08A32A48:;
    a0 = D_08AE28DC - (10460);
    a0 = a0 + 10460;
    s0 = s0 << 4;
    s0 = s0 + a0;
    f12 = BITSF(LD32(s0));
    f13 = BITSF(LD32(s0+4));
    a1 = 0 + 0;
    a0 = s2 + 0;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A32A6C;
L_08A32A6C:;
    f13 = BITSF(LD32(s0+12));
    f12 = BITSF(LD32(s0+8));
    a0 = s2 + 0;
    a1 = 1;
    func_08880A10(a0, a1, f12, f13);
    goto L_08A32A80;
L_08A32A80:;
    v0 = LD32(sp+12);
    goto L_08A32994;
L_08A32A88:;
    cnd_ = (s32)s1 < 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A3282C; }
    goto L_08A32A90;
L_08A32A90:;
    v1 = D_08C2D170 - (-11920);
    v1 = v1 - 11920;
    v0 = LD32(v1+16);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08A3282C; }
    goto L_08A32AA8;
L_08A32AA8:;
    v0 = D_08C2D170 - (-11920);
    v1 = s1 - 1;
    a0 = (u32)-1;
    cnd_ = v1 == a0;
    v0 = LD32(v0-11920);
    if (cnd_) { goto L_08A32828; }
    goto L_08A32ABC;
L_08A32ABC:;
    v1 = v1 - 1;
    cnd_ = v1 != a0;
    v0 = LD32(v0+8);
    if (cnd_) { goto L_08A32ABC; }
    goto L_08A32AC8;
L_08A32AC8:;
    v0 = LD32(v0);
    goto L_08A3282C;
L_08A32AD0:;
    cnd_ = s2 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A328C8; }
    goto L_08A32AD8;
L_08A32AD8:;
    a1 = 256;
    a2 = 1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32AE4;
L_08A32AE4:;
    s1 = s1 + 1;
    goto L_08A328CC;
L_08A32AEC:;
    v0 = v0 - 11920;
    s6 = LD32(v0+16);
    goto L_08A32798;
L_08A32AF8:;
    a0 = a0 | 0x2446;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32B00;
L_08A32B00:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A32738; }
    goto L_08A32B08;
L_08A32B08:;
    ST32(sp+4, 0);
    fp = 0x4f110000u;
    s7 = 0x89e60000u;
    fp = fp | 0x82df;
    s7 = s7 | 0xd2f6;
    goto L_08A32738;
L_08A32B20:;
    a0 = 0xc0f10000u;
    a0 = a0 | 0x53f6;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32B2C;
L_08A32B2C:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A32738; }
    goto L_08A32B34;
L_08A32B34:;
    a1 = 0xc1750000u;
    a1 = a1 | 0x825e;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32B44;
L_08A32B44:;
    a1 = 0xe3ea0000u;
    a0 = s4 + 0;
    a1 = a1 | 0x4388;
    fp = 0x6bd20000u;
    s7 = 0xa6a80000u;
    ST32(sp+4, v0);
    fp = fp | 0xfa8f;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32B64;
L_08A32B64:;
    s7 = s7 | 0x4aa6;
    goto L_08A32B68;
L_08A32B68:;
    ST32(sp+8, v0);
    goto L_08A32738;
L_08A32B70:;
    a0 = a0 | 0x6b20;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32B78;
L_08A32B78:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A32738; }
    goto L_08A32B80;
L_08A32B80:;
    a1 = 0x671a0000u;
    a1 = a1 | 0x7e08;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32B90;
L_08A32B90:;
    a1 = 0x898f0000u;
    a0 = s4 + 0;
    a1 = a1 | 0x3f32;
    fp = 0x4af60000u;
    s7 = 0x85cc0000u;
    ST32(sp+4, v0);
    fp = fp | 0xd8b9;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32BB0;
L_08A32BB0:;
    s7 = s7 | 0x28d0;
    goto L_08A32B68;
L_08A32BB8:;
    a0 = 0x8af00000u;
    a0 = a0 | 0x6fb0;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32BC4;
L_08A32BC4:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08A32738; }
    goto L_08A32BCC;
L_08A32BCC:;
    a1 = 0x95670000u;
    a1 = a1 | 0xb698;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32BDC;
L_08A32BDC:;
    a1 = 0xb7dc0000u;
    a0 = s4 + 0;
    a1 = a1 | 0x77c2;
    fp = 0x89580000u;
    s7 = 0xc42e0000u;
    ST32(sp+4, v0);
    fp = fp | 0xf549;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32BFC;
L_08A32BFC:;
    s7 = s7 | 0x4560;
    goto L_08A32B68;
L_08A32C04:;
    v0 = D_08B1C16D - (-16019);
    v1 = LD_U8(v0-16019);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A328E8; }
    goto L_08A32C14;
L_08A32C14:;
    v0 = D_08AEFB60 - (-1184);
    goto L_08A326F4;
}

/* 08A32C1C */
void func_08A32C1C(u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32C1C:;
    a0 = D_08C2CF34 - (-12492);
    a1 = D_08AE25A4 - (9636);
    sp = sp - 16;
    a0 = a0 - 12492;
    a1 = a1 + 9636;
    a2 = 180;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32C40;
L_08A32C40:;
    sp = sp + 16;
    return;
}

/* 08A32C4C */
rv_t func_08A32C4C(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32C4C:;
    a1 = a0 + 0;
    a0 = D_08C2CF34 - (-12492);
    sp = sp - 16;
    a0 = a0 - 12492;
    a2 = 180;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32C6C;
L_08A32C6C:;
    v1 = 1;
    v0 = D_08C2CF32 - (-12494);
    ST8(v0-12494, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A32C84 */
void func_08A32C84(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32C84:;
    sp = sp - 16;
    v0 = D_08C2B890 - (-18288);
    v0 = v0 - 18288;
    v1 = LD32(v0+12);
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A32CD4; }
    goto L_08A32CAC;
L_08A32CAC:;
    s1 = 0x55f10000u;
    s2 = v0 + 0;
    s1 = s1 | 0xf71;
    goto L_08A32CB8;
L_08A32CB8:;
    a0 = s0 + s1;
    func_08A275D0(a0);
    goto L_08A32CC0;
L_08A32CC0:;
    v1 = LD32(s2+12);
    s0 = s0 + 1;
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A32CB8; }
    goto L_08A32CD4;
L_08A32CD4:;
    sp = sp + 16;
    return;
}

/* 08A32CEC */
u32 func_08A32CEC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32CEC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 0xbf670000u;
    a0 = a0 | 0x9e15;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A32D08;
L_08A32D08:;
    v1 = 0x55f10000u;
    v1 = v1 | 0xf71;
    s0 = s0 + v1;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32D20;
L_08A32D20:;
    sp = sp + 16;
    return v0;
}

/* 08A32D30 */
rv_t func_08A32D30(u32 a0, u32 a1, u32 a3, u32 t0, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A32D30:;
    sp = sp - 32;
    t1 = a0 ^ 0x1;
    s2 = a1 ^ 0xffff;
    v0 = s2 < 0x1u;
    v1 = t1 < 0x1u;
    v0 = v0 & v1;
    t2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A32E34; }
    goto L_08A32D64;
L_08A32D64:;
    v0 = D_08AEFB7C - (-1156);
    f3 = BITSF(LD32(v0-1156));
    v0 = 47;
    f0 = BITSF(v0);
    v0 = 255;
    a3 = D_08C2CEF8 - (-12552);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 179;
    t0 = D_08C2CF08 - (-12536);
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 108;
    f6 = f6 * f3;
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    f2 = f2 * f3;
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f5 = f5 * f3;
    a2 = D_08C2CF18 - (-12520);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v1 = a3 - 12552;
    a0 = t0 - 12536;
    f1 = f1 * f3;
    a1 = a2 - 12520;
    ST32(a1+12, FBITS(f2));
    v0 = D_08C2D10C - (-12020);
    v0 = v0 - 12020;
    ST32(v1+4, FBITS(f4));
    ST32(v1+8, FBITS(f5));
    ST32(v1+12, FBITS(f2));
    ST32(a0+4, FBITS(f6));
    ST32(a0+8, FBITS(f6));
    ST32(a0+12, FBITS(f2));
    ST32(a2-12520, FBITS(f2));
    ST32(a1+8, FBITS(f2));
    ST32(a1+4, FBITS(f2));
    ST32(a3-12552, FBITS(f1));
    a3 = 1;
    ST32(t0-12536, FBITS(f5));
    t0 = (u32)-1;
    goto L_08A32E14;
L_08A32E14:;
    a3 = a3 - 1;
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    cnd_ = a3 != t0;
    v0 = v0 + 20;
    if (cnd_) { goto L_08A32E14; }
    goto L_08A32E34;
L_08A32E34:;
    v0 = s2 < 0x1u;
    v1 = t1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = t1 < 0x1u; goto L_08A32E7C; }
    goto L_08A32E48;
L_08A32E48:;
    v0 = D_08C2D134 - (-11980);
    v0 = v0 - 11980;
    v1 = 1;
    a0 = (u32)-1;
    goto L_08A32E58;
L_08A32E58:;
    v1 = v1 - 1;
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 20;
    if (cnd_) { goto L_08A32E58; }
    goto L_08A32E78;
L_08A32E78:;
    v0 = t1 < 0x1u;
    goto L_08A32E7C;
L_08A32E7C:;
    a2 = s2 < 0x1u;
    v0 = a2 & v0;
    cnd_ = v0 == 0;
    s1 = t2 < 0x1u;
    if (cnd_) { goto L_08A32EC4; }
    goto L_08A32E8C;
L_08A32E8C:;
    a0 = D_08C2D15C - (-11940);
    a1 = D_08C2D170 - (-11920);
    v0 = a0 - 11940;
    v1 = a1 - 11920;
    ST32(v0+16, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(a0-11940, 0);
    ST32(a1-11920, 0);
    ST32(v1+16, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(v1+12, 0);
    goto L_08A32EC4;
L_08A32EC4:;
    v0 = a2 & s1;
    cnd_ = v0 != 0;
    a0 = D_08C2D170 - (-11920);
    if (cnd_) { goto L_08A32F28; }
    goto L_08A32ED0;
L_08A32ED0:;
    v0 = s2 < 0x1u;
    goto L_08A32ED4;
L_08A32ED4:;
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A32F10; }
    goto L_08A32EE0;
L_08A32EE0:;
    v0 = D_08C2D10C - (-12020);
    v0 = v0 - 12020;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A32F10; }
    goto L_08A32EF0;
L_08A32EF0:;
    s0 = v0 + 40;
    goto L_08A32EF4;
L_08A32EF4:;
    cnd_ = s0 == s1;
    s0 = s0 - 20;
    if (cnd_) { goto L_08A32F0C; }
    goto L_08A32EFC;
L_08A32EFC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08AD12DC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32F04;
L_08A32F04:;
    goto L_08A32EF4;
L_08A32F0C:;
    goto L_08A32F10;
L_08A32F10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A32F28:;
    a0 = a0 - 11920;
    { rv_t r_ = func_08AD134C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32F30;
L_08A32F30:;
    a0 = D_08C2D15C - (-11940);
    a0 = a0 - 11940;
    { rv_t r_ = func_08AD134C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32F3C;
L_08A32F3C:;
    v0 = D_08C2D134 - (-11980);
    v0 = v0 - 11980;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A32ED0; }
    goto L_08A32F4C;
L_08A32F4C:;
    s0 = v0 + 40;
    goto L_08A32F50;
L_08A32F50:;
    cnd_ = s0 == s3;
    v0 = s2 < 0x1u;
    if (cnd_) { goto L_08A32ED4; }
    goto L_08A32F58;
L_08A32F58:;
    s0 = s0 - 20;
    a0 = s0 + 0;
    { rv_t r_ = func_08AD12DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32F64;
L_08A32F64:;
    goto L_08A32F50;
}

/* 08A32F6C */
rv_t func_08A32F6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32F6C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A32D30(a0, a1, a3, t0, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32F80;
L_08A32F80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A32F8C */
rv_t func_08A32F8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32F8C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08A32D30(a0, a1, a3, t0, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A32FA0;
L_08A32FA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A32FAC */
void func_08A32FAC(void)
{
    u32 v0 = 0;
L_08A32FAC:;
    v0 = D_08C2D3D8 - (-11304);
    ST32(v0-11304, 0);
    return;
}

/* 08A32FB8 */
void func_08A32FB8(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A32FB8:;
    a0 = D_08AE29AC - (10668);
    a1 = ((u32)(uintptr_t)func_08A33BA8) - (15272);
    sp = sp - 16;
    a0 = a0 + 10668;
    a1 = a1 + 15272;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, t1, t2, t3);
    goto L_08A32FE0;
L_08A32FE0:;
    a0 = D_08AE29D4 - (10708);
    a1 = ((u32)(uintptr_t)func_08A33BEC) - (15340);
    a0 = a0 + 10708;
    a1 = a1 + 15340;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A32FFC;
L_08A32FFC:;
    a0 = D_08AE2A04 - (10756);
    a1 = ((u32)(uintptr_t)func_08A33C30) - (15408);
    a0 = a0 + 10756;
    a1 = a1 + 15408;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33018;
L_08A33018:;
    a0 = D_08AE2A2C - (10796);
    a1 = ((u32)(uintptr_t)func_08A33C5C) - (15452);
    a0 = a0 + 10796;
    a1 = a1 + 15452;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33034;
L_08A33034:;
    a0 = D_08AE2A54 - (10836);
    a1 = ((u32)(uintptr_t)func_08A33C88) - (15496);
    a0 = a0 + 10836;
    a1 = a1 + 15496;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33050;
L_08A33050:;
    a0 = D_08AE2A7C - (10876);
    a1 = ((u32)(uintptr_t)func_08A33CB4) - (15540);
    a0 = a0 + 10876;
    a1 = a1 + 15540;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3306C;
L_08A3306C:;
    a0 = D_08AE2AA4 - (10916);
    a1 = ((u32)(uintptr_t)func_08A33CE0) - (15584);
    a0 = a0 + 10916;
    a1 = a1 + 15584;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33088;
L_08A33088:;
    a0 = D_08AE2ACC - (10956);
    a1 = ((u32)(uintptr_t)func_08A33D0C) - (15628);
    a0 = a0 + 10956;
    a1 = a1 + 15628;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A330A4;
L_08A330A4:;
    a0 = D_08AE2B00 - (11008);
    a1 = ((u32)(uintptr_t)func_08A33D38) - (15672);
    a0 = a0 + 11008;
    a1 = a1 + 15672;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A330C0;
L_08A330C0:;
    a0 = D_08AE2B34 - (11060);
    a1 = ((u32)(uintptr_t)func_08A33D64) - (15716);
    a0 = a0 + 11060;
    a1 = a1 + 15716;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A330DC;
L_08A330DC:;
    a0 = D_08AE2B68 - (11112);
    a1 = ((u32)(uintptr_t)func_08A33D90) - (15760);
    a0 = a0 + 11112;
    a1 = a1 + 15760;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A330F8;
L_08A330F8:;
    a0 = D_08AE2B9C - (11164);
    a1 = ((u32)(uintptr_t)func_08A33DBC) - (15804);
    a0 = a0 + 11164;
    a1 = a1 + 15804;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33114;
L_08A33114:;
    a0 = D_08AE2BD0 - (11216);
    a1 = ((u32)(uintptr_t)func_08A33DE8) - (15848);
    a0 = a0 + 11216;
    a1 = a1 + 15848;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33130;
L_08A33130:;
    a0 = D_08AE2C00 - (11264);
    a1 = ((u32)(uintptr_t)func_08A33E14) - (15892);
    a0 = a0 + 11264;
    a1 = a1 + 15892;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A3314C;
L_08A3314C:;
    a0 = D_08AE2C34 - (11316);
    a1 = ((u32)(uintptr_t)func_08A33E40) - (15936);
    a0 = a0 + 11316;
    a1 = a1 + 15936;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33168;
L_08A33168:;
    a0 = D_08AE2C68 - (11368);
    a1 = ((u32)(uintptr_t)func_08A33E6C) - (15980);
    a0 = a0 + 11368;
    a1 = a1 + 15980;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A33184;
L_08A33184:;
    a0 = D_08AE2C9C - (11420);
    a1 = ((u32)(uintptr_t)func_08A33E98) - (16024);
    a0 = a0 + 11420;
    a1 = a1 + 16024;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A331A0;
L_08A331A0:;
    a0 = D_08AE2CD0 - (11472);
    a1 = ((u32)(uintptr_t)func_08A3410C) - (16652);
    a0 = a0 + 11472;
    a1 = a1 + 16652;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A331BC;
L_08A331BC:;
    a0 = D_08AE2D00 - (11520);
    a1 = ((u32)(uintptr_t)func_08A34174) - (16756);
    a0 = a0 + 11520;
    a1 = a1 + 16756;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A331D8;
L_08A331D8:;
    a0 = D_08AE2D30 - (11568);
    a1 = ((u32)(uintptr_t)func_08A341CC) - (16844);
    a0 = a0 + 11568;
    a1 = a1 + 16844;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08AE2D60 - (11616);
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08A331F8;
L_08A331F8:;
    s0 = s0 + 11616;
    a1 = D_08C2D3D8 - (-11304);
    a1 = a1 - 11304;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a3 = 7;
    t0 = 1;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08A3321C;
L_08A3321C:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A33224;
L_08A33224:;
    sp = sp + 16;
    return;
}

/* 08A33234 */
void func_08A33234(void)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33234:;
    sp = sp - 16;
    v0 = func_08A332F4();
    goto L_08A33244;
L_08A33244:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A33260; }
    goto L_08A3324C;
L_08A3324C:;
    goto L_08A33250;
L_08A33250:;
    v0 = D_08C2D3D8 - (-11304);
    ST32(v0-11304, 0);
    sp = sp + 16;
    return;
L_08A33260:;
    func_08A33304();
    goto L_08A33268;
L_08A33268:;
    goto L_08A33250;
}

/* 08A33270 */
void func_08A33270(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33270:;
    sp = sp - 16;
    s0 = D_08C2D3D4 - (-11308);
    v0 = LD32(s0-11308);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3329C; }
    goto L_08A3328C;
L_08A3328C:;
    sp = sp + 16;
    return;
L_08A3329C:;
    func_08A333F4(a0);
    goto L_08A332A4;
L_08A332A4:;
    v0 = LD32(s0-11308);
    v1 = D_08C2D3D8 - (-11304);
    a0 = LD32(v0+2660);
    ST32(v1-11304, a0);
    goto L_08A3328C;
}

/* 08A332B8 */
u64 func_08A332B8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A332B8:;
    sp = sp - 16;
    func_088A0FD4();
    goto L_08A332C8;
L_08A332C8:;
    a0 = 2692;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A332D0;
L_08A332D0:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A33358(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A332DC;
L_08A332DC:;
    v0 = D_08C2D3D4 - (-11308);
    ST32(v0-11308, s0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A332F4 */
u32 func_08A332F4(void)
{
    u32 v0 = 0, v1 = 0;
L_08A332F4:;
    v1 = D_08C2D3D4 - (-11308);
    v0 = LD32(v1-11308);
    v0 = 0 < v0;
    return v0;
}

/* 08A33304 */
void func_08A33304(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33304:;
    sp = sp - 16;
    s1 = D_08C2D3D4 - (-11308);
    s0 = LD32(s1-11308);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A33340; }
    goto L_08A33324;
L_08A33324:;
    ST32(s1-11308, 0);
    func_088A1010();
    goto L_08A3332C;
L_08A3332C:;
    sp = sp + 16;
    return;
L_08A33340:;
    func_08A333D8(a0);
    goto L_08A33348;
L_08A33348:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33350;
L_08A33350:;
    goto L_08A33324;
}

/* 08A33358 */
u64 func_08A33358(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A33358:;
    v0 = a0 + 8;
    ST32(a0+4, 0);
    v1 = a0 + 60;
    a1 = 49;
    ST32(a0, 0);
    a2 = (u32)-1;
    ST32(v0+48, 0);
    ST8(a0+8, 0);
    ST8(v0+31, 0);
    ST16(v0+40, 0);
    ST8(v0+42, 0);
    ST8(v0+43, 0);
    ST32(v0+44, 0);
    goto L_08A3338C;
L_08A3338C:;
    a1 = a1 - 1;
    ST8(v1, 0);
    ST8(v1+31, 0);
    ST16(v1+40, 0);
    ST8(v1+42, 0);
    ST8(v1+43, 0);
    ST32(v1+44, 0);
    ST32(v1+48, 0);
    cnd_ = a1 != a2;
    v1 = v1 + 52;
    if (cnd_) { goto L_08A3338C; }
    goto L_08A333B4;
L_08A333B4:;
    ST32(a0+2688, 0);
    ST32(a0+2660, 0);
    ST32(a0+2664, 0);
    ST8(a0+2668, 0);
    ST32(a0+2672, 0);
    ST32(a0+2676, 0);
    ST32(a0+2680, 0);
    ST32(a0+2684, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A333D8 */
void func_08A333D8(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A333D8:;
    sp = sp - 16;
    func_08A33B6C(a0);
    goto L_08A333E8;
L_08A333E8:;
    sp = sp + 16;
    return;
}

/* 08A333F4 */
void func_08A333F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A333F4:;
    sp = sp - 16;
    v1 = LD32(a0+2660);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A3354C; }
    goto L_08A33410;
L_08A33410:;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_08A3351C; }
    goto L_08A3341C;
L_08A3341C:;
    v0 = v1 << 2;
    v1 = D_08AE2D8C - (11660);
    v1 = v1 + 11660;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A33438u: goto L_08A33438; case 0x08A33448u: goto L_08A33448; case 0x08A3345Cu: goto L_08A3345C; case 0x08A33468u: goto L_08A33468; default: rs_break(0, 0x08a33430); }
L_08A33438:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_08A33440;
L_08A33440:;
    func_08A3355C(a0, a1);
    goto L_08A33448;
L_08A33448:;
    goto L_08A3344C;
L_08A3344C:;
    sp = sp + 16;
    return;
L_08A3345C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08A33440;
L_08A33468:;
    func_088A1050();
    goto L_08A33470;
L_08A33470:;
    v0 = func_088A1104();
    goto L_08A33478;
L_08A33478:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A334B8; }
    goto L_08A33480;
L_08A33480:;
    { u64 r_ = func_088A10F4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33488;
L_08A33488:;
    cnd_ = v0 != 0;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_08A334CC; }
    goto L_08A33490;
L_08A33490:;
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s0+2664));
    v0 = D_08AEFB80 - (-1152);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-1152));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s0+2664, FBITS(f0));
    if (cnd_) { goto L_08A33448; }
    goto L_08A334B4;
L_08A334B4:;
    a0 = s0 + 0;
    goto L_08A334B8;
L_08A334B8:;
    a1 = 6;
    goto L_08A334BC;
L_08A334BC:;
    func_08A337D8(a0, a1);
    goto L_08A334C4;
L_08A334C4:;
    goto L_08A3344C;
L_08A334CC:;
    v0 = LD32(s0+2660);
    a0 = s0 + 0;
    v0 = v0 ^ 0x4;
    s1 = v0 < 0x1u;
    a1 = s1 + 0;
    v0 = func_08A337E4(a0, a1);
    goto L_08A334E4;
L_08A334E4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A334B8; }
    goto L_08A334EC;
L_08A334EC:;
    cnd_ = s1 != 0;
    a1 = 3;
    if (cnd_) { goto L_08A334BC; }
    goto L_08A334F4;
L_08A334F4:;
    v0 = LD32(s0+2672);
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08A334BC; }
    goto L_08A33500;
L_08A33500:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08A3344C; }
    goto L_08A3350C;
L_08A3350C:;
    ST32(s0+4, 0);
    a0 = s0 + 0;
    a1 = 3;
    goto L_08A334BC;
L_08A3351C:;
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s0+2664));
    v0 = D_08AEFB84 - (-1148);
    f0 = f0 + f1;
    f1 = BITSF(LD32(v0-1148));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s0+2664, FBITS(f0));
    if (cnd_) { goto L_08A33448; }
    goto L_08A33540;
L_08A33540:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08A334BC;
L_08A3354C:;
    a1 = 2;
    func_08A337D8(a0, a1);
    goto L_08A33554;
L_08A33554:;
    v1 = LD32(s0+2660);
    goto L_08A33410;
}

/* 08A3355C */
void func_08A3355C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1040] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1040);
L_08A3355C:;
    sp = sp - 1040;
    s0 = a0 + 0;
    s1 = a1 & 0xff;
    func_08A33B6C(a0);
    goto L_08A33578;
L_08A33578:;
    a0 = s0 + 0;
    v0 = func_08A336D8(a0);
    goto L_08A33580;
L_08A33580:;
    a1 = D_08AE2DA4 - (11684);
    t0 = D_08AE2DD8 - (11736);
    a1 = a1 + 11684;
    t1 = v0 + 0;
    a0 = sp + 0;
    a2 = 1024;
    a3 = 1;
    t0 = t0 + 11736;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A335A4;
L_08A335A4:;
    a1 = D_08AE2E00 - (11776);
    v1 = 1024;
    a0 = sp + v0;
    a1 = a1 + 11776;
    a3 = 1;
    t1 = 10;
    cnd_ = s1 == 0;
    a2 = v1 - v0;
    if (cnd_) { goto L_08A33610; }
    goto L_08A335C4;
L_08A335C4:;
    v0 = D_08B15FAC - (24492);
    t0 = LD32(v0+24492);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A335D0;
L_08A335D0:;
    a0 = sp + 0;
    v0 = func_088A1058(a0);
    goto L_08A335D8;
L_08A335D8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = 6;
    if (cnd_) { goto L_08A335F4; }
    goto L_08A335E4;
L_08A335E4:;
    cnd_ = s1 != 0;
    a1 = 4;
    if (cnd_) { goto L_08A335F4; }
    goto L_08A335EC;
L_08A335EC:;
    a0 = s0 + 0;
    a1 = 5;
    goto L_08A335F4;
L_08A335F4:;
    func_08A337D8(a0, a1);
    goto L_08A335FC;
L_08A335FC:;
    sp = sp + 1040;
    return;
L_08A33610:;
    t0 = LD32(s0+4);
    a1 = D_08AE2E08 - (11784);
    a1 = a1 + 11784;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33624;
L_08A33624:;
    goto L_08A335D0;
}

/* 08A3362C */
u64 func_08A3362C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A3362C:;
    v0 = LD32(a0+2672);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A33650; }
    goto L_08A3363C;
L_08A3363C:;
    v0 = 52;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = a0 + v0;
    v1 = v0 + 60;
    goto L_08A33650;
L_08A33650:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A33658 */
u64 func_08A33658(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A33658:;
    v1 = LD_U8(a0+2668);
    v0 = a0 + 8;
    if (v1 == 0) v0 = 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A33668 */
void func_08A33668(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33668:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == a1;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A336B4; }
    goto L_08A33688;
L_08A33688:;
    { u64 r_ = func_088A10F4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33690;
L_08A33690:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A336C8; }
    goto L_08A33698;
L_08A33698:;
    ST32(s0, s1);
    goto L_08A3369C;
L_08A3369C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(s0+4, 0);
    ST32(s0+2672, 0);
    ST8(s0+2668, 0);
    func_08A337D8(a0, a1);
    goto L_08A336B4;
L_08A336B4:;
    sp = sp + 16;
    return;
L_08A336C8:;
    func_088A1128();
    goto L_08A336D0;
L_08A336D0:;
    ST32(s0, s1);
    goto L_08A3369C;
}

/* 08A336D8 */
u32 func_08A336D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08A336D8:;
    a0 = LD32(a0);
    v0 = 1;
    a1 = 3;
    cnd_ = a0 == v0;
    v1 = (s32)a0 < 2;
    if (cnd_) { goto L_08A33704; }
    goto L_08A336EC;
L_08A336EC:;
    cnd_ = v1 != 0;
    a1 = 11;
    if (cnd_) { goto L_08A3370C; }
    goto L_08A336F4;
L_08A336F4:;
    v0 = 2;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A33704; }
    goto L_08A33700;
L_08A33700:;
    a1 = 0 + 0;
    goto L_08A33704;
L_08A33704:;
    v0 = a1 + 0;
    return v0;
L_08A3370C:;
    cnd_ = a0 != 0;
    a1 = 12;
    if (cnd_) { goto L_08A33700; }
    goto L_08A33714;
L_08A33714:;
    goto L_08A33704;
}

/* 08A3371C */
u64 func_08A3371C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3371C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088A10F4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33730;
L_08A33730:;
    a0 = s0 + 0;
    a1 = 3;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A33754; }
    goto L_08A33740;
L_08A33740:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A33754:;
    v0 = LD32(s0+4);
    v0 = v0 + 10;
    ST32(s0+4, v0);
    func_08A337D8(a0, a1);
    goto L_08A33764;
L_08A33764:;
    v1 = 1;
    goto L_08A33740;
}

/* 08A3376C */
u64 func_08A3376C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3376C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088A10F4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33780;
L_08A33780:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A337AC; }
    goto L_08A33788;
L_08A33788:;
    v1 = LD32(s0+4);
    a0 = s0 + 0;
    a1 = 3;
    v0 = v1 < 0xbu;
    cnd_ = v0 == 0;
    a2 = v1 - 10;
    if (cnd_) { goto L_08A337D0; }
    goto L_08A337A0;
L_08A337A0:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A337BC; }
    goto L_08A337A8;
L_08A337A8:;
    v0 = 0 + 0;
    goto L_08A337AC;
L_08A337AC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A337BC:;
    ST32(s0+4, 0);
    goto L_08A337C0;
L_08A337C0:;
    func_08A337D8(a0, a1);
    goto L_08A337C8;
L_08A337C8:;
    v0 = 1;
    goto L_08A337AC;
L_08A337D0:;
    ST32(s0+4, a2);
    goto L_08A337C0;
}

/* 08A337D8 */
void func_08A337D8(u32 a0, u32 a1)
{
L_08A337D8:;
    ST32(a0+2660, a1);
    ST32(a0+2664, 0);
    return;
}

/* 08A337E4 */
u32 func_08A337E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A337E4:;
    sp = sp - 32;
    s3 = a1 & 0xff;
    s1 = a0 + 0;
    v0 = func_088A117C();
    goto L_08A3380C;
L_08A3380C:;
    s0 = v0 + 0;
    v0 = func_088A1170();
    goto L_08A33814;
L_08A33814:;
    v1 = v0 + s0;
    ST32(s1+2688, v0);
    a0 = 0 + 0;
    ST32(s1+2676, v0);
    ST32(s1+2680, v1);
    cnd_ = (s32)s0 <= 0;
    ST32(s1+2684, 0);
    if (cnd_) { goto L_08A339F8; }
    goto L_08A33830;
L_08A33830:;
    ST8(v1-1, 0);
    a0 = s1 + 0;
    v0 = func_08A33A34(a0);
    goto L_08A3383C;
L_08A3383C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A33844;
L_08A33844:;
    cnd_ = s3 == 0;
    if (cnd_) { ST32(s1+2672, 0); goto L_08A3384C; }
    goto L_08A3384C;
L_08A3384C:;
    s4 = 0x88880000u;
    s4 = s4 | 0x8889;
    goto L_08A33854;
L_08A33854:;
    a0 = s1 + 0;
    v0 = func_08A33ABC(a0);
    goto L_08A3385C;
L_08A3385C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A339EC; }
    goto L_08A33864;
L_08A33864:;
    cnd_ = s3 != 0;
    s0 = s1 + 8;
    if (cnd_) { goto L_08A33884; }
    goto L_08A3386C;
L_08A3386C:;
    v0 = LD32(s1+2672);
    v1 = 52;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = s1 + v0;
    s0 = v0 + 60;
    goto L_08A33884;
L_08A33884:;
    a0 = s1 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A3388C;
L_08A3388C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A33894;
L_08A33894:;
    a0 = s1 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A3389C;
L_08A3389C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A338A4;
L_08A338A4:;
    t0 = LD32(s1+2684);
    v0 = D_08AE2E20 - (11808);
    s2 = v0 + 11808;
    a0 = s0 + 31;
    a1 = s2 + 0;
    a2 = 9;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A338C4;
L_08A338C4:;
    a0 = s1 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A338CC;
L_08A338CC:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A338D4;
L_08A338D4:;
    t0 = LD32(s1+2684);
    a1 = s2 + 0;
    a2 = 31;
    a3 = 1;
    a0 = s0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A338EC;
L_08A338EC:;
    a0 = s1 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A338F4;
L_08A338F4:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A338FC;
L_08A338FC:;
    a0 = LD32(s1+2684);
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33904;
L_08A33904:;
    a0 = s1 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A3390C;
L_08A3390C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A33914;
L_08A33914:;
    a0 = LD32(s1+2684);
    v0 = 45;
    v1 = (u32)(s32)LD_S8(a0);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(a0+1); goto L_08A33A24; }
    goto L_08A33928;
L_08A33928:;
    a0 = LD32(s1+2684);
    goto L_08A3392C;
L_08A3392C:;
    a1 = s0 + 48;
    { rv_t r_ = func_088375C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33934;
L_08A33934:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A3393C;
L_08A3393C:;
    a0 = s1 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A33944;
L_08A33944:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A3394C;
L_08A3394C:;
    a0 = LD32(s1+2684);
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33954;
L_08A33954:;
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = (u32)((s32)v0 >> 31);
    a0 = s1 + 0;
    a1 = hi;
    a1 = a1 + v0;
    a1 = (u32)((s32)a1 >> 5);
    a1 = a1 - v1;
    { u64 p_ = (u64)a1 * s4; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = a1 << 4;
    v1 = v1 - a1;
    v1 = v1 << 2;
    v0 = v0 - v1;
    a2 = hi;
    a2 = a2 >> 5;
    v1 = a2 << 4;
    v1 = v1 - a2;
    v1 = v1 << 2;
    a1 = a1 - v1;
    ST8(s0+43, v0);
    ST8(s0+42, a1);
    ST16(s0+40, a2);
    v0 = func_08A33AD4(a0);
    goto L_08A339AC;
L_08A339AC:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A339B4;
L_08A339B4:;
    a0 = LD32(s1+2684);
    { rv_t r_ = func_08A85F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A339BC;
L_08A339BC:;
    ST32(s0+44, v0);
    a0 = s1 + 0;
    v0 = func_08A33A8C(a0);
    goto L_08A339C8;
L_08A339C8:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A339F8; }
    goto L_08A339D0;
L_08A339D0:;
    cnd_ = s3 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A33A1C; }
    goto L_08A339D8;
L_08A339D8:;
    v0 = LD32(s1+2672);
    v0 = v0 + 1;
    v1 = v0 < 0x32u;
    cnd_ = v1 != 0;
    ST32(s1+2672, v0);
    if (cnd_) { goto L_08A33854; }
    goto L_08A339EC;
L_08A339EC:;
    a0 = s1 + 0;
    func_08A33B6C(a0);
    goto L_08A339F4;
L_08A339F4:;
    a0 = 1;
    goto L_08A339F8;
L_08A339F8:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A33A1C:;
    ST8(s1+2668, v0);
    goto L_08A339EC;
L_08A33A24:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+2684); goto L_08A3392C; }
    goto L_08A33A2C;
L_08A33A2C:;
    ST32(s0+48, 0);
    goto L_08A3393C;
}

/* 08A33A34 */
u32 func_08A33A34(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33A34:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A33AD4(a0);
    goto L_08A33A48;
L_08A33A48:;
    a1 = D_08AE2E24 - (11812);
    a1 = a1 + 11812;
    cnd_ = v0 != 0;
    a2 = 8;
    if (cnd_) { goto L_08A33A6C; }
    goto L_08A33A58;
L_08A33A58:;
    v0 = 0 + 0;
    goto L_08A33A60;
L_08A33A60:;
    sp = sp + 16;
    return v0;
L_08A33A6C:;
    a0 = LD32(s0+2684);
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33A74;
L_08A33A74:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A33A58; }
    goto L_08A33A7C;
L_08A33A7C:;
    v0 = func_08A33A8C(a0);
    goto L_08A33A84;
L_08A33A84:;
    goto L_08A33A60;
}

/* 08A33A8C */
u32 func_08A33A8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A33A8C:;
    a1 = a0 + 0;
    a0 = LD32(a0+2688);
    v0 = 10;
    a3 = 0 + 0;
    v1 = (u32)(s32)LD_S8(a0);
    cnd_ = v1 == v0;
    a2 = a0 + 1;
    if (cnd_) { goto L_08A33AB0; }
    goto L_08A33AA8;
L_08A33AA8:;
    v0 = a3 + 0;
    return v0;
L_08A33AB0:;
    ST32(a1+2688, a2);
    a3 = 1;
    goto L_08A33AA8;
}

/* 08A33ABC */
u32 func_08A33ABC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08A33ABC:;
    v1 = LD32(a0+2680);
    v0 = LD32(a0+2688);
    v1 = v1 - 1;
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    return v0;
}

/* 08A33AD4 */
u32 func_08A33AD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A33AD4:;
    a1 = LD32(a0+2688);
    v0 = LD32(a0+2680);
    a2 = a0 + 0;
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A33B64; }
    goto L_08A33AEC;
L_08A33AEC:;
    ST32(a2+2684, a1);
    v0 = (u32)(s32)LD_S8(a1);
    v1 = v0 ^ 0x9;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A33B40; }
    goto L_08A33B0C;
L_08A33B0C:;
    t0 = 1;
    goto L_08A33B10;
L_08A33B10:;
    a0 = a1 + 1;
    ST32(a2+2688, a0);
    a3 = t0 < 0x100u;
    v1 = (u32)(s32)LD_S8(a1+1);
    v0 = v1 ^ 0x9;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A33B40; }
    goto L_08A33B38;
L_08A33B38:;
    cnd_ = a3 != 0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08A33B10; }
    goto L_08A33B40;
L_08A33B40:;
    v0 = 256;
    cnd_ = t0 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A33B64; }
    goto L_08A33B4C;
L_08A33B4C:;
    v1 = LD32(a2+2688);
    a0 = 1;
    ST8(v1, 0);
    v0 = LD32(a2+2688);
    v0 = v0 + 1;
    ST32(a2+2688, v0);
    goto L_08A33B64;
L_08A33B64:;
    v0 = a0 + 0;
    return v0;
}

/* 08A33B6C */
void func_08A33B6C(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33B6C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088A1128();
    goto L_08A33B80;
L_08A33B80:;
    func_088A1188(0, 0, 0);
    goto L_08A33B88;
L_08A33B88:;
    ST32(s0+2688, 0);
    ST32(s0+2676, 0);
    ST32(s0+2680, 0);
    ST32(s0+2684, 0);
    sp = sp + 16;
    return;
}

/* 08A33BA8 */
rv_t func_08A33BA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33BA8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2E30 - (11824);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 11824;
    if (cnd_) { goto L_08A33BDC; }
    goto L_08A33BC4;
L_08A33BC4:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33BCC;
L_08A33BCC:;
    goto L_08A33BD0;
L_08A33BD0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A33BDC:;
    { u64 r_ = func_08A332B8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33BE4;
L_08A33BE4:;
    goto L_08A33BD0;
}

/* 08A33BEC */
rv_t func_08A33BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33BEC:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AE2E5C - (11868);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 11868;
    if (cnd_) { goto L_08A33C20; }
    goto L_08A33C08;
L_08A33C08:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33C10;
L_08A33C10:;
    goto L_08A33C14;
L_08A33C14:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A33C20:;
    func_08A33304();
    goto L_08A33C28;
L_08A33C28:;
    goto L_08A33C14;
}

/* 08A33C30 */
rv_t func_08A33C30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33C30:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 0 + 0;
    { rv_t r_ = func_08A33EC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33C50;
L_08A33C50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33C5C */
rv_t func_08A33C5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33C5C:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 1;
    { rv_t r_ = func_08A33EC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33C7C;
L_08A33C7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33C88 */
rv_t func_08A33C88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33C88:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 2;
    { rv_t r_ = func_08A33EC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33CA8;
L_08A33CA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33CB4 */
rv_t func_08A33CB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33CB4:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 3;
    { rv_t r_ = func_08A33EC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33CD4;
L_08A33CD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33CE0 */
rv_t func_08A33CE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33CE0:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 4;
    { rv_t r_ = func_08A33EC4(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33D00;
L_08A33D00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33D0C */
rv_t func_08A33D0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33D0C:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 0 + 0;
    { rv_t r_ = func_08A33F6C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33D2C;
L_08A33D2C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33D38 */
rv_t func_08A33D38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33D38:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 1;
    { rv_t r_ = func_08A33F6C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33D58;
L_08A33D58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33D64 */
rv_t func_08A33D64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33D64:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 2;
    { rv_t r_ = func_08A33F6C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33D84;
L_08A33D84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33D90 */
rv_t func_08A33D90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33D90:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 3;
    { rv_t r_ = func_08A33F6C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33DB0;
L_08A33DB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33DBC */
rv_t func_08A33DBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33DBC:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 4;
    { rv_t r_ = func_08A33F6C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33DDC;
L_08A33DDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33DE8 */
rv_t func_08A33DE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33DE8:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 0 + 0;
    { rv_t r_ = func_08A34014(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33E08;
L_08A33E08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33E14 */
rv_t func_08A33E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33E14:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 1;
    { rv_t r_ = func_08A34014(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33E34;
L_08A33E34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33E40 */
rv_t func_08A33E40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33E40:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 2;
    { rv_t r_ = func_08A34014(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33E60;
L_08A33E60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33E6C */
rv_t func_08A33E6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33E6C:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 3;
    { rv_t r_ = func_08A34014(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33E8C;
L_08A33E8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33E98 */
rv_t func_08A33E98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33E98:;
    v0 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a1 = a0 + 0;
    a2 = v0 + 0;
    a0 = 4;
    { rv_t r_ = func_08A34014(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33EB8;
L_08A33EB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A33EC4 */
rv_t func_08A33EC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33EC4:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s1 = a0 + 0;
    a0 = D_08AE2E88 - (11912);
    a0 = a0 + 11912;
    a3 = a3 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A33EF8; }
    goto L_08A33EF0;
L_08A33EF0:;
    cnd_ = a3 == 0;
    v0 = D_08C2D3D4 - (-11308);
    if (cnd_) { goto L_08A33F1C; }
    goto L_08A33EF8;
L_08A33EF8:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33F00;
L_08A33F00:;
    v0 = 1;
    goto L_08A33F04;
L_08A33F04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A33F1C:;
    s0 = LD32(v0-11308);
    v0 = 0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A33F04; }
    goto L_08A33F2C;
L_08A33F2C:;
    { u64 r_ = func_08A3362C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33F34;
L_08A33F34:;
    s2 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A33F04; }
    goto L_08A33F44;
L_08A33F44:;
    v0 = func_08A336D8(a0);
    goto L_08A33F4C;
L_08A33F4C:;
    v0 = v0 ^ 0xc;
    v0 = v0 < 0x1u;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08AD1678(a0, a1, a2, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33F64;
L_08A33F64:;
    v0 = 1;
    goto L_08A33F04;
}

/* 08A33F6C */
rv_t func_08A33F6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A33F6C:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s1 = a0 + 0;
    a0 = D_08AE2EB8 - (11960);
    a0 = a0 + 11960;
    a3 = a3 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A33FA0; }
    goto L_08A33F98;
L_08A33F98:;
    cnd_ = a3 == 0;
    v0 = D_08C2D3D4 - (-11308);
    if (cnd_) { goto L_08A33FC4; }
    goto L_08A33FA0;
L_08A33FA0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A33FA8;
L_08A33FA8:;
    v0 = 1;
    goto L_08A33FAC;
L_08A33FAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A33FC4:;
    s0 = LD32(v0-11308);
    v0 = 0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A33FAC; }
    goto L_08A33FD4;
L_08A33FD4:;
    { u64 r_ = func_08A33658(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A33FDC;
L_08A33FDC:;
    s2 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A33FAC; }
    goto L_08A33FEC;
L_08A33FEC:;
    v0 = func_08A336D8(a0);
    goto L_08A33FF4;
L_08A33FF4:;
    v0 = v0 ^ 0xc;
    v0 = v0 < 0x1u;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08AD1678(a0, a1, a2, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3400C;
L_08A3400C:;
    v0 = 1;
    goto L_08A33FAC;
}

/* 08A34014 */
rv_t func_08A34014(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34014:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    cnd_ = a2 != 0;
    a3 = a3 & 0xff;
    if (cnd_) { goto L_08A34030; }
    goto L_08A34028;
L_08A34028:;
    cnd_ = a3 == 0;
    a1 = D_08C2D3D4 - (-11308);
    if (cnd_) { goto L_08A34050; }
    goto L_08A34030;
L_08A34030:;
    a0 = D_08AE2F00 - (12032);
    a0 = a0 + 12032;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3403C;
L_08A3403C:;
    v1 = 1;
    goto L_08A34040;
L_08A34040:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34050:;
    v0 = LD32(a1-11308);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A34040; }
    goto L_08A3405C;
L_08A3405C:;
    v0 = D_08AE2F34 - (12084);
    v1 = a0 < 0x5u;
    cnd_ = v1 == 0;
    v0 = v0 + 12084;
    if (cnd_) { goto L_08A340A0; }
    goto L_08A3406C;
L_08A3406C:;
    v1 = D_08AE2F40 - (12096);
    v0 = a0 << 2;
    v1 = v1 + 12096;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A34088u: goto L_08A34088; case 0x08A340B8u: goto L_08A340B8; case 0x08A340CCu: goto L_08A340CC; case 0x08A340E4u: goto L_08A340E4; case 0x08A340F8u: goto L_08A340F8; default: rs_break(0, 0x08a34080); }
L_08A34088:;
    a0 = 0x330000u;
    a1 = 0x60f10000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0x1c2b;
    goto L_08A34098;
L_08A34098:;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A340A0;
L_08A340A0:;
    a0 = D_08AE2F38 - (12088);
    goto L_08A340A4;
L_08A340A4:;
    a0 = a0 + 12088;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A340B0;
L_08A340B0:;
    v1 = 1;
    goto L_08A34040;
L_08A340B8:;
    a0 = 0x330000u;
    a1 = 0x63a10000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0xc2e7;
    goto L_08A34098;
L_08A340CC:;
    a0 = LD32(a1-11308);
    v0 = func_08A336D8(a0);
    goto L_08A340D4;
L_08A340D4:;
    a0 = v0 + 0;
    v0 = func_08A34224(a0);
    goto L_08A340DC;
L_08A340DC:;
    a0 = D_08AE2F38 - (12088);
    goto L_08A340A4;
L_08A340E4:;
    a0 = 0x330000u;
    a1 = 0xbac10000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0xa02e;
    goto L_08A34098;
L_08A340F8:;
    a0 = 0x330000u;
    a1 = 0x6e440000u;
    a0 = a0 | 0x155f;
    a1 = a1 | 0x95c3;
    goto L_08A34098;
}

/* 08A3410C */
rv_t func_08A3410C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A3410C:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AE2F54 - (12116);
    a0 = a0 + 12116;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34134; }
    goto L_08A3412C;
L_08A3412C:;
    cnd_ = a2 == 0;
    v0 = D_08C2D3D4 - (-11308);
    if (cnd_) { goto L_08A3414C; }
    goto L_08A34134;
L_08A34134:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3413C;
L_08A3413C:;
    v0 = 1;
    goto L_08A34140;
L_08A34140:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A3414C:;
    a0 = LD32(v0-11308);
    a2 = v1 < 0x3u;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A34140; }
    goto L_08A3415C;
L_08A3415C:;
    cnd_ = a2 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08A34140; }
    goto L_08A34164;
L_08A34164:;
    func_08A33668(a0, a1);
    goto L_08A3416C;
L_08A3416C:;
    v0 = 1;
    goto L_08A34140;
}

/* 08A34174 */
rv_t func_08A34174(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34174:;
    sp = sp - 16;
    v0 = a0 & 0xff;
    a0 = D_08AE2F98 - (12184);
    cnd_ = v0 != 0;
    a0 = a0 + 12184;
    if (cnd_) { goto L_08A341BC; }
    goto L_08A3418C;
L_08A3418C:;
    v0 = D_08C2D3D4 - (-11308);
    v1 = LD32(v0-11308);
    v0 = 0 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A341AC; }
    goto L_08A341A0;
L_08A341A0:;
    goto L_08A341A4;
L_08A341A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A341AC:;
    { u64 r_ = func_08A3371C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A341B4;
L_08A341B4:;
    goto L_08A341A4;
L_08A341BC:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A341C4;
L_08A341C4:;
    v0 = 1;
    goto L_08A341A0;
}

/* 08A341CC */
rv_t func_08A341CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A341CC:;
    sp = sp - 16;
    v0 = a0 & 0xff;
    a0 = D_08AE2FCC - (12236);
    cnd_ = v0 != 0;
    a0 = a0 + 12236;
    if (cnd_) { goto L_08A34214; }
    goto L_08A341E4;
L_08A341E4:;
    v0 = D_08C2D3D4 - (-11308);
    v1 = LD32(v0-11308);
    v0 = 0 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A34204; }
    goto L_08A341F8;
L_08A341F8:;
    goto L_08A341FC;
L_08A341FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34204:;
    { u64 r_ = func_08A3376C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3420C;
L_08A3420C:;
    goto L_08A341FC;
L_08A34214:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3421C;
L_08A3421C:;
    v0 = 1;
    goto L_08A341F8;
}

/* 08A34224 */
u32 func_08A34224(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34224:;
    v1 = D_08AE3044 - (12356);
    v0 = a0 + 0;
    v1 = v1 + 12356;
    a0 = a0 << 2;
    sp = sp - 16;
    a1 = a0 + v1;
    v0 = v0 < 0xeu;
    a0 = 0x330000u;
    cnd_ = v0 != 0;
    a0 = a0 | 0x155f;
    if (cnd_) { goto L_08A34268; }
    goto L_08A34250;
L_08A34250:;
    v0 = D_08AE2F34 - (12084);
    goto L_08A34254;
L_08A34254:;
    v1 = v0 + 12084;
    goto L_08A34258;
L_08A34258:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A34268:;
    a1 = LD32(a1);
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34270;
L_08A34270:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A34258; }
    goto L_08A34278;
L_08A34278:;
    v0 = D_08AE2F34 - (12084);
    goto L_08A34254;
}

/* 08A34280 */
void func_08A34280(u32 a0)
{
    u32 v0 = 0;
L_08A34280:;
    v0 = 100;
    ST32(a0+4, v0);
    ST32(a0, v0);
    return;
}

/* 08A34290 */
void func_08A34290(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34290:;
    sp = sp - 16;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    ST32(a0+4, v0);
    goto L_08A342B0;
L_08A342B0:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    v0 = func_08A342E8(a0, a1);
    goto L_08A342BC;
L_08A342BC:;
    v1 = LD32(s0+4);
    s1 = s1 + 1;
    a0 = s1 < 0x8u;
    v1 = v1 - v0;
    cnd_ = a0 != 0;
    ST32(s0+4, v1);
    if (cnd_) { goto L_08A342B0; }
    goto L_08A342D4;
L_08A342D4:;
    sp = sp + 16;
    return;
}

/* 08A342E8 */
u32 func_08A342E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A342E8:;
    sp = sp - 16;
    s1 = D_08C2933C - (-27844);
    v0 = s1 - 27844;
    s2 = a0 + 0;
    a0 = v0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A34318;
L_08A34318:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A34438; }
    goto L_08A34320;
L_08A34320:;
    v0 = s0 < 0x8u;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A34374; }
    goto L_08A3432C;
L_08A3432C:;
    v1 = D_08AE307C - (12412);
    v0 = s0 << 2;
    v1 = v1 + 12412;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A34348u: goto L_08A34348; case 0x08A3438Cu: goto L_08A3438C; case 0x08A343A8u: goto L_08A343A8; case 0x08A343C4u: goto L_08A343C4; case 0x08A343E0u: goto L_08A343E0; case 0x08A343FCu: goto L_08A343FC; case 0x08A34418u: goto L_08A34418; case 0x08A34428u: goto L_08A34428; default: rs_break(0, 0x08a34340); }
L_08A34348:;
    a0 = s1 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A34354;
L_08A34354:;
    v1 = LD32(v0+4);
    v0 = D_08ADC5E8 - (-14872);
    v0 = v0 - 14872;
    goto L_08A34360;
L_08A34360:;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a1 = LD32(v1);
    a0 = s2 + 0;
    v0 = func_08A3454C(a1);
    goto L_08A34374;
L_08A34374:;
    sp = sp + 16;
    return v0;
L_08A3438C:;
    a0 = s1 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A34398;
L_08A34398:;
    v1 = LD32(v0+8);
    v0 = D_08ADC610 - (-14832);
    v0 = v0 - 14832;
    goto L_08A34360;
L_08A343A8:;
    a0 = s1 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A343B4;
L_08A343B4:;
    v1 = LD32(v0+12);
    v0 = D_08ADC630 - (-14800);
    v0 = v0 - 14800;
    goto L_08A34360;
L_08A343C4:;
    a0 = s1 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A343D0;
L_08A343D0:;
    v1 = LD32(v0+16);
    v0 = D_08ADC648 - (-14776);
    v0 = v0 - 14776;
    goto L_08A34360;
L_08A343E0:;
    a0 = s1 - 27844;
    a1 = 0 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A343EC;
L_08A343EC:;
    v1 = LD32(v0+20);
    v0 = D_08ADC668 - (-14744);
    v0 = v0 - 14744;
    goto L_08A34360;
L_08A343FC:;
    v1 = LD32(a1+24);
    v0 = D_08AE30BC - (12476);
    v0 = v0 + 12476;
    goto L_08A34408;
L_08A34408:;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    goto L_08A34374;
L_08A34418:;
    v1 = LD32(a1+28);
    v0 = D_08AE30CC - (12492);
    v0 = v0 + 12492;
    goto L_08A34408;
L_08A34428:;
    v1 = LD32(a1+32);
    v0 = D_08AE30DC - (12508);
    v0 = v0 + 12508;
    goto L_08A34408;
L_08A34438:;
    v0 = 0 + 0;
    goto L_08A34374;
}

/* 08A34440 */
u32 func_08A34440(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34440:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = D_08C2933C - (-27844);
    a0 = a0 - 27844;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a2 + 0;
    v0 = func_08977918(a0, a1);
    goto L_08A34470;
L_08A34470:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A344BC; }
    goto L_08A34478;
L_08A34478:;
    v0 = s0 < 0x8u;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A344BC; }
    goto L_08A34484;
L_08A34484:;
    v1 = D_08AE309C - (12444);
    v0 = s0 << 2;
    v1 = v1 + 12444;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A344A0u: goto L_08A344A0; case 0x08A344D4u: goto L_08A344D4; case 0x08A344E4u: goto L_08A344E4; case 0x08A344F4u: goto L_08A344F4; case 0x08A34504u: goto L_08A34504; case 0x08A34514u: goto L_08A34514; case 0x08A3452Cu: goto L_08A3452C; case 0x08A3453Cu: goto L_08A3453C; default: rs_break(0, 0x08a34498); }
L_08A344A0:;
    v1 = D_08ADC5E8 - (-14872);
    v0 = s1 << 2;
    v1 = v1 - 14872;
    goto L_08A344AC;
L_08A344AC:;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = s2 + 0;
    v0 = func_08A3454C(a1);
    goto L_08A344BC;
L_08A344BC:;
    sp = sp + 16;
    return v0;
L_08A344D4:;
    v1 = D_08ADC610 - (-14832);
    v0 = s1 << 2;
    v1 = v1 - 14832;
    goto L_08A344AC;
L_08A344E4:;
    v1 = D_08ADC630 - (-14800);
    v0 = s1 << 2;
    v1 = v1 - 14800;
    goto L_08A344AC;
L_08A344F4:;
    v1 = D_08ADC648 - (-14776);
    v0 = s1 << 2;
    v1 = v1 - 14776;
    goto L_08A344AC;
L_08A34504:;
    v1 = D_08ADC668 - (-14744);
    v0 = s1 << 2;
    v1 = v1 - 14744;
    goto L_08A344AC;
L_08A34514:;
    v0 = D_08AE30BC - (12476);
    v1 = s1 << 2;
    v0 = v0 + 12476;
    goto L_08A34520;
L_08A34520:;
    v1 = v1 + v0;
    v0 = LD32(v1);
    goto L_08A344BC;
L_08A3452C:;
    v0 = D_08AE30CC - (12492);
    v1 = s1 << 2;
    v0 = v0 + 12492;
    goto L_08A34520;
L_08A3453C:;
    v0 = D_08AE30DC - (12508);
    v1 = s1 << 2;
    v0 = v0 + 12508;
    goto L_08A34520;
}

/* 08A3454C */
u32 func_08A3454C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A3454C:;
    sp = sp - 32;
    s0 = a1 + 0;
    v0 = func_08A28C68();
    goto L_08A34560;
L_08A34560:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A23598(a0, a1);
    goto L_08A3456C;
L_08A3456C:;
    a0 = 0xd0cd0000u;
    a2 = sp + 0;
    a1 = v0 + 0;
    a0 = a0 | 0xc21c;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A34584;
L_08A34584:;
    a1 = 0x2e0000u;
    a0 = LD32(sp);
    a1 = a1 | 0xafcd;
    a2 = 0 + 0;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A34598;
L_08A34598:;
    sp = sp + 32;
    return v0;
}

/* 08A345A8 */
rv_t func_08A345A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08A345A8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2D3DC - (-11300);
    t1 = D_08C2D3EC - (-11284);
    t2 = D_08C2D3FC - (-11268);
    a1 = a1 & a0;
    v1 = t0 - 11300;
    a2 = t1 - 11284;
    cnd_ = a1 == 0;
    a3 = t2 - 11268;
    if (cnd_) { goto L_08A34660; }
    goto L_08A345D8;
L_08A345D8:;
    v0 = D_08AEFB88 - (-1144);
    f4 = BITSF(LD32(v0-1144));
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
    ST32(t0-11300, FBITS(f2));
    ST32(t1-11284, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-11268, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08A34660;
L_08A34660:;
    return (rv_t){ v0, v1, f0 };
}

/* 08A34668 */
rv_t func_08A34668(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34668:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08A345A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A3467C;
L_08A3467C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A34688 */
u32 func_08A34688(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34688:;
    sp = sp - 16;
    v0 = D_08B263B8 - (25528);
    s0 = a1 + 0;
    a2 = 0 + 0;
    a1 = LD32(v0+25528);
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A346A8;
L_08A346A8:;
    v1 = v0 + 0;
    a0 = v0 < 0xfau;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A346D8; }
    goto L_08A346BC;
L_08A346BC:;
    cnd_ = a0 == 0;
    a1 = v1 << 2;
    if (cnd_) { goto L_08A346D8; }
    goto L_08A346C4;
L_08A346C4:;
    v0 = D_08B25FC4 - (24516);
    v0 = v0 + 24516;
    v0 = a1 + v0;
    ST32(v0, s0);
    goto L_08A346D8;
L_08A346D8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A346E8 */
rv_t func_08A346E8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A346E8:;
    sp = sp - 64;
    v0 = D_08AE34B0 - (13488);
    v1 = D_08AE33CC - (13260);
    ST32(sp, 0);
    s7 = v0 + 13488;
    v0 = D_08B1C178 - (-16008);
    fp = D_08AE30EC - (12524);
    s6 = v0 - 16008;
    s5 = v1 + 13260;
    s4 = 0 + 0;
    v0 = s4 << 1;
    goto L_08A3473C;
L_08A3473C:;
    v0 = v0 + s4;
    v1 = v0 << 3;
    s1 = v1 + s6;
    v0 = v0 << 2;
    s0 = v0 + s7;
    s3 = 0 + 0;
    s2 = s1 + 0;
    goto L_08A34758;
L_08A34758:;
    v1 = LD32(s0);
    a0 = 0xbfbe0000u;
    a2 = sp + 0;
    v0 = v1 << 2;
    a0 = a0 | 0x705c;
    cnd_ = (s32)v1 < 0;
    v0 = v0 + s5;
    if (cnd_) { goto L_08A34794; }
    goto L_08A34774;
L_08A34774:;
    a1 = LD32(v0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3477C;
L_08A3477C:;
    v0 = LD32(sp);
    a1 = 0xe9290000u;
    a1 = a1 | 0xab96;
    a2 = 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A347EC; }
    goto L_08A34794;
L_08A34794:;
    s3 = s3 + 1;
    goto L_08A34798;
L_08A34798:;
    v0 = s3 < 0x3u;
    goto L_08A3479C;
L_08A3479C:;
    s0 = s0 + 4;
    s2 = s2 + 8;
    cnd_ = v0 != 0;
    s1 = s1 + 8;
    if (cnd_) { goto L_08A34758; }
    goto L_08A347AC;
L_08A347AC:;
    s4 = s4 + 1;
    v0 = s4 < 0xeu;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s4 << 1; goto L_08A3473C; }
    goto L_08A347BC;
L_08A347BC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A347EC:;
    v0 = func_0896CE48(a0, a1, a2, 0, 0, 0);
    goto L_08A347F4;
L_08A347F4:;
    v1 = (s32)v0 < 2;
    t0 = v0 + 0;
    a3 = 1;
    a1 = fp + 12524;
    a2 = 4;
    cnd_ = v1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A34820; }
    goto L_08A34810;
L_08A34810:;
    s3 = s3 + 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34818;
L_08A34818:;
    v0 = s3 < 0x3u;
    goto L_08A3479C;
L_08A34820:;
    v0 = D_08AE30F4 - (12532);
    a0 = s1 + 0;
    a1 = v0 + 12532;
    a2 = 4;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34838;
L_08A34838:;
    s3 = s3 + 1;
    goto L_08A34798;
}

/* 08A34840 */
rv_t func_08A34840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34840:;
    sp = sp - 16;
    v0 = D_08AE30F8 - (12536);
    s1 = v0 + 12536;
    a0 = s1 + 0;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A34860;
L_08A34860:;
    a0 = 0xa29e0000u;
    cnd_ = v0 == 0;
    a0 = a0 | 0x5e0d;
    if (cnd_) { goto L_08A348C0; }
    goto L_08A3486C;
L_08A3486C:;
    a0 = D_08AE3120 - (12576);
    goto L_08A34870;
L_08A34870:;
    a1 = 24616;
    a0 = a0 + 12576;
    v0 = func_08A34688(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A3487C;
L_08A3487C:;
    a0 = D_08AE3144 - (12612);
    a0 = a0 + 12612;
    a1 = 24616;
    s0 = D_08B1C170 - (-16016);
    s1 = s0 - 16016;
    ST32(s0-16016, v0);
    v0 = func_08A34688(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A34898;
L_08A34898:;
    ST32(s1+4, v0);
    func_0883A610(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A348A0;
L_08A348A0:;
    { rv_t r_ = func_08A346E8(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A348A8;
L_08A348A8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A348C0:;
    { rv_t r_ = func_0888B320(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A348C8;
L_08A348C8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A3486C; }
    goto L_08A348D4;
L_08A348D4:;
    v0 = func_08888FD8(a0);
    goto L_08A348DC;
L_08A348DC:;
    a3 = 0x7fff0000u;
    v1 = 2010;
    a1 = s0 + 392;
    a0 = s1 + 0;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    cnd_ = v0 == v1;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A34918; }
    goto L_08A34900;
L_08A34900:;
    a3 = 0x7fff0000u;
    a2 = 0 + 0;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s1 + 0;
    goto L_08A34918;
L_08A34918:;
    func_08897814(a0, a1, a2, a3, t0, t1);
    goto L_08A34920;
L_08A34920:;
    a0 = s1 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_08A34928;
L_08A34928:;
    a0 = D_08AE3120 - (12576);
    goto L_08A34870;
}

/* 08A34930 */
rv_t func_08A34930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34930:;
    sp = sp - 16;
    s0 = D_08AE30F8 - (12536);
    s0 = s0 + 12536;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A3494C;
L_08A3494C:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A34968; }
    goto L_08A34954;
L_08A34954:;
    goto L_08A34958;
L_08A34958:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34968:;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34970;
L_08A34970:;
    goto L_08A34958;
}

/* 08A34978 */
rv_t func_08A34978(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A34978:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A349A0; }
    goto L_08A34998;
L_08A34998:;
    cnd_ = a2 == 0;
    a3 = v1 < 0xeu;
    if (cnd_) { goto L_08A349B8; }
    goto L_08A349A0;
L_08A349A0:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A349A8;
L_08A349A8:;
    v0 = 1;
    goto L_08A349AC;
L_08A349AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A349B8:;
    v0 = D_08AE3440 - (13376);
    v0 = v0 + 13376;
    v1 = v1 << 2;
    a0 = 0x330000u;
    v1 = v1 + v0;
    a0 = a0 | 0x155f;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A349AC; }
    goto L_08A349D8;
L_08A349D8:;
    a1 = LD32(v1);
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A349E0;
L_08A349E0:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A349E8;
L_08A349E8:;
    v0 = 1;
    goto L_08A349AC;
}

/* 08A349F0 */
rv_t func_08A349F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A349F0:;
    sp = sp - 16;
    v1 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34A18; }
    goto L_08A34A10;
L_08A34A10:;
    cnd_ = a2 == 0;
    a3 = v1 < 0xeu;
    if (cnd_) { goto L_08A34A30; }
    goto L_08A34A18;
L_08A34A18:;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34A20;
L_08A34A20:;
    v0 = 1;
    goto L_08A34A24;
L_08A34A24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A34A30:;
    v0 = D_08AE3478 - (13432);
    v0 = v0 + 13432;
    v1 = v1 << 2;
    a0 = 0x330000u;
    v1 = v1 + v0;
    a0 = a0 | 0x155f;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A34A24; }
    goto L_08A34A50;
L_08A34A50:;
    a1 = LD32(v1);
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34A58;
L_08A34A58:;
    a0 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34A60;
L_08A34A60:;
    v0 = 1;
    goto L_08A34A24;
}

/* 08A34A68 */
rv_t func_08A34A68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A34A68:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34A84; }
    goto L_08A34A7C;
L_08A34A7C:;
    cnd_ = a2 == 0;
    v0 = a0 < 0xeu;
    if (cnd_) { goto L_08A34AA0; }
    goto L_08A34A84;
L_08A34A84:;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34A90;
L_08A34A90:;
    goto L_08A34A94;
L_08A34A94:;
    v0 = 1;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A34AA0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A34A94; }
    goto L_08A34AA8;
L_08A34AA8:;
    a1 = D_08C2D450 - (-11184);
    v0 = a1 - 11184;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A34AC0; }
    goto L_08A34ABC;
L_08A34ABC:;
    a3 = LD32(v0);
    goto L_08A34AC0;
L_08A34AC0:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v1 = D_08AE34B0 - (13488);
    v1 = v1 + 13488;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0+8);
    v1 = a1 - 11184;
    v0 = (u32)-1;
    f2 = BITSF(LD32(a1-11184));
    f3 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+4));
    cnd_ = a2 == v0;
    f0 = BITSF(LD32(v1+8));
    if (cnd_) { goto L_08A34BB4; }
    goto L_08A34AF8;
L_08A34AF8:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v0 = v0 + a2;
    v1 = LD_U8(v0+360);
    cnd_ = v1 == 0;
    v0 = 0x5ac30000u;
    if (cnd_) { goto L_08A34B6C; }
    goto L_08A34B10;
L_08A34B10:;
    a1 = a0 << 4;
    v1 = a1 - a0;
    v0 = D_08C2D48C - (-11124);
    v0 = v0 - 11124;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A34B38; }
    goto L_08A34B34;
L_08A34B34:;
    v1 = LD32(v0);
    goto L_08A34B38;
L_08A34B38:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08A34B68; }
    goto L_08A34B44;
L_08A34B44:;
    v1 = a1 - a0;
    v0 = D_08C2D464 - (-11164);
    v1 = v1 << 2;
    v0 = v0 - 11164;
    v1 = v1 + v0;
    f3 = BITSF(LD32(v1+52));
    f2 = BITSF(LD32(v1+40));
    f1 = BITSF(LD32(v1+44));
    f0 = BITSF(LD32(v1+48));
    goto L_08A34B68;
L_08A34B68:;
    v0 = 0x5ac30000u;
    goto L_08A34B6C;
L_08A34B6C:;
    a0 = D_08AE3198 - (12696);
    v0 = v0 | 0xa2c4;
    a0 = a0 + 12696;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+8, a3);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    ST8(sp+4, 0);
    ST32(sp+28, 0);
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34BAC;
L_08A34BAC:;
    goto L_08A34A94;
L_08A34BB4:;
    v1 = D_08C2D43C - (-11204);
    v0 = v1 - 11204;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A34BCC; }
    goto L_08A34BC8;
L_08A34BC8:;
    a0 = LD32(v0);
    goto L_08A34BCC;
L_08A34BCC:;
    v0 = v1 - 11204;
    f2 = BITSF(LD32(v1-11204));
    f3 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    a3 = a0 + 0;
    goto L_08A34B68;
}

/* 08A34BE8 */
rv_t func_08A34BE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A34BE8:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34C04; }
    goto L_08A34BFC;
L_08A34BFC:;
    cnd_ = a2 == 0;
    v0 = a0 < 0xeu;
    if (cnd_) { goto L_08A34C20; }
    goto L_08A34C04;
L_08A34C04:;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34C10;
L_08A34C10:;
    goto L_08A34C14;
L_08A34C14:;
    v0 = 1;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A34C20:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A34C14; }
    goto L_08A34C28;
L_08A34C28:;
    a1 = D_08C2D450 - (-11184);
    v0 = a1 - 11184;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A34C40; }
    goto L_08A34C3C;
L_08A34C3C:;
    a3 = LD32(v0);
    goto L_08A34C40;
L_08A34C40:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v1 = D_08AE34B0 - (13488);
    v1 = v1 + 13488;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0+4);
    v1 = a1 - 11184;
    v0 = (u32)-1;
    f2 = BITSF(LD32(a1-11184));
    f3 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+4));
    cnd_ = a2 == v0;
    f0 = BITSF(LD32(v1+8));
    if (cnd_) { goto L_08A34D34; }
    goto L_08A34C78;
L_08A34C78:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v0 = v0 + a2;
    v1 = LD_U8(v0+360);
    cnd_ = v1 == 0;
    v0 = 0x5ac30000u;
    if (cnd_) { goto L_08A34CEC; }
    goto L_08A34C90;
L_08A34C90:;
    a1 = a0 << 4;
    v1 = a1 - a0;
    v0 = D_08C2D478 - (-11144);
    v0 = v0 - 11144;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A34CB8; }
    goto L_08A34CB4;
L_08A34CB4:;
    v1 = LD32(v0);
    goto L_08A34CB8;
L_08A34CB8:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08A34CE8; }
    goto L_08A34CC4;
L_08A34CC4:;
    v1 = a1 - a0;
    v0 = D_08C2D464 - (-11164);
    v1 = v1 << 2;
    v0 = v0 - 11164;
    v1 = v1 + v0;
    f3 = BITSF(LD32(v1+32));
    f2 = BITSF(LD32(v1+20));
    f1 = BITSF(LD32(v1+24));
    f0 = BITSF(LD32(v1+28));
    goto L_08A34CE8;
L_08A34CE8:;
    v0 = 0x5ac30000u;
    goto L_08A34CEC;
L_08A34CEC:;
    a0 = D_08AE3198 - (12696);
    v0 = v0 | 0xa2c4;
    a0 = a0 + 12696;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+8, a3);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    ST8(sp+4, 0);
    ST32(sp+28, 0);
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34D2C;
L_08A34D2C:;
    goto L_08A34C14;
L_08A34D34:;
    v1 = D_08C2D43C - (-11204);
    v0 = v1 - 11204;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A34D4C; }
    goto L_08A34D48;
L_08A34D48:;
    a0 = LD32(v0);
    goto L_08A34D4C;
L_08A34D4C:;
    v0 = v1 - 11204;
    f2 = BITSF(LD32(v1-11204));
    f3 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    a3 = a0 + 0;
    goto L_08A34CE8;
}

/* 08A34D68 */
rv_t func_08A34D68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A34D68:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_08A34D84; }
    goto L_08A34D7C;
L_08A34D7C:;
    cnd_ = a2 == 0;
    v0 = a0 < 0xeu;
    if (cnd_) { goto L_08A34DA0; }
    goto L_08A34D84;
L_08A34D84:;
    a0 = D_08AE3168 - (12648);
    a0 = a0 + 12648;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34D90;
L_08A34D90:;
    goto L_08A34D94;
L_08A34D94:;
    v0 = 1;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A34DA0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A34D94; }
    goto L_08A34DA8;
L_08A34DA8:;
    a1 = D_08C2D450 - (-11184);
    v0 = a1 - 11184;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A34DC0; }
    goto L_08A34DBC;
L_08A34DBC:;
    a3 = LD32(v0);
    goto L_08A34DC0;
L_08A34DC0:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v1 = D_08AE34B0 - (13488);
    v1 = v1 + 13488;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    v1 = a1 - 11184;
    v0 = (u32)-1;
    f2 = BITSF(LD32(a1-11184));
    f3 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+4));
    cnd_ = a2 == v0;
    f0 = BITSF(LD32(v1+8));
    if (cnd_) { goto L_08A34EB0; }
    goto L_08A34DF8;
L_08A34DF8:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    v0 = v0 + a2;
    v1 = LD_U8(v0+360);
    cnd_ = v1 == 0;
    v0 = 0x5ac30000u;
    if (cnd_) { goto L_08A34E68; }
    goto L_08A34E10;
L_08A34E10:;
    a1 = a0 << 4;
    v0 = a1 - a0;
    a2 = D_08C2D464 - (-11164);
    v1 = a2 - 11164;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A34E38; }
    goto L_08A34E34;
L_08A34E34:;
    v1 = LD32(v0);
    goto L_08A34E38;
L_08A34E38:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a3 = v1 + 0;
    if (cnd_) { goto L_08A34E64; }
    goto L_08A34E44;
L_08A34E44:;
    v0 = a1 - a0;
    v1 = a2 - 11164;
    v0 = v0 << 2;
    v0 = v0 + v1;
    f3 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    goto L_08A34E64;
L_08A34E64:;
    v0 = 0x5ac30000u;
    goto L_08A34E68;
L_08A34E68:;
    a0 = D_08AE3198 - (12696);
    v0 = v0 | 0xa2c4;
    a0 = a0 + 12696;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+8, a3);
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    ST8(sp+4, 0);
    ST32(sp+28, 0);
    ST32(sp+32, 0);
    ST32(sp+36, 0);
    ST32(sp+40, 0);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A34EA8;
L_08A34EA8:;
    goto L_08A34D94;
L_08A34EB0:;
    v1 = D_08C2D43C - (-11204);
    v0 = v1 - 11204;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A34EC8; }
    goto L_08A34EC4;
L_08A34EC4:;
    a0 = LD32(v0);
    goto L_08A34EC8;
L_08A34EC8:;
    v0 = v1 - 11204;
    f2 = BITSF(LD32(v1-11204));
    f3 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    a3 = a0 + 0;
    goto L_08A34E64;
}
