#include "game.h"

/* 0881A13C */
float func_0881A13C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr122 = v[122], vr123 = v[123], vr124 = v[124];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0881A13C:;
    v0 = LD32(a0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    sp = sp - 80;
    if (cnd_) { goto L_0881A2F4; }
    goto L_0881A14C;
L_0881A14C:;
    a2 = LD32(a1+4);
    t0 = LD32(a0+92);
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    a3 = LD32(a1+92);
    if (cnd_) { goto L_0881A2FC; }
    goto L_0881A160;
L_0881A160:;
    a2 = 0 + 0;
    goto L_0881A164;
L_0881A164:;
    v1 = a2 << 2;
    v0 = v1 + a0;
    f1 = BITSF(LD32(v0+12));
    v1 = v1 + a1;
    f0 = BITSF(LD32(v1+12));
    f1 = f1 * f12;
    a2 = a2 + 1;
    v0 = a2 < 0x6u;
    f0 = f0 + f1;
    cnd_ = v0 != 0;
    ST32(v1+12, FBITS(f0));
    if (cnd_) { goto L_0881A164; }
    goto L_0881A190;
L_0881A190:;
    f3 = BITSF(LD32(t0));
    f4 = BITSF(LD32(t0+4));
    f5 = BITSF(LD32(t0+8));
    f3 = f3 * f12;
    f4 = f4 * f12;
    f5 = f5 * f12;
    a1 = a3 + 12;
    ST32(sp+16, FBITS(f3));
    v0 = D_08B45ACC - (23244);
    v1 = FBITS(f12);
    ST32(sp+20, FBITS(f4));
    v0 = v0 + 23244;
    ST32(sp+24, FBITS(f5));
    f0 = BITSF(LD32(a3));
    f1 = BITSF(LD32(a3+4));
    f2 = BITSF(LD32(a3+8));
    f0 = f0 + f3;
    f1 = f1 + f4;
    f2 = f2 + f5;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(a3+8, FBITS(f2));
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr115=BITSF(LD32(v0+(12)));}
    {vr116=BITSF(LD32(t0+(12)));}
    {vr117=BITSF(LD32(t0+(16)));}
    {vr118=BITSF(LD32(t0+(20)));}
    {vr119=BITSF(LD32(t0+(24)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[120]=sum;}
    {vr124=BITSF(v1);}
    {float s0=vr0;vr122=(float)1;}
    {float s0=v[120];float d0=(float)((s0>0)-(s0<0));vr123=d0;}
    {float s0=vr123;float t0=vr123;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    {float s0=vr122;if(((vfpu_cc>>0)&1)==1)vr123=s0;}
    {float s0=vr122;float t0=vr124;float d0=s0-t0;v[125]=d0;}
    {float s0=vr124;float t0=vr123;float d0=s0*t0;vr124=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[125];vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr116=s0*t0;vr117=s1*t0;vr118=s2*t0;vr119=s3*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr116=sum;}
    {float s0=vr116;float d0=1.0f/sqrtf(s0);vr116=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;vr115=s3*t0;}
    {u32 a_=sp+(48);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=3-off_;i++)ST32(a_+4*i,FBITS(q_[i]));}
    {u32 a_=sp+(60);int off_=(a_>>2)&3;float q_[4]={vr112,vr113,vr114,vr115};for(int i=0;i<=off_;i++)ST32(a_-4*i,FBITS(q_[3-i]));}
    a0 = LD32(a1+12);
    v0 = LD32(a3+12);
    v1 = LD32(a1+4);
    {v[8]=BITSF(v0);}
    v0 = LD32(a1+8);
    {v[9]=BITSF(v1);}
    v1 = LD32(sp+52);
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+48);
    {v[11]=BITSF(a0);}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+56);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+60);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=vr0;float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v0=FBITS(v[4]);}
    {v1=FBITS(v[5]);}
    ST32(sp+64, v0);
    {v0=FBITS(v[7]);}
    ST32(sp+68, v1);
    {v1=FBITS(v[6]);}
    a0 = LD32(sp+64);
    ST32(sp+76, v0);
    v0 = LD32(sp+68);
    ST32(sp+72, v1);
    ST32(sp+32, a0);
    ST32(sp+36, v0);
    v1 = LD32(sp+72);
    v0 = LD32(sp+76);
    ST32(sp+40, v1);
    ST32(sp+44, v0);
    ST32(a3+12, a0);
    v0 = LD32(sp+36);
    ST32(a3+16, v0);
    v1 = LD32(sp+40);
    ST32(a3+20, v1);
    v0 = LD32(sp+44);
    ST32(a3+24, v0);
    goto L_0881A2F4;
L_0881A2F4:;
    sp = sp + 80;
    { v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[122]=vr122;v[123]=vr123;v[124]=vr124;return f0; }
L_0881A2FC:;
    v1 = LD32(a0+12);
    v0 = a2 | 0x1;
    ST32(a1+4, v0);
    ST32(a1+12, v1);
    v0 = LD32(a0+16);
    ST32(a1+16, v0);
    v1 = LD32(a0+20);
    ST32(a1+20, v1);
    v0 = LD32(a0+24);
    ST32(a1+24, v0);
    v1 = LD32(a0+28);
    ST32(a1+28, v1);
    v0 = LD32(a0+32);
    ST32(a1+32, v0);
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(t0+12);
    ST32(a3+12, v0);
    v1 = LD32(t0+16);
    ST32(a3+16, v1);
    v0 = LD32(t0+20);
    ST32(a3+20, v0);
    v1 = LD32(t0+24);
    ST32(a3+24, v1);
    goto L_0881A2F4;
    v[0]=vr0;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[122]=vr122;v[123]=vr123;v[124]=vr124;
}

/* 0881A370 */
void func_0881A370(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881A370:;
    v0 = LD32(a0+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    sp = sp - 16;
    if (cnd_) { goto L_0881A508; }
    goto L_0881A380;
L_0881A380:;
    a2 = LD32(a1+4);
    t0 = LD32(a0+92);
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    a3 = LD32(a1+92);
    if (cnd_) { goto L_0881A510; }
    goto L_0881A394;
L_0881A394:;
    v0 = D_08AEB604 - (-18940);
    f0 = BITSF(LD32(v0-18940));
    a2 = 0 + 0;
    f6 = f0 - f12;
    goto L_0881A3A4;
L_0881A3A4:;
    v0 = a2 << 2;
    v1 = v0 + a0;
    v0 = v0 + a1;
    f1 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v0+12));
    a2 = a2 + 1;
    f1 = f1 * f12;
    f0 = f0 * f6;
    v1 = a2 < 0x6u;
    f0 = f0 + f1;
    cnd_ = v1 != 0;
    ST32(v0+12, FBITS(f0));
    if (cnd_) { goto L_0881A3A4; }
    goto L_0881A3D4;
L_0881A3D4:;
    f2 = BITSF(LD32(a3));
    f4 = BITSF(LD32(t0));
    f3 = BITSF(LD32(a3+4));
    f5 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(t0+8));
    f2 = f2 * f6;
    f0 = f0 * f6;
    f4 = f4 * f12;
    f3 = f3 * f6;
    f5 = f5 * f12;
    f1 = f1 * f12;
    f2 = f2 + f4;
    v0 = LD32(a3+12);
    f3 = f3 + f5;
    f0 = f0 + f1;
    ST32(a3, FBITS(f2));
    a0 = a3 + 12;
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f3));
    ST32(sp, v0);
    v0 = D_08AEB608 - (-18936);
    v1 = LD32(a0+4);
    f0 = BITSF(LD32(v0-18936));
    ST32(sp+4, v1);
    v0 = LD32(a0+8);
    ST32(sp+8, v0);
    v0 = FBITS(f12);
    v1 = LD32(a0+12);
    ST32(sp+12, v1);
    v1 = FBITS(f0);
    {v[112]=BITSF(LD32(sp+(0)));}
    {v[113]=BITSF(LD32(sp+(4)));}
    {v[114]=BITSF(LD32(sp+(8)));}
    {v[115]=BITSF(LD32(sp+(12)));}
    {v[116]=BITSF(LD32(t0+(12)));}
    {v[117]=BITSF(LD32(t0+(16)));}
    {v[118]=BITSF(LD32(t0+(20)));}
    {v[119]=BITSF(LD32(t0+(24)));}
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
    if (cnd_) { goto L_0881A4BC; }
    goto L_0881A49C;
L_0881A49C:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_0881A4BC;
L_0881A4BC:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881A4D0; }
    goto L_0881A4C8;
L_0881A4C8:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_0881A4D0;
L_0881A4D0:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881A4F8; }
    goto L_0881A4EC;
L_0881A4EC:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_0881A4F8;
L_0881A4F8:;
    {ST32(a3+(12),FBITS(v[120]));}
    {ST32(a3+(16),FBITS(v[121]));}
    {ST32(a3+(20),FBITS(v[122]));}
    {ST32(a3+(24),FBITS(v[123]));}
    goto L_0881A508;
L_0881A508:;
    sp = sp + 16;
    return;
L_0881A510:;
    v1 = LD32(a0+12);
    v0 = a2 | 0x1;
    ST32(a1+4, v0);
    ST32(a1+12, v1);
    v0 = LD32(a0+16);
    ST32(a1+16, v0);
    v1 = LD32(a0+20);
    ST32(a1+20, v1);
    v0 = LD32(a0+24);
    ST32(a1+24, v0);
    v1 = LD32(a0+28);
    ST32(a1+28, v1);
    v0 = LD32(a0+32);
    ST32(a1+32, v0);
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    ST32(a3, FBITS(f0));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    v0 = LD32(t0+12);
    ST32(a3+12, v0);
    v1 = LD32(t0+16);
    ST32(a3+16, v1);
    v0 = LD32(t0+20);
    ST32(a3+20, v0);
    v1 = LD32(t0+24);
    ST32(a3+24, v1);
    goto L_0881A508;
}

/* 0881A584 */
rv_t func_0881A584(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_0881A584:;
    t3 = a0 + 0;
    t0 = LD32(a3+32);
    v0 = a1 << 3;
    a0 = LD32(a0+92);
    v0 = v0 - a1;
    v0 = v0 << 2;
    v1 = a2 < a1;
    a0 = a0 + v0;
    cnd_ = v1 != 0;
    t0 = t0 + v0;
    if (cnd_) { goto L_0881A624; }
    goto L_0881A5AC;
L_0881A5AC:;
    t4 = 1;
    goto L_0881A5B0;
L_0881A5B0:;
    v0 = a1 >> 5;
    v0 = v0 << 2;
    a3 = v0 + t3;
    v1 = LD32(a3+4);
    v0 = a1 & 0x1f;
    v0 = t4 << (v0 & 31);
    a1 = a1 + 1;
    t1 = v1 | v0;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    t2 = a2 < a1;
    if (cnd_) { goto L_0881A618; }
    goto L_0881A5DC;
L_0881A5DC:;
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    ST32(a0, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    v0 = LD32(t0+12);
    ST32(a3+4, t1);
    ST32(a0+12, v0);
    v1 = LD32(t0+16);
    ST32(a0+16, v1);
    v0 = LD32(t0+20);
    ST32(a0+20, v0);
    v1 = LD32(t0+24);
    ST32(a0+24, v1);
    goto L_0881A618;
L_0881A618:;
    t0 = t0 + 28;
    cnd_ = t2 == 0;
    a0 = a0 + 28;
    if (cnd_) { goto L_0881A5B0; }
    goto L_0881A624;
L_0881A624:;
    return (rv_t){ v0, v1, f0 };
}

/* 0881A62C */
rv_t func_0881A62C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_0881A62C:;
    v0 = LD32(a0+4);
    a2 = a0 + 0;
    t0 = v0 | 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = a1 + 104;
    if (cnd_) { goto L_0881A6B8; }
    goto L_0881A644;
L_0881A644:;
    v1 = LD32(a1+104);
    a0 = LD32(a1+32);
    a1 = LD32(a2+92);
    ST32(a2+12, v1);
    v0 = LD32(a3+4);
    ST32(a2+4, t0);
    ST32(a2+16, v0);
    v1 = LD32(a3+8);
    ST32(a2+20, v1);
    v0 = LD32(a3+12);
    ST32(a2+24, v0);
    v1 = LD32(a3+16);
    ST32(a2+28, v1);
    v0 = LD32(a3+20);
    ST32(a2+32, v0);
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(a1, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    v0 = LD32(a0+12);
    ST32(a1+12, v0);
    v1 = LD32(a0+16);
    ST32(a1+16, v1);
    v0 = LD32(a0+20);
    ST32(a1+20, v0);
    v1 = LD32(a0+24);
    ST32(a1+24, v1);
    goto L_0881A6B8;
L_0881A6B8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0881A6C0 */
void func_0881A6C0(u32 a0)
{
L_0881A6C0:;
    ST32(a0+20, 0);
    ST32(a0+4, 0);
    ST32(a0, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    return;
}

/* 0881A6DC */
u64 func_0881A6DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881A6DC:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0881A724; }
    goto L_0881A6F8;
L_0881A6F8:;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0881A76C; }
    goto L_0881A704;
L_0881A704:;
    v0 = LD32(s0+44);
    goto L_0881A708;
L_0881A708:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0881A75C; }
    goto L_0881A714;
L_0881A714:;
    a0 = s0 + 4;
    func_0881ABF8(a0);
    goto L_0881A71C;
L_0881A71C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A724;
L_0881A724:;
    v0 = LD32(s1+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881A74C; }
    goto L_0881A730;
L_0881A730:;
    ST32(s1+16, 0);
    goto L_0881A734;
L_0881A734:;
    ST32(s1+12, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881A74C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A754;
L_0881A754:;
    ST32(s1+16, 0);
    goto L_0881A734;
L_0881A75C:;
    func_08AA3648(a0, a1);
    goto L_0881A764;
L_0881A764:;
    goto L_0881A714;
L_0881A76C:;
    func_08AA3648(a0, a1);
    goto L_0881A774;
L_0881A774:;
    v0 = LD32(s0+44);
    goto L_0881A708;
}

/* 0881A77C */
void func_0881A77C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881A77C:;
    sp = sp - 16;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0881A7C4; }
    goto L_0881A798;
L_0881A798:;
    v0 = LD32(s1+40);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0881A814; }
    goto L_0881A7A4;
L_0881A7A4:;
    v0 = LD32(s1+44);
    goto L_0881A7A8;
L_0881A7A8:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0881A804; }
    goto L_0881A7B4;
L_0881A7B4:;
    a0 = s1 + 4;
    func_0881ABF8(a0);
    goto L_0881A7BC;
L_0881A7BC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A7C4;
L_0881A7C4:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881A7F4; }
    goto L_0881A7D0;
L_0881A7D0:;
    ST32(s0, 0);
    goto L_0881A7D4;
L_0881A7D4:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
L_0881A7F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A7FC;
L_0881A7FC:;
    ST32(s0, 0);
    goto L_0881A7D4;
L_0881A804:;
    func_08AA3648(a0, a1);
    goto L_0881A80C;
L_0881A80C:;
    goto L_0881A7B4;
L_0881A814:;
    func_08AA3648(a0, a1);
    goto L_0881A81C;
L_0881A81C:;
    v0 = LD32(s1+44);
    goto L_0881A7A8;
}

/* 0881A824 */
u32 func_0881A824(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881A824:;
    sp = sp - 32;
    s4 = a0 + 0;
    a0 = a1 + 0;
    s6 = a2 + 0;
    s5 = a1 + 0;
    s1 = 0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A860;
L_0881A860:;
    s3 = v0 + 0;
    v0 = LD_U8(s4+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881A8DC; }
    goto L_0881A870;
L_0881A870:;
    v0 = LD32(s4);
    cnd_ = v0 == 0;
    s2 = s4 + 0;
    if (cnd_) { goto L_0881A8A8; }
    goto L_0881A87C;
L_0881A87C:;
    v1 = v0 + 0;
    goto L_0881A880;
L_0881A880:;
    a0 = v1 + 44;
    s2 = v1 + 40;
    v1 = LD32(v1);
    s1 = 0 + 0;
    v0 = s3 < v1;
    cnd_ = v1 == s3;
    if (v0 == 0) s2 = a0;
    if (cnd_) { goto L_0881A8DC; }
    goto L_0881A89C;
L_0881A89C:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0881A880; }
    goto L_0881A8A8;
L_0881A8A8:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881A8B0;
L_0881A8B0:;
    s1 = v0 + 4;
    s0 = v0 + 0;
    a0 = s1 + 0;
    func_0881ABBC(a0);
    goto L_0881A8C0;
L_0881A8C0:;
    ST32(s0, s3);
    v0 = LD32(s4+4);
    ST32(s0+40, 0);
    v0 = v0 + 1;
    ST32(s0+44, 0);
    ST32(s4+4, v0);
    ST32(s2, s0);
    goto L_0881A8DC;
L_0881A8DC:;
    cnd_ = s1 == 0;
    ST32(s6, s1);
    if (cnd_) { goto L_0881A91C; }
    goto L_0881A8E4;
L_0881A8E4:;
    a0 = s1 + 0;
    a1 = s5 + 0;
    func_0881AC54(a0, a1, 0, 0, 0);
    goto L_0881A8F0;
L_0881A8F0:;
    v0 = 1;
    goto L_0881A8F4;
L_0881A8F4:;
    sp = sp + 32;
    return v0;
L_0881A91C:;
    v1 = LD32(s4);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(s4+20); goto L_0881A958; }
    goto L_0881A928;
L_0881A928:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0881A930;
L_0881A930:;
    a0 = v0 + 44;
    a1 = v0 + 40;
    a2 = v0 + 4;
    v0 = s3 < v1;
    cnd_ = v1 == s3;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_0881A960; }
    goto L_0881A948;
L_0881A948:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0881A930; }
    goto L_0881A954;
L_0881A954:;
    a0 = LD32(s4+20);
    goto L_0881A958;
L_0881A958:;
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0881A96C; }
    goto L_0881A960;
L_0881A960:;
    ST32(s6, a2);
    v0 = 0 + 0;
    goto L_0881A8F4;
L_0881A96C:;
    a2 = 1;
    a1 = s3 + 0;
    { u64 r_ = func_08AA36C8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A978;
L_0881A978:;
    a2 = v0 + 0;
    goto L_0881A960;
}

/* 0881A980 */
u64 func_0881A980(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881A980:;
    sp = sp - 16;
    a2 = 1;
    { u64 r_ = func_08AA36C8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881A990;
L_0881A990:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0881A99C */
u32 func_0881A99C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881A99C:;
    sp = sp - 16;
    v1 = 0 + 0;
    s0 = a3 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0881A9C8; }
    goto L_0881A9B4;
L_0881A9B4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0881A9C8:;
    { rv_t r_ = func_0881AAA8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881A9D0;
L_0881A9D0:;
    a0 = D_08B22E48 - (11848);
    a1 = a0 + 11848;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881A9B4; }
    goto L_0881A9E0;
L_0881A9E0:;
    f1 = BITSF(LD32(a0+11848));
    v1 = 1;
    ST32(s0, FBITS(f1));
    f0 = BITSF(LD32(a1+4));
    ST32(s0+4, FBITS(f0));
    goto L_0881A9B4;
}

/* 0881A9F8 */
rv_t func_0881A9F8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881A9F8:;
    sp = sp - 16;
    s0 = a3 + 0;
    { rv_t r_ = func_0881AAA8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881AA0C;
L_0881AA0C:;
    v1 = D_08B22E48 - (11848);
    a0 = v1 + 11848;
    cnd_ = v0 == 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_0881AA30; }
    goto L_0881AA1C;
L_0881AA1C:;
    v1 = LD32(a0+12);
    v0 = LD32(a0+8);
    v1 = ~(0 | v1);
    v0 = s0 | v0;
    v1 = v0 & v1;
    goto L_0881AA30;
L_0881AA30:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881AA44 */
rv_t func_0881AA44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881AA44:;
    sp = sp - 16;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0881AA94; }
    goto L_0881AA5C;
L_0881AA5C:;
    a1 = LD32(a1);
    { u64 r_ = func_0881A980(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881AA64;
L_0881AA64:;
    s1 = v0 + 20;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0881AA94; }
    goto L_0881AA70;
L_0881AA70:;
    a1 = LD_U8(s0+6);
    func_0881B1AC(a0, a1);
    goto L_0881AA78;
L_0881AA78:;
    s0 = (u32)(s32)LD_S16(s0+4);
    v0 = D_08AEB60C - (-18932);
    f0 = BITSF(s0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-18932));
    f1 = f1 * f0;
    ST32(s1+12, FBITS(f1));
    goto L_0881AA94;
L_0881AA94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881AAA8 */
rv_t func_0881AAA8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881AAA8:;
    sp = sp - 32;
    s4 = D_08B22E40 - (11840);
    v1 = D_08B285AC - (-31316);
    s5 = D_08B22E58 - (11864);
    s3 = D_08B22E44 - (11844);
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = LD32(s4+11840);
    cnd_ = a1 == v0;
    s2 = LD32(v1-31316);
    if (cnd_) { goto L_0881AB58; }
    goto L_0881AAEC;
L_0881AAEC:;
    { u64 r_ = func_0881A980(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881AAF4;
L_0881AAF4:;
    a2 = D_08B22E48 - (11848);
    v1 = D_08B22E5C - (11868);
    a2 = a2 + 11848;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881AB50; }
    goto L_0881AB0C;
L_0881AB0C:;
    { rv_t r_ = func_0881ACF8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881AB14;
L_0881AB14:;
    v1 = D_08B22E5C - (11868);
    ST8(v1+11868, v0);
    goto L_0881AB1C;
L_0881AB1C:;
    ST32(s4+11840, s0);
    ST32(s3+11844, s1);
    ST32(s5+11864, s2);
    v0 = LD_U8(v1+11868);
    goto L_0881AB2C;
L_0881AB2C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0881AB50:;
    ST8(v1+11868, 0);
    goto L_0881AB1C;
L_0881AB58:;
    v0 = LD32(s3+11844);
    cnd_ = v0 != a2;
    v0 = LD32(s5+11864);
    if (cnd_) { goto L_0881AAEC; }
    goto L_0881AB64;
L_0881AB64:;
    cnd_ = s2 != v0;
    v0 = D_08B22E5C - (11868);
    if (cnd_) { goto L_0881AAEC; }
    goto L_0881AB6C;
L_0881AB6C:;
    v0 = LD_U8(v0+11868);
    goto L_0881AB2C;
}

/* 0881AB74 */
void func_0881AB74(void)
{
L_0881AB74:;
    return;
}

/* 0881AB7C */
void func_0881AB7C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881AB7C:;
    a0 = D_08B22E60 - (11872);
    sp = sp - 16;
    a0 = a0 + 11872;
    func_0881A77C(a0, t1, t2, t3);
    goto L_0881AB90;
L_0881AB90:;
    sp = sp + 16;
    return;
}

/* 0881AB9C */
void func_0881AB9C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881AB9C:;
    a0 = D_08B22E60 - (11872);
    sp = sp - 16;
    a0 = a0 + 11872;
    func_0881A77C(a0, t1, t2, t3);
    goto L_0881ABB0;
L_0881ABB0:;
    sp = sp + 16;
    return;
}

/* 0881ABBC */
void func_0881ABBC(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881ABBC:;
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0, 0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    a0 = a0 + 20;
    func_0881B170(a0);
    goto L_0881ABE0;
L_0881ABE0:;
    ST32(s0+16, 0);
    ST32(s0+12, 0);
    sp = sp + 16;
    return;
}

/* 0881ABF8 */
void func_0881ABF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881ABF8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 21;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881AC10;
L_0881AC10:;
    a0 = s0 + 16;
    func_08AA3554(a0, 0, 0, 0);
    goto L_0881AC18;
L_0881AC18:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881AC20;
L_0881AC20:;
    v1 = LD32(s0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881AC44; }
    goto L_0881AC2C;
L_0881AC2C:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return;
L_0881AC44:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881AC4C;
L_0881AC4C:;
    ST32(s0, 0);
    goto L_0881AC2C;
}

/* 0881AC54 */
void func_0881AC54(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881AC54:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0881AC88; }
    goto L_0881AC74;
L_0881AC74:;
    cnd_ = a1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881ACCC; }
    goto L_0881AC7C;
L_0881AC7C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881AC84;
L_0881AC84:;
    ST32(s0, 0);
    goto L_0881AC88;
L_0881AC88:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0881ACF0; }
    goto L_0881AC98;
L_0881AC98:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881ACA0;
L_0881ACA0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881ACB4;
L_0881ACB4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0881ACE0; }
    goto L_0881ACC4;
L_0881ACC4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0881ACCC;
L_0881ACCC:;
    goto L_0881ACD0;
L_0881ACD0:;
    sp = sp + 16;
    return;
L_0881ACE0:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881ACE8;
L_0881ACE8:;
    goto L_0881ACD0;
L_0881ACF0:;
    ST32(s0, 0);
    goto L_0881ACCC;
}

/* 0881ACF8 */
rv_t func_0881ACF8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881ACF8:;
    sp = sp - 64;
    v0 = a0 + 20;
    s3 = a1 < 0x1u;
    s2 = a2 + 0;
    s0 = a1 + 0;
    if (a1 == 0) s0 = v0;
    v1 = LD32(s0+8);
    v0 = LD32(a0+12);
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881AF54; }
    goto L_0881AD3C;
L_0881AD3C:;
    f2 = BITSF(LD32(s0+12));
    f0 = BITSF(0);
    v0 = LD32(a0+16);
    v1 = v1 << 4;
    fcc = FCMP(f2, f0, 2);
    s1 = v0 + v1;
    f0 = BITSF(LD32(s1+8));
    cnd_ = fcc;
    ST32(sp+16, FBITS(f0));
    if (cnd_) { goto L_0881AD8C; }
    goto L_0881AD60;
L_0881AD60:;
    v0 = D_08B285AC - (-31316);
    a0 = LD32(v0-31316);
    v1 = LD32(s0+4);
    cnd_ = v1 == a0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_0881AD8C; }
    goto L_0881AD74;
L_0881AD74:;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0));
    ST32(s0+4, a0);
    f0 = f0 * f2;
    f1 = f1 + f0;
    ST32(s0, FBITS(f1));
    goto L_0881AD8C;
L_0881AD8C:;
    v0 = LD32(s1+12);
    f3 = BITSF(LD32(s0));
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    ST32(sp, FBITS(f3));
    if (cnd_) { goto L_0881B0D8; }
    goto L_0881ADA0;
L_0881ADA0:;
    f0 = BITSF(LD32(sp+16));
    f2 = f0 + f0;
    goto L_0881ADA8;
L_0881ADA8:;
    f0 = BITSF(LD32(s0));
    f4 = f2;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0881B050; }
    goto L_0881ADC0;
L_0881ADC0:;
    v0 = LD32(s1+12);
    v0 = v0 & 0x9;
    cnd_ = v0 == 0;
    f3 = f2;
    if (cnd_) { goto L_0881B048; }
    goto L_0881ADD0;
L_0881ADD0:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    f3 = f0;
    if (cnd_) { goto L_0881B048; }
    goto L_0881ADE4;
L_0881ADE4:;
    f3 = BITSF(LD32(sp));
    f5 = f0;
    s4 = D_08AEB610 - (-18928);
    f1 = f3 / f2;
    f2 = BITSF(F2I(f1, 1));
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 * f4;
    f3 = f3 - f0;
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    ST32(sp, FBITS(f3));
    if (cnd_) { goto L_0881AE28; }
    goto L_0881AE14;
L_0881AE14:;
    fcc = FCMP(f4, f3, 12);
    cnd_ = fcc;
    f5 = f4;
    if (cnd_) { goto L_0881AE28; }
    goto L_0881AE24;
L_0881AE24:;
    f5 = f3;
    goto L_0881AE28;
L_0881AE28:;
    f3 = f5;
    goto L_0881AE2C;
L_0881AE2C:;
    ST32(sp, FBITS(f3));
    goto L_0881AE30;
L_0881AE30:;
    cnd_ = s3 == 0;
    if (cnd_) { a2 = LD32(s1+12); goto L_0881AE44; }
    goto L_0881AE38;
L_0881AE38:;
    ST32(s0, FBITS(f3));
    f3 = BITSF(LD32(sp));
    a2 = LD32(s1+12);
    goto L_0881AE44;
L_0881AE44:;
    v0 = a2 & 0x8;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_0881AE60; }
    goto L_0881AE50;
L_0881AE50:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+8)); goto L_0881B018; }
    goto L_0881AE60;
L_0881AE60:;
    a3 = LD32(s1);
    a1 = a3 - 1;
    cnd_ = a1 == 0;
    f1 = f3 / f0;
    if (cnd_) { goto L_0881B00C; }
    goto L_0881AE70;
L_0881AE70:;
    a0 = LD32(s1+4);
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v0 = v0 + 8;
    goto L_0881AE88;
L_0881AE88:;
    f0 = BITSF(LD32(v0));
    v1 = a1 << 2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    v0 = v0 - 20;
    if (cnd_) { goto L_0881AEAC; }
    goto L_0881AEA0;
L_0881AEA0:;
    a1 = a1 - 1;
    cnd_ = a1 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881AE88; }
    goto L_0881AEAC;
L_0881AEAC:;
    v0 = v1 + a1;
    v0 = v0 << 2;
    v1 = a2 & 0x4;
    cnd_ = v1 == 0;
    s1 = a0 + v0;
    if (cnd_) { goto L_0881AF78; }
    goto L_0881AEC0;
L_0881AEC0:;
    a2 = D_08B25AC0 - (23232);
    v0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    v1 = D_08AEB614 - (-18924);
    f3 = BITSF(LD32(v1-18924));
    f2 = (float)(s32)FBITS(f0);
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    f0 = BITSF(LD32(s1));
    f2 = f2 * f3;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f2 = f2 * f0;
    f0 = BITSF(v0);
    a0 = a0 + v1;
    ST32(a3+4, a0);
    f1 = (float)(s32)FBITS(f0);
    ST32(s2, FBITS(f2));
    f1 = f1 * f3;
    f0 = BITSF(LD32(s1+4));
    ST32(a2+23232, v1);
    f1 = f1 * f0;
    goto L_0881AF3C;
L_0881AF3C:;
    ST32(s2+4, FBITS(f1));
    goto L_0881AF40;
L_0881AF40:;
    v1 = LD32(s1+12);
    a1 = 1;
    ST32(s2+8, v1);
    v0 = LD32(s1+16);
    ST32(s2+12, v0);
    goto L_0881AF54;
L_0881AF54:;
    v0 = a1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0881AF78:;
    v0 = a2 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1)); goto L_0881B000; }
    goto L_0881AF84;
L_0881AF84:;
    v0 = a3 - 1;
    cnd_ = a1 == v0;
    s0 = s1 + 20;
    if (cnd_) { goto L_0881AFFC; }
    goto L_0881AF90;
L_0881AF90:;
    f2 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s4-18928));
    f1 = f1 - f2;
    f0 = f0 - f2;
    a0 = sp + 20;
    a1 = sp + 24;
    a2 = sp + 28;
    f1 = f1 / f0;
    ST32(sp+28, FBITS(f3));
    ST32(sp+24, 0);
    ST32(sp+20, FBITS(f1));
    f0 = func_0881B244(a0, a1, a2);
    goto L_0881AFC4;
L_0881AFC4:;
    f2 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+20));
    ST32(sp+20, FBITS(f0));
    f1 = f1 - f2;
    f1 = f1 * f0;
    f2 = f2 + f1;
    ST32(s2, FBITS(f2));
    f2 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(s0+4));
    f1 = f1 - f2;
    f1 = f1 * f0;
    f2 = f2 + f1;
    ST32(s2+4, FBITS(f2));
    goto L_0881AF40;
L_0881AFFC:;
    f0 = BITSF(LD32(s1));
    goto L_0881B000;
L_0881B000:;
    ST32(s2, FBITS(f0));
    f1 = BITSF(LD32(s1+4));
    goto L_0881AF3C;
L_0881B00C:;
    a0 = LD32(s1+4);
    v1 = a1 << 2;
    goto L_0881AEAC;
L_0881B018:;
    a2 = sp + 16;
    a0 = sp + 0;
    f3 = f0 - f3;
    a1 = sp + 12;
    ST32(sp+12, 0);
    ST32(sp, FBITS(f3));
    f0 = func_0881B244(a0, a1, a2);
    goto L_0881B034;
L_0881B034:;
    f3 = f0;
    a2 = LD32(s1+12);
    f0 = BITSF(LD32(sp+16));
    ST32(sp, FBITS(f3));
    goto L_0881AE60;
L_0881B048:;
    s4 = D_08AEB610 - (-18928);
    goto L_0881AE2C;
L_0881B050:;
    f3 = BITSF(LD32(sp));
    f1 = BITSF(0);
    fcc = FCMP(f3, f1, 12);
    cnd_ = !fcc;
    s4 = D_08AEB610 - (-18928);
    if (cnd_) { goto L_0881AE30; }
    goto L_0881B068;
L_0881B068:;
    v0 = LD32(s1+12);
    v0 = v0 & 0x9;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp, FBITS(f1)); goto L_0881B0CC; }
    goto L_0881B078;
L_0881B078:;
    fcc = FCMP(f2, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3 / f2; goto L_0881B090; }
    goto L_0881B088;
L_0881B088:;
    f3 = f1;
    goto L_0881AE2C;
L_0881B090:;
    ST32(sp+4, FBITS(f1));
    a0 = sp + 0;
    a1 = sp + 4;
    a2 = sp + 8;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    v0 = v0 - 1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 * f2;
    f3 = f3 - f0;
    ST32(sp, FBITS(f3));
    f0 = func_0881B244(a0, a1, a2);
    goto L_0881B0C4;
L_0881B0C4:;
    f3 = f0;
    goto L_0881AE2C;
L_0881B0CC:;
    f3 = f1;
    s4 = D_08AEB610 - (-18928);
    goto L_0881AE30;
L_0881B0D8:;
    f2 = BITSF(LD32(sp+16));
    goto L_0881ADA8;
}

/* 0881B0E0 */
rv_t func_0881B0E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B0E0:;
    sp = sp - 16;
    a1 = a0 + 0;
    v0 = 125;
    v1 = LD_U16(a0+16);
    a0 = D_08B22E60 - (11872);
    cnd_ = v1 == v0;
    a0 = a0 + 11872;
    if (cnd_) { goto L_0881B10C; }
    goto L_0881B100;
L_0881B100:;
    goto L_0881B104;
L_0881B104:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881B10C:;
    a1 = LD32(a1+24);
    { rv_t r_ = func_0881AA44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881B114;
L_0881B114:;
    goto L_0881B104;
}

/* 0881B11C */
void func_0881B11C(u32 a0)
{
    u32 v0 = 0;
L_0881B11C:;
    v0 = 1;
    ST32(a0+12, v0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 0881B134 */
void func_0881B134(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B134:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 4;
    a0 = 21;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B150;
L_0881B150:;
    a0 = s0 + 0;
    func_08AA35BC(a0, 0, 0, 0);
    goto L_0881B158;
L_0881B158:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B160;
L_0881B160:;
    sp = sp + 16;
    return;
}

/* 0881B170 */
void func_0881B170(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B170:;
    sp = sp - 16;
    func_0881B18C(a0);
    goto L_0881B180;
L_0881B180:;
    sp = sp + 16;
    return;
}

/* 0881B18C */
void func_0881B18C(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_0881B18C:;
    v0 = D_08AEB618 - (-18920);
    f0 = BITSF(LD32(v0-18920));
    v0 = (u32)-1;
    ST32(a0+4, v0);
    ST32(a0+12, FBITS(f0));
    ST32(a0, 0);
    ST32(a0+8, 0);
    return;
}

/* 0881B1AC */
void func_0881B1AC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0881B1AC:;
    v0 = LD32(a0+8);
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0881B1C0; }
    goto L_0881B1B8;
L_0881B1B8:;
    ST32(a0+8, a1);
    ST32(a0, 0);
    goto L_0881B1C0;
L_0881B1C0:;
    return;
}

/* 0881B1C8 */
u64 func_0881B1C8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B1C8:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B22E60 - (11872);
    cnd_ = v0 != 0;
    a0 = a0 + 11872;
    if (cnd_) { goto L_0881B234; }
    goto L_0881B1FC;
L_0881B1FC:;
    v0 = s1 < 0x1u;
    goto L_0881B200;
L_0881B200:;
    a0 = D_08B22E60 - (11872);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 + 11872;
    if (cnd_) { goto L_0881B224; }
    goto L_0881B210;
L_0881B210:;
    goto L_0881B214;
L_0881B214:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881B224:;
    { u64 r_ = func_0881A6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B22C;
L_0881B22C:;
    goto L_0881B214;
L_0881B234:;
    func_0881A6C0(a0);
    goto L_0881B23C;
L_0881B23C:;
    v0 = s1 < 0x1u;
    goto L_0881B200;
}

/* 0881B244 */
float func_0881B244(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0881B244:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0881B270; }
    goto L_0881B25C;
L_0881B25C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0881B270; }
    goto L_0881B270;
L_0881B270:;
    return f0;
}

/* 0881B278 */
rv_t func_0881B278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B278:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0881B1C8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B28C;
L_0881B28C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881B298 */
rv_t func_0881B298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B298:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0881B1C8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B2AC;
L_0881B2AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881B2B8 */
u32 func_0881B2B8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B2B8:;
    sp = sp - 16;
    v0 = 4;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0881B2F0; }
    goto L_0881B2D4;
L_0881B2D4:;
    ST32(s0+4, 0);
    ST32(s0, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return v0;
L_0881B2F0:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881B310; }
    goto L_0881B300;
L_0881B300:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B308;
L_0881B308:;
    ST32(s0+4, 0);
    goto L_0881B2D4;
L_0881B310:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B318;
L_0881B318:;
    goto L_0881B300;
}

/* 0881B320 */
u64 func_0881B320(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B320:;
    sp = sp - 16;
    v0 = 4;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0881B34C; }
    goto L_0881B33C;
L_0881B33C:;
    goto L_0881B340;
L_0881B340:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881B34C:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881B36C; }
    goto L_0881B35C;
L_0881B35C:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B364;
L_0881B364:;
    goto L_0881B340;
L_0881B36C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B374;
L_0881B374:;
    goto L_0881B35C;
}

/* 0881B37C */
void func_0881B37C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881B37C:;
    sp = sp - 32;
    v0 = 4;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == v0;
    s0 = a3 & 0xff;
    if (cnd_) { goto L_0881B438; }
    goto L_0881B3B0;
L_0881B3B0:;
    v0 = 4;
    v1 = 3;
    if (s0 == 0) v0 = v1;
    a0 = 8;
    cnd_ = s0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0881B3E8; }
    goto L_0881B3C8;
L_0881B3C8:;
    ST32(s1+4, s3);
    goto L_0881B3D0;
L_0881B3D0:;
    sp = sp + 32;
    return;
L_0881B3E8:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881B3F0;
L_0881B3F0:;
    ST32(s1+4, v0);
    a0 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B400;
L_0881B400:;
    ST32(s0, v0);
    a0 = s2 + 0;
    s0 = LD32(s1+4);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B410;
L_0881B410:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881B41C;
L_0881B41C:;
    ST32(s0+4, v0);
    a1 = s2 + 0;
    v0 = LD32(s1+4);
    a0 = LD32(v0+4);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B430;
L_0881B430:;
    goto L_0881B3D0;
L_0881B438:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881B458; }
    goto L_0881B448;
L_0881B448:;
    a0 = LD32(s1+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B450;
L_0881B450:;
    ST32(s1+4, 0);
    goto L_0881B3B0;
L_0881B458:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B460;
L_0881B460:;
    goto L_0881B448;
}

/* 0881B468 */
void func_0881B468(u32 a0, u32 a1)
{
L_0881B468:;
    ST32(a0+4, a1);
    ST32(a0, 0);
    return;
}

/* 0881B474 */
void func_0881B474(u32 a0, float f12)
{
    u32 v0 = 0;
L_0881B474:;
    v0 = 1;
    ST32(a0+4, FBITS(f12));
    ST32(a0, v0);
    return;
}

/* 0881B484 */
void func_0881B484(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_0881B484:;
    v0 = 2;
    ST8(a0+4, a1);
    ST32(a0, v0);
    return;
}

/* 0881B494 */
void func_0881B494(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B494:;
    sp = sp - 16;
    v0 = 3;
    s2 = a0 + 0;
    v1 = LD32(a1);
    cnd_ = v1 == v0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0881B4D0; }
    goto L_0881B4BC;
L_0881B4BC:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_0881B4F4; }
    goto L_0881B4C8;
L_0881B4C8:;
    cnd_ = (s32)v1 < 0;
    if (cnd_) { ST32(s2, v1); goto L_0881B4DC; }
    goto L_0881B4D0;
L_0881B4D0:;
    v0 = LD32(s1+4);
    ST32(s2+4, v0);
    goto L_0881B4D8;
L_0881B4D8:;
    ST32(s2, v1);
    goto L_0881B4DC;
L_0881B4DC:;
    sp = sp + 16;
    return;
L_0881B4F4:;
    cnd_ = v1 != v0;
    if (cnd_) { ST32(s2, v1); goto L_0881B4DC; }
    goto L_0881B4FC;
L_0881B4FC:;
    v0 = LD32(a0);
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(a0+4); goto L_0881B570; }
    goto L_0881B508;
L_0881B508:;
    a0 = 8;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881B510;
L_0881B510:;
    ST32(s2+4, v0);
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0881B5A4(a0);
    goto L_0881B520;
L_0881B520:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B528;
L_0881B528:;
    ST32(s0, v0);
    a0 = s1 + 0;
    s0 = LD32(s2+4);
    v0 = func_0881B5A4(a0);
    goto L_0881B538;
L_0881B538:;
    a0 = v0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B540;
L_0881B540:;
    v0 = v0 + 1;
    a0 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881B54C;
L_0881B54C:;
    ST32(s0+4, v0);
    a0 = s1 + 0;
    v0 = func_0881B5A4(a0);
    goto L_0881B558;
L_0881B558:;
    v1 = LD32(s2+4);
    a1 = v0 + 0;
    a0 = LD32(v1+4);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B568;
L_0881B568:;
    v1 = LD32(s1);
    goto L_0881B4D8;
L_0881B570:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0881B508; }
    goto L_0881B578;
L_0881B578:;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881B594; }
    goto L_0881B584;
L_0881B584:;
    a0 = LD32(s2+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B58C;
L_0881B58C:;
    goto L_0881B508;
L_0881B594:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B59C;
L_0881B59C:;
    goto L_0881B584;
}

/* 0881B5A4 */
u32 func_0881B5A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0881B5A4:;
    v1 = LD32(a0);
    v0 = 4;
    cnd_ = v1 != v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881B5BC; }
    goto L_0881B5B4;
L_0881B5B4:;
    v0 = LD32(a0+4);
    a1 = LD32(v0+4);
    goto L_0881B5BC;
L_0881B5BC:;
    v0 = a1 + 0;
    return v0;
}

/* 0881B5C4 */
u32 func_0881B5C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0881B5C4:;
    a1 = LD32(a0);
    v0 = 3;
    cnd_ = a1 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0881B5F4; }
    goto L_0881B5D4;
L_0881B5D4:;
    v0 = 4;
    cnd_ = a1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881B5E8; }
    goto L_0881B5E0;
L_0881B5E0:;
    v0 = a0 + 0;
    return v0;
L_0881B5E8:;
    v0 = LD32(v1+4);
    a0 = LD32(v0);
    goto L_0881B5E0;
L_0881B5F4:;
    a0 = LD32(a0+4);
    goto L_0881B5E0;
}

/* 0881B5FC */
u32 func_0881B5FC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0881B5FC:;
    cnd_ = a1 == 0;
    v0 = LD32(a0+16);
    if (cnd_) { goto L_0881B610; }
    goto L_0881B604;
L_0881B604:;
    a1 = a1 - 1;
    cnd_ = a1 != 0;
    v0 = LD32(v0+8);
    if (cnd_) { goto L_0881B604; }
    goto L_0881B610;
L_0881B610:;
    return v0;
}

/* 0881B618 */
void func_0881B618(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881B618:;
    sp = sp - 32;
    s5 = a0 + 0;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s1 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s5+12, a1);
    if (cnd_) { goto L_0881B684; }
    goto L_0881B650;
L_0881B650:;
    s4 = D_08B22E78 - (11896);
    goto L_0881B654;
L_0881B654:;
    a0 = s4 + 11896;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881B65C;
L_0881B65C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_0881B668;
L_0881B668:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s5+16, s0); goto L_0881B674; }
    goto L_0881B670;
L_0881B670:;
    ST32(s1+8, s0);
    goto L_0881B674;
L_0881B674:;
    s2 = s2 + 1;
    v0 = s2 < s3;
    cnd_ = v0 != 0;
    s1 = s0 + 0;
    if (cnd_) { goto L_0881B654; }
    goto L_0881B684;
L_0881B684:;
    sp = sp + 32;
    return;
}

/* 0881B6A8 */
void func_0881B6A8(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B6A8:;
    sp = sp - 16;
    cnd_ = a2 == 0;
    a0 = LD32(a0+16);
    if (cnd_) { goto L_0881B6C4; }
    goto L_0881B6B8;
L_0881B6B8:;
    a2 = a2 - 1;
    cnd_ = a2 != 0;
    a0 = LD32(a0+8);
    if (cnd_) { goto L_0881B6B8; }
    goto L_0881B6C4;
L_0881B6C4:;
    func_0881B494(a0, a1, t1, t2, t3);
    goto L_0881B6CC;
L_0881B6CC:;
    sp = sp + 16;
    return;
}

/* 0881B6D8 */
void func_0881B6D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B6D8:;
    sp = sp - 16;
    a3 = 1;
    s2 = a0 + 0;
    s1 = a2 + 0;
    cnd_ = a1 == a3;
    if (cnd_) { goto L_0881B91C; }
    goto L_0881B6FC;
L_0881B6FC:;
    v0 = (s32)a1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B708;
L_0881B708:;
    v0 = 2;
    cnd_ = a1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0881B8A8; }
    goto L_0881B714;
L_0881B714:;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a2); goto L_0881B734; }
    goto L_0881B71C;
L_0881B71C:;
    goto L_0881B720;
L_0881B720:;
    goto L_0881B724;
L_0881B724:;
    sp = sp + 16;
    return;
L_0881B734:;
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0881B720; }
    goto L_0881B740;
L_0881B740:;
    v0 = v1 << 2;
    v1 = D_08AD37B0 - (14256);
    v1 = v1 + 14256;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0881B75Cu: goto L_0881B75C; case 0x0881B7A4u: goto L_0881B7A4; case 0x0881B800u: goto L_0881B800; case 0x0881B824u: goto L_0881B824; case 0x0881B868u: goto L_0881B868; default: rs_break(0, 0x0881b754); }
L_0881B75C:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0881B78C; }
    goto L_0881B768;
L_0881B768:;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B770;
L_0881B770:;
    f0 = BITSF(LD32(a2+4));
    a0 = s2 + 0;
    f12 = (float)(s32)FBITS(f0);
    goto L_0881B77C;
L_0881B77C:;
    func_0881B474(a0, f12);
    goto L_0881B784;
L_0881B784:;
    goto L_0881B720;
L_0881B78C:;
    a1 = LD32(a2+4);
    a0 = s2 + 0;
    goto L_0881B794;
L_0881B794:;
    func_0881B468(a0, a1);
    goto L_0881B79C;
L_0881B79C:;
    goto L_0881B720;
L_0881B7A4:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    if (cnd_) { f1 = BITSF(LD32(a2+4)); goto L_0881B7C8; }
    goto L_0881B7B0;
L_0881B7B0:;
    v0 = 1;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B7BC;
L_0881B7BC:;
    f12 = BITSF(LD32(a2+4));
    a0 = s2 + 0;
    goto L_0881B77C;
L_0881B7C8:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEB61C - (-18916);
    if (cnd_) { goto L_0881B7F4; }
    goto L_0881B7DC;
L_0881B7DC:;
    f0 = BITSF(LD32(v0-18916));
    f0 = f1 + f0;
    goto L_0881B7E4;
L_0881B7E4:;
    f0 = BITSF(F2I(f0, 1));
    a1 = FBITS(f0);
    a0 = s2 + 0;
    goto L_0881B794;
L_0881B7F4:;
    f0 = BITSF(LD32(v0-18916));
    f0 = f1 - f0;
    goto L_0881B7E4;
L_0881B800:;
    v1 = LD32(s2);
    v0 = 2;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B810;
L_0881B810:;
    a1 = LD_U8(a2+4);
    a0 = s2 + 0;
    func_0881B484(a0, a1);
    goto L_0881B81C;
L_0881B81C:;
    goto L_0881B720;
L_0881B824:;
    v1 = LD32(s2);
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B834;
L_0881B834:;
    a0 = a2 + 0;
    v0 = func_0881B5C4(a0);
    goto L_0881B83C;
L_0881B83C:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0881B5A4(a0);
    goto L_0881B848;
L_0881B848:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a3 = 0 + 0;
    goto L_0881B858;
L_0881B858:;
    func_0881B37C(a0, a1, a2, a3, 0, 0, 0);
    goto L_0881B860;
L_0881B860:;
    goto L_0881B720;
L_0881B868:;
    v1 = LD32(s2);
    v0 = 4;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B878;
L_0881B878:;
    a0 = a2 + 0;
    v0 = func_0881B5A4(a0);
    goto L_0881B880;
L_0881B880:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881B888;
L_0881B888:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_0881B5A4(a0);
    goto L_0881B894;
L_0881B894:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a3 = 1;
    goto L_0881B858;
L_0881B8A8:;
    v0 = LD32(a2);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_0881B8EC; }
    goto L_0881B8B4;
L_0881B8B4:;
    cnd_ = v0 != a3;
    if (cnd_) { goto L_0881B720; }
    goto L_0881B8BC;
L_0881B8BC:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    f2 = BITSF(LD32(a2+4));
    if (cnd_) { goto L_0881B8DC; }
    goto L_0881B8C8;
L_0881B8C8:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0881B724; }
    goto L_0881B8D0;
L_0881B8D0:;
    f12 = BITSF(LD32(a0+4));
    f12 = f12 + f2;
    goto L_0881B77C;
L_0881B8DC:;
    f0 = BITSF(LD32(a0+4));
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f2;
    goto L_0881B7C8;
L_0881B8EC:;
    cnd_ = v0 == 0;
    v1 = LD32(a2+4);
    if (cnd_) { goto L_0881B910; }
    goto L_0881B8F4;
L_0881B8F4:;
    cnd_ = v0 != a3;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B8FC;
L_0881B8FC:;
    f1 = BITSF(v1);
    f12 = BITSF(LD32(a0+4));
    f0 = (float)(s32)FBITS(f1);
    f12 = f12 + f0;
    goto L_0881B77C;
L_0881B910:;
    a1 = LD32(a0+4);
    a1 = a1 + v1;
    goto L_0881B794;
L_0881B91C:;
    v0 = LD32(a2);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0); goto L_0881B960; }
    goto L_0881B928;
L_0881B928:;
    cnd_ = v0 != a3;
    if (cnd_) { goto L_0881B720; }
    goto L_0881B930;
L_0881B930:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(a2+4));
    if (cnd_) { goto L_0881B950; }
    goto L_0881B93C;
L_0881B93C:;
    cnd_ = v0 != a3;
    if (cnd_) { goto L_0881B724; }
    goto L_0881B944;
L_0881B944:;
    f12 = BITSF(LD32(a0+4));
    f12 = f12 * f2;
    goto L_0881B77C;
L_0881B950:;
    f0 = BITSF(LD32(a0+4));
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 * f2;
    goto L_0881B7C8;
L_0881B960:;
    cnd_ = v0 == 0;
    v1 = LD32(a2+4);
    if (cnd_) { goto L_0881B984; }
    goto L_0881B968;
L_0881B968:;
    cnd_ = v0 != a3;
    if (cnd_) {  goto L_0881B720; }
    goto L_0881B970;
L_0881B970:;
    f1 = BITSF(v1);
    f12 = BITSF(LD32(a0+4));
    f0 = (float)(s32)FBITS(f1);
    f12 = f12 * f0;
    goto L_0881B77C;
L_0881B984:;
    a1 = LD32(a0+4);
    { s64 p_ = (s64)(s32)a1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    goto L_0881B794;
}

/* 0881B994 */
void func_0881B994(u32 a0)
{
L_0881B994:;
    ST32(a0+24, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    return;
}

/* 0881B9B4 */
void func_0881B9B4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881B9B4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+20);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0881BA0C; }
    goto L_0881B9D4;
L_0881B9D4:;
    v1 = LD32(a0-4);
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0881B9E8;
L_0881B9E8:;
    cnd_ = a0 == s0;
    s0 = s0 - 20;
    if (cnd_) { goto L_0881BA00; }
    goto L_0881B9F0;
L_0881B9F0:;
    a0 = s0 + 0;
    func_08AA3A04(a0, t1, t2, t3);
    goto L_0881B9F8;
L_0881B9F8:;
    a0 = LD32(s1+20);
    goto L_0881B9E8;
L_0881BA00:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BA08;
L_0881BA08:;
    goto L_0881BA0C;
L_0881BA0C:;
    sp = sp + 16;
    return;
}

/* 0881BA1C */
u64 func_0881BA1C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881BA1C:;
    v0 = a0 + 0;
    ST32(v0+8, a1);
    sp = sp - 16;
    a0 = a1 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_0881BD00(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BA38;
L_0881BA38:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0881BA44 */
u32 func_0881BA44(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881BA44:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_0881BD54(a0, a1);
    goto L_0881BA6C;
L_0881BA6C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0881BB0C; }
    goto L_0881BA74;
L_0881BA74:;
    a0 = v0 + 0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881BAF0; }
    goto L_0881BA84;
L_0881BA84:;
    v0 = LD32(s0+8);
    a1 = s2 + 0;
    a2 = s3 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881BABC; }
    goto L_0881BA98;
L_0881BA98:;
    v1 = 0 + 0;
    goto L_0881BA9C;
L_0881BA9C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0881BABC:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0881BAC4;
L_0881BAC4:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881BA98; }
    goto L_0881BACC;
L_0881BACC:;
    s0 = LD32(s1+4);
    a0 = s1 + 0;
    v0 = func_0881B5FC(a0, a1);
    goto L_0881BAD8;
L_0881BAD8:;
    a2 = v0 + 0;
    a0 = s3 + 0;
    a1 = s0 + 0;
    func_0881B6D8(a0, a1, a2);
    goto L_0881BAE8;
L_0881BAE8:;
    v1 = 1;
    goto L_0881BA9C;
L_0881BAF0:;
    v0 = func_0881B5FC(a0, a1);
    goto L_0881BAF8;
L_0881BAF8:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    func_08AA3918(a0, a1, 0, 0, 0);
    goto L_0881BB04;
L_0881BB04:;
    v1 = 1;
    goto L_0881BA9C;
L_0881BB0C:;
    v0 = LD32(s0+8);
    a1 = s2 + 0;
    a2 = s3 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881BA9C; }
    goto L_0881BB24;
L_0881BB24:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0881BB2C;
L_0881BB2C:;
    v1 = v0 + 0;
    goto L_0881BA9C;
}

/* 0881BB34 */
u64 func_0881BB34(u32 a0, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881BB34:;
    sp = sp - 16;
    t0 = a3 & 0xff;
    a0 = LD32(a0+8);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881BB64; }
    goto L_0881BB4C;
L_0881BB4C:;
    v0 = LD32(a0);
    cnd_ = v0 == a2;
    v1 = 1;
    if (cnd_) { goto L_0881BB64; }
    goto L_0881BB58;
L_0881BB58:;
    a3 = 0 + 0;
    cnd_ = t0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881BB74; }
    goto L_0881BB64;
L_0881BB64:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881BB74:;
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BB7C;
L_0881BB7C:;
    v1 = v0 + 0;
    goto L_0881BB64;
}

/* 0881BB84 */
u64 func_0881BB84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0881BB84:;
    t0 = LD32(a0+24);
    cnd_ = (s32)t0 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0881BBB4; }
    goto L_0881BB90;
L_0881BB90:;
    a0 = LD32(a0+20);
    v0 = LD32(a0);
    goto L_0881BB98;
L_0881BB98:;
    a2 = a2 + 1;
    a3 = a0 + 0;
    v1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a1;
    a0 = a0 + 20;
    if (cnd_) { goto L_0881BBB8; }
    goto L_0881BBAC;
L_0881BBAC:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0881BB98; }
    goto L_0881BBB4;
L_0881BBB4:;
    a3 = 0 + 0;
    goto L_0881BBB8;
L_0881BBB8:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0881BBC0 */
void func_0881BBC0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881BBC0:;
    sp = sp - 64;
    s3 = a1 + 0;
    a1 = sp + 16;
    s1 = a0 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BBEC;
L_0881BBEC:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BBF8;
L_0881BBF8:;
    a1 = s1 + 4;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BC04;
L_0881BC04:;
    a0 = s3 + 0;
    a1 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    f0 = func_0882DE98(a0, a1);
    goto L_0881BC1C;
L_0881BC1C:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881BCF0; }
    goto L_0881BC28;
L_0881BC28:;
    a1 = s1 + 24;
    a0 = s3 + 0;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BC3C;
L_0881BC3C:;
    s0 = LD32(s1+24);
    a0 = s0 << 2;
    a0 = a0 + s0;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BC54;
L_0881BC54:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s0 - 1;
    if (cnd_) { goto L_0881BC90; }
    goto L_0881BC68;
L_0881BC68:;
    a2 = 1;
    a1 = (u32)-1;
    goto L_0881BC70;
L_0881BC70:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(v1+12, a2);
    ST32(v1+16, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 20;
    if (cnd_) { goto L_0881BC70; }
    goto L_0881BC90;
L_0881BC90:;
    cnd_ = v0 == 0;
    ST32(s1+20, v0);
    if (cnd_) { goto L_0881BCD4; }
    goto L_0881BC98;
L_0881BC98:;
    v0 = LD32(s1+24);
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0881BCD4; }
    goto L_0881BCA4;
L_0881BCA4:;
    s0 = 0 + 0;
    goto L_0881BCA8;
L_0881BCA8:;
    a3 = LD32(s1+20);
    a1 = LD32(sp+16);
    a0 = s1 + 0;
    a3 = a3 + s0;
    a2 = s3 + 0;
    func_0881BD90(a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881BCC0;
L_0881BCC0:;
    v0 = LD32(s1+24);
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_0881BCA8; }
    goto L_0881BCD4;
L_0881BCD4:;
    sp = sp + 64;
    return;
L_0881BCF0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BCF8;
L_0881BCF8:;
    ST32(sp, 0);
    goto L_0881BC28;
}

/* 0881BD00 */
u64 func_0881BD00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881BD00:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881BD28; }
    goto L_0881BD18;
L_0881BD18:;
    ST32(v1+16, a1);
    goto L_0881BD20;
L_0881BD20:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881BD28:;
    func_0881BD38(a0, a1);
    goto L_0881BD30;
L_0881BD30:;
    goto L_0881BD20;
}

/* 0881BD38 */
void func_0881BD38(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0881BD38:;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0881BD4C; }
    goto L_0881BD44;
L_0881BD44:;
    a0 = v0 + 0;
    goto L_0881BD38;
L_0881BD4C:;
    ST32(a0+12, a1);
    return;
}

/* 0881BD54 */
u32 func_0881BD54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0881BD54:;
    t0 = LD32(a0+24);
    cnd_ = (s32)t0 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0881BD84; }
    goto L_0881BD60;
L_0881BD60:;
    a0 = LD32(a0+20);
    v0 = LD32(a0);
    goto L_0881BD68;
L_0881BD68:;
    a2 = a2 + 1;
    a3 = a0 + 0;
    v1 = (s32)a2 < (s32)t0;
    cnd_ = v0 == a1;
    a0 = a0 + 20;
    if (cnd_) { goto L_0881BD88; }
    goto L_0881BD7C;
L_0881BD7C:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0881BD68; }
    goto L_0881BD84;
L_0881BD84:;
    a3 = 0 + 0;
    goto L_0881BD88;
L_0881BD88:;
    v0 = a3 + 0;
    return v0;
}

/* 0881BD90 */
void func_0881BD90(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_0881BD90:;
    sp = sp - 128;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0881C088; }
    goto L_0881BDBC;
L_0881BDBC:;
    a0 = a2 + 0;
    a1 = sp + 36;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BDC8;
L_0881BDC8:;
    v0 = LD32(sp+36);
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(s2, v0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    f0 = func_0882DE98(a0, a1);
    goto L_0881BDE8;
L_0881BDE8:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881C078; }
    goto L_0881BDF4;
L_0881BDF4:;
    a0 = s1 + 0;
    a1 = sp + 40;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BE08;
L_0881BE08:;
    v1 = (s32)s0 < 2;
    v0 = LD32(sp+40);
    cnd_ = v1 == 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_0881C064; }
    goto L_0881BE18;
L_0881BE18:;
    v0 = (s32)s0 < 3;
    goto L_0881BE1C;
L_0881BE1C:;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_0881BE3C; }
    goto L_0881BE28;
L_0881BE28:;
    a0 = s1 + 0;
    a1 = sp + 48;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BE34;
L_0881BE34:;
    a1 = LD32(sp+48);
    a0 = s2 + 0;
    goto L_0881BE3C;
L_0881BE3C:;
    s3 = 0 + 0;
    func_0881B618(a0, a1, 0, 0, 0);
    goto L_0881BE44;
L_0881BE44:;
    v0 = LD32(s2+12);
    cnd_ = v0 == 0;
    s0 = sp + 16;
    if (cnd_) { goto L_0881BED4; }
    goto L_0881BE50;
L_0881BE50:;
    a0 = s0 + 0;
    goto L_0881BE54;
L_0881BE54:;
    ST32(sp+16, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_0881BE5C;
L_0881BE5C:;
    a0 = s1 + 0;
    a1 = sp + 52;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BE68;
L_0881BE68:;
    v1 = LD32(sp+52);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_0881BE90; }
    goto L_0881BE78;
L_0881BE78:;
    v1 = D_08AD37C8 - (14280);
    v1 = v1 + 14280;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0881BE90u: goto L_0881BE90; case 0x0881BEF4u: goto L_0881BEF4; case 0x0881BF14u: goto L_0881BF14; case 0x0881BF34u: goto L_0881BF34; case 0x0881BFA4u: goto L_0881BFA4; default: rs_break(0, 0x0881be88); }
L_0881BE90:;
    a0 = s1 + 0;
    a1 = sp + 56;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BE9C;
L_0881BE9C:;
    a1 = LD32(sp+56);
    a0 = s0 + 0;
    func_0881B468(a0, a1);
    goto L_0881BEA8;
L_0881BEA8:;
    a2 = s3 + 0;
    goto L_0881BEAC;
L_0881BEAC:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0881B6A8(a0, a1, a2, 0, 0, 0);
    goto L_0881BEB8;
L_0881BEB8:;
    a0 = s0 + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BEC0;
L_0881BEC0:;
    v0 = LD32(s2+12);
    s3 = s3 + 1;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_0881BE54; }
    goto L_0881BED4;
L_0881BED4:;
    goto L_0881BED8;
L_0881BED8:;
    sp = sp + 128;
    return;
L_0881BEF4:;
    a0 = s1 + 0;
    a1 = sp + 60;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BF00;
L_0881BF00:;
    f12 = BITSF(LD32(sp+60));
    a0 = s0 + 0;
    func_0881B474(a0, f12);
    goto L_0881BF0C;
L_0881BF0C:;
    a2 = s3 + 0;
    goto L_0881BEAC;
L_0881BF14:;
    a1 = sp + 32;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BF20;
L_0881BF20:;
    a1 = LD_U8(sp+32);
    a0 = s0 + 0;
    func_0881B484(a0, a1);
    goto L_0881BF2C;
L_0881BF2C:;
    a2 = s3 + 0;
    goto L_0881BEAC;
L_0881BF34:;
    a1 = sp + 68;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BF40;
L_0881BF40:;
    a1 = LD32(sp+68);
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = a1 != 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0881BF90; }
    goto L_0881BF54;
L_0881BF54:;
    a2 = LD32(sp);
    a0 = s0 + 0;
    goto L_0881BF5C;
L_0881BF5C:;
    a3 = 0 + 0;
    goto L_0881BF60;
L_0881BF60:;
    func_0881B37C(a0, a1, a2, a3, 0, 0, 0);
    goto L_0881BF68;
L_0881BF68:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881BF80; }
    goto L_0881BF74;
L_0881BF74:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_0881BEA8;
L_0881BF80:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BF88;
L_0881BF88:;
    ST32(sp, 0);
    goto L_0881BF74;
L_0881BF90:;
    a1 = sp + 0;
    a0 = s1 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0881BF9C;
L_0881BF9C:;
    a1 = LD32(sp+68);
    goto L_0881BF54;
L_0881BFA4:;
    a0 = s1 + 0;
    a1 = sp + 64;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BFB0;
L_0881BFB0:;
    v0 = LD32(sp+64);
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = v0 != 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0881C050; }
    goto L_0881BFC4;
L_0881BFC4:;
    v0 = D_08AD37C4 - (14276);
    s4 = v0 + 14276;
    cnd_ = s4 == 0;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_0881C004; }
    goto L_0881BFD4;
L_0881BFD4:;
    a0 = s4 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881BFDC;
L_0881BFDC:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881BFF0;
L_0881BFF0:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0881C03C; }
    goto L_0881BFF8;
L_0881BFF8:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    v1 = LD32(sp+52);
    goto L_0881C004;
L_0881C004:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0881C020; }
    goto L_0881C010;
L_0881C010:;
    a1 = LD32(sp+64);
    a0 = s0 + 0;
    a2 = 0 + 0;
    goto L_0881BF5C;
L_0881C020:;
    a0 = LD32(sp);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C028;
L_0881C028:;
    a2 = LD32(sp);
    a1 = v0 + 0;
    a0 = s0 + 0;
    a3 = 1;
    goto L_0881BF60;
L_0881C03C:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C048;
L_0881C048:;
    v1 = LD32(sp+52);
    goto L_0881C004;
L_0881C050:;
    a0 = s1 + 0;
    a1 = sp + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0881C05C;
L_0881C05C:;
    v1 = LD32(sp+52);
    goto L_0881C004;
L_0881C064:;
    a0 = s1 + 0;
    a1 = sp + 44;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C070;
L_0881C070:;
    v0 = (s32)s0 < 3;
    goto L_0881BE1C;
L_0881C078:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C080;
L_0881C080:;
    ST32(sp, 0);
    goto L_0881BDF4;
L_0881C088:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0881BED8; }
    goto L_0881C090;
L_0881C090:;
    a0 = a2 + 0;
    a1 = sp + 72;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C09C;
L_0881C09C:;
    v0 = LD32(sp+72);
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(s2, v0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    f0 = func_0882DE98(a0, a1);
    goto L_0881C0BC;
L_0881C0BC:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881C1B0; }
    goto L_0881C0C8;
L_0881C0C8:;
    a1 = sp + 76;
    a0 = s1 + 0;
    ST32(sp+8, 0);
    s0 = sp + 16;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C0E0;
L_0881C0E0:;
    a0 = s0 + 0;
    v0 = LD32(sp+76);
    ST32(sp+16, 0);
    ST32(s2+4, v0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_0881C0F4;
L_0881C0F4:;
    a0 = s1 + 0;
    a1 = sp + 80;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C100;
L_0881C100:;
    v1 = LD32(sp+80);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0881C190; }
    goto L_0881C110;
L_0881C110:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0881C128; }
    goto L_0881C118;
L_0881C118:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0881C170; }
    goto L_0881C120;
L_0881C120:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s1 + 0; goto L_0881C160; }
    goto L_0881C128;
L_0881C128:;
    a0 = s1 + 0;
    a1 = sp + 84;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C134;
L_0881C134:;
    a1 = LD32(sp+84);
    goto L_0881C138;
L_0881C138:;
    a0 = s0 + 0;
    func_0881B468(a0, a1);
    goto L_0881C140;
L_0881C140:;
    a0 = s2 + 0;
    goto L_0881C144;
L_0881C144:;
    a1 = s0 + 0;
    a2 = 0 + 0;
    func_0881B6A8(a0, a1, a2, 0, 0, 0);
    goto L_0881C150;
L_0881C150:;
    a0 = s0 + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C158;
L_0881C158:;
    goto L_0881BED8;
L_0881C160:;
    a1 = sp + 92;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C168;
L_0881C168:;
    a1 = LD32(sp+92);
    goto L_0881C138;
L_0881C170:;
    a0 = s1 + 0;
    a1 = sp + 33;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C17C;
L_0881C17C:;
    a1 = LD_U8(sp+33);
    a0 = s0 + 0;
    func_0881B484(a0, a1);
    goto L_0881C188;
L_0881C188:;
    a0 = s2 + 0;
    goto L_0881C144;
L_0881C190:;
    a0 = s1 + 0;
    a1 = sp + 88;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C19C;
L_0881C19C:;
    f12 = BITSF(LD32(sp+88));
    a0 = s0 + 0;
    func_0881B474(a0, f12);
    goto L_0881C1A8;
L_0881C1A8:;
    a0 = s2 + 0;
    goto L_0881C144;
L_0881C1B0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C1B8;
L_0881C1B8:;
    ST32(sp, 0);
    goto L_0881C0C8;
}

/* 0881C1C0 */
u64 func_0881C1C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C1C0:;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v1 = a1 & a0;
    a2 = D_08B22E78 - (11896);
    a1 = a1 & v0;
    a0 = a2 + 11896;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0881C20C; }
    goto L_0881C1F8;
L_0881C1F8:;
    v0 = 12;
    ST32(a0+8, v0);
    v0 = 32;
    ST32(a2+11896, 0);
    ST32(a0+4, v0);
    goto L_0881C20C;
L_0881C20C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0881C248; }
    goto L_0881C214;
L_0881C214:;
    v0 = D_08B22E78 - (11896);
    s1 = LD32(v0+11896);
    cnd_ = s1 == 0;
    if (cnd_) {  goto L_0881C24C; }
    goto L_0881C224;
L_0881C224:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881C270; }
    goto L_0881C230;
L_0881C230:;
    s0 = LD32(s1+12);
    goto L_0881C234;
L_0881C234:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0881C258; }
    goto L_0881C23C;
L_0881C23C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C244;
L_0881C244:;
    goto L_0881C248;
L_0881C248:;
    goto L_0881C24C;
L_0881C24C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881C258:;
    func_08AA3740(a0, t1, t2, t3);
    goto L_0881C260;
L_0881C260:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C268;
L_0881C268:;
    goto L_0881C23C;
L_0881C270:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C278;
L_0881C278:;
    s0 = LD32(s1+12);
    goto L_0881C234;
}

/* 0881C280 */
rv_t func_0881C280(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C280:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0881C1C0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C294;
L_0881C294:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881C2A0 */
rv_t func_0881C2A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C2A0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0881C1C0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C2B4;
L_0881C2B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881C2C0 */
void func_0881C2C0(u32 a0)
{
L_0881C2C0:;
    ST32(a0+12, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 0881C2D4 */
void func_0881C2D4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C2D4:;
    sp = sp - 16;
    s2 = a0 + 0;
    v1 = LD32(a0+8);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0881C36C; }
    goto L_0881C2F8;
L_0881C2F8:;
    a1 = LD32(a0+4);
    v0 = s1 << 2;
    goto L_0881C300;
L_0881C300:;
    v0 = v0 + a1;
    s0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0881C350; }
    goto L_0881C314;
L_0881C314:;
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_0881C300; }
    goto L_0881C320;
L_0881C320:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0881C340; }
    goto L_0881C328;
L_0881C328:;
    goto L_0881C32C;
L_0881C32C:;
    sp = sp + 16;
    return;
L_0881C340:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C348;
L_0881C348:;
    goto L_0881C32C;
L_0881C350:;
    func_0881B9B4(a0, t1, t2, t3);
    goto L_0881C358;
L_0881C358:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C360;
L_0881C360:;
    a1 = LD32(s2+4);
    v1 = LD32(s2+8);
    goto L_0881C314;
L_0881C36C:;
    a1 = LD32(a0+4);
    goto L_0881C320;
}

/* 0881C374 */
void func_0881C374(void)
{
    u32 v0 = 0;
L_0881C374:;
    v0 = D_08B22E84 - (11908);
    ST32(v0+11908, 0);
    return;
}

/* 0881C380 */
void func_0881C380(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C380:;
    sp = sp - 16;
    s2 = D_08B22E84 - (11908);
    s0 = LD32(s2+11908);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0881C3C4; }
    goto L_0881C3A0;
L_0881C3A0:;
    a0 = s0 + 0;
    cnd_ = s0 == 0;
    s1 = LD32(s0+12);
    if (cnd_) { goto L_0881C3BC; }
    goto L_0881C3AC;
L_0881C3AC:;
    func_0881C2D4(a0, t1, t2, t3);
    goto L_0881C3B4;
L_0881C3B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C3BC;
L_0881C3BC:;
    cnd_ = s1 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_0881C3A0; }
    goto L_0881C3C4;
L_0881C3C4:;
    ST32(s2+11908, 0);
    sp = sp + 16;
    return;
}

/* 0881C3E0 */
u64 func_0881C3E0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C3E0:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a0 == 0;
    ST32(a2, 0);
    if (cnd_) { goto L_0881C40C; }
    goto L_0881C404;
L_0881C404:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0881C424; }
    goto L_0881C40C;
L_0881C40C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0881C424:;
    v0 = func_0881C8B0(a0);
    goto L_0881C42C;
L_0881C42C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881C40C; }
    goto L_0881C434;
L_0881C434:;
    a3 = LD32(v0+8);
    cnd_ = (s32)a3 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881C40C; }
    goto L_0881C440;
L_0881C440:;
    v1 = LD32(v0+4);
    a2 = LD32(v1);
    goto L_0881C448;
L_0881C448:;
    a1 = a1 + 1;
    a0 = (s32)a1 < (s32)a3;
    v0 = LD32(a2);
    cnd_ = v0 == s0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881C46C; }
    goto L_0881C45C;
L_0881C45C:;
    cnd_ = a0 != 0;
    if (cnd_) { a2 = LD32(v1); goto L_0881C448; }
    goto L_0881C464;
L_0881C464:;
    v1 = 0 + 0;
    goto L_0881C40C;
L_0881C46C:;
    v1 = 1;
    ST32(s1, a2);
    goto L_0881C40C;
}

/* 0881C478 */
u32 func_0881C478(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0881C478:;
    v0 = D_08B22E84 - (11908);
    v1 = LD32(v0+11908);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0881C4A0; }
    goto L_0881C488;
L_0881C488:;
    v0 = LD32(v1);
    goto L_0881C48C;
L_0881C48C:;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_0881C4A8; }
    goto L_0881C494;
L_0881C494:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0881C48C; }
    goto L_0881C4A0;
L_0881C4A0:;
    v0 = 0 + 0;
    return v0;
L_0881C4A8:;
    v0 = LD32(v1+8);
    return v0;
}

/* 0881C4B0 */
u32 func_0881C4B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C4B0:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_0881C8B0(a0);
    goto L_0881C4C4;
L_0881C4C4:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881C4EC; }
    goto L_0881C4D0;
L_0881C4D0:;
    v0 = LD32(v0+8);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = s0 << 2;
    if (cnd_) { goto L_0881C4EC; }
    goto L_0881C4E0;
L_0881C4E0:;
    v0 = LD32(v1+4);
    v0 = a0 + v0;
    a1 = LD32(v0);
    goto L_0881C4EC;
L_0881C4EC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0881C500 */
u32 func_0881C500(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881C500:;
    sp = sp - 32;
    s5 = a1 + 0;
    s4 = a2 & 0xff;
    s3 = a0 + 0;
    v0 = func_0881C8B0(a0);
    goto L_0881C530;
L_0881C530:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0881C588; }
    goto L_0881C53C;
L_0881C53C:;
    v0 = LD32(s1+8);
    s2 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881C584; }
    goto L_0881C54C;
L_0881C54C:;
    v1 = LD32(s1+4);
    v0 = s0 << 2;
    a1 = s3 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a2 = s5 + 0;
    a3 = s4 + 0;
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C56C;
L_0881C56C:;
    v1 = LD32(s1+8);
    s0 = s0 + 1;
    v0 = 0 < v0;
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    s2 = s2 + v0;
    if (cnd_) { goto L_0881C54C; }
    goto L_0881C584;
L_0881C584:;
    v0 = s2 + 0;
    goto L_0881C588;
L_0881C588:;
    sp = sp + 32;
    return v0;
}

/* 0881C5AC */
u32 func_0881C5AC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881C5AC:;
    sp = sp - 48;
    s7 = a3 + 0;
    s6 = a1 + 0;
    s5 = a2 & 0xff;
    s4 = a0 + 0;
    v0 = func_0881C8B0(a0);
    goto L_0881C5E8;
L_0881C5E8:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0881C64C; }
    goto L_0881C5F4;
L_0881C5F4:;
    v0 = LD32(s1+8);
    s3 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881C648; }
    goto L_0881C604;
L_0881C604:;
    v0 = LD32(s1+4);
    goto L_0881C608;
L_0881C608:;
    s2 = s0 << 2;
    a1 = s4 + 0;
    v0 = s2 + v0;
    a0 = LD32(v0);
    a2 = s6 + 0;
    a3 = s5 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_0881BB34(a0, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C628;
L_0881C628:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_0881C63C; }
    goto L_0881C630;
L_0881C630:;
    cnd_ = s3 == s7;
    s3 = s3 + 1;
    if (cnd_) { goto L_0881C678; }
    goto L_0881C638;
L_0881C638:;
    v0 = LD32(s1+8);
    goto L_0881C63C;
L_0881C63C:;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_0881C608; }
    goto L_0881C648;
L_0881C648:;
    v0 = 0 + 0;
    goto L_0881C64C;
L_0881C64C:;
    sp = sp + 48;
    return v0;
L_0881C678:;
    v0 = LD32(s1+4);
    v0 = s2 + v0;
    v0 = LD32(v0);
    goto L_0881C64C;
}

/* 0881C688 */
void func_0881C688(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881C688:;
    sp = sp - 32;
    v0 = func_0881C8B0(a0);
    goto L_0881C6A0;
L_0881C6A0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0881C6F0; }
    goto L_0881C6A8;
L_0881C6A8:;
    v0 = LD32(v0+8);
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0881C6F0; }
    goto L_0881C6B4;
L_0881C6B4:;
    v1 = LD32(s1+4);
    goto L_0881C6B8;
L_0881C6B8:;
    v0 = s2 << 2;
    a0 = LD32(s1);
    v0 = v0 + v1;
    s0 = LD32(v0);
    a2 = sp + 0;
    s2 = s2 + 1;
    a1 = LD32(s0+4);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C6D8;
L_0881C6D8:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0881C708; }
    goto L_0881C6E0;
L_0881C6E0:;
    v0 = LD32(s1+8);
    goto L_0881C6E4;
L_0881C6E4:;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+4); goto L_0881C6B8; }
    goto L_0881C6F0;
L_0881C6F0:;
    sp = sp + 32;
    return;
L_0881C708:;
    a1 = LD32(sp);
    { u64 r_ = func_0881BA1C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C710;
L_0881C710:;
    v0 = LD32(s1+8);
    goto L_0881C6E4;
}

/* 0881C718 */
void func_0881C718(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0881C718:;
    sp = sp - 80;
    a1 = sp + 16;
    s5 = a0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C74C;
L_0881C74C:;
    v1 = LD32(sp+16);
    cnd_ = v1 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0881C784; }
    goto L_0881C758;
L_0881C758:;
    goto L_0881C760;
L_0881C760:;
    sp = sp + 80;
    return;
L_0881C784:;
    a1 = sp + 20;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C78C;
L_0881C78C:;
    v0 = LD32(sp+20);
    cnd_ = (s32)v0 <= 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_0881C758; }
    goto L_0881C798;
L_0881C798:;
    s7 = D_08B22E84 - (11908);
    goto L_0881C79C;
L_0881C79C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C7A4;
L_0881C7A4:;
    s3 = v0 + 0;
    a0 = v0 + 0;
    func_0881C2C0(a0);
    goto L_0881C7B0;
L_0881C7B0:;
    cnd_ = s3 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_0881C758; }
    goto L_0881C7B8;
L_0881C7B8:;
    a1 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C7C0;
L_0881C7C0:;
    a1 = s3 + 8;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C7CC;
L_0881C7CC:;
    a0 = s5 + 0;
    a1 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    f0 = func_0882DE98(a0, a1);
    goto L_0881C7E4;
L_0881C7E4:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881C8A0; }
    goto L_0881C7F0;
L_0881C7F0:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    a0 = LD32(s3+8);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C804;
L_0881C804:;
    cnd_ = v0 == 0;
    ST32(s3+4, v0);
    if (cnd_) { goto L_0881C758; }
    goto L_0881C80C;
L_0881C80C:;
    v0 = LD32(s3+8);
    cnd_ = (s32)v0 <= 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0881C870; }
    goto L_0881C818;
L_0881C818:;
    s1 = LD32(s3+4);
    goto L_0881C81C;
L_0881C81C:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C824;
L_0881C824:;
    s0 = s4 << 2;
    a0 = v0 + 0;
    s2 = v0 + 0;
    s1 = s0 + s1;
    func_0881B994(a0);
    goto L_0881C838;
L_0881C838:;
    v1 = LD32(s3+4);
    ST32(s1, s2);
    a1 = s5 + 0;
    s0 = s0 + v1;
    v0 = LD32(s0);
    s4 = s4 + 1;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881C758; }
    goto L_0881C858;
L_0881C858:;
    func_0881BBC0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881C860;
L_0881C860:;
    v0 = LD32(s3+8);
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s3+4); goto L_0881C81C; }
    goto L_0881C870;
L_0881C870:;
    v0 = LD32(s7+11908);
    a0 = LD32(s3);
    s6 = s6 + 1;
    ST32(s3+12, v0);
    ST32(s7+11908, s3);
    func_0881C688(a0);
    goto L_0881C888;
L_0881C888:;
    v0 = LD32(sp+20);
    v0 = (s32)s6 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881C79C; }
    goto L_0881C898;
L_0881C898:;
    goto L_0881C760;
L_0881C8A0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881C8A8;
L_0881C8A8:;
    ST32(sp, 0);
    goto L_0881C7F0;
}

/* 0881C8B0 */
u32 func_0881C8B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0881C8B0:;
    v0 = D_08B22E84 - (11908);
    v1 = LD32(v0+11908);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881C8DC; }
    goto L_0881C8C0;
L_0881C8C0:;
    v0 = LD32(v1);
    goto L_0881C8C4;
L_0881C8C4:;
    cnd_ = v0 == a0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0881C8DC; }
    goto L_0881C8CC;
L_0881C8CC:;
    v1 = LD32(v1+12);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0881C8C4; }
    goto L_0881C8D8;
L_0881C8D8:;
    a1 = 0 + 0;
    goto L_0881C8DC;
L_0881C8DC:;
    v0 = a1 + 0;
    return v0;
}

/* 0881C8E4 */
void func_0881C8E4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C8E4:;
    a0 = D_08AD37DC - (14300);
    a1 = D_08B159F5 - (23029);
    sp = sp - 16;
    a0 = a0 + 14300;
    a1 = a1 + 23029;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C908;
L_0881C908:;
    a0 = D_08AD3808 - (14344);
    a1 = D_08B159F6 - (23030);
    a0 = a0 + 14344;
    a1 = a1 + 23030;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881C924;
L_0881C924:;
    sp = sp + 16;
    return;
}

/* 0881C930 */
void func_0881C930(void)
{
L_0881C930:;
    return;
}

/* 0881C938 */
void func_0881C938(void)
{
L_0881C938:;
    return;
}

/* 0881C940 */
void func_0881C940(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C940:;
    sp = sp - 16;
    func_088F3FA4();
    goto L_0881C950;
L_0881C950:;
    sp = sp + 16;
    return;
}

/* 0881C95C */
void func_0881C95C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C95C:;
    sp = sp - 16;
    func_088F3FC0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0881C96C;
L_0881C96C:;
    sp = sp + 16;
    return;
}

/* 0881C978 */
void func_0881C978(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C978:;
    sp = sp - 16;
    v0 = D_08B2C223 - (-15837);
    v1 = LD_U8(v0-15837);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0881C9B0; }
    goto L_0881C990;
L_0881C990:;
    v0 = D_08B159F8 - (23032);
    f1 = BITSF(LD32(v0+23032));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f12 = f1;
    if (cnd_) { goto L_0881C9B8; }
    goto L_0881C9AC;
L_0881C9AC:;
    goto L_0881C9B0;
L_0881C9B0:;
    sp = sp + 16;
    return;
L_0881C9B8:;
    func_088F3FF8();
    goto L_0881C9C0;
L_0881C9C0:;
    goto L_0881C9B0;
}

/* 0881C9C8 */
void func_0881C9C8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C9C8:;
    sp = sp - 16;
    func_088F3FDC(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0881C9D8;
L_0881C9D8:;
    sp = sp + 16;
    return;
}

/* 0881C9E4 */
void func_0881C9E4(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881C9E4:;
    a0 = D_08AD3840 - (14400);
    a1 = RS_FADDR(func_0881CA14, 0x0881CA14u) - (-13804);
    sp = sp - 16;
    a0 = a0 + 14400;
    a1 = a1 - 13804;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897724(a0, a1, a2, a3, t1, t2, t3);
    goto L_0881CA08;
L_0881CA08:;
    sp = sp + 16;
    return;
}

/* 0881CA14 */
rv_t func_0881CA14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881CA14:;
    sp = sp - 32;
    v0 = a0 + 0;
    a1 = a1 & 0xff;
    a0 = D_08AD3860 - (14432);
    a0 = a0 + 14432;
    v0 = v0 & 0xff;
    cnd_ = a1 != 0;
    f1 = f12;
    if (cnd_) { goto L_0881CAF4; }
    goto L_0881CA3C;
L_0881CA3C:;
    f20 = BITSF(0);
    cnd_ = v0 != 0;
    v0 = D_08B159F8 - (23032);
    if (cnd_) { goto L_0881CAD0; }
    goto L_0881CA48;
L_0881CA48:;
    fcc = FCMP(f20, f12, 14);
    cnd_ = !fcc;
    v0 = D_08AEB620 - (-18912);
    if (cnd_) { goto L_0881CA6C; }
    goto L_0881CA58;
L_0881CA58:;
    f0 = BITSF(LD32(v0-18912));
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    v0 = D_08B159F8 - (23032);
    if (cnd_) { goto L_0881CA9C; }
    goto L_0881CA6C;
L_0881CA6C:;
    f12 = f1;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881CA74;
L_0881CA74:;
    a0 = D_08AD389C - (14492);
    a2 = v0 + 0;
    a0 = a0 + 14492;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881CA88;
L_0881CA88:;
    v0 = 0 + 0;
    goto L_0881CA8C;
L_0881CA8C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0881CA9C:;
    ST32(v0+23032, FBITS(f12));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881CAA4;
L_0881CAA4:;
    a0 = D_08AD390C - (14604);
    a0 = a0 + 14604;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881CAB8;
L_0881CAB8:;
    f12 = f20;
    a0 = 1;
    a1 = 0 + 0;
    { rv_t r_ = func_0881CA14(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881CAC8;
L_0881CAC8:;
    v0 = 1;
    goto L_0881CA8C;
L_0881CAD0:;
    f12 = BITSF(LD32(v0+23032));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881CAD8;
L_0881CAD8:;
    a0 = D_08AD3924 - (14628);
    a0 = a0 + 14628;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881CAEC;
L_0881CAEC:;
    v0 = 1;
    goto L_0881CA8C;
L_0881CAF4:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881CAFC;
L_0881CAFC:;
    a0 = D_08AD394C - (14668);
    a0 = a0 + 14668;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881CB08;
L_0881CB08:;
    v0 = 1;
    goto L_0881CA8C;
}

/* 0881CB10 */
void func_0881CB10(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881CB10:;
    sp = sp - 16;
    func_0881C940();
    goto L_0881CB20;
L_0881CB20:;
    func_0881C8E4();
    goto L_0881CB28;
L_0881CB28:;
    sp = sp + 16;
    return;
}

/* 0881CB34 */
void func_0881CB34(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881CB34:;
    sp = sp - 16;
    func_0881C938();
    goto L_0881CB44;
L_0881CB44:;
    func_0881C95C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881CB4C;
L_0881CB4C:;
    sp = sp + 16;
    return;
}

/* 0881CB58 */
void func_0881CB58(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881CB58:;
    sp = sp - 16;
    func_0881C930();
    goto L_0881CB68;
L_0881CB68:;
    func_0881C9C8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881CB70;
L_0881CB70:;
    sp = sp + 16;
    return;
}

/* 0881CB7C */
void func_0881CB7C(float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_0881CB7C:;
    v0 = D_08AEB624 - (-18908);
    f0 = BITSF(LD32(v0-18908));
    v0 = D_08B15A08 - (23048);
    ST32(v0+23048, FBITS(f12));
    fcc = FCMP(f12, f0, 2);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0881CBA0; }
    goto L_0881CB9C;
L_0881CB9C:;
    v1 = 0 + 0;
    goto L_0881CBA0;
L_0881CBA0:;
    v0 = D_08B230A9 - (12457);
    ST8(v0+12457, v1);
    return;
}

/* 0881CBAC */
void func_0881CBAC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0881CBAC:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    v0 = D_08B230B0 - (12464);
    a0 = 1;
    ST8(v0+12464, a0);
    v0 = D_08B15A0C - (23052);
    ST32(v1+8, FBITS(f0));
    ST8(v0+23052, a0);
    ST32(v1, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    return;
}

/* 0881CBE4 */
void func_0881CBE4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr118 = v[118], vr125 = v[125];
L_0881CBE4:;
    a1 = 1;
    v0 = D_08B230B0 - (12464);
    ST8(v0+12464, a1);
    v0 = D_08B15A0C - (23052);
    v1 = D_08B159FC - (23036);
    ST8(v0+23052, a1);
    a1 = LD32(v1+23036);
    f0 = BITSF(LD32(a0+32));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f4 = BITSF(LD32(a0+12));
    f5 = BITSF(LD32(a0+16));
    f6 = BITSF(LD32(a0+20));
    f7 = BITSF(LD32(a0+24));
    f8 = BITSF(LD32(a0+28));
    v0 = a1 + 12;
    ST32(v0+32, FBITS(f0));
    ST32(a1+12, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+12, FBITS(f4));
    ST32(v0+16, FBITS(f5));
    ST32(v0+20, FBITS(f6));
    ST32(v0+24, FBITS(f7));
    ST32(v0+28, FBITS(f8));
    {v[112]=BITSF(LD32(a1+(12)));}
    {v[113]=BITSF(LD32(a1+(16)));}
    {v[114]=BITSF(LD32(a1+(20)));}
    {v[116]=BITSF(LD32(a1+(24)));}
    {v[117]=BITSF(LD32(a1+(28)));}
    {vr118=BITSF(LD32(a1+(32)));}
    {v[120]=BITSF(LD32(a1+(36)));}
    {v[121]=BITSF(LD32(a1+(40)));}
    {v[122]=BITSF(LD32(a1+(44)));}
    {v[124]=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CECC; }
    goto L_0881CC88;
L_0881CC88:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CE0C; }
    goto L_0881CC98;
L_0881CC98:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0881CD30; }
    goto L_0881CCC0;
L_0881CCC0:;
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
    if (cnd_) { goto L_0881CD0C; }
    goto L_0881CCFC;
L_0881CCFC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0881CD0C;
L_0881CD0C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CD50; }
    goto L_0881CD1C;
L_0881CD1C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0881CD50; }
    goto L_0881CD2C;
L_0881CD2C:;
    goto L_0881CD30;
L_0881CD30:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CD50; }
    goto L_0881CD44;
L_0881CD44:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0881CD50;
L_0881CD50:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0881CDE0; }
    goto L_0881CD70;
L_0881CD70:;
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
    if (cnd_) { goto L_0881CDBC; }
    goto L_0881CDAC;
L_0881CDAC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0881CDBC;
L_0881CDBC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CE00; }
    goto L_0881CDCC;
L_0881CDCC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0881CE00; }
    goto L_0881CDDC;
L_0881CDDC:;
    goto L_0881CDE0;
L_0881CDE0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CE00; }
    goto L_0881CDF4;
L_0881CDF4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0881CE00;
L_0881CE00:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0881CF84; }
    goto L_0881CE08;
L_0881CE08:;
    goto L_0881CE0C;
L_0881CE0C:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0881CEA0; }
    goto L_0881CE30;
L_0881CE30:;
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
    if (cnd_) { goto L_0881CE7C; }
    goto L_0881CE6C;
L_0881CE6C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0881CE7C;
L_0881CE7C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CEC0; }
    goto L_0881CE8C;
L_0881CE8C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0881CEC0; }
    goto L_0881CE9C;
L_0881CE9C:;
    goto L_0881CEA0;
L_0881CEA0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CEC0; }
    goto L_0881CEB4;
L_0881CEB4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0881CEC0;
L_0881CEC0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0881CF84; }
    goto L_0881CEC8;
L_0881CEC8:;
    goto L_0881CECC;
L_0881CECC:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0881CF60; }
    goto L_0881CEF0;
L_0881CEF0:;
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
    if (cnd_) { goto L_0881CF3C; }
    goto L_0881CF2C;
L_0881CF2C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0881CF3C;
L_0881CF3C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CF80; }
    goto L_0881CF4C;
L_0881CF4C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0881CF80; }
    goto L_0881CF5C;
L_0881CF5C:;
    goto L_0881CF60;
L_0881CF60:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0881CF80; }
    goto L_0881CF74;
L_0881CF74:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0881CF80;
L_0881CF80:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_0881CF84;
L_0881CF84:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=v[124];vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(a1+(48),FBITS(vr96));}
    {ST32(a1+(52),FBITS(vr97));}
    {ST32(a1+(56),FBITS(vr98));}
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[118]=vr118;v[125]=vr125;return; }
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[118]=vr118;v[125]=vr125;
}

/* 0881CF98 */
void func_0881CF98(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr126 = v[126], vr127 = v[127];
L_0881CF98:;
    v0 = D_08B159FC - (23036);
    a1 = LD32(v0+23036);
    v1 = LD32(a0);
    a3 = 1;
    v0 = D_08B230B0 - (12464);
    ST32(a1+48, v1);
    a2 = LD32(a0+4);
    ST8(v0+12464, a3);
    v0 = D_08B15A0C - (23052);
    ST32(a1+52, a2);
    v1 = LD32(a0+8);
    ST8(v0+23052, a3);
    ST32(a1+56, v1);
    {vr112=BITSF(LD32(a1+(48)));}
    {vr113=BITSF(LD32(a1+(52)));}
    {vr114=BITSF(LD32(a1+(56)));}
    {vr115=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr115;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float t0=vr121;float d0=s0*t0;vr115=d0;}
    {float s0=vr115;float t0=vr122;float d0=s0*t0;vr123=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr123;float s1=vr127;float t=0;t+=s0;t+=s1;v[96]=t;}
    {float s0=vr115;float t0=vr118;float d0=s0*t0;vr123=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=vr123;float s1=vr127;float t=0;t+=s0;t+=s1;v[97]=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;v[98]=d0;}
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
    {ST32(a1+(12),FBITS(v[96]));}
    {ST32(a1+(16),FBITS(v[97]));}
    {ST32(a1+(20),FBITS(v[98]));}
    {ST32(a1+(24),FBITS(v[100]));}
    {ST32(a1+(28),FBITS(v[101]));}
    {ST32(a1+(32),FBITS(v[102]));}
    {ST32(a1+(36),FBITS(v[104]));}
    {ST32(a1+(40),FBITS(v[105]));}
    {ST32(a1+(44),FBITS(v[106]));}
    { v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[126]=vr126;v[127]=vr127;return; }
    v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[126]=vr126;v[127]=vr127;
}

/* 0881D060 */
u64 func_0881D060(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_0881D060:;
    v0 = D_08B159FC - (23036);
    a0 = LD32(v0+23036);
    v1 = 1;
    v0 = D_08B230B0 - (12464);
    ST8(v0+12464, v1);
    v0 = D_08B15A0C - (23052);
    ST32(a0+80, FBITS(f12));
    ST8(v0+23052, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0881D084 */
rv_t func_0881D084(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr8 = v[8], vr12 = v[12];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0881D084:;
    sp = sp - 80;
    v0 = D_08AEB62C - (-18900);
    {vr12=0.63661977236f;}
    s1 = D_08B159FC - (23036);
    a0 = 1;
    v1 = D_08B15A0C - (23052);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    f0 = BITSF(LD32(v0-18900));
    s0 = LD32(s1+23036);
    ST8(v1+23052, a0);
    f3 = f12 * f0;
    v0 = FBITS(f3);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr8=d0;}
    v0 = D_08B15A08 - (23048);
    f0 = BITSF(LD32(v0+23048));
    v0 = FBITS(f3);
    {vr4=BITSF(v0);}
    {float s0=vr8;float d0=cosf(s0*1.57079632679f);v[16]=d0;}
    {float s0=vr8;float d0=sinf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr4;float t0=vr12;float d0=s0*t0;vr4=d0;}
    f2 = f13 * f0;
    v0 = D_08AEB628 - (-18904);
    f20 = BITSF(LD32(v0-18904));
    ST32(s0+92, FBITS(f3));
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    {float s0=vr8;float t0=v[16];float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr4);}
    f4 = BITSF(v0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f4 = f20 / f4;
    f13 = f2;
    ST32(s0+84, FBITS(f2));
    f12 = f0;
    ST32(s0+100, v0);
    v0 = D_08B230B0 - (12464);
    ST8(v0+12464, a0);
    f2 = f20 / f2;
    ST32(s0+96, FBITS(f4));
    f1 = f20 / f0;
    ST32(s0+88, FBITS(f2));
    ST32(s0+104, FBITS(f1));
    f0 = func_08A9F5FC(f12, f13);
    goto L_0881D144;
L_0881D144:;
    ST32(s0+108, FBITS(f0));
    {u32 a_=sp+(32);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+23036);
    v1 = D_08B15A10 - (23056);
    f3 = BITSF(LD32(v1+23056));
    v0 = LD32(a0+108);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr4=d0;}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr12=d0;}
    f2 = BITSF(LD32(a0+104));
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    f2 = f20 / f2;
    {float s0=vr12;float d0=cosf(s0*1.57079632679f);vr12=d0;}
    {v0=FBITS(vr12);}
    f4 = BITSF(v0);
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    ST32(a0+116, v0);
    f0 = f20 / f1;
    f20 = f20 / f4;
    ST32(a0+120, FBITS(f0));
    f3 = f3 * f2;
    ST32(a0+112, FBITS(f20));
    ST32(a0+124, FBITS(f3));
    sp = sp + 80;
    { v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;
}

/* 0881D1D0 */
rv_t func_0881D1D0(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4], vr8 = v[8], vr12 = v[12];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0881D1D0:;
    sp = sp - 80;
    v0 = D_08AEB634 - (-18892);
    {vr12=0.63661977236f;}
    s1 = D_08B159FC - (23036);
    a0 = 1;
    v1 = D_08B15A0C - (23052);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    f0 = BITSF(LD32(v0-18892));
    s0 = LD32(s1+23036);
    ST8(v1+23052, a0);
    f2 = f12 * f0;
    v0 = FBITS(f2);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr8=d0;}
    v0 = D_08B15A08 - (23048);
    f0 = BITSF(LD32(v0+23048));
    v0 = FBITS(f2);
    {vr4=BITSF(v0);}
    {float s0=vr8;float d0=cosf(s0*1.57079632679f);v[16]=d0;}
    {float s0=vr8;float d0=sinf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr4;float t0=vr12;float d0=s0*t0;vr4=d0;}
    f13 = f13 * f0;
    v0 = D_08AEB630 - (-18896);
    f20 = BITSF(LD32(v0-18896));
    ST32(s0+108, FBITS(f2));
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    {float s0=vr8;float t0=v[16];float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr4);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f4 = f20 / f13;
    ST32(s0+84, FBITS(f13));
    f12 = f0;
    ST32(s0+116, v0);
    v0 = D_08B230B0 - (12464);
    ST8(v0+12464, a0);
    f3 = f20 / f3;
    ST32(s0+88, FBITS(f4));
    f13 = f4;
    f1 = f20 / f0;
    ST32(s0+112, FBITS(f3));
    ST32(s0+120, FBITS(f1));
    f0 = func_08A9F5FC(f12, f13);
    goto L_0881D290;
L_0881D290:;
    ST32(s0+92, FBITS(f0));
    {u32 a_=sp+(32);vr12=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(s1+23036);
    v1 = D_08B15A10 - (23056);
    f3 = BITSF(LD32(v1+23056));
    v0 = LD32(a0+92);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr4=d0;}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=vr12;float d0=s0*t0;vr12=d0;}
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {float s0=vr12;float d0=cosf(s0*1.57079632679f);vr12=d0;}
    {v0=FBITS(vr12);}
    f0 = BITSF(v0);
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f2 = f20 / f0;
    ST32(a0+100, v0);
    f0 = f20 / f1;
    ST32(a0+96, FBITS(f2));
    f20 = f20 / f0;
    ST32(a0+104, FBITS(f0));
    f3 = f3 * f20;
    ST32(a0+124, FBITS(f3));
    sp = sp + 80;
    { v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[4]=vr4;v[8]=vr8;v[12]=vr12;
}

/* 0881D318 */
void func_0881D318(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
L_0881D318:;
    v0 = D_08B159FC - (23036);
    a1 = LD32(v0+23036);
    v1 = LD32(a0);
    a3 = 1;
    v0 = D_08B230B0 - (12464);
    ST32(a1+60, v1);
    a2 = LD32(a0+4);
    ST8(v0+12464, a3);
    v0 = D_08B15A0C - (23052);
    ST32(a1+64, a2);
    v1 = LD32(a0+8);
    ST8(v0+23052, a3);
    ST32(a1+68, v1);
    v0 = LD32(a0+12);
    ST32(a1+72, v0);
    return;
}

/* 0881D358 */
rv_t func_0881D358(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881D358:;
    sp = sp - 16;
    v0 = D_08AEB640 - (-18880);
    f1 = BITSF(0);
    s0 = D_08B159FC - (23036);
    a0 = 1;
    v1 = LD32(s0+23036);
    f0 = BITSF(LD32(v0-18880));
    v0 = D_08AEB644 - (-18876);
    ST32(v1+68, FBITS(f1));
    f13 = f0;
    f12 = BITSF(LD32(v0-18876));
    ST32(v1+64, FBITS(f0));
    v0 = D_08B230B0 - (12464);
    ST32(v1+60, FBITS(f0));
    ST32(v1+72, FBITS(f1));
    v1 = D_08B15A0C - (23052);
    ST8(v0+12464, a0);
    ST8(v1+23052, a0);
    { rv_t r_ = func_0881D1D0(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D3AC;
L_0881D3AC:;
    v0 = LD32(s0+23036);
    ST32(v0+128, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881D3C4 */
u64 func_0881D3C4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0881D3C4:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    ST32(v1+128, a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0881D3D4 */
rv_t func_0881D3D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881D3D4:;
    t1 = D_08B159FC - (23036);
    t0 = LD32(t1+23036);
    f3 = BITSF(LD32(a0));
    f4 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f5 = BITSF(LD32(a0+8));
    f3 = f3 - f0;
    f4 = f4 - f1;
    f5 = f5 - f2;
    sp = sp - 48;
    ST32(sp+16, FBITS(f3));
    a3 = a0 + 0;
    a0 = t0 + 12;
    ST32(sp+24, FBITS(f5));
    {float s0=vr100;float s1=vr101;float s2=vr102;float s3=vr103;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+20, FBITS(f4));
    {float s0=vr100;float s1=vr101;float s2=vr102;float s3=vr103;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    f1 = BITSF(0);
    v0 = LD32(t0+12);
    v1 = LD32(a0+4);
    a2 = LD32(a0+32);
    {v[96]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[97]=BITSF(v1);}
    v1 = LD32(a0+12);
    {v[98]=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = LD32(a0+16);
    v1 = LD32(a0+20);
    {vr1=BITSF(v0);}
    v0 = LD32(a0+24);
    {vr2=BITSF(v1);}
    v1 = LD32(a0+28);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float s3=vr103;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a2);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    v0 = FBITS(f3);
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr16=BITSF(v0);}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f4);
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {vr17=BITSF(v0);}
    v0 = FBITS(f5);
    {vr18=BITSF(v0);}
    {float t0=vr16;float t1=vr17;float t2=vr18;float o0=0;o0+=vr0*t0;o0+=v[4]*t1;o0+=v[8]*t2;float o1=0;o1+=vr1*t0;o1+=v[5]*t1;o1+=v[9]*t2;float o2=0;o2+=vr2*t0;o2+=v[6]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f0 = BITSF(v0);
    f2 = BITSF(v0);
    {v0=FBITS(v[20]);}
    fcc = FCMP(f0, f1, 2);
    f3 = BITSF(v0);
    ST32(sp+40, FBITS(f2));
    {v0=FBITS(v[21]);}
    a1 = a1 & 0xff;
    ST32(a3+4, v0);
    ST32(sp+32, FBITS(f3));
    ST32(sp, FBITS(f3));
    ST32(sp+8, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+4, v0);
    ST32(a3, FBITS(f3));
    cnd_ = fcc;
    ST32(a3+8, FBITS(f2));
    if (cnd_) { goto L_0881D61C; }
    goto L_0881D4EC;
L_0881D4EC:;
    v0 = D_08AEB64C - (-18868);
    v1 = D_08B2C1C0 - (-15936);
    f4 = BITSF(LD32(v0-18868));
    v0 = LD_U8(v1-15936);
    cnd_ = v0 == 0;
    f5 = f4 / f2;
    if (cnd_) { goto L_0881D50C; }
    goto L_0881D504;
L_0881D504:;
    f0 = BITSF(FBITS(f3) ^ 0x80000000u);
    ST32(a3, FBITS(f0));
    goto L_0881D50C;
L_0881D50C:;
    f2 = BITSF(LD32(t0+104));
    f0 = BITSF(LD32(a3));
    f1 = BITSF(LD32(a3+4));
    f0 = f0 * f2;
    f0 = f0 * f5;
    f0 = f0 + f4;
    ST32(a3, FBITS(f0));
    f2 = BITSF(LD32(t0+104));
    f0 = BITSF(LD32(t0+84));
    f1 = f1 * f2;
    f1 = f1 * f0;
    f1 = f1 * f5;
    f1 = f1 + f4;
    ST32(a3+4, FBITS(f1));
    goto L_0881D544;
L_0881D544:;
    f2 = BITSF(LD32(a3));
    f1 = BITSF(0);
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_0881D598; }
    goto L_0881D55C;
L_0881D55C:;
    v0 = D_08AEB648 - (-18872);
    f3 = BITSF(LD32(v0-18872));
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0881D598; }
    goto L_0881D574;
L_0881D574:;
    f0 = BITSF(LD32(a3+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0881D598; }
    goto L_0881D588;
L_0881D588:;
    fcc = FCMP(f0, f3, 14);
    cnd_ = fcc;
    if (cnd_) { a2 = 1; goto L_0881D598; }
    goto L_0881D598;
L_0881D598:;
    cnd_ = a1 == 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_0881D614; }
    goto L_0881D5A0;
L_0881D5A0:;
    v1 = LD32(t1+23036);
    v0 = D_08B306F0 - (1776);
    f1 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+60));
    f3 = BITSF(LD32(v1+68));
    f4 = (float)(s32)FBITS(f1);
    f0 = f2 * f0;
    v0 = D_08B306EC - (1772);
    f1 = BITSF(LD32(v0+1772));
    a0 = D_08B2C218 - (-15848);
    f0 = f0 + f3;
    f3 = (float)(s32)FBITS(f1);
    f2 = BITSF(LD32(a3+4));
    a1 = a0 - 15848;
    f0 = f0 * f4;
    ST32(a3, FBITS(f0));
    f1 = BITSF(LD32(a0-15848));
    f0 = f0 + f1;
    ST32(a3, FBITS(f0));
    f1 = BITSF(LD32(v1+64));
    f0 = BITSF(LD32(v1+72));
    f2 = f2 * f1;
    f2 = f2 + f0;
    f2 = f2 * f3;
    ST32(a3+4, FBITS(f2));
    f0 = BITSF(LD32(a1+4));
    f2 = f2 + f0;
    ST32(a3+4, FBITS(f2));
    v0 = a2 + 0;
    goto L_0881D614;
L_0881D614:;
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[16]=vr16;v[17]=vr17;v[18]=vr18;return (rv_t){ v0, v1, f0 }; }
L_0881D61C:;
    v0 = D_08AEB64C - (-18868);
    f0 = BITSF(LD32(v0-18868));
    ST32(a3+4, FBITS(f0));
    ST32(a3, FBITS(f0));
    goto L_0881D544;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[16]=vr16;v[17]=vr17;v[18]=vr18;
}

/* 0881D630 */
rv_t func_0881D630(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_0881D630:;
    sp = sp - 224;
    s4 = a0 ^ 0x1;
    v1 = s4 < 0x1u;
    s3 = a1 ^ 0xffff;
    v0 = s3 < 0x1u;
    v0 = v0 & v1;
    s5 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0881D78C; }
    goto L_0881D674;
L_0881D674:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[80]=m00;v[81]=m01;v[82]=m02;v[83]=m03;v[84]=m10;v[85]=m11;v[86]=m12;v[87]=m13;v[88]=m20;v[89]=m21;v[90]=m22;v[91]=m23;v[92]=m30;v[93]=m31;v[94]=m32;v[95]=m33;}
    v0 = D_08B22E88 - (11912);
    s0 = v0 + 11912;
    s2 = 3;
    s1 = sp + 48;
    s7 = 1;
    s6 = (u32)-1;
    goto L_0881D690;
L_0881D690:;
    {v1=FBITS(v[90]);}
    {a0=FBITS(v[82]);}
    f7 = BITSF(v1);
    f8 = BITSF(a0);
    {v1=FBITS(v[86]);}
    {a0=FBITS(v[80]);}
    f9 = BITSF(v1);
    f6 = BITSF(a0);
    {a0=FBITS(v[81]);}
    f4 = BITSF(a0);
    {a0=FBITS(v[84]);}
    f5 = BITSF(a0);
    {a0=FBITS(v[85]);}
    f2 = BITSF(a0);
    {a0=FBITS(v[88]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[89]);}
    f1 = BITSF(a0);
    v0 = s0 + 12;
    v1 = s0 + 48;
    a0 = s0 + 0;
    s2 = s2 - 1;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    ST32(sp, FBITS(f6));
    {u32 a_=s1+(16);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    ST32(sp+4, FBITS(f4));
    {u32 a_=s1+(32);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=s1+(48);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(sp+8, FBITS(f8));
    ST32(sp+12, FBITS(f5));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f9));
    ST32(sp+24, FBITS(f3));
    ST32(sp+28, FBITS(f1));
    ST32(sp+32, FBITS(f7));
    ST32(s0+12, FBITS(f6));
    ST32(s0+128, 0);
    ST8(s0+132, s7);
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    ST32(s0, 0);
    ST32(v0+32, FBITS(f7));
    ST32(v0+4, FBITS(f4));
    ST32(v0+8, FBITS(f8));
    ST32(v0+12, FBITS(f5));
    ST32(v0+16, FBITS(f2));
    ST32(v0+20, FBITS(f9));
    ST32(v0+24, FBITS(f3));
    ST32(v0+28, FBITS(f1));
    ST32(v1+4, 0);
    ST32(s0+48, 0);
    s0 = s0 + 136;
    ST32(v1+8, 0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    f0 = func_088F5900(a0);
    goto L_0881D778;
L_0881D778:;
    {u32 a_=sp+(112);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = s2 != s6;
    {u32 a_=sp+(160);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0881D690; }
    goto L_0881D78C;
L_0881D78C:;
    s0 = s3 < 0x1u;
    v0 = s4 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = D_08B230AC - (12460);
    if (cnd_) { goto L_0881D7EC; }
    goto L_0881D7A0;
L_0881D7A0:;
    v0 = s5 < 0x1u;
    goto L_0881D7A4;
L_0881D7A4:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = D_08B230AC - (12460);
    if (cnd_) { goto L_0881D7DC; }
    goto L_0881D7B0;
L_0881D7B0:;
    goto L_0881D7B4;
L_0881D7B4:;
    sp = sp + 224;
    return (rv_t){ v0, v1, f0 };
L_0881D7DC:;
    a0 = a0 + 12460;
    { rv_t r_ = func_0881D8B4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D7E4;
L_0881D7E4:;
    goto L_0881D7B4;
L_0881D7EC:;
    a0 = a0 + 12460;
    a1 = 4;
    { rv_t r_ = func_0881D840(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D7F8;
L_0881D7F8:;
    v0 = s5 < 0x1u;
    goto L_0881D7A4;
}

/* 0881D800 */
rv_t func_0881D800(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881D800:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0881D630(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D814;
L_0881D814:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881D820 */
rv_t func_0881D820(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881D820:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0881D630(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D834;
L_0881D834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881D840 */
rv_t func_0881D840(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881D840:;
    v0 = D_08AF0E28 - (3624);
    sp = sp - 16;
    v0 = v0 + 3624;
    ST32(a0, v0);
    v0 = 1;
    s1 = a0 + 0;
    a0 = a1 << 2;
    ST32(s1+8, a1);
    ST8(s1+4, v0);
    s0 = a1 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D878;
L_0881D878:;
    ST32(s1+12, v0);
    a0 = s0 << 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881D884;
L_0881D884:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_0881D89C; }
    goto L_0881D88C;
L_0881D88C:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_0881D894;
L_0881D894:;
    cnd_ = v1 != a0;
    if (cnd_) { v1 = v1 - 1; goto L_0881D894; }
    goto L_0881D89C;
L_0881D89C:;
    ST32(s1+16, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881D8B4 */
rv_t func_0881D8B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881D8B4:;
    sp = sp - 16;
    v0 = D_08AF0E28 - (3624);
    s0 = a0 + 0;
    v0 = v0 + 3624;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881D914; }
    goto L_0881D8DC;
L_0881D8DC:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881D904; }
    goto L_0881D8E8;
L_0881D8E8:;
    v0 = 1;
    ST32(s0+8, 0);
    ST8(s0+4, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881D904:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881D90C;
L_0881D90C:;
    ST32(s0+16, 0);
    goto L_0881D8E8;
L_0881D914:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881D91C;
L_0881D91C:;
    ST32(s0+12, 0);
    goto L_0881D8DC;
}

/* 0881D924 */
rv_t func_0881D924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881D924:;
    sp = sp - 16;
    v0 = D_08AF0E28 - (3624);
    s0 = a0 + 0;
    v0 = v0 + 3624;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0881D98C; }
    goto L_0881D94C;
L_0881D94C:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881D97C; }
    goto L_0881D958;
L_0881D958:;
    v0 = 1;
    ST8(s0+4, v0);
    a0 = s0 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881D96C;
L_0881D96C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881D97C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881D984;
L_0881D984:;
    ST32(s0+16, 0);
    goto L_0881D958;
L_0881D98C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881D994;
L_0881D994:;
    ST32(s0+12, 0);
    goto L_0881D94C;
}

/* 0881D99C */
u32 func_0881D99C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881D99C:;
    sp = sp - 64;
    v0 = 24;
    s3 = a0 + 0;
    s2 = a1 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881D9E0;
L_0881D9E0:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    ST32(sp+4, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881D9F8;
L_0881D9F8:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DA04;
L_0881DA04:;
    s0 = D_08B21148 - (4424);
    v1 = LD32(s0+4424);
    a1 = LD32(sp);
    cnd_ = v1 == 0;
    t0 = s0 + 4424;
    if (cnd_) { goto L_0881DA44; }
    goto L_0881DA18;
L_0881DA18:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0881DA20;
L_0881DA20:;
    a0 = v0 + 76;
    a2 = v0 + 72;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0881DA50; }
    goto L_0881DA38;
L_0881DA38:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0881DA20; }
    goto L_0881DA44;
L_0881DA44:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0881DD8C; }
    goto L_0881DA50;
L_0881DA50:;
    cnd_ = a3 == 0;
    s1 = a3 + 0;
    if (cnd_) { goto L_0881DD64; }
    goto L_0881DA58;
L_0881DA58:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DA6C;
L_0881DA6C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DA78;
L_0881DA78:;
    v0 = LD32(sp);
    v1 = 0x6870000u;
    v1 = v1 | 0x21d7;
    v0 = v0 ^ v1;
    s4 = v0 < 0x1u;
    cnd_ = s4 == 0;
    s6 = 0 + 0;
    if (cnd_) { goto L_0881DAFC; }
    goto L_0881DA94;
L_0881DA94:;
    a0 = s2 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DAA8;
L_0881DAA8:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DAE8; }
    goto L_0881DAB4;
L_0881DAB4:;
    goto L_0881DAB8;
L_0881DAB8:;
    v0 = a0 + 0;
    sp = sp + 64;
    return v0;
L_0881DAE8:;
    a1 = LD32(sp+4);
    a0 = s0 + 4424;
    a2 = 1;
    { u64 r_ = func_08AA289C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DAF8;
L_0881DAF8:;
    s6 = v0 + 0;
    goto L_0881DAFC;
L_0881DAFC:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DB10;
L_0881DB10:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DB1C;
L_0881DB1C:;
    a0 = LD32(sp);
    v0 = func_08816A28(a0);
    goto L_0881DB24;
L_0881DB24:;
    v1 = LD32(s1+56);
    s5 = v0 + 0;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    v0 = s5 < 0xcu;
    if (cnd_) { goto L_0881DB80; }
    goto L_0881DB38;
L_0881DB38:;
    cnd_ = v0 == 0;
    v0 = s5 << 2;
    if (cnd_) { goto L_0881DB80; }
    goto L_0881DB40;
L_0881DB40:;
    v0 = v0 + s1;
    a1 = LD32(v0+4);
    cnd_ = a1 == 0;
    v0 = s5 < v1;
    if (cnd_) { goto L_0881DB80; }
    goto L_0881DB50;
L_0881DB50:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DB58;
L_0881DB58:;
    a0 = LD32(s1+60);
    cnd_ = a0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DB64;
L_0881DB64:;
    v1 = LD32(s1+64);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DB70;
L_0881DB70:;
    v0 = LD32(a1);
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0881DAB8; }
    goto L_0881DB80;
L_0881DB80:;
    cnd_ = s4 == 0;
    a0 = LD32(s1+60);
    if (cnd_) { goto L_0881DC68; }
    goto L_0881DB88;
L_0881DB88:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_0881DC68; }
    goto L_0881DB90;
L_0881DB90:;
    a1 = LD32(s6+60);
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 0 + 0; goto L_0881DAB4; }
    goto L_0881DBA0;
L_0881DBA0:;
    v1 = LD32(s1+64);
    t1 = LD32(s6+64);
    v0 = v1 < t1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s6+56); goto L_0881DBBC; }
    goto L_0881DBB4;
L_0881DBB4:;
    a0 = 0 + 0;
    goto L_0881DAB4;
L_0881DBBC:;
    v0 = s5 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0881DC68; }
    goto L_0881DBC8;
L_0881DBC8:;
    cnd_ = a1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0881DC68; }
    goto L_0881DBD0;
L_0881DBD0:;
    v0 = s5 << 2;
    ST32(sp+8, v0);
    goto L_0881DBD8;
L_0881DBD8:;
    cnd_ = t1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881DC54; }
    goto L_0881DBE0;
L_0881DBE0:;
    v0 = LD32(sp+8);
    fp = s4 << 2;
    s7 = v0 + s6;
    goto L_0881DBEC;
L_0881DBEC:;
    v0 = LD32(s6+56);
    t0 = s0 + 0;
    a0 = s1 + 0;
    v0 = s5 < v0;
    a2 = s5 + 0;
    a3 = s4 + 0;
    cnd_ = v0 == 0;
    a1 = 3507;
    if (cnd_) { goto L_0881DC38; }
    goto L_0881DC0C;
L_0881DC0C:;
    v0 = LD32(s6+60);
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    t1 = s0 < t1;
    if (cnd_) { goto L_0881DC38; }
    goto L_0881DC1C;
L_0881DC1C:;
    cnd_ = t1 == 0;
    t2 = s0 << 2;
    if (cnd_) { goto L_0881DC38; }
    goto L_0881DC24;
L_0881DC24:;
    v0 = LD32(s7+4);
    v0 = fp + v0;
    v1 = LD32(v0);
    v1 = t2 + v1;
    a1 = LD32(v1);
    goto L_0881DC38;
L_0881DC38:;
    s0 = s0 + 1;
    func_08AA3BFC(a0, a1, a2, a3, t0);
    goto L_0881DC40;
L_0881DC40:;
    v0 = LD32(s6+64);
    v1 = s0 < v0;
    cnd_ = v1 != 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_0881DBEC; }
    goto L_0881DC50;
L_0881DC50:;
    a1 = LD32(s6+60);
    goto L_0881DC54;
L_0881DC54:;
    s4 = s4 + 1;
    v0 = s4 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881DBD8; }
    goto L_0881DC64;
L_0881DC64:;
    a0 = LD32(s1+60);
    goto L_0881DC68;
L_0881DC68:;
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0881DCEC; }
    goto L_0881DC70;
L_0881DC70:;
    v1 = LD32(s1+64);
    goto L_0881DC74;
L_0881DC74:;
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881DCDC; }
    goto L_0881DC7C;
L_0881DC7C:;
    s6 = 48;
    a0 = s2 + 0;
    goto L_0881DC84;
L_0881DC84:;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DC94;
L_0881DC94:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+64); goto L_0881DCC8; }
    goto L_0881DCA0;
L_0881DCA0:;
    v0 = LD32(sp);
    t0 = s0 + 0;
    a0 = s1 + 0;
    a2 = s5 + 0;
    a1 = v0 + 0;
    cnd_ = v0 == s6;
    a3 = s4 + 0;
    if (cnd_) { goto L_0881DCC4; }
    goto L_0881DCBC;
L_0881DCBC:;
    func_08AA3BFC(a0, a1, a2, a3, t0);
    goto L_0881DCC4;
L_0881DCC4:;
    v1 = LD32(s1+64);
    goto L_0881DCC8;
L_0881DCC8:;
    s0 = s0 + 1;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0881DC84; }
    goto L_0881DCD8;
L_0881DCD8:;
    a0 = LD32(s1+60);
    goto L_0881DCDC;
L_0881DCDC:;
    s4 = s4 + 1;
    v0 = s4 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881DC74; }
    goto L_0881DCEC;
L_0881DCEC:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 5;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_0881DAB4; }
    goto L_0881DCFC;
L_0881DCFC:;
    v0 = LD32(s3+12);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0881DD14; }
    goto L_0881DD0C;
L_0881DD0C:;
    goto L_0881DAB8;
L_0881DD14:;
    a1 = s5 + 0;
    v0 = func_08AA3D78(a0, a1);
    goto L_0881DD1C;
L_0881DD1C:;
    s0 = LD32(s3+16);
    v1 = LD32(s3+20);
    a0 = s2 + 0;
    a1 = v0 + 0;
    { s64 p_ = (s64)(s32)s0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = lo;
    a2 = lo;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DD40;
L_0881DD40:;
    a0 = s0 & 0x3;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = 1; goto L_0881DAB4; }
    goto L_0881DD4C;
L_0881DD4C:;
    a1 = 4;
    a1 = a1 - a0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DD5C;
L_0881DD5C:;
    a0 = 1;
    goto L_0881DAB4;
L_0881DD64:;
    a2 = LD32(s3+16);
    a3 = LD32(s3+20);
    a1 = LD32(sp);
    a0 = s0 + 4424;
    v0 = func_088168E4(a0, a1, a2, a3, 0, 0, 0);
    goto L_0881DD78;
L_0881DD78:;
    s1 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0881DA58; }
    goto L_0881DD84;
L_0881DD84:;
    goto L_0881DAB8;
L_0881DD8C:;
    a2 = 1;
    { u64 r_ = func_08AA289C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DD94;
L_0881DD94:;
    a3 = v0 + 0;
    goto L_0881DA50;
}

/* 0881DD9C */
u32 func_0881DD9C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881DD9C:;
    sp = sp - 64;
    s1 = a1 + 0;
    a1 = sp + 0;
    s5 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DDD0;
L_0881DDD0:;
    a0 = s1 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DDDC;
L_0881DDDC:;
    a0 = s1 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DDE8;
L_0881DDE8:;
    a0 = s1 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DDF4;
L_0881DDF4:;
    v1 = D_08B21148 - (4424);
    a1 = LD32(sp);
    s0 = v1 + 4424;
    a0 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08AA289C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DE0C;
L_0881DE0C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0881DE60; }
    goto L_0881DE14;
L_0881DE14:;
    v1 = LD32(v0+60);
    v0 = LD32(sp+8);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s2+64); goto L_0881DE50; }
    goto L_0881DE24;
L_0881DE24:;
    v1 = 0 + 0;
    goto L_0881DE28;
L_0881DE28:;
    goto L_0881DE2C;
L_0881DE2C:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_0881DE50:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881DE28; }
    goto L_0881DE58;
L_0881DE58:;
    goto L_0881DE2C;
L_0881DE60:;
    a2 = LD32(sp+8);
    a1 = LD32(sp);
    a3 = LD32(sp+12);
    a0 = s0 + 0;
    v0 = func_088168E4(a0, a1, a2, a3, 0, 0, 0);
    goto L_0881DE74;
L_0881DE74:;
    a2 = LD32(sp+4);
    cnd_ = a2 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_0881DE24; }
    goto L_0881DE80;
L_0881DE80:;
    a3 = LD32(sp+8);
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0881DE28; }
    goto L_0881DE8C;
L_0881DE8C:;
    t0 = LD32(sp+12);
    cnd_ = t0 == 0;
    if (cnd_) { goto L_0881DE2C; }
    goto L_0881DE98;
L_0881DE98:;
    a2 = a2 - 1;
    a3 = a3 - 1;
    t0 = t0 - 1;
    a0 = v0 + 0;
    a1 = 0 + 0;
    func_08AA3BFC(a0, a1, a2, a3, t0);
    goto L_0881DEB0;
L_0881DEB0:;
    v1 = LD32(sp+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0881DEF8; }
    goto L_0881DEBC;
L_0881DEBC:;
    a0 = LD32(sp+8);
    goto L_0881DEC0;
L_0881DEC0:;
    cnd_ = a0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0881DEE8; }
    goto L_0881DEC8;
L_0881DEC8:;
    v1 = LD32(sp+12);
    goto L_0881DECC;
L_0881DECC:;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881DFF0; }
    goto L_0881DED4;
L_0881DED4:;
    s3 = s3 + 1;
    v0 = s3 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881DECC; }
    goto L_0881DEE4;
L_0881DEE4:;
    v1 = LD32(sp+4);
    goto L_0881DEE8;
L_0881DEE8:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881DEC0; }
    goto L_0881DEF8;
L_0881DEF8:;
    v0 = LD32(s5+8);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v1 = 1; goto L_0881DE28; }
    goto L_0881DF04;
L_0881DF04:;
    v0 = LD32(s5+12);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0881DE28; }
    goto L_0881DF14;
L_0881DF14:;
    cnd_ = v1 == 0;
    v1 = 1;
    if (cnd_) { goto L_0881DE28; }
    goto L_0881DF1C;
L_0881DF1C:;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DF24;
L_0881DF24:;
    a1 = LD32(s2+56);
    a0 = s2 + 52;
    s0 = 0 + 0;
    func_08AA3B78(a0, a1, 0, 0, 0);
    goto L_0881DF34;
L_0881DF34:;
    v1 = LD32(s2+56);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s2+60); goto L_0881DFB8; }
    goto L_0881DF40;
L_0881DF40:;
    s0 = 0 + 0;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881DF48;
L_0881DF48:;
    v0 = LD32(sp+4);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_0881DF70; }
    goto L_0881DF54;
L_0881DF54:;
    a1 = LD32(s1+20);
    goto L_0881DF58;
L_0881DF58:;
    a0 = s1 + 0;
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DF68;
L_0881DF68:;
    v1 = 1;
    goto L_0881DE28;
L_0881DF70:;
    a0 = s2 + 0;
    v0 = func_08AA3D78(a0, a1);
    goto L_0881DF78;
L_0881DF78:;
    a2 = v0 + 0;
    a1 = LD32(sp+8);
    v0 = LD32(sp+12);
    v1 = LD32(s1);
    a0 = s1 + 0;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(v1+8);
    a1 = lo;
    t_ = v0;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DFA0;
L_0881DFA0:;
    v1 = LD32(sp+4);
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_0881DF70; }
    goto L_0881DFB0;
L_0881DFB0:;
    a1 = LD32(s1+20);
    goto L_0881DF58;
L_0881DFB8:;
    v1 = LD32(s2+64);
    a0 = LD32(s2+52);
    v0 = s0 << 2;
    { s64 p_ = (s64)(s32)a1 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 + v0;
    a1 = lo;
    s0 = s0 + 1;
    func_08AA3BBC(a0, a1, 0, 0, 0);
    goto L_0881DFD8;
L_0881DFD8:;
    v1 = LD32(s2+56);
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s2+60); goto L_0881DFB8; }
    goto L_0881DFE8;
L_0881DFE8:;
    goto L_0881DF40;
L_0881DFF0:;
    a0 = s1 + 0;
    goto L_0881DFF4;
L_0881DFF4:;
    a1 = sp + 16;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881DFFC;
L_0881DFFC:;
    a1 = LD32(sp+16);
    t0 = s0 + 0;
    a0 = s2 + 0;
    a2 = s4 + 0;
    a3 = s3 + 0;
    func_08AA3BFC(a0, a1, a2, a3, t0);
    goto L_0881E014;
L_0881E014:;
    v1 = LD32(sp+12);
    s0 = s0 + 1;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0881DFF4; }
    goto L_0881E028;
L_0881E028:;
    a0 = LD32(sp+8);
    goto L_0881DED4;
}

/* 0881E030 */
u32 func_0881E030(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881E030:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0881DD9C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0881E070;
L_0881E070:;
    sp = sp + 48;
    return v0;
}

/* 0881E07C */
u32 func_0881E07C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881E07C:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0881E0C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0881E0BC;
L_0881E0BC:;
    sp = sp + 48;
    return v0;
}

/* 0881E0C8 */
u32 func_0881E0C8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881E0C8:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_0881E0F0; }
    goto L_0881E0E0;
L_0881E0E0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0881E0F0:;
    func_0881C718(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0881E0F8;
L_0881E0F8:;
    v1 = 1;
    goto L_0881E0E0;
}

/* 0881E100 */
u32 func_0881E100(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881E100:;
    sp = sp - 32;
    s6 = D_08B459C4 - (22980);
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+16);
    a0 = s6 + 22980;
    a1 = v0 + 0;
    v0 = func_088F2064(a0, a1);
    goto L_0881E140;
L_0881E140:;
    s4 = v0 + 0;
    v0 = LD32(s2+8);
    cnd_ = (s32)v0 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0881E158; }
    goto L_0881E150;
L_0881E150:;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E158;
L_0881E158:;
    v0 = LD32(s2+16);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0881E28C; }
    goto L_0881E164;
L_0881E164:;
    s5 = (u32)-1;
    a1 = s3 + s4;
    goto L_0881E16C;
L_0881E16C:;
    a0 = s6 + 22980;
    v0 = func_088F222C(a0, a1);
    goto L_0881E174;
L_0881E174:;
    s0 = v0 + 0;
    v0 = LD32(s2+8);
    s3 = s3 + 1;
    a0 = s1 + 0;
    cnd_ = (s32)v0 <= 0;
    a1 = 12;
    if (cnd_) { goto L_0881E198; }
    goto L_0881E18C;
L_0881E18C:;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E194;
L_0881E194:;
    a0 = s1 + 0;
    goto L_0881E198;
L_0881E198:;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E1A8;
L_0881E1A8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E1BC;
L_0881E1BC:;
    a1 = s0 + 8;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E1D0;
L_0881E1D0:;
    a1 = s0 + 12;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E1E4;
L_0881E1E4:;
    a1 = s0 + 16;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E1F8;
L_0881E1F8:;
    a1 = s0 + 20;
    a0 = s1 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E20C;
L_0881E20C:;
    a1 = s0 + 32;
    a0 = s1 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E220;
L_0881E220:;
    a1 = s0 + 44;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E234;
L_0881E234:;
    v1 = LD32(s2+8);
    a0 = s1 + 0;
    a1 = 0 + 0;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0881E2C8; }
    goto L_0881E24C;
L_0881E24C:;
    v0 = (s32)v1 < 3;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = 4;
    if (cnd_) { goto L_0881E2B8; }
    goto L_0881E25C;
L_0881E25C:;
    v0 = LD32(s0+16);
    goto L_0881E260;
L_0881E260:;
    cnd_ = v0 == s5;
    a0 = v0 + 0;
    if (cnd_) { goto L_0881E274; }
    goto L_0881E268;
L_0881E268:;
    { u64 r_ = func_0883A208(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E270;
L_0881E270:;
    ST32(s0+16, v0);
    goto L_0881E274;
L_0881E274:;
    a0 = s0 + 0;
    func_088F234C(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881E27C;
L_0881E27C:;
    v0 = LD32(s2+16);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = s3 + s4;
    if (cnd_) { goto L_0881E16C; }
    goto L_0881E28C;
L_0881E28C:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_0881E2B8:;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E2C0;
L_0881E2C0:;
    v0 = LD32(s0+16);
    goto L_0881E260;
L_0881E2C8:;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E2D0;
L_0881E2D0:;
    v1 = LD32(s2+8);
    goto L_0881E24C;
}

/* 0881E2D8 */
u32 func_0881E2D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881E2D8:;
    sp = sp - 64;
    s1 = a1 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    s2 = a0 + 0;
    a0 = s1 + 0;
    s3 = D_08B28B64 - (-29852);
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E30C;
L_0881E30C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E318;
L_0881E318:;
    a1 = v0 + 0;
    a0 = s3 - 29852;
    { u64 r_ = func_08846498(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E324;
L_0881E324:;
    cnd_ = v0 == 0;
    v0 = D_08B230C0 - (12480);
    if (cnd_) { goto L_0881E354; }
    goto L_0881E32C;
L_0881E32C:;
    v1 = 0 + 0;
    ST32(v0+12480, 0);
    goto L_0881E334;
L_0881E334:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_0881E354:;
    v1 = LD32(s2+8);
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_0881E478; }
    goto L_0881E364;
L_0881E364:;
    v0 = (s32)v1 < 6;
    cnd_ = v0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0881E45C; }
    goto L_0881E370;
L_0881E370:;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(sp, 0); goto L_0881E39C; }
    goto L_0881E378;
L_0881E378:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E380;
L_0881E380:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881E394;
L_0881E394:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0881E448; }
    goto L_0881E39C;
L_0881E39C:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    a0 = LD32(sp+16);
    goto L_0881E3A8;
L_0881E3A8:;
    a1 = sp + 0;
    v0 = func_0883D434(a0, a1, 0, 0, 0);
    goto L_0881E3B0;
L_0881E3B0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0881E41C; }
    goto L_0881E3B8;
L_0881E3B8:;
    a0 = s3 - 29852;
    a1 = v0 + 0;
    func_0884650C(a0, a1);
    goto L_0881E3C4;
L_0881E3C4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = LD32(v1+68);
    t_ = v0;
    a2 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881E3DC;
L_0881E3DC:;
    a0 = LD32(sp);
    v0 = D_08B230C0 - (12480);
    ST32(v0+12480, s0);
    v1 = D_08B230C4 - (12484);
    v0 = D_08B230C8 - (12488);
    ST32(v1+12484, 0);
    cnd_ = a0 != 0;
    ST32(v0+12488, 0);
    if (cnd_) { goto L_0881E40C; }
    goto L_0881E3FC;
L_0881E3FC:;
    ST32(sp+8, 0);
    v1 = 1;
    goto L_0881E404;
L_0881E404:;
    ST32(sp+4, 0);
    goto L_0881E334;
L_0881E40C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E414;
L_0881E414:;
    ST32(sp, 0);
    goto L_0881E3FC;
L_0881E41C:;
    a0 = LD32(sp);
    v0 = D_08B230C0 - (12480);
    cnd_ = a0 != 0;
    ST32(v0+12480, 0);
    if (cnd_) { goto L_0881E438; }
    goto L_0881E42C;
L_0881E42C:;
    v1 = 0 + 0;
    ST32(sp+8, 0);
    goto L_0881E404;
L_0881E438:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E440;
L_0881E440:;
    ST32(sp, 0);
    goto L_0881E42C;
L_0881E448:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E454;
L_0881E454:;
    a0 = LD32(sp+16);
    goto L_0881E3A8;
L_0881E45C:;
    a0 = s1 + 0;
    a1 = sp + 20;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E470;
L_0881E470:;
    goto L_0881E370;
L_0881E478:;
    a0 = s1 + 0;
    a1 = sp + 16;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E48C;
L_0881E48C:;
    v1 = LD32(s2+8);
    goto L_0881E364;
}

/* 0881E494 */
rv_t func_0881E494(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881E494:;
    sp = sp - 48;
    s5 = a2 + 0;
    s3 = a0 + 0;
    a0 = 4;
    s6 = a1 + 0;
    s0 = s3 + 16;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E4D0;
L_0881E4D0:;
    a0 = s5 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E4E0;
L_0881E4E0:;
    a0 = LD32(s3+16);
    cnd_ = a0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0881E500; }
    goto L_0881E4EC;
L_0881E4EC:;
    cnd_ = v0 == a0;
    if (cnd_) { a0 = s5 + 0; goto L_0881E53C; }
    goto L_0881E4F4;
L_0881E4F4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E4FC;
L_0881E4FC:;
    ST32(s3+16, 0);
    goto L_0881E500;
L_0881E500:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0881E864; }
    goto L_0881E50C;
L_0881E50C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E514;
L_0881E514:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881E528;
L_0881E528:;
    cnd_ = v0 != 0;
    ST32(s3+16, v0);
    if (cnd_) { goto L_0881E850; }
    goto L_0881E530;
L_0881E530:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0881E538;
L_0881E538:;
    a0 = s5 + 0;
    goto L_0881E53C;
L_0881E53C:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E548;
L_0881E548:;
    a0 = LD32(s3+44);
    s1 = v0 + 0;
    cnd_ = a0 == 0;
    s0 = s3 + 44;
    if (cnd_) { goto L_0881E574; }
    goto L_0881E558;
L_0881E558:;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_0881E5B0; }
    goto L_0881E560;
L_0881E560:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+8, 0); goto L_0881E578; }
    goto L_0881E568;
L_0881E568:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E570;
L_0881E570:;
    ST32(s3+44, 0);
    goto L_0881E574;
L_0881E574:;
    ST32(s0+8, 0);
    goto L_0881E578;
L_0881E578:;
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0881E844; }
    goto L_0881E580;
L_0881E580:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E588;
L_0881E588:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881E59C;
L_0881E59C:;
    cnd_ = v0 != 0;
    ST32(s3+44, v0);
    if (cnd_) { goto L_0881E830; }
    goto L_0881E5A4;
L_0881E5A4:;
    ST32(s0+4, 0);
    a0 = 0 + 0;
    ST32(s0+8, 0);
    goto L_0881E5B0;
L_0881E5B0:;
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0881E5C0; }
    goto L_0881E5B8;
L_0881E5B8:;
    v0 = (u32)(s32)LD_S8(a0);
    v0 = v0 < 0x1u;
    goto L_0881E5C0;
L_0881E5C0:;
    v0 = v0 ^ 0x1;
    ST8(s3+136, v0);
    a2 = 4;
    a3 = 0 + 0;
    a1 = s3 + 68;
    a0 = s5 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E5DC;
L_0881E5DC:;
    s2 = s3 + 92;
    a0 = s3 + 80;
    a1 = s5 + 0;
    func_08AA4620(a0, a1, 0, 0, 0);
    goto L_0881E5EC;
L_0881E5EC:;
    a0 = s2 + 0;
    a1 = s5 + 0;
    func_08AA4620(a0, a1, 0, 0, 0);
    goto L_0881E5F8;
L_0881E5F8:;
    v1 = LD32(s2+4);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0881E634; }
    goto L_0881E604;
L_0881E604:;
    s4 = 1;
    s0 = 0 + 0;
    a0 = LD32(s2);
    goto L_0881E610;
L_0881E610:;
    s1 = s1 + 1;
    a0 = a0 + s0;
    v0 = LD32(a0+8);
    v0 = v0 < 0x1u;
    cnd_ = v0 != s4;
    s0 = s0 + 12;
    if (cnd_) { goto L_0881E820; }
    goto L_0881E628;
L_0881E628:;
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2); goto L_0881E610; }
    goto L_0881E634;
L_0881E634:;
    a0 = s3 + 104;
    a1 = s5 + 0;
    s2 = s3 + 116;
    func_08AA4620(a0, a1, 0, 0, 0);
    goto L_0881E644;
L_0881E644:;
    a0 = s2 + 0;
    a1 = s5 + 0;
    func_08AA4620(a0, a1, 0, 0, 0);
    goto L_0881E650;
L_0881E650:;
    v1 = LD32(s2+4);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0881E68C; }
    goto L_0881E65C;
L_0881E65C:;
    s4 = 1;
    s0 = 0 + 0;
    a0 = LD32(s2);
    goto L_0881E668;
L_0881E668:;
    s1 = s1 + 1;
    a0 = a0 + s0;
    v0 = LD32(a0+8);
    v0 = v0 < 0x1u;
    cnd_ = v0 != s4;
    s0 = s0 + 12;
    if (cnd_) { goto L_0881E810; }
    goto L_0881E680;
L_0881E680:;
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2); goto L_0881E668; }
    goto L_0881E68C;
L_0881E68C:;
    a1 = s3 + 72;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s5 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E6A0;
L_0881E6A0:;
    a0 = s5 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E6B4;
L_0881E6B4:;
    v1 = LD32(s6+8);
    v0 = LD_U16(sp);
    v1 = v1 - 10;
    v1 = v1 < 0x6u;
    cnd_ = v1 != 0;
    ST16(s3+78, v0);
    if (cnd_) { goto L_0881E7FC; }
    goto L_0881E6CC;
L_0881E6CC:;
    a1 = sp + 4;
    goto L_0881E6D0;
L_0881E6D0:;
    a0 = s5 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E6E0;
L_0881E6E0:;
    a1 = LD32(sp+4);
    cnd_ = a1 != 0;
    a1 = a1 << 2;
    if (cnd_) { goto L_0881E7EC; }
    goto L_0881E6EC;
L_0881E6EC:;
    a1 = s3 + 60;
    goto L_0881E6F0;
L_0881E6F0:;
    a0 = s5 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E700;
L_0881E700:;
    v1 = LD32(s6+8);
    v1 = (s32)v1 < 15;
    cnd_ = v1 == 0;
    a1 = s3 + 64;
    if (cnd_) { goto L_0881E7D4; }
    goto L_0881E710;
L_0881E710:;
    a1 = LD32(s6+16);
    goto L_0881E714;
L_0881E714:;
    cnd_ = a1 != 0;
    ST32(s3+28, a1);
    if (cnd_) { goto L_0881E7A4; }
    goto L_0881E71C;
L_0881E71C:;
    a1 = LD32(s6+20);
    goto L_0881E720;
L_0881E720:;
    cnd_ = a1 != 0;
    ST32(s3+36, a1);
    if (cnd_) { goto L_0881E774; }
    goto L_0881E728;
L_0881E728:;
    v0 = s6 + 24;
    goto L_0881E72C;
L_0881E72C:;
    f0 = BITSF(LD32(s6+24));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    v1 = s3 + 164;
    ST32(s3+164, FBITS(f0));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E74C;
L_0881E74C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0881E774:;
    a0 = s3 + 40;
    func_08AA3EF4(a0, a1, 0, 0, 0);
    goto L_0881E77C;
L_0881E77C:;
    v0 = LD32(s3+36);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v0 = s6 + 24; goto L_0881E72C; }
    goto L_0881E788;
L_0881E788:;
    v1 = LD32(s3+40);
    goto L_0881E78C;
L_0881E78C:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881E78C; }
    goto L_0881E79C;
L_0881E79C:;
    v0 = s6 + 24;
    goto L_0881E72C;
L_0881E7A4:;
    a0 = s3 + 32;
    func_08AA3EB0(a0, a1, 0, 0, 0);
    goto L_0881E7AC;
L_0881E7AC:;
    v0 = LD32(s3+28);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { a1 = LD32(s6+20); goto L_0881E720; }
    goto L_0881E7B8;
L_0881E7B8:;
    v1 = LD32(s3+32);
    goto L_0881E7BC;
L_0881E7BC:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881E7BC; }
    goto L_0881E7CC;
L_0881E7CC:;
    a1 = LD32(s6+20);
    goto L_0881E720;
L_0881E7D4:;
    a0 = s5 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E7E4;
L_0881E7E4:;
    a1 = LD32(s6+16);
    goto L_0881E714;
L_0881E7EC:;
    a0 = s5 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E7F4;
L_0881E7F4:;
    a1 = s3 + 60;
    goto L_0881E6F0;
L_0881E7FC:;
    a0 = s5 + 0;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E808;
L_0881E808:;
    a1 = sp + 4;
    goto L_0881E6D0;
L_0881E810:;
    func_088383C4(a0, 0, 0, 0);
    goto L_0881E818;
L_0881E818:;
    v1 = LD32(s2+4);
    goto L_0881E680;
L_0881E820:;
    func_088383C4(a0, 0, 0, 0);
    goto L_0881E828;
L_0881E828:;
    v1 = LD32(s2+4);
    goto L_0881E628;
L_0881E830:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E83C;
L_0881E83C:;
    a0 = LD32(s3+44);
    goto L_0881E5B0;
L_0881E844:;
    a0 = 0 + 0;
    ST32(s3+44, 0);
    goto L_0881E5B0;
L_0881E850:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E85C;
L_0881E85C:;
    a0 = s5 + 0;
    goto L_0881E53C;
L_0881E864:;
    ST32(s3+16, 0);
    goto L_0881E538;
}

/* 0881E86C */
rv_t func_0881E86C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881E86C:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD_U8(a0+136);
    cnd_ = v0 == 0;
    s0 = a0 + 44;
    if (cnd_) { goto L_0881E89C; }
    goto L_0881E890;
L_0881E890:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_0881E8F8; }
    goto L_0881E89C;
L_0881E89C:;
    a0 = LD32(s1+44);
    v0 = D_08AD3994 - (14740);
    cnd_ = a0 == 0;
    s2 = v0 + 14740;
    if (cnd_) { goto L_0881E8BC; }
    goto L_0881E8AC;
L_0881E8AC:;
    cnd_ = a0 == s2;
    if (cnd_) { v1 = LD32(s1+12); goto L_0881E8F8; }
    goto L_0881E8B4;
L_0881E8B4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0881EBAC; }
    goto L_0881E8BC;
L_0881E8BC:;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0881EBA4; }
    goto L_0881E8C8;
L_0881E8C8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881E8D0;
L_0881E8D0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881E8E4;
L_0881E8E4:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0881EB90; }
    goto L_0881E8EC;
L_0881E8EC:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0881E8F4;
L_0881E8F4:;
    v1 = LD32(s1+12);
    goto L_0881E8F8;
L_0881E8F8:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0881E914; }
    goto L_0881E900;
L_0881E900:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0881E914;
L_0881E914:;
    v1 = LD32(s1+24);
    v0 = v0 << 2;
    t1 = v0 + 44;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0881E93C; }
    goto L_0881E928;
L_0881E928:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0881E93C;
L_0881E93C:;
    v1 = LD32(s0+8);
    v0 = v0 << 2;
    t1 = t1 + v0;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0881E964; }
    goto L_0881E950;
L_0881E950:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0881E964;
L_0881E964:;
    a2 = LD32(s1+88);
    v0 = v0 << 2;
    t1 = t1 + v0;
    t1 = t1 + 4;
    t0 = 8;
    a3 = 0 + 0;
    cnd_ = (s32)a2 <= 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881E9EC; }
    goto L_0881E984;
L_0881E984:;
    a1 = LD32(s1+80);
    t3 = a1 + 0;
    goto L_0881E98C;
L_0881E98C:;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    t2 = 1;
    if (cnd_) { goto L_0881E9D8; }
    goto L_0881E998;
L_0881E998:;
    v1 = (s32)a3 < (s32)v1;
    t0 = t0 + 4;
    cnd_ = (s32)a3 < 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_0881E9B0; }
    goto L_0881E9A8;
L_0881E9A8:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v0+8); goto L_0881E9B8; }
    goto L_0881E9B0;
L_0881E9B0:;
    v0 = t3 + 0;
    a0 = LD32(v0+8);
    goto L_0881E9B8;
L_0881E9B8:;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0881E9D0; }
    goto L_0881E9CC;
L_0881E9CC:;
    t2 = (u32)((s32)v1 >> 2);
    goto L_0881E9D0;
L_0881E9D0:;
    v0 = t2 << 2;
    t0 = t0 + v0;
    goto L_0881E9D8;
L_0881E9D8:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)a2;
    a1 = a1 + 12;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881E98C; }
    goto L_0881E9EC;
L_0881E9EC:;
    a2 = LD32(s1+100);
    t1 = t1 + t0;
    a3 = 0 + 0;
    t0 = 8;
    cnd_ = (s32)a2 <= 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881EA6C; }
    goto L_0881EA04;
L_0881EA04:;
    a1 = LD32(s1+92);
    t3 = a1 + 0;
    goto L_0881EA0C;
L_0881EA0C:;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    t2 = 1;
    if (cnd_) { goto L_0881EA58; }
    goto L_0881EA18;
L_0881EA18:;
    v1 = (s32)a3 < (s32)v1;
    t0 = t0 + 4;
    cnd_ = (s32)a3 < 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_0881EA30; }
    goto L_0881EA28;
L_0881EA28:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v0+8); goto L_0881EA38; }
    goto L_0881EA30;
L_0881EA30:;
    v0 = t3 + 0;
    a0 = LD32(v0+8);
    goto L_0881EA38;
L_0881EA38:;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0881EA50; }
    goto L_0881EA4C;
L_0881EA4C:;
    t2 = (u32)((s32)v1 >> 2);
    goto L_0881EA50;
L_0881EA50:;
    v0 = t2 << 2;
    t0 = t0 + v0;
    goto L_0881EA58;
L_0881EA58:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)a2;
    a1 = a1 + 12;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881EA0C; }
    goto L_0881EA6C;
L_0881EA6C:;
    a2 = LD32(s1+112);
    t1 = t1 + t0;
    a3 = 0 + 0;
    t0 = 8;
    cnd_ = (s32)a2 <= 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881EAEC; }
    goto L_0881EA84;
L_0881EA84:;
    a1 = LD32(s1+104);
    t3 = a1 + 0;
    goto L_0881EA8C;
L_0881EA8C:;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    t2 = 1;
    if (cnd_) { goto L_0881EAD8; }
    goto L_0881EA98;
L_0881EA98:;
    v1 = (s32)a3 < (s32)v1;
    t0 = t0 + 4;
    cnd_ = (s32)a3 < 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_0881EAB0; }
    goto L_0881EAA8;
L_0881EAA8:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v0+8); goto L_0881EAB8; }
    goto L_0881EAB0;
L_0881EAB0:;
    v0 = t3 + 0;
    a0 = LD32(v0+8);
    goto L_0881EAB8;
L_0881EAB8:;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0881EAD0; }
    goto L_0881EACC;
L_0881EACC:;
    t2 = (u32)((s32)v1 >> 2);
    goto L_0881EAD0;
L_0881EAD0:;
    v0 = t2 << 2;
    t0 = t0 + v0;
    goto L_0881EAD8;
L_0881EAD8:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)a2;
    a1 = a1 + 12;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881EA8C; }
    goto L_0881EAEC;
L_0881EAEC:;
    a2 = LD32(s1+124);
    t1 = t1 + t0;
    a3 = 0 + 0;
    t0 = 8;
    cnd_ = (s32)a2 <= 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881EB6C; }
    goto L_0881EB04;
L_0881EB04:;
    a1 = LD32(s1+116);
    t3 = a1 + 0;
    goto L_0881EB0C;
L_0881EB0C:;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    t2 = 1;
    if (cnd_) { goto L_0881EB58; }
    goto L_0881EB18;
L_0881EB18:;
    v1 = (s32)a3 < (s32)v1;
    t0 = t0 + 4;
    cnd_ = (s32)a3 < 0;
    v0 = a1 + 0;
    if (cnd_) { goto L_0881EB30; }
    goto L_0881EB28;
L_0881EB28:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v0+8); goto L_0881EB38; }
    goto L_0881EB30;
L_0881EB30:;
    v0 = t3 + 0;
    a0 = LD32(v0+8);
    goto L_0881EB38;
L_0881EB38:;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0881EB50; }
    goto L_0881EB4C;
L_0881EB4C:;
    t2 = (u32)((s32)v1 >> 2);
    goto L_0881EB50;
L_0881EB50:;
    v0 = t2 << 2;
    t0 = t0 + v0;
    goto L_0881EB58;
L_0881EB58:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)a2;
    a1 = a1 + 12;
    cnd_ = v0 != 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_0881EB0C; }
    goto L_0881EB6C;
L_0881EB6C:;
    t1 = t1 + t0;
    t1 = t1 + 20;
    v0 = t1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881EB90:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881EB9C;
L_0881EB9C:;
    v1 = LD32(s1+12);
    goto L_0881E8F8;
L_0881EBA4:;
    ST32(s0, 0);
    goto L_0881E8F4;
L_0881EBAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881EBB4;
L_0881EBB4:;
    ST32(s1+44, 0);
    goto L_0881E8BC;
}

/* 0881EBBC */
rv_t func_0881EBBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881EBBC:;
    sp = sp - 64;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 4;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s1 = LD32(s0);
    if (cnd_) { goto L_0881EF40; }
    goto L_0881EBEC;
L_0881EBEC:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_0881EC0C; }
    goto L_0881EBF8;
L_0881EBF8:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_0881EC0C;
L_0881EC0C:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_0881EC28; }
    goto L_0881EC14;
L_0881EC14:;
    v0 = s3 + 0;
    goto L_0881EC18;
L_0881EC18:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881EC18; }
    goto L_0881EC28;
L_0881EC28:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881EC34;
L_0881EC34:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_0881EC3C;
L_0881EC3C:;
    v1 = LD32(s2);
    ST32(s0, s1);
    v0 = LD32(v1+60);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EC50;
L_0881EC50:;
    ST32(sp, v0);
    a2 = sp + 0;
    a1 = 0 + 0;
    goto L_0881EC5C;
L_0881EC5C:;
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
    if (cnd_) { goto L_0881EC5C; }
    goto L_0881EC84;
L_0881EC84:;
    v0 = LD_U8(s2+76);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0881EC94;
L_0881EC94:;
    v1 = LD_U8(a2);
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v0, v1);
    a2 = a2 + 1;
    v1 = LD32(s0);
    a3 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s0, a3);
    if (cnd_) { goto L_0881EC94; }
    goto L_0881ECBC;
L_0881ECBC:;
    v0 = LD32(s2+16);
    a1 = s2 + 16;
    cnd_ = v0 == 0;
    s1 = a3 + 0;
    if (cnd_) { goto L_0881EF2C; }
    goto L_0881ECCC;
L_0881ECCC:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_0881ECEC; }
    goto L_0881ECD8;
L_0881ECD8:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_0881ECEC;
L_0881ECEC:;
    cnd_ = (s32)s3 <= 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_0881ED08; }
    goto L_0881ECF4;
L_0881ECF4:;
    v0 = s3 + 0;
    goto L_0881ECF8;
L_0881ECF8:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881ECF8; }
    goto L_0881ED08;
L_0881ED08:;
    a1 = LD32(a1);
    a0 = a3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881ED14;
L_0881ED14:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_0881ED1C;
L_0881ED1C:;
    ST32(s0, s1);
    v0 = LD32(s2+44);
    cnd_ = v0 == 0;
    a1 = s2 + 44;
    if (cnd_) { goto L_0881EF18; }
    goto L_0881ED2C;
L_0881ED2C:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_0881ED4C; }
    goto L_0881ED38;
L_0881ED38:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_0881ED4C;
L_0881ED4C:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_0881ED68; }
    goto L_0881ED54;
L_0881ED54:;
    v0 = s3 + 0;
    goto L_0881ED58;
L_0881ED58:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881ED58; }
    goto L_0881ED68;
L_0881ED68:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881ED74;
L_0881ED74:;
    v1 = s3 << 2;
    v1 = s1 + v1;
    goto L_0881ED7C;
L_0881ED7C:;
    f0 = BITSF(LD32(s2+68));
    ST32(s0, v1);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_0881ED90;
L_0881ED90:;
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
    if (cnd_) { goto L_0881ED90; }
    goto L_0881EDB8;
L_0881EDB8:;
    a0 = s2 + 80;
    a1 = s0 + 0;
    func_08AA4314(a0, a1);
    goto L_0881EDC4;
L_0881EDC4:;
    a0 = s2 + 92;
    a1 = s0 + 0;
    func_08AA4314(a0, a1);
    goto L_0881EDD0;
L_0881EDD0:;
    a0 = s2 + 104;
    a1 = s0 + 0;
    func_08AA4314(a0, a1);
    goto L_0881EDDC;
L_0881EDDC:;
    a1 = s0 + 0;
    a0 = s2 + 116;
    func_08AA4314(a0, a1);
    goto L_0881EDE8;
L_0881EDE8:;
    v0 = LD32(s2+72);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_0881EDF8;
L_0881EDF8:;
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
    if (cnd_) { goto L_0881EDF8; }
    goto L_0881EE20;
L_0881EE20:;
    v0 = LD_U16(s2+78);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    goto L_0881EE30;
L_0881EE30:;
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
    if (cnd_) { goto L_0881EE30; }
    goto L_0881EE58;
L_0881EE58:;
    ST32(sp+20, 0);
    a2 = sp + 20;
    a1 = 0 + 0;
    goto L_0881EE64;
L_0881EE64:;
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
    if (cnd_) { goto L_0881EE64; }
    goto L_0881EE8C;
L_0881EE8C:;
    f0 = BITSF(LD32(s2+60));
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, FBITS(f0));
    goto L_0881EE9C;
L_0881EE9C:;
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
    if (cnd_) { goto L_0881EE9C; }
    goto L_0881EEC4;
L_0881EEC4:;
    f0 = BITSF(LD32(s2+64));
    a2 = sp + 28;
    a1 = 0 + 0;
    ST32(sp+28, FBITS(f0));
    goto L_0881EED4;
L_0881EED4:;
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
    if (cnd_) { goto L_0881EED4; }
    goto L_0881EEFC;
L_0881EEFC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0881EF18:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    v1 = s1 + 4;
    goto L_0881ED7C;
L_0881EF2C:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(v1+1, v0);
    s1 = v1 + 5;
    goto L_0881ED1C;
L_0881EF40:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    s1 = s1 + 4;
    goto L_0881EC3C;
}

/* 0881EF54 */
rv_t func_0881EF54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881EF54:;
    sp = sp - 32;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EF84;
L_0881EF84:;
    s3 = LD_U8(s1+76);
    s2 = v0 + 0;
    a1 = s1 + 4;
    a0 = s0 + 0;
    s4 = LD_U16(s1+78);
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EF9C;
L_0881EF9C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EFA8;
L_0881EFA8:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EFB4;
L_0881EFB4:;
    a1 = s1 + 16;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EFC0;
L_0881EFC0:;
    a1 = s1 + 44;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EFCC;
L_0881EFCC:;
    f12 = BITSF(LD32(s1+68));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881EFD8;
L_0881EFD8:;
    a0 = s1 + 80;
    a1 = s0 + 0;
    func_08AA4520(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881EFE4;
L_0881EFE4:;
    a0 = s1 + 92;
    a1 = s0 + 0;
    func_08AA4520(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881EFF0;
L_0881EFF0:;
    a0 = s1 + 104;
    a1 = s0 + 0;
    func_08AA4520(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881EFFC;
L_0881EFFC:;
    a0 = s1 + 116;
    a1 = s0 + 0;
    func_08AA4520(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0881F008;
L_0881F008:;
    a1 = LD32(s1+72);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F014;
L_0881F014:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F020;
L_0881F020:;
    a1 = 0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F02C;
L_0881F02C:;
    f12 = BITSF(LD32(s1+60));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F038;
L_0881F038:;
    f12 = BITSF(LD32(s1+64));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F044;
L_0881F044:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F064 */
u32 func_0881F064(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_0881F064:;
    v0 = D_08B230C0 - (12480);
    a1 = LD32(v0+12480);
    a2 = D_08B230C4 - (12484);
    v1 = LD32(a2+12484);
    v0 = LD32(a1+32);
    a0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(a2+12484, v1);
    return v0;
}

/* 0881F08C */
u64 func_0881F08C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881F08C:;
    sp = sp - 32;
    a1 = D_08B230C0 - (12480);
    s3 = a0 + 0;
    v1 = LD32(a1+12480);
    v0 = LD32(v1+28);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881F100; }
    goto L_0881F0BC;
L_0881F0BC:;
    s2 = a1 + 0;
    v1 = LD32(s2+12480);
    s1 = s0 << 2;
    goto L_0881F0C8;
L_0881F0C8:;
    a0 = s3 + 0;
    v0 = LD32(v1+32);
    a2 = 1;
    s0 = s0 + 1;
    v0 = s1 + v0;
    v1 = LD32(v0);
    a1 = LD32(v1+8);
    { u64 r_ = func_08AA3308(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F0E8;
L_0881F0E8:;
    cnd_ = v0 == 0;
    v1 = LD32(s2+12480);
    if (cnd_) { goto L_0881F120; }
    goto L_0881F0F0;
L_0881F0F0:;
    v0 = LD32(v1+28);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s0 << 2;
    if (cnd_) { goto L_0881F0C8; }
    goto L_0881F100;
L_0881F100:;
    v0 = 0 + 0;
    goto L_0881F104;
L_0881F104:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0881F120:;
    v0 = LD32(v1+32);
    v0 = s1 + v0;
    v0 = LD32(v0);
    goto L_0881F104;
}

/* 0881F130 */
u32 func_0881F130(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_0881F130:;
    v0 = D_08B230C0 - (12480);
    a1 = LD32(v0+12480);
    a2 = D_08B230C8 - (12488);
    v1 = LD32(a2+12488);
    v0 = LD32(a1+40);
    a0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(a2+12488, v1);
    return v0;
}

/* 0881F158 */
u32 func_0881F158(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881F158:;
    sp = sp - 32;
    s1 = D_08B230C0 - (12480);
    v1 = 0 + 0;
    v0 = LD32(s1+12480);
    s2 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0881F1A8; }
    goto L_0881F188;
L_0881F188:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0881F1A8:;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F1B0;
L_0881F1B0:;
    v0 = func_0881F064();
    goto L_0881F1B8;
L_0881F1B8:;
    a2 = LD32(s1+12480);
    a0 = LD32(s0+16);
    s3 = v0 + 0;
    a1 = LD_U8(a2+76);
    v0 = func_0883EABC(a0, a1, a2, 0, 0, 0);
    goto L_0881F1CC;
L_0881F1CC:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    ST32(s3, v0);
    a1 = s0 + 0;
    v0 = LD32(v1+84);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F1E8;
L_0881F1E8:;
    a0 = LD32(s3);
    v0 = LD32(s0+20);
    ST32(a0+32, v0);
    a1 = LD32(s0+20);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0881F21C; }
    goto L_0881F200;
L_0881F200:;
    v1 = D_08B230D0 - (12496);
    goto L_0881F204;
L_0881F204:;
    v0 = D_08B230CC - (12492);
    ST32(v1+12496, 0);
    ST32(v0+12492, a0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F214;
L_0881F214:;
    v1 = 1;
    goto L_0881F188;
L_0881F21C:;
    a0 = a0 + 36;
    func_08AA3F38(a0, a1, 0, 0, 0);
    goto L_0881F224;
L_0881F224:;
    a1 = LD32(s0+20);
    cnd_ = (s32)a1 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0881F254; }
    goto L_0881F230;
L_0881F230:;
    a0 = LD32(s3);
    v1 = LD32(a0+36);
    goto L_0881F238;
L_0881F238:;
    a2 = a2 + 1;
    v0 = (s32)a2 < (s32)a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881F238; }
    goto L_0881F24C;
L_0881F24C:;
    v1 = D_08B230D0 - (12496);
    goto L_0881F204;
L_0881F254:;
    a0 = LD32(s3);
    goto L_0881F200;
}

/* 0881F25C */
u32 func_0881F25C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
L_0881F25C:;
    v0 = D_08B230CC - (12492);
    a1 = LD32(v0+12492);
    a2 = D_08B230D0 - (12496);
    v1 = LD32(a2+12496);
    v0 = LD32(a1+36);
    a0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(a2+12496, v1);
    return v0;
}

/* 0881F284 */
u32 func_0881F284(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0881F284:;
    v0 = D_08B230CC - (12492);
    v0 = LD32(v0+12492);
    a3 = LD32(v0+140);
    cnd_ = (s32)a3 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0881F2CC; }
    goto L_0881F298;
L_0881F298:;
    t0 = LD32(v0+144);
    v1 = t0 + 0;
    v0 = LD32(v1);
    goto L_0881F2A4;
L_0881F2A4:;
    a1 = a1 + 1;
    a2 = v1 + 0;
    a0 = (s32)a1 < (s32)a3;
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881F2C4; }
    goto L_0881F2B8;
L_0881F2B8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0881F2A4; }
    goto L_0881F2C0;
L_0881F2C0:;
    a2 = t0 + 0;
    goto L_0881F2C4;
L_0881F2C4:;
    v0 = a2 + 0;
    return v0;
L_0881F2CC:;
    t0 = LD32(v0+144);
    goto L_0881F2C0;
}

/* 0881F2D4 */
rv_t func_0881F2D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0881F2D4:;
    a1 = LD32(a0+16);
    a0 = 1;
    v1 = a1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a1 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0881F2F4; }
    goto L_0881F2F0;
L_0881F2F0:;
    a0 = (u32)((s32)v1 >> 2);
    goto L_0881F2F4;
L_0881F2F4:;
    v0 = a0 << 2;
    v0 = v0 + 12;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F300 */
rv_t func_0881F300(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881F300:;
    sp = sp - 48;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 8;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    s1 = LD32(s0);
    if (cnd_) { goto L_0881F448; }
    goto L_0881F330;
L_0881F330:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_0881F350; }
    goto L_0881F33C;
L_0881F33C:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_0881F350;
L_0881F350:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_0881F36C; }
    goto L_0881F358;
L_0881F358:;
    v0 = s3 + 0;
    goto L_0881F35C;
L_0881F35C:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881F35C; }
    goto L_0881F36C;
L_0881F36C:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F378;
L_0881F378:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_0881F380;
L_0881F380:;
    v0 = LD32(s2+24);
    ST32(s0, s1);
    a2 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_0881F394;
L_0881F394:;
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
    if (cnd_) { goto L_0881F394; }
    goto L_0881F3BC;
L_0881F3BC:;
    v0 = LD32(s2+28);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0881F3CC;
L_0881F3CC:;
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
    if (cnd_) { goto L_0881F3CC; }
    goto L_0881F3F4;
L_0881F3F4:;
    v0 = LD32(s2+20);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_0881F404;
L_0881F404:;
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
    if (cnd_) { goto L_0881F404; }
    goto L_0881F42C;
L_0881F42C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0881F448:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    s1 = s1 + 4;
    goto L_0881F380;
}

/* 0881F45C */
rv_t func_0881F45C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881F45C:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = a0 + 8;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F480;
L_0881F480:;
    a0 = s0 + 0;
    a1 = LD32(s1+24);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F48C;
L_0881F48C:;
    a1 = LD32(s1+28);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F498;
L_0881F498:;
    a1 = LD32(s1+20);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F4A4;
L_0881F4A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F4B8 */
rv_t func_0881F4B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881F4B8:;
    sp = sp - 32;
    s4 = a1 + 0;
    a1 = 0 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    a0 = a2 + 0;
    a2 = 0 + 0;
    s0 = s2 + 8;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F4F4;
L_0881F4F4:;
    a0 = LD32(s2+8);
    cnd_ = a0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0881F514; }
    goto L_0881F500;
L_0881F500:;
    cnd_ = v0 == a0;
    if (cnd_) { v1 = LD32(s4+8); goto L_0881F550; }
    goto L_0881F508;
L_0881F508:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F510;
L_0881F510:;
    ST32(s2+8, 0);
    goto L_0881F514;
L_0881F514:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0881F5F0; }
    goto L_0881F520;
L_0881F520:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F528;
L_0881F528:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F53C;
L_0881F53C:;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_0881F5DC; }
    goto L_0881F544;
L_0881F544:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0881F54C;
L_0881F54C:;
    v1 = LD32(s4+8);
    goto L_0881F550;
L_0881F550:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    a1 = s2 + 24;
    if (cnd_) { goto L_0881F5C4; }
    goto L_0881F55C;
L_0881F55C:;
    v0 = (s32)v1 < 14;
    cnd_ = v0 == 0;
    a1 = s2 + 28;
    if (cnd_) { goto L_0881F5AC; }
    goto L_0881F568;
L_0881F568:;
    v0 = (s32)v1 < 12;
    cnd_ = v0 == 0;
    a1 = s2 + 20;
    if (cnd_) { goto L_0881F594; }
    goto L_0881F574;
L_0881F574:;
    goto L_0881F578;
L_0881F578:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0881F594:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F5A4;
L_0881F5A4:;
    goto L_0881F578;
L_0881F5AC:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F5BC;
L_0881F5BC:;
    v1 = LD32(s4+8);
    goto L_0881F568;
L_0881F5C4:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F5D4;
L_0881F5D4:;
    v1 = LD32(s4+8);
    goto L_0881F55C;
L_0881F5DC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F5E8;
L_0881F5E8:;
    v1 = LD32(s4+8);
    goto L_0881F550;
L_0881F5F0:;
    ST32(s2+8, 0);
    goto L_0881F54C;
}

/* 0881F5F8 */
rv_t func_0881F5F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881F5F8:;
    sp = sp - 16;
    { rv_t r_ = func_0881F2D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F608;
L_0881F608:;
    v0 = v0 + 28;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F618 */
rv_t func_0881F618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881F618:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0881F300(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F634;
L_0881F634:;
    a2 = sp + 0;
    v0 = LD32(s1+116);
    a3 = LD32(s1+132);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_0881F648;
L_0881F648:;
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
    if (cnd_) { goto L_0881F648; }
    goto L_0881F670;
L_0881F670:;
    v0 = LD32(s1+120);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0881F680;
L_0881F680:;
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
    if (cnd_) { goto L_0881F680; }
    goto L_0881F6A8;
L_0881F6A8:;
    v0 = LD32(s1+124);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_0881F6B8;
L_0881F6B8:;
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
    if (cnd_) { goto L_0881F6B8; }
    goto L_0881F6E0;
L_0881F6E0:;
    f0 = BITSF(LD32(s1+128));
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f0));
    goto L_0881F6F0;
L_0881F6F0:;
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
    if (cnd_) { goto L_0881F6F0; }
    goto L_0881F718;
L_0881F718:;
    v0 = LD32(s1+140);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    goto L_0881F728;
L_0881F728:;
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
    if (cnd_) { goto L_0881F728; }
    goto L_0881F750;
L_0881F750:;
    ST32(sp+20, a3);
    a2 = sp + 20;
    a1 = 0 + 0;
    goto L_0881F75C;
L_0881F75C:;
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
    if (cnd_) { goto L_0881F75C; }
    goto L_0881F784;
L_0881F784:;
    v0 = LD32(s1+136);
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, v0);
    goto L_0881F794;
L_0881F794:;
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
    if (cnd_) { goto L_0881F794; }
    goto L_0881F7BC;
L_0881F7BC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F7D0 */
rv_t func_0881F7D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881F7D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_0881F45C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F7F0;
L_0881F7F0:;
    a1 = LD32(s0+116);
    a0 = s1 + 0;
    s2 = LD32(s0+132);
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F800;
L_0881F800:;
    a1 = LD32(s0+120);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F80C;
L_0881F80C:;
    a1 = LD32(s0+124);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F818;
L_0881F818:;
    f12 = BITSF(LD32(s0+128));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F824;
L_0881F824:;
    a1 = LD32(s0+140);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F830;
L_0881F830:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F83C;
L_0881F83C:;
    a1 = LD32(s0+136);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F848;
L_0881F848:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F860 */
rv_t func_0881F860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881F860:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a0 = 4;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F888;
L_0881F888:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_0881F4B8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F898;
L_0881F898:;
    a1 = s0 + 116;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F8AC;
L_0881F8AC:;
    a1 = s0 + 120;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F8C0;
L_0881F8C0:;
    a1 = s0 + 124;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F8D4;
L_0881F8D4:;
    a1 = s0 + 128;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F8E8;
L_0881F8E8:;
    a1 = s0 + 140;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F8FC;
L_0881F8FC:;
    a1 = LD32(s0+140);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0881F964; }
    goto L_0881F908;
L_0881F908:;
    a1 = s0 + 132;
    goto L_0881F90C;
L_0881F90C:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F91C;
L_0881F91C:;
    v1 = LD32(s2+8);
    v1 = (s32)v1 < 11;
    cnd_ = v1 == 0;
    a1 = s0 + 136;
    if (cnd_) { goto L_0881F94C; }
    goto L_0881F92C;
L_0881F92C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F934;
L_0881F934:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881F94C:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881F95C;
L_0881F95C:;
    goto L_0881F92C;
L_0881F964:;
    a0 = s0 + 144;
    func_08AA3F7C(a0, a1, 0, 0, 0);
    goto L_0881F96C;
L_0881F96C:;
    v0 = LD32(s0+140);
    cnd_ = (s32)v0 <= 0;
    a1 = s0 + 132;
    if (cnd_) { goto L_0881F90C; }
    goto L_0881F978;
L_0881F978:;
    v1 = LD32(s0+144);
    goto L_0881F97C;
L_0881F97C:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881F97C; }
    goto L_0881F98C;
L_0881F98C:;
    a1 = s0 + 132;
    goto L_0881F90C;
}

/* 0881F994 */
rv_t func_0881F994(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881F994:;
    sp = sp - 16;
    { rv_t r_ = func_0881F2D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F9A4;
L_0881F9A4:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881F9B4 */
rv_t func_0881F9B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0881F9B4:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0881F300(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881F9D0;
L_0881F9D0:;
    a2 = sp + 0;
    v0 = LD32(s1+112);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_0881F9E0;
L_0881F9E0:;
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
    if (cnd_) { goto L_0881F9E0; }
    goto L_0881FA08;
L_0881FA08:;
    v0 = LD32(s1+116);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0881FA18;
L_0881FA18:;
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
    if (cnd_) { goto L_0881FA18; }
    goto L_0881FA40;
L_0881FA40:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0881FA54 */
rv_t func_0881FA54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881FA54:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0881F45C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FA70;
L_0881FA70:;
    a1 = LD32(s1+112);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FA7C;
L_0881FA7C:;
    a1 = LD32(s1+116);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FA88;
L_0881FA88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881FA9C */
rv_t func_0881FA9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881FA9C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_0881F4B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FAC0;
L_0881FAC0:;
    a1 = s0 + 112;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FAD4;
L_0881FAD4:;
    v1 = LD32(s1+8);
    s0 = s0 + 116;
    a0 = s2 + 0;
    v1 = (s32)v1 < 10;
    a1 = s0 + 0;
    a2 = 4;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0881FB0C; }
    goto L_0881FAF4;
L_0881FAF4:;
    goto L_0881FAF8;
L_0881FAF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0881FB0C:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FB14;
L_0881FB14:;
    goto L_0881FAF8;
}

/* 0881FB1C */
rv_t func_0881FB1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881FB1C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0881F2D4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FB30;
L_0881FB30:;
    a0 = LD32(s0+148);
    a1 = v0 + 0;
    a2 = 1;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0881FB54; }
    goto L_0881FB50;
L_0881FB50:;
    a2 = (u32)((s32)v1 >> 2);
    goto L_0881FB54;
L_0881FB54:;
    v0 = a2 << 2;
    a1 = a1 + v0;
    a1 = a1 + 32;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881FB74 */
rv_t func_0881FB74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0881FB74:;
    sp = sp - 64;
    s2 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0881F300(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FB98;
L_0881FB98:;
    a1 = s2 + 140;
    v0 = LD32(s2+140);
    cnd_ = v0 == 0;
    s1 = LD32(s0);
    if (cnd_) { goto L_0881FDDC; }
    goto L_0881FBA8;
L_0881FBA8:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_0881FBC8; }
    goto L_0881FBB4;
L_0881FBB4:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_0881FBC8;
L_0881FBC8:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_0881FBE4; }
    goto L_0881FBD0;
L_0881FBD0:;
    v0 = s3 + 0;
    goto L_0881FBD4;
L_0881FBD4:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0881FBD4; }
    goto L_0881FBE4;
L_0881FBE4:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FBF0;
L_0881FBF0:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_0881FBF8;
L_0881FBF8:;
    f0 = BITSF(LD32(s2+152));
    ST32(s0, s1);
    a2 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_0881FC0C;
L_0881FC0C:;
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
    if (cnd_) { goto L_0881FC0C; }
    goto L_0881FC34;
L_0881FC34:;
    v0 = LD_U8(s2+112);
    a2 = sp + 4;
    a1 = 0 + 0;
    v0 = 0 < v0;
    ST32(sp+4, v0);
    goto L_0881FC48;
L_0881FC48:;
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
    if (cnd_) { goto L_0881FC48; }
    goto L_0881FC70;
L_0881FC70:;
    f0 = BITSF(LD32(s2+116));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_0881FC80;
L_0881FC80:;
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
    if (cnd_) { goto L_0881FC80; }
    goto L_0881FCA8;
L_0881FCA8:;
    f0 = BITSF(LD32(s2+120));
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f0));
    goto L_0881FCB8;
L_0881FCB8:;
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
    if (cnd_) { goto L_0881FCB8; }
    goto L_0881FCE0;
L_0881FCE0:;
    f0 = BITSF(LD32(s2+128));
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    goto L_0881FCF0;
L_0881FCF0:;
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
    if (cnd_) { goto L_0881FCF0; }
    goto L_0881FD18;
L_0881FD18:;
    f0 = BITSF(LD32(s2+124));
    a2 = sp + 20;
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f0));
    goto L_0881FD28;
L_0881FD28:;
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
    if (cnd_) { goto L_0881FD28; }
    goto L_0881FD50;
L_0881FD50:;
    f0 = BITSF(LD32(s2+132));
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, FBITS(f0));
    goto L_0881FD60;
L_0881FD60:;
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
    if (cnd_) { goto L_0881FD60; }
    goto L_0881FD88;
L_0881FD88:;
    f0 = BITSF(LD32(s2+136));
    a2 = sp + 28;
    a1 = 0 + 0;
    ST32(sp+28, FBITS(f0));
    goto L_0881FD98;
L_0881FD98:;
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
    if (cnd_) { goto L_0881FD98; }
    goto L_0881FDC0;
L_0881FDC0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0881FDDC:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    s1 = s1 + 4;
    goto L_0881FBF8;
}

/* 0881FDF0 */
rv_t func_0881FDF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0881FDF0:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0881F45C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE0C;
L_0881FE0C:;
    a1 = s1 + 140;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE18;
L_0881FE18:;
    f12 = BITSF(LD32(s1+152));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE24;
L_0881FE24:;
    a1 = LD_U8(s1+112);
    a0 = s0 + 0;
    a1 = 0 < a1;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE34;
L_0881FE34:;
    f12 = BITSF(LD32(s1+116));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE40;
L_0881FE40:;
    f12 = BITSF(LD32(s1+120));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE4C;
L_0881FE4C:;
    f12 = BITSF(LD32(s1+128));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE58;
L_0881FE58:;
    f12 = BITSF(LD32(s1+124));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE64;
L_0881FE64:;
    f12 = BITSF(LD32(s1+132));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE70;
L_0881FE70:;
    f12 = BITSF(LD32(s1+136));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FE7C;
L_0881FE7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0881FE90 */
rv_t func_0881FE90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0881FE90:;
    sp = sp - 48;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_0881F4B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0881FEC4;
L_0881FEC4:;
    v0 = LD32(s5+8);
    v0 = (s32)v0 < 12;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08820124; }
    goto L_0881FED4;
L_0881FED4:;
    v0 = LD32(s2+40);
    s1 = LD32(v0+28);
    cnd_ = (s32)s1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0881FF24; }
    goto L_0881FEE4;
L_0881FEE4:;
    a1 = LD32(v0+32);
    a2 = 1;
    a0 = LD32(a1);
    goto L_0881FEF0;
L_0881FEF0:;
    v1 = a0 ^ s2;
    v1 = 0 < v1;
    v0 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0881FF14; }
    goto L_0881FF08;
L_0881FF08:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(s2+140); goto L_088200AC; }
    goto L_0881FF14;
L_0881FF14:;
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)s1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0881FEF0; }
    goto L_0881FF24;
L_0881FF24:;
    cnd_ = s0 == s1;
    if (cnd_) { a0 = LD32(s2+140); goto L_08820024; }
    goto L_0881FF2C;
L_0881FF2C:;
    v1 = LD32(s5+8);
    goto L_0881FF30;
L_0881FF30:;
    v0 = (s32)v1 < 13;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s2 + 152; goto L_0882000C; }
    goto L_0881FF3C;
L_0881FF3C:;
    v0 = (s32)v1 < 15;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s4 + 0; goto L_0881FF70; }
    goto L_0881FF48;
L_0881FF48:;
    goto L_0881FF4C;
L_0881FF4C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0881FF70:;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FF80;
L_0881FF80:;
    v0 = LD32(sp);
    a1 = s2 + 116;
    a0 = s4 + 0;
    v0 = 0 < v0;
    ST8(s2+112, v0);
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FFA0;
L_0881FFA0:;
    a1 = s2 + 120;
    a0 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FFB4;
L_0881FFB4:;
    a1 = s2 + 128;
    a0 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FFC8;
L_0881FFC8:;
    a1 = s2 + 124;
    a0 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FFDC;
L_0881FFDC:;
    a1 = s2 + 132;
    a0 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0881FFF0;
L_0881FFF0:;
    a1 = s2 + 136;
    a0 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820004;
L_08820004:;
    goto L_0881FF4C;
L_0882000C:;
    a0 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882001C;
L_0882001C:;
    v1 = LD32(s5+8);
    goto L_0881FF3C;
L_08820024:;
    v0 = D_08AD3998 - (14744);
    s1 = v0 + 14744;
    cnd_ = a0 == 0;
    s0 = s2 + 140;
    if (cnd_) { goto L_08820044; }
    goto L_08820034;
L_08820034:;
    cnd_ = a0 == s1;
    if (cnd_) { v1 = LD32(s5+8); goto L_0881FF30; }
    goto L_0882003C;
L_0882003C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882009C; }
    goto L_08820044;
L_08820044:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08820094; }
    goto L_08820050;
L_08820050:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820058;
L_08820058:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882006C;
L_0882006C:;
    ST32(s0, v0);
    goto L_08820070;
L_08820070:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = v0 + 0; goto L_08820084; }
    goto L_08820078;
L_08820078:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0881FF2C;
L_08820084:;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882008C;
L_0882008C:;
    v1 = LD32(s5+8);
    goto L_0881FF30;
L_08820094:;
    ST32(s0, 0);
    goto L_0881FF2C;
L_0882009C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088200A4;
L_088200A4:;
    ST32(s2+140, 0);
    goto L_08820044;
L_088200AC:;
    s6 = LD32(a0+8);
    cnd_ = v0 == 0;
    s3 = s2 + 140;
    if (cnd_) { goto L_088200CC; }
    goto L_088200B8;
L_088200B8:;
    cnd_ = s6 == v0;
    if (cnd_) { goto L_0881FF24; }
    goto L_088200C0;
L_088200C0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088200C8;
L_088200C8:;
    ST32(s2+140, 0);
    goto L_088200CC;
L_088200CC:;
    ST32(s3+8, 0);
    cnd_ = s6 == 0;
    ST32(s3+4, 0);
    if (cnd_) { goto L_0882011C; }
    goto L_088200D8;
L_088200D8:;
    a0 = s6 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088200E0;
L_088200E0:;
    v1 = v0 + 1;
    ST32(s3+4, v0);
    a0 = v1 + 0;
    ST32(s3+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088200F4;
L_088200F4:;
    cnd_ = v0 != 0;
    ST32(s2+140, v0);
    if (cnd_) { goto L_08820108; }
    goto L_088200FC;
L_088200FC:;
    ST32(s3+4, 0);
    goto L_08820100;
L_08820100:;
    ST32(s3+8, 0);
    goto L_0881FF24;
L_08820108:;
    a0 = v0 + 0;
    a1 = s6 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820114;
L_08820114:;
    goto L_0881FF24;
L_0882011C:;
    ST32(s2+140, 0);
    goto L_08820100;
L_08820124:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820130;
L_08820130:;
    a0 = LD32(s2+140);
    s1 = v0 + 0;
    cnd_ = a0 == 0;
    s0 = s2 + 140;
    if (cnd_) { goto L_08820154; }
    goto L_08820140;
L_08820140:;
    cnd_ = v0 == a0;
    if (cnd_) { v1 = LD32(s5+8); goto L_0881FF30; }
    goto L_08820148;
L_08820148:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820150;
L_08820150:;
    ST32(s2+140, 0);
    goto L_08820154;
L_08820154:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08820184; }
    goto L_08820160;
L_08820160:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820168;
L_08820168:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882017C;
L_0882017C:;
    ST32(s2+140, v0);
    goto L_08820070;
L_08820184:;
    ST32(s2+140, 0);
    goto L_0881FF2C;
}

/* 0882018C */
void func_0882018C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882018C:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = 4;
    s4 = t0 + 0;
    s3 = a1 + 0;
    ST32(sp+4, a2);
    ST32(sp, a3);
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088201C4;
L_088201C4:;
    v0 = LD32(sp);
    v0 = (s32)v0 < 7;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_088203C0; }
    goto L_088201D4;
L_088201D4:;
    a0 = s3 + 0;
    goto L_088201D8;
L_088201D8:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088201E4;
L_088201E4:;
    a0 = LD32(s1+52);
    s2 = v0 + 0;
    cnd_ = a0 == 0;
    s0 = s1 + 52;
    if (cnd_) { goto L_08820208; }
    goto L_088201F4;
L_088201F4:;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08820240; }
    goto L_088201FC;
L_088201FC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820204;
L_08820204:;
    ST32(s1+52, 0);
    goto L_08820208;
L_08820208:;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088203B8; }
    goto L_08820214;
L_08820214:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882021C;
L_0882021C:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820230;
L_08820230:;
    cnd_ = v0 != 0;
    ST32(s1+52, v0);
    if (cnd_) { goto L_088203A4; }
    goto L_08820238;
L_08820238:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08820240;
L_08820240:;
    a0 = 25;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820248;
L_08820248:;
    a1 = LD32(sp+4);
    s0 = sp + 8;
    a0 = s0 + 0;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_08820258;
L_08820258:;
    v1 = LD32(sp+4);
    a1 = LD32(sp+8);
    a3 = 0 + 0;
    a2 = v1 << 1;
    a2 = a2 + v1;
    a2 = a2 << 2;
    a0 = s3 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820278;
L_08820278:;
    v1 = LD32(s1);
    a1 = LD32(sp+4);
    a2 = LD32(sp+8);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820290;
L_08820290:;
    a0 = s0 + 0;
    func_08AA119C(a0, 0, 0, 0);
    goto L_08820298;
L_08820298:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088202A0;
L_088202A0:;
    a2 = LD32(sp+4);
    a1 = LD32(s1+12);
    a0 = s3 + 0;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088202B8;
L_088202B8:;
    a2 = LD32(sp+4);
    a1 = LD32(s1+20);
    a0 = s3 + 0;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088202D0;
L_088202D0:;
    v1 = LD32(sp);
    v1 = (s32)v1 < 7;
    cnd_ = v1 == 0;
    v0 = s4 & 0x1;
    if (cnd_) { goto L_0882036C; }
    goto L_088202E0;
L_088202E0:;
    cnd_ = v0 != 0;
    a1 = LD32(sp+4);
    if (cnd_) { goto L_08820344; }
    goto L_088202E8;
L_088202E8:;
    a1 = s1 + 28;
    goto L_088202EC;
L_088202EC:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088202FC;
L_088202FC:;
    a2 = LD32(sp+4);
    a1 = LD32(s1+44);
    a3 = 0 + 0;
    a2 = a2 << 4;
    a0 = s3 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820314;
L_08820314:;
    a0 = s1 + 0;
    func_0884742C(a0);
    goto L_0882031C;
L_0882031C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820324;
L_08820324:;
    sp = sp + 48;
    return;
L_08820344:;
    a0 = s1 + 16;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_0882034C;
L_0882034C:;
    a1 = LD32(s1+16);
    a2 = LD32(sp+4);
    goto L_08820354;
L_08820354:;
    a0 = s3 + 0;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820364;
L_08820364:;
    a1 = s1 + 28;
    goto L_088202EC;
L_0882036C:;
    a1 = sp + 12;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    ST32(sp+12, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820384;
L_08820384:;
    a1 = LD32(sp+12);
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { a1 = s1 + 28; goto L_088202EC; }
    goto L_08820390;
L_08820390:;
    a0 = s1 + 16;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_08820398;
L_08820398:;
    a1 = LD32(s1+16);
    a2 = LD32(sp+12);
    goto L_08820354;
L_088203A4:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088203B0;
L_088203B0:;
    goto L_08820240;
L_088203B8:;
    ST32(s1+52, 0);
    goto L_08820240;
L_088203C0:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088203D0;
L_088203D0:;
    a0 = s3 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088203E4;
L_088203E4:;
    a0 = s3 + 0;
    goto L_088201D8;
}

/* 088203EC */
u32 func_088203EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088203EC:;
    sp = sp - 32;
    v0 = D_08B230C0 - (12480);
    s2 = a1 + 0;
    s1 = a0 + 0;
    v1 = LD32(v0+12480);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08820438; }
    goto L_0882041C;
L_0882041C:;
    sp = sp + 32;
    return v0;
L_08820438:;
    v0 = func_0881F25C();
    goto L_08820440;
L_08820440:;
    a0 = 64;
    s3 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882044C;
L_0882044C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08846EF0(a0);
    goto L_08820458;
L_08820458:;
    ST32(s3, s0);
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = LD32(s1+16);
    a3 = LD32(s1+8);
    t0 = LD32(s1+12);
    func_0882018C(a0, a1, a2, a3, t0);
    goto L_08820474;
L_08820474:;
    v0 = LD32(s1+8);
    v0 = (s32)v0 < 6;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0882041C; }
    goto L_08820484;
L_08820484:;
    v0 = D_08B230CC - (12492);
    v1 = LD32(v0+12492);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0882049C; }
    goto L_08820494;
L_08820494:;
    v0 = 1;
    goto L_0882041C;
L_0882049C:;
    v1 = LD32(v1);
    v0 = LD32(v1+56);
    t_ = v0;
    s0 = LD32(s3);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088204AC;
L_088204AC:;
    v1 = LD32(s0+28);
    v1 = v1 | v0;
    ST32(s0+28, v1);
    goto L_08820494;
}

/* 088204BC */
u32 func_088204BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088204BC:;
    sp = sp - 16;
    v0 = D_08B230C0 - (12480);
    s2 = a1 + 0;
    s1 = a0 + 0;
    v1 = LD32(v0+12480);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08820500; }
    goto L_088204E8;
L_088204E8:;
    sp = sp + 16;
    return v0;
L_08820500:;
    v0 = func_0881F284();
    goto L_08820508;
L_08820508:;
    s0 = v0 + 0;
    v0 = D_08B230CC - (12492);
    a0 = LD32(v0+12492);
    a1 = LD32(s1+16);
    v0 = func_08841FB4(a0, a1);
    goto L_0882051C;
L_0882051C:;
    v1 = LD32(v0);
    ST32(s0, v0);
    a0 = v0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+48);
    t_ = v0;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820538;
L_08820538:;
    v0 = 1;
    goto L_088204E8;
}

/* 08820540 */
rv_t func_08820540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08820540:;
    sp = sp - 32;
    s1 = a0 + 8;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088205C0; }
    goto L_08820568;
L_08820568:;
    a0 = LD32(a0+8);
    v0 = D_08AD3994 - (14740);
    cnd_ = a0 == 0;
    s0 = v0 + 14740;
    if (cnd_) { goto L_08820588; }
    goto L_08820578;
L_08820578:;
    cnd_ = a0 == s0;
    if (cnd_) { s0 = s2 + 24; goto L_088205C4; }
    goto L_08820580;
L_08820580:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088206E0; }
    goto L_08820588;
L_08820588:;
    ST32(s1+8, 0);
    cnd_ = s0 == 0;
    ST32(s1+4, 0);
    if (cnd_) { goto L_088206D8; }
    goto L_08820594;
L_08820594:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882059C;
L_0882059C:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088205B0;
L_088205B0:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088206C4; }
    goto L_088205B8;
L_088205B8:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_088205C0;
L_088205C0:;
    s0 = s2 + 24;
    goto L_088205C4;
L_088205C4:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_0882062C; }
    goto L_088205D0;
L_088205D0:;
    a0 = LD32(s2+24);
    v0 = D_08AD3994 - (14740);
    cnd_ = a0 == 0;
    s3 = v0 + 14740;
    if (cnd_) { goto L_088205F0; }
    goto L_088205E0;
L_088205E0:;
    cnd_ = a0 == s3;
    if (cnd_) { v1 = LD32(s1+8); goto L_0882062C; }
    goto L_088205E8;
L_088205E8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088206B4; }
    goto L_088205F0;
L_088205F0:;
    ST32(s0+8, 0);
    cnd_ = s3 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088206AC; }
    goto L_088205FC;
L_088205FC:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820604;
L_08820604:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820618;
L_08820618:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08820698; }
    goto L_08820620;
L_08820620:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08820628;
L_08820628:;
    v1 = LD32(s1+8);
    goto L_0882062C;
L_0882062C:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08820648; }
    goto L_08820634;
L_08820634:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_08820648;
L_08820648:;
    v1 = LD32(s0+8);
    a0 = v0 << 2;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0882066C; }
    goto L_08820658;
L_08820658:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0882066C;
L_0882066C:;
    v0 = v0 << 2;
    a0 = a0 + v0;
    a0 = a0 + 8;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08820698:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088206A4;
L_088206A4:;
    v1 = LD32(s1+8);
    goto L_0882062C;
L_088206AC:;
    ST32(s0, 0);
    goto L_08820628;
L_088206B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088206BC;
L_088206BC:;
    ST32(s2+24, 0);
    goto L_088205F0;
L_088206C4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088206D0;
L_088206D0:;
    s0 = s2 + 24;
    goto L_088205C4;
L_088206D8:;
    ST32(s1, 0);
    goto L_088205C0;
L_088206E0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088206E8;
L_088206E8:;
    ST32(s2+8, 0);
    goto L_08820588;
}

/* 088206F0 */
rv_t func_088206F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088206F0:;
    sp = sp - 48;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 8;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    s1 = LD32(s0);
    if (cnd_) { goto L_08820874; }
    goto L_08820720;
L_08820720:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_08820740; }
    goto L_0882072C;
L_0882072C:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_08820740;
L_08820740:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_0882075C; }
    goto L_08820748;
L_08820748:;
    v0 = s3 + 0;
    goto L_0882074C;
L_0882074C:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0882074C; }
    goto L_0882075C;
L_0882075C:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820768;
L_08820768:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_08820770;
L_08820770:;
    ST32(s0, s1);
    v0 = LD32(s2+24);
    cnd_ = v0 == 0;
    a1 = s2 + 24;
    if (cnd_) { goto L_08820860; }
    goto L_08820780;
L_08820780:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_088207A0; }
    goto L_0882078C;
L_0882078C:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_088207A0;
L_088207A0:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_088207BC; }
    goto L_088207A8;
L_088207A8:;
    v0 = s3 + 0;
    goto L_088207AC;
L_088207AC:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088207AC; }
    goto L_088207BC;
L_088207BC:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088207C8;
L_088207C8:;
    v1 = s3 << 2;
    v1 = s1 + v1;
    goto L_088207D0;
L_088207D0:;
    v0 = LD32(s2+36);
    ST32(s0, v1);
    a2 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_088207E4;
L_088207E4:;
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
    if (cnd_) { goto L_088207E4; }
    goto L_0882080C;
L_0882080C:;
    v0 = LD32(s2+20);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_0882081C;
L_0882081C:;
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
    if (cnd_) { goto L_0882081C; }
    goto L_08820844;
L_08820844:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08820860:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    v1 = s1 + 4;
    goto L_088207D0;
L_08820874:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    s1 = s1 + 4;
    goto L_08820770;
}

/* 08820888 */
rv_t func_08820888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820888:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = a0 + 8;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088208AC;
L_088208AC:;
    a1 = s1 + 24;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088208B8;
L_088208B8:;
    a1 = LD32(s1+36);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088208C4;
L_088208C4:;
    a1 = LD32(s1+20);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088208D0;
L_088208D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088208E4 */
rv_t func_088208E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088208E4:;
    sp = sp - 32;
    s4 = a1 + 0;
    a1 = 0 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    a0 = a2 + 0;
    a2 = 0 + 0;
    s0 = s2 + 8;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820920;
L_08820920:;
    a0 = LD32(s2+8);
    cnd_ = a0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08820940; }
    goto L_0882092C;
L_0882092C:;
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(s4+8); goto L_0882097C; }
    goto L_08820934;
L_08820934:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882093C;
L_0882093C:;
    ST32(s2+8, 0);
    goto L_08820940;
L_08820940:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08820A64; }
    goto L_0882094C;
L_0882094C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820954;
L_08820954:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820968;
L_08820968:;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08820A50; }
    goto L_08820970;
L_08820970:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08820978;
L_08820978:;
    v0 = LD32(s4+8);
    goto L_0882097C;
L_0882097C:;
    cnd_ = (s32)v0 <= 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08820A14; }
    goto L_08820984;
L_08820984:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820990;
L_08820990:;
    a0 = LD32(s2+24);
    s1 = v0 + 0;
    cnd_ = a0 == 0;
    s0 = s2 + 24;
    if (cnd_) { goto L_088209B4; }
    goto L_088209A0;
L_088209A0:;
    cnd_ = v0 == a0;
    a1 = s2 + 36;
    if (cnd_) { goto L_088209F0; }
    goto L_088209A8;
L_088209A8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088209B0;
L_088209B0:;
    ST32(s2+24, 0);
    goto L_088209B4;
L_088209B4:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08820A48; }
    goto L_088209C0;
L_088209C0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088209C8;
L_088209C8:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088209DC;
L_088209DC:;
    cnd_ = v0 != 0;
    ST32(s2+24, v0);
    if (cnd_) { goto L_08820A34; }
    goto L_088209E4;
L_088209E4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088209EC;
L_088209EC:;
    a1 = s2 + 36;
    goto L_088209F0;
L_088209F0:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820A00;
L_08820A00:;
    a1 = s2 + 20;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820A14;
L_08820A14:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08820A34:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820A40;
L_08820A40:;
    a1 = s2 + 36;
    goto L_088209F0;
L_08820A48:;
    ST32(s2+24, 0);
    goto L_088209EC;
L_08820A50:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820A5C;
L_08820A5C:;
    v0 = LD32(s4+8);
    goto L_0882097C;
L_08820A64:;
    ST32(s2+8, 0);
    goto L_08820978;
}

/* 08820A6C */
rv_t func_08820A6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820A6C:;
    sp = sp - 16;
    { rv_t r_ = func_08820540(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820A7C;
L_08820A7C:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820A8C */
rv_t func_08820A8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08820A8C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088206F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820AA8;
L_08820AA8:;
    a2 = sp + 0;
    v0 = LD32(s1+48);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08820AB8;
L_08820AB8:;
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
    if (cnd_) { goto L_08820AB8; }
    goto L_08820AE0;
L_08820AE0:;
    v0 = LD32(s1+52);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_08820AF0;
L_08820AF0:;
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
    if (cnd_) { goto L_08820AF0; }
    goto L_08820B18;
L_08820B18:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08820B2C */
rv_t func_08820B2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820B2C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08820888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820B48;
L_08820B48:;
    a1 = LD32(s1+48);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820B54;
L_08820B54:;
    a1 = LD32(s1+52);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820B60;
L_08820B60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820B74 */
rv_t func_08820B74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820B74:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088208E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820B90;
L_08820B90:;
    a1 = s0 + 48;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 52;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820BA8;
L_08820BA8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820BBC;
L_08820BBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820BD0 */
rv_t func_08820BD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820BD0:;
    sp = sp - 16;
    { rv_t r_ = func_08820540(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820BE0;
L_08820BE0:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820BF0 */
rv_t func_08820BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08820BF0:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_088206F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820C0C;
L_08820C0C:;
    a2 = sp + 0;
    v0 = LD32(s0+52);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08820C1C;
L_08820C1C:;
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
    if (cnd_) { goto L_08820C1C; }
    goto L_08820C44;
L_08820C44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08820C58 */
rv_t func_08820C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820C58:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = LD32(a0+52);
    { rv_t r_ = func_08820888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820C74;
L_08820C74:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820C80;
L_08820C80:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820C94 */
rv_t func_08820C94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08820C94:;
    sp = sp - 32;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088208E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820CB0;
L_08820CB0:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820CC4;
L_08820CC4:;
    a1 = LD32(sp);
    s0 = s0 + 48;
    a0 = s0 + 0;
    { rv_t r_ = func_088D0A64(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820CD4;
L_08820CD4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08820CE8 */
rv_t func_08820CE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820CE8:;
    sp = sp - 16;
    s0 = a0 + 48;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08820D64; }
    goto L_08820D0C;
L_08820D0C:;
    a0 = LD32(a0+48);
    v0 = D_08AD3994 - (14740);
    cnd_ = a0 == 0;
    s2 = v0 + 14740;
    if (cnd_) { goto L_08820D2C; }
    goto L_08820D1C;
L_08820D1C:;
    cnd_ = a0 == s2;
    if (cnd_) { goto L_08820D64; }
    goto L_08820D24;
L_08820D24:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08820DD0; }
    goto L_08820D2C;
L_08820D2C:;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08820DC8; }
    goto L_08820D38;
L_08820D38:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820D40;
L_08820D40:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820D54;
L_08820D54:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08820DB4; }
    goto L_08820D5C;
L_08820D5C:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08820D64;
L_08820D64:;
    a0 = s1 + 0;
    { rv_t r_ = func_08820540(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820D6C;
L_08820D6C:;
    v1 = LD32(s0+8);
    a0 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08820D90; }
    goto L_08820D7C;
L_08820D7C:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    v0 = (u32)((s32)v1 >> 2);
    goto L_08820D90;
L_08820D90:;
    v0 = v0 << 2;
    a0 = a0 + v0;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08820DB4:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820DC0;
L_08820DC0:;
    goto L_08820D64;
L_08820DC8:;
    ST32(s0, 0);
    goto L_08820D64;
L_08820DD0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820DD8;
L_08820DD8:;
    ST32(s1+48, 0);
    goto L_08820D2C;
}

/* 08820DE0 */
rv_t func_08820DE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820DE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = a1 + 0;
    { rv_t r_ = func_088206F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820E00;
L_08820E00:;
    a1 = s0 + 48;
    v0 = LD32(s0+48);
    cnd_ = v0 == 0;
    s0 = LD32(s2);
    if (cnd_) { goto L_08820E7C; }
    goto L_08820E10;
L_08820E10:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s1 = 1;
    if (cnd_) { goto L_08820E30; }
    goto L_08820E1C;
L_08820E1C:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s1 = (u32)((s32)v1 >> 2);
    goto L_08820E30;
L_08820E30:;
    cnd_ = (s32)s1 <= 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08820E4C; }
    goto L_08820E38;
L_08820E38:;
    v0 = s1 + 0;
    goto L_08820E3C;
L_08820E3C:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08820E3C; }
    goto L_08820E4C;
L_08820E4C:;
    a1 = LD32(a1);
    a0 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820E58;
L_08820E58:;
    v1 = s1 << 2;
    s0 = s0 + v1;
    goto L_08820E60;
L_08820E60:;
    ST32(s2, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08820E7C:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s0, v0);
    s0 = s0 + 4;
    goto L_08820E60;
}

/* 08820E90 */
rv_t func_08820E90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820E90:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 48;
    s1 = a1 + 0;
    { rv_t r_ = func_08820888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820EB0;
L_08820EB0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820EBC;
L_08820EBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820ED0 */
rv_t func_08820ED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820ED0:;
    sp = sp - 16;
    s0 = a2 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_088208E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820EF0;
L_08820EF0:;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820F00;
L_08820F00:;
    s1 = v0 + 0;
    v0 = LD32(s2+48);
    cnd_ = v0 == 0;
    s0 = s2 + 48;
    if (cnd_) { goto L_08820F24; }
    goto L_08820F10;
L_08820F10:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08820F68; }
    goto L_08820F18;
L_08820F18:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820F20;
L_08820F20:;
    ST32(s2+48, 0);
    goto L_08820F24;
L_08820F24:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08820F90; }
    goto L_08820F34;
L_08820F34:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820F3C;
L_08820F3C:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820F50;
L_08820F50:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+48, v0);
    if (cnd_) { goto L_08820F80; }
    goto L_08820F60;
L_08820F60:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08820F68;
L_08820F68:;
    goto L_08820F6C;
L_08820F6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08820F80:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08820F88;
L_08820F88:;
    goto L_08820F6C;
L_08820F90:;
    ST32(s2+48, 0);
    goto L_08820F68;
}

/* 08820F98 */
rv_t func_08820F98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08820F98:;
    sp = sp - 16;
    { rv_t r_ = func_08820540(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820FA8;
L_08820FA8:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08820FB8 */
rv_t func_08820FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08820FB8:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_088206F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08820FD4;
L_08820FD4:;
    a2 = sp + 0;
    v0 = LD32(s0+60);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08820FE4;
L_08820FE4:;
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
    if (cnd_) { goto L_08820FE4; }
    goto L_0882100C;
L_0882100C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08821020 */
rv_t func_08821020(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821020:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08820888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882103C;
L_0882103C:;
    a1 = LD32(s1+60);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821048;
L_08821048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882105C */
rv_t func_0882105C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882105C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 60;
    s1 = a2 + 0;
    { rv_t r_ = func_088208E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882107C;
L_0882107C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821090;
L_08821090:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088210A4 */
rv_t func_088210A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088210A4:;
    sp = sp - 16;
    { rv_t r_ = func_08820540(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088210B4;
L_088210B4:;
    v0 = v0 + 24;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088210C4 */
rv_t func_088210C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088210C4:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088206F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088210E0;
L_088210E0:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s1+48));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_088210F0;
L_088210F0:;
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
    if (cnd_) { goto L_088210F0; }
    goto L_08821118;
L_08821118:;
    f0 = BITSF(LD32(s1+52));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08821128;
L_08821128:;
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
    if (cnd_) { goto L_08821128; }
    goto L_08821150;
L_08821150:;
    f0 = BITSF(LD32(s1+56));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_08821160;
L_08821160:;
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
    if (cnd_) { goto L_08821160; }
    goto L_08821188;
L_08821188:;
    f0 = BITSF(LD32(s1+60));
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f0));
    goto L_08821198;
L_08821198:;
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
    if (cnd_) { goto L_08821198; }
    goto L_088211C0;
L_088211C0:;
    v0 = LD32(s1+64);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    goto L_088211D0;
L_088211D0:;
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
    if (cnd_) { goto L_088211D0; }
    goto L_088211F8;
L_088211F8:;
    v0 = LD32(s1+72);
    a2 = sp + 20;
    a1 = 0 + 0;
    ST32(sp+20, v0);
    goto L_08821208;
L_08821208:;
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
    if (cnd_) { goto L_08821208; }
    goto L_08821230;
L_08821230:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08821244 */
rv_t func_08821244(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821244:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08820888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821260;
L_08821260:;
    f12 = BITSF(LD32(s1+48));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882126C;
L_0882126C:;
    f12 = BITSF(LD32(s1+52));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821278;
L_08821278:;
    f12 = BITSF(LD32(s1+56));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821284;
L_08821284:;
    f12 = BITSF(LD32(s1+60));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821290;
L_08821290:;
    a1 = LD32(s1+64);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882129C;
L_0882129C:;
    a1 = LD32(s1+72);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088212A8;
L_088212A8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088212BC */
rv_t func_088212BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088212BC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a2 + 0;
    { rv_t r_ = func_088208E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088212D8;
L_088212D8:;
    a1 = s1 + 48;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088212EC;
L_088212EC:;
    a1 = s1 + 52;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821300;
L_08821300:;
    a1 = s1 + 56;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821314;
L_08821314:;
    a1 = s1 + 60;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821328;
L_08821328:;
    a1 = s1 + 64;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882133C;
L_0882133C:;
    a0 = s0 + 0;
    a1 = s1 + 68;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821350;
L_08821350:;
    v1 = LD32(s1+68);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0882136C; }
    goto L_08821360;
L_08821360:;
    { u64 r_ = func_0883A208(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821368;
L_08821368:;
    ST32(s1+68, v0);
    goto L_0882136C;
L_0882136C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08821380 */
rv_t func_08821380(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821380:;
    sp = sp - 16;
    { rv_t r_ = func_08820540(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821390;
L_08821390:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088213A0 */
rv_t func_088213A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088213A0:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_088206F0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088213BC;
L_088213BC:;
    a2 = sp + 0;
    v0 = LD32(s0+48);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_088213CC;
L_088213CC:;
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
    if (cnd_) { goto L_088213CC; }
    goto L_088213F4;
L_088213F4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08821408 */
rv_t func_08821408(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821408:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08820888(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821424;
L_08821424:;
    a1 = LD32(s1+48);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821430;
L_08821430:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08821444 */
rv_t func_08821444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821444:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 48;
    s1 = a2 + 0;
    { rv_t r_ = func_088208E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821464;
L_08821464:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821478;
L_08821478:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882148C */
u32 func_0882148C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882148C:;
    sp = sp - 32;
    s2 = D_08B230C0 - (12480);
    v1 = 0 + 0;
    v0 = LD32(s2+12480);
    s3 = a1 + 0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088214DC; }
    goto L_088214BC;
L_088214BC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088214DC:;
    v0 = func_0881F130();
    goto L_088214E4;
L_088214E4:;
    a1 = LD32(s2+12480);
    a0 = LD32(s1+16);
    s0 = v0 + 0;
    v0 = func_08843DB8(a0, a1);
    goto L_088214F4;
L_088214F4:;
    v1 = LD32(v0);
    f0 = BITSF(LD32(s1+20));
    ST32(s0, v0);
    a0 = v0 + 0;
    a1 = s1 + 0;
    ST32(v0+12, FBITS(f0));
    v0 = LD32(v1+40);
    t_ = v0;
    a2 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821518;
L_08821518:;
    v1 = 1;
    goto L_088214BC;
}

/* 08821520 */
rv_t func_08821520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08821520:;
    a1 = a0 + 0;
    a0 = LD32(a0+28);
    a3 = 1;
    a2 = 1;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08821548; }
    goto L_08821544;
L_08821544:;
    a2 = (u32)((s32)v1 >> 2);
    goto L_08821548;
L_08821548:;
    a0 = LD32(a1+52);
    v0 = a2 << 2;
    a1 = v0 + 28;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_0882156C; }
    goto L_08821568;
L_08821568:;
    a3 = (u32)((s32)v1 >> 2);
    goto L_0882156C;
L_0882156C:;
    v0 = a3 << 2;
    a1 = a1 + v0;
    a1 = a1 + 16;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08821580 */
rv_t func_08821580(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08821580:;
    sp = sp - 64;
    s2 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 20;
    v0 = LD32(a0+20);
    cnd_ = v0 == 0;
    s1 = LD32(s0);
    if (cnd_) { goto L_088217AC; }
    goto L_088215B0;
L_088215B0:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_088215D0; }
    goto L_088215BC;
L_088215BC:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_088215D0;
L_088215D0:;
    cnd_ = (s32)s3 <= 0;
    v1 = s1 + 0;
    if (cnd_) { goto L_088215EC; }
    goto L_088215D8;
L_088215D8:;
    v0 = s3 + 0;
    goto L_088215DC;
L_088215DC:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088215DC; }
    goto L_088215EC;
L_088215EC:;
    a1 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088215F8;
L_088215F8:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_08821600;
L_08821600:;
    v0 = LD32(s2+32);
    ST32(s0, s1);
    a2 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08821614;
L_08821614:;
    v1 = LD_U8(a2);
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    ST8(v0, v1);
    a2 = a2 + 1;
    v1 = LD32(s0);
    a3 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s0, a3);
    if (cnd_) { goto L_08821614; }
    goto L_0882163C;
L_0882163C:;
    v0 = LD32(s2+44);
    a1 = s2 + 44;
    cnd_ = v0 == 0;
    s1 = a3 + 0;
    if (cnd_) { goto L_08821798; }
    goto L_0882164C;
L_0882164C:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s3 = 1;
    if (cnd_) { goto L_0882166C; }
    goto L_08821658;
L_08821658:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s3 = (u32)((s32)v1 >> 2);
    goto L_0882166C;
L_0882166C:;
    cnd_ = (s32)s3 <= 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_08821688; }
    goto L_08821674;
L_08821674:;
    v0 = s3 + 0;
    goto L_08821678;
L_08821678:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08821678; }
    goto L_08821688;
L_08821688:;
    a1 = LD32(a1);
    a0 = a3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821694;
L_08821694:;
    v1 = s3 << 2;
    s1 = s1 + v1;
    goto L_0882169C;
L_0882169C:;
    v0 = LD32(s2+36);
    ST32(s0, s1);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_088216B0;
L_088216B0:;
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
    if (cnd_) { goto L_088216B0; }
    goto L_088216D8;
L_088216D8:;
    v0 = LD32(s2+60);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_088216E8;
L_088216E8:;
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
    if (cnd_) { goto L_088216E8; }
    goto L_08821710;
L_08821710:;
    v0 = LD32(s2+56);
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, v0);
    goto L_08821720;
L_08821720:;
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
    if (cnd_) { goto L_08821720; }
    goto L_08821748;
L_08821748:;
    ST32(sp+16, 0);
    a2 = sp + 16;
    a1 = 0 + 0;
    goto L_08821754;
L_08821754:;
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
    if (cnd_) { goto L_08821754; }
    goto L_0882177C;
L_0882177C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08821798:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(v1+1, v0);
    s1 = v1 + 5;
    goto L_0882169C;
L_088217AC:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s1, v0);
    s1 = s1 + 4;
    goto L_08821600;
}

/* 088217C0 */
rv_t func_088217C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088217C0:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = a0 + 20;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088217E4;
L_088217E4:;
    a0 = s0 + 0;
    a1 = LD32(s1+32);
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088217F0;
L_088217F0:;
    a1 = s1 + 44;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088217FC;
L_088217FC:;
    a1 = LD32(s1+36);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821808;
L_08821808:;
    a1 = LD32(s1+60);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821814;
L_08821814:;
    a1 = LD32(s1+56);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821820;
L_08821820:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882182C;
L_0882182C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08821840 */
rv_t func_08821840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08821840:;
    sp = sp - 48;
    s5 = a1 + 0;
    a1 = 0 + 0;
    s3 = a2 + 0;
    s1 = a0 + 0;
    a0 = a2 + 0;
    a2 = 0 + 0;
    s2 = s1 + 20;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821880;
L_08821880:;
    a0 = LD32(s1+20);
    cnd_ = a0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088218A0; }
    goto L_0882188C;
L_0882188C:;
    cnd_ = v0 == a0;
    if (cnd_) { v1 = LD32(s5+8); goto L_088218DC; }
    goto L_08821894;
L_08821894:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882189C;
L_0882189C:;
    ST32(s1+20, 0);
    goto L_088218A0;
L_088218A0:;
    ST32(s2+8, 0);
    cnd_ = s0 == 0;
    ST32(s2+4, 0);
    if (cnd_) { goto L_08821AA0; }
    goto L_088218AC;
L_088218AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088218B4;
L_088218B4:;
    v1 = v0 + 1;
    ST32(s2+4, v0);
    a0 = v1 + 0;
    ST32(s2+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088218C8;
L_088218C8:;
    cnd_ = v0 != 0;
    ST32(s1+20, v0);
    if (cnd_) { goto L_08821A8C; }
    goto L_088218D0;
L_088218D0:;
    ST32(s2+8, 0);
    ST32(s2+4, 0);
    goto L_088218D8;
L_088218D8:;
    v1 = LD32(s5+8);
    goto L_088218DC;
L_088218DC:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a1 = s1 + 32;
    if (cnd_) { goto L_08821A74; }
    goto L_088218E8;
L_088218E8:;
    v0 = (s32)v1 < 8;
    cnd_ = v0 == 0;
    s0 = s1 + 44;
    if (cnd_) { goto L_088219D4; }
    goto L_088218F4;
L_088218F4:;
    v0 = (s32)v1 < 10;
    cnd_ = v0 == 0;
    a1 = s1 + 60;
    if (cnd_) { goto L_088219BC; }
    goto L_08821900;
L_08821900:;
    v0 = (s32)v1 < 11;
    cnd_ = v0 == 0;
    a1 = s1 + 56;
    if (cnd_) { goto L_088219A4; }
    goto L_0882190C;
L_0882190C:;
    v0 = LD32(s2+4);
    goto L_08821910;
L_08821910:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08821994; }
    goto L_08821918;
L_08821918:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08821984; }
    goto L_08821924;
L_08821924:;
    v0 = LD32(s5+8);
    v0 = (s32)v0 < 9;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08821958; }
    goto L_08821934;
L_08821934:;
    goto L_08821938;
L_08821938:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08821958:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821968;
L_08821968:;
    a1 = LD32(sp);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_08821938; }
    goto L_08821974;
L_08821974:;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882197C;
L_0882197C:;
    goto L_08821938;
L_08821984:;
    a0 = s0 + 0;
    { u64 r_ = func_0881F08C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882198C;
L_0882198C:;
    ST32(s1+40, v0);
    goto L_08821924;
L_08821994:;
    a0 = s2 + 0;
    { u64 r_ = func_0881F08C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882199C;
L_0882199C:;
    ST32(s1+16, v0);
    goto L_08821918;
L_088219A4:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088219B4;
L_088219B4:;
    v0 = LD32(s2+4);
    goto L_08821910;
L_088219BC:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088219CC;
L_088219CC:;
    v1 = LD32(s5+8);
    goto L_08821900;
L_088219D4:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088219E4;
L_088219E4:;
    a0 = LD32(s1+44);
    cnd_ = a0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08821A04; }
    goto L_088219F0;
L_088219F0:;
    cnd_ = v0 == a0;
    a1 = s1 + 36;
    if (cnd_) { goto L_08821A40; }
    goto L_088219F8;
L_088219F8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821A00;
L_08821A00:;
    ST32(s1+44, 0);
    goto L_08821A04;
L_08821A04:;
    ST32(s0+8, 0);
    cnd_ = s4 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08821A6C; }
    goto L_08821A10;
L_08821A10:;
    a0 = s4 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821A18;
L_08821A18:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821A2C;
L_08821A2C:;
    cnd_ = v0 != 0;
    ST32(s1+44, v0);
    if (cnd_) { goto L_08821A58; }
    goto L_08821A34;
L_08821A34:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08821A3C;
L_08821A3C:;
    a1 = s1 + 36;
    goto L_08821A40;
L_08821A40:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821A50;
L_08821A50:;
    v1 = LD32(s5+8);
    goto L_088218F4;
L_08821A58:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821A64;
L_08821A64:;
    a1 = s1 + 36;
    goto L_08821A40;
L_08821A6C:;
    ST32(s1+44, 0);
    goto L_08821A3C;
L_08821A74:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821A84;
L_08821A84:;
    v1 = LD32(s5+8);
    goto L_088218E8;
L_08821A8C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821A98;
L_08821A98:;
    v1 = LD32(s5+8);
    goto L_088218DC;
L_08821AA0:;
    ST32(s1+20, 0);
    goto L_088218D8;
}

/* 08821AA8 */
rv_t func_08821AA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821AA8:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821AB8;
L_08821AB8:;
    v0 = v0 + 20;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08821AC8 */
rv_t func_08821AC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08821AC8:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821AE4;
L_08821AE4:;
    a2 = sp + 0;
    v0 = LD32(s1+76);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08821AF4;
L_08821AF4:;
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
    if (cnd_) { goto L_08821AF4; }
    goto L_08821B1C;
L_08821B1C:;
    f0 = BITSF(LD32(s1+80));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08821B2C;
L_08821B2C:;
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
    if (cnd_) { goto L_08821B2C; }
    goto L_08821B54;
L_08821B54:;
    v0 = LD32(s1+72);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_08821B64;
L_08821B64:;
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
    if (cnd_) { goto L_08821B64; }
    goto L_08821B8C;
L_08821B8C:;
    f0 = BITSF(LD32(s1+84));
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f0));
    goto L_08821B9C;
L_08821B9C:;
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
    if (cnd_) { goto L_08821B9C; }
    goto L_08821BC4;
L_08821BC4:;
    f0 = BITSF(LD32(s1+88));
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    goto L_08821BD4;
L_08821BD4:;
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
    if (cnd_) { goto L_08821BD4; }
    goto L_08821BFC;
L_08821BFC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08821C10 */
rv_t func_08821C10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821C10:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821C2C;
L_08821C2C:;
    a1 = LD32(s1+76);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821C38;
L_08821C38:;
    f12 = BITSF(LD32(s1+80));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821C44;
L_08821C44:;
    a1 = LD32(s1+72);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821C50;
L_08821C50:;
    f12 = BITSF(LD32(s1+84));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821C5C;
L_08821C5C:;
    f12 = BITSF(LD32(s1+88));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821C68;
L_08821C68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08821C7C */
rv_t func_08821C7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08821C7C:;
    sp = sp - 64;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821CA8;
L_08821CA8:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 5;
    cnd_ = v0 == 0;
    a1 = s2 + 76;
    if (cnd_) { goto L_08821F64; }
    goto L_08821CB8;
L_08821CB8:;
    v0 = D_08AD3994 - (14740);
    s0 = v0 + 14740;
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = s0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08821F5C; }
    goto L_08821CD0;
L_08821CD0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821CD8;
L_08821CD8:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821CEC;
L_08821CEC:;
    cnd_ = v0 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08821F48; }
    goto L_08821CF4;
L_08821CF4:;
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    a1 = s2 + 76;
    goto L_08821D00;
L_08821D00:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821D10;
L_08821D10:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821D20;
L_08821D20:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08821D48; }
    goto L_08821D2C;
L_08821D2C:;
    cnd_ = v0 == a0;
    if (cnd_) { v1 = LD32(s3+8); goto L_08821D84; }
    goto L_08821D34;
L_08821D34:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+8, 0); goto L_08821D4C; }
    goto L_08821D3C;
L_08821D3C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821D44;
L_08821D44:;
    ST32(sp, 0);
    goto L_08821D48;
L_08821D48:;
    ST32(sp+8, 0);
    goto L_08821D4C;
L_08821D4C:;
    cnd_ = s0 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08821F40; }
    goto L_08821D54;
L_08821D54:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821D5C;
L_08821D5C:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821D70;
L_08821D70:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08821F2C; }
    goto L_08821D78;
L_08821D78:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08821D80;
L_08821D80:;
    v1 = LD32(s3+8);
    goto L_08821D84;
L_08821D84:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a1 = s2 + 80;
    if (cnd_) { goto L_08821F14; }
    goto L_08821D90;
L_08821D90:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    s4 = sp + 16;
    if (cnd_) { goto L_08821E88; }
    goto L_08821D9C;
L_08821D9C:;
    v1 = LD32(sp);
    goto L_08821DA0;
L_08821DA0:;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08821DB0; }
    goto L_08821DA8;
L_08821DA8:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_08821DB0;
L_08821DB0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = D_08B230C0 - (12480); goto L_08821E5C; }
    goto L_08821DBC;
L_08821DBC:;
    a0 = LD32(sp+16);
    goto L_08821DC0;
L_08821DC0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08821E4C; }
    goto L_08821DC8;
L_08821DC8:;
    a0 = LD32(sp);
    ST32(s4+4, 0);
    cnd_ = a0 != 0;
    ST32(s4+8, 0);
    if (cnd_) { goto L_08821E3C; }
    goto L_08821DD8;
L_08821DD8:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    v0 = LD32(s3+8);
    goto L_08821DE4;
L_08821DE4:;
    v0 = (s32)v0 < 7;
    cnd_ = v0 == 0;
    a1 = s2 + 84;
    if (cnd_) { goto L_08821E10; }
    goto L_08821DF0;
L_08821DF0:;
    goto L_08821DF4;
L_08821DF4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08821E10:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821E20;
L_08821E20:;
    a1 = s2 + 88;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821E34;
L_08821E34:;
    goto L_08821DF4;
L_08821E3C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821E44;
L_08821E44:;
    ST32(sp, 0);
    goto L_08821DD8;
L_08821E4C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821E54;
L_08821E54:;
    ST32(sp+16, 0);
    goto L_08821DC8;
L_08821E5C:;
    a0 = LD32(s0+12480);
    a1 = sp + 0;
    a0 = a0 + 104;
    { rv_t r_ = func_08AA4004(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821E6C;
L_08821E6C:;
    a0 = LD32(s0+12480);
    ST32(s2+72, v0);
    a1 = s4 + 0;
    a0 = a0 + 116;
    { rv_t r_ = func_08AA4004(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821E80;
L_08821E80:;
    a0 = LD32(sp+16);
    goto L_08821DC0;
L_08821E88:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821E98;
L_08821E98:;
    a0 = LD32(sp+16);
    s0 = v0 + 0;
    cnd_ = a0 == 0;
    s4 = sp + 16;
    if (cnd_) { goto L_08821EBC; }
    goto L_08821EA8;
L_08821EA8:;
    cnd_ = v0 == a0;
    v1 = LD32(sp);
    if (cnd_) { goto L_08821DA0; }
    goto L_08821EB0;
L_08821EB0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821EB8;
L_08821EB8:;
    ST32(sp+16, 0);
    goto L_08821EBC;
L_08821EBC:;
    ST32(sp+24, 0);
    cnd_ = s0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08821F0C; }
    goto L_08821EC8;
L_08821EC8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821ED0;
L_08821ED0:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821EE4;
L_08821EE4:;
    cnd_ = v0 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08821EF8; }
    goto L_08821EEC;
L_08821EEC:;
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    goto L_08821D9C;
L_08821EF8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F04;
L_08821F04:;
    v1 = LD32(sp);
    goto L_08821DA0;
L_08821F0C:;
    ST32(sp+16, 0);
    goto L_08821D9C;
L_08821F14:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F24;
L_08821F24:;
    v1 = LD32(s3+8);
    goto L_08821D90;
L_08821F2C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F38;
L_08821F38:;
    v1 = LD32(s3+8);
    goto L_08821D84;
L_08821F40:;
    ST32(sp, 0);
    goto L_08821D80;
L_08821F48:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F54;
L_08821F54:;
    a1 = s2 + 76;
    goto L_08821D00;
L_08821F5C:;
    ST32(sp+16, 0);
    goto L_08821CF4;
L_08821F64:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F74;
L_08821F74:;
    a1 = s2 + 80;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F88;
L_08821F88:;
    a1 = s2 + 72;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08821F9C;
L_08821F9C:;
    v0 = LD32(s3+8);
    goto L_08821DE4;
}

/* 08821FA4 */
rv_t func_08821FA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08821FA4:;
    sp = sp - 16;
    { rv_t r_ = func_08821AA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821FB4;
L_08821FB4:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08821FC4 */
rv_t func_08821FC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08821FC4:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821AC8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08821FE0;
L_08821FE0:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s1+92));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_08821FF0;
L_08821FF0:;
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
    if (cnd_) { goto L_08821FF0; }
    goto L_08822018;
L_08822018:;
    f0 = BITSF(LD32(s1+96));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08822028;
L_08822028:;
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
    if (cnd_) { goto L_08822028; }
    goto L_08822050;
L_08822050:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08822064 */
rv_t func_08822064(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822064:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821C10(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822080;
L_08822080:;
    f12 = BITSF(LD32(s1+92));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882208C;
L_0882208C:;
    f12 = BITSF(LD32(s1+96));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822098;
L_08822098:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088220AC */
rv_t func_088220AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088220AC:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821C7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088220C8;
L_088220C8:;
    a1 = s0 + 92;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 96;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088220E0;
L_088220E0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088220F4;
L_088220F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822108 */
rv_t func_08822108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822108:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822118;
L_08822118:;
    v0 = v0 + 12;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822128 */
rv_t func_08822128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08822128:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822144;
L_08822144:;
    a2 = sp + 0;
    v0 = LD32(s1+72);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08822154;
L_08822154:;
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
    if (cnd_) { goto L_08822154; }
    goto L_0882217C;
L_0882217C:;
    f0 = BITSF(LD32(s1+76));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_0882218C;
L_0882218C:;
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
    if (cnd_) { goto L_0882218C; }
    goto L_088221B4;
L_088221B4:;
    v0 = LD32(s1+80);
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, v0);
    goto L_088221C4;
L_088221C4:;
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
    if (cnd_) { goto L_088221C4; }
    goto L_088221EC;
L_088221EC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08822200 */
rv_t func_08822200(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822200:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882221C;
L_0882221C:;
    a1 = LD32(s1+72);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822228;
L_08822228:;
    f12 = BITSF(LD32(s1+76));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822234;
L_08822234:;
    a1 = LD32(s1+80);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822240;
L_08822240:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822254 */
rv_t func_08822254(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822254:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822270;
L_08822270:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08822284;
L_08822284:;
    a1 = s0 + 76;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 80;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882229C;
L_0882229C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088222B0;
L_088222B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088222C4 */
rv_t func_088222C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088222C4:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088222D4;
L_088222D4:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088222E4 */
rv_t func_088222E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088222E4:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822300;
L_08822300:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s0+72));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_08822310;
L_08822310:;
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
    if (cnd_) { goto L_08822310; }
    goto L_08822338;
L_08822338:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882234C */
rv_t func_0882234C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882234C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822368;
L_08822368:;
    f12 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822374;
L_08822374:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822388 */
rv_t func_08822388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822388:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 72;
    s1 = a2 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088223A8;
L_088223A8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088223BC;
L_088223BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088223D0 */
rv_t func_088223D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088223D0:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088223E0;
L_088223E0:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088223F0 */
rv_t func_088223F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088223F0:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882240C;
L_0882240C:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s1+72));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_0882241C;
L_0882241C:;
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
    if (cnd_) { goto L_0882241C; }
    goto L_08822444;
L_08822444:;
    f0 = BITSF(LD32(s1+76));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08822454;
L_08822454:;
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
    if (cnd_) { goto L_08822454; }
    goto L_0882247C;
L_0882247C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08822490 */
rv_t func_08822490(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822490:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088224AC;
L_088224AC:;
    f12 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088224B8;
L_088224B8:;
    f12 = BITSF(LD32(s1+76));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088224C4;
L_088224C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088224D8 */
rv_t func_088224D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088224D8:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088224F4;
L_088224F4:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 76;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882250C;
L_0882250C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08822520;
L_08822520:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822534 */
rv_t func_08822534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822534:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822544;
L_08822544:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822554 */
rv_t func_08822554(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08822554:;
    sp = sp - 48;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822570;
L_08822570:;
    a2 = sp + 16;
    v0 = LD_U16(s0+72);
    ST32(sp, 0);
    a1 = 0 + 0;
    ST16(sp+16, v0);
    ST16(sp, v0);
    goto L_08822588;
L_08822588:;
    v0 = LD_U8(a2);
    v1 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08822588; }
    goto L_088225B0;
L_088225B0:;
    v0 = LD_U16(sp+2);
    a2 = sp + 18;
    a1 = 0 + 0;
    ST16(sp+18, v0);
    goto L_088225C0;
L_088225C0:;
    v0 = LD_U8(a2);
    v1 = LD32(s1);
    a1 = a1 + 1;
    a0 = a1 < 0x2u;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s1);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088225C0; }
    goto L_088225E8;
L_088225E8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088225FC */
rv_t func_088225FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088225FC:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822618;
L_08822618:;
    v0 = LD_U16(s0+72);
    a0 = s1 + 0;
    ST32(sp, 0);
    a1 = v0 + 0;
    ST16(sp, v0);
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822630;
L_08822630:;
    a0 = s1 + 0;
    a1 = LD_U16(sp+2);
    { rv_t r_ = func_0882DA60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882263C;
L_0882263C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08822650 */
rv_t func_08822650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08822650:;
    sp = sp - 32;
    s0 = a2 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882266C;
L_0882266C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08822680;
L_08822680:;
    v1 = LD_U16(sp);
    ST16(s1+72, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882269C */
rv_t func_0882269C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882269C:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088226AC;
L_088226AC:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088226BC */
rv_t func_088226BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088226BC:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088226D8;
L_088226D8:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s1+72));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_088226E8;
L_088226E8:;
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
    if (cnd_) { goto L_088226E8; }
    goto L_08822710;
L_08822710:;
    v0 = LD32(s1+76);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_08822720;
L_08822720:;
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
    if (cnd_) { goto L_08822720; }
    goto L_08822748;
L_08822748:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882275C */
rv_t func_0882275C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882275C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822778;
L_08822778:;
    f12 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822784;
L_08822784:;
    a1 = LD32(s1+76);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822790;
L_08822790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088227A4 */
rv_t func_088227A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088227A4:;
    sp = sp - 16;
    s2 = a2 + 0;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088227C8;
L_088227C8:;
    a1 = s0 + 72;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088227DC;
L_088227DC:;
    v1 = LD32(s1+8);
    s0 = s0 + 76;
    a0 = s2 + 0;
    v1 = (s32)v1 < 6;
    a1 = s0 + 0;
    a2 = 4;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08822814; }
    goto L_088227FC;
L_088227FC:;
    goto L_08822800;
L_08822800:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08822814:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882281C;
L_0882281C:;
    goto L_08822800;
}

/* 08822824 */
rv_t func_08822824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822824:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822834;
L_08822834:;
    v0 = v0 + 4;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822844 */
rv_t func_08822844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08822844:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822860;
L_08822860:;
    a2 = sp + 0;
    v0 = LD32(s0+72);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_08822870;
L_08822870:;
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
    if (cnd_) { goto L_08822870; }
    goto L_08822898;
L_08822898:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088228AC */
rv_t func_088228AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088228AC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088228C8;
L_088228C8:;
    a1 = LD32(s1+72);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088228D4;
L_088228D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088228E8 */
rv_t func_088228E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088228E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 72;
    s1 = a2 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822908;
L_08822908:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882291C;
L_0882291C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822930 */
rv_t func_08822930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822930:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822944;
L_08822944:;
    t0 = LD32(s0+72);
    a3 = v0 + 4;
    a2 = 0 + 0;
    cnd_ = t0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0882297C; }
    goto L_08822958;
L_08822958:;
    v0 = LD32(s0+76);
    a0 = v0 + 4;
    goto L_08822960;
L_08822960:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    v1 = a1 < t0;
    v0 = 0 < v0;
    a2 = a2 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_08822960; }
    goto L_0882297C;
L_0882297C:;
    v0 = a2 << 3;
    a3 = a3 + v0;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822998 */
rv_t func_08822998(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08822998:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088229B4;
L_088229B4:;
    a2 = 0 + 0;
    a0 = LD32(s1+72);
    a1 = 0 + 0;
    cnd_ = a0 == 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_088229EC; }
    goto L_088229C8;
L_088229C8:;
    v0 = LD32(s1+76);
    a0 = v0 + 4;
    goto L_088229D0;
L_088229D0:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    v1 = a1 < a3;
    v0 = 0 < v0;
    a2 = a2 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_088229D0; }
    goto L_088229EC;
L_088229EC:;
    ST32(sp, a2);
    a1 = 0 + 0;
    a2 = sp + 0;
    goto L_088229F8;
L_088229F8:;
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
    if (cnd_) { goto L_088229F8; }
    goto L_08822A20;
L_08822A20:;
    a0 = LD32(s1+72);
    cnd_ = a0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08822AD0; }
    goto L_08822A2C;
L_08822A2C:;
    v1 = LD32(s1+76);
    goto L_08822A30;
L_08822A30:;
    a3 = t0 << 3;
    v1 = a3 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    if (cnd_) { t0 = t0 + 1; goto L_08822AC4; }
    goto L_08822A44;
L_08822A44:;
    v0 = LD32(v1);
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, v0);
    goto L_08822A54;
L_08822A54:;
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
    if (cnd_) { goto L_08822A54; }
    goto L_08822A7C;
L_08822A7C:;
    v0 = LD32(s1+76);
    a2 = sp + 8;
    a1 = 0 + 0;
    v0 = a3 + v0;
    v1 = LD32(v0+4);
    ST32(sp+8, v1);
    goto L_08822A94;
L_08822A94:;
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
    if (cnd_) { goto L_08822A94; }
    goto L_08822ABC;
L_08822ABC:;
    a0 = LD32(s1+72);
    t0 = t0 + 1;
    goto L_08822AC4;
L_08822AC4:;
    v0 = t0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+76); goto L_08822A30; }
    goto L_08822AD0;
L_08822AD0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08822AE4 */
rv_t func_08822AE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08822AE4:;
    sp = sp - 32;
    s2 = a0 + 0;
    s3 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822B08;
L_08822B08:;
    a1 = 0 + 0;
    a3 = LD32(s2+72);
    a2 = 0 + 0;
    cnd_ = a3 == 0;
    t0 = a3 + 0;
    if (cnd_) { goto L_08822B40; }
    goto L_08822B1C;
L_08822B1C:;
    v0 = LD32(s2+76);
    a0 = v0 + 4;
    goto L_08822B24;
L_08822B24:;
    v0 = LD32(a0);
    a2 = a2 + 1;
    v1 = a2 < t0;
    v0 = 0 < v0;
    a1 = a1 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 8;
    if (cnd_) { goto L_08822B24; }
    goto L_08822B40;
L_08822B40:;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822B48;
L_08822B48:;
    a3 = LD32(s2+72);
    cnd_ = a3 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08822B7C; }
    goto L_08822B54;
L_08822B54:;
    v1 = LD32(s2+76);
    goto L_08822B58;
L_08822B58:;
    s0 = s1 << 3;
    a0 = s3 + 0;
    a1 = s0 + v1;
    v0 = LD32(a1+4);
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08822B98; }
    goto L_08822B70;
L_08822B70:;
    v0 = s1 < a3;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+76); goto L_08822B58; }
    goto L_08822B7C;
L_08822B7C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08822B98:;
    a1 = LD32(a1);
    { rv_t r_ = func_0882D900(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822BA0;
L_08822BA0:;
    v1 = LD32(s2+76);
    a0 = s3 + 0;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822BB4;
L_08822BB4:;
    a3 = LD32(s2+72);
    goto L_08822B70;
}

/* 08822BBC */
rv_t func_08822BBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08822BBC:;
    sp = sp - 32;
    s3 = a2 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822BE0;
L_08822BE0:;
    a0 = s3 + 0;
    a1 = s1 + 72;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08822BF4;
L_08822BF4:;
    a0 = LD32(s1+72);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08822C7C; }
    goto L_08822C00;
L_08822C00:;
    ST32(s1+76, v0);
    cnd_ = a0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08822C28; }
    goto L_08822C0C;
L_08822C0C:;
    goto L_08822C10;
L_08822C10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08822C28:;
    a1 = LD32(s1+76);
    goto L_08822C2C;
L_08822C2C:;
    s0 = s2 << 3;
    a0 = s3 + 0;
    a1 = a1 + s0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08822C44;
L_08822C44:;
    a1 = LD32(s1+76);
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a1 = a1 + 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08822C60;
L_08822C60:;
    v1 = LD32(s1+72);
    s2 = s2 + 1;
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+76); goto L_08822C2C; }
    goto L_08822C74;
L_08822C74:;
    goto L_08822C10;
L_08822C7C:;
    a0 = a0 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822C84;
L_08822C84:;
    a0 = LD32(s1+72);
    goto L_08822C00;
}

/* 08822C8C */
rv_t func_08822C8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08822C8C:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822C9C;
L_08822C9C:;
    v0 = v0 + 112;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08822CAC */
rv_t func_08822CAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08822CAC:;
    sp = sp - 128;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08822CC8;
L_08822CC8:;
    v0 = D_08B45A9C - (23196);
    a3 = v0 + 23196;
    v1 = s1 + 72;
    f5 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s1+72));
    f1 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(a3+4));
    f4 = BITSF(LD32(a3+8));
    f0 = f0 - f5;
    f1 = f1 - f3;
    f2 = f2 - f4;
    a2 = sp + 0;
    ST32(sp, FBITS(f0));
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    goto L_08822D0C;
L_08822D0C:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08822D0C; }
    goto L_08822D34;
L_08822D34:;
    v0 = s1 + 84;
    f4 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(a3+8));
    f0 = BITSF(LD32(s1+84));
    f2 = BITSF(LD32(a3));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(a3+4));
    f0 = f0 - f2;
    f4 = f4 - f5;
    f1 = f1 - f3;
    a2 = sp + 0;
    ST32(sp, FBITS(f0));
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f4));
    goto L_08822D70;
L_08822D70:;
    v0 = LD_U8(a2);
    v1 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0xcu;
    ST8(v1, v0);
    a2 = a2 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08822D70; }
    goto L_08822D98;
L_08822D98:;
    v0 = LD32(s1+120);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    goto L_08822DA8;
L_08822DA8:;
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
    if (cnd_) { goto L_08822DA8; }
    goto L_08822DD0;
L_08822DD0:;
    f0 = BITSF(LD32(s1+100));
    a2 = sp + 20;
    a1 = 0 + 0;
    ST32(sp+20, FBITS(f0));
    goto L_08822DE0;
L_08822DE0:;
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
    if (cnd_) { goto L_08822DE0; }
    goto L_08822E08;
L_08822E08:;
    f0 = BITSF(LD32(s1+104));
    a2 = sp + 24;
    a1 = 0 + 0;
    ST32(sp+24, FBITS(f0));
    goto L_08822E18;
L_08822E18:;
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
    if (cnd_) { goto L_08822E18; }
    goto L_08822E40;
L_08822E40:;
    f0 = BITSF(LD32(s1+108));
    a2 = sp + 28;
    a1 = 0 + 0;
    ST32(sp+28, FBITS(f0));
    goto L_08822E50;
L_08822E50:;
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
    if (cnd_) { goto L_08822E50; }
    goto L_08822E78;
L_08822E78:;
    f0 = BITSF(LD32(s1+112));
    a2 = sp + 32;
    a1 = 0 + 0;
    ST32(sp+32, FBITS(f0));
    goto L_08822E88;
L_08822E88:;
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
    if (cnd_) { goto L_08822E88; }
    goto L_08822EB0;
L_08822EB0:;
    f0 = BITSF(LD32(s1+96));
    a2 = sp + 36;
    a1 = 0 + 0;
    ST32(sp+36, FBITS(f0));
    goto L_08822EC0;
L_08822EC0:;
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
    if (cnd_) { goto L_08822EC0; }
    goto L_08822EE8;
L_08822EE8:;
    f0 = BITSF(LD32(s1+128));
    a2 = sp + 40;
    a1 = 0 + 0;
    ST32(sp+40, FBITS(f0));
    goto L_08822EF8;
L_08822EF8:;
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
    if (cnd_) { goto L_08822EF8; }
    goto L_08822F20;
L_08822F20:;
    f0 = BITSF(LD32(s1+132));
    a2 = sp + 44;
    a1 = 0 + 0;
    ST32(sp+44, FBITS(f0));
    goto L_08822F30;
L_08822F30:;
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
    if (cnd_) { goto L_08822F30; }
    goto L_08822F58;
L_08822F58:;
    f0 = BITSF(LD32(s1+136));
    a2 = sp + 48;
    a1 = 0 + 0;
    ST32(sp+48, FBITS(f0));
    goto L_08822F68;
L_08822F68:;
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
    if (cnd_) { goto L_08822F68; }
    goto L_08822F90;
L_08822F90:;
    f0 = BITSF(LD32(s1+140));
    a2 = sp + 52;
    a1 = 0 + 0;
    ST32(sp+52, FBITS(f0));
    goto L_08822FA0;
L_08822FA0:;
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
    if (cnd_) { goto L_08822FA0; }
    goto L_08822FC8;
L_08822FC8:;
    f0 = BITSF(LD32(s1+144));
    a2 = sp + 56;
    a1 = 0 + 0;
    ST32(sp+56, FBITS(f0));
    goto L_08822FD8;
L_08822FD8:;
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
    if (cnd_) { goto L_08822FD8; }
    goto L_08823000;
L_08823000:;
    f0 = BITSF(LD32(s1+148));
    a2 = sp + 60;
    a1 = 0 + 0;
    ST32(sp+60, FBITS(f0));
    goto L_08823010;
L_08823010:;
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
    if (cnd_) { goto L_08823010; }
    goto L_08823038;
L_08823038:;
    f0 = BITSF(LD32(s1+152));
    a2 = sp + 64;
    a1 = 0 + 0;
    ST32(sp+64, FBITS(f0));
    goto L_08823048;
L_08823048:;
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
    if (cnd_) { goto L_08823048; }
    goto L_08823070;
L_08823070:;
    f0 = BITSF(LD32(s1+156));
    a2 = sp + 68;
    a1 = 0 + 0;
    ST32(sp+68, FBITS(f0));
    goto L_08823080;
L_08823080:;
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
    if (cnd_) { goto L_08823080; }
    goto L_088230A8;
L_088230A8:;
    f0 = BITSF(LD32(s1+160));
    a2 = sp + 72;
    a1 = 0 + 0;
    ST32(sp+72, FBITS(f0));
    goto L_088230B8;
L_088230B8:;
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
    if (cnd_) { goto L_088230B8; }
    goto L_088230E0;
L_088230E0:;
    f0 = BITSF(LD32(s1+164));
    a2 = sp + 76;
    a1 = 0 + 0;
    ST32(sp+76, FBITS(f0));
    goto L_088230F0;
L_088230F0:;
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
    if (cnd_) { goto L_088230F0; }
    goto L_08823118;
L_08823118:;
    f0 = BITSF(LD32(s1+168));
    a2 = sp + 80;
    a1 = 0 + 0;
    ST32(sp+80, FBITS(f0));
    goto L_08823128;
L_08823128:;
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
    if (cnd_) { goto L_08823128; }
    goto L_08823150;
L_08823150:;
    f0 = BITSF(LD32(s1+172));
    a2 = sp + 84;
    a1 = 0 + 0;
    ST32(sp+84, FBITS(f0));
    goto L_08823160;
L_08823160:;
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
    if (cnd_) { goto L_08823160; }
    goto L_08823188;
L_08823188:;
    f0 = BITSF(LD32(s1+176));
    a2 = sp + 88;
    a1 = 0 + 0;
    ST32(sp+88, FBITS(f0));
    goto L_08823198;
L_08823198:;
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
    if (cnd_) { goto L_08823198; }
    goto L_088231C0;
L_088231C0:;
    f0 = BITSF(LD32(s1+180));
    a2 = sp + 92;
    a1 = 0 + 0;
    ST32(sp+92, FBITS(f0));
    goto L_088231D0;
L_088231D0:;
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
    if (cnd_) { goto L_088231D0; }
    goto L_088231F8;
L_088231F8:;
    f0 = BITSF(LD32(s1+184));
    a2 = sp + 96;
    a1 = 0 + 0;
    ST32(sp+96, FBITS(f0));
    goto L_08823208;
L_08823208:;
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
    if (cnd_) { goto L_08823208; }
    goto L_08823230;
L_08823230:;
    f0 = BITSF(LD32(s1+188));
    a2 = sp + 100;
    a1 = 0 + 0;
    ST32(sp+100, FBITS(f0));
    goto L_08823240;
L_08823240:;
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
    if (cnd_) { goto L_08823240; }
    goto L_08823268;
L_08823268:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
}

/* 0882327C */
rv_t func_0882327C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882327C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823298;
L_08823298:;
    a1 = s1 + 72;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232A4;
L_088232A4:;
    a1 = s1 + 84;
    a0 = s0 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232B0;
L_088232B0:;
    a1 = LD32(s1+120);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232BC;
L_088232BC:;
    f12 = BITSF(LD32(s1+100));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232C8;
L_088232C8:;
    f12 = BITSF(LD32(s1+104));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232D4;
L_088232D4:;
    f12 = BITSF(LD32(s1+108));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232E0;
L_088232E0:;
    f12 = BITSF(LD32(s1+112));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232EC;
L_088232EC:;
    f12 = BITSF(LD32(s1+96));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088232F8;
L_088232F8:;
    f12 = BITSF(LD32(s1+128));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823304;
L_08823304:;
    f12 = BITSF(LD32(s1+132));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823310;
L_08823310:;
    f12 = BITSF(LD32(s1+136));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882331C;
L_0882331C:;
    f12 = BITSF(LD32(s1+140));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823328;
L_08823328:;
    f12 = BITSF(LD32(s1+144));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823334;
L_08823334:;
    f12 = BITSF(LD32(s1+148));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823340;
L_08823340:;
    f12 = BITSF(LD32(s1+152));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882334C;
L_0882334C:;
    f12 = BITSF(LD32(s1+156));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823358;
L_08823358:;
    f12 = BITSF(LD32(s1+160));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823364;
L_08823364:;
    f12 = BITSF(LD32(s1+164));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823370;
L_08823370:;
    f12 = BITSF(LD32(s1+168));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882337C;
L_0882337C:;
    f12 = BITSF(LD32(s1+172));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823388;
L_08823388:;
    f12 = BITSF(LD32(s1+176));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823394;
L_08823394:;
    f12 = BITSF(LD32(s1+180));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088233A0;
L_088233A0:;
    f12 = BITSF(LD32(s1+184));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088233AC;
L_088233AC:;
    f12 = BITSF(LD32(s1+188));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088233B8;
L_088233B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088233CC */
rv_t func_088233CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088233CC:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088233E8;
L_088233E8:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088233FC;
L_088233FC:;
    a1 = s0 + 84;
    a0 = s1 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823410;
L_08823410:;
    a1 = s0 + 120;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823424;
L_08823424:;
    a1 = s0 + 100;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823438;
L_08823438:;
    a1 = s0 + 104;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882344C;
L_0882344C:;
    a1 = s0 + 108;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823460;
L_08823460:;
    a1 = s0 + 112;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823474;
L_08823474:;
    a1 = s0 + 96;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823488;
L_08823488:;
    a1 = s0 + 128;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882349C;
L_0882349C:;
    a1 = s0 + 132;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088234B0;
L_088234B0:;
    a1 = s0 + 136;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088234C4;
L_088234C4:;
    a1 = s0 + 140;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088234D8;
L_088234D8:;
    a1 = s0 + 144;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088234EC;
L_088234EC:;
    a1 = s0 + 148;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823500;
L_08823500:;
    a1 = s0 + 152;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823514;
L_08823514:;
    a1 = s0 + 156;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823528;
L_08823528:;
    a1 = s0 + 160;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882353C;
L_0882353C:;
    a1 = s0 + 164;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823550;
L_08823550:;
    a1 = s0 + 168;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823564;
L_08823564:;
    a1 = s0 + 172;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823578;
L_08823578:;
    a1 = s0 + 176;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882358C;
L_0882358C:;
    a1 = s0 + 180;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088235A0;
L_088235A0:;
    a1 = s0 + 184;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 188;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088235B8;
L_088235B8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088235CC;
L_088235CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088235E0 */
rv_t func_088235E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088235E0:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088235F0;
L_088235F0:;
    v0 = v0 + 20;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823600 */
rv_t func_08823600(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08823600:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882361C;
L_0882361C:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s1+72));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_0882362C;
L_0882362C:;
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
    if (cnd_) { goto L_0882362C; }
    goto L_08823654;
L_08823654:;
    f0 = BITSF(LD32(s1+76));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08823664;
L_08823664:;
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
    if (cnd_) { goto L_08823664; }
    goto L_0882368C;
L_0882368C:;
    f0 = BITSF(LD32(s1+80));
    a2 = sp + 8;
    a1 = 0 + 0;
    ST32(sp+8, FBITS(f0));
    goto L_0882369C;
L_0882369C:;
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
    if (cnd_) { goto L_0882369C; }
    goto L_088236C4;
L_088236C4:;
    f0 = BITSF(LD32(s1+84));
    a2 = sp + 12;
    a1 = 0 + 0;
    ST32(sp+12, FBITS(f0));
    goto L_088236D4;
L_088236D4:;
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
    if (cnd_) { goto L_088236D4; }
    goto L_088236FC;
L_088236FC:;
    v0 = LD32(s1+88);
    a2 = sp + 16;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    goto L_0882370C;
L_0882370C:;
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
    if (cnd_) { goto L_0882370C; }
    goto L_08823734;
L_08823734:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08823748 */
rv_t func_08823748(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823748:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823764;
L_08823764:;
    f12 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823770;
L_08823770:;
    f12 = BITSF(LD32(s1+76));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882377C;
L_0882377C:;
    f12 = BITSF(LD32(s1+80));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823788;
L_08823788:;
    f12 = BITSF(LD32(s1+84));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823794;
L_08823794:;
    a1 = LD32(s1+88);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088237A0;
L_088237A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088237B4 */
rv_t func_088237B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088237B4:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088237D0;
L_088237D0:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088237E4;
L_088237E4:;
    a1 = s0 + 76;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088237F8;
L_088237F8:;
    a1 = s0 + 80;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882380C;
L_0882380C:;
    a1 = s0 + 84;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 88;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823824;
L_08823824:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823838;
L_08823838:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882384C */
rv_t func_0882384C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882384C:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882385C;
L_0882385C:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882386C */
rv_t func_0882386C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882386C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823888;
L_08823888:;
    a2 = sp + 0;
    f0 = BITSF(LD32(s1+72));
    a1 = 0 + 0;
    ST32(sp, FBITS(f0));
    goto L_08823898;
L_08823898:;
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
    if (cnd_) { goto L_08823898; }
    goto L_088238C0;
L_088238C0:;
    f0 = BITSF(LD32(s1+76));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_088238D0;
L_088238D0:;
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
    if (cnd_) { goto L_088238D0; }
    goto L_088238F8;
L_088238F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882390C */
rv_t func_0882390C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882390C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823928;
L_08823928:;
    f12 = BITSF(LD32(s1+72));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823934;
L_08823934:;
    f12 = BITSF(LD32(s1+76));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823940;
L_08823940:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823954 */
rv_t func_08823954(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823954:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823970;
L_08823970:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 76;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823988;
L_08823988:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882399C;
L_0882399C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088239B0 */
rv_t func_088239B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088239B0:;
    sp = sp - 16;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088239C0;
L_088239C0:;
    v0 = v0 + 8;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088239D0 */
rv_t func_088239D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088239D0:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088239EC;
L_088239EC:;
    a2 = sp + 0;
    v0 = LD32(s1+72);
    a1 = 0 + 0;
    ST32(sp, v0);
    goto L_088239FC;
L_088239FC:;
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
    if (cnd_) { goto L_088239FC; }
    goto L_08823A24;
L_08823A24:;
    f0 = BITSF(LD32(s1+76));
    a2 = sp + 4;
    a1 = 0 + 0;
    ST32(sp+4, FBITS(f0));
    goto L_08823A34;
L_08823A34:;
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
    if (cnd_) { goto L_08823A34; }
    goto L_08823A5C;
L_08823A5C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08823A70 */
rv_t func_08823A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823A70:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823A8C;
L_08823A8C:;
    a1 = LD32(s1+72);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823A98;
L_08823A98:;
    f12 = BITSF(LD32(s1+76));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823AA4;
L_08823AA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823AB8 */
rv_t func_08823AB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823AB8:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823AD4;
L_08823AD4:;
    a1 = s0 + 72;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    s0 = s0 + 76;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823AEC;
L_08823AEC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823B00;
L_08823B00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823B14 */
rv_t func_08823B14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823B14:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823B28;
L_08823B28:;
    a0 = LD32(s0+80);
    a1 = v0 + 0;
    a2 = 1;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08823B4C; }
    goto L_08823B48;
L_08823B48:;
    a2 = (u32)((s32)v1 >> 2);
    goto L_08823B4C;
L_08823B4C:;
    v0 = a2 << 2;
    v0 = a1 + v0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823B64 */
rv_t func_08823B64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823B64:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823B84;
L_08823B84:;
    a1 = s0 + 72;
    v0 = LD32(s0+72);
    cnd_ = v0 == 0;
    s0 = LD32(s2);
    if (cnd_) { goto L_08823C00; }
    goto L_08823B94;
L_08823B94:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s1 = 1;
    if (cnd_) { goto L_08823BB4; }
    goto L_08823BA0;
L_08823BA0:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s1 = (u32)((s32)v1 >> 2);
    goto L_08823BB4;
L_08823BB4:;
    cnd_ = (s32)s1 <= 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08823BD0; }
    goto L_08823BBC;
L_08823BBC:;
    v0 = s1 + 0;
    goto L_08823BC0;
L_08823BC0:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08823BC0; }
    goto L_08823BD0;
L_08823BD0:;
    a1 = LD32(a1);
    a0 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823BDC;
L_08823BDC:;
    v1 = s1 << 2;
    s0 = s0 + v1;
    goto L_08823BE4;
L_08823BE4:;
    ST32(s2, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08823C00:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s0, v0);
    s0 = s0 + 4;
    goto L_08823BE4;
}

/* 08823C14 */
rv_t func_08823C14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823C14:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 72;
    s1 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823C34;
L_08823C34:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823C40;
L_08823C40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823C54 */
rv_t func_08823C54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823C54:;
    sp = sp - 16;
    s0 = a2 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823C74;
L_08823C74:;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823C84;
L_08823C84:;
    s1 = v0 + 0;
    v0 = LD32(s2+72);
    cnd_ = v0 == 0;
    s0 = s2 + 72;
    if (cnd_) { goto L_08823CA8; }
    goto L_08823C94;
L_08823C94:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08823CEC; }
    goto L_08823C9C;
L_08823C9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823CA4;
L_08823CA4:;
    ST32(s2+72, 0);
    goto L_08823CA8;
L_08823CA8:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08823D14; }
    goto L_08823CB8;
L_08823CB8:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823CC0;
L_08823CC0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823CD4;
L_08823CD4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+72, v0);
    if (cnd_) { goto L_08823D04; }
    goto L_08823CE4;
L_08823CE4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08823CEC;
L_08823CEC:;
    goto L_08823CF0;
L_08823CF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08823D04:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823D0C;
L_08823D0C:;
    goto L_08823CF0;
L_08823D14:;
    ST32(s2+72, 0);
    goto L_08823CEC;
}

/* 08823D1C */
rv_t func_08823D1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823D1C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08821520(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823D30;
L_08823D30:;
    a0 = LD32(s0+80);
    a1 = v0 + 0;
    a2 = 1;
    v1 = a0 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    cnd_ = a0 == 0;
    v1 = v1 + v0;
    if (cnd_) { goto L_08823D54; }
    goto L_08823D50;
L_08823D50:;
    a2 = (u32)((s32)v1 >> 2);
    goto L_08823D54;
L_08823D54:;
    v0 = a2 << 2;
    a1 = a1 + v0;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823D70 */
rv_t func_08823D70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823D70:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = a1 + 0;
    { rv_t r_ = func_08821580(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823D90;
L_08823D90:;
    a1 = s0 + 72;
    v0 = LD32(s0+72);
    cnd_ = v0 == 0;
    s0 = LD32(s2);
    if (cnd_) { goto L_08823E0C; }
    goto L_08823DA0;
L_08823DA0:;
    v1 = LD32(a1+8);
    cnd_ = v1 == 0;
    s1 = 1;
    if (cnd_) { goto L_08823DC0; }
    goto L_08823DAC;
L_08823DAC:;
    v1 = v1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    s1 = (u32)((s32)v1 >> 2);
    goto L_08823DC0;
L_08823DC0:;
    cnd_ = (s32)s1 <= 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08823DDC; }
    goto L_08823DC8;
L_08823DC8:;
    v0 = s1 + 0;
    goto L_08823DCC;
L_08823DCC:;
    v0 = v0 - 1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08823DCC; }
    goto L_08823DDC;
L_08823DDC:;
    a1 = LD32(a1);
    a0 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823DE8;
L_08823DE8:;
    v1 = s1 << 2;
    s0 = s0 + v1;
    goto L_08823DF0;
L_08823DF0:;
    ST32(s2, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08823E0C:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    ST32(s0, v0);
    s0 = s0 + 4;
    goto L_08823DF0;
}

/* 08823E20 */
rv_t func_08823E20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823E20:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 72;
    s1 = a1 + 0;
    { rv_t r_ = func_088217C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823E40;
L_08823E40:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DF84(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823E4C;
L_08823E4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08823E60 */
rv_t func_08823E60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08823E60:;
    sp = sp - 16;
    s0 = a2 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_08821840(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823E80;
L_08823E80:;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823E90;
L_08823E90:;
    s1 = v0 + 0;
    v0 = LD32(s2+72);
    cnd_ = v0 == 0;
    s0 = s2 + 72;
    if (cnd_) { goto L_08823EB4; }
    goto L_08823EA0;
L_08823EA0:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08823EF8; }
    goto L_08823EA8;
L_08823EA8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823EB0;
L_08823EB0:;
    ST32(s2+72, 0);
    goto L_08823EB4;
L_08823EB4:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08823F20; }
    goto L_08823EC4;
L_08823EC4:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823ECC;
L_08823ECC:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823EE0;
L_08823EE0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+72, v0);
    if (cnd_) { goto L_08823F10; }
    goto L_08823EF0;
L_08823EF0:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08823EF8;
L_08823EF8:;
    goto L_08823EFC;
L_08823EFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08823F10:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823F18;
L_08823F18:;
    goto L_08823EFC;
L_08823F20:;
    ST32(s2+72, 0);
    goto L_08823EF8;
}

/* 08823F28 */
u32 func_08823F28(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 240);
L_08823F28:;
    sp = sp - 240;
    v1 = 0 + 0;
    s3 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 5;
    cnd_ = v0 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08823FA0; }
    goto L_08823F6C;
L_08823F6C:;
    v0 = v1 + 0;
    sp = sp + 240;
    return v0;
L_08823FA0:;
    a1 = sp + 0;
    a2 = 128;
    a0 = s2 + 0;
    f0 = func_0882DD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08823FB0;
L_08823FB0:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823FB8;
L_08823FB8:;
    s6 = D_08B30750 - (1872);
    a0 = s6 + 1872;
    a1 = v0 + 0;
    { u64 r_ = func_088D2BD4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08823FC8;
L_08823FC8:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08823F6C; }
    goto L_08823FD0;
L_08823FD0:;
    a0 = 88;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823FD8;
L_08823FD8:;
    a0 = v0 + 0;
    a1 = sp + 0;
    s5 = v0 + 0;
    func_088D3140(a0, a1);
    goto L_08823FE8;
L_08823FE8:;
    a0 = s2 + 0;
    a1 = sp + 148;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08823FF4;
L_08823FF4:;
    v0 = LD32(sp+148);
    a1 = s5 + 72;
    a0 = s2 + 0;
    ST32(s5+12, v0);
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824008;
L_08824008:;
    a1 = s5 + 76;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08824014;
L_08824014:;
    a1 = s5 + 77;
    a0 = s2 + 0;
    func_0882DAA0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08824020;
L_08824020:;
    a1 = s5 + 78;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882402C;
L_0882402C:;
    v1 = LD32(s3+8);
    cnd_ = (s32)v1 <= 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0882406C; }
    goto L_08824038;
L_08824038:;
    a1 = sp + 152;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824040;
L_08824040:;
    a0 = LD32(sp+152);
    cnd_ = a0 != 0;
    s7 = s5 + 64;
    if (cnd_) { goto L_0882438C; }
    goto L_0882404C;
L_0882404C:;
    cnd_ = a0 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08824324; }
    goto L_08824054;
L_08824054:;
    v1 = LD32(s3+8);
    goto L_08824058;
L_08824058:;
    cnd_ = (s32)v1 <= 0;
    a1 = s5 + 56;
    if (cnd_) { goto L_0882406C; }
    goto L_08824060;
L_08824060:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824068;
L_08824068:;
    v1 = LD32(s3+8);
    goto L_0882406C;
L_0882406C:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a1 = s5 + 60;
    if (cnd_) { goto L_08824314; }
    goto L_08824078;
L_08824078:;
    a0 = s2 + 0;
    goto L_0882407C;
L_0882407C:;
    a1 = sp + 156;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824084;
L_08824084:;
    a0 = LD32(sp+156);
    cnd_ = a0 != 0;
    if (cnd_) { ST32(s5+16, a0); goto L_088240DC; }
    goto L_08824090;
L_08824090:;
    a0 = s2 + 0;
    goto L_08824094;
L_08824094:;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882409C;
L_0882409C:;
    v1 = LD32(s5+12);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s5+16); goto L_088240B4; }
    goto L_088240AC;
L_088240AC:;
    v1 = 1;
    goto L_08823F6C;
L_088240B4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_08823F6C; }
    goto L_088240BC;
L_088240BC:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088240C4;
L_088240C4:;
    a1 = LD32(s5+16);
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_0883688C(a0, a1);
    goto L_088240D4;
L_088240D4:;
    ST32(s5+84, s0);
    goto L_088240AC;
L_088240DC:;
    a0 = a0 << 2;
    fp = s5 + 16;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088240E8;
L_088240E8:;
    a0 = LD32(sp+156);
    ST32(fp+4, v0);
    v0 = s5 + 24;
    cnd_ = a0 != 0;
    ST32(sp+172, v0);
    if (cnd_) { goto L_088242F8; }
    goto L_088240FC;
L_088240FC:;
    a1 = s5 + 32;
    cnd_ = a0 != 0;
    ST32(sp+176, a1);
    if (cnd_) { goto L_088242E0; }
    goto L_08824108;
L_08824108:;
    cnd_ = a0 != 0;
    s7 = s5 + 40;
    if (cnd_) { goto L_088242C8; }
    goto L_08824110;
L_08824110:;
    cnd_ = a0 != 0;
    s4 = s5 + 48;
    if (cnd_) { goto L_088242B0; }
    goto L_08824118;
L_08824118:;
    s0 = 0 + 0;
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08824220; }
    goto L_08824124;
L_08824124:;
    a1 = sp + 132;
    goto L_08824128;
L_08824128:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824130;
L_08824130:;
    a0 = s2 + 0;
    a1 = sp + 148;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882413C;
L_0882413C:;
    v0 = LD32(sp+148);
    a0 = s2 + 0;
    a1 = sp + 160;
    ST32(sp+128, v0);
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824150;
L_08824150:;
    a0 = s2 + 0;
    a1 = sp + 144;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882415C;
L_0882415C:;
    v1 = LD32(s3+8);
    ST32(sp+164, 0);
    cnd_ = (s32)v1 <= 0;
    ST32(sp+168, 0);
    if (cnd_) { goto L_0882417C; }
    goto L_0882416C;
L_0882416C:;
    a0 = s2 + 0;
    a1 = sp + 164;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824178;
L_08824178:;
    v1 = LD32(s3+8);
    goto L_0882417C;
L_0882417C:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088242A0; }
    goto L_08824188;
L_08824188:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08824290; }
    goto L_08824194;
L_08824194:;
    v0 = LD32(sp+128);
    goto L_08824198;
L_08824198:;
    cnd_ = v0 != 0;
    a1 = LD32(sp+132);
    if (cnd_) { goto L_08824280; }
    goto L_088241A0;
L_088241A0:;
    a0 = s6 + 1872;
    { u64 r_ = func_088D2D84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088241A8;
L_088241A8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882420C; }
    goto L_088241B0;
L_088241B0:;
    a1 = LD32(sp+172);
    v0 = LD32(fp+4);
    f0 = BITSF(LD32(sp+160));
    v1 = LD32(a1+4);
    a1 = s0 << 2;
    v0 = v0 + a1;
    v1 = v1 + a1;
    ST32(v1, FBITS(f0));
    v1 = LD32(sp+176);
    ST32(v0, a0);
    v0 = LD32(v1+4);
    v1 = LD_U8(sp+144);
    v0 = v0 + s0;
    ST8(v0, v1);
    s0 = s0 + 1;
    v0 = LD32(s7+4);
    v1 = LD32(sp+164);
    a0 = LD32(s4+4);
    v0 = v0 + a1;
    ST32(v0, v1);
    a0 = a0 + a1;
    v0 = LD32(sp+168);
    ST32(a0, v0);
    goto L_0882420C;
L_0882420C:;
    a0 = LD32(sp+156);
    s1 = s1 + 1;
    v0 = s1 < a0;
    cnd_ = v0 != 0;
    a1 = sp + 132;
    if (cnd_) { goto L_08824128; }
    goto L_08824220;
L_08824220:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = s2 + 0; goto L_08824094; }
    goto L_08824228;
L_08824228:;
    v0 = LD32(s5+16);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5+16, s0); goto L_08824238; }
    goto L_08824238;
L_08824238:;
    v0 = LD32(s5+24);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5+24, s0); goto L_08824248; }
    goto L_08824248;
L_08824248:;
    v0 = LD32(s5+32);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5+32, s0); goto L_08824258; }
    goto L_08824258;
L_08824258:;
    v0 = LD32(s5+40);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5+40, s0); goto L_08824268; }
    goto L_08824268;
L_08824268:;
    v0 = LD32(s5+48);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5+48, s0); goto L_08824090; }
    goto L_08824278;
L_08824278:;
    a0 = s2 + 0;
    goto L_08824094;
L_08824280:;
    a0 = s6 + 1872;
    { u64 r_ = func_088D2BD4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08824288;
L_08824288:;
    goto L_088241A8;
L_08824290:;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_08824298;
L_08824298:;
    v0 = LD32(sp+128);
    goto L_08824198;
L_088242A0:;
    a1 = sp + 168;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088242A8;
L_088242A8:;
    v1 = LD32(s3+8);
    goto L_08824188;
L_088242B0:;
    ST32(s5+48, a0);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088242BC;
L_088242BC:;
    ST32(s4+4, v0);
    a0 = LD32(sp+156);
    goto L_08824118;
L_088242C8:;
    ST32(s5+40, a0);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088242D4;
L_088242D4:;
    ST32(s7+4, v0);
    a0 = LD32(sp+156);
    goto L_08824110;
L_088242E0:;
    ST32(s5+32, a0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088242E8;
L_088242E8:;
    v1 = LD32(sp+176);
    a0 = LD32(sp+156);
    ST32(v1+4, v0);
    goto L_08824108;
L_088242F8:;
    ST32(s5+24, a0);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824304;
L_08824304:;
    v1 = LD32(sp+172);
    a0 = LD32(sp+156);
    ST32(v1+4, v0);
    goto L_088240FC;
L_08824314:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882431C;
L_0882431C:;
    a0 = s2 + 0;
    goto L_0882407C;
L_08824324:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882432C;
L_0882432C:;
    s1 = v0 + 4;
    a0 = s1 + 0;
    s0 = v0 + 0;
    func_0887A69C(a0);
    goto L_0882433C;
L_0882433C:;
    v0 = LD32(s7+4);
    v1 = s4 << 2;
    a1 = s0 + 0;
    v0 = v0 + v1;
    ST32(v0, s0);
    a0 = s2 + 0;
    s4 = s4 + 1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882435C;
L_0882435C:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_08824368;
L_08824368:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_0887A720(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08824374;
L_08824374:;
    v0 = LD32(sp+152);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08824324; }
    goto L_08824384;
L_08824384:;
    v1 = LD32(s3+8);
    goto L_08824058;
L_0882438C:;
    ST32(s5+64, a0);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824398;
L_08824398:;
    ST32(s7+4, v0);
    a0 = LD32(sp+152);
    goto L_0882404C;
}

/* 088243A4 */
u32 func_088243A4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088243A4:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_08823F28(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088243E4;
L_088243E4:;
    sp = sp + 48;
    return v0;
}

/* 088243F0 */
u32 func_088243F0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_088243F0:;
    sp = sp - 304;
    a2 = 128;
    s2 = a0 + 0;
    v1 = 0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+8);
    a0 = a1 + 0;
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08824454; }
    goto L_08824430;
L_08824430:;
    v0 = v1 + 0;
    sp = sp + 304;
    return v0;
L_08824454:;
    f0 = func_0882DD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882445C;
L_0882445C:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08824464;
L_08824464:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = v0 + 0;
    v0 = func_088D2F44(a0, a1);
    goto L_08824474;
L_08824474:;
    s3 = sp + 128;
    s4 = sp + 256;
    a0 = 36;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08824430; }
    goto L_08824488;
L_08824488:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824490;
L_08824490:;
    a0 = v0 + 0;
    a1 = sp + 0;
    s0 = v0 + 0;
    func_088D3AD0(a0, a1);
    goto L_088244A0;
L_088244A0:;
    a2 = 128;
    a1 = s3 + 0;
    a0 = s1 + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088244B0;
L_088244B0:;
    a0 = s3 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088244B8;
L_088244B8:;
    ST32(s0+28, v0);
    a1 = s0 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088244C8;
L_088244C8:;
    a1 = s0 + 8;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088244D4;
L_088244D4:;
    a1 = s0 + 12;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088244E0;
L_088244E0:;
    a1 = s0 + 16;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088244EC;
L_088244EC:;
    a1 = s0 + 20;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088244F8;
L_088244F8:;
    a1 = s0 + 21;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824504;
L_08824504:;
    v1 = LD32(s2+8);
    s0 = s0 + 22;
    a1 = s0 + 0;
    cnd_ = (s32)v1 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08824520; }
    goto L_08824518;
L_08824518:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824520;
L_08824520:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882452C;
L_0882452C:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824538;
L_08824538:;
    v1 = LD32(s2+8);
    a0 = s1 + 0;
    v1 = (s32)v1 < 2;
    cnd_ = v1 == 0;
    a1 = sp + 258;
    if (cnd_) { goto L_08824554; }
    goto L_0882454C;
L_0882454C:;
    v1 = 1;
    goto L_08824430;
L_08824554:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882455C;
L_0882455C:;
    v1 = 1;
    goto L_08824430;
}

/* 08824564 */
u32 func_08824564(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08824564:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_088243F0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088245A4;
L_088245A4:;
    sp = sp + 48;
    return v0;
}

/* 088245B0 */
u32 func_088245B0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088245B0:;
    sp = sp - 176;
    v1 = 0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08824608; }
    goto L_088245E4;
L_088245E4:;
    v0 = v1 + 0;
    sp = sp + 176;
    return v0;
L_08824608:;
    a1 = sp + 0;
    a2 = 128;
    a0 = s1 + 0;
    f0 = func_0882DD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08824618;
L_08824618:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08824620;
L_08824620:;
    v1 = D_08B30750 - (1872);
    s2 = v1 + 1872;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_088D2D84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08824634;
L_08824634:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088245E4; }
    goto L_0882463C;
L_0882463C:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824644;
L_08824644:;
    s3 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_088D3798(a0, a1);
    goto L_08824654;
L_08824654:;
    a1 = s3 + 12;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824660;
L_08824660:;
    a0 = s1 + 0;
    a1 = sp + 128;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882466C;
L_0882466C:;
    a1 = s3 + 24;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824678;
L_08824678:;
    v0 = LD32(s0+8);
    cnd_ = (s32)v0 <= 0;
    a1 = s3 + 28;
    if (cnd_) { goto L_08824690; }
    goto L_08824684;
L_08824684:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882468C;
L_0882468C:;
    v0 = LD32(s0+8);
    goto L_08824690;
L_08824690:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s3 + 32; goto L_08824714; }
    goto L_0882469C;
L_0882469C:;
    a1 = LD32(sp+128);
    goto L_088246A0;
L_088246A0:;
    a0 = s2 + 0;
    s4 = 0 + 0;
    v0 = func_088D2F44(a0, a1);
    goto L_088246AC;
L_088246AC:;
    ST32(s3+20, v0);
    a0 = s1 + 0;
    a1 = sp + 132;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088246BC;
L_088246BC:;
    a0 = LD32(sp+132);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08824700; }
    goto L_088246C8;
L_088246C8:;
    cnd_ = (s32)a0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088246F4; }
    goto L_088246D0;
L_088246D0:;
    s0 = s4 + 0;
    goto L_088246D4;
L_088246D4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_0882DBD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088246E0;
L_088246E0:;
    v0 = LD32(sp+132);
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_088246D4; }
    goto L_088246F4;
L_088246F4:;
    ST32(s3+16, s4);
    v1 = 1;
    goto L_088245E4;
L_08824700:;
    a0 = a0 << 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824708;
L_08824708:;
    a0 = LD32(sp+132);
    s4 = v0 + 0;
    goto L_088246C8;
L_08824714:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882471C;
L_0882471C:;
    a1 = LD32(sp+128);
    goto L_088246A0;
}

/* 08824724 */
u32 func_08824724(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08824724:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_088245B0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08824764;
L_08824764:;
    sp = sp + 48;
    return v0;
}

/* 08824770 */
void func_08824770(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 208);
L_08824770:;
    sp = sp - 208;
    v0 = D_08AF0EE8 - (3816);
    v1 = v0 + 3816;
    v0 = (u32)-1;
    s6 = sp + 144;
    fp = D_08AF0EC0 - (3776);
    s5 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a0 = LD32(a0+8);
    ST32(sp+12, v0);
    v0 = 1;
    ST32(sp, v1);
    ST8(sp+40, v0);
    ST32(sp+144, a1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, a1);
    ST32(sp+32, s6);
    cnd_ = (s32)a0 <= 0;
    ST32(sp+36, 0);
    if (cnd_) { goto L_08824800; }
    goto L_088247F8;
L_088247F8:;
    v0 = LD_U8(s2+22);
    s5 = 0 < v0;
    goto L_08824800;
L_08824800:;
    s1 = LD32(s2+16);
    v0 = 0x30000u;
    v0 = v0 | 0xd3f;
    v0 = v0 < s1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08825130; }
    goto L_08824818;
L_08824818:;
    s4 = D_08B2BB9C - (-17508);
    goto L_0882481C;
L_0882481C:;
    v0 = LD32(s4-17508);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD_U16(s2+20); goto L_088248C0; }
    goto L_08824828;
L_08824828:;
    v0 = LD_U8(s2+12);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD_U16(s2+20); goto L_088248C0; }
    goto L_0882483C;
L_0882483C:;
    s7 = D_08B28FD4 - (-28716);
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = s7 - 28716;
    if (cnd_) { goto L_088250FC; }
    goto L_0882484C;
L_0882484C:;
    v0 = LD32(v1+4);
    v1 = LD32(s7-28716);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08824890; }
    goto L_08824870;
L_08824870:;
    a0 = LD32(a1);
    goto L_08824874;
L_08824874:;
    v0 = LD32(a0+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08825110; }
    goto L_08824880;
L_08824880:;
    a1 = LD32(a1+4);
    goto L_08824884;
L_08824884:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08824874; }
    goto L_0882488C;
L_0882488C:;
    s0 = 0 + 0;
    goto L_08824890;
L_08824890:;
    cnd_ = s0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08825100; }
    goto L_08824898;
L_08824898:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088248A8;
L_088248A8:;
    cnd_ = v0 == 0;
    a0 = LD_U16(s2+20);
    if (cnd_) { goto L_088248C0; }
    goto L_088248B0;
L_088248B0:;
    v1 = LD_U16(s0+8);
    v0 = a0 & 0xffff;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08824C40; }
    goto L_088248C0;
L_088248C0:;
    v1 = a0 & 0xffff;
    v0 = 6;
    cnd_ = v1 == v0;
    v0 = LD32(s4-17508);
    if (cnd_) { goto L_08824C24; }
    goto L_088248D0;
L_088248D0:;
    v0 = D_08B2BBA0 - (-17504);
    goto L_088248D4;
L_088248D4:;
    v1 = LD32(v0-17504);
    cnd_ = v1 == 0;
    ST32(sp+144, s3);
    if (cnd_) { goto L_08824998; }
    goto L_088248E0;
L_088248E0:;
    v0 = LD32(s2+12);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0882499C; }
    goto L_088248F0;
L_088248F0:;
    s4 = D_08B28FFC - (-28676);
    v0 = 999;
    cnd_ = s1 == v0;
    v1 = s4 - 28676;
    if (cnd_) { goto L_088249CC; }
    goto L_08824900;
L_08824900:;
    v0 = LD32(v1+4);
    v1 = LD32(s4-28676);
    v0 = v0 - 1;
    v0 = s1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08824950; }
    goto L_08824924;
L_08824924:;
    a0 = LD32(a1);
    goto L_08824928;
L_08824928:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(v1+16); goto L_08824C04; }
    goto L_08824940;
L_08824940:;
    a1 = LD32(a1+4);
    goto L_08824944;
L_08824944:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08824928; }
    goto L_0882494C;
L_0882494C:;
    s0 = 0 + 0;
    goto L_08824950;
L_08824950:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088249CC; }
    goto L_08824958;
L_08824958:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824974;
L_08824974:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0882499C; }
    goto L_0882497C;
L_0882497C:;
    v1 = LD32(s0);
    a0 = LD_U16(s2+20);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_088249CC; }
    goto L_08824998;
L_08824998:;
    goto L_0882499C;
L_0882499C:;
    v0 = 1;
    sp = sp + 208;
    return;
L_088249CC:;
    cnd_ = s5 == 0;
    a2 = LD32(sp+144);
    if (cnd_) { goto L_08824BF4; }
    goto L_088249D4;
L_088249D4:;
    v1 = LD32(s2+4);
    a0 = LD_U16(s2+20);
    v0 = a2 - s2;
    v1 = v1 - v0;
    s5 = sp + 48;
    v0 = (u32)-1;
    s0 = D_08AF0F10 - (3856);
    s0 = s0 + 3856;
    ST32(sp+60, v0);
    a1 = s5 + 0;
    v0 = 1;
    ST32(sp+84, v1);
    ST32(sp+76, a2);
    ST8(sp+88, v0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    ST32(sp+64, 0);
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    ST32(sp+48, s0);
    ST32(sp+80, 0);
    ST8(sp+89, 0);
    v0 = func_08A25A00();
    goto L_08824A30;
L_08824A30:;
    s3 = v0 + 0;
    a0 = LD32(sp+76);
    v0 = LD32(sp+80);
    v1 = LD_U8(sp+89);
    ST32(sp+48, s0);
    v0 = a0 + v0;
    cnd_ = v1 == 0;
    ST32(sp+144, v0);
    if (cnd_) { goto L_08824A64; }
    goto L_08824A50;
L_08824A50:;
    v0 = LD_U8(sp+88);
    cnd_ = v0 != 0;
    v0 = fp + 3776;
    if (cnd_) { goto L_08824A68; }
    goto L_08824A5C;
L_08824A5C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08824BE4; }
    goto L_08824A64;
L_08824A64:;
    v0 = fp + 3776;
    goto L_08824A68;
L_08824A68:;
    ST32(s5, v0);
    goto L_08824A6C;
L_08824A6C:;
    a1 = LD32(sp+144);
    a0 = s2 + 0;
    v0 = func_0896F854(a0, a1, 0, 0, 0);
    goto L_08824A78;
L_08824A78:;
    cnd_ = v0 != 0;
    a0 = s4 - 28676;
    if (cnd_) { goto L_08824AD0; }
    goto L_08824A80;
L_08824A80:;
    v0 = LD_U16(s2+20);
    v0 = v0 - 14;
    v1 = v0 < 0x1cu;
    cnd_ = v1 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08824AD4; }
    goto L_08824A94;
L_08824A94:;
    v1 = D_08AD39A8 - (14760);
    v0 = v0 << 2;
    v1 = v1 + 14760;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08824AB0u: goto L_08824AB0; case 0x08824ACCu: goto L_08824ACC; case 0x08824B38u: goto L_08824B38; case 0x08824B5Cu: goto L_08824B5C; case 0x08824B6Cu: goto L_08824B6C; case 0x08824B8Cu: goto L_08824B8C; default: rs_break(0, 0x08824aa8); }
L_08824AB0:;
    a0 = 28;
    v0 = D_08B290C8 - (-28472);
    ST32(v0-28472, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824AC0;
L_08824AC0:;
    a0 = v0 + 0;
    a1 = LD32(sp+144);
    func_08869208(a0, a1);
    goto L_08824ACC;
L_08824ACC:;
    a0 = s4 - 28676;
    goto L_08824AD0;
L_08824AD0:;
    a1 = s1 + 0;
    goto L_08824AD4;
L_08824AD4:;
    a2 = 1;
    v0 = func_08AA4D2C(a0, a1, a2);
    goto L_08824ADC;
L_08824ADC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08824B18; }
    goto L_08824AE4;
L_08824AE4:;
    v0 = LD32(v0);
    v1 = LD32(v0-12);
    s0 = a0 + v1;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08824B04; }
    goto L_08824AFC;
L_08824AFC:;
    ST32(s0+12, s3);
    goto L_08824998;
L_08824B04:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824B10;
L_08824B10:;
    ST32(s0+12, s3);
    goto L_08824998;
L_08824B18:;
    cnd_ = s3 == 0;
    if (cnd_) {  goto L_0882499C; }
    goto L_08824B20;
L_08824B20:;
    v1 = LD32(s3);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824B30;
L_08824B30:;
    goto L_0882499C;
L_08824B38:;
    a0 = 184;
    v0 = D_08B290C8 - (-28472);
    ST32(v0-28472, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824B48;
L_08824B48:;
    a0 = v0 + 0;
    a1 = s6 + 0;
    func_08858E40(a0, a1);
    goto L_08824B54;
L_08824B54:;
    a0 = s4 - 28676;
    goto L_08824AD0;
L_08824B5C:;
    a0 = s1 + 0;
    { rv_t r_ = func_088691C4(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824B64;
L_08824B64:;
    a0 = s4 - 28676;
    goto L_08824AD0;
L_08824B6C:;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824B74;
L_08824B74:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_088685C4(a0, a1, a2);
    goto L_08824B84;
L_08824B84:;
    a0 = s4 - 28676;
    goto L_08824AD0;
L_08824B8C:;
    v0 = D_08AF0EE8 - (3816);
    v1 = v0 + 3816;
    v0 = (u32)-1;
    ST32(sp+108, v0);
    s0 = fp + 3776;
    a1 = sp + 96;
    v0 = LD32(sp+144);
    a0 = s1 + 0;
    ST32(sp+96, v1);
    ST32(sp+124, v0);
    v0 = 1;
    ST32(sp+128, s6);
    ST8(sp+136, v0);
    ST32(sp+100, 0);
    ST32(sp+104, 0);
    ST32(sp+112, 0);
    ST32(sp+116, 0);
    ST32(sp+120, 0);
    ST32(sp+132, 0);
    func_088670C4(a0, a1, 0, 0, 0);
    goto L_08824BDC;
L_08824BDC:;
    ST32(sp+96, s0);
    goto L_08824ACC;
L_08824BE4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08824BEC;
L_08824BEC:;
    v0 = fp + 3776;
    goto L_08824A68;
L_08824BF4:;
    a0 = LD_U16(s2+20);
    v0 = func_08A259F8();
    goto L_08824BFC;
L_08824BFC:;
    s3 = v0 + 0;
    goto L_08824A6C;
L_08824C04:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08824944; }
    goto L_08824C10;
L_08824C10:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08824940; }
    goto L_08824C1C;
L_08824C1C:;
    goto L_08824950;
L_08824C24:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B2BBA0 - (-17504); goto L_088248D4; }
    goto L_08824C2C;
L_08824C2C:;
    a1 = LD32(sp+144);
    a0 = s2 + 0;
    v0 = func_0896F170(a0, a1, t1, t2, t3);
    goto L_08824C38;
L_08824C38:;
    v0 = D_08B2BBA0 - (-17504);
    goto L_088248D4;
L_08824C40:;
    cnd_ = s5 == 0;
    a2 = LD32(sp+144);
    if (cnd_) { goto L_088250EC; }
    goto L_08824C48;
L_08824C48:;
    v1 = LD32(s2+4);
    s0 = D_08AF0F10 - (3856);
    v0 = a2 - s2;
    v1 = v1 - v0;
    v0 = (u32)-1;
    a0 = a0 & 0xffff;
    s0 = s0 + 3856;
    ST32(sp+60, v0);
    a1 = sp + 48;
    v0 = 1;
    ST32(sp+84, v1);
    ST32(sp+76, a2);
    ST8(sp+88, v0);
    ST32(sp+52, 0);
    ST32(sp+56, 0);
    ST32(sp+64, 0);
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    ST32(sp+48, s0);
    ST32(sp+80, 0);
    ST8(sp+89, 0);
    v0 = func_08A25A10();
    goto L_08824CA0;
L_08824CA0:;
    ST32(sp+152, v0);
    a0 = LD32(sp+76);
    v0 = LD32(sp+80);
    v1 = LD_U8(sp+89);
    ST32(sp+48, s0);
    v0 = a0 + v0;
    cnd_ = v1 == 0;
    ST32(sp+144, v0);
    if (cnd_) { goto L_08824CD4; }
    goto L_08824CC0;
L_08824CC0:;
    v0 = LD_U8(sp+88);
    cnd_ = v0 != 0;
    v0 = fp + 3776;
    if (cnd_) { goto L_08824CD8; }
    goto L_08824CCC;
L_08824CCC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088250DC; }
    goto L_08824CD4;
L_08824CD4:;
    v0 = fp + 3776;
    goto L_08824CD8;
L_08824CD8:;
    ST32(sp+48, v0);
    goto L_08824CDC;
L_08824CDC:;
    a1 = LD32(sp+144);
    a0 = s2 + 0;
    v0 = func_0896F170(a0, a1, 0, 0, 0);
    goto L_08824CE8;
L_08824CE8:;
    cnd_ = v0 != 0;
    a0 = s7 - 28716;
    if (cnd_) { goto L_08824D38; }
    goto L_08824CF0;
L_08824CF0:;
    v1 = LD_U16(s2+20);
    v0 = v1 < 0x49u;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08824D3C; }
    goto L_08824D00;
L_08824D00:;
    v0 = v1 << 2;
    v1 = D_08AD3A18 - (14872);
    v1 = v1 + 14872;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08824D1Cu: goto L_08824D1C; case 0x08824D34u: goto L_08824D34; case 0x08824DA4u: goto L_08824DA4; case 0x08824DC4u: goto L_08824DC4; case 0x08824DE4u: goto L_08824DE4; case 0x08824E04u: goto L_08824E04; case 0x08824E24u: goto L_08824E24; case 0x08824E44u: goto L_08824E44; case 0x08824E64u: goto L_08824E64; case 0x08824E84u: goto L_08824E84; case 0x08824EA4u: goto L_08824EA4; case 0x08824EC4u: goto L_08824EC4; case 0x08824EE4u: goto L_08824EE4; case 0x08824F04u: goto L_08824F04; case 0x08824F18u: goto L_08824F18; case 0x08824F38u: goto L_08824F38; case 0x08824F4Cu: goto L_08824F4C; case 0x08824F6Cu: goto L_08824F6C; case 0x08824FACu: goto L_08824FAC; case 0x08824FC0u: goto L_08824FC0; case 0x08824FD4u: goto L_08824FD4; case 0x08824FE8u: goto L_08824FE8; case 0x08824FFCu: goto L_08824FFC; case 0x08825010u: goto L_08825010; case 0x08825024u: goto L_08825024; case 0x08825038u: goto L_08825038; case 0x0882504Cu: goto L_0882504C; case 0x08825060u: goto L_08825060; case 0x08825074u: goto L_08825074; case 0x08825088u: goto L_08825088; case 0x0882509Cu: goto L_0882509C; case 0x088250B8u: goto L_088250B8; case 0x088250C8u: goto L_088250C8; default: rs_break(0, 0x08824d14); }
L_08824D1C:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824D24;
L_08824D24:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_08871DD0(a0, a1, a2);
    goto L_08824D34;
L_08824D34:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824D38:;
    a1 = s1 + 0;
    goto L_08824D3C;
L_08824D3C:;
    a2 = 1;
    { u64 r_ = func_08AA4CA4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08824D44;
L_08824D44:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08824D7C; }
    goto L_08824D4C;
L_08824D4C:;
    a0 = LD32(v0+12);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_08824D68; }
    goto L_08824D58;
L_08824D58:;
    v0 = LD32(sp+152);
    goto L_08824D5C;
L_08824D5C:;
    a0 = LD_U16(s2+20);
    ST32(s0+12, v0);
    goto L_088248C0;
L_08824D68:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824D74;
L_08824D74:;
    v0 = LD32(sp+152);
    goto L_08824D5C;
L_08824D7C:;
    v0 = LD32(sp+152);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD_U16(s2+20); goto L_088248C0; }
    goto L_08824D88;
L_08824D88:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824D9C;
L_08824D9C:;
    a0 = LD_U16(s2+20);
    goto L_088248C0;
L_08824DA4:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824DAC;
L_08824DAC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_08851738(a0, a1, a2);
    goto L_08824DBC;
L_08824DBC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824DC4:;
    a0 = 60;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824DCC;
L_08824DCC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_08870630(a0, a1, a2);
    goto L_08824DDC;
L_08824DDC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824DE4:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824DEC;
L_08824DEC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886C52C(a0, a1, a2);
    goto L_08824DFC;
L_08824DFC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824E04:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824E0C;
L_08824E0C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_08870068(a0, a1, a2);
    goto L_08824E1C;
L_08824E1C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824E24:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824E2C;
L_08824E2C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886F670(a0, a1, a2);
    goto L_08824E3C;
L_08824E3C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824E44:;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824E4C;
L_08824E4C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886DB4C(a0, a1, a2);
    goto L_08824E5C;
L_08824E5C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824E64:;
    a0 = 40;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824E6C;
L_08824E6C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886F34C(a0, a1, a2);
    goto L_08824E7C;
L_08824E7C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824E84:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824E8C;
L_08824E8C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_08859DE0(a0, a1, a2);
    goto L_08824E9C;
L_08824E9C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824EA4:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824EAC;
L_08824EAC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_088524AC(a0, a1, a2);
    goto L_08824EBC;
L_08824EBC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824EC4:;
    a0 = 144;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824ECC;
L_08824ECC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886E77C(a0, a1, a2);
    goto L_08824EDC;
L_08824EDC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824EE4:;
    a0 = 112;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824EEC;
L_08824EEC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886B36C(a0, a1, a2);
    goto L_08824EFC;
L_08824EFC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824F04:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_0886E220(a0, a1, 0, 0, 0);
    goto L_08824F10;
L_08824F10:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824F18:;
    a0 = 60;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824F20;
L_08824F20:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0886B1DC(a0, a1, a2);
    goto L_08824F30;
L_08824F30:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824F38:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08867604(a0, a1, 0, 0, 0);
    goto L_08824F44;
L_08824F44:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824F4C:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824F54;
L_08824F54:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 144;
    func_0887123C(a0, a1, a2);
    goto L_08824F64;
L_08824F64:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824F6C:;
    v0 = LD32(sp+144);
    a0 = 40;
    ST32(sp+148, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824F7C;
L_08824F7C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08850E80(a0, a1);
    goto L_08824F8C;
L_08824F8C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = sp + 148;
    v0 = LD32(v1+44);
    goto L_08824F9C;
L_08824F9C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08824FA4;
L_08824FA4:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824FAC:;
    a1 = LD32(sp+144);
    a0 = s1 + 0;
    func_0886FB18(a0, a1, 0, 0, 0);
    goto L_08824FB8;
L_08824FB8:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824FC0:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08858A6C(a0, a1, 0, 0, 0);
    goto L_08824FCC;
L_08824FCC:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824FD4:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08856340(a0, a1, 0, 0, 0);
    goto L_08824FE0;
L_08824FE0:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824FE8:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_0885599C(a0, a1, 0, 0, 0);
    goto L_08824FF4;
L_08824FF4:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08824FFC:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08854354(a0, a1, 0, 0, 0);
    goto L_08825008;
L_08825008:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08825010:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08853BE0(a0, a1, 0, 0, 0);
    goto L_0882501C;
L_0882501C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08825024:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08854F28(a0, a1, 0, 0, 0);
    goto L_08825030;
L_08825030:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08825038:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08857B74(a0, a1, 0, 0, 0);
    goto L_08825044;
L_08825044:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_0882504C:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_0885680C(a0, a1, 0, 0, 0);
    goto L_08825058;
L_08825058:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08825060:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_0886D8C4(a0, a1, 0, 0, 0);
    goto L_0882506C;
L_0882506C:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08825074:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_08856008(a0, a1, 0, 0, 0);
    goto L_08825080;
L_08825080:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_08825088:;
    a0 = s1 + 0;
    a1 = sp + 144;
    func_088575C0(a0, a1, 0, 0, 0);
    goto L_08825094;
L_08825094:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_0882509C:;
    a0 = LD32(s2+16);
    v0 = func_088736E4(a0, 0, 0, 0);
    goto L_088250A4;
L_088250A4:;
    v1 = LD32(v0);
    goto L_088250A8;
L_088250A8:;
    a0 = v0 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+48);
    goto L_08824F9C;
L_088250B8:;
    a0 = LD32(s2+16);
    v0 = func_08867C30(a0, 0, 0, 0);
    goto L_088250C0;
L_088250C0:;
    v1 = LD32(v0);
    goto L_088250A8;
L_088250C8:;
    a0 = LD32(s2+16);
    a1 = sp + 0;
    func_08872934(a0, a1, 0, 0, 0);
    goto L_088250D4;
L_088250D4:;
    a0 = s7 - 28716;
    goto L_08824D38;
L_088250DC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088250E4;
L_088250E4:;
    v0 = fp + 3776;
    goto L_08824CD8;
L_088250EC:;
    a0 = a0 & 0xffff;
    v0 = func_08A25A08();
    goto L_088250F4;
L_088250F4:;
    ST32(sp+152, v0);
    goto L_08824CDC;
L_088250FC:;
    v0 = 1;
    goto L_08825100;
L_08825100:;
    cnd_ = v0 == 0;
    a0 = LD_U16(s2+20);
    if (cnd_) { goto L_088248C0; }
    goto L_08825108;
L_08825108:;
    goto L_08824C40;
L_08825110:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08824884; }
    goto L_0882511C;
L_0882511C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08824880; }
    goto L_08825128;
L_08825128:;
    goto L_08824890;
L_08825130:;
    a0 = s1 + 0;
    func_08876F3C(a0);
    goto L_08825138;
L_08825138:;
    s4 = D_08B2BB9C - (-17508);
    goto L_0882481C;
}

/* 08825140 */
u32 func_08825140(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08825140:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s0 = LD32(a0+4);
    s0 = s0 - 24;
    a0 = s0 + 0;
    v0 = func_088F7660();
    goto L_08825170;
L_08825170:;
    s1 = v0 + 0;
    a2 = s0 + 0;
    a3 = 0 + 0;
    a0 = s2 + 0;
    a1 = v0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825188;
L_08825188:;
    a1 = s1 + 0;
    a0 = s3 + 0;
    func_08824770(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08825194;
L_08825194:;
    a0 = s1 + 0;
    func_088F7668();
    goto L_0882519C;
L_0882519C:;
    v0 = 1;
    sp = sp + 32;
    return v0;
}

/* 088251BC */
u32 func_088251BC(void)
{
    u32 v0 = 0;
L_088251BC:;
    v0 = 0 + 0;
    return v0;
}

/* 088251C4 */
u32 func_088251C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f20 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088251C4:;
    sp = sp - 96;
    s2 = a1 + 0;
    s0 = a0 + 0;
    s6 = LD_U16(a0+8);
    ST32(sp+4, 0);
    v0 = (s32)s6 < 2;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088255D0; }
    goto L_08825210;
L_08825210:;
    v1 = a0 << 1;
    goto L_08825214;
L_08825214:;
    v1 = v1 + a0;
    a2 = LD32(s0+12);
    v0 = D_08B29170 - (-28304);
    v1 = v1 << 2;
    v0 = v0 - 28304;
    a1 = LD_U16(s0+16);
    s3 = v1 + v0;
    a2 = a2 & 0x1;
    a0 = s3 + 0;
    ST32(sp+12, a2);
    func_0887A3D4(a0, a1);
    goto L_08825240;
L_08825240:;
    a2 = LD32(s0+16);
    cnd_ = a2 != 0;
    if (cnd_) { a1 = LD32(s3+8); goto L_08825598; }
    goto L_0882524C;
L_0882524C:;
    cnd_ = s6 != 0;
    a0 = LD_U16(s3);
    if (cnd_) { goto L_088253A8; }
    goto L_08825254;
L_08825254:;
    v0 = a0 & 0xffff;
    v0 = (s32)s6 < (s32)v0;
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088252A0; }
    goto L_08825264;
L_08825264:;
    a2 = LD32(s3+8);
    s5 = 0 + 0;
    s6 = D_08AEB658 - (-18856);
    goto L_08825270;
L_08825270:;
    v0 = a2 + s4;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088252DC; }
    goto L_08825280;
L_08825280:;
    v0 = LD32(s3+4);
    v0 = s5 + v0;
    ST32(v0, 0);
    goto L_0882528C;
L_0882528C:;
    s4 = s4 + 1;
    v0 = a0 & 0xffff;
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    s5 = s5 + 4;
    if (cnd_) { goto L_08825270; }
    goto L_088252A0;
L_088252A0:;
    v1 = 1;
    goto L_088252A4;
L_088252A4:;
    v0 = v1 + 0;
    sp = sp + 96;
    return v0;
L_088252DC:;
    a0 = 18;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088252E4;
L_088252E4:;
    v0 = LD32(s3+8);
    a0 = LD32(s3+4);
    s1 = 0 + 0;
    v0 = v0 + s4;
    a1 = LD_U8(v0);
    a0 = a0 + s5;
    func_08AA4BD8(a0, a1, 0, 0, 0);
    goto L_08825300;
L_08825300:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825308;
L_08825308:;
    a2 = LD32(s3+8);
    v0 = LD32(s3+4);
    v1 = a2 + s4;
    a0 = LD_U8(v1);
    v0 = s5 + v0;
    cnd_ = a0 == 0;
    s0 = LD32(v0);
    if (cnd_) { goto L_088253A0; }
    goto L_08825324;
L_08825324:;
    f20 = BITSF(LD32(s6-18856));
    goto L_08825328;
L_08825328:;
    ST16(s0, 0);
    a1 = s0 + 0;
    a2 = 2;
    ST16(s0+2, 0);
    a3 = 0 + 0;
    a0 = s2 + 0;
    ST32(s0+4, 0);
    s1 = s1 + 1;
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(s0+16, FBITS(f20));
    ST32(s0+20, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882535C;
L_0882535C:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825370;
L_08825370:;
    a1 = s0 + 4;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825384;
L_08825384:;
    a0 = LD32(s3+8);
    s0 = s0 + 24;
    v1 = a0 + s4;
    v0 = LD_U8(v1);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08825328; }
    goto L_088253A0;
L_088253A0:;
    a0 = LD_U16(s3);
    goto L_0882528C;
L_088253A8:;
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088252A0; }
    goto L_088253B0;
L_088253B0:;
    ST32(sp+24, 0);
    goto L_088253B4;
L_088253B4:;
    v0 = LD32(s3+8);
    v0 = v0 + s4;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    v1 = LD32(sp+24);
    if (cnd_) { goto L_088253F8; }
    goto L_088253C8;
L_088253C8:;
    v0 = LD32(s3+4);
    v0 = v1 + v0;
    ST32(v0, 0);
    goto L_088253D4;
L_088253D4:;
    v1 = LD32(sp+24);
    s4 = s4 + 1;
    v0 = a0 & 0xffff;
    v1 = v1 + 4;
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    ST32(sp+24, v1);
    if (cnd_) { goto L_088253B4; }
    goto L_088253F0;
L_088253F0:;
    v1 = 1;
    goto L_088252A4;
L_088253F8:;
    a0 = 18;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825400;
L_08825400:;
    v0 = LD32(s3+8);
    a0 = LD32(s3+4);
    s5 = 0 + 0;
    v0 = v0 + s4;
    a1 = LD_U8(v0);
    v0 = LD32(sp+24);
    a0 = a0 + v0;
    func_08AA4BD8(a0, a1, 0, 0, 0);
    goto L_08825420;
L_08825420:;
    v1 = LD32(s3+8);
    v0 = LD32(s3+4);
    v1 = v1 + s4;
    a0 = LD_U8(v1);
    v1 = LD32(sp+24);
    v0 = v1 + v0;
    cnd_ = a0 == 0;
    s1 = LD32(v0);
    if (cnd_) { goto L_088254F4; }
    goto L_08825440;
L_08825440:;
    v0 = (s32)s6 < 3;
    v1 = (s32)s6 < 4;
    ST32(sp+20, v0);
    fp = (s32)s6 < 5;
    s7 = (s32)s6 < 6;
    ST32(sp+16, v1);
    goto L_08825458;
L_08825458:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882546C;
L_0882546C:;
    a1 = s1 + 2;
    a0 = s2 + 0;
    a2 = 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825480;
L_08825480:;
    a1 = s1 + 4;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825494;
L_08825494:;
    v0 = LD32(sp+20);
    cnd_ = v0 == 0;
    a1 = s1 + 12;
    if (cnd_) { goto L_08825580; }
    goto L_088254A0;
L_088254A0:;
    cnd_ = fp == 0;
    a1 = s1 + 16;
    if (cnd_) { goto L_08825568; }
    goto L_088254A8;
L_088254A8:;
    cnd_ = s7 == 0;
    a1 = s1 + 20;
    if (cnd_) { goto L_08825550; }
    goto L_088254B0;
L_088254B0:;
    v1 = LD32(sp+12);
    goto L_088254B4;
L_088254B4:;
    cnd_ = v1 == 0;
    if (cnd_) { s0 = LD_U16(s1+2); goto L_088254CC; }
    goto L_088254BC;
L_088254BC:;
    v0 = LD32(sp+16);
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08825540; }
    goto L_088254C8;
L_088254C8:;
    s0 = LD_U16(s1+2);
    goto L_088254CC;
L_088254CC:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = s0 + 3; goto L_08825504; }
    goto L_088254D4;
L_088254D4:;
    ST32(s1+8, 0);
    v1 = LD32(s3+8);
    goto L_088254DC;
L_088254DC:;
    s5 = s5 + 1;
    v1 = v1 + s4;
    v0 = LD_U8(v1);
    v0 = (s32)s5 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_08825458; }
    goto L_088254F4;
L_088254F4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088254FC;
L_088254FC:;
    a0 = LD_U16(s3);
    goto L_088253D4;
L_08825504:;
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a0 = sp + 8;
    a1 = s0 + 0;
    a2 = 1;
    a3 = 4;
    ST32(sp+8, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_08825520;
L_08825520:;
    a2 = s0 + 0;
    a1 = LD32(sp+8);
    a0 = s2 + 0;
    a3 = 0 + 0;
    ST32(s1+8, a1);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825538;
L_08825538:;
    v1 = LD32(s3+8);
    goto L_088254DC;
L_08825540:;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825548;
L_08825548:;
    s0 = LD_U16(s1+2);
    goto L_088254CC;
L_08825550:;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825560;
L_08825560:;
    v1 = LD32(sp+12);
    goto L_088254B4;
L_08825568:;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825578;
L_08825578:;
    goto L_088254A8;
L_08825580:;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825590;
L_08825590:;
    goto L_088254A0;
L_08825598:;
    a0 = s2 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088255A4;
L_088255A4:;
    v1 = LD32(s0+8);
    v0 = 0xffff;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0882524C; }
    goto L_088255B8;
L_088255B8:;
    a1 = LD32(s0+16);
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088255C8;
L_088255C8:;
    goto L_0882524C;
L_088255D0:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088255E4;
L_088255E4:;
    a0 = LD32(sp+4);
    v0 = (s32)a0 < 2;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088252A4; }
    goto L_088255F4;
L_088255F4:;
    v1 = a0 << 1;
    goto L_08825214;
}

/* 088255FC */
void func_088255FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088255FC:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = a2 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a0 = s2 + 0;
    s0 = (s32)s0 < 6;
    s3 = a3 & 0xff;
    { rv_t r_ = func_0882DA28(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825634;
L_08825634:;
    a1 = s1 + 2;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825640;
L_08825640:;
    a1 = s1 + 4;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882564C;
L_0882564C:;
    a1 = s1 + 12;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825658;
L_08825658:;
    a1 = s1 + 16;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825664;
L_08825664:;
    a1 = s1 + 20;
    cnd_ = s0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08825714; }
    goto L_08825670;
L_08825670:;
    a0 = s2 + 0;
    goto L_08825674;
L_08825674:;
    cnd_ = s3 != 0;
    a1 = 4;
    if (cnd_) { goto L_088256FC; }
    goto L_0882567C;
L_0882567C:;
    v0 = LD_U16(s1+2);
    goto L_08825680;
L_08825680:;
    a0 = 18;
    s0 = v0 + 3;
    cnd_ = v0 != 0;
    s0 = (s0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_088256B0; }
    goto L_08825690;
L_08825690:;
    ST32(s1+8, 0);
    goto L_08825698;
L_08825698:;
    sp = sp + 48;
    return;
L_088256B0:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088256B8;
L_088256B8:;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 1;
    a3 = 4;
    ST32(sp, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_088256D0;
L_088256D0:;
    v1 = LD32(sp);
    ST32(s1+8, v1);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088256DC;
L_088256DC:;
    v1 = LD32(s2);
    a2 = LD32(s1+8);
    a0 = s2 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088256F4;
L_088256F4:;
    goto L_08825698;
L_088256FC:;
    v1 = LD32(s2);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882570C;
L_0882570C:;
    v0 = LD_U16(s1+2);
    goto L_08825680;
L_08825714:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882571C;
L_0882571C:;
    a0 = s2 + 0;
    goto L_08825674;
}

/* 08825724 */
u32 func_08825724(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08825724:;
    sp = sp - 64;
    s2 = a1 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    s7 = a0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825768;
L_08825768:;
    a0 = v0 + 0;
    v0 = D_08B2C0FC - (-16132);
    fp = v0 - 16132;
    v0 = func_0889F258(a0);
    goto L_08825778;
L_08825778:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08825924; }
    goto L_08825784;
L_08825784:;
    s1 = LD32(s7+16);
    v0 = 1;
    ST8(s0+28, v0);
    a0 = s1 << 1;
    a0 = a0 + s1;
    a0 = a0 << 2;
    a0 = a0 + 4;
    v0 = D_08B2AA0C - (-22004);
    ST32(v0-22004, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088257AC;
L_088257AC:;
    v0 = v0 + 4;
    ST32(v0-4, s1);
    v1 = v0 + 0;
    cnd_ = s1 == 0;
    a0 = s1 - 1;
    if (cnd_) { goto L_088257DC; }
    goto L_088257C0;
L_088257C0:;
    a1 = (u32)-1;
    goto L_088257C4;
L_088257C4:;
    a0 = a0 - 1;
    ST32(v1, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    cnd_ = a0 != a1;
    v1 = v1 + 12;
    if (cnd_) { goto L_088257C4; }
    goto L_088257DC;
L_088257DC:;
    ST32(s0+16, v0);
    a0 = fp + 0;
    a1 = s0 + 0;
    ST32(s0+12, s1);
    s6 = 0 + 0;
    func_088CDA5C(a0, a1);
    goto L_088257F4;
L_088257F4:;
    v0 = LD32(s7+16);
    cnd_ = (s32)v0 <= 0;
    s3 = LD32(s0+16);
    if (cnd_) { goto L_08825920; }
    goto L_08825800;
L_08825800:;
    s5 = 0 + 0;
    a0 = s2 + 0;
    goto L_08825808;
L_08825808:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825814;
L_08825814:;
    v1 = LD32(fp);
    a2 = 12;
    a3 = 0 + 0;
    s4 = v1 + s5;
    a1 = s4 + 28;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825830;
L_08825830:;
    a1 = s3 + 0;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825844;
L_08825844:;
    a1 = s3 + 4;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825858;
L_08825858:;
    a1 = s3 + 8;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882586C;
L_0882586C:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    ST32(sp, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825884;
L_08825884:;
    s6 = s6 + 1;
    v0 = LD32(sp);
    a0 = 25;
    s3 = s3 + 12;
    cnd_ = (s32)v0 <= 0;
    s5 = s5 + 40;
    if (cnd_) { goto L_08825908; }
    goto L_0882589C;
L_0882589C:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088258A4;
L_088258A4:;
    a1 = LD32(sp);
    a0 = sp + 4;
    a2 = 1;
    a3 = 4;
    ST32(sp+4, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_088258BC;
L_088258BC:;
    a3 = 0 + 0;
    s1 = LD32(sp+4);
    a2 = LD32(sp);
    a0 = s2 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088258D4;
L_088258D4:;
    a0 = 68;
    ST32(sp+8, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088258E0;
L_088258E0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 8;
    func_0889DC94(a0, a1);
    goto L_088258F0;
L_088258F0:;
    ST32(s4, s0);
    a0 = sp + 12;
    ST32(sp+12, s1);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_08825900;
L_08825900:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825908;
L_08825908:;
    func_08828FF8();
    goto L_08825910;
L_08825910:;
    v0 = LD32(s7+16);
    v0 = (s32)s6 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08825808; }
    goto L_08825920;
L_08825920:;
    v0 = 1;
    goto L_08825924;
L_08825924:;
    sp = sp + 64;
    return v0;
}

/* 08825954 */
u32 func_08825954(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08825954:;
    sp = sp - 48;
    v1 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088259AC; }
    goto L_08825984;
L_08825984:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_088259AC:;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088259B4;
L_088259B4:;
    v0 = D_08B2C0FC - (-16132);
    s5 = v0 - 16132;
    a0 = s5 + 0;
    v0 = func_088CDCA8(a0);
    goto L_088259C4;
L_088259C4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    func_08833EC4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088259D4;
L_088259D4:;
    a1 = LD32(s0);
    v0 = a1 + 1;
    s3 = v0 >> 1;
    cnd_ = s3 != 0;
    a0 = s0 + 28;
    if (cnd_) { goto L_08825A54; }
    goto L_088259E8;
L_088259E8:;
    ST32(s0+28, 0);
    goto L_088259EC;
L_088259EC:;
    a1 = a1 + 1;
    a0 = s5 + 0;
    v0 = func_088CDD20(a0, a1);
    goto L_088259F8;
L_088259F8:;
    v1 = LD32(s0);
    ST32(sp+4, v0);
    s2 = sp + 0;
    v1 = v1 + 1;
    ST32(sp, v1);
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08825A24; }
    goto L_08825A14;
L_08825A14:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825A1C;
L_08825A1C:;
    v1 = 1;
    goto L_08825984;
L_08825A24:;
    a1 = LD32(s2+4);
    goto L_08825A28;
L_08825A28:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825A38;
L_08825A38:;
    v1 = LD32(s2);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s2+4); goto L_08825A28; }
    goto L_08825A4C;
L_08825A4C:;
    goto L_08825A14;
L_08825A54:;
    a1 = s3 + 0;
    func_08AA4DC0(a0, a1, 0, 0, 0);
    goto L_08825A5C;
L_08825A5C:;
    cnd_ = s3 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08825A88; }
    goto L_08825A64;
L_08825A64:;
    s2 = 0 + 0;
    goto L_08825A68;
L_08825A68:;
    a0 = LD32(s0+28);
    a1 = s1 + 0;
    s4 = s4 + 1;
    a0 = a0 + s2;
    func_08833E5C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08825A7C;
L_08825A7C:;
    v0 = s4 < s3;
    cnd_ = v0 != 0;
    s2 = s2 + 12;
    if (cnd_) { goto L_08825A68; }
    goto L_08825A88;
L_08825A88:;
    a1 = LD32(s0);
    goto L_088259EC;
}

/* 08825A90 */
u32 func_08825A90(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08825A90:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_08825954(a0, a1);
    goto L_08825AD0;
L_08825AD0:;
    sp = sp + 48;
    return v0;
}

/* 08825ADC */
u32 func_08825ADC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_08825ADC:;
    sp = sp - 304;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+12);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08825B90; }
    goto L_08825B0C;
L_08825B0C:;
    a0 = s0 + 0;
    goto L_08825B10;
L_08825B10:;
    a1 = sp + 256;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825B20;
L_08825B20:;
    v1 = D_08B15A14 - (23060);
    v0 = LD32(v1+23060);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08825B40; }
    goto L_08825B30;
L_08825B30:;
    v0 = LD32(sp+256);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08825B80; }
    goto L_08825B3C;
L_08825B3C:;
    v1 = LD32(s1+8);
    goto L_08825B40;
L_08825B40:;
    v0 = 1;
    a0 = s0 + 0;
    cnd_ = v1 == v0;
    a1 = 4;
    if (cnd_) { goto L_08825B70; }
    goto L_08825B50;
L_08825B50:;
    goto L_08825B54;
L_08825B54:;
    v0 = 1;
    sp = sp + 304;
    return v0;
L_08825B70:;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825B78;
L_08825B78:;
    goto L_08825B54;
L_08825B80:;
    func_08828FC4(a0);
    goto L_08825B88;
L_08825B88:;
    v1 = LD32(s1+8);
    goto L_08825B40;
L_08825B90:;
    v0 = func_0887B084(a0);
    goto L_08825B98;
L_08825B98:;
    a1 = v0 + 0;
    a0 = sp + 0;
    s3 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825BA8;
L_08825BA8:;
    a0 = sp + 0;
    a1 = 46;
    v0 = func_08A89E7C(a0, a1);
    goto L_08825BB4;
L_08825BB4:;
    cnd_ = v0 == 0;
    s2 = v0 + 1;
    if (cnd_) { goto L_08825B0C; }
    goto L_08825BBC;
L_08825BBC:;
    v0 = func_088342CC();
    goto L_08825BC4;
L_08825BC4:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825BD0;
L_08825BD0:;
    a0 = sp + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825BDC;
L_08825BDC:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08825B0C; }
    goto L_08825BE4;
L_08825BE4:;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825BEC;
L_08825BEC:;
    a0 = s0 + 0;
    goto L_08825B10;
}

/* 08825BF4 */
u32 func_08825BF4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08825BF4:;
    sp = sp - 16;
    s1 = D_08B28BDC - (-29732);
    s0 = a1 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08825C30; }
    goto L_08825C18;
L_08825C18:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08825C30:;
    func_08849954(t1, t2, t3);
    goto L_08825C38;
L_08825C38:;
    a1 = s1 - 29732;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825C4C;
L_08825C4C:;
    v1 = LD32(s1-29732);
    a1 = 1;
    a0 = v1 << 1;
    a0 = a0 + v1;
    cnd_ = v1 == 0;
    a0 = a0 << 2;
    if (cnd_) { goto L_08825C18; }
    goto L_08825C64;
L_08825C64:;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825C6C;
L_08825C6C:;
    v1 = LD32(s1-29732);
    a1 = v0 + 0;
    a3 = 0 + 0;
    a2 = v1 << 1;
    a2 = a2 + v1;
    a2 = a2 << 2;
    v1 = D_08B28BE0 - (-29728);
    a0 = s0 + 0;
    ST32(v1-29728, v0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825C94;
L_08825C94:;
    a1 = 1;
    goto L_08825C18;
}

/* 08825C9C */
u32 func_08825C9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f12 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08825C9C:;
    sp = sp - 64;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+12);
    a0 = a0 & 0x1;
    func_088CAD80(a0);
    goto L_08825CC0;
L_08825CC0:;
    a0 = LD32(s0+12);
    a0 = (a0 >> 1) & 0x1;
    func_088CAFDC(a0, 0, 0, 0);
    goto L_08825CCC;
L_08825CCC:;
    v1 = LD32(s0+8);
    v0 = 1;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 40;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08825D00; }
    goto L_08825CE8;
L_08825CE8:;
    goto L_08825CEC;
L_08825CEC:;
    v0 = 1;
    sp = sp + 64;
    return v0;
L_08825D00:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825D08;
L_08825D08:;
    a0 = sp + 0;
    func_088CADA0(a0);
    goto L_08825D10;
L_08825D10:;
    f12 = BITSF(LD32(sp+16));
    func_088CAEC0(f12);
    goto L_08825D18;
L_08825D18:;
    f12 = BITSF(LD32(sp+20));
    func_088CAEE0(f12);
    goto L_08825D20;
L_08825D20:;
    f12 = BITSF(LD32(sp+24));
    func_088CAF00(f12);
    goto L_08825D28;
L_08825D28:;
    f12 = BITSF(LD32(sp+28));
    func_088CAF20(f12);
    goto L_08825D30;
L_08825D30:;
    a0 = sp + 32;
    func_088CB3A8(a0, 0, 0, 0);
    goto L_08825D38;
L_08825D38:;
    goto L_08825CEC;
}

/* 08825D40 */
u32 func_08825D40(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 192);
L_08825D40:;
    sp = sp - 192;
    s0 = a0 + 0;
    a0 = 120;
    s2 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825D74;
L_08825D74:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    func_088CD6C0(a0);
    goto L_08825D80;
L_08825D80:;
    v1 = LD32(s0+8);
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08825DBC; }
    goto L_08825D90;
L_08825D90:;
    goto L_08825D94;
L_08825D94:;
    v0 = a0 + 0;
    sp = sp + 192;
    return v0;
L_08825DBC:;
    v0 = (u32)-1;
    s0 = sp + 32;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    a0 = sp + 0;
    a1 = 100;
    a2 = s0 + 0;
    v0 = v0 + 3904;
    ST32(sp, v0);
    s5 = D_08AF0EC0 - (3776);
    ST32(sp+28, s2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { rv_t r_ = func_0882E2BC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825E00;
L_08825E00:;
    a1 = D_08AD3B3C - (15164);
    a1 = a1 + 15164;
    a0 = s1 + 12;
    t0 = s0 + 0;
    a2 = 100;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825E1C;
L_08825E1C:;
    v1 = 0 + 0;
    a1 = 46;
    a0 = s1 + v1;
    goto L_08825E28;
L_08825E28:;
    v0 = (u32)(s32)LD_S8(a0+12);
    cnd_ = v0 == a1;
    v1 = v1 + 1;
    if (cnd_) { goto L_08825E3C; }
    goto L_08825E34;
L_08825E34:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + v1; goto L_08825E28; }
    goto L_08825E3C;
L_08825E3C:;
    ST8(a0+12, 0);
    a1 = s1 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825E4C;
L_08825E4C:;
    a1 = s1 + 8;
    a0 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825E58;
L_08825E58:;
    s0 = LD32(s1+8);
    a0 = s0 << 5;
    a0 = a0 - s0;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825E70;
L_08825E70:;
    v0 = v0 + 4;
    ST32(v0-4, s0);
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_08825E98; }
    goto L_08825E84;
L_08825E84:;
    a1 = (u32)-1;
    goto L_08825E88;
L_08825E88:;
    v1 = v1 - 1;
    ST32(a0+104, 0);
    cnd_ = v1 != a1;
    a0 = a0 + 124;
    if (cnd_) { goto L_08825E88; }
    goto L_08825E98;
L_08825E98:;
    cnd_ = v0 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08825ED0; }
    goto L_08825EA0;
L_08825EA0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08825EB8; }
    goto L_08825EA8;
L_08825EA8:;
    v0 = s5 + 3776;
    goto L_08825EAC;
L_08825EAC:;
    a0 = 0 + 0;
    goto L_08825EB0;
L_08825EB0:;
    ST32(sp, v0);
    goto L_08825D90;
L_08825EB8:;
    a0 = s1 + 0;
    func_088CD6D8(a0, 0, 0, 0);
    goto L_08825EC0;
L_08825EC0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825EC8;
L_08825EC8:;
    v0 = s5 + 3776;
    goto L_08825EAC;
L_08825ED0:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08825FB4; }
    goto L_08825EDC;
L_08825EDC:;
    s4 = (u32)-1;
    s6 = D_08B263B8 - (25528);
    s2 = 0 + 0;
    v0 = LD32(s1+4);
    goto L_08825EEC;
L_08825EEC:;
    a0 = sp + 0;
    a1 = 100;
    s0 = v0 + s2;
    a2 = s0 + 0;
    { rv_t r_ = func_0882E2BC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F00;
L_08825F00:;
    a1 = s0 + 100;
    a0 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F0C;
L_08825F0C:;
    a0 = sp + 0;
    a1 = sp + 144;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F18;
L_08825F18:;
    a1 = s0 + 108;
    a0 = sp + 0;
    func_0882DBD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08825F24;
L_08825F24:;
    a1 = s0 + 110;
    a0 = sp + 0;
    func_0882DBD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08825F30;
L_08825F30:;
    a1 = s0 + 112;
    a0 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F3C;
L_08825F3C:;
    a1 = s0 + 116;
    a0 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F48;
L_08825F48:;
    a1 = s0 + 120;
    a0 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F54;
L_08825F54:;
    a0 = s0 + 0;
    v0 = func_088325D0(a0);
    goto L_08825F5C;
L_08825F5C:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825F64;
L_08825F64:;
    s3 = s3 + 1;
    a2 = 0 + 0;
    a0 = s0 + 0;
    s2 = s2 + 124;
    cnd_ = v0 == s4;
    ST32(s0+100, v0);
    if (cnd_) { goto L_0882601C; }
    goto L_08825F7C;
L_08825F7C:;
    a0 = LD32(s0+120);
    a0 = a0 << 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825F88;
L_08825F88:;
    a2 = v0 + 0;
    a0 = sp + 0;
    cnd_ = v0 == 0;
    ST32(s0+104, v0);
    if (cnd_) { goto L_08825FEC; }
    goto L_08825F98;
L_08825F98:;
    a1 = LD32(s0+120);
    a1 = a1 << 4;
    { rv_t r_ = func_0882E2BC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08825FA4;
L_08825FA4:;
    v1 = LD32(s1+8);
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08825EEC; }
    goto L_08825FB4;
L_08825FB4:;
    v0 = s5 + 3776;
    a0 = s1 + 0;
    ST32(sp, v0);
    v0 = func_088CD51C(a0);
    goto L_08825FC4;
L_08825FC4:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08825D90; }
    goto L_08825FCC;
L_08825FCC:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08825D94; }
    goto L_08825FD4;
L_08825FD4:;
    a0 = s1 + 0;
    func_088CD6D8(a0, 0, 0, 0);
    goto L_08825FDC;
L_08825FDC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08825FE4;
L_08825FE4:;
    a0 = 1;
    goto L_08825D90;
L_08825FEC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08826004; }
    goto L_08825FF4;
L_08825FF4:;
    v0 = D_08AF0EC0 - (3776);
    goto L_08825FF8;
L_08825FF8:;
    a0 = 0 + 0;
    v0 = v0 + 3776;
    goto L_08825EB0;
L_08826004:;
    a0 = s1 + 0;
    func_088CD6D8(a0, 0, 0, 0);
    goto L_0882600C;
L_0882600C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826014;
L_08826014:;
    v0 = D_08AF0EC0 - (3776);
    goto L_08825FF8;
L_0882601C:;
    a1 = LD32(s6+25528);
    v0 = func_0883A334(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08826024;
L_08826024:;
    ST32(s0+100, v0);
    goto L_08825F7C;
}

/* 0882602C */
u32 func_0882602C(u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0882602C:;
    sp = sp - 64;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 32;
    a0 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp+28, a2);
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826074;
L_08826074:;
    a0 = LD32(sp+32);
    a0 = a0 << 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826080;
L_08826080:;
    a1 = LD32(sp+32);
    a0 = sp + 0;
    a2 = v0 + 0;
    a1 = a1 << 1;
    s0 = v0 + 0;
    { rv_t r_ = func_0882E2BC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826098;
L_08826098:;
    a1 = LD32(sp+32);
    a0 = s0 + 0;
    v0 = func_088CD588(a0);
    goto L_088260A4;
L_088260A4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088260C0; }
    goto L_088260AC;
L_088260AC:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088260C0; }
    goto L_088260B4;
L_088260B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088260BC;
L_088260BC:;
    goto L_088260C0;
L_088260C0:;
    v0 = 1;
    sp = sp + 64;
    return v0;
}

/* 088260D0 */
u32 func_088260D0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088260D0:;
    sp = sp - 48;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826100;
L_08826100:;
    a1 = sp + 4;
    a0 = LD32(sp);
    v0 = func_088EDD3C(a0, a1, 0, 0, 0);
    goto L_0882610C;
L_0882610C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08826148; }
    goto L_08826114;
L_08826114:;
    v0 = LD32(s0+12);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = LD32(sp+4);
    if (cnd_) { goto L_0882612C; }
    goto L_08826124;
L_08826124:;
    v0 = 1;
    ST8(a1+12, v0);
    goto L_0882612C;
L_0882612C:;
    a1 = a1 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826138;
L_08826138:;
    v1 = LD32(sp+4);
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08826168; }
    goto L_08826148;
L_08826148:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08826168:;
    a0 = 6;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826170;
L_08826170:;
    a0 = LD32(sp+4);
    s3 = 0 + 0;
    a1 = LD32(a0+4);
    a0 = a0 + 8;
    func_08AA4E0C(a0, a1, 0, 0, 0);
    goto L_08826184;
L_08826184:;
    v1 = LD32(sp+4);
    v0 = LD32(v1+4);
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088261E8; }
    goto L_08826194;
L_08826194:;
    s0 = LD32(v1+8);
    a0 = s1 + 0;
    s3 = s3 + 1;
    s0 = s0 + s2;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088261AC;
L_088261AC:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088261B8;
L_088261B8:;
    a1 = s0 + 16;
    a0 = s1 + 0;
    s0 = s0 + 20;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088261C8;
L_088261C8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088261D4;
L_088261D4:;
    v1 = LD32(sp+4);
    v0 = LD32(v1+4);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = s2 + 24;
    if (cnd_) { goto L_08826194; }
    goto L_088261E8;
L_088261E8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088261F0;
L_088261F0:;
    v1 = 1;
    goto L_08826148;
}

/* 088261F8 */
u32 func_088261F8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088261F8:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_088260D0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08826238;
L_08826238:;
    sp = sp + 48;
    return v0;
}

/* 08826244 */
u32 func_08826244(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08826244:;
    sp = sp - 48;
    s3 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08826300; }
    goto L_08826274;
L_08826274:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08826304; }
    goto L_08826280;
L_08826280:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08826358; }
    goto L_0882628C;
L_0882628C:;
    s2 = D_08B2A7A4 - (-22620);
    goto L_08826290;
L_08826290:;
    a0 = 8;
    s1 = s2 - 22620;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882629C;
L_0882629C:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08826348; }
    goto L_088262A8;
L_088262A8:;
    v0 = LD32(s0+16);
    goto L_088262AC;
L_088262AC:;
    a1 = 0 + 0;
    ST32(s2-22620, v0);
    goto L_088262B4;
L_088262B4:;
    v0 = a1 << 2;
    a0 = v0 + s0;
    f0 = BITSF(LD32(a0+20));
    v0 = v0 + s1;
    a1 = a1 + 1;
    ST32(v0+16, FBITS(f0));
    v1 = a1 < 0xcu;
    f0 = BITSF(LD32(a0+68));
    cnd_ = v1 != 0;
    ST32(v0+64, FBITS(f0));
    if (cnd_) { goto L_088262B4; }
    goto L_088262DC;
L_088262DC:;
    a1 = LD32(s0+16);
    a0 = s1 + 4;
    v0 = func_08AA4E9C(a0, a1, 0, 0, 0);
    goto L_088262E8;
L_088262E8:;
    a1 = LD32(s1+4);
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08826320; }
    goto L_088262F4;
L_088262F4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088262FC;
L_088262FC:;
    a0 = 0 + 0;
    goto L_08826300;
L_08826300:;
    goto L_08826304;
L_08826304:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_08826320:;
    a0 = s3 + 0;
    a3 = 0 + 0;
    a2 = v0 << 1;
    a2 = a2 + v0;
    a2 = a2 << 3;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826338;
L_08826338:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826340;
L_08826340:;
    a0 = 1;
    goto L_08826300;
L_08826348:;
    a0 = s1 + 0;
    func_0889B674(a0);
    goto L_08826350;
L_08826350:;
    v0 = LD32(s0+16);
    goto L_088262AC;
L_08826358:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882636C;
L_0882636C:;
    s2 = D_08B2A7A4 - (-22620);
    goto L_08826290;
}

/* 08826374 */
u32 func_08826374(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08826374:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_088263C0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088263B4;
L_088263B4:;
    sp = sp + 48;
    return v0;
}

/* 088263C0 */
u32 func_088263C0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088263C0:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    cnd_ = (s32)v1 <= 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088263E0; }
    goto L_088263D4;
L_088263D4:;
    goto L_088263D8;
L_088263D8:;
    sp = sp + 16;
    return v0;
L_088263E0:;
    v0 = func_088263F0(a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088263E8;
L_088263E8:;
    goto L_088263D8;
}

/* 088263F0 */
u32 func_088263F0(u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088263F0:;
    sp = sp - 32;
    a0 = a1 + 0;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = 0 + 0;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826418;
L_08826418:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826424;
L_08826424:;
    v1 = LD32(sp+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0882644C; }
    goto L_08826434;
L_08826434:;
    v0 = s1 + 0;
    goto L_08826438;
L_08826438:;
    sp = sp + 32;
    return v0;
L_0882644C:;
    s1 = 1;
    v0 = func_0887C840(0, 0, 0);
    goto L_08826454;
L_08826454:;
    v1 = LD32(v0);
    a3 = LD32(sp);
    a0 = v0 + 0;
    t0 = LD32(v1+84);
    a1 = s0 + 0;
    t_ = t0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826470;
L_08826470:;
    v0 = s1 + 0;
    goto L_08826438;
}

/* 08826478 */
u32 func_08826478(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08826478:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_088264C4(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088264B8;
L_088264B8:;
    sp = sp + 48;
    return v0;
}

/* 088264C4 */
u32 func_088264C4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088264C4:;
    sp = sp - 16;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088264E8; }
    goto L_088264D8;
L_088264D8:;
    goto L_088264DC;
L_088264DC:;
    v0 = 0 + 0;
    sp = sp + 16;
    return v0;
L_088264E8:;
    func_0887DE24(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088264F0;
L_088264F0:;
    goto L_088264DC;
}

/* 088264F8 */
u32 func_088264F8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_088264F8:;
    sp = sp - 288;
    v1 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08826538; }
    goto L_0882651C;
L_0882651C:;
    v0 = v1 + 0;
    sp = sp + 288;
    return v0;
L_08826538:;
    a0 = a1 + 0;
    a1 = sp + 256;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826544;
L_08826544:;
    v0 = LD32(sp+256);
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08826558; }
    goto L_08826550;
L_08826550:;
    v1 = 1;
    goto L_0882651C;
L_08826558:;
    a2 = 256;
    goto L_0882655C;
L_0882655C:;
    a1 = sp + 0;
    a0 = s1 + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08826568;
L_08826568:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826570;
L_08826570:;
    a0 = v0 + 0;
    v0 = func_0887DA14(a0);
    goto L_08826578;
L_08826578:;
    cnd_ = v0 == 0;
    a0 = 36;
    if (cnd_) { goto L_088265AC; }
    goto L_08826580;
L_08826580:;
    a0 = s1 + 0;
    v0 = func_0887CFC8(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08826588;
L_08826588:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882651C; }
    goto L_08826590;
L_08826590:;
    v0 = LD32(sp+256);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a2 = 256;
    if (cnd_) { goto L_0882655C; }
    goto L_088265A4;
L_088265A4:;
    v1 = 1;
    goto L_0882651C;
L_088265AC:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088265B4;
L_088265B4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_0887CBB4(a0, a1);
    goto L_088265C4;
L_088265C4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_0887CD44(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088265D0;
L_088265D0:;
    goto L_08826588;
}

/* 088265D8 */
u32 func_088265D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088265D8:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_088264F8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08826618;
L_08826618:;
    sp = sp + 48;
    return v0;
}

/* 08826624 */
u32 func_08826624(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08826624:;
    sp = sp - 64;
    s2 = a0 + 0;
    v0 = 0 + 0;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08826754; }
    goto L_08826654;
L_08826654:;
    v1 = LD32(s2+8);
    v0 = 0x25c20000u;
    v0 = v0 | 0xaf8a;
    cnd_ = (s32)v1 <= 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08826774; }
    goto L_08826668;
L_08826668:;
    a1 = sp + 0;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882667C;
L_0882667C:;
    a0 = s1 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826690;
L_08826690:;
    a1 = LD32(s2+16);
    a0 = LD32(sp);
    a2 = LD32(sp+4);
    v0 = func_08832870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088266A0;
L_088266A0:;
    s4 = v0 + 0;
    cnd_ = s4 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08826754; }
    goto L_088266AC;
L_088266AC:;
    v0 = LD32(s2+16);
    s0 = LD32(s4+8);
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08826728; }
    goto L_088266BC;
L_088266BC:;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088266D0;
L_088266D0:;
    a0 = s1 + 0;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088266E4;
L_088266E4:;
    a2 = LD32(sp+12);
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = a2 << 1;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088266FC;
L_088266FC:;
    a1 = LD32(sp+8);
    a2 = s0 + 0;
    a0 = s4 + 0;
    func_08832C08(a0, a1, a2, 0, 0, 0);
    goto L_0882670C;
L_0882670C:;
    v1 = LD32(s2+16);
    v0 = LD32(sp+12);
    s3 = s3 + 1;
    v1 = (s32)s3 < (s32)v1;
    v0 = v0 << 1;
    cnd_ = v1 != 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_088266BC; }
    goto L_08826728;
L_08826728:;
    v0 = LD32(s2+8);
    cnd_ = (s32)v0 <= 0;
    a1 = sp + 16;
    if (cnd_) { goto L_08826750; }
    goto L_08826734;
L_08826734:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826744;
L_08826744:;
    a1 = LD32(sp+16);
    a0 = s1 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826750;
L_08826750:;
    v0 = 1;
    goto L_08826754;
L_08826754:;
    sp = sp + 64;
    return v0;
L_08826774:;
    v0 = LD32(s2+4);
    v1 = a0 << 3;
    v0 = v0 - 20;
    v0 = v0 - v1;
    ST32(sp+4, v0);
    goto L_08826690;
}

/* 0882678C */
u32 func_0882678C(void)
{
    u32 v0 = 0;
L_0882678C:;
    v0 = 0 + 0;
    return v0;
}

/* 08826794 */
u32 func_08826794(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_08826794:;
    sp = sp - 128;
    s4 = a1 + 0;
    s3 = a0 + 0;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088267C4;
L_088267C4:;
    a0 = s4 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088267D4;
L_088267D4:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    a2 = sp + 48;
    v0 = func_08805730(a0, a1, a2);
    goto L_088267E8;
L_088267E8:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    s0 = LD32(sp+48);
    if (cnd_) { goto L_08826824; }
    goto L_088267F4;
L_088267F4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088267FC;
L_088267FC:;
    v0 = 0 + 0;
    goto L_08826800;
L_08826800:;
    sp = sp + 128;
    return v0;
L_08826824:;
    s1 = LD32(s3+20);
    v0 = LD32(s3+16);
    a0 = 2;
    ST32(s0+4, s1);
    ST32(s0+8, v0);
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882683C;
L_0882683C:;
    a0 = s0 + 28;
    a1 = s1 + 0;
    func_08AA4EE8(a0, a1, 0, 0, 0);
    goto L_08826848;
L_08826848:;
    a1 = LD32(s0+4);
    a0 = s0 + 32;
    func_08AA4F2C(a0, a1, 0, 0, 0);
    goto L_08826854;
L_08826854:;
    a1 = LD32(s0+4);
    a0 = s0 + 36;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_08826860;
L_08826860:;
    a1 = LD32(s0+4);
    a0 = s0 + 40;
    func_08AA4F94(a0, a1, 0, 0, 0);
    goto L_0882686C;
L_0882686C:;
    a1 = LD32(s0+4);
    s0 = s0 + 44;
    a0 = s0 + 0;
    func_08AA4FFC(a0, a1, 0, 0, 0);
    goto L_0882687C;
L_0882687C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826884;
L_08826884:;
    v0 = LD32(s3+16);
    cnd_ = v0 != 0;
    a1 = v0 << 3;
    if (cnd_) { goto L_08826B80; }
    goto L_08826890;
L_08826890:;
    v0 = LD32(sp+48);
    goto L_08826894;
L_08826894:;
    a2 = LD32(s3+20);
    a0 = s4 + 0;
    a1 = LD32(v0+28);
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088268AC;
L_088268AC:;
    v1 = LD32(s3+20);
    v0 = LD32(sp+48);
    a0 = s4 + 0;
    a2 = v1 << 3;
    a1 = LD32(v0+32);
    a2 = a2 - v1;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088268D0;
L_088268D0:;
    v1 = LD32(s3+12);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    a0 = LD32(sp+48);
    if (cnd_) { goto L_08826A94; }
    goto L_088268E0;
L_088268E0:;
    func_0881744C(a0);
    goto L_088268E8;
L_088268E8:;
    v1 = LD32(s3+8);
    v0 = (s32)v1 < 5;
    cnd_ = v0 != 0;
    v0 = (s32)v1 < 6;
    if (cnd_) { goto L_0882690C; }
    goto L_088268F8;
L_088268F8:;
    v0 = LD32(s3+12);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = sp + 16; goto L_08826A6C; }
    goto L_08826908;
L_08826908:;
    v0 = (s32)v1 < 6;
    goto L_0882690C;
L_0882690C:;
    cnd_ = v0 != 0;
    v0 = (s32)v1 < 7;
    if (cnd_) { goto L_08826928; }
    goto L_08826914;
L_08826914:;
    v0 = LD32(s3+12);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    a1 = sp + 68;
    if (cnd_) { goto L_088269DC; }
    goto L_08826924;
L_08826924:;
    v0 = (s32)v1 < 7;
    goto L_08826928;
L_08826928:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+48);
    if (cnd_) { goto L_088269AC; }
    goto L_08826930;
L_08826930:;
    v1 = LD32(s3+12);
    goto L_08826934;
L_08826934:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    v0 = v1 & 0x20;
    if (cnd_) { goto L_08826954; }
    goto L_08826940;
L_08826940:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 8;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+20); goto L_08826990; }
    goto L_08826950;
L_08826950:;
    v0 = v1 & 0x20;
    goto L_08826954;
L_08826954:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0882696C; }
    goto L_0882695C;
L_0882695C:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 9;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3+20); goto L_0882697C; }
    goto L_0882696C;
L_0882696C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826974;
L_08826974:;
    v0 = 1;
    goto L_08826800;
L_0882697C:;
    a0 = s4 + 0;
    a1 = a1 << 2;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826988;
L_08826988:;
    goto L_0882696C;
L_08826990:;
    a0 = s4 + 0;
    a1 = v0 << 3;
    a1 = a1 - v0;
    a1 = a1 << 2;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088269A4;
L_088269A4:;
    v1 = LD32(s3+12);
    goto L_08826950;
L_088269AC:;
    a1 = LD32(a0+4);
    a0 = a0 + 48;
    func_08AA4EE8(a0, a1, 0, 0, 0);
    goto L_088269B8;
L_088269B8:;
    v0 = LD32(sp+48);
    a2 = LD32(s3+20);
    a0 = s4 + 0;
    a1 = LD32(v0+48);
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088269D4;
L_088269D4:;
    v1 = LD32(s3+12);
    goto L_08826934;
L_088269DC:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s4 + 0;
    ST32(sp+68, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088269F0;
L_088269F0:;
    a0 = 25;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088269F8;
L_088269F8:;
    a1 = LD32(sp+68);
    a0 = sp + 72;
    a2 = 1;
    a3 = 4;
    ST32(sp+72, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_08826A10;
L_08826A10:;
    a3 = 0 + 0;
    s1 = LD32(sp+72);
    a2 = LD32(sp+68);
    a0 = s4 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826A28;
L_08826A28:;
    a0 = 68;
    ST32(sp+76, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826A34;
L_08826A34:;
    a0 = v0 + 0;
    a1 = sp + 76;
    s0 = v0 + 0;
    func_0889DC94(a0, a1);
    goto L_08826A44;
L_08826A44:;
    a0 = LD32(sp+48);
    a1 = s0 + 0;
    func_08817CD0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08826A50;
L_08826A50:;
    a0 = sp + 80;
    ST32(sp+80, s1);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_08826A5C;
L_08826A5C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826A64;
L_08826A64:;
    v1 = LD32(s3+8);
    goto L_08826924;
L_08826A6C:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    a2 = 24;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826A80;
L_08826A80:;
    a0 = LD32(sp+48);
    a1 = s0 + 0;
    func_08817C14(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08826A8C;
L_08826A8C:;
    v1 = LD32(s3+8);
    goto L_08826908;
L_08826A94:;
    s5 = 0 + 0;
    a1 = LD32(a0+4);
    a0 = a0 + 20;
    func_08AA505C(a0, a1, 0, 0, 0);
    goto L_08826AA4;
L_08826AA4:;
    a0 = LD32(sp+48);
    v0 = LD32(a0+4);
    cnd_ = (s32)v0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088268E0; }
    goto L_08826AB4;
L_08826AB4:;
    a2 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826AC0;
L_08826AC0:;
    a0 = s4 + 0;
    a1 = sp + 52;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826AD4;
L_08826AD4:;
    v0 = LD32(sp+52);
    cnd_ = v0 != 0;
    a0 = 25;
    if (cnd_) { goto L_08826B00; }
    goto L_08826AE0;
L_08826AE0:;
    a0 = LD32(sp+48);
    goto L_08826AE4;
L_08826AE4:;
    s5 = s5 + 1;
    v0 = LD32(a0+4);
    v0 = (s32)s5 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08826AB4; }
    goto L_08826AF8;
L_08826AF8:;
    goto L_088268E0;
L_08826B00:;
    s1 = s5 << 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826B08;
L_08826B08:;
    a1 = LD32(sp+52);
    a0 = sp + 56;
    a2 = 1;
    a3 = 4;
    ST32(sp+56, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_08826B20;
L_08826B20:;
    a3 = 0 + 0;
    s2 = LD32(sp+56);
    a2 = LD32(sp+52);
    a0 = s4 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826B38;
L_08826B38:;
    v0 = LD32(sp+48);
    a0 = 68;
    v1 = LD32(v0+20);
    ST32(sp+60, s2);
    s1 = s1 + v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826B50;
L_08826B50:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 60;
    func_0889DC94(a0, a1);
    goto L_08826B60;
L_08826B60:;
    ST32(s1, s0);
    a0 = sp + 64;
    ST32(sp+64, s2);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_08826B70;
L_08826B70:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826B78;
L_08826B78:;
    a0 = LD32(sp+48);
    goto L_08826AE4;
L_08826B80:;
    a1 = a1 + v0;
    a1 = a1 << 3;
    a0 = s4 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826B90;
L_08826B90:;
    v0 = LD32(sp+48);
    goto L_08826894;
}

/* 08826B98 */
u32 func_08826B98(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08826B98:;
    sp = sp - 32;
    a0 = 2;
    s3 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826BC0;
L_08826BC0:;
    a2 = 0 + 0;
    a0 = s3 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826BD0;
L_08826BD0:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    { u64 r_ = func_088058B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826BE0;
L_08826BE0:;
    s4 = v0 + 0;
    v0 = func_08966444(0, 0, 0);
    goto L_08826BE8;
L_08826BE8:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    s1 = v0 + 0;
    func_088179AC(a0, a1);
    goto L_08826BF8;
L_08826BF8:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826C08;
L_08826C08:;
    a0 = LD32(s1+52);
    s2 = v0 + 0;
    cnd_ = a0 == 0;
    s0 = s1 + 52;
    if (cnd_) { goto L_08826C34; }
    goto L_08826C18;
L_08826C18:;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_08826C70; }
    goto L_08826C20;
L_08826C20:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+8, 0); goto L_08826C38; }
    goto L_08826C28;
L_08826C28:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826C30;
L_08826C30:;
    ST32(s1+52, 0);
    goto L_08826C34;
L_08826C34:;
    ST32(s0+8, 0);
    goto L_08826C38;
L_08826C38:;
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08826D2C; }
    goto L_08826C40;
L_08826C40:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826C48;
L_08826C48:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826C5C;
L_08826C5C:;
    cnd_ = v0 != 0;
    ST32(s1+52, v0);
    if (cnd_) { goto L_08826D18; }
    goto L_08826C64;
L_08826C64:;
    ST32(s0+4, 0);
    a0 = 0 + 0;
    ST32(s0+8, 0);
    goto L_08826C70;
L_08826C70:;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826C78;
L_08826C78:;
    ST32(s1+64, v0);
    a1 = s1 + 8;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826C90;
L_08826C90:;
    v0 = LD32(s1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = v0 << 3; goto L_08826D00; }
    goto L_08826C9C;
L_08826C9C:;
    a1 = s1 + 84;
    goto L_08826CA0;
L_08826CA0:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826CB0;
L_08826CB0:;
    v0 = LD32(s4+80);
    cnd_ = v0 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_08826CD0; }
    goto L_08826CBC;
L_08826CBC:;
    v1 = v0 + 0;
    goto L_08826CC0;
L_08826CC0:;
    v0 = LD32(v1+80);
    a1 = v1 + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08826CC0; }
    goto L_08826CD0;
L_08826CD0:;
    ST32(s1+76, a1);
    ST32(a1+80, s1);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826CDC;
L_08826CDC:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_08826D00:;
    a1 = a1 + v0;
    a1 = a1 << 3;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826D10;
L_08826D10:;
    a1 = s1 + 84;
    goto L_08826CA0;
L_08826D18:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826D24;
L_08826D24:;
    a0 = LD32(s1+52);
    goto L_08826C70;
L_08826D2C:;
    a0 = 0 + 0;
    ST32(s1+52, 0);
    goto L_08826C70;
}

/* 08826D38 */
u32 func_08826D38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08826D38:;
    sp = sp - 32;
    s3 = a1 + 0;
    s0 = a0 + 0;
    a0 = 2;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826D68;
L_08826D68:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826D78;
L_08826D78:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    { u64 r_ = func_088058B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826D88;
L_08826D88:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_08826D9C; }
    goto L_08826D90;
L_08826D90:;
    v0 = LD32(v0+68);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08826DCC; }
    goto L_08826D9C;
L_08826D9C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826DA4;
L_08826DA4:;
    v0 = 0 + 0;
    goto L_08826DA8;
L_08826DA8:;
    sp = sp + 32;
    return v0;
L_08826DCC:;
    a0 = s4 + 72;
    s5 = 0 + 0;
    ST32(s4+68, v0);
    a1 = LD32(s0+16);
    func_08AA50EC(a0, a1, 0, 0, 0);
    goto L_08826DE0;
L_08826DE0:;
    v1 = LD32(s4+68);
    cnd_ = (s32)v1 <= 0;
    s1 = LD32(s4+72);
    if (cnd_) { goto L_08826EC0; }
    goto L_08826DEC;
L_08826DEC:;
    a1 = s1 + 0;
    a0 = s3 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826E00;
L_08826E00:;
    a1 = s1 + 12;
    a0 = s3 + 0;
    a2 = 36;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826E14;
L_08826E14:;
    a1 = s1 + 48;
    a3 = 0 + 0;
    a0 = s3 + 0;
    a2 = 4;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826E28;
L_08826E28:;
    a0 = s3 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826E38;
L_08826E38:;
    s2 = v0 + 0;
    v0 = LD32(s1+56);
    cnd_ = v0 == 0;
    s0 = s1 + 56;
    if (cnd_) { goto L_08826E5C; }
    goto L_08826E48;
L_08826E48:;
    cnd_ = s2 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08826EA0; }
    goto L_08826E50;
L_08826E50:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826E58;
L_08826E58:;
    ST32(s1+56, 0);
    goto L_08826E5C;
L_08826E5C:;
    a0 = s2 + 0;
    ST32(s0+8, 0);
    cnd_ = s2 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08826EE0; }
    goto L_08826E6C;
L_08826E6C:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826E74;
L_08826E74:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08826E88;
L_08826E88:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 != 0;
    ST32(s1+56, v0);
    if (cnd_) { goto L_08826ED0; }
    goto L_08826E98;
L_08826E98:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08826EA0;
L_08826EA0:;
    a0 = s2 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826EA8;
L_08826EA8:;
    ST32(s1+52, v0);
    s5 = s5 + 1;
    v0 = LD32(s4+68);
    v0 = (s32)s5 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 68;
    if (cnd_) { goto L_08826DEC; }
    goto L_08826EC0;
L_08826EC0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826EC8;
L_08826EC8:;
    v0 = 1;
    goto L_08826DA8;
L_08826ED0:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826ED8;
L_08826ED8:;
    goto L_08826EA0;
L_08826EE0:;
    ST32(s1+56, 0);
    goto L_08826EA0;
}

/* 08826EE8 */
u32 func_08826EE8(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08826EE8:;
    sp = sp - 32;
    a0 = 2;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826F04;
L_08826F04:;
    a0 = s1 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826F14;
L_08826F14:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a1 = v0 + 0;
    { u64 r_ = func_088058B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826F24;
L_08826F24:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08826F60; }
    goto L_08826F2C;
L_08826F2C:;
    v0 = LD32(v0+24);
    a2 = 4;
    a3 = 0 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08826F60; }
    goto L_08826F44;
L_08826F44:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826F4C;
L_08826F4C:;
    v1 = LD32(sp);
    v0 = LD32(s0+4);
    a0 = s0 + 24;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08826F80; }
    goto L_08826F60;
L_08826F60:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826F68;
L_08826F68:;
    v0 = 0 + 0;
    goto L_08826F6C;
L_08826F6C:;
    sp = sp + 32;
    return v0;
L_08826F80:;
    func_08AA5174(a0, a1, 0, 0, 0);
    goto L_08826F88;
L_08826F88:;
    v1 = LD32(sp);
    a1 = LD32(s0+24);
    a3 = 0 + 0;
    a2 = v1 << 3;
    a2 = a2 - v1;
    a2 = a2 << 2;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826FA8;
L_08826FA8:;
    a0 = s0 + 0;
    a1 = 1;
    func_08817484(a0, a1, 0, 0, 0);
    goto L_08826FB4;
L_08826FB4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826FBC;
L_08826FBC:;
    v0 = 1;
    goto L_08826F6C;
}

/* 08826FC4 */
u32 func_08826FC4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08826FC4:;
    sp = sp - 48;
    s2 = a0 + 0;
    a0 = 2;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08826FF4;
L_08826FF4:;
    a1 = 0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827004;
L_08827004:;
    a1 = v0 + 0;
    v0 = LD32(s2+12);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = D_08B204FC - (1276);
    if (cnd_) { goto L_08827200; }
    goto L_08827018;
L_08827018:;
    a0 = a1 + 0;
    s0 = D_08B204FC - (1276);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827024;
L_08827024:;
    v1 = LD32(s0+1276);
    a1 = v0 + 0;
    cnd_ = v1 == 0;
    s0 = s0 + 1276;
    if (cnd_) { goto L_08827060; }
    goto L_08827034;
L_08827034:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0882703C;
L_0882703C:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0882706C; }
    goto L_08827054;
L_08827054:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0882703C; }
    goto L_08827060;
L_08827060:;
    a0 = LD32(s0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088271F0; }
    goto L_0882706C;
L_0882706C:;
    cnd_ = a3 == 0;
    s0 = a3 + 68;
    if (cnd_) { goto L_088271E0; }
    goto L_08827074;
L_08827074:;
    v0 = LD32(a3+64);
    v1 = a3 + 64;
    goto L_0882707C;
L_0882707C:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088271E0; }
    goto L_08827084;
L_08827084:;
    v0 = LD32(s2+16);
    s3 = 0 + 0;
    ST32(v1, v0);
    a1 = LD32(s2+16);
    func_08AA5210(a0, a1, 0, 0, 0);
    goto L_08827098;
L_08827098:;
    v1 = LD32(s2+16);
    cnd_ = (s32)v1 <= 0;
    s0 = LD32(s0);
    if (cnd_) { goto L_0882716C; }
    goto L_088270A4;
L_088270A4:;
    v0 = D_08AEB660 - (-18848);
    v1 = D_08AEB664 - (-18844);
    f20 = BITSF(LD32(v0-18848));
    f21 = BITSF(LD32(v1-18844));
    goto L_088270B4;
L_088270B4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088270C8;
L_088270C8:;
    v1 = LD32(s2+8);
    cnd_ = (s32)v1 <= 0;
    a1 = s0 + 8;
    if (cnd_) { goto L_088271D8; }
    goto L_088270D4;
L_088270D4:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088270E4;
L_088270E4:;
    v1 = LD32(s2+8);
    goto L_088270E8;
L_088270E8:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    a1 = s0 + 12;
    if (cnd_) { goto L_088271CC; }
    goto L_088270F4;
L_088270F4:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827104;
L_08827104:;
    a1 = s0 + 16;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827118;
L_08827118:;
    v1 = LD32(s2+8);
    goto L_0882711C;
L_0882711C:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    a1 = s0 + 20;
    if (cnd_) { goto L_088271B4; }
    goto L_08827128;
L_08827128:;
    ST32(s0+20, FBITS(f20));
    goto L_0882712C;
L_0882712C:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a1 = s0 + 24;
    if (cnd_) { goto L_0882719C; }
    goto L_08827138;
L_08827138:;
    ST32(s0+24, 0);
    a1 = 0 + 0;
    goto L_08827140;
L_08827140:;
    a2 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882714C;
L_0882714C:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827154;
L_08827154:;
    ST32(s0+4, v0);
    s3 = s3 + 1;
    v0 = LD32(s2+16);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_088270B4; }
    goto L_0882716C;
L_0882716C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827174;
L_08827174:;
    v0 = 1;
    goto L_08827178;
L_08827178:;
    sp = sp + 48;
    return v0;
L_0882719C:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088271AC;
L_088271AC:;
    a1 = 0 + 0;
    goto L_08827140;
L_088271B4:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088271C4;
L_088271C4:;
    v1 = LD32(s2+8);
    goto L_0882712C;
L_088271CC:;
    ST32(s0+12, FBITS(f20));
    ST32(s0+16, FBITS(f21));
    goto L_0882711C;
L_088271D8:;
    ST32(s0+8, FBITS(f20));
    goto L_088270E8;
L_088271E0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088271E8;
L_088271E8:;
    v0 = 0 + 0;
    goto L_08827178;
L_088271F0:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088271F8;
L_088271F8:;
    a3 = v0 + 0;
    goto L_0882706C;
L_08827200:;
    a0 = a0 + 1276;
    { u64 r_ = func_088058B4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827208;
L_08827208:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088271E0; }
    goto L_08827210;
L_08827210:;
    v0 = LD32(v0+88);
    s0 = v1 + 92;
    v1 = v1 + 88;
    goto L_0882707C;
}

/* 08827220 */
u32 func_08827220(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_08827220:;
    sp = sp - 112;
    s3 = a0 + 0;
    a0 = 2;
    s4 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827250;
L_08827250:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 6;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08827290; }
    goto L_08827260;
L_08827260:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827268;
L_08827268:;
    v0 = 0 + 0;
    goto L_0882726C;
L_0882726C:;
    sp = sp + 112;
    return v0;
L_08827290:;
    a1 = 0 + 0;
    a2 = sp + 48;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882729C;
L_0882729C:;
    a0 = D_08B204FC - (1276);
    a0 = a0 + 1276;
    a2 = sp + 52;
    a1 = v0 + 0;
    s1 = v0 + 0;
    v0 = func_088055E8(a0, a1, a2);
    goto L_088272B4;
L_088272B4:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    s0 = LD32(sp+52);
    if (cnd_) { goto L_08827738; }
    goto L_088272C0;
L_088272C0:;
    a0 = LD32(s0);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+8, 0); goto L_088272E4; }
    goto L_088272CC;
L_088272CC:;
    cnd_ = s1 == a0;
    if (cnd_) { goto L_0882731C; }
    goto L_088272D4;
L_088272D4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088272DC;
L_088272DC:;
    ST32(s0, 0);
    ST32(s0+8, 0);
    goto L_088272E4;
L_088272E4:;
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08827730; }
    goto L_088272EC;
L_088272EC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088272F4;
L_088272F4:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827308;
L_08827308:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0882771C; }
    goto L_08827310;
L_08827310:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08827318;
L_08827318:;
    s0 = LD32(sp+52);
    goto L_0882731C;
L_0882731C:;
    a0 = s1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827324;
L_08827324:;
    ST32(s0+12, v0);
    s0 = LD32(sp+52);
    v1 = LD32(s3+16);
    f0 = BITSF(LD32(s3+20));
    ST32(s0+36, 0);
    ST32(s0+16, v1);
    v0 = LD32(s3+32);
    ST32(s0+20, FBITS(f0));
    ST32(s0+80, v0);
    v1 = LD32(s3+36);
    f0 = BITSF(LD32(s3+28));
    ST32(s0+84, v1);
    a0 = LD32(s3+40);
    ST32(s0+28, FBITS(f0));
    ST32(s0+48, a0);
    v0 = LD32(s3+12);
    f0 = BITSF(LD32(s3+24));
    v1 = (v0 >> 4) & 0x1;
    a0 = (v0 >> 9) & 0x1;
    a1 = v0 & 0x2;
    v0 = (v0 >> 10) & 0x1;
    ST32(s0+24, FBITS(f0));
    ST8(s0+72, v1);
    ST8(s0+33, a0);
    cnd_ = a1 == 0;
    ST8(s0+34, v0);
    if (cnd_) { goto L_08827394; }
    goto L_0882738C;
L_0882738C:;
    v0 = 1;
    ST8(s0+32, v0);
    goto L_08827394;
L_08827394:;
    v0 = LD_U8(s0+72);
    s1 = LD32(s0+16);
    a0 = s0 + 76;
    v0 = 0 < v0;
    s1 = s1 + v0;
    a1 = s1 + 0;
    func_08AA2E5C(a0, a1, 0, 0, 0);
    goto L_088273B0;
L_088273B0:;
    v1 = LD32(s3+12);
    v1 = v1 & 0x20;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 25; goto L_0882767C; }
    goto L_088273C0;
L_088273C0:;
    v0 = LD32(sp+52);
    a2 = s1 << 3;
    a0 = s4 + 0;
    a1 = LD32(v0+76);
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088273D8;
L_088273D8:;
    a0 = LD32(sp+52);
    goto L_088273DC;
L_088273DC:;
    a1 = LD32(s3+32);
    a0 = a0 + 88;
    func_08AA2DB8(a0, a1, 0, 0, 0);
    goto L_088273E8;
L_088273E8:;
    v0 = LD32(sp+52);
    a2 = LD32(s3+32);
    a0 = s4 + 0;
    a1 = LD32(v0+88);
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827404;
L_08827404:;
    v1 = LD32(s3+8);
    v1 = (s32)v1 < 5;
    cnd_ = v1 == 0;
    s0 = LD32(sp+52);
    if (cnd_) { goto L_08827674; }
    goto L_08827414;
L_08827414:;
    a1 = LD32(s3+32);
    s2 = 0 + 0;
    cnd_ = a1 != 0;
    s1 = LD32(s0+88);
    if (cnd_) { goto L_08827640; }
    goto L_08827424;
L_08827424:;
    a0 = s0 + 92;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_0882742C;
L_0882742C:;
    v0 = LD32(sp+52);
    a2 = LD32(s3+32);
    a3 = 0 + 0;
    a1 = LD32(v0+92);
    a2 = a2 << 1;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827448;
L_08827448:;
    a0 = LD32(sp+52);
    a1 = LD32(s3+36);
    a0 = a0 + 96;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_08827458;
L_08827458:;
    v1 = LD32(s3+36);
    v0 = LD32(sp+52);
    a0 = s4 + 0;
    a2 = v1 << 1;
    a1 = LD32(v0+96);
    a2 = a2 + v1;
    a2 = a2 << 2;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882747C;
L_0882747C:;
    v1 = LD32(s3+12);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    a0 = LD32(sp+52);
    if (cnd_) { goto L_08827608; }
    goto L_0882748C;
L_0882748C:;
    a1 = LD32(a0+48);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088275D4; }
    goto L_08827498;
L_08827498:;
    v1 = LD32(s3+8);
    goto L_0882749C;
L_0882749C:;
    cnd_ = (s32)v1 <= 0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_088274B8; }
    goto L_088274A4;
L_088274A4:;
    v0 = LD32(s3+12);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = sp + 16; goto L_0882757C; }
    goto L_088274B4;
L_088274B4:;
    v0 = (s32)v1 < 2;
    goto L_088274B8;
L_088274B8:;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0882752C; }
    goto L_088274C0;
L_088274C0:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    a1 = LD32(sp+52);
    if (cnd_) { goto L_088274DC; }
    goto L_088274CC;
L_088274CC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088274D4;
L_088274D4:;
    v0 = 1;
    goto L_0882726C;
L_088274DC:;
    a0 = s4 + 0;
    a2 = 4;
    a1 = a1 + 56;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088274F0;
L_088274F0:;
    a0 = LD32(sp+52);
    a1 = LD32(a0+56);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088274CC; }
    goto L_08827500;
L_08827500:;
    a0 = a0 + 60;
    func_08AA532C(a0, a1, 0, 0, 0);
    goto L_08827508;
L_08827508:;
    v1 = LD32(sp+52);
    a0 = s4 + 0;
    a3 = 0 + 0;
    a2 = LD32(v1+56);
    a1 = LD32(v1+60);
    a2 = a2 << 3;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827524;
L_08827524:;
    goto L_088274CC;
L_0882752C:;
    f20 = BITSF(0);
    a1 = sp + 60;
    a2 = 4;
    a3 = 0 + 0;
    ST32(sp+60, FBITS(f20));
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827544;
L_08827544:;
    f0 = BITSF(LD32(sp+60));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_08827570; }
    goto L_08827558;
L_08827558:;
    v0 = D_08AEB670 - (-18832);
    f20 = BITSF(LD32(v0-18832));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_08827570; }
    goto L_08827570;
L_08827570:;
    ST32(v1+108, FBITS(f20));
    v1 = LD32(s3+8);
    goto L_088274C0;
L_0882757C:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    a2 = 24;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827590;
L_08827590:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+52); goto L_088275C4; }
    goto L_08827598;
L_08827598:;
    v0 = D_08AEB668 - (-18840);
    v1 = D_08AEB66C - (-18836);
    f0 = BITSF(LD32(v0-18840));
    f1 = BITSF(LD32(v1-18836));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+28, FBITS(f1));
    a0 = LD32(sp+52);
    goto L_088275C4;
L_088275C4:;
    a1 = s0 + 0;
    func_08817A00(a0, a1, 0, 0, 0);
    goto L_088275CC;
L_088275CC:;
    v1 = LD32(s3+8);
    goto L_088274B4;
L_088275D4:;
    a0 = a0 + 52;
    func_08AA52E0(a0, a1, 0, 0, 0);
    goto L_088275DC;
L_088275DC:;
    v1 = LD32(sp+52);
    a0 = s4 + 0;
    a3 = 0 + 0;
    v0 = LD32(v1+48);
    a1 = LD32(v1+52);
    a2 = v0 << 1;
    a2 = a2 + v0;
    a2 = a2 << 2;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827600;
L_08827600:;
    v1 = LD32(s3+8);
    goto L_0882749C;
L_08827608:;
    a1 = LD32(a0+16);
    a0 = a0 + 40;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_08827614;
L_08827614:;
    v1 = LD32(sp+52);
    a0 = s4 + 0;
    a3 = 0 + 0;
    a2 = LD32(v1+16);
    a1 = LD32(v1+40);
    a2 = a2 << 2;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827630;
L_08827630:;
    a0 = LD32(sp+52);
    func_08817B0C(a0);
    goto L_08827638;
L_08827638:;
    a0 = LD32(sp+52);
    goto L_0882748C;
L_08827640:;
    a0 = s1 + 0;
    a1 = sp + 0;
    func_08AA5370(a0, a1);
    goto L_0882764C;
L_0882764C:;
    a0 = s1 + 0;
    a1 = sp + 0;
    func_08AA2EA0(a0, a1);
    goto L_08827658;
L_08827658:;
    a1 = LD32(s3+32);
    s2 = s2 + 1;
    v0 = s2 < a1;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08827640; }
    goto L_0882766C;
L_0882766C:;
    s0 = LD32(sp+52);
    goto L_08827424;
L_08827674:;
    a1 = LD32(s3+32);
    goto L_08827424;
L_0882767C:;
    s2 = sp + 56;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827684;
L_08827684:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_08AA525C(a0, a1, 0, 0, 0);
    goto L_08827690;
L_08827690:;
    a1 = LD32(sp+56);
    a2 = s1 << 4;
    a0 = s4 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088276A4;
L_088276A4:;
    cnd_ = (s32)s1 <= 0;
    s0 = LD32(sp+52);
    if (cnd_) { goto L_088276F4; }
    goto L_088276AC;
L_088276AC:;
    t0 = LD32(sp+56);
    a2 = s1 + 0;
    a3 = LD32(s0+76);
    goto L_088276B8;
L_088276B8:;
    v0 = LD32(t0);
    cnd_ = v0 == 0;
    if (cnd_) { ST16(a3, 0); goto L_0882770C; }
    goto L_088276C4;
L_088276C4:;
    v0 = LD_U16(t0);
    v1 = LD_U16(t0+4);
    a0 = LD_U16(t0+8);
    a1 = LD_U16(t0+12);
    ST16(a3, v0);
    ST16(a3+2, v1);
    ST16(a3+4, a0);
    ST16(a3+6, a1);
    goto L_088276E4;
L_088276E4:;
    a2 = a2 - 1;
    t0 = t0 + 16;
    cnd_ = a2 != 0;
    a3 = a3 + 8;
    if (cnd_) { goto L_088276B8; }
    goto L_088276F4;
L_088276F4:;
    a0 = s2 + 0;
    func_08AA52A0(a0, 0, 0, 0);
    goto L_088276FC;
L_088276FC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827704;
L_08827704:;
    a0 = LD32(sp+52);
    goto L_088273DC;
L_0882770C:;
    ST16(a3+2, 0);
    ST16(a3+4, 0);
    ST16(a3+6, 0);
    goto L_088276E4;
L_0882771C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827728;
L_08827728:;
    s0 = LD32(sp+52);
    goto L_0882731C;
L_08827730:;
    ST32(s0, 0);
    goto L_08827318;
L_08827738:;
    v0 = LD32(sp+48);
    a1 = LD32(s3+4);
    a0 = s4 + 0;
    v0 = v0 << 2;
    v0 = v0 + 44;
    a1 = a1 - v0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827754;
L_08827754:;
    goto L_088274CC;
}

/* 0882775C */
u32 func_0882775C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_0882775C:;
    sp = sp - 160;
    v0 = D_08B2A89C - (-22372);
    v1 = D_08B2A8A4 - (-22364);
    a2 = 4;
    a3 = 0 + 0;
    s3 = a0 + 0;
    s4 = D_08B2A8BC - (-22340);
    s2 = D_08B2A8B8 - (-22344);
    s1 = a1 + 0;
    s0 = D_08B2A8B4 - (-22348);
    a1 = s0 - 22348;
    f0 = BITSF(LD32(a0+20));
    f1 = BITSF(LD32(a0+24));
    f2 = BITSF(LD32(a0+28));
    ST32(v0-22372, FBITS(f0));
    a0 = s1 + 0;
    v0 = D_08B2A8A0 - (-22368);
    ST32(v0-22368, FBITS(f1));
    ST32(v1-22364, FBITS(f2));
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088277C4;
L_088277C4:;
    a1 = s2 - 22344;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088277D8;
L_088277D8:;
    a1 = s4 - 22340;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088277EC;
L_088277EC:;
    v0 = D_08AEB698 - (-18792);
    f2 = BITSF(LD32(s0-22348));
    f0 = BITSF(LD32(v0-18792));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a0 = D_08AEB69C - (-18788);
    if (cnd_) { goto L_08827B5C; }
    goto L_08827810;
L_08827810:;
    f0 = BITSF(LD32(a0-18788));
    f0 = f2 + f0;
    goto L_08827818;
L_08827818:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(s2-22344));
    f1 = BITSF(LD32(v0-18792));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v1 = a1 << 16;
    if (cnd_) { goto L_08827B50; }
    goto L_08827840;
L_08827840:;
    f0 = BITSF(LD32(a0-18788));
    f0 = f2 + f0;
    goto L_08827848;
L_08827848:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s4-22340));
    f0 = BITSF(LD32(v0-18792));
    a1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = a1 << 8;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v1 | v0;
    if (cnd_) { goto L_08827B44; }
    goto L_08827874;
L_08827874:;
    f0 = BITSF(LD32(a0-18788));
    f0 = f1 + f0;
    goto L_0882787C;
L_0882787C:;
    f0 = BITSF(F2I(f0, 1));
    a1 = D_08B2A8A8 - (-22360);
    a1 = a1 - 22360;
    a2 = 4;
    a0 = FBITS(f0);
    a3 = 0 + 0;
    v1 = v0 | a0;
    a0 = s1 + 0;
    v0 = D_08B2A8C0 - (-22336);
    ST32(v0-22336, v1);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088278A8;
L_088278A8:;
    a1 = D_08B2A8AC - (-22356);
    a1 = a1 - 22356;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088278C0;
L_088278C0:;
    a1 = D_08B2A8B0 - (-22352);
    a1 = a1 - 22352;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088278D8;
L_088278D8:;
    a1 = sp + 112;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088278EC;
L_088278EC:;
    a0 = LD32(s3+16);
    v1 = 108;
    v0 = LD32(sp+112);
    { s64 p_ = (s64)(s32)a0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B2A8C4 - (-22332);
    v0 = 0 < v0;
    a0 = lo;
    ST8(v1-22332, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827910;
L_08827910:;
    a0 = LD32(s3+16);
    a1 = v0 + 0;
    cnd_ = a0 == 0;
    v0 = a0 - 1;
    if (cnd_) { goto L_08827930; }
    goto L_08827920;
L_08827920:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08827928;
L_08827928:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08827928; }
    goto L_08827930;
L_08827930:;
    v0 = D_08B2A898 - (-22376);
    ST32(v0-22376, a1);
    cnd_ = (s32)a0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08827B18; }
    goto L_08827940;
L_08827940:;
    s4 = 1;
    goto L_08827944;
L_08827944:;
    v0 = func_0889C294();
    goto L_0882794C;
L_0882794C:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08827B24; }
    goto L_08827958;
L_08827958:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 108;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882796C;
L_0882796C:;
    f0 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    a0 = s0 + 88;
    ST32(a0+4, FBITS(f0));
    a1 = s0 + 12;
    s2 = s2 + 1;
    ST32(a0+8, FBITS(f1));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+40));
    ST32(s0+88, FBITS(f0));
    ST32(s0+100, FBITS(f1));
    f3 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    ST32(s0, FBITS(f3));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+16));
    ST32(s0+12, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(s0+24, FBITS(f1));
    f1 = BITSF(LD32(sp+32));
    ST32(s0+28, FBITS(f0));
    ST32(s0+32, FBITS(f1));
    f0 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+40));
    ST32(s0+36, FBITS(f0));
    ST32(s0+40, FBITS(f1));
    f0 = BITSF(LD32(sp+44));
    f1 = BITSF(LD32(sp+48));
    ST32(s0+44, FBITS(f0));
    ST32(s0+48, FBITS(f1));
    f0 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    ST32(s0+52, FBITS(f0));
    v0 = LD32(sp+56);
    ST32(s0+56, v0);
    v1 = LD32(sp+60);
    ST32(s0+60, v1);
    v0 = LD32(sp+64);
    ST32(s0+64, v0);
    v1 = LD32(sp+68);
    ST32(s0+68, v1);
    v0 = LD32(sp+72);
    ST32(s0+72, v0);
    v1 = LD32(sp+76);
    ST32(s0+76, v1);
    v0 = LD32(sp+80);
    ST32(s0+88, FBITS(f3));
    ST32(s0+80, v0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    f0 = BITSF(LD32(s0+40));
    ST32(s0+100, FBITS(f0));
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    ST32(s0, FBITS(f1));
    f1 = BITSF(LD32(sp+8));
    ST32(s0+4, FBITS(f0));
    ST32(s0+8, FBITS(f1));
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+16));
    ST32(s0+12, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST8(s0+104, s4);
    ST32(s0+24, FBITS(f1));
    ST32(s0+28, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    ST32(s0+32, FBITS(f1));
    ST32(s0+36, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(s0+40, FBITS(f1));
    ST32(s0+44, FBITS(f0));
    f1 = BITSF(LD32(sp+48));
    f0 = BITSF(LD32(sp+52));
    ST32(s0+48, FBITS(f1));
    ST32(s0+52, FBITS(f0));
    v0 = LD32(sp+56);
    ST32(s0+56, v0);
    v1 = LD32(sp+60);
    ST32(s0+60, v1);
    v0 = LD32(sp+64);
    ST32(s0+64, v0);
    v1 = LD32(sp+68);
    ST32(s0+68, v1);
    v0 = LD32(sp+72);
    ST32(s0+72, v0);
    v1 = LD32(sp+76);
    ST32(s0+76, v1);
    a0 = LD32(sp+80);
    ST32(s0+80, a0);
    v0 = LD32(s3+16);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08827944; }
    goto L_08827B18;
L_08827B18:;
    func_0889C3F0(0, 0, 0);
    goto L_08827B20;
L_08827B20:;
    v0 = 1;
    goto L_08827B24;
L_08827B24:;
    sp = sp + 160;
    return v0;
L_08827B44:;
    f0 = BITSF(LD32(a0-18788));
    f0 = f1 - f0;
    goto L_0882787C;
L_08827B50:;
    f0 = BITSF(LD32(a0-18788));
    f0 = f2 - f0;
    goto L_08827848;
L_08827B5C:;
    f0 = BITSF(LD32(a0-18788));
    f0 = f2 - f0;
    goto L_08827818;
}

/* 08827B68 */
u32 func_08827B68(void)
{
    u32 v0 = 0;
L_08827B68:;
    v0 = 0 + 0;
    return v0;
}

/* 08827B70 */
void func_08827B70(u32 a0)
{
    u32 v0 = 0;
L_08827B70:;
    v0 = D_08B230D8 - (12504);
    ST32(v0+12504, a0);
    return;
}

/* 08827B7C */
rv_t func_08827B7C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08827B7C:;
    sp = sp - 16;
    a1 = 0 + 0;
    { rv_t r_ = func_08827BEC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827B8C;
L_08827B8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08827B98 */
u32 func_08827B98(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08827B98:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    a0 = a1 + 0;
    v0 = v0 - 16;
    a1 = v0 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08827BB4;
L_08827BB4:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 08827BC4 */
void func_08827BC4(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08827BC4:;
    f0 = BITSF(LD32(a0+4));
    v0 = D_08B230E0 - (12512);
    v1 = D_08B230E4 - (12516);
    ST32(v0+12512, FBITS(f0));
    v0 = D_08B230E8 - (12520);
    ST32(v1+12516, FBITS(f12));
    v1 = D_08B230DC - (12508);
    ST32(v0+12520, a1);
    ST32(v1+12508, a0);
    return;
}

/* 08827BEC */
rv_t func_08827BEC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_08827BEC:;
    sp = sp - 32;
    v0 = D_08B230DC - (12508);
    s3 = a1 + 0;
    s2 = D_08B15A14 - (23060);
    a1 = 0 < a1;
    v1 = LD32(s2+23060);
    v0 = LD32(v0+12508);
    v1 = v1 + 1;
    cnd_ = v0 == 0;
    ST32(s2+23060, v1);
    if (cnd_) { goto L_08827C3C; }
    goto L_08827C28;
L_08827C28:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08827C3C; }
    goto L_08827C30;
L_08827C30:;
    f0 = BITSF(LD32(v0+4));
    v0 = D_08B230E0 - (12512);
    ST32(v0+12512, FBITS(f0));
    goto L_08827C3C;
L_08827C3C:;
    s0 = 0 + 0;
    { rv_t r_ = func_0887AA14(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827C44;
L_08827C44:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    v0 = LD32(s2+23060);
    if (cnd_) { goto L_08827C74; }
    goto L_08827C58;
L_08827C58:;
    v0 = func_08828D70(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827C60;
L_08827C60:;
    a0 = s1 + 0;
    a1 = s3 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0887AFD4(a0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827C70;
L_08827C70:;
    v0 = LD32(s2+23060);
    goto L_08827C74;
L_08827C74:;
    v0 = v0 - 1;
    ST32(s2+23060, v0);
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08827C9C */
u32 func_08827C9C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[528] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 528);
L_08827C9C:;
    sp = sp - 528;
    a1 = 8;
    a2 = sp + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = LD32(a0+28);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827CC0;
L_08827CC0:;
    a1 = D_08AD3B48 - (15176);
    v1 = 8;
    a1 = a1 + 15176;
    a0 = sp + 0;
    a2 = 5;
    cnd_ = v0 == v1;
    a3 = 0 + 0;
    if (cnd_) { goto L_08827CF0; }
    goto L_08827CDC;
L_08827CDC:;
    v0 = a3 + 0;
    sp = sp + 528;
    return v0;
L_08827CF0:;
    v0 = func_08A89AFC(a0, a1, a2);
    goto L_08827CF8;
L_08827CF8:;
    a1 = D_08AD3B54 - (15188);
    a1 = a1 + 15188;
    a0 = sp + 0;
    a2 = 8;
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08827CDC; }
    goto L_08827D10;
L_08827D10:;
    v0 = func_08A89AFC(a0, a1, a2);
    goto L_08827D18;
L_08827D18:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08827D28; }
    goto L_08827D20;
L_08827D20:;
    a3 = 1;
    goto L_08827CDC;
L_08827D28:;
    v0 = func_0887B0B0(a0, 0, 0, 0);
    goto L_08827D30;
L_08827D30:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = 8;
    v0 = func_0882F4C4(a0, a1, a2, 0, 0, 0);
    goto L_08827D40;
L_08827D40:;
    a3 = 1;
    goto L_08827CDC;
}

/* 08827D48 */
u32 func_08827D48(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 560);
L_08827D48:;
    sp = sp - 560;
    a1 = sp + 0;
    s3 = sp + 0;
    s0 = a0 + 0;
    s1 = LD32(a0+28);
    v0 = func_0882D608(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08827D78;
L_08827D78:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08827E94; }
    goto L_08827D80;
L_08827D80:;
    a0 = LD32(sp);
    v1 = 0x4e4c0000u;
    v0 = D_08B230F0 - (12528);
    v1 = v1 | 0x4c44;
    ST32(v0+12528, a0);
    s4 = sp + 0;
    cnd_ = a0 == v1;
    s2 = 0 + 0;
    if (cnd_) { goto L_08828D44; }
    goto L_08827DA0;
L_08827DA0:;
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 != 0;
    v0 = 0x544c0000u;
    if (cnd_) { goto L_088285BC; }
    goto L_08827DAC;
L_08827DAC:;
    v0 = 0x47410000u;
    v0 = v0 | 0x5246;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828598; }
    goto L_08827DBC;
L_08827DBC:;
    cnd_ = v0 != 0;
    v0 = 0x4c520000u;
    if (cnd_) { goto L_088281E4; }
    goto L_08827DC4;
L_08827DC4:;
    v0 = 0x42590000u;
    v0 = v0 | 0x4b53;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_088281C0; }
    goto L_08827DD4;
L_08827DD4:;
    cnd_ = v0 != 0;
    v0 = 0x444f0000u;
    if (cnd_) { goto L_08827FEC; }
    goto L_08827DDC;
L_08827DDC:;
    v0 = 0x414d0000u;
    v0 = v0 | 0x4453;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08827FC8; }
    goto L_08827DEC;
L_08827DEC:;
    cnd_ = v0 != 0;
    v0 = 0x42410000u;
    if (cnd_) { goto L_08827EFC; }
    goto L_08827DF4;
L_08827DF4:;
    v0 = 0x20470000u;
    v0 = v0 | 0x4f46;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08827ED8; }
    goto L_08827E04;
L_08827E04:;
    cnd_ = v0 == 0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08827E0C;
L_08827E0C:;
    v0 = 0x31560000u;
    v0 = v0 | 0x414e;
    cnd_ = a0 == v0;
    a1 = sp + 0;
    if (cnd_) { goto L_08827EB8; }
    goto L_08827E1C;
L_08827E1C:;
    v0 = D_08B230D8 - (12504);
    goto L_08827E20;
L_08827E20:;
    v0 = LD32(v0+12504);
    cnd_ = v0 == 0;
    if (cnd_) { t3 = (u32)(s32)LD_S8(s4+3); goto L_08827E50; }
    goto L_08827E2C;
L_08827E2C:;
    a0 = s4 + 0;
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827E38;
L_08827E38:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    v0 = v0 ^ 0x3;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08827E88; }
    goto L_08827E4C;
L_08827E4C:;
    t3 = (u32)(s32)LD_S8(s4+3);
    goto L_08827E50;
L_08827E50:;
    t0 = (u32)(s32)LD_S8(s4);
    t1 = (u32)(s32)LD_S8(s4+1);
    t2 = (u32)(s32)LD_S8(s4+2);
    a1 = D_08AD3B60 - (15200);
    a0 = sp + 512;
    a1 = a1 + 15200;
    a2 = 5;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08827E74;
L_08827E74:;
    a1 = s3 + 0;
    goto L_08827E78;
L_08827E78:;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827E84;
L_08827E84:;
    a0 = s0 + 0;
    goto L_08827E88;
L_08827E88:;
    a1 = s2 + 0;
    func_0882D72C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827E90;
L_08827E90:;
    v1 = 1;
    goto L_08827E94;
L_08827E94:;
    v0 = v1 + 0;
    sp = sp + 560;
    return v0;
L_08827EB8:;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827EC4;
L_08827EC4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882A294(a0, a1);
    goto L_08827ED0;
L_08827ED0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827ED8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827EE8;
L_08827EE8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825C9C(a0, a1);
    goto L_08827EF4;
L_08827EF4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827EFC:;
    v0 = v0 | 0x424c;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08827FA4; }
    goto L_08827F08;
L_08827F08:;
    cnd_ = v0 != 0;
    v0 = 0x42420000u;
    if (cnd_) { goto L_08827F44; }
    goto L_08827F10;
L_08827F10:;
    v0 = 0x414e0000u;
    v0 = v0 | 0x5243;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08827F20;
L_08827F20:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827F30;
L_08827F30:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0881E100(a0, a1);
    goto L_08827F3C;
L_08827F3C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827F44:;
    v0 = v0 | 0x5348;
    cnd_ = a0 == v0;
    v0 = 0x42560000u;
    if (cnd_) { goto L_08827F80; }
    goto L_08827F50;
L_08827F50:;
    v0 = v0 | 0x524d;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08827F5C;
L_08827F5C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827F6C;
L_08827F6C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08829AA4(a0, a1);
    goto L_08827F78;
L_08827F78:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827F80:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827F90;
L_08827F90:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826EE8(a1);
    goto L_08827F9C;
L_08827F9C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827FA4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827FB4;
L_08827FB4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825A90(a0, a1);
    goto L_08827FC0;
L_08827FC0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827FC8:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08827FD8;
L_08827FD8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882CC84(a0, a1);
    goto L_08827FE4;
L_08827FE4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08827FEC:;
    v0 = v0 | 0x4d45;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882819C; }
    goto L_08827FF8;
L_08827FF8:;
    cnd_ = v0 != 0;
    v0 = 0x45540000u;
    if (cnd_) { goto L_088280D0; }
    goto L_08828000;
L_08828000:;
    v0 = 0x44440000u;
    v0 = v0 | 0x4150;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_088280AC; }
    goto L_08828010;
L_08828010:;
    cnd_ = v0 != 0;
    v0 = 0x444e0000u;
    if (cnd_) { goto L_0882804C; }
    goto L_08828018;
L_08828018:;
    v0 = 0x43410000u;
    v0 = v0 | 0x5443;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828028;
L_08828028:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828038;
L_08828038:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0881F158(a0, a1);
    goto L_08828044;
L_08828044:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882804C:;
    v0 = v0 | 0x4552;
    cnd_ = a0 == v0;
    v0 = 0x444e0000u;
    if (cnd_) { goto L_08828088; }
    goto L_08828058;
L_08828058:;
    v0 = v0 | 0x5348;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828064;
L_08828064:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828074;
L_08828074:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826FC4(a0, a1);
    goto L_08828080;
L_08828080:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828088:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828098;
L_08828098:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882B9F0(a0, a1);
    goto L_088280A4;
L_088280A4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088280AC:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088280BC;
L_088280BC:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08827B98(a0, a1, 0, 0, 0, 0);
    goto L_088280C8;
L_088280C8:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088280D0:;
    v0 = v0 | 0x494c;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828178; }
    goto L_088280DC;
L_088280DC:;
    cnd_ = v0 != 0;
    v0 = 0x45550000u;
    if (cnd_) { goto L_08828118; }
    goto L_088280E4;
L_088280E4:;
    v0 = 0x44500000u;
    v0 = v0 | 0x4853;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088280F4;
L_088280F4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828104;
L_08828104:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882C024(a1, 0, 0, 0);
    goto L_08828110;
L_08828110:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828118:;
    v0 = v0 | 0x4c42;
    cnd_ = a0 == v0;
    v0 = 0x46430000u;
    if (cnd_) { goto L_08828154; }
    goto L_08828124;
L_08828124:;
    v0 = v0 | 0x5352;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828130;
L_08828130:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 28;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828140;
L_08828140:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882BA3C(a0, a1, 0, 0, 0);
    goto L_0882814C;
L_0882814C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828154:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828164;
L_08828164:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0881E07C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828170;
L_08828170:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828178:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 32;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828188;
L_08828188:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882775C(a0, a1, 0, 0, 0);
    goto L_08828194;
L_08828194:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882819C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088281AC;
L_088281AC:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825724(a0, a1, 0, 0, 0);
    goto L_088281B8;
L_088281B8:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088281C0:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 28;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088281D0;
L_088281D0:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882C1AC(a0, a1);
    goto L_088281DC;
L_088281DC:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088281E4:;
    v0 = v0 | 0x544d;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828574; }
    goto L_088281F0;
L_088281F0:;
    cnd_ = v0 != 0;
    v0 = 0x4e410000u;
    if (cnd_) { goto L_088283A0; }
    goto L_088281F8;
L_088281F8:;
    v0 = 0x4b540000u;
    v0 = v0 | 0x4e46;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882837C; }
    goto L_08828208;
L_08828208:;
    cnd_ = v0 != 0;
    v0 = 0x4c460000u;
    if (cnd_) { goto L_088282B0; }
    goto L_08828210;
L_08828210:;
    v0 = 0x48500000u;
    v0 = v0 | 0x4453;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882828C; }
    goto L_08828220;
L_08828220:;
    cnd_ = v0 != 0;
    v0 = 0x49540000u;
    if (cnd_) { goto L_0882825C; }
    goto L_08828228;
L_08828228:;
    v0 = 0x47530000u;
    v0 = v0 | 0x4d53;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828238;
L_08828238:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828248;
L_08828248:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088251C4(a0, a1, 0, 0, 0);
    goto L_08828254;
L_08828254:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882825C:;
    v0 = v0 | 0x4e45;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828268;
L_08828268:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828278;
L_08828278:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825140(a0, a1);
    goto L_08828284;
L_08828284:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882828C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882829C;
L_0882829C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882D310(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088282A8;
L_088282A8:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088282B0:;
    v0 = v0 | 0x5352;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828358; }
    goto L_088282BC;
L_088282BC:;
    cnd_ = v0 != 0;
    v0 = 0x4c460000u;
    if (cnd_) { goto L_088282F8; }
    goto L_088282C4;
L_088282C4:;
    v0 = 0x4c420000u;
    v0 = v0 | 0x5441;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088282D4;
L_088282D4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088282E4;
L_088282E4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0881D99C(a0, a1, 0, 0, 0);
    goto L_088282F0;
L_088282F0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088282F8:;
    v0 = v0 | 0x5854;
    cnd_ = a0 == v0;
    v0 = 0x4c4b0000u;
    if (cnd_) { goto L_08828334; }
    goto L_08828304;
L_08828304:;
    v0 = v0 | 0x5348;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828310;
L_08828310:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828320;
L_08828320:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826B98(a1);
    goto L_0882832C;
L_0882832C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828334:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828344;
L_08828344:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882ECE4(a0, a1, 0, 0, 0);
    goto L_08828350;
L_08828350:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828358:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828368;
L_08828368:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882BE88(a0, a1, 0, 0, 0, 0);
    goto L_08828374;
L_08828374:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882837C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882838C;
L_0882838C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882602C(a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828398;
L_08828398:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088283A0:;
    v0 = v0 | 0x4955;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828550; }
    goto L_088283AC;
L_088283AC:;
    cnd_ = v0 != 0;
    v0 = 0x4e450000u;
    if (cnd_) { goto L_08828484; }
    goto L_088283B4;
L_088283B4:;
    v0 = 0x4d4e0000u;
    v0 = v0 | 0x544d;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828460; }
    goto L_088283C4;
L_088283C4:;
    cnd_ = v0 != 0;
    v0 = 0x4d530000u;
    if (cnd_) { goto L_08828400; }
    goto L_088283CC;
L_088283CC:;
    v0 = 0x4d4e0000u;
    v0 = v0 | 0x4148;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088283DC;
L_088283DC:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088283EC;
L_088283EC:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882678C();
    goto L_088283F8;
L_088283F8:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828400:;
    v0 = v0 | 0x4453;
    cnd_ = a0 == v0;
    v0 = 0x4e410000u;
    if (cnd_) { goto L_0882843C; }
    goto L_0882840C;
L_0882840C:;
    v0 = v0 | 0x4348;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828418;
L_08828418:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 44;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828428;
L_08828428:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08827220(a0, a1);
    goto L_08828434;
L_08828434:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882843C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882844C;
L_0882844C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882C7D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828458;
L_08828458:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828460:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828470;
L_08828470:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088294E4();
    goto L_0882847C;
L_0882847C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828484:;
    v0 = v0 | 0x4850;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882852C; }
    goto L_08828490;
L_08828490:;
    cnd_ = v0 != 0;
    v0 = 0x4e490000u;
    if (cnd_) { goto L_088284CC; }
    goto L_08828498;
L_08828498:;
    v0 = 0x4e410000u;
    v0 = v0 | 0x5854;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088284A8;
L_088284A8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088284B8;
L_088284B8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882EE00(a0, a1);
    goto L_088284C4;
L_088284C4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088284CC:;
    v0 = v0 | 0x4c4d;
    cnd_ = a0 == v0;
    v0 = 0x4e4b0000u;
    if (cnd_) { goto L_08828508; }
    goto L_088284D8;
L_088284D8:;
    v0 = v0 | 0x5348;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088284E4;
L_088284E4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088284F4;
L_088284F4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826794(a0, a1);
    goto L_08828500;
L_08828500:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828508:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828518;
L_08828518:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08829838(a0, a1);
    goto L_08828524;
L_08828524:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882852C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 40;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882853C;
L_0882853C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882B694(a0, a1);
    goto L_08828548;
L_08828548:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828550:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828560;
L_08828560:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088265D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882856C;
L_0882856C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828574:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828584;
L_08828584:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088292E0(a0, a1, 0, 0, 0);
    goto L_08828590;
L_08828590:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828598:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088285A8;
L_088285A8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088261F8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088285B4;
L_088285B4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088285BC:;
    v0 = v0 | 0x4650;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828D20; }
    goto L_088285C8;
L_088285C8:;
    cnd_ = v0 != 0;
    v0 = 0x54580000u;
    if (cnd_) { goto L_08828988; }
    goto L_088285D0;
L_088285D0:;
    v0 = 0x524c0000u;
    v0 = v0 | 0x4250;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828964; }
    goto L_088285E0;
L_088285E0:;
    cnd_ = v0 != 0;
    v0 = 0x53550000u;
    if (cnd_) { goto L_08828790; }
    goto L_088285E8;
L_088285E8:;
    v0 = 0x4e530000u;
    v0 = v0 | 0x4947;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882876C; }
    goto L_088285F8;
L_088285F8:;
    cnd_ = v0 != 0;
    v0 = 0x50410000u;
    if (cnd_) { goto L_088286A0; }
    goto L_08828600;
L_08828600:;
    v0 = 0x4e530000u;
    v0 = v0 | 0x4253;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882867C; }
    goto L_08828610;
L_08828610:;
    cnd_ = v0 != 0;
    v0 = 0x4e530000u;
    if (cnd_) { goto L_0882864C; }
    goto L_08828618;
L_08828618:;
    v0 = 0x4e4f0000u;
    v0 = v0 | 0x4850;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828628;
L_08828628:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828638;
L_08828638:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882B1BC();
    goto L_08828644;
L_08828644:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882864C:;
    v0 = v0 | 0x4853;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828658;
L_08828658:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828668;
L_08828668:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882C0D8(a0, a1, 0, 0, 0);
    goto L_08828674;
L_08828674:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882867C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882868C;
L_0882868C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882E79C(a0, a1, 0, 0, 0);
    goto L_08828698;
L_08828698:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088286A0:;
    v0 = v0 | 0x4853;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828748; }
    goto L_088286AC;
L_088286AC:;
    cnd_ = v0 != 0;
    v0 = 0x504d0000u;
    if (cnd_) { goto L_088286E8; }
    goto L_088286B4;
L_088286B4:;
    v0 = 0x4f460000u;
    v0 = v0 | 0x4e46;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088286C4;
L_088286C4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088286D4;
L_088286D4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825ADC(a0, a1, 0, 0, 0);
    goto L_088286E0;
L_088286E0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088286E8:;
    v0 = v0 | 0x4955;
    cnd_ = a0 == v0;
    v0 = 0x52480000u;
    if (cnd_) { goto L_08828724; }
    goto L_088286F4;
L_088286F4:;
    v0 = v0 | 0x5457;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828700;
L_08828700:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828710;
L_08828710:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882F1FC(a0, a1, 0, 0, 0);
    goto L_0882871C;
L_0882871C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828724:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828734;
L_08828734:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826374(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828740;
L_08828740:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828748:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828758;
L_08828758:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882BEB4(a0, a1);
    goto L_08828764;
L_08828764:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882876C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 116;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882877C;
L_0882877C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826244(a0, a1, 0, 0, 0);
    goto L_08828788;
L_08828788:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828790:;
    v0 = v0 | 0x4d4d;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828940; }
    goto L_0882879C;
L_0882879C:;
    cnd_ = v0 != 0;
    v0 = 0x54410000u;
    if (cnd_) { goto L_08828874; }
    goto L_088287A4;
L_088287A4:;
    v0 = 0x53490000u;
    v0 = v0 | 0x564c;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828850; }
    goto L_088287B4;
L_088287B4:;
    cnd_ = v0 != 0;
    v0 = 0x53500000u;
    if (cnd_) { goto L_088287F0; }
    goto L_088287BC;
L_088287BC:;
    v0 = 0x52540000u;
    v0 = v0 | 0x5443;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088287CC;
L_088287CC:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088287DC;
L_088287DC:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088203EC(a0, a1);
    goto L_088287E8;
L_088287E8:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088287F0:;
    v0 = v0 | 0x5453;
    cnd_ = a0 == v0;
    v0 = 0x53540000u;
    if (cnd_) { goto L_0882882C; }
    goto L_088287FC;
L_088287FC:;
    v0 = v0 | 0x5543;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828808;
L_08828808:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 36;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828818;
L_08828818:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0881E2D8(a0, a1, 0, 0, 0);
    goto L_08828824;
L_08828824:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882882C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 64;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882883C;
L_0882883C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882D35C(a0, a1, 0, 0, 0);
    goto L_08828848;
L_08828848:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828850:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828860;
L_08828860:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08827B68();
    goto L_0882886C;
L_0882886C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828874:;
    v0 = v0 | 0x5841;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_0882891C; }
    goto L_08828880;
L_08828880:;
    cnd_ = v0 != 0;
    v0 = 0x54420000u;
    if (cnd_) { goto L_088288BC; }
    goto L_08828888;
L_08828888:;
    v0 = 0x54410000u;
    v0 = v0 | 0x5443;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828898;
L_08828898:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088288A8;
L_088288A8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088204BC(a0, a1);
    goto L_088288B4;
L_088288B4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088288BC:;
    v0 = v0 | 0x5553;
    cnd_ = a0 == v0;
    v0 = 0x54450000u;
    if (cnd_) { goto L_088288F8; }
    goto L_088288C8;
L_088288C8:;
    v0 = v0 | 0x5846;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088288D4;
L_088288D4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088288E4;
L_088288E4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882A3C0(a0, a1, 0, 0, 0);
    goto L_088288F0;
L_088288F0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_088288F8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828908;
L_08828908:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825BF4(a0, a1, 0, 0, 0);
    goto L_08828914;
L_08828914:;
    s2 = v0 + 0;
    goto L_08827E84;
L_0882891C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882892C;
L_0882892C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0892264C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828938;
L_08828938:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828940:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828950;
L_08828950:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088294EC(a0, a1);
    goto L_0882895C;
L_0882895C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828964:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828974;
L_08828974:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882B78C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828980;
L_08828980:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828988:;
    v0 = v0 | 0x544c;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828CFC; }
    goto L_08828994;
L_08828994:;
    cnd_ = v0 != 0;
    v0 = 0x56450000u;
    if (cnd_) { goto L_08828B44; }
    goto L_0882899C;
L_0882899C:;
    v0 = 0x54500000u;
    v0 = v0 | 0x5846;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828B20; }
    goto L_088289AC;
L_088289AC:;
    cnd_ = v0 != 0;
    v0 = 0x54540000u;
    if (cnd_) { goto L_08828A54; }
    goto L_088289B4;
L_088289B4:;
    v0 = 0x544e0000u;
    v0 = v0 | 0x4f46;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828A30; }
    goto L_088289C4;
L_088289C4:;
    cnd_ = v0 != 0;
    v0 = 0x54500000u;
    if (cnd_) { goto L_08828A00; }
    goto L_088289CC;
L_088289CC:;
    v0 = 0x544c0000u;
    v0 = v0 | 0x4c44;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_088289DC;
L_088289DC:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088289EC;
L_088289EC:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08824564(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088289F8;
L_088289F8:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828A00:;
    v0 = v0 | 0x4d48;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828A0C;
L_08828A0C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828A1C;
L_08828A1C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826D38(a0, a1);
    goto L_08828A28;
L_08828A28:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828A30:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828A40;
L_08828A40:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08825D40(a0, a1, 0, 0, 0);
    goto L_08828A4C;
L_08828A4C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828A54:;
    v0 = v0 | 0x4e45;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828AFC; }
    goto L_08828A60;
L_08828A60:;
    cnd_ = v0 != 0;
    v0 = 0x54580000u;
    if (cnd_) { goto L_08828A9C; }
    goto L_08828A68;
L_08828A68:;
    v0 = 0x54530000u;
    v0 = v0 | 0x5846;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828A78;
L_08828A78:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828A88;
L_08828A88:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882A350(a0, a1, 0, 0, 0);
    goto L_08828A94;
L_08828A94:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828A9C:;
    v0 = v0 | 0x4554;
    cnd_ = a0 == v0;
    v0 = 0x54580000u;
    if (cnd_) { goto L_08828AD8; }
    goto L_08828AA8;
L_08828AA8:;
    v0 = v0 | 0x5448;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828AB4;
L_08828AB4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828AC4;
L_08828AC4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826624(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828AD0;
L_08828AD0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828AD8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828AE8;
L_08828AE8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882EBF8(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08828AF4;
L_08828AF4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828AFC:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 32;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828B0C;
L_08828B0C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088251BC();
    goto L_08828B18;
L_08828B18:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828B20:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828B30;
L_08828B30:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882A2E0(a0, a1, 0, 0, 0);
    goto L_08828B3C;
L_08828B3C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828B44:;
    v0 = v0 | 0x4453;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828CD8; }
    goto L_08828B50;
L_08828B50:;
    cnd_ = v0 != 0;
    v0 = 0x56450000u;
    if (cnd_) { goto L_08828C0C; }
    goto L_08828B58;
L_08828B58:;
    v0 = 0x54580000u;
    v0 = v0 | 0x5454;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828BE8; }
    goto L_08828B68;
L_08828B68:;
    cnd_ = v0 != 0;
    v0 = 0x55410000u;
    if (cnd_) { goto L_08828BA4; }
    goto L_08828B70;
L_08828B70:;
    v0 = 0x54580000u;
    v0 = v0 | 0x5450;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828B80;
L_08828B80:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828B90;
L_08828B90:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08829158(a0, a1, 0, 0, 0);
    goto L_08828B9C;
L_08828B9C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828BA4:;
    v0 = v0 | 0x4955;
    cnd_ = a0 == v0;
    v0 = 0x55470000u;
    if (cnd_) { goto L_08828BC4; }
    goto L_08828BB0;
L_08828BB0:;
    v0 = v0 | 0x4e45;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828BBC;
L_08828BBC:;
    a1 = s3 + 0;
    goto L_08827E78;
L_08828BC4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828BD4;
L_08828BD4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08826478(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828BE0;
L_08828BE0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828BE8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828BF8;
L_08828BF8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882F00C(a0, a1, 0, 0, 0);
    goto L_08828C04;
L_08828C04:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828C0C:;
    v0 = v0 | 0x5443;
    cnd_ = a0 == v0;
    v0 = (s32)v0 < (s32)a0;
    if (cnd_) { goto L_08828CB4; }
    goto L_08828C18;
L_08828C18:;
    cnd_ = v0 != 0;
    v0 = 0x58450000u;
    if (cnd_) { goto L_08828C54; }
    goto L_08828C20;
L_08828C20:;
    v0 = 0x56450000u;
    v0 = v0 | 0x4c44;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828C30;
L_08828C30:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828C40;
L_08828C40:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_088243A4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828C4C;
L_08828C4C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828C54:;
    v0 = v0 | 0x5441;
    cnd_ = a0 == v0;
    v0 = 0x584d0000u;
    if (cnd_) { goto L_08828C90; }
    goto L_08828C60;
L_08828C60:;
    v0 = v0 | 0x4453;
    cnd_ = a0 != v0;
    v0 = D_08B230D8 - (12504);
    if (cnd_) { goto L_08827E20; }
    goto L_08828C6C;
L_08828C6C:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828C7C;
L_08828C7C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882D090(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828C88;
L_08828C88:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828C90:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828CA0;
L_08828CA0:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0881E030(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828CAC;
L_08828CAC:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828CB4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    a2 = 24;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828CC4;
L_08828CC4:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882148C(a0, a1);
    goto L_08828CD0;
L_08828CD0:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828CD8:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828CE8;
L_08828CE8:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882CBC4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828CF4;
L_08828CF4:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828CFC:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 20;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828D0C;
L_08828D0C:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08829000(a0, a1);
    goto L_08828D18;
L_08828D18:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828D20:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828D30;
L_08828D30:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_0882B934(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828D3C;
L_08828D3C:;
    s2 = v0 + 0;
    goto L_08827E84;
L_08828D44:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 16;
    func_0882D67C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828D54;
L_08828D54:;
    a0 = sp + 0;
    a1 = s1 + 0;
    v0 = func_08824724(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828D60;
L_08828D60:;
    s2 = v0 + 0;
    goto L_08827E84;
}

/* 08828D68 */
void func_08828D68(void)
{
L_08828D68:;
    return;
}

/* 08828D70 */
u32 func_08828D70(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_08828D70:;
    sp = sp - 64;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    s4 = D_08AF0EC0 - (3776);
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = s4 + 3776;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s1);
    v0 = func_08827C9C(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08828DCC;
L_08828DCC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp, s0); goto L_08828E78; }
    goto L_08828DD4;
L_08828DD4:;
    s2 = D_08B230DC - (12508);
    s3 = D_08B15A14 - (23060);
    goto L_08828DDC;
L_08828DDC:;
    a0 = sp + 0;
    v0 = func_08827D48(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828DE4;
L_08828DE4:;
    s0 = v0 + 0;
    v0 = LD32(s2+12508);
    cnd_ = v0 == 0;
    v0 = LD32(s3+23060);
    if (cnd_) { goto L_08828DFC; }
    goto L_08828DF4;
L_08828DF4:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08828E68; }
    goto L_08828DFC;
L_08828DFC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08828DDC; }
    goto L_08828E04;
L_08828E04:;
    a0 = sp + 0;
    func_08828D68();
    goto L_08828E0C;
L_08828E0C:;
    v0 = LD32(s2+12508);
    cnd_ = v0 == 0;
    v0 = s4 + 3776;
    if (cnd_) { goto L_08828E2C; }
    goto L_08828E18;
L_08828E18:;
    v0 = D_08B15A14 - (23060);
    v1 = LD32(v0+23060);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08828E58; }
    goto L_08828E28;
L_08828E28:;
    v0 = s4 + 3776;
    goto L_08828E2C;
L_08828E2C:;
    v1 = 1;
    ST32(sp, v0);
    goto L_08828E34;
L_08828E34:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08828E58:;
    a0 = s1 + 0;
    func_08828E80(a0);
    goto L_08828E60;
L_08828E60:;
    v0 = s4 + 3776;
    goto L_08828E2C;
L_08828E68:;
    func_08828E80(a0);
    goto L_08828E70;
L_08828E70:;
    goto L_08828DFC;
L_08828E78:;
    v1 = 0 + 0;
    goto L_08828E34;
}

/* 08828E80 */
void func_08828E80(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08828E80:;
    sp = sp - 16;
    v0 = func_0887B098(a0);
    goto L_08828E90;
L_08828E90:;
    a0 = v0 + 0;
    func_08828EA4(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828E98;
L_08828E98:;
    sp = sp + 16;
    return;
}

/* 08828EA4 */
void func_08828EA4(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08828EA4:;
    sp = sp - 16;
    a2 = D_08B230DC - (12508);
    v0 = LD32(a2+12508);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08828F50; }
    goto L_08828EBC;
L_08828EBC:;
    a1 = D_08B230EC - (12524);
    f1 = BITSF(LD32(a1+12524));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_08828F50; }
    goto L_08828ED8;
L_08828ED8:;
    f0 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f12 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08828FA8; }
    goto L_08828EE4;
L_08828EE4:;
    f0 = BITSF(LD32(a1+12524));
    v0 = D_08B230E0 - (12512);
    v1 = D_08B230E4 - (12516);
    f12 = f12 / f0;
    f1 = BITSF(LD32(v0+12512));
    f0 = BITSF(LD32(v1+12516));
    f3 = BITSF(0);
    v0 = D_08AEB6A0 - (-18784);
    f0 = f0 - f1;
    f12 = f12 * f0;
    f12 = f12 + f1;
    fcc = FCMP(f12, f3, 12);
    cnd_ = !fcc;
    f2 = BITSF(LD32(v0-18784));
    if (cnd_) { goto L_08828F24; }
    goto L_08828F20;
L_08828F20:;
    f12 = f3;
    goto L_08828F24;
L_08828F24:;
    fcc = FCMP(f2, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f2; goto L_08828F34; }
    goto L_08828F34;
L_08828F34:;
    a0 = LD32(a2+12508);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08828F48;
L_08828F48:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08828F58; }
    goto L_08828F50;
L_08828F50:;
    sp = sp + 16;
    return;
L_08828F58:;
    func_088CF2F8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08828F60;
L_08828F60:;
    v0 = D_08B230E8 - (12520);
    v0 = LD32(v0+12520);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08828F98; }
    goto L_08828F70;
L_08828F70:;
    v0 = D_08B230DC - (12508);
    goto L_08828F74;
L_08828F74:;
    a0 = LD32(v0+12508);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08828F88;
L_08828F88:;
    { u64 r_ = func_088CF370(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08828F90;
L_08828F90:;
    goto L_08828F50;
L_08828F98:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08828FA0;
L_08828FA0:;
    v0 = D_08B230DC - (12508);
    goto L_08828F74;
L_08828FA8:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f12 = (float)(s32)FBITS(f0);
    f12 = f12 + f12;
    goto L_08828EE4;
}

/* 08828FC4 */
void func_08828FC4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_08828FC4:;
    f1 = BITSF(a0);
    v0 = a0 >> 1;
    v1 = a0 & 0x1;
    v1 = v1 | v0;
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08828FE8; }
    goto L_08828FDC;
L_08828FDC:;
    v0 = D_08B230EC - (12524);
    ST32(v0+12524, FBITS(f0));
    return;
L_08828FE8:;
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08828FDC;
}

/* 08828FF8 */
void func_08828FF8(void)
{
L_08828FF8:;
    return;
}

/* 08829000 */
u32 func_08829000(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08829000:;
    sp = sp - 48;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (s32)v1 < 5;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0882903C; }
    goto L_08829030;
L_08829030:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0882905C; }
    goto L_0882903C;
L_0882903C:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_0882905C:;
    s3 = 0 + 0;
    v0 = func_088342C0();
    goto L_08829064;
L_08829064:;
    s2 = v0 + 0;
    v0 = LD32(s0+8);
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0882913C; }
    goto L_08829078;
L_08829078:;
    v0 = func_088342C0();
    goto L_08829080;
L_08829080:;
    cnd_ = v0 != s2;
    a0 = 0 + 0;
    if (cnd_) { goto L_0882903C; }
    goto L_08829088;
L_08829088:;
    a0 = LD32(s0+16);
    v0 = func_0883436C(a0, 0, 0, 0);
    goto L_08829090;
L_08829090:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0882903C; }
    goto L_08829098;
L_08829098:;
    a0 = LD32(s0+4);
    v0 = LD32(s0+16);
    a0 = a0 - 20;
    v0 = v0 << 2;
    a0 = a0 - v0;
    a0 = a0 - s3;
    v0 = func_08834348(a0, 0, 0, 0);
    goto L_088290B4;
L_088290B4:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0882903C; }
    goto L_088290C0;
L_088290C0:;
    v0 = LD32(s0+16);
    s2 = a1 + 0;
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08829134; }
    goto L_088290D0;
L_088290D0:;
    a0 = s1 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088290E4;
L_088290E4:;
    a2 = LD32(sp+4);
    a1 = s2 + 0;
    a0 = s1 + 0;
    a2 = a2 << 1;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088290FC;
L_088290FC:;
    v0 = LD32(sp+4);
    a0 = s3 + 0;
    a1 = s2 + 0;
    v0 = v0 << 1;
    v0 = v0 + s2;
    ST16(v0-2, 0);
    s3 = s3 + 1;
    func_088343D4(a0, a1);
    goto L_0882911C;
L_0882911C:;
    v1 = LD32(s0+16);
    v0 = LD32(sp+4);
    v1 = (s32)s3 < (s32)v1;
    v0 = v0 << 1;
    cnd_ = v1 != 0;
    s2 = s2 + v0;
    if (cnd_) { goto L_088290D0; }
    goto L_08829134;
L_08829134:;
    a0 = 1;
    goto L_0882903C;
L_0882913C:;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882914C;
L_0882914C:;
    s2 = LD32(sp);
    s3 = 4;
    goto L_08829078;
}

/* 08829158 */
u32 func_08829158(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08829158:;
    sp = sp - 48;
    s3 = a1 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0+8);
    v0 = (s32)v1 < 6;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088291AC; }
    goto L_0882918C;
L_0882918C:;
    v0 = (s32)v1 < 5;
    s2 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088292C0; }
    goto L_0882919C;
L_0882919C:;
    v0 = func_088342C0();
    goto L_088291A4;
L_088291A4:;
    cnd_ = v0 == s0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088291D0; }
    goto L_088291AC;
L_088291AC:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_088291D0:;
    v0 = LD32(s1+8);
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088292A0; }
    goto L_088291E0;
L_088291E0:;
    a1 = LD32(s1+20);
    a2 = LD32(s1+4);
    a0 = LD32(s1+16);
    v0 = a1 << 2;
    a2 = a2 - 24;
    a2 = a2 - v0;
    a2 = a2 - s2;
    a2 = a2 - v1;
    v0 = func_088344CC(a0, a1, a2);
    goto L_08829204;
L_08829204:;
    s4 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088291AC; }
    goto L_08829210;
L_08829210:;
    a1 = LD32(v0+12);
    cnd_ = a1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088291AC; }
    goto L_0882921C;
L_0882921C:;
    v0 = LD32(s1+20);
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08829230; }
    goto L_08829228;
L_08829228:;
    a0 = 1;
    goto L_088291AC;
L_08829230:;
    a0 = s3 + 0;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829244;
L_08829244:;
    a2 = LD32(sp+8);
    a1 = s0 + 0;
    a0 = s3 + 0;
    a2 = a2 << 1;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882925C;
L_0882925C:;
    v0 = LD32(sp+8);
    a1 = s2 + 0;
    a2 = s0 + 0;
    v0 = v0 << 1;
    v0 = v0 + s0;
    ST16(v0-2, 0);
    a0 = s4 + 0;
    s2 = s2 + 1;
    func_088346B8(a0, a1, a2);
    goto L_08829280;
L_08829280:;
    v1 = LD32(s1+20);
    v0 = LD32(sp+8);
    v1 = s2 < v1;
    v0 = v0 << 1;
    cnd_ = v1 != 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_08829230; }
    goto L_08829298;
L_08829298:;
    a0 = 1;
    goto L_088291AC;
L_088292A0:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    a2 = sp + 4;
    ST32(sp+4, 0);
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088292B4;
L_088292B4:;
    v1 = LD32(sp+4);
    v1 = v1 << 2;
    goto L_088291E0;
L_088292C0:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088292D4;
L_088292D4:;
    s0 = LD32(sp);
    s2 = 4;
    goto L_0882919C;
}

/* 088292E0 */
u32 func_088292E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088292E0:;
    sp = sp - 32;
    s5 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a0 = LD32(a0+16);
    func_08835530(a0, t1, t2, t3);
    goto L_08829314;
L_08829314:;
    v0 = LD32(s2+16);
    cnd_ = (s32)v0 <= 0;
    v1 = 1;
    if (cnd_) { goto L_0882947C; }
    goto L_08829320;
L_08829320:;
    a0 = s5 + 0;
    v0 = func_088354F8(a0);
    goto L_08829328;
L_08829328:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882947C; }
    goto L_08829338;
L_08829338:;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829340;
L_08829340:;
    s4 = v0 + 0;
    v0 = LD32(s2+8);
    a0 = 2;
    v1 = 1;
    v0 = (s32)v0 < 2;
    if (v0 != 0) a0 = v1;
    cnd_ = a0 == 0;
    a1 = s4 + 24;
    if (cnd_) { goto L_088293C4; }
    goto L_08829360;
L_08829360:;
    s1 = a0 + 0;
    s0 = s4 + 0;
    a1 = s0 + 0;
    goto L_0882936C;
L_0882936C:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882937C;
L_0882937C:;
    v1 = LD32(s2+8);
    s1 = s1 - 1;
    a1 = s0 + 8;
    v0 = (s32)v1 < 3;
    a0 = s3 + 0;
    a2 = 4;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088294D4; }
    goto L_0882939C;
L_0882939C:;
    v0 = (s32)v1 < 5;
    a1 = s0 + 16;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088294C4; }
    goto L_088293B8;
L_088293B8:;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0882936C; }
    goto L_088293C0;
L_088293C0:;
    a1 = s4 + 24;
    goto L_088293C4;
L_088293C4:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088293D4;
L_088293D4:;
    v1 = LD32(s2+8);
    cnd_ = (s32)v1 <= 0;
    a1 = s4 + 28;
    if (cnd_) { goto L_088294BC; }
    goto L_088293E0;
L_088293E0:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088293F0;
L_088293F0:;
    v0 = LD32(s2+8);
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    a1 = s4 + 32;
    if (cnd_) { goto L_088294A4; }
    goto L_08829400;
L_08829400:;
    ST32(s4+32, 0);
    s0 = s4 + 0;
    goto L_08829408;
L_08829408:;
    s1 = 1;
    s4 = (u32)-1;
    goto L_08829410;
L_08829410:;
    v0 = LD32(s0);
    s1 = s1 - 1;
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882942C; }
    goto L_08829420;
L_08829420:;
    { u64 r_ = func_0883A208(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829428;
L_08829428:;
    ST32(s0, v0);
    goto L_0882942C;
L_0882942C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_08829444; }
    goto L_08829438;
L_08829438:;
    { u64 r_ = func_0883A208(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829440;
L_08829440:;
    ST32(s0+8, v0);
    goto L_08829444;
L_08829444:;
    v0 = LD32(s0+16);
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882945C; }
    goto L_08829450;
L_08829450:;
    { u64 r_ = func_0883A208(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829458;
L_08829458:;
    ST32(s0+16, v0);
    goto L_0882945C;
L_0882945C:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08829410; }
    goto L_08829464;
L_08829464:;
    s5 = s5 + 1;
    func_08828FF8();
    goto L_0882946C;
L_0882946C:;
    v0 = LD32(s2+16);
    v0 = (s32)s5 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08829320; }
    goto L_0882947C;
L_0882947C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088294A4:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088294B4;
L_088294B4:;
    s0 = s4 + 0;
    goto L_08829408;
L_088294BC:;
    ST32(s4+28, 0);
    goto L_088293F0;
L_088294C4:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088294CC;
L_088294CC:;
    goto L_088293B8;
L_088294D4:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088294DC;
L_088294DC:;
    v1 = LD32(s2+8);
    goto L_0882939C;
}

/* 088294E4 */
u32 func_088294E4(void)
{
    u32 v0 = 0;
L_088294E4:;
    v0 = 0 + 0;
    return v0;
}

/* 088294EC */
u32 func_088294EC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088294EC:;
    sp = sp - 96;
    v1 = D_08B307D8 - (2008);
    v0 = (u32)-1;
    s5 = D_08AF0EC0 - (3776);
    s3 = a0 + 0;
    a0 = s5 + 3776;
    s0 = v1 + 2008;
    a2 = LD32(v1+2008);
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    ST32(sp, v0);
    ST32(sp+28, a1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    cnd_ = a2 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08829594; }
    goto L_0882955C;
L_0882955C:;
    v1 = 0 + 0;
    ST32(sp, a0);
    goto L_08829564;
L_08829564:;
    v0 = v1 + 0;
    sp = sp + 96;
    return v0;
L_08829594:;
    a0 = 9;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882959C;
L_0882959C:;
    a1 = LD32(s3+16);
    a0 = s0 + 0;
    s4 = 0 + 0;
    v0 = func_088D5830(a0, a1);
    goto L_088295AC;
L_088295AC:;
    s1 = v0 + 0;
    v0 = LD32(s3+16);
    cnd_ = (s32)v0 <= 0;
    v0 = D_08AEB6A4 - (-18780);
    if (cnd_) { goto L_0882972C; }
    goto L_088295BC;
L_088295BC:;
    f21 = BITSF(LD32(v0-18780));
    goto L_088295C0;
L_088295C0:;
    a0 = sp + 0;
    a1 = s1 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_088295CC;
L_088295CC:;
    a1 = s1 + 12;
    a0 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088295D8;
L_088295D8:;
    a1 = s1 + 16;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088295E4;
L_088295E4:;
    a1 = s1 + 20;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088295F0;
L_088295F0:;
    a1 = s1 + 24;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088295FC;
L_088295FC:;
    v1 = LD32(s3+8);
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a1 = s1 + 28;
    if (cnd_) { goto L_08829804; }
    goto L_0882960C;
L_0882960C:;
    f0 = BITSF(LD32(s1+20));
    f1 = BITSF(LD32(s1+24));
    ST32(s1+28, FBITS(f0));
    ST32(s1+32, FBITS(f1));
    ST32(s1+36, FBITS(f0));
    ST32(s1+40, FBITS(f1));
    goto L_08829624;
L_08829624:;
    cnd_ = (s32)v1 <= 0;
    a1 = s1 + 44;
    if (cnd_) { goto L_088297FC; }
    goto L_0882962C;
L_0882962C:;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829634;
L_08829634:;
    v1 = LD32(s3+8);
    goto L_08829638;
L_08829638:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    a1 = s1 + 268;
    if (cnd_) { goto L_088297EC; }
    goto L_08829644;
L_08829644:;
    ST32(s1+268, 0);
    v0 = LD32(s3+8);
    goto L_0882964C;
L_0882964C:;
    v0 = (s32)v0 < 5;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_088297D4; }
    goto L_08829658;
L_08829658:;
    ST32(s1+264, v0);
    goto L_0882965C;
L_0882965C:;
    s2 = 0 + 0;
    s0 = s2 << 4;
    goto L_08829664;
L_08829664:;
    s0 = s1 + s0;
    a1 = s0 + 48;
    a0 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829674;
L_08829674:;
    a1 = s0 + 52;
    a0 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829680;
L_08829680:;
    a1 = s0 + 56;
    a0 = sp + 0;
    s0 = s0 + 60;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829690;
L_08829690:;
    a1 = s0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882969C;
L_0882969C:;
    v1 = LD32(s3+8);
    v0 = s2 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = (s32)v1 < 2;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_088296F0; }
    goto L_088296B8;
L_088296B8:;
    v0 = LD32(s1+64);
    v1 = LD32(s1+68);
    a0 = LD32(s1+72);
    a1 = LD32(s1+76);
    ST32(s1+96, v0);
    s2 = s2 + 2;
    ST32(s1+100, v1);
    ST32(s1+104, a0);
    ST32(s1+108, a1);
    ST32(s1+80, v0);
    ST32(s1+84, v1);
    ST32(s1+88, a0);
    ST32(s1+92, a1);
    s2 = s2 + 1;
    goto L_088296F0;
L_088296F0:;
    v0 = (s32)s2 < 13;
    cnd_ = v0 != 0;
    s0 = s2 << 4;
    if (cnd_) { goto L_08829664; }
    goto L_088296FC;
L_088296FC:;
    a1 = s1 + 256;
    a0 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829708;
L_08829708:;
    a1 = LD32(s1+256);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0882975C; }
    goto L_08829714;
L_08829714:;
    ST32(s1+260, 0);
    goto L_08829718;
L_08829718:;
    v0 = LD32(s3+16);
    goto L_0882971C;
L_0882971C:;
    s4 = s4 + 1;
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 272;
    if (cnd_) { goto L_088295C0; }
    goto L_0882972C;
L_0882972C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829734;
L_08829734:;
    v1 = LD32(s3+12);
    v1 = v1 & 0x1;
    cnd_ = v1 == 0;
    v0 = s5 + 3776;
    if (cnd_) { goto L_08829750; }
    goto L_08829744;
L_08829744:;
    v1 = 0 + 0;
    ST32(sp, v0);
    goto L_08829564;
L_08829750:;
    ST32(sp, v0);
    v1 = 1;
    goto L_08829564;
L_0882975C:;
    a0 = s1 + 260;
    func_08AA5550(a0, a1, 0, 0, 0);
    goto L_08829764;
L_08829764:;
    v1 = LD32(s1+256);
    cnd_ = (s32)v1 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08829718; }
    goto L_08829770;
L_08829770:;
    v0 = D_08AEB6A4 - (-18780);
    f20 = BITSF(LD32(v0-18780));
    a1 = LD32(s1+260);
    goto L_0882977C;
L_0882977C:;
    s0 = s2 << 4;
    a0 = sp + 0;
    a1 = a1 + s0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882978C;
L_0882978C:;
    v0 = LD32(s3+8);
    cnd_ = (s32)v0 <= 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088297C4; }
    goto L_08829798;
L_08829798:;
    a1 = LD32(s1+260);
    a1 = a1 + s0;
    a1 = a1 + 12;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088297A8;
L_088297A8:;
    v0 = LD32(s1+256);
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+260); goto L_0882977C; }
    goto L_088297BC;
L_088297BC:;
    v0 = LD32(s3+16);
    goto L_0882971C;
L_088297C4:;
    v0 = LD32(s1+260);
    v0 = s0 + v0;
    ST32(v0+12, FBITS(f20));
    goto L_088297A8;
L_088297D4:;
    a0 = sp + 0;
    a1 = sp + 32;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088297E0;
L_088297E0:;
    v1 = LD32(sp+32);
    ST32(s1+264, v1);
    goto L_0882965C;
L_088297EC:;
    a0 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088297F4;
L_088297F4:;
    v0 = LD32(s3+8);
    goto L_0882964C;
L_088297FC:;
    ST32(s1+44, FBITS(f21));
    goto L_08829638;
L_08829804:;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882980C;
L_0882980C:;
    a1 = s1 + 32;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829818;
L_08829818:;
    a1 = s1 + 36;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829824;
L_08829824:;
    a1 = s1 + 40;
    a0 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829830;
L_08829830:;
    v1 = LD32(s3+8);
    goto L_08829624;
}

/* 08829838 */
u32 func_08829838(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08829838:;
    sp = sp - 48;
    s3 = a0 + 0;
    a0 = 10;
    s2 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829868;
L_08829868:;
    v0 = D_08B2C0FC - (-16132);
    s5 = v0 - 16132;
    a0 = s5 + 0;
    func_088CDAC4(a0);
    goto L_08829878;
L_08829878:;
    v1 = LD32(s3+8);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s5+12); goto L_088298C4; }
    goto L_08829888;
L_08829888:;
    v0 = 1;
    goto L_0882988C;
L_0882988C:;
    ST8(s5+25, v0);
    func_088299DC();
    goto L_08829894;
L_08829894:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882989C;
L_0882989C:;
    v0 = 1;
    sp = sp + 48;
    return v0;
L_088298C4:;
    a0 = LD32(s3+16);
    s4 = 0 + 0;
    func_08829A24(a0, a1);
    goto L_088298D0;
L_088298D0:;
    v0 = LD32(s3+16);
    cnd_ = (s32)v0 <= 0;
    v0 = 1;
    if (cnd_) { goto L_0882988C; }
    goto L_088298DC;
L_088298DC:;
    a0 = s2 + 0;
    goto L_088298E0;
L_088298E0:;
    a1 = sp + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088298F0;
L_088298F0:;
    v1 = LD32(sp);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08829918; }
    goto L_088298FC;
L_088298FC:;
    v0 = LD32(s3+16);
    goto L_08829900;
L_08829900:;
    s4 = s4 + 1;
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088298E0; }
    goto L_08829910;
L_08829910:;
    v0 = 1;
    goto L_0882988C;
L_08829918:;
    a0 = s4 + 0;
    v0 = func_08829A58(a0);
    goto L_08829920;
L_08829920:;
    cnd_ = (s32)v0 < 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088299C4; }
    goto L_08829928;
L_08829928:;
    v1 = LD32(s5);
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(sp);
    v0 = v0 << 3;
    s0 = v1 + v0;
    ST32(s0+8, 0);
    a0 = s0 + 4;
    s1 = 0 + 0;
    ST32(s0+12, a1);
    func_08AA4EE8(a0, a1, 0, 0, 0);
    goto L_08829954;
L_08829954:;
    v1 = LD32(sp);
    cnd_ = (s32)v1 <= 0;
    a1 = sp + 4;
    if (cnd_) { goto L_088299B4; }
    goto L_08829960;
L_08829960:;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829970;
L_08829970:;
    a0 = LD32(sp+4);
    s1 = s1 + 1;
    v0 = func_08829A58(a0);
    goto L_0882997C;
L_0882997C:;
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088299A4; }
    goto L_08829988;
L_08829988:;
    v0 = LD32(s0+8);
    a0 = LD32(s0+4);
    v1 = v0 << 2;
    v1 = v1 + a0;
    v0 = v0 + 1;
    ST32(v1, a1);
    ST32(s0+8, v0);
    goto L_088299A4;
L_088299A4:;
    v0 = LD32(sp);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = sp + 4;
    if (cnd_) { goto L_08829960; }
    goto L_088299B4;
L_088299B4:;
    func_08828FF8();
    goto L_088299BC;
L_088299BC:;
    v0 = LD32(s3+16);
    goto L_08829900;
L_088299C4:;
    a1 = LD32(sp);
    a0 = s2 + 0;
    a1 = a1 << 2;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088299D4;
L_088299D4:;
    goto L_088299B4;
}

/* 088299DC */
void func_088299DC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088299DC:;
    sp = sp - 16;
    a0 = 10;
    s0 = D_08B230F8 - (12536);
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088299F4;
L_088299F4:;
    a0 = s0 + 12536;
    v0 = D_08B230F4 - (12532);
    ST32(v0+12532, 0);
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_08829A04;
L_08829A04:;
    v0 = D_08B230FC - (12540);
    ST32(s0+12536, 0);
    ST8(v0+12540, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829A14;
L_08829A14:;
    sp = sp + 16;
    return;
}

/* 08829A24 */
void func_08829A24(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08829A24:;
    v0 = D_08B230F4 - (12532);
    v1 = LD32(v0+12532);
    v0 = v1 ^ a0;
    a0 = a0 ^ a1;
    a2 = v0 < 0x1u;
    cnd_ = v1 == 0;
    a0 = a0 < 0x1u;
    if (cnd_) { goto L_08829A4C; }
    goto L_08829A40;
L_08829A40:;
    v0 = D_08B230FC - (12540);
    ST8(v0+12540, a2);
    return;
L_08829A4C:;
    v0 = D_08B230FC - (12540);
    ST8(v0+12540, a0);
    return;
}

/* 08829A58 */
u32 func_08829A58(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08829A58:;
    v0 = D_08B230FC - (12540);
    v1 = LD_U8(v0+12540);
    a1 = a0 + 0;
    a1 = (a1 & ~(0xffffu << 0)) | ((0 & 0xffff) << 0);
    cnd_ = v1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08829A9C; }
    goto L_08829A70;
L_08829A70:;
    cnd_ = a1 != 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08829A9C; }
    goto L_08829A78;
L_08829A78:;
    v0 = D_08B230F4 - (12532);
    v1 = LD32(v0+12532);
    a1 = a0 << 2;
    cnd_ = v1 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08829A9C; }
    goto L_08829A8C;
L_08829A8C:;
    v1 = D_08B230F8 - (12536);
    v0 = LD32(v1+12536);
    v0 = a1 + v0;
    v0 = LD32(v0);
    goto L_08829A9C;
L_08829A9C:;
    return v0;
}

/* 08829AA4 */
u32 func_08829AA4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_08829AA4:;
    sp = sp - 48;
    s4 = a1 + 0;
    s3 = D_08B30870 - (2160);
    s2 = a0 + 0;
    v0 = LD32(a0+20);
    ST32(s3+2160, v0);
    a0 = LD32(a0+16);
    cnd_ = a0 != 0;
    s5 = s3 + 2160;
    if (cnd_) { goto L_08829B14; }
    goto L_08829AE4;
L_08829AE4:;
    func_088299DC();
    goto L_08829AEC;
L_08829AEC:;
    v0 = 1;
    sp = sp + 48;
    return v0;
L_08829B14:;
    s0 = D_08B2C0FC - (-16132);
    s0 = s0 - 16132;
    a1 = LD32(s0+12);
    s1 = 0 + 0;
    func_08829A24(a0, a1);
    goto L_08829B28;
L_08829B28:;
    a1 = LD32(s0+12);
    a0 = s5 + 0;
    func_088D7740(a0, a1);
    goto L_08829B34;
L_08829B34:;
    v0 = LD32(s2+16);
    cnd_ = (s32)v0 <= 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08829AE4; }
    goto L_08829B40;
L_08829B40:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829B50;
L_08829B50:;
    a0 = s1 + 0;
    v0 = func_08829A58(a0);
    goto L_08829B58;
L_08829B58:;
    s1 = s1 + 1;
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = s3 + 2160;
    if (cnd_) { goto L_08829B70; }
    goto L_08829B68;
L_08829B68:;
    a2 = LD32(sp);
    func_088D7880(a0, a1, a2);
    goto L_08829B70;
L_08829B70:;
    v0 = LD32(s2+16);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08829B40; }
    goto L_08829B80;
L_08829B80:;
    goto L_08829AE4;
}

/* 08829B88 */
u32 func_08829B88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_08829B88:;
    sp = sp - 160;
    fp = D_08B20494 - (1172);
    s5 = fp + 1172;
    v1 = LD32(s5+48);
    t1 = LD32(s5+12);
    v0 = LD32(s5+20);
    a2 = LD32(s5+24);
    a3 = LD32(s5+32);
    t0 = LD32(s5+40);
    s3 = a0 + 0;
    s2 = a1 + 0;
    ST32(sp+52, v1);
    v1 = 0 + 0;
    ST32(sp+44, v0);
    ST32(sp+56, a2);
    ST32(sp+64, a3);
    ST32(sp+68, t0);
    ST32(sp+32, t1);
    cnd_ = t1 != 0;
    s7 = LD32(s5+44);
    if (cnd_) { goto L_08829C18; }
    goto L_08829C08;
L_08829C08:;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 14;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08829C54; }
    goto L_08829C18;
L_08829C18:;
    v0 = v1 + 0;
    sp = sp + 160;
    return v0;
L_08829C54:;
    a0 = 22;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829C5C;
L_08829C5C:;
    a1 = LD32(s3+16);
    ST32(sp+40, 0);
    cnd_ = a1 != 0;
    ST32(sp+60, 0);
    if (cnd_) { goto L_0882A0EC; }
    goto L_08829C6C;
L_08829C6C:;
    a0 = LD32(s3+20);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08829F5C; }
    goto L_08829C78;
L_08829C78:;
    s4 = 0 + 0;
    s6 = 0 + 0;
    s0 = 0 + 0;
    cnd_ = (s32)a1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08829CFC; }
    goto L_08829C8C;
L_08829C8C:;
    v0 = LD32(sp+32);
    v1 = v0 + s1;
    v0 = LD_U8(v1+20);
    cnd_ = v0 == 0;
    a1 = s4 << 3;
    if (cnd_) { goto L_08829F54; }
    goto L_08829CA0;
L_08829CA0:;
    s4 = s4 + v0;
    v0 = LD32(sp+44);
    v0 = v0 + a1;
    ST32(v1+16, v0);
    goto L_08829CB0;
L_08829CB0:;
    cnd_ = a0 == 0;
    v1 = s0 << 3;
    if (cnd_) { goto L_08829CDC; }
    goto L_08829CB8;
L_08829CB8:;
    v0 = LD32(sp+56);
    v1 = v0 + v1;
    v0 = LD_U16(v1+4);
    cnd_ = v0 == 0;
    a0 = s6 << 1;
    if (cnd_) { goto L_08829F4C; }
    goto L_08829CCC;
L_08829CCC:;
    s6 = s6 + v0;
    v0 = LD32(sp+64);
    v0 = v0 + a0;
    ST32(v1, v0);
    goto L_08829CDC;
L_08829CDC:;
    s0 = s0 + 1;
    func_08828FF8();
    goto L_08829CE4;
L_08829CE4:;
    a1 = LD32(s3+16);
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 == 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_08829CFC; }
    goto L_08829CF4;
L_08829CF4:;
    a0 = LD32(s3+20);
    goto L_08829C8C;
L_08829CFC:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s3+12); goto L_08829D5C; }
    goto L_08829D04;
L_08829D04:;
    cnd_ = s7 == 0;
    if (cnd_) { goto L_08829D1C; }
    goto L_08829D0C;
L_08829D0C:;
    a0 = s7 + 0;
    func_0882F864(a0);
    goto L_08829D14;
L_08829D14:;
    a0 = s7 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829D1C;
L_08829D1C:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829D24;
L_08829D24:;
    s4 = v0 + 0;
    a0 = v0 + 0;
    s7 = v0 + 0;
    func_0882F85C(a0);
    goto L_08829D34;
L_08829D34:;
    a1 = s4 + 4;
    a0 = s2 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08829D40;
L_08829D40:;
    func_08828FF8();
    goto L_08829D48;
L_08829D48:;
    v0 = LD32(s3+16);
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08829EE0; }
    goto L_08829D58;
L_08829D58:;
    v1 = LD32(s3+12);
    goto L_08829D5C;
L_08829D5C:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08829E54; }
    goto L_08829D68;
L_08829D68:;
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08829E2C; }
    goto L_08829D74;
L_08829D74:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08829DFC; }
    goto L_08829D80;
L_08829D80:;
    v0 = LD32(sp+40);
    goto L_08829D84;
L_08829D84:;
    v1 = LD32(sp+60);
    a0 = LD_U16(s3+16);
    ST32(s5+16, v0);
    ST32(s5+28, v1);
    v0 = LD32(s3+20);
    v1 = LD32(sp+44);
    ST16(s5+10, a0);
    ST32(s5+36, v0);
    v0 = LD32(sp+32);
    ST32(s5+20, v1);
    ST32(s5+12, v0);
    v1 = LD32(sp+56);
    v0 = LD32(sp+52);
    a1 = LD32(s3+16);
    ST32(s5+24, v1);
    ST32(s5+48, v0);
    v1 = LD32(sp+68);
    v0 = LD32(sp+64);
    ST32(s5+44, s7);
    ST32(s5+32, v0);
    cnd_ = (s32)a1 <= 0;
    ST32(s5+40, v1);
    if (cnd_) { goto L_08829DEC; }
    goto L_08829DDC;
L_08829DDC:;
    v0 = 1;
    a0 = fp + 1172;
    ST8(s5+8, v0);
    func_08804A5C(a0);
    goto L_08829DEC;
L_08829DEC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829DF4;
L_08829DF4:;
    v1 = 1;
    goto L_08829C18;
L_08829DFC:;
    a1 = sp + 84;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829E04;
L_08829E04:;
    v1 = LD32(sp+84);
    a2 = LD32(s2);
    a0 = s2 + 0;
    a1 = v1 << 1;
    v0 = LD32(a2+12);
    a1 = a1 + v1;
    t_ = v0;
    a1 = a1 << 3;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829E24;
L_08829E24:;
    v0 = LD32(sp+40);
    goto L_08829D84;
L_08829E2C:;
    a1 = sp + 80;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829E34;
L_08829E34:;
    v1 = LD32(s2);
    a1 = LD32(sp+80);
    a0 = s2 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = a1 << 3;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829E4C;
L_08829E4C:;
    v1 = LD32(s3+12);
    goto L_08829D74;
L_08829E54:;
    a1 = sp + 72;
    ST32(sp+72, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829E60;
L_08829E60:;
    v1 = LD32(sp+72);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08829E90; }
    goto L_08829E6C;
L_08829E6C:;
    s1 = sp + 16;
    a0 = s2 + 0;
    goto L_08829E74;
L_08829E74:;
    a1 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829E7C;
L_08829E7C:;
    v1 = LD32(sp+72);
    s0 = s0 + 1;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08829E74; }
    goto L_08829E90;
L_08829E90:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 13;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08829EA8; }
    goto L_08829EA0;
L_08829EA0:;
    cnd_ = v1 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08829EB8; }
    goto L_08829EA8;
L_08829EA8:;
    func_08828FF8();
    goto L_08829EB0;
L_08829EB0:;
    v1 = LD32(s3+12);
    goto L_08829D68;
L_08829EB8:;
    a0 = s2 + 0;
    goto L_08829EBC;
L_08829EBC:;
    a1 = sp + 76;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829EC4;
L_08829EC4:;
    v0 = LD32(sp+72);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08829EBC; }
    goto L_08829ED8;
L_08829ED8:;
    goto L_08829EA8;
L_08829EE0:;
    a0 = 1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829EE8;
L_08829EE8:;
    a1 = LD32(s3+16);
    a0 = s4 + 0;
    s1 = 0 + 0;
    a1 = a1 - 1;
    func_08AA581C(a0, a1, 0, 0, 0);
    goto L_08829EFC;
L_08829EFC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08829F04;
L_08829F04:;
    v1 = LD32(s3+16);
    v1 = v1 - 1;
    cnd_ = (s32)v1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08829D58; }
    goto L_08829F14;
L_08829F14:;
    a0 = LD32(s4);
    goto L_08829F18;
L_08829F18:;
    a1 = s2 + 0;
    s1 = s1 + 1;
    a0 = a0 + s0;
    func_08830AAC(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08829F28;
L_08829F28:;
    s0 = s0 + 12;
    func_08828FF8();
    goto L_08829F30;
L_08829F30:;
    v0 = LD32(s3+16);
    v0 = v0 - 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s4); goto L_08829F18; }
    goto L_08829F44;
L_08829F44:;
    v1 = LD32(s3+12);
    goto L_08829D5C;
L_08829F4C:;
    ST32(v1, 0);
    goto L_08829CDC;
L_08829F54:;
    ST32(v1+16, 0);
    goto L_08829CB0;
L_08829F5C:;
    a0 = sp + 56;
    func_08AA5720(a0, a1, 0, 0, 0);
    goto L_08829F64;
L_08829F64:;
    v1 = LD32(s3+16);
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08829FD0; }
    goto L_08829F70;
L_08829F70:;
    s4 = 4;
    v0 = LD32(s3+8);
    goto L_08829F78;
L_08829F78:;
    v1 = LD32(sp+56);
    a2 = s1 << 3;
    v0 = (s32)v0 < 11;
    s1 = s1 + 1;
    a0 = s2 + 0;
    a1 = sp + 36;
    cnd_ = v0 != 0;
    s0 = v1 + a2;
    if (cnd_) { goto L_0882A0DC; }
    goto L_08829F98;
L_08829F98:;
    a1 = s0 + 4;
    goto L_08829F9C;
L_08829F9C:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829FA4;
L_08829FA4:;
    a1 = LD32(s2+20);
    a0 = s2 + 0;
    a1 = s4 - a1;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829FB8;
L_08829FB8:;
    func_08828FF8();
    goto L_08829FC0;
L_08829FC0:;
    v0 = LD32(s3+16);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+8); goto L_08829F78; }
    goto L_08829FD0;
L_08829FD0:;
    a0 = s2 + 0;
    a1 = sp + 60;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08829FDC;
L_08829FDC:;
    a1 = LD32(sp+60);
    a0 = sp + 64;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_08829FE8;
L_08829FE8:;
    v1 = LD32(s3+8);
    v0 = LD32(sp+60);
    a0 = LD32(sp+64);
    v1 = (s32)v1 < 11;
    ST32(sp, v0);
    cnd_ = v1 == 0;
    ST32(sp+4, a0);
    if (cnd_) { goto L_0882A0C0; }
    goto L_0882A004;
L_0882A004:;
    v0 = LD32(sp);
    goto L_0882A008;
L_0882A008:;
    s1 = sp + 0;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0882A090; }
    goto L_0882A014;
L_0882A014:;
    a1 = LD32(s3+20);
    goto L_0882A018;
L_0882A018:;
    a0 = sp + 68;
    s1 = 0 + 0;
    { u64 r_ = func_08AA578C(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A024;
L_0882A024:;
    a0 = LD32(s3+20);
    cnd_ = (s32)a0 <= 0;
    if (cnd_) { a1 = LD32(s3+16); goto L_08829C78; }
    goto L_0882A030;
L_0882A030:;
    s0 = LD32(sp+68);
    goto L_0882A034;
L_0882A034:;
    v0 = s1 << 4;
    a0 = s2 + 0;
    s0 = s0 + v0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A048;
L_0882A048:;
    a1 = s0 + 12;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A054;
L_0882A054:;
    a1 = s0 + 14;
    a0 = s2 + 0;
    s0 = s0 + 15;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A064;
L_0882A064:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A070;
L_0882A070:;
    s1 = s1 + 1;
    func_08828FF8();
    goto L_0882A078;
L_0882A078:;
    a0 = LD32(s3+20);
    v0 = (s32)s1 < (s32)a0;
    cnd_ = v0 != 0;
    s0 = LD32(sp+68);
    if (cnd_) { goto L_0882A034; }
    goto L_0882A088;
L_0882A088:;
    a1 = LD32(s3+16);
    goto L_08829C78;
L_0882A090:;
    a1 = LD32(s1+4);
    goto L_0882A094;
L_0882A094:;
    v0 = s0 << 1;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A0A4;
L_0882A0A4:;
    v1 = LD32(s1);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_0882A094; }
    goto L_0882A0B8;
L_0882A0B8:;
    a1 = LD32(s3+20);
    goto L_0882A018;
L_0882A0C0:;
    a1 = LD32(s2+20);
    a0 = s2 + 0;
    a1 = 0 - a1;
    a1 = a1 & 0x3;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A0D4;
L_0882A0D4:;
    v0 = LD32(sp);
    goto L_0882A008;
L_0882A0DC:;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A0E4;
L_0882A0E4:;
    a1 = s0 + 4;
    goto L_08829F9C;
L_0882A0EC:;
    a0 = sp + 32;
    func_08AA55CC(a0, a1, 0, 0, 0);
    goto L_0882A0F4;
L_0882A0F4:;
    v1 = LD32(s3+16);
    cnd_ = (s32)v1 <= 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0882A17C; }
    goto L_0882A100;
L_0882A100:;
    s1 = 0 + 0;
    v0 = LD32(sp+32);
    goto L_0882A108;
L_0882A108:;
    a0 = s2 + 0;
    s4 = s4 + 1;
    s0 = v0 + s1;
    a1 = s0 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A11C;
L_0882A11C:;
    a1 = s0 + 12;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A128;
L_0882A128:;
    v1 = LD32(s3+8);
    s1 = s1 + 24;
    a0 = s2 + 0;
    v1 = (s32)v1 < 11;
    cnd_ = v1 != 0;
    a1 = sp + 36;
    if (cnd_) { goto L_0882A284; }
    goto L_0882A140;
L_0882A140:;
    a1 = s0 + 20;
    goto L_0882A144;
L_0882A144:;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A14C;
L_0882A14C:;
    a1 = s0 + 21;
    a0 = s2 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A158;
L_0882A158:;
    a1 = s0 + 22;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A164;
L_0882A164:;
    func_08828FF8();
    goto L_0882A16C;
L_0882A16C:;
    v0 = LD32(s3+16);
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_0882A108; }
    goto L_0882A17C;
L_0882A17C:;
    a1 = sp + 40;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A188;
L_0882A188:;
    a1 = LD32(sp+40);
    v0 = 0x1f0000u;
    v0 = v0 | 0xffff;
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0882A1B0; }
    goto L_0882A1A0;
L_0882A1A0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A1A8;
L_0882A1A8:;
    v1 = 0 + 0;
    goto L_08829C18;
L_0882A1B0:;
    a0 = sp + 44;
    func_08AA566C(a0, a1, 0, 0, 0);
    goto L_0882A1B8;
L_0882A1B8:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882A258; }
    goto L_0882A1C4;
L_0882A1C4:;
    v0 = D_08AEB6A8 - (-18776);
    v1 = D_08AEB6AC - (-18772);
    f21 = BITSF(LD32(v0-18776));
    f20 = BITSF(LD32(v1-18772));
    s4 = 0x80000000u;
    v0 = LD32(sp+44);
    goto L_0882A1DC;
L_0882A1DC:;
    v1 = s1 << 3;
    a0 = s2 + 0;
    s0 = v0 + v1;
    a1 = s0 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A1F0;
L_0882A1F0:;
    a1 = s0 + 2;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A1FC;
L_0882A1FC:;
    a0 = s2 + 0;
    a1 = sp + 48;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A208;
L_0882A208:;
    f0 = BITSF(LD32(sp+48));
    f0 = f0 * f21;
    f1 = f0 - f20;
    fcc = FCMP(f20, f0, 14);
    f0 = BITSF(F2I(f0, 1));
    v1 = FBITS(f0);
    cnd_ = !fcc;
    s1 = s1 + 1;
    if (cnd_) { goto L_0882A234; }
    goto L_0882A228;
L_0882A228:;
    f1 = BITSF(F2I(f1, 1));
    v1 = FBITS(f1);
    v1 = v1 | s4;
    goto L_0882A234;
L_0882A234:;
    v0 = LD_U16(s0+2);
    ST16(s0+6, v1);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST16(s0+2, v0);
    func_08828FF8();
    goto L_0882A248;
L_0882A248:;
    v0 = LD32(sp+40);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    v0 = LD32(sp+44);
    if (cnd_) { goto L_0882A1DC; }
    goto L_0882A258;
L_0882A258:;
    a1 = LD32(s3+16);
    a0 = sp + 52;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_0882A264;
L_0882A264:;
    a2 = LD32(s3+16);
    a0 = LD32(sp+52);
    a1 = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A274;
L_0882A274:;
    func_08828FF8();
    goto L_0882A27C;
L_0882A27C:;
    a1 = LD32(s3+16);
    goto L_08829C6C;
L_0882A284:;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A28C;
L_0882A28C:;
    a1 = s0 + 20;
    goto L_0882A144;
}

/* 0882A294 */
u32 func_0882A294(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882A294:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_08829B88(a0, a1);
    goto L_0882A2D4;
L_0882A2D4:;
    sp = sp + 48;
    return v0;
}

/* 0882A2E0 */
u32 func_0882A2E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882A2E0:;
    sp = sp - 16;
    a2 = 0 + 0;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A30C;
L_0882A30C:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A314;
L_0882A314:;
    a2 = LD32(s2+8);
    a0 = v0 + 0;
    a1 = s0 + 0;
    s1 = v0 + 0;
    func_0882A430(a0, a1, a2);
    goto L_0882A328;
L_0882A328:;
    a0 = LD32(s2+16);
    a1 = s1 + 0;
    func_088E9DA4(a0, a1, 0, 0, 0);
    goto L_0882A334;
L_0882A334:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 0882A350 */
u32 func_0882A350(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882A350:;
    sp = sp - 16;
    a2 = 0 + 0;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A37C;
L_0882A37C:;
    a0 = 232;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A384;
L_0882A384:;
    a2 = LD32(s2+8);
    a0 = v0 + 0;
    a1 = s0 + 0;
    s1 = v0 + 0;
    func_0882A890(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A398;
L_0882A398:;
    a0 = LD32(s2+16);
    a1 = s1 + 0;
    func_088E9E7C(a0, a1, 0, 0, 0);
    goto L_0882A3A4;
L_0882A3A4:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 0882A3C0 */
u32 func_0882A3C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882A3C0:;
    sp = sp - 16;
    a2 = 0 + 0;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A3EC;
L_0882A3EC:;
    a0 = 72;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A3F4;
L_0882A3F4:;
    a2 = LD32(s2+8);
    a0 = v0 + 0;
    a1 = s0 + 0;
    s1 = v0 + 0;
    func_0882ACE0(a0, a1, a2);
    goto L_0882A408;
L_0882A408:;
    a0 = LD32(s2+16);
    a1 = s1 + 0;
    func_088E9ED0(a0, a1, 0, 0, 0);
    goto L_0882A414;
L_0882A414:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 0882A430 */
void func_0882A430(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0882A430:;
    v0 = D_08AEB6BC - (-18756);
    f0 = BITSF(LD32(v0-18756));
    sp = sp - 96;
    s5 = a0 + 0;
    s3 = a0 + 60;
    s2 = a0 + 40;
    s1 = a0 + 20;
    ST32(s5+16, FBITS(f0));
    ST32(a0+12, 0);
    a0 = 14;
    ST32(s1+16, FBITS(f0));
    ST32(s5+4, 0);
    ST32(s2+16, FBITS(f0));
    ST32(s1+4, 0);
    ST32(s3+16, FBITS(f0));
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    ST32(s2+12, 0);
    ST32(s5, 0);
    ST32(s5+8, 0);
    ST32(s5+20, 0);
    ST32(s5+40, 0);
    ST32(s5+60, 0);
    ST32(s3+4, 0);
    ST32(s3+8, 0);
    ST32(s3+12, 0);
    fp = a2 + 0;
    s7 = 0 + 0;
    s6 = a1 + 0;
    s4 = (u32)-1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A4DC;
L_0882A4DC:;
    s0 = D_08AF0F40 - (3904);
    ST32(s5+148, 0);
    s0 = s0 + 3904;
    a0 = s5 + 0;
    a1 = sp + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, s4);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp, s0);
    ST32(sp+28, s6);
    func_08AA5868(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A514;
L_0882A514:;
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, s4);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp, s0);
    ST32(sp+28, s6);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A540;
L_0882A540:;
    a0 = s2 + 0;
    a1 = sp + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, s4);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp, s0);
    ST32(sp+28, s6);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A56C;
L_0882A56C:;
    a0 = s3 + 0;
    a1 = sp + 0;
    ST32(sp+12, s4);
    ST32(sp, s0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s6);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A598;
L_0882A598:;
    v0 = D_08AF0EC0 - (3776);
    a1 = s5 + 92;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    v0 = v0 + 3776;
    ST32(sp, v0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A5B8;
L_0882A5B8:;
    a0 = s5 + 136;
    a1 = LD32(s5+92);
    func_08AA5C88(a0, a1, 0, 0, 0);
    goto L_0882A5C4;
L_0882A5C4:;
    v1 = LD32(s5+92);
    cnd_ = v1 == 0;
    a1 = s5 + 80;
    if (cnd_) { goto L_0882A604; }
    goto L_0882A5D0;
L_0882A5D0:;
    s0 = 0 + 0;
    goto L_0882A5D4;
L_0882A5D4:;
    a1 = LD32(s5+136);
    a0 = s6 + 0;
    a2 = 20;
    a1 = a1 + s0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A5EC;
L_0882A5EC:;
    v1 = LD32(s5+92);
    s7 = s7 + 1;
    v1 = s7 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_0882A5D4; }
    goto L_0882A600;
L_0882A600:;
    a1 = s5 + 80;
    goto L_0882A604;
L_0882A604:;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A614;
L_0882A614:;
    a1 = s5 + 84;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A628;
L_0882A628:;
    a1 = s5 + 88;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A63C;
L_0882A63C:;
    a1 = s5 + 96;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A650;
L_0882A650:;
    a1 = s5 + 100;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A664;
L_0882A664:;
    a1 = s5 + 108;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A678;
L_0882A678:;
    a1 = s5 + 104;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A68C;
L_0882A68C:;
    a1 = s5 + 112;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A6A0;
L_0882A6A0:;
    a1 = s5 + 116;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A6B4;
L_0882A6B4:;
    a1 = s5 + 140;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A6C8;
L_0882A6C8:;
    v1 = (s32)fp < 10;
    cnd_ = v1 == 0;
    a1 = s5 + 120;
    if (cnd_) { goto L_0882A864; }
    goto L_0882A6D4;
L_0882A6D4:;
    v0 = D_08AEB6C0 - (-18752);
    f0 = BITSF(LD32(v0-18752));
    v0 = D_08AEB6C4 - (-18748);
    ST32(s5+120, FBITS(f0));
    f0 = BITSF(LD32(v0-18748));
    ST32(s5+124, FBITS(f0));
    v0 = (s32)fp < 11;
    goto L_0882A6F0;
L_0882A6F0:;
    cnd_ = v0 == 0;
    v1 = D_08AEB6BC - (-18756);
    if (cnd_) { goto L_0882A848; }
    goto L_0882A6F8;
L_0882A6F8:;
    v0 = LD32(s5+140);
    f0 = BITSF(LD32(v1-18756));
    v0 = (v0 & ~(0x3u << 3)) | ((0 & 0x3) << 3);
    ST32(s5+140, v0);
    ST32(s5+128, FBITS(f0));
    v0 = (s32)fp < 12;
    goto L_0882A710;
L_0882A710:;
    ST32(sp+32, 0);
    s1 = sp + 32;
    ST32(sp+36, 0);
    cnd_ = v0 == 0;
    ST32(sp+40, 0);
    if (cnd_) { goto L_0882A830; }
    goto L_0882A724;
L_0882A724:;
    v0 = func_088E9464();
    goto L_0882A72C;
L_0882A72C:;
    a0 = LD32(sp+32);
    goto L_0882A730;
L_0882A730:;
    cnd_ = a0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0882A74C; }
    goto L_0882A738;
L_0882A738:;
    cnd_ = v0 == a0;
    v0 = (s32)fp < 13;
    if (cnd_) { goto L_0882A788; }
    goto L_0882A740;
L_0882A740:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A748;
L_0882A748:;
    ST32(sp+32, 0);
    goto L_0882A74C;
L_0882A74C:;
    ST32(sp+40, 0);
    cnd_ = s0 == 0;
    ST32(sp+36, 0);
    if (cnd_) { goto L_0882A828; }
    goto L_0882A758;
L_0882A758:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A760;
L_0882A760:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+36, v0);
    ST32(sp+40, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882A774;
L_0882A774:;
    cnd_ = v0 != 0;
    ST32(sp+32, v0);
    if (cnd_) { goto L_0882A814; }
    goto L_0882A77C;
L_0882A77C:;
    ST32(sp+40, 0);
    ST32(sp+36, 0);
    goto L_0882A784;
L_0882A784:;
    v0 = (s32)fp < 13;
    goto L_0882A788;
L_0882A788:;
    cnd_ = v0 == 0;
    a1 = s5 + 144;
    if (cnd_) { goto L_0882A7FC; }
    goto L_0882A790;
L_0882A790:;
    ST32(s5+144, 0);
    goto L_0882A794;
L_0882A794:;
    a0 = LD32(sp+32);
    v0 = func_088325D0(a0);
    goto L_0882A79C;
L_0882A79C:;
    a0 = v0 + 0;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A7A4;
L_0882A7A4:;
    a0 = LD32(sp+32);
    cnd_ = a0 != 0;
    ST32(s5+132, v0);
    if (cnd_) { goto L_0882A7EC; }
    goto L_0882A7B0;
L_0882A7B0:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A7BC;
L_0882A7BC:;
    sp = sp + 96;
    return;
L_0882A7EC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A7F4;
L_0882A7F4:;
    ST32(sp+32, 0);
    goto L_0882A7B0;
L_0882A7FC:;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A80C;
L_0882A80C:;
    goto L_0882A794;
L_0882A814:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A820;
L_0882A820:;
    v0 = (s32)fp < 13;
    goto L_0882A788;
L_0882A828:;
    ST32(sp+32, 0);
    goto L_0882A784;
L_0882A830:;
    a0 = s6 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A840;
L_0882A840:;
    a0 = LD32(sp+32);
    goto L_0882A730;
L_0882A848:;
    a1 = s5 + 128;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A85C;
L_0882A85C:;
    v0 = (s32)fp < 12;
    goto L_0882A710;
L_0882A864:;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A874;
L_0882A874:;
    a1 = s5 + 124;
    a0 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882A888;
L_0882A888:;
    v0 = (s32)fp < 11;
    goto L_0882A6F0;
}

/* 0882A890 */
void func_0882A890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0882A890:;
    sp = sp - 96;
    v0 = D_08AEB6CC - (-18740);
    fp = a0 + 0;
    s7 = a1 + 0;
    a1 = sp + 0;
    s6 = a0 + 120;
    s5 = a0 + 100;
    s4 = a0 + 80;
    s3 = a0 + 60;
    s2 = a0 + 40;
    s1 = a0 + 20;
    s0 = a0 + 140;
    f0 = BITSF(LD32(v0-18740));
    ST32(sp+32, a2);
    v0 = (u32)-1;
    ST32(a0+16, FBITS(f0));
    ST32(a0+12, 0);
    ST32(a0+4, 0);
    ST32(s1+16, FBITS(f0));
    ST32(s1+12, 0);
    ST32(s1+4, 0);
    ST32(s2+16, FBITS(f0));
    ST32(a0+8, 0);
    ST32(s2+12, 0);
    ST32(s2+4, 0);
    ST32(s3+16, FBITS(f0));
    ST32(s3+12, 0);
    ST32(s3+4, 0);
    ST32(s4+16, FBITS(f0));
    ST32(s2+8, 0);
    ST32(s5+16, FBITS(f0));
    ST32(s4+4, 0);
    ST32(s1+8, 0);
    ST32(s4+8, 0);
    ST32(s4+12, 0);
    ST32(s5+4, 0);
    ST32(a0, 0);
    ST32(s6+16, FBITS(f0));
    ST32(s6+4, 0);
    ST32(s0+16, FBITS(f0));
    ST32(s0+4, 0);
    ST32(s5+8, 0);
    ST32(s5+12, 0);
    ST32(a0+20, 0);
    ST32(a0+40, 0);
    ST32(a0+60, 0);
    ST32(a0+80, 0);
    ST32(a0+100, 0);
    ST32(a0+120, 0);
    ST32(s6+8, 0);
    ST32(s6+12, 0);
    ST32(a0+140, 0);
    ST32(s3+8, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5A98(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882A9C0;
L_0882A9C0:;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5CD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882A9F8;
L_0882A9F8:;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s2 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AA30;
L_0882AA30:;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s3 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5CD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AA68;
L_0882AA68:;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s4 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AAA0;
L_0882AAA0:;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s5 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AAD8;
L_0882AAD8:;
    v0 = (u32)-1;
    ST32(sp+12, v0);
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s6 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AB10;
L_0882AB10:;
    v0 = D_08AF0F40 - (3904);
    v0 = v0 + 3904;
    a0 = s0 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    v0 = (u32)-1;
    ST32(sp+12, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s7);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AB48;
L_0882AB48:;
    v0 = D_08AF0EC0 - (3776);
    a1 = fp + 160;
    a0 = s7 + 0;
    a2 = 12;
    a3 = 0 + 0;
    v0 = v0 + 3776;
    ST32(sp, v0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AB68;
L_0882AB68:;
    a1 = fp + 172;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AB7C;
L_0882AB7C:;
    a1 = fp + 176;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AB90;
L_0882AB90:;
    a1 = fp + 180;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ABA4;
L_0882ABA4:;
    a1 = fp + 184;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ABB8;
L_0882ABB8:;
    a1 = fp + 188;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ABCC;
L_0882ABCC:;
    a1 = fp + 192;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ABE0;
L_0882ABE0:;
    a1 = fp + 196;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ABF4;
L_0882ABF4:;
    a1 = fp + 200;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC08;
L_0882AC08:;
    a1 = fp + 204;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC1C;
L_0882AC1C:;
    a1 = fp + 208;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC30;
L_0882AC30:;
    a1 = fp + 212;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC44;
L_0882AC44:;
    a1 = fp + 216;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC58;
L_0882AC58:;
    a2 = 4;
    a1 = fp + 220;
    a0 = s7 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC6C;
L_0882AC6C:;
    v0 = LD32(sp+32);
    a2 = (s32)v0 < 5;
    cnd_ = a2 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0882ACC4; }
    goto L_0882AC7C;
L_0882AC7C:;
    ST32(fp+224, v0);
    a1 = fp + 228;
    goto L_0882AC84;
L_0882AC84:;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AC94;
L_0882AC94:;
    sp = sp + 96;
    return;
L_0882ACC4:;
    a1 = fp + 224;
    a0 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ACD8;
L_0882ACD8:;
    a1 = fp + 228;
    goto L_0882AC84;
}

/* 0882ACE0 */
void func_0882ACE0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0882ACE0:;
    sp = sp - 96;
    s7 = D_08AEB6D8 - (-18728);
    f0 = BITSF(LD32(s7-18728));
    s4 = a0 + 0;
    s2 = a0 + 28;
    s1 = a0 + 8;
    a0 = 14;
    ST32(s1+16, FBITS(f0));
    ST32(s1+4, 0);
    ST32(s1+12, 0);
    ST32(s2+4, 0);
    ST32(s2+16, FBITS(f0));
    ST32(s4+8, 0);
    ST32(s1+8, 0);
    ST32(s4+28, 0);
    ST32(s2+8, 0);
    ST32(s2+12, 0);
    ST32(s4+68, 0);
    s0 = D_08AF0F40 - (3904);
    s0 = s0 + 3904;
    s6 = a2 + 0;
    s5 = (u32)-1;
    s3 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AD64;
L_0882AD64:;
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, s5);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp, s0);
    ST32(sp+28, s3);
    func_08AA5868(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882AD90;
L_0882AD90:;
    a0 = s2 + 0;
    a1 = sp + 0;
    ST32(sp, s0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, s5);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+28, s3);
    func_08AA5A98(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882ADBC;
L_0882ADBC:;
    v0 = D_08AF0EC0 - (3776);
    v0 = v0 + 3776;
    v1 = (s32)s6 < 13;
    cnd_ = v1 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0882B1A0; }
    goto L_0882ADD0;
L_0882ADD0:;
    ST32(s4+48, s5);
    a0 = s3 + 0;
    goto L_0882ADD8;
L_0882ADD8:;
    a1 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ADE8;
L_0882ADE8:;
    a1 = LD32(s4);
    a0 = s4 + 4;
    s1 = 0 + 0;
    func_08AA5F04(a0, a1, 0, 0, 0);
    goto L_0882ADF8;
L_0882ADF8:;
    v1 = LD32(s4);
    cnd_ = v1 != 0;
    s0 = LD32(s4+4);
    if (cnd_) { goto L_0882B0F8; }
    goto L_0882AE04;
L_0882AE04:;
    a1 = s4 + 52;
    goto L_0882AE08;
L_0882AE08:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AE18;
L_0882AE18:;
    v1 = (s32)s6 < 3;
    cnd_ = v1 != 0;
    ST32(s4+56, 0);
    if (cnd_) { goto L_0882AE8C; }
    goto L_0882AE24;
L_0882AE24:;
    v0 = (s32)s6 < 10;
    a0 = s3 + 0;
    cnd_ = v0 != 0;
    a1 = 16;
    if (cnd_) { goto L_0882AE84; }
    goto L_0882AE34;
L_0882AE34:;
    a0 = s3 + 0;
    a1 = sp + 32;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AE48;
L_0882AE48:;
    v0 = LD32(sp+32);
    cnd_ = v0 == 0;
    a1 = LD32(s4+56);
    if (cnd_) { goto L_0882AE60; }
    goto L_0882AE54;
L_0882AE54:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0882B0B0; }
    goto L_0882AE5C;
L_0882AE5C:;
    ST32(a1, v0);
    goto L_0882AE60;
L_0882AE60:;
    cnd_ = a1 != 0;
    v0 = 20;
    if (cnd_) { goto L_0882AF80; }
    goto L_0882AE68;
L_0882AE68:;
    a1 = 8;
    v1 = (s32)s6 < 11;
    if (v1 == 0) a1 = v0;
    a0 = (s32)s6 < 12;
    v0 = a1 + 8;
    if (a0 == 0) a1 = v0;
    a0 = s3 + 0;
    goto L_0882AE84;
L_0882AE84:;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AE8C;
L_0882AE8C:;
    a1 = s4 + 64;
    goto L_0882AE90;
L_0882AE90:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AEA0;
L_0882AEA0:;
    v1 = LD32(s4+56);
    cnd_ = v1 != 0;
    v0 = (s32)s6 < 9;
    if (cnd_) { goto L_0882AEBC; }
    goto L_0882AEAC;
L_0882AEAC:;
    v0 = LD32(s4+64);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST32(s4+64, v0);
    v0 = (s32)s6 < 9;
    goto L_0882AEBC;
L_0882AEBC:;
    cnd_ = v0 == 0;
    v0 = (s32)s6 < 8;
    if (cnd_) { goto L_0882AED4; }
    goto L_0882AEC4;
L_0882AEC4:;
    v0 = LD32(s4+64);
    v0 = (v0 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    ST32(s4+64, v0);
    v0 = (s32)s6 < 8;
    goto L_0882AED4;
L_0882AED4:;
    cnd_ = v0 == 0;
    v0 = (s32)s6 < 7;
    if (cnd_) { goto L_0882AEEC; }
    goto L_0882AEDC;
L_0882AEDC:;
    v0 = LD32(s4+64);
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    ST32(s4+64, v0);
    v0 = (s32)s6 < 7;
    goto L_0882AEEC;
L_0882AEEC:;
    cnd_ = v0 == 0;
    a1 = sp + 36;
    if (cnd_) { goto L_0882AF50; }
    goto L_0882AEF4;
L_0882AEF4:;
    v0 = (s32)s6 < 14;
    goto L_0882AEF8;
L_0882AEF8:;
    cnd_ = v0 == 0;
    a1 = s4 + 60;
    if (cnd_) { goto L_0882AF38; }
    goto L_0882AF00;
L_0882AF00:;
    ST32(s4+60, 0);
    goto L_0882AF04;
L_0882AF04:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AF0C;
L_0882AF0C:;
    sp = sp + 96;
    return;
L_0882AF38:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AF48;
L_0882AF48:;
    goto L_0882AF04;
L_0882AF50:;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AF60;
L_0882AF60:;
    a1 = LD32(sp+36);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = (s32)s6 < 14; goto L_0882AEF8; }
    goto L_0882AF6C;
L_0882AF6C:;
    a1 = a1 << 3;
    a0 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AF78;
L_0882AF78:;
    v0 = (s32)s6 < 14;
    goto L_0882AEF8;
L_0882AF80:;
    a1 = a1 + 8;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AF94;
L_0882AF94:;
    a1 = LD32(s4+56);
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AFAC;
L_0882AFAC:;
    v1 = (s32)s6 < 11;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s4+56); goto L_0882B064; }
    goto L_0882AFB8;
L_0882AFB8:;
    v0 = (s32)s6 < 12;
    goto L_0882AFBC;
L_0882AFBC:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s4+56); goto L_0882B030; }
    goto L_0882AFC4;
L_0882AFC4:;
    a0 = LD32(s4+56);
    goto L_0882AFC8;
L_0882AFC8:;
    s0 = 0 + 0;
    a1 = LD32(a0);
    a0 = a0 + 4;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_0882AFD8;
L_0882AFD8:;
    v1 = LD32(s4+56);
    v0 = LD32(v1);
    cnd_ = (s32)v0 <= 0;
    a1 = s4 + 64;
    if (cnd_) { goto L_0882AE90; }
    goto L_0882AFE8;
L_0882AFE8:;
    a1 = 0 + 0;
    goto L_0882AFEC;
L_0882AFEC:;
    a2 = 0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882AFF8;
L_0882AFF8:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B000;
L_0882B000:;
    a1 = LD32(s4+56);
    v1 = s0 << 2;
    s0 = s0 + 1;
    a0 = LD32(a1+4);
    v1 = v1 + a0;
    ST32(v1, v0);
    v0 = LD32(a1);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 0 + 0; goto L_0882AFEC; }
    goto L_0882B028;
L_0882B028:;
    a1 = s4 + 64;
    goto L_0882AE90;
L_0882B030:;
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + 28;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B044;
L_0882B044:;
    a1 = LD32(s4+56);
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + 32;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B05C;
L_0882B05C:;
    a0 = LD32(s4+56);
    goto L_0882AFC8;
L_0882B064:;
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + 16;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B078;
L_0882B078:;
    a1 = LD32(s4+56);
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + 20;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B090;
L_0882B090:;
    a1 = LD32(s4+56);
    a0 = s3 + 0;
    a2 = 4;
    a1 = a1 + 24;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B0A8;
L_0882B0A8:;
    v0 = (s32)s6 < 12;
    goto L_0882AFBC;
L_0882B0B0:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B0B8;
L_0882B0B8:;
    v1 = D_08AEB6DC - (-18724);
    f1 = BITSF(LD32(s7-18728));
    ST32(v0, 0);
    a1 = v0 + 0;
    f0 = BITSF(LD32(v1-18724));
    ST32(v0+24, FBITS(f1));
    ST32(v0+20, FBITS(f0));
    ST32(v0+4, 0);
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f1));
    ST32(v0+16, FBITS(f1));
    ST32(v0+28, 0);
    ST32(v0+32, 0);
    ST32(s4+56, v0);
    v0 = LD32(sp+32);
    goto L_0882AE5C;
L_0882B0F8:;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B10C;
L_0882B10C:;
    a0 = LD32(s0);
    s1 = s1 + 1;
    func_088EA038(a0, 0, 0, 0);
    goto L_0882B118;
L_0882B118:;
    a1 = s0 + 4;
    a0 = s3 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B12C;
L_0882B12C:;
    a1 = s0 + 16;
    a0 = s3 + 0;
    a2 = 36;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B140;
L_0882B140:;
    a1 = s0 + 52;
    a0 = s3 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B154;
L_0882B154:;
    a1 = s0 + 64;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s3 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B168;
L_0882B168:;
    a0 = s0 + 68;
    a1 = s3 + 0;
    func_088EA38C(a0, a1, 0, 0, 0);
    goto L_0882B174;
L_0882B174:;
    a1 = s0 + 100;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B188;
L_0882B188:;
    v1 = LD32(s4);
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    s0 = s0 + 104;
    if (cnd_) { goto L_0882B0F8; }
    goto L_0882B198;
L_0882B198:;
    a1 = s4 + 52;
    goto L_0882AE08;
L_0882B1A0:;
    a1 = s4 + 48;
    a0 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B1B4;
L_0882B1B4:;
    a0 = s3 + 0;
    goto L_0882ADD8;
}

/* 0882B1BC */
u32 func_0882B1BC(void)
{
    u32 v0 = 0;
L_0882B1BC:;
    v0 = 0 + 0;
    return v0;
}

/* 0882B1C4 */
u32 func_0882B1C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0882B1C4:;
    sp = sp - 64;
    s4 = a2 + 0;
    s3 = a0 + 0;
    v0 = LD32(a2+16);
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0882B240; }
    goto L_0882B1F4;
L_0882B1F4:;
    ST32(a0+68, 0);
    ST32(a0, 0);
    ST32(a0+56, 0);
    ST32(a0+44, 0);
    ST32(a0+48, 0);
    ST32(a0+80, 0);
    ST32(a0+4, 0);
    ST32(a0+52, 0);
    ST32(a0+40, 0);
    ST32(a0+60, 0);
    goto L_0882B21C;
L_0882B21C:;
    v0 = 1;
    sp = sp + 64;
    return v0;
L_0882B240:;
    a0 = 3;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B248;
L_0882B248:;
    a1 = LD32(s4+16);
    a0 = sp + 0;
    s2 = 0 + 0;
    func_08AA6068(a0, a1, 0, 0, 0);
    goto L_0882B258;
L_0882B258:;
    v1 = LD32(s4+16);
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD32(s4+20); goto L_0882B36C; }
    goto L_0882B264;
L_0882B264:;
    s0 = 0 + 0;
    goto L_0882B268;
L_0882B268:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B280;
L_0882B280:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a1 = a1 + 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B29C;
L_0882B29C:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a1 = a1 + 8;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B2B8;
L_0882B2B8:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a1 = a1 + 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B2D4;
L_0882B2D4:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 24;
    a1 = a1 + s0;
    a1 = a1 + 16;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B2F0;
L_0882B2F0:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a1 = a1 + 44;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B30C;
L_0882B30C:;
    a1 = LD32(sp);
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + s0;
    a1 = a1 + 48;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B328;
L_0882B328:;
    a1 = LD32(sp);
    a2 = 2;
    a3 = 0 + 0;
    a1 = a1 + s0;
    a1 = a1 + 52;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B344;
L_0882B344:;
    a0 = s1 + 0;
    a1 = 2;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B350;
L_0882B350:;
    s2 = s2 + 1;
    func_08828FF8();
    goto L_0882B358;
L_0882B358:;
    v0 = LD32(s4+16);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 56;
    if (cnd_) { goto L_0882B268; }
    goto L_0882B368;
L_0882B368:;
    a1 = LD32(s4+20);
    goto L_0882B36C;
L_0882B36C:;
    a0 = sp + 4;
    s2 = 0 + 0;
    func_08AA6108(a0, a1, 0, 0, 0);
    goto L_0882B378;
L_0882B378:;
    v1 = LD32(s4+20);
    cnd_ = v1 != 0;
    s0 = LD32(sp+4);
    if (cnd_) { goto L_0882B660; }
    goto L_0882B384;
L_0882B384:;
    a1 = LD32(s4+24);
    goto L_0882B388;
L_0882B388:;
    a0 = sp + 8;
    s0 = 4;
    func_08AA6168(a0, a1, 0, 0, 0);
    goto L_0882B394;
L_0882B394:;
    a2 = LD32(s4+24);
    a1 = LD32(sp+8);
    a3 = 0 + 0;
    a2 = a2 << 3;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B3AC;
L_0882B3AC:;
    func_08828FF8();
    goto L_0882B3B4;
L_0882B3B4:;
    a1 = LD32(s4+24);
    a0 = sp + 12;
    func_08AA61AC(a0, a1, 0, 0, 0);
    goto L_0882B3C0;
L_0882B3C0:;
    a1 = LD32(sp+12);
    a2 = LD32(s4+24);
    a0 = s1 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B3D4;
L_0882B3D4:;
    func_08828FF8();
    goto L_0882B3DC;
L_0882B3DC:;
    v0 = LD32(s4+24);
    v0 = s0 - v0;
    a1 = v0 & 0x3;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0882B650; }
    goto L_0882B3F0;
L_0882B3F0:;
    func_08828FF8();
    goto L_0882B3F8;
L_0882B3F8:;
    a1 = LD32(s4+28);
    a0 = sp + 16;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_0882B404;
L_0882B404:;
    a2 = LD32(s4+28);
    a1 = LD32(sp+16);
    a0 = s1 + 0;
    a2 = a2 << 1;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B41C;
L_0882B41C:;
    func_08828FF8();
    goto L_0882B424;
L_0882B424:;
    v0 = LD32(s4+28);
    v0 = v0 << 1;
    v0 = s0 - v0;
    a1 = v0 & 0x3;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0882B640; }
    goto L_0882B43C;
L_0882B43C:;
    func_08828FF8();
    goto L_0882B444;
L_0882B444:;
    v0 = LD32(s4+12);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = LD32(s4+32);
    if (cnd_) { goto L_0882B62C; }
    goto L_0882B454;
L_0882B454:;
    a0 = s3 + 72;
    s2 = 0 + 0;
    func_08AA61EC(a0, a1, 0, 0, 0);
    goto L_0882B460;
L_0882B460:;
    a2 = LD32(s4+32);
    a1 = LD32(s3+72);
    a0 = s1 + 0;
    a2 = a2 << 1;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B478;
L_0882B478:;
    func_08828FF8();
    goto L_0882B480;
L_0882B480:;
    v0 = LD32(s4+32);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+72); goto L_0882B600; }
    goto L_0882B48C;
L_0882B48C:;
    func_08828FF8();
    goto L_0882B494;
L_0882B494:;
    v0 = LD32(s4+32);
    v0 = v0 << 1;
    v0 = 0 - v0;
    a1 = v0 & 0x2;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0882B5EC; }
    goto L_0882B4AC;
L_0882B4AC:;
    func_08828FF8();
    goto L_0882B4B4;
L_0882B4B4:;
    a1 = s3 + 8;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B4C8;
L_0882B4C8:;
    a1 = s3 + 12;
    a0 = s1 + 0;
    a2 = 24;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B4DC;
L_0882B4DC:;
    func_08828FF8();
    goto L_0882B4E4;
L_0882B4E4:;
    v0 = 1;
    a1 = LD32(s4+36);
    ST8(s3+76, v0);
    a0 = s3 + 80;
    func_08AA4DC0(a0, a1, 0, 0, 0);
    goto L_0882B4F8;
L_0882B4F8:;
    v0 = LD32(s4+36);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = v0 << 1; goto L_0882B5CC; }
    goto L_0882B504;
L_0882B504:;
    func_08828FF8();
    goto L_0882B50C;
L_0882B50C:;
    v1 = LD32(s3+8);
    a2 = LD32(s3+80);
    t0 = LD32(s4+16);
    v1 = v1 + 1;
    v1 = v1 >> 1;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    ST32(s3+36, a2);
    a3 = 0 + 0;
    cnd_ = t0 == 0;
    a2 = a2 + v0;
    if (cnd_) { goto L_0882B570; }
    goto L_0882B53C;
L_0882B53C:;
    a1 = LD32(sp);
    goto L_0882B540;
L_0882B540:;
    v0 = LD32(a1+12);
    a3 = a3 + 1;
    a0 = a3 < t0;
    v0 = v0 + 1;
    v0 = v0 >> 1;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    ST32(a1+40, a2);
    a2 = a2 + v1;
    cnd_ = a0 != 0;
    a1 = a1 + 56;
    if (cnd_) { goto L_0882B540; }
    goto L_0882B570;
L_0882B570:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B578;
L_0882B578:;
    v1 = LD32(s4+16);
    ST32(s3+4, v1);
    v0 = LD32(s4+20);
    ST32(s3+52, v0);
    v1 = LD32(s4+24);
    v0 = LD32(sp+8);
    ST32(s3+40, v1);
    a0 = LD32(s4+28);
    ST32(s3+44, v0);
    ST32(s3+60, a0);
    v0 = LD32(sp+12);
    v1 = LD32(s4+32);
    ST32(s3+48, v0);
    v0 = LD32(sp);
    ST32(s3+68, v1);
    ST32(s3, v0);
    v1 = LD32(sp+16);
    v0 = LD32(sp+4);
    ST32(s3+64, v1);
    ST32(s3+56, v0);
    goto L_0882B21C;
L_0882B5CC:;
    a1 = LD32(s3+80);
    a2 = a2 + v0;
    a2 = a2 << 2;
    a0 = s1 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B5E4;
L_0882B5E4:;
    goto L_0882B504;
L_0882B5EC:;
    a0 = s1 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B5F4;
L_0882B5F4:;
    goto L_0882B4AC;
L_0882B5FC:;
    v0 = LD32(s3+72);
    goto L_0882B600;
L_0882B600:;
    s0 = s2 << 1;
    s2 = s2 + 1;
    s0 = s0 + v0;
    a0 = (u32)(s32)LD_S16(s0);
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B614;
L_0882B614:;
    v1 = LD32(s4+32);
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    ST16(s0, v0);
    if (cnd_) { goto L_0882B5FC; }
    goto L_0882B624;
L_0882B624:;
    goto L_0882B48C;
L_0882B62C:;
    a0 = s1 + 0;
    a1 = a1 << 2;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B638;
L_0882B638:;
    a1 = LD32(s4+32);
    goto L_0882B454;
L_0882B640:;
    a0 = s1 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B648;
L_0882B648:;
    goto L_0882B43C;
L_0882B650:;
    a0 = s1 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B658;
L_0882B658:;
    goto L_0882B3F0;
L_0882B660:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B674;
L_0882B674:;
    s2 = s2 + 1;
    func_08828FF8();
    goto L_0882B67C;
L_0882B67C:;
    v0 = LD32(s4+20);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_0882B660; }
    goto L_0882B68C;
L_0882B68C:;
    a1 = LD32(s4+24);
    goto L_0882B388;
}

/* 0882B694 */
u32 func_0882B694(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882B694:;
    sp = sp - 16;
    a2 = a0 + 0;
    v0 = LD32(a0+8);
    a3 = (s32)v0 < 6;
    v0 = (s32)v0 < 7;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882B6C0; }
    goto L_0882B6B4;
L_0882B6B4:;
    a0 = D_08B2BDB4 - (-16972);
    cnd_ = a3 == 0;
    a0 = a0 - 16972;
    if (cnd_) { goto L_0882B6D0; }
    goto L_0882B6C0;
L_0882B6C0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0882B6D0:;
    v0 = func_0882B1C4(a0, a1, a2);
    goto L_0882B6D8;
L_0882B6D8:;
    v1 = v0 + 0;
    goto L_0882B6C0;
}

/* 0882B6E0 */
u32 func_0882B6E0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882B6E0:;
    sp = sp - 32;
    v1 = 0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+8);
    a0 = a1 + 0;
    cnd_ = (s32)v0 <= 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0882B718; }
    goto L_0882B704;
L_0882B704:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0882B718:;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B720;
L_0882B720:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B72C;
L_0882B72C:;
    v0 = D_08AEB6E8 - (-18712);
    f0 = BITSF(LD32(v0-18712));
    f1 = BITSF(LD32(sp+4));
    v1 = D_08AEB6EC - (-18708);
    f2 = BITSF(LD32(v1-18708));
    f1 = f1 * f0;
    v0 = LD32(sp);
    v1 = D_08B4F350 - (-3248);
    f0 = f1 - f2;
    fcc = FCMP(f2, f1, 14);
    f1 = BITSF(F2I(f1, 1));
    v0 = 0 < v0;
    ST8(v1-3248, v0);
    v1 = FBITS(f1);
    cnd_ = !fcc;
    v0 = D_08B161EC - (25068);
    if (cnd_) { goto L_0882B780; }
    goto L_0882B76C;
L_0882B76C:;
    f0 = BITSF(F2I(f0, 1));
    v0 = 0x80000000u;
    v1 = FBITS(f0);
    v1 = v1 | v0;
    v0 = D_08B161EC - (25068);
    goto L_0882B780;
L_0882B780:;
    ST32(v0+25068, v1);
    v1 = 1;
    goto L_0882B704;
}

/* 0882B78C */
u32 func_0882B78C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882B78C:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882B6E0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882B7CC;
L_0882B7CC:;
    sp = sp + 48;
    return v0;
}

/* 0882B7D8 */
u32 func_0882B7D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882B7D8:;
    sp = sp - 48;
    v1 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0882B808; }
    goto L_0882B7F4;
L_0882B7F4:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_0882B808:;
    a0 = a1 + 0;
    a1 = sp + 16;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B814;
L_0882B814:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B820;
L_0882B820:;
    a1 = sp + 4;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B82C;
L_0882B82C:;
    a1 = sp + 8;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B838;
L_0882B838:;
    a0 = s0 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882B844;
L_0882B844:;
    v0 = D_08AEB6F0 - (-18704);
    f0 = BITSF(LD32(v0-18704));
    f1 = BITSF(LD32(sp));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v1 = D_08AEB6F4 - (-18700);
    if (cnd_) { goto L_0882B928; }
    goto L_0882B868;
L_0882B868:;
    f0 = BITSF(LD32(v1-18700));
    f0 = f1 + f0;
    goto L_0882B870;
L_0882B870:;
    f5 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(v0-18704));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-18700));
    if (cnd_) { goto L_0882B920; }
    goto L_0882B894;
L_0882B894:;
    f0 = f1 + f0;
    goto L_0882B898;
L_0882B898:;
    f4 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(v0-18704));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-18700));
    if (cnd_) { goto L_0882B918; }
    goto L_0882B8BC;
L_0882B8BC:;
    f0 = f1 + f0;
    goto L_0882B8C0;
L_0882B8C0:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(v0-18704));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-18700));
    if (cnd_) { goto L_0882B910; }
    goto L_0882B8E4;
L_0882B8E4:;
    f0 = f1 + f0;
    goto L_0882B8E8;
L_0882B8E8:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(sp+16);
    a1 = FBITS(f5);
    a2 = FBITS(f4);
    a3 = FBITS(f3);
    t0 = FBITS(f0);
    a0 = 0 < a0;
    func_08902914(a0, a1, a2, a3, t0);
    goto L_0882B908;
L_0882B908:;
    v1 = 1;
    goto L_0882B7F4;
L_0882B910:;
    f0 = f1 - f0;
    goto L_0882B8E8;
L_0882B918:;
    f0 = f1 - f0;
    goto L_0882B8C0;
L_0882B920:;
    f0 = f1 - f0;
    goto L_0882B898;
L_0882B928:;
    f0 = BITSF(LD32(v1-18700));
    f0 = f1 - f0;
    goto L_0882B870;
}

/* 0882B934 */
u32 func_0882B934(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882B934:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882B7D8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882B974;
L_0882B974:;
    sp = sp + 48;
    return v0;
}

/* 0882B980 */
u32 func_0882B980(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882B980:;
    sp = sp - 32;
    v1 = 0 + 0;
    v0 = LD32(a0+8);
    a0 = a1 + 0;
    cnd_ = (s32)v0 <= 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0882B9AC; }
    goto L_0882B99C;
L_0882B99C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0882B9AC:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    f0 = func_0882DE98(a0, a1);
    goto L_0882B9BC;
L_0882B9BC:;
    a0 = LD32(sp);
    func_088CF7F0(a0, 0, 0, 0);
    goto L_0882B9C4;
L_0882B9C4:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882B9E0; }
    goto L_0882B9D0;
L_0882B9D0:;
    ST32(sp+8, 0);
    v1 = 1;
    ST32(sp+4, 0);
    goto L_0882B99C;
L_0882B9E0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882B9E8;
L_0882B9E8:;
    ST32(sp, 0);
    goto L_0882B9D0;
}

/* 0882B9F0 */
u32 func_0882B9F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882B9F0:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882B980(a0, a1);
    goto L_0882BA30;
L_0882BA30:;
    sp = sp + 48;
    return v0;
}

/* 0882BA3C */
u32 func_0882BA3C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_0882BA3C:;
    sp = sp - 224;
    s2 = a1 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a0 = s2 + 0;
    s1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BA6C;
L_0882BA6C:;
    t0 = v0 + 0;
    v1 = LD32(s0+16);
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0882BAB4; }
    goto L_0882BA80;
L_0882BA80:;
    v0 = v1 << 2;
    v1 = D_08AD3B6C - (15212);
    v1 = v1 + 15212;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0882BA9Cu: goto L_0882BA9C; case 0x0882BACCu: goto L_0882BACC; case 0x0882BAD4u: goto L_0882BAD4; case 0x0882BAFCu: goto L_0882BAFC; case 0x0882BB18u: goto L_0882BB18; case 0x0882BB2Cu: goto L_0882BB2C; case 0x0882BB40u: goto L_0882BB40; default: rs_break(0, 0x0882ba94); }
L_0882BA9C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = t0 + 0;
    v0 = func_088F591C(a0, a1, t0, 0, 0, 0);
    goto L_0882BAAC;
L_0882BAAC:;
    s1 = v0 + 0;
    goto L_0882BAB0;
L_0882BAB0:;
    v0 = s1 + 0;
    goto L_0882BAB4;
L_0882BAB4:;
    sp = sp + 224;
    return v0;
L_0882BACC:;
    s1 = 0 + 0;
    goto L_0882BAB0;
L_0882BAD4:;
    a1 = LD32(s0+24);
    cnd_ = a1 != 0;
    if (cnd_) { a3 = LD32(s0+20); goto L_0882BAE8; }
    goto L_0882BAE0;
L_0882BAE0:;
    s1 = 1;
    goto L_0882BAB0;
L_0882BAE8:;
    a0 = s2 + 0;
    a2 = t0 + 0;
    func_0882BB60(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_0882BAF4;
L_0882BAF4:;
    s1 = 1;
    goto L_0882BAB0;
L_0882BAFC:;
    a2 = LD32(s0+20);
    a1 = LD32(s0+24);
    a0 = s2 + 0;
    a3 = t0 + 0;
    v0 = func_088DA900(a0, a1, a2, a3);
    goto L_0882BB10;
L_0882BB10:;
    s1 = v0 + 0;
    goto L_0882BAB0;
L_0882BB18:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_0882BC80(a1, 0, 0, 0);
    goto L_0882BB24;
L_0882BB24:;
    s1 = v0 + 0;
    goto L_0882BAB0;
L_0882BB2C:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_0882BDB8(a1, 0, 0, 0);
    goto L_0882BB38;
L_0882BB38:;
    s1 = v0 + 0;
    goto L_0882BAB0;
L_0882BB40:;
    a0 = sp + 0;
    a1 = t0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BB4C;
L_0882BB4C:;
    a0 = sp + 0;
    s1 = 1;
    { rv_t r_ = func_08827B7C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882BB58;
L_0882BB58:;
    v0 = s1 + 0;
    goto L_0882BAB4;
}

/* 0882BB60 */
void func_0882BB60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882BB60:;
    sp = sp - 32;
    v0 = 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v1 = (u32)(s32)LD_S8(a2);
    cnd_ = v1 == v0;
    s0 = a3 + 0;
    if (cnd_) { goto L_0882BC64; }
    goto L_0882BB90;
L_0882BB90:;
    s1 = D_08B263B8 - (25528);
    goto L_0882BB94;
L_0882BB94:;
    a1 = LD32(s1+25528);
    a0 = a2 + 9;
    a2 = 0 + 0;
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0882BBA4;
L_0882BBA4:;
    cnd_ = (s32)v0 < 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0882BC38; }
    goto L_0882BBAC;
L_0882BBAC:;
    cnd_ = s0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0882BBF4; }
    goto L_0882BBB4;
L_0882BBB4:;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882BBD0; }
    goto L_0882BBBC;
L_0882BBBC:;
    v0 = D_08B25FC4 - (24516);
    v1 = a2 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    v1 = LD32(v1);
    goto L_0882BBD0;
L_0882BBD0:;
    v0 = a2 < 0xfau;
    cnd_ = v0 == 0;
    a3 = v1 | s0;
    if (cnd_) { goto L_0882BBF0; }
    goto L_0882BBDC;
L_0882BBDC:;
    v0 = D_08B25FC4 - (24516);
    v1 = a2 << 2;
    v0 = v0 + 24516;
    v1 = v1 + v0;
    ST32(v1, a3);
    goto L_0882BBF0;
L_0882BBF0:;
    v0 = (u32)-1;
    goto L_0882BBF4;
L_0882BBF4:;
    cnd_ = a2 == v0;
    v1 = D_08B25BDC - (23516);
    if (cnd_) { goto L_0882BC14; }
    goto L_0882BBFC;
L_0882BBFC:;
    v0 = a2 << 2;
    v1 = v1 + 23516;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = (s32)a0 > 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0882BC54; }
    goto L_0882BC14;
L_0882BC14:;
    a3 = LD32(s1+25528);
    v0 = D_08B25BDC - (23516);
    v1 = a2 << 2;
    v0 = v0 + 23516;
    v1 = v1 + v0;
    ST32(v1, a3);
    a0 = s2 + 0;
    a1 = s3 + 0;
    func_0890C060(a0, a1, a2, 0, 0, 0);
    goto L_0882BC38;
L_0882BC38:;
    goto L_0882BC3C;
L_0882BC3C:;
    sp = sp + 32;
    return;
L_0882BC54:;
    a1 = s3 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BC5C;
L_0882BC5C:;
    goto L_0882BC3C;
L_0882BC64:;
    v1 = 32;
    a2 = a2 + 1;
    goto L_0882BC6C;
L_0882BC6C:;
    v0 = (u32)(s32)LD_S8(a2);
    cnd_ = v0 == v1;
    if (cnd_) { a2 = a2 + 1; goto L_0882BC6C; }
    goto L_0882BC78;
L_0882BC78:;
    s1 = D_08B263B8 - (25528);
    goto L_0882BB94;
}

/* 0882BC80 */
u32 func_0882BC80(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882BC80:;
    sp = sp - 48;
    s0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BCA8;
L_0882BCA8:;
    a0 = s0 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BCBC;
L_0882BCBC:;
    v0 = LD32(sp+4);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882BDA0; }
    goto L_0882BCC8;
L_0882BCC8:;
    a1 = sp + 8;
    goto L_0882BCCC;
L_0882BCCC:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BCDC;
L_0882BCDC:;
    a0 = s0 + 0;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BCF0;
L_0882BCF0:;
    a0 = s0 + 0;
    a1 = sp + 16;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BD04;
L_0882BD04:;
    a0 = s0 + 0;
    a1 = sp + 20;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BD18;
L_0882BD18:;
    a0 = s0 + 0;
    a1 = sp + 24;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BD2C;
L_0882BD2C:;
    a0 = LD32(sp+8);
    s1 = s1 + 1;
    v0 = func_088DCD48(a0);
    goto L_0882BD38;
L_0882BD38:;
    f1 = BITSF(0);
    cnd_ = v0 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_0882BD94; }
    goto L_0882BD44;
L_0882BD44:;
    f0 = BITSF(LD32(sp+12));
    f2 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f4 = BITSF(LD32(sp+24));
    if (cnd_) { goto L_0882BD64; }
    goto L_0882BD60;
L_0882BD60:;
    ST32(v0+8, FBITS(f0));
    goto L_0882BD64;
L_0882BD64:;
    fcc = FCMP(f1, f2, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(v0+12, FBITS(f2)); goto L_0882BD74; }
    goto L_0882BD74;
L_0882BD74:;
    fcc = FCMP(f1, f3, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(v0+16, FBITS(f3)); goto L_0882BD84; }
    goto L_0882BD84;
L_0882BD84:;
    fcc = FCMP(f1, f4, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(v0+20, FBITS(f4)); goto L_0882BD94; }
    goto L_0882BD94;
L_0882BD94:;
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    a1 = sp + 8;
    if (cnd_) { goto L_0882BCCC; }
    goto L_0882BDA0;
L_0882BDA0:;
    v0 = 1;
    sp = sp + 48;
    return v0;
}

/* 0882BDB8 */
u32 func_0882BDB8(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882BDB8:;
    sp = sp - 48;
    s0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BDE0;
L_0882BDE0:;
    a0 = s0 + 0;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BDF4;
L_0882BDF4:;
    v0 = LD32(sp+4);
    ST32(sp+16, 0);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882BE70; }
    goto L_0882BE04;
L_0882BE04:;
    a1 = sp + 8;
    goto L_0882BE08;
L_0882BE08:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BE18;
L_0882BE18:;
    a0 = s0 + 0;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BE2C;
L_0882BE2C:;
    v0 = LD32(sp);
    s1 = s1 + 1;
    a0 = s0 + 0;
    a1 = sp + 16;
    a2 = 4;
    cnd_ = (s32)v0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0882BE50; }
    goto L_0882BE48;
L_0882BE48:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BE50;
L_0882BE50:;
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    a2 = LD32(sp+16);
    func_088DAC9C(a0, a1, a2);
    goto L_0882BE60;
L_0882BE60:;
    v0 = LD32(sp+4);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = sp + 8;
    if (cnd_) { goto L_0882BE08; }
    goto L_0882BE70;
L_0882BE70:;
    v0 = 1;
    sp = sp + 48;
    return v0;
}

/* 0882BE88 */
u32 func_0882BE88(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882BE88:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    a0 = a1 + 0;
    v0 = v0 - 20;
    a1 = v0 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BEA4;
L_0882BEA4:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 0882BEB4 */
u32 func_0882BEB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0882BEB4:;
    sp = sp - 96;
    s0 = a0 + 0;
    a0 = 25;
    s4 = 0 + 0;
    s3 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BEE4;
L_0882BEE4:;
    a0 = sp + 48;
    v0 = LD32(s0+4);
    a2 = 1;
    a3 = 4;
    s1 = v0 - 16;
    a1 = s1 + 0;
    ST32(sp+48, 0);
    func_0882F758(a0, a1, a2, a3, 0, 0, 0);
    goto L_0882BF04;
L_0882BF04:;
    s2 = LD32(sp+48);
    cnd_ = s2 != 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0882BF3C; }
    goto L_0882BF10;
L_0882BF10:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BF18;
L_0882BF18:;
    v0 = 0 < s4;
    sp = sp + 96;
    return v0;
L_0882BF3C:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882BF50;
L_0882BF50:;
    a1 = sp + 52;
    a0 = 0 + 0;
    goto L_0882BF58;
L_0882BF58:;
    v0 = LD_U8(s0);
    a0 = a0 + 1;
    a3 = s0 + 1;
    v1 = a0 < 0x4u;
    ST8(a1, v0);
    s0 = a3 + 0;
    cnd_ = v1 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_0882BF58; }
    goto L_0882BF78;
L_0882BF78:;
    a1 = LD32(sp+52);
    s0 = D_08AF0F10 - (3856);
    a0 = D_08B3071C - (1820);
    s0 = s0 + 3856;
    v1 = s1 - 4;
    v0 = (u32)-1;
    a0 = a0 + 1820;
    a2 = sp + 0;
    ST32(sp+12, v0);
    ST32(sp+28, a3);
    ST32(sp+36, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp, s0);
    ST32(sp+32, 0);
    ST8(sp+40, 0);
    ST8(sp+41, 0);
    v0 = func_088D0094(a0, a1, a2, 0, 0, 0);
    goto L_0882BFCC;
L_0882BFCC:;
    s4 = v0 + 0;
    v0 = LD_U8(sp+41);
    cnd_ = v0 == 0;
    ST32(sp, s0);
    if (cnd_) { goto L_0882BFF4; }
    goto L_0882BFDC;
L_0882BFDC:;
    v0 = LD_U8(sp+40);
    cnd_ = v0 != 0;
    v0 = D_08AF0EC0 - (3776);
    if (cnd_) { goto L_0882BFF8; }
    goto L_0882BFE8;
L_0882BFE8:;
    a0 = LD32(sp+28);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882C014; }
    goto L_0882BFF4;
L_0882BFF4:;
    v0 = D_08AF0EC0 - (3776);
    goto L_0882BFF8;
L_0882BFF8:;
    v0 = v0 + 3776;
    a0 = sp + 56;
    ST32(sp, v0);
    ST32(sp+56, s2);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0882C00C;
L_0882C00C:;
    goto L_0882BF10;
L_0882C014:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C01C;
L_0882C01C:;
    v0 = D_08AF0EC0 - (3776);
    goto L_0882BFF8;
}

/* 0882C024 */
u32 func_0882C024(u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882C024:;
    sp = sp - 32;
    s0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C04C;
L_0882C04C:;
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    a1 = sp + 4;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C060;
L_0882C060:;
    a2 = LD32(sp+4);
    a0 = 24;
    v0 = a2 & 0x1;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882C0B0; }
    goto L_0882C074;
L_0882C074:;
    a1 = LD32(sp);
    a0 = D_08B3071C - (1820);
    a0 = a0 + 1820;
    a3 = s1 + 0;
    func_088D0000(a0, a1, a2, a3, 0, 0, 0);
    goto L_0882C088;
L_0882C088:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882C098; }
    goto L_0882C090;
L_0882C090:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C098;
L_0882C098:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_0882C0B0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C0B8;
L_0882C0B8:;
    a1 = v0 + 0;
    a2 = 24;
    a0 = s0 + 0;
    a3 = 0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C0D0;
L_0882C0D0:;
    a2 = LD32(sp+4);
    goto L_0882C074;
}

/* 0882C0D8 */
u32 func_0882C0D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882C0D8:;
    sp = sp - 48;
    s5 = D_08B30734 - (1844);
    v0 = s5 + 1844;
    s2 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0882C188; }
    goto L_0882C114;
L_0882C114:;
    v0 = LD32(a0+16);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882C184; }
    goto L_0882C120;
L_0882C120:;
    s4 = sp + 4;
    s3 = sp + 8;
    a2 = 4;
    goto L_0882C12C;
L_0882C12C:;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C13C;
L_0882C13C:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C150;
L_0882C150:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C164;
L_0882C164:;
    a0 = s5 + 1844;
    a1 = sp + 0;
    func_088D1F38(a0, a1, 0, 0, 0);
    goto L_0882C170;
L_0882C170:;
    v0 = LD32(s2+16);
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a2 = 4;
    if (cnd_) { goto L_0882C12C; }
    goto L_0882C184;
L_0882C184:;
    v0 = 1;
    goto L_0882C188;
L_0882C188:;
    sp = sp + 48;
    return v0;
}

/* 0882C1AC */
u32 func_0882C1AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0882C1AC:;
    sp = sp - 64;
    s3 = a0 + 0;
    s1 = a1 + 0;
    f12 = BITSF(LD32(a0+16));
    f13 = BITSF(LD32(a0+20));
    f14 = BITSF(LD32(a0+24));
    func_088F1110(f12, f13, f14);
    goto L_0882C1E4;
L_0882C1E4:;
    v1 = LD32(s3+8);
    v0 = 1;
    cnd_ = v1 == v0;
    a1 = sp + 0;
    if (cnd_) { goto L_0882C614; }
    goto L_0882C1F4;
L_0882C1F4:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C204;
L_0882C204:;
    f12 = BITSF(LD32(sp));
    func_088F10F8(f12);
    goto L_0882C20C;
L_0882C20C:;
    a1 = LD32(s3+8);
    v0 = a1 < 0xbu;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = 0 + 0; goto L_0882C23C; }
    goto L_0882C21C;
L_0882C21C:;
    v1 = D_08AD3B8C - (15244);
    v0 = a1 << 2;
    v1 = v1 + 15244;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0882C238u: goto L_0882C238; case 0x0882C5FCu: goto L_0882C5FC; case 0x0882C604u: goto L_0882C604; case 0x0882C60Cu: goto L_0882C60C; default: rs_break(0, 0x0882c230); }
L_0882C238:;
    s2 = 6;
    goto L_0882C23C;
L_0882C23C:;
    cnd_ = s2 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0882C29C; }
    goto L_0882C244;
L_0882C244:;
    v0 = s0 ^ 0x2;
    v1 = (s32)a1 < 6;
    v0 = v0 < 0x1u;
    v0 = v1 & v0;
    cnd_ = v0 != 0;
    v0 = s0 ^ 0x3;
    if (cnd_) { goto L_0882C5E0; }
    goto L_0882C25C;
L_0882C25C:;
    v0 = v0 < 0x1u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882C5C8; }
    goto L_0882C26C;
L_0882C26C:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C278;
L_0882C278:;
    a0 = v0 + 0;
    a1 = 2;
    goto L_0882C280;
L_0882C280:;
    s0 = s0 + 1;
    func_088F1034(a0, a1, 0, 0, 0);
    goto L_0882C288;
L_0882C288:;
    v0 = (s32)s0 < (s32)s2;
    cnd_ = v0 == 0;
    v0 = (s32)s2 < 8;
    if (cnd_) { goto L_0882C2A0; }
    goto L_0882C294;
L_0882C294:;
    a1 = LD32(s3+8);
    goto L_0882C244;
L_0882C29C:;
    v0 = (s32)s2 < 8;
    goto L_0882C2A0;
L_0882C2A0:;
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0882C2C8; }
    goto L_0882C2A8;
L_0882C2A8:;
    s2 = D_08AD3B88 - (15240);
    a1 = s0 + 0;
    goto L_0882C2B0;
L_0882C2B0:;
    a0 = s2 + 15240;
    s0 = s0 + 1;
    func_088F1034(a0, a1, 0, 0, 0);
    goto L_0882C2BC;
L_0882C2BC:;
    v0 = (s32)s0 < 8;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0882C2B0; }
    goto L_0882C2C8;
L_0882C2C8:;
    v1 = LD32(s3+8);
    v0 = (s32)v1 < 6;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882C58C; }
    goto L_0882C2D8;
L_0882C2D8:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    s0 = D_08B45090 - (20624);
    if (cnd_) { goto L_0882C56C; }
    goto L_0882C2E4;
L_0882C2E4:;
    v0 = LD_U8(s0+20624);
    goto L_0882C2E8;
L_0882C2E8:;
    cnd_ = v0 == 0;
    s0 = D_08AD3B88 - (15240);
    if (cnd_) { goto L_0882C548; }
    goto L_0882C2F0;
L_0882C2F0:;
    a1 = LD32(s3+8);
    goto L_0882C2F4;
L_0882C2F4:;
    v0 = (s32)a1 < 7;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882C3B8; }
    goto L_0882C300;
L_0882C300:;
    v0 = (s32)a1 < 8;
    cnd_ = v0 != 0;
    v0 = D_08AEB6F8 - (-18696);
    if (cnd_) { goto L_0882C3A8; }
    goto L_0882C30C;
L_0882C30C:;
    a1 = sp + 16;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C320;
L_0882C320:;
    a0 = s1 + 0;
    a1 = sp + 20;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C334;
L_0882C334:;
    a0 = s1 + 0;
    a1 = sp + 24;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C348;
L_0882C348:;
    f12 = BITSF(LD32(sp+16));
    f13 = BITSF(LD32(sp+20));
    f14 = BITSF(LD32(sp+24));
    goto L_0882C354;
L_0882C354:;
    func_088F1138(f12, f13, f14);
    goto L_0882C35C;
L_0882C35C:;
    v0 = LD32(s3+8);
    v0 = (s32)v0 < 10;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882C394; }
    goto L_0882C36C;
L_0882C36C:;
    goto L_0882C370;
L_0882C370:;
    v0 = 1;
    sp = sp + 64;
    return v0;
L_0882C394:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C3A0;
L_0882C3A0:;
    goto L_0882C370;
L_0882C3A8:;
    f12 = BITSF(LD32(v0-18696));
    f13 = f12;
    f14 = f12;
    goto L_0882C354;
L_0882C3B8:;
    a1 = sp + 12;
    a2 = 4;
    a3 = 0 + 0;
    ST32(sp+12, 0);
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C3CC;
L_0882C3CC:;
    v0 = (u32)-1;
    v1 = LD32(sp+12);
    v1 = v1 - 1;
    cnd_ = v1 == v0;
    ST32(sp+12, v1);
    if (cnd_) { goto L_0882C4A0; }
    goto L_0882C3E0;
L_0882C3E0:;
    s5 = D_08B45094 - (20628);
    s4 = (u32)-1;
    goto L_0882C3E8;
L_0882C3E8:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C3F0;
L_0882C3F0:;
    ST32(v0+60, 0);
    s0 = v0 + 0;
    a0 = s1 + 0;
    a1 = v0 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C40C;
L_0882C40C:;
    a1 = s0 + 12;
    a0 = s1 + 0;
    a2 = 36;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C420;
L_0882C420:;
    a1 = s0 + 52;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C434;
L_0882C434:;
    a1 = s0 + 56;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C448;
L_0882C448:;
    v1 = LD32(s0+56);
    cnd_ = v1 != 0;
    a1 = s0 + 48;
    if (cnd_) { goto L_0882C530; }
    goto L_0882C454;
L_0882C454:;
    v0 = LD32(s3+8);
    goto L_0882C458;
L_0882C458:;
    v0 = (s32)v0 < 9;
    cnd_ = v0 == 0;
    a1 = s0 + 64;
    if (cnd_) { goto L_0882C518; }
    goto L_0882C464;
L_0882C464:;
    ST32(s0+64, 0);
    v0 = LD32(s0+52);
    goto L_0882C46C;
L_0882C46C:;
    cnd_ = v0 != 0;
    s2 = s5 + 20628;
    if (cnd_) { goto L_0882C4BC; }
    goto L_0882C474;
L_0882C474:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0882C494; }
    goto L_0882C47C;
L_0882C47C:;
    a0 = LD32(s0+60);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0882C4A8; }
    goto L_0882C488;
L_0882C488:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C490;
L_0882C490:;
    v0 = LD32(sp+12);
    goto L_0882C494;
L_0882C494:;
    v0 = v0 - 1;
    cnd_ = v0 != s4;
    ST32(sp+12, v0);
    if (cnd_) { goto L_0882C3E8; }
    goto L_0882C4A0;
L_0882C4A0:;
    a1 = LD32(s3+8);
    goto L_0882C300;
L_0882C4A8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C4B4;
L_0882C4B4:;
    goto L_0882C488;
L_0882C4BC:;
    v0 = LD32(s2+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0882C508; }
    goto L_0882C4C8;
L_0882C4C8:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C4D0;
L_0882C4D0:;
    v1 = v0 + 0;
    goto L_0882C4D4;
L_0882C4D4:;
    v0 = LD32(s2);
    ST32(v1, s0);
    ST32(v1+8, v0);
    cnd_ = v0 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_0882C500; }
    goto L_0882C4E8;
L_0882C4E8:;
    ST32(v0+4, v1);
    goto L_0882C4EC;
L_0882C4EC:;
    v0 = LD32(s2+16);
    ST32(s2, v1);
    v0 = v0 + 1;
    ST32(s2+16, v0);
    goto L_0882C490;
L_0882C500:;
    ST32(s2+4, v1);
    goto L_0882C4EC;
L_0882C508:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C510;
L_0882C510:;
    v1 = v0 + 0;
    goto L_0882C4D4;
L_0882C518:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C528;
L_0882C528:;
    v0 = LD32(s0+52);
    goto L_0882C46C;
L_0882C530:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C540;
L_0882C540:;
    v0 = LD32(s3+8);
    goto L_0882C458;
L_0882C548:;
    s0 = s0 + 15240;
    a1 = 6;
    a0 = s0 + 0;
    func_088F1034(a0, a1, 0, 0, 0);
    goto L_0882C558;
L_0882C558:;
    a0 = s0 + 0;
    a1 = 7;
    func_088F1034(a0, a1, 0, 0, 0);
    goto L_0882C564;
L_0882C564:;
    a1 = LD32(s3+8);
    goto L_0882C2F4;
L_0882C56C:;
    a1 = sp + 8;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C57C;
L_0882C57C:;
    v0 = LD32(sp+8);
    v0 = 0 < v0;
    ST8(s0+20624, v0);
    goto L_0882C2E4;
L_0882C58C:;
    a1 = sp + 4;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C59C;
L_0882C59C:;
    v1 = LD32(sp+4);
    s0 = D_08B45090 - (20624);
    a0 = (v1 >> 1) & 0x1;
    v1 = v1 & 0x1;
    ST8(s0+20624, v1);
    func_088F1258(a0);
    goto L_0882C5B4;
L_0882C5B4:;
    a0 = LD32(sp+4);
    a0 = (a0 >> 2) & 0x1;
    func_088F1270(a0);
    goto L_0882C5C0;
L_0882C5C0:;
    v0 = LD_U8(s0+20624);
    goto L_0882C2E8;
L_0882C5C8:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C5D4;
L_0882C5D4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    goto L_0882C280;
L_0882C5E0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C5F0;
L_0882C5F0:;
    a0 = v0 + 0;
    a1 = 3;
    goto L_0882C280;
L_0882C5FC:;
    s2 = 0 + 0;
    goto L_0882C23C;
L_0882C604:;
    s2 = 7;
    goto L_0882C23C;
L_0882C60C:;
    s2 = 8;
    goto L_0882C23C;
L_0882C614:;
    f12 = BITSF(0);
    s0 = 0 + 0;
    s2 = D_08AD3B88 - (15240);
    func_088F10F8(f12);
    goto L_0882C624;
L_0882C624:;
    a1 = s0 + 0;
    goto L_0882C628;
L_0882C628:;
    a0 = s2 + 15240;
    s0 = s0 + 1;
    func_088F1034(a0, a1, 0, 0, 0);
    goto L_0882C634;
L_0882C634:;
    v0 = (s32)s0 < 8;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0882C628; }
    goto L_0882C640;
L_0882C640:;
    goto L_0882C370;
}

/* 0882C648 */
u32 func_0882C648(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_0882C648:;
    sp = sp - 176;
    v1 = 0 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 4;
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0882C698; }
    goto L_0882C678;
L_0882C678:;
    v0 = v1 + 0;
    sp = sp + 176;
    return v0;
L_0882C698:;
    a1 = sp + 0;
    a2 = 128;
    a0 = s1 + 0;
    f0 = func_0882DD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882C6A8;
L_0882C6A8:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C6B0;
L_0882C6B0:;
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    a1 = v0 + 0;
    v0 = func_088DF640(a0, a1);
    goto L_0882C6C0;
L_0882C6C0:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882C678; }
    goto L_0882C6C8;
L_0882C6C8:;
    a0 = 28;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C6D0;
L_0882C6D0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    s3 = v0 + 0;
    func_088DD608(a0, a1);
    goto L_0882C6E0;
L_0882C6E0:;
    a0 = s1 + 0;
    a1 = sp + 132;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C6EC;
L_0882C6EC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882C6F8;
L_0882C6F8:;
    a0 = LD32(sp+132);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882C7C8; }
    goto L_0882C704;
L_0882C704:;
    s0 = s3 + 8;
    goto L_0882C708;
L_0882C708:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C714;
L_0882C714:;
    a1 = s3 + 12;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C720;
L_0882C720:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C72C;
L_0882C72C:;
    a1 = s3 + 16;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C738;
L_0882C738:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882C744;
L_0882C744:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882C750;
L_0882C750:;
    v1 = LD32(s2+8);
    cnd_ = (s32)v1 <= 0;
    a1 = sp + 136;
    if (cnd_) { goto L_0882C788; }
    goto L_0882C75C;
L_0882C75C:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C764;
L_0882C764:;
    v1 = LD32(sp+136);
    a1 = v1 << 3;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { v1 = LD32(s2+8); goto L_0882C788; }
    goto L_0882C774;
L_0882C774:;
    v1 = LD32(s1);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C784;
L_0882C784:;
    v1 = LD32(s2+8);
    goto L_0882C788;
L_0882C788:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0882C7B8; }
    goto L_0882C794;
L_0882C794:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0882C7A8; }
    goto L_0882C7A0;
L_0882C7A0:;
    v1 = 1;
    goto L_0882C678;
L_0882C7A8:;
    a1 = sp + 128;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C7B0;
L_0882C7B0:;
    v1 = 1;
    goto L_0882C678;
L_0882C7B8:;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882C7C0;
L_0882C7C0:;
    v1 = LD32(s2+8);
    goto L_0882C794;
L_0882C7C8:;
    s0 = s3 + 8;
    v0 = func_088DA8C0(a0);
    goto L_0882C7D0;
L_0882C7D0:;
    ST32(s3+4, v0);
    goto L_0882C708;
}

/* 0882C7D8 */
u32 func_0882C7D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882C7D8:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882C648(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882C818;
L_0882C818:;
    sp = sp + 48;
    return v0;
}

/* 0882C824 */
u32 func_0882C824(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_0882C824:;
    sp = sp - 336;
    v1 = 0 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 5;
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0882C89C; }
    goto L_0882C868;
L_0882C868:;
    v0 = v1 + 0;
    sp = sp + 336;
    return v0;
L_0882C89C:;
    a1 = sp + 0;
    a2 = 128;
    a0 = s1 + 0;
    f0 = func_0882DD88(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882C8AC;
L_0882C8AC:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C8B4;
L_0882C8B4:;
    s0 = D_08B30A5C - (2652);
    a0 = s0 + 2652;
    a1 = v0 + 0;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882C8C4;
L_0882C8C4:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882C868; }
    goto L_0882C8CC;
L_0882C8CC:;
    a0 = 96;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C8D4;
L_0882C8D4:;
    s3 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_088DD098(a0, a1);
    goto L_0882C8E4;
L_0882C8E4:;
    a1 = s3 + 24;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C8F0;
L_0882C8F0:;
    a1 = s3 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C8FC;
L_0882C8FC:;
    a1 = s3 + 32;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C908;
L_0882C908:;
    a1 = s3 + 36;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C914;
L_0882C914:;
    a1 = s3 + 40;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C920;
L_0882C920:;
    a1 = s3 + 44;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C92C;
L_0882C92C:;
    a1 = s3 + 48;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C938;
L_0882C938:;
    a1 = s3 + 52;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C944;
L_0882C944:;
    a1 = s3 + 56;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C950;
L_0882C950:;
    a0 = s1 + 0;
    a1 = sp + 276;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C95C;
L_0882C95C:;
    a1 = s3 + 72;
    a0 = s1 + 0;
    fp = LD32(sp+276);
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C96C;
L_0882C96C:;
    a1 = s3 + 73;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C978;
L_0882C978:;
    a1 = s3 + 74;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C984;
L_0882C984:;
    v1 = LD32(s2+8);
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { a0 = s1 + 0; goto L_0882C9A0; }
    goto L_0882C990;
L_0882C990:;
    a1 = s3 + 13;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C99C;
L_0882C99C:;
    a0 = s1 + 0;
    goto L_0882C9A0;
L_0882C9A0:;
    a1 = sp + 276;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C9A8;
L_0882C9A8:;
    v0 = LD32(sp+276);
    a1 = s3 + 80;
    a0 = s1 + 0;
    ST32(s3+76, v0);
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C9BC;
L_0882C9BC:;
    a1 = s3 + 84;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C9C8;
L_0882C9C8:;
    a0 = s1 + 0;
    a1 = sp + 280;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882C9D4;
L_0882C9D4:;
    a0 = LD32(sp+280);
    cnd_ = a0 != 0;
    if (cnd_) { ST32(s3+4, a0); goto L_0882CB0C; }
    goto L_0882C9E0;
L_0882C9E0:;
    a0 = s3 + 0;
    goto L_0882C9E4;
L_0882C9E4:;
    a1 = 2;
    func_088DD51C(a0, a1, 0, 0, 0);
    goto L_0882C9EC;
L_0882C9EC:;
    a0 = s3 + 0;
    a1 = fp + 0;
    func_088DD51C(a0, a1, 0, 0, 0);
    goto L_0882C9F8;
L_0882C9F8:;
    v1 = LD32(s3+60);
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s3+68); goto L_0882CAAC; }
    goto L_0882CA08;
L_0882CA08:;
    s0 = sp + 144;
    goto L_0882CA0C;
L_0882CA0C:;
    a1 = s0 + 0;
    a2 = 128;
    a0 = s1 + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882CA1C;
L_0882CA1C:;
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882CA24;
L_0882CA24:;
    a0 = v0 + 0;
    v0 = 0xbf8d0000u;
    v0 = v0 | 0x2a62;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = 0 + 0; goto L_0882CA48; }
    goto L_0882CA38;
L_0882CA38:;
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882CA40;
L_0882CA40:;
    ST32(s3+64, v0);
    a1 = 0 + 0;
    goto L_0882CA48;
L_0882CA48:;
    a0 = s1 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882CA50;
L_0882CA50:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882CA5C;
L_0882CA5C:;
    a1 = sp + 272;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CA68;
L_0882CA68:;
    v1 = LD32(s2+8);
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a1 = sp + 273;
    if (cnd_) { goto L_0882CA9C; }
    goto L_0882CA78;
L_0882CA78:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_0882CA8C; }
    goto L_0882CA84;
L_0882CA84:;
    v1 = 1;
    goto L_0882C868;
L_0882CA8C:;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882CA94;
L_0882CA94:;
    v1 = 1;
    goto L_0882C868;
L_0882CA9C:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CAA4;
L_0882CAA4:;
    v1 = LD32(s2+8);
    goto L_0882CA78;
L_0882CAAC:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CAB4;
L_0882CAB4:;
    a1 = LD32(s3+68);
    a0 = s1 + 0;
    a1 = a1 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CAC4;
L_0882CAC4:;
    a1 = LD32(s3+68);
    a0 = s1 + 0;
    a1 = a1 + 8;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CAD4;
L_0882CAD4:;
    a1 = LD32(s3+68);
    a0 = s1 + 0;
    a1 = a1 + 12;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CAE4;
L_0882CAE4:;
    a1 = LD32(s3+68);
    a0 = s1 + 0;
    a1 = a1 + 16;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CAF4;
L_0882CAF4:;
    a1 = LD32(s3+68);
    a0 = s1 + 0;
    a1 = a1 + 20;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CB04;
L_0882CB04:;
    s0 = sp + 144;
    goto L_0882CA0C;
L_0882CB0C:;
    a0 = a0 << 2;
    s6 = s3 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CB18;
L_0882CB18:;
    a1 = LD32(sp+280);
    ST32(s6+4, v0);
    s5 = 0 + 0;
    cnd_ = a1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0882CB90; }
    goto L_0882CB2C;
L_0882CB2C:;
    s7 = sp + 132;
    a1 = s7 + 0;
    goto L_0882CB34;
L_0882CB34:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CB3C;
L_0882CB3C:;
    a0 = s1 + 0;
    a1 = sp + 276;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CB48;
L_0882CB48:;
    v1 = LD32(sp+276);
    a0 = s0 + 2652;
    cnd_ = v1 != 0;
    ST32(sp+128, v1);
    if (cnd_) { goto L_0882CBB0; }
    goto L_0882CB58;
L_0882CB58:;
    a1 = LD32(sp+132);
    v0 = func_088DF640(a0, a1);
    goto L_0882CB60;
L_0882CB60:;
    a0 = v0 + 0;
    goto L_0882CB64;
L_0882CB64:;
    a1 = LD32(sp+280);
    cnd_ = v0 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0882CB84; }
    goto L_0882CB70;
L_0882CB70:;
    v0 = LD32(s6+4);
    v1 = s5 << 2;
    s5 = s5 + 1;
    v0 = v0 + v1;
    ST32(v0, a0);
    goto L_0882CB84;
L_0882CB84:;
    v0 = s4 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s7 + 0; goto L_0882CB34; }
    goto L_0882CB90;
L_0882CB90:;
    cnd_ = s5 == a1;
    a0 = s3 + 0;
    if (cnd_) { goto L_0882C9E4; }
    goto L_0882CB98;
L_0882CB98:;
    v0 = LD32(s3+4);
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s3+4, s5); goto L_0882C9E4; }
    goto L_0882CBA8;
L_0882CBA8:;
    goto L_0882C9E4;
L_0882CBB0:;
    a1 = LD32(sp+132);
    a0 = s0 + 2652;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882CBBC;
L_0882CBBC:;
    a0 = v0 + 0;
    goto L_0882CB64;
}

/* 0882CBC4 */
u32 func_0882CBC4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882CBC4:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882C824(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882CC04;
L_0882CC04:;
    sp = sp + 48;
    return v0;
}

/* 0882CC10 */
u32 func_0882CC10(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882CC10:;
    sp = sp - 32;
    v1 = 0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+8);
    a0 = a1 + 0;
    cnd_ = (s32)v0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0882CC48; }
    goto L_0882CC34;
L_0882CC34:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0882CC48:;
    f0 = func_0882DE98(a0, a1);
    goto L_0882CC50;
L_0882CC50:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CC5C;
L_0882CC5C:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CC68;
L_0882CC68:;
    a1 = LD32(sp);
    a2 = LD32(sp+4);
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    func_088DF5DC(a0, a1, a2);
    goto L_0882CC7C;
L_0882CC7C:;
    v1 = 1;
    goto L_0882CC34;
}

/* 0882CC84 */
u32 func_0882CC84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882CC84:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882CC10(a0, a1);
    goto L_0882CCC4;
L_0882CCC4:;
    sp = sp + 48;
    return v0;
}

/* 0882CCD0 */
u32 func_0882CCD0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_0882CCD0:;
    sp = sp - 336;
    v1 = 0 + 0;
    s6 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    s4 = a1 + 0;
    if (cnd_) { goto L_0882CD28; }
    goto L_0882CD14;
L_0882CD14:;
    v0 = D_08B30ACC - (2764);
    s1 = LD32(v0+2764);
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s1 + 8; goto L_0882CD5C; }
    goto L_0882CD28;
L_0882CD28:;
    v0 = v1 + 0;
    sp = sp + 336;
    return v0;
L_0882CD5C:;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CD64;
L_0882CD64:;
    a0 = s4 + 0;
    a1 = sp + 272;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CD70;
L_0882CD70:;
    a0 = LD32(s1+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882D080; }
    goto L_0882CD7C;
L_0882CD7C:;
    a0 = LD32(sp+272);
    goto L_0882CD80;
L_0882CD80:;
    ST32(s1+4, 0);
    cnd_ = a0 != 0;
    ST32(s1, 0);
    if (cnd_) { goto L_0882D068; }
    goto L_0882CD8C;
L_0882CD8C:;
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0882CE90; }
    goto L_0882CD94;
L_0882CD94:;
    fp = sp + 128;
    s3 = sp + 256;
    s7 = sp + 269;
    s5 = sp + 270;
    a2 = 128;
    goto L_0882CDA8;
L_0882CDA8:;
    a1 = sp + 0;
    a0 = s4 + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882CDB4;
L_0882CDB4:;
    a0 = 64;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CDBC;
L_0882CDBC:;
    a0 = v0 + 0;
    a1 = sp + 0;
    s0 = v0 + 0;
    func_088E0BEC(a0, a1);
    goto L_0882CDCC;
L_0882CDCC:;
    v0 = LD32(s1+4);
    v1 = s2 << 2;
    a2 = 128;
    v0 = v0 + v1;
    ST32(v0, s0);
    a0 = s4 + 0;
    a1 = fp + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882CDEC;
L_0882CDEC:;
    a1 = fp + 0;
    a0 = s0 + 0;
    func_088E1094(a0, a1);
    goto L_0882CDF8;
L_0882CDF8:;
    a0 = s3 + 0;
    func_088E0BBC(a0);
    goto L_0882CE00;
L_0882CE00:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE0C;
L_0882CE0C:;
    a0 = s4 + 0;
    a1 = sp + 260;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE18;
L_0882CE18:;
    a0 = s4 + 0;
    a1 = sp + 264;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE24;
L_0882CE24:;
    a0 = s4 + 0;
    a1 = sp + 268;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE30;
L_0882CE30:;
    a0 = s4 + 0;
    a1 = s7 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE3C;
L_0882CE3C:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE48;
L_0882CE48:;
    v0 = LD32(s6+8);
    s2 = s2 + 1;
    a0 = s4 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 271;
    if (cnd_) { goto L_0882CE60; }
    goto L_0882CE5C;
L_0882CE5C:;
    ST8(sp+271, 0);
    goto L_0882CE60;
L_0882CE60:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_0882CE70; }
    goto L_0882CE68;
L_0882CE68:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE70;
L_0882CE70:;
    f12 = BITSF(0);
    a0 = s0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_088E0F40(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882CE80;
L_0882CE80:;
    v0 = LD32(sp+272);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a2 = 128;
    if (cnd_) { goto L_0882CDA8; }
    goto L_0882CE90;
L_0882CE90:;
    a0 = s4 + 0;
    a1 = sp + 276;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CE9C;
L_0882CE9C:;
    v0 = LD32(sp+276);
    cnd_ = v0 == 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_0882CF14; }
    goto L_0882CEA8;
L_0882CEA8:;
    fp = sp + 128;
    a2 = 128;
    goto L_0882CEB0;
L_0882CEB0:;
    a1 = fp + 0;
    a0 = s4 + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882CEBC;
L_0882CEBC:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CEC4;
L_0882CEC4:;
    s3 = v0 + 0;
    a0 = v0 + 0;
    a1 = fp + 0;
    func_088E10CC(a0, a1);
    goto L_0882CED4;
L_0882CED4:;
    a1 = s3 + 8;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CEE0;
L_0882CEE0:;
    a0 = s4 + 0;
    a1 = sp + 280;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CEEC;
L_0882CEEC:;
    a0 = LD32(sp+280);
    cnd_ = a0 != 0;
    if (cnd_) { ST32(s3, a0); goto L_0882D054; }
    goto L_0882CEF8;
L_0882CEF8:;
    cnd_ = a0 != 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_0882CF2C; }
    goto L_0882CF00;
L_0882CF00:;
    v0 = LD32(sp+276);
    goto L_0882CF04;
L_0882CF04:;
    s7 = s7 + 1;
    v0 = s7 < v0;
    cnd_ = v0 != 0;
    a2 = 128;
    if (cnd_) { goto L_0882CEB0; }
    goto L_0882CF14;
L_0882CF14:;
    f12 = BITSF(0);
    a0 = 0x5c130000u;
    a0 = a0 | 0xd641;
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882CF24;
L_0882CF24:;
    v1 = 1;
    goto L_0882CD28;
L_0882CF2C:;
    s0 = LD32(s3+4);
    goto L_0882CF30;
L_0882CF30:;
    a0 = 20;
    s2 = s5 << 2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CF3C;
L_0882CF3C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    s0 = s0 + s2;
    func_088E0BBC(a0);
    goto L_0882CF4C;
L_0882CF4C:;
    ST32(s0, s1);
    a0 = s4 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882CF5C;
L_0882CF5C:;
    v0 = LD32(s3+4);
    a0 = s4 + 0;
    s5 = s5 + 1;
    v0 = v0 + s2;
    a1 = LD32(v0);
    a1 = a1 + 16;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CF78;
L_0882CF78:;
    v1 = LD32(s3+4);
    a0 = s4 + 0;
    v1 = v1 + s2;
    a1 = LD32(v1);
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CF8C;
L_0882CF8C:;
    v1 = LD32(s3+4);
    a0 = s4 + 0;
    v1 = v1 + s2;
    a1 = LD32(v1);
    a1 = a1 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CFA4;
L_0882CFA4:;
    v1 = LD32(s3+4);
    a0 = s4 + 0;
    v1 = v1 + s2;
    a1 = LD32(v1);
    a1 = a1 + 8;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CFBC;
L_0882CFBC:;
    v1 = LD32(s3+4);
    a0 = s4 + 0;
    v1 = v1 + s2;
    a1 = LD32(v1);
    a1 = a1 + 12;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CFD4;
L_0882CFD4:;
    v1 = LD32(s3+4);
    a0 = s4 + 0;
    v1 = v1 + s2;
    a1 = LD32(v1);
    a1 = a1 + 13;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882CFEC;
L_0882CFEC:;
    v1 = LD32(s3+4);
    a0 = s4 + 0;
    v1 = v1 + s2;
    a1 = LD32(v1);
    a1 = a1 + 14;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D004;
L_0882D004:;
    a1 = LD32(s6+8);
    cnd_ = a1 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0882D020; }
    goto L_0882D010;
L_0882D010:;
    v0 = LD32(s3+4);
    v0 = v0 + s2;
    v1 = LD32(v0);
    ST8(v1+15, 0);
    goto L_0882D020;
L_0882D020:;
    cnd_ = (s32)a1 <= 0;
    v0 = LD32(sp+280);
    if (cnd_) { goto L_0882D040; }
    goto L_0882D028;
L_0882D028:;
    v0 = LD32(s3+4);
    v0 = v0 + s2;
    a1 = LD32(v0);
    a1 = a1 + 15;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D03C;
L_0882D03C:;
    v0 = LD32(sp+280);
    goto L_0882D040;
L_0882D040:;
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s3+4); goto L_0882CF30; }
    goto L_0882D04C;
L_0882D04C:;
    v0 = LD32(sp+276);
    goto L_0882CF04;
L_0882D054:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D05C;
L_0882D05C:;
    ST32(s3+4, v0);
    a0 = LD32(sp+280);
    goto L_0882CEF8;
L_0882D068:;
    ST32(s1, a0);
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D074;
L_0882D074:;
    ST32(s1+4, v0);
    a0 = LD32(sp+272);
    goto L_0882CD8C;
L_0882D080:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882D088;
L_0882D088:;
    a0 = LD32(sp+272);
    goto L_0882CD80;
}

/* 0882D090 */
u32 func_0882D090(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882D090:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882CCD0(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882D0D0;
L_0882D0D0:;
    sp = sp + 48;
    return v0;
}

/* 0882D0DC */
u32 func_0882D0DC(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882D0DC:;
    sp = sp - 48;
    v1 = 0 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = (s32)v0 <= 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0882D128; }
    goto L_0882D108;
L_0882D108:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_0882D128:;
    a0 = a1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D134;
L_0882D134:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882D188; }
    goto L_0882D140;
L_0882D140:;
    s3 = D_08B30884 - (2180);
    a0 = s0 + 0;
    goto L_0882D148;
L_0882D148:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D150;
L_0882D150:;
    a1 = LD32(sp+4);
    a0 = s3 + 2180;
    s1 = s1 + 1;
    v0 = func_088D87D4(a0, a1, 0, 0, 0);
    goto L_0882D160;
L_0882D160:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    cnd_ = v0 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_0882D178; }
    goto L_0882D170;
L_0882D170:;
    func_0882D190(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882D178;
L_0882D178:;
    v0 = LD32(sp);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0882D148; }
    goto L_0882D188;
L_0882D188:;
    v1 = 1;
    goto L_0882D108;
}

/* 0882D190 */
void func_0882D190(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D190:;
    sp = sp - 32;
    s1 = a2 + 0;
    s0 = a1 + 0;
    a1 = sp + 0;
    v0 = LD32(a0+12);
    a0 = a2 + 0;
    s2 = v0 & 0x1;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D1C0;
L_0882D1C0:;
    v1 = LD32(sp);
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    cnd_ = v1 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0882D300; }
    goto L_0882D1D4;
L_0882D1D4:;
    a1 = s0 + 8;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D1E0;
L_0882D1E0:;
    a1 = s0 + 100;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D1EC;
L_0882D1EC:;
    a1 = s0 + 80;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DC70(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D1F8;
L_0882D1F8:;
    a1 = s0 + 20;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D204;
L_0882D204:;
    a1 = s0 + 24;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D210;
L_0882D210:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D21C;
L_0882D21C:;
    a1 = s0 + 40;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D228;
L_0882D228:;
    a1 = s0 + 96;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D234;
L_0882D234:;
    a1 = s0 + 97;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D240;
L_0882D240:;
    a1 = s0 + 101;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D24C;
L_0882D24C:;
    a1 = s0 + 98;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D258;
L_0882D258:;
    a1 = s0 + 99;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D264;
L_0882D264:;
    a1 = s0 + 56;
    a0 = s1 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882D270;
L_0882D270:;
    a1 = s0 + 102;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D27C;
L_0882D27C:;
    a1 = s0 + 104;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D288;
L_0882D288:;
    a1 = s0 + 103;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D294;
L_0882D294:;
    a1 = s0 + 108;
    a0 = s1 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882D2A0;
L_0882D2A0:;
    a1 = 8;
    cnd_ = s2 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882D2DC; }
    goto L_0882D2AC;
L_0882D2AC:;
    v1 = LD_U8(s0+97);
    goto L_0882D2B0;
L_0882D2B0:;
    v0 = 1;
    ST8(s0+137, v0);
    a0 = s0 + 0;
    ST8(s0+138, v1);
    func_088D8C94(a0);
    goto L_0882D2C4;
L_0882D2C4:;
    sp = sp + 32;
    return;
L_0882D2DC:;
    v1 = LD32(s1);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D2EC;
L_0882D2EC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0882D2F8;
L_0882D2F8:;
    v1 = LD_U8(s0+97);
    goto L_0882D2B0;
L_0882D300:;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882D308;
L_0882D308:;
    ST32(s0+4, v0);
    goto L_0882D1D4;
}

/* 0882D310 */
u32 func_0882D310(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882D310:;
    sp = sp - 48;
    v0 = D_08AF0F40 - (3904);
    a2 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    v0 = v0 + 3904;
    ST32(sp+12, v1);
    ST32(sp, v0);
    ST32(sp+28, a2);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    v0 = func_0882D0DC(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882D350;
L_0882D350:;
    sp = sp + 48;
    return v0;
}

/* 0882D35C */
u32 func_0882D35C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_0882D35C:;
    sp = sp - 176;
    v0 = D_08B2AA0C - (-22004);
    s3 = a1 + 0;
    s2 = a0 + 0;
    v1 = LD32(a0+8);
    s1 = LD32(v0-22004);
    v1 = (s32)v1 < 2;
    cnd_ = v1 == 0;
    ST32(sp+48, 0);
    if (cnd_) { goto L_0882D5EC; }
    goto L_0882D394;
L_0882D394:;
    v1 = LD32(sp+48);
    goto L_0882D398;
L_0882D398:;
    v0 = LD32(s1+20);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = LD32(s1+24);
    if (cnd_) { goto L_0882D4E0; }
    goto L_0882D3A8;
L_0882D3A8:;
    v0 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s1+20, v0);
    if (cnd_) { goto L_0882D5DC; }
    goto L_0882D3B4;
L_0882D3B4:;
    s0 = LD32(s1+20);
    goto L_0882D3B8;
L_0882D3B8:;
    a0 = 52;
    { s64 p_ = (s64)(s32)s0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D3C8;
L_0882D3C8:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_0882D3E4; }
    goto L_0882D3D4;
L_0882D3D4:;
    a0 = (u32)-1;
    v0 = v0 - 1;
    goto L_0882D3DC;
L_0882D3DC:;
    cnd_ = v0 != a0;
    v0 = v0 - 1;
    if (cnd_) { goto L_0882D3DC; }
    goto L_0882D3E4;
L_0882D3E4:;
    v0 = LD32(s1+20);
    ST32(s1+24, a1);
    cnd_ = (s32)v0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0882D5D0; }
    goto L_0882D3F4;
L_0882D3F4:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[80]=m00;v[81]=m01;v[82]=m02;v[83]=m03;v[84]=m10;v[85]=m11;v[86]=m12;v[87]=m13;v[88]=m20;v[89]=m21;v[90]=m22;v[91]=m23;v[92]=m30;v[93]=m31;v[94]=m32;v[95]=m33;}
    v0 = D_08AEB6FC - (-18692);
    f10 = BITSF(LD32(v0-18692));
    a0 = a1 + 0;
    a2 = sp + 64;
    a1 = 0 + 0;
    goto L_0882D40C;
L_0882D40C:;
    v1 = a0 + a1;
    {a0=FBITS(v[90]);}
    f7 = BITSF(a0);
    {a0=FBITS(v[82]);}
    f8 = BITSF(a0);
    {a0=FBITS(v[86]);}
    f9 = BITSF(a0);
    {a0=FBITS(v[80]);}
    f2 = BITSF(a0);
    {a0=FBITS(v[81]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[84]);}
    f4 = BITSF(a0);
    {a0=FBITS(v[85]);}
    f5 = BITSF(a0);
    {a0=FBITS(v[88]);}
    f6 = BITSF(a0);
    v0 = v1 + 12;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {a0=FBITS(v[89]);}
    {u32 a_=a2+(16);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=a2+(32);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=a2+(48);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    ST32(v0+32, FBITS(f7));
    a3 = a3 + 1;
    ST32(v0+4, FBITS(f3));
    ST32(v0+8, FBITS(f8));
    ST32(v0+12, FBITS(f4));
    ST32(v0+16, FBITS(f5));
    ST32(v0+20, FBITS(f9));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, a0);
    ST32(sp+32, FBITS(f7));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f8));
    ST32(sp+12, FBITS(f4));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f9));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, a0);
    ST32(v1+12, FBITS(f2));
    ST32(sp, FBITS(f2));
    a0 = LD32(s1+24);
    v1 = a0 + a1;
    ST32(v1+48, 0);
    a1 = a1 + 52;
    v0 = LD32(s1+20);
    ST32(v1+8, 0);
    v0 = (s32)a3 < (s32)v0;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    ST32(v1+4, FBITS(f10));
    if (cnd_) { goto L_0882D40C; }
    goto L_0882D4DC;
L_0882D4DC:;
    v1 = LD32(sp+48);
    goto L_0882D4E0;
L_0882D4E0:;
    s0 = 52;
    { s64 p_ = (s64)(s32)v1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    f0 = BITSF(LD32(s2+16));
    v0 = s2 + 16;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    v1 = lo;
    v1 = a0 + v1;
    ST32(v1+12, FBITS(f0));
    a1 = s2 + 52;
    a0 = LD32(sp+48);
    f8 = BITSF(LD32(v0+32));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v0 = v1 + 12;
    ST32(v0+4, FBITS(f1));
    { s64 p_ = (s64)(s32)a0 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(v0+8, FBITS(f2));
    ST32(v0+32, FBITS(f8));
    a0 = lo;
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    v1 = LD32(s2+8);
    v0 = LD32(s1+24);
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(s2+52));
    f2 = BITSF(LD32(a1+4));
    v0 = v0 + a0;
    v1 = (s32)v1 < 3;
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f1));
    cnd_ = v1 == 0;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_0882D59C; }
    goto L_0882D57C;
L_0882D57C:;
    v0 = 1;
    sp = sp + 176;
    return v0;
L_0882D59C:;
    a0 = s3 + 0;
    a1 = sp + 128;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882D5B0;
L_0882D5B0:;
    v0 = LD32(sp+48);
    v1 = LD32(s1+24);
    a0 = LD32(sp+128);
    { s64 p_ = (s64)(s32)v0 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v0 + v1;
    ST32(v0+48, a0);
    goto L_0882D57C;
L_0882D5D0:;
    v1 = LD32(sp+48);
    a0 = a1 + 0;
    goto L_0882D4E0;
L_0882D5DC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882D5E4;
L_0882D5E4:;
    s0 = LD32(s1+20);
    goto L_0882D3B8;
L_0882D5EC:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 48;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882D600;
L_0882D600:;
    v1 = LD32(sp+48);
    goto L_0882D398;
}

/* 0882D608 */
u32 func_0882D608(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D608:;
    sp = sp - 16;
    v0 = (u32)-1;
    s1 = a1 + 0;
    a2 = a1 + 0;
    s0 = a0 + 0;
    a1 = 4;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0882D664; }
    goto L_0882D638;
L_0882D638:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D648;
L_0882D648:;
    a0 = LD32(s1);
    v0 = 2;
    v1 = 1;
    if (a0 == 0) v0 = v1;
    ST32(s0+4, v0);
    a3 = 0 < a0;
    ST32(s0+8, a0);
    goto L_0882D664;
L_0882D664:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
}

/* 0882D67C */
void func_0882D67C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D67C:;
    sp = sp - 32;
    v0 = a1 + 4;
    s4 = a2 - 4;
    s3 = a2 + 0;
    a2 = v0 + 0;
    v0 = (u32)-1;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a1 = s4 + 0;
    v1 = LD32(a0+4);
    cnd_ = v1 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0882D708; }
    goto L_0882D6C4;
L_0882D6C4:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D6D4;
L_0882D6D4:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    s1 = LD32(s1+4);
    v0 = LD32(v1+24);
    a0 = s2 + 0;
    t_ = v0;
    s0 = s0 ^ s4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D6F0;
L_0882D6F0:;
    v0 = v0 + s1;
    v0 = v0 - s3;
    v1 = 3;
    ST32(s2+4, v1);
    s0 = s0 < 0x1u;
    ST32(s2+12, v0);
    goto L_0882D708;
L_0882D708:;
    v0 = s0 + 0;
    sp = sp + 32;
    return;
}

/* 0882D72C */
void func_0882D72C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D72C:;
    sp = sp - 16;
    s1 = (u32)-1;
    a2 = 0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_0882D798; }
    goto L_0882D750;
L_0882D750:;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D760;
L_0882D760:;
    v1 = LD32(s0+12);
    v1 = v1 - v0;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s0+4, 0); goto L_0882D794; }
    goto L_0882D770;
L_0882D770:;
    a1 = v1 + 0;
    a2 = 0 + 0;
    cnd_ = (s32)v1 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0882D7B0; }
    goto L_0882D780;
L_0882D780:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D790;
L_0882D790:;
    ST32(s0+4, 0);
    goto L_0882D794;
L_0882D794:;
    a2 = 1;
    goto L_0882D798;
L_0882D798:;
    v0 = a2 + 0;
    sp = sp + 16;
    return;
L_0882D7B0:;
    ST32(s0+4, s1);
    goto L_0882D798;
}

/* 0882D7B8 */
rv_t func_0882D7B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D7B8:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    s1 = a2 & 0xff;
    s0 = 0 + 0;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0882D800; }
    goto L_0882D7E4;
L_0882D7E4:;
    goto L_0882D7E8;
L_0882D7E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0882D800:;
    a0 = s3 + 0;
    goto L_0882D804;
L_0882D804:;
    a1 = s1 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_0882DB10(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D810;
L_0882D810:;
    v1 = s0 < s2;
    cnd_ = v1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0882D804; }
    goto L_0882D81C;
L_0882D81C:;
    goto L_0882D7E8;
}

/* 0882D824 */
rv_t func_0882D824(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D824:;
    sp = sp - 16;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0882D83C; }
    goto L_0882D830;
L_0882D830:;
    goto L_0882D834;
L_0882D834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0882D83C:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D84C;
L_0882D84C:;
    goto L_0882D834;
}

/* 0882D854 */
rv_t func_0882D854(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D854:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 4;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D878;
L_0882D878:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882D88C */
rv_t func_0882D88C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D88C:;
    sp = sp - 32;
    a2 = sp + 0;
    s0 = a0 + 0;
    v1 = LD32(a0);
    ST32(sp, a1);
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D8B4;
L_0882D8B4:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882D8C8 */
rv_t func_0882D8C8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D8C8:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 4;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D8EC;
L_0882D8EC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882D900 */
rv_t func_0882D900(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D900:;
    sp = sp - 32;
    a2 = sp + 0;
    s0 = a0 + 0;
    v1 = LD32(a0);
    ST32(sp, a1);
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D928;
L_0882D928:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882D93C */
rv_t func_0882D93C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D93C:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 4;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D960;
L_0882D960:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882D974 */
rv_t func_0882D974(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D974:;
    sp = sp - 32;
    a1 = 4;
    a2 = sp + 0;
    v1 = LD32(a0);
    ST32(sp, FBITS(f12));
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D99C;
L_0882D99C:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882D9B0 */
void func_0882D9B0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882D9B0:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 2;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882D9D4;
L_0882D9D4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 0882D9E8 */
void func_0882D9E8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882D9E8:;
    sp = sp - 32;
    v0 = (u32)(s32)(s16)a1;
    a2 = sp + 0;
    a1 = 2;
    v1 = LD32(a0);
    ST16(sp, v0);
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DA14;
L_0882DA14:;
    v0 = s0 + 0;
    sp = sp + 32;
    return;
}

/* 0882DA28 */
rv_t func_0882DA28(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DA28:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 2;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DA4C;
L_0882DA4C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DA60 */
rv_t func_0882DA60(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882DA60:;
    sp = sp - 32;
    v0 = a1 & 0xffff;
    a2 = sp + 0;
    a1 = 2;
    v1 = LD32(a0);
    ST16(sp, v0);
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DA8C;
L_0882DA8C:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DAA0 */
void func_0882DAA0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DAA0:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 1;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DAC4;
L_0882DAC4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 0882DAD8 */
float func_0882DAD8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DAD8:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 1;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DAFC;
L_0882DAFC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return f0;
}

/* 0882DB10 */
rv_t func_0882DB10(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882DB10:;
    sp = sp - 32;
    v0 = a1 & 0xff;
    a1 = 1;
    a2 = sp + 0;
    ST8(sp, v0);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DB3C;
L_0882DB3C:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DB50 */
rv_t func_0882DB50(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882DB50:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    f0 = func_0882DAD8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882DB70;
L_0882DB70:;
    v1 = LD_U8(sp);
    v0 = s0 + 0;
    v1 = 0 < v1;
    ST8(s1, v1);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DB94 */
rv_t func_0882DB94(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882DB94:;
    sp = sp - 32;
    a2 = sp + 0;
    s0 = a0 + 0;
    ST8(sp, a1);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DBBC;
L_0882DBBC:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DBD0 */
void func_0882DBD0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DBD0:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = 2;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DBF4;
L_0882DBF4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 0882DC08 */
void func_0882DC08(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DC08:;
    sp = sp - 16;
    a1 = LD32(a1);
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC18;
L_0882DC18:;
    sp = sp + 16;
    return;
}

/* 0882DC24 */
void func_0882DC24(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DC24:;
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC38;
L_0882DC38:;
    a0 = v0 + 0;
    a1 = s0 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC44;
L_0882DC44:;
    a0 = v0 + 0;
    a1 = s0 + 8;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC50;
L_0882DC50:;
    s0 = s0 + 12;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC60;
L_0882DC60:;
    sp = sp + 16;
    return;
}

/* 0882DC70 */
rv_t func_0882DC70(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DC70:;
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC84;
L_0882DC84:;
    a0 = v0 + 0;
    a1 = s0 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC90;
L_0882DC90:;
    a0 = v0 + 0;
    a1 = s0 + 8;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DC9C;
L_0882DC9C:;
    s0 = s0 + 12;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DCAC;
L_0882DCAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DCBC */
rv_t func_0882DCBC(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DCBC:;
    f12 = BITSF(LD32(a1));
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D974(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DCD4;
L_0882DCD4:;
    a0 = v0 + 0;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DCE0;
L_0882DCE0:;
    f12 = BITSF(LD32(s0+8));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DCEC;
L_0882DCEC:;
    f12 = BITSF(LD32(s0+12));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DCF8;
L_0882DCF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DD08 */
rv_t func_0882DD08(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DD08:;
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DD1C;
L_0882DD1C:;
    a0 = v0 + 0;
    a1 = s0 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DD28;
L_0882DD28:;
    s0 = s0 + 8;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DD38;
L_0882DD38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DD48 */
rv_t func_0882DD48(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882DD48:;
    f12 = BITSF(LD32(a1));
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D974(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DD60;
L_0882DD60:;
    a0 = v0 + 0;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DD6C;
L_0882DD6C:;
    f12 = BITSF(LD32(s0+8));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DD78;
L_0882DD78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882DD88 */
float func_0882DD88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882DD88:;
    sp = sp - 48;
    s4 = a2 + 0;
    s4 = (s4 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    s6 = 0 + 0;
    s5 = a1 + 0;
    s3 = a0 + 0;
    s2 = (u32)-1;
    s1 = 0 + 0;
    s0 = a1 + 0;
    v1 = LD32(s3);
    goto L_0882DDD0;
L_0882DDD0:;
    a0 = s3 + 0;
    a1 = 4;
    v0 = LD32(v1+8);
    t_ = v0;
    a2 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DDE4;
L_0882DDE4:;
    v1 = 3;
    goto L_0882DDE8;
L_0882DDE8:;
    v0 = LD_U8(s0);
    v1 = v1 - 1;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0882DE84; }
    goto L_0882DDF8;
L_0882DDF8:;
    cnd_ = v1 != s2;
    s1 = s1 + 1;
    if (cnd_) { goto L_0882DDE8; }
    goto L_0882DE00;
L_0882DE00:;
    cnd_ = s6 != 0;
    v0 = s1 < s4;
    if (cnd_) { goto L_0882DE84; }
    goto L_0882DE08;
L_0882DE08:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s3); goto L_0882DDD0; }
    goto L_0882DE10;
L_0882DE10:;
    v0 = s5 + s4;
    goto L_0882DE14;
L_0882DE14:;
    ST8(v0-1, 0);
    s1 = (u32)-1;
    v1 = LD32(s3);
    goto L_0882DE20;
L_0882DE20:;
    a0 = s3 + 0;
    a1 = 4;
    v0 = LD32(v1+8);
    a2 = sp + 0;
    t_ = v0;
    s0 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DE38;
L_0882DE38:;
    v1 = 3;
    v0 = LD_U8(s0);
    goto L_0882DE40;
L_0882DE40:;
    v1 = v1 - 1;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0882DE5C; }
    goto L_0882DE4C;
L_0882DE4C:;
    cnd_ = v1 != s1;
    if (cnd_) { v0 = LD_U8(s0); goto L_0882DE40; }
    goto L_0882DE54;
L_0882DE54:;
    v1 = LD32(s3);
    goto L_0882DE20;
L_0882DE5C:;
    goto L_0882DE60;
L_0882DE60:;
    sp = sp + 48;
    return f0;
L_0882DE84:;
    v0 = s1 < s4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0882DE60; }
    goto L_0882DE90;
L_0882DE90:;
    v0 = s5 + s4;
    goto L_0882DE14;
}

/* 0882DE98 */
float func_0882DE98(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[528] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 528);
L_0882DE98:;
    sp = sp - 528;
    v0 = D_08AD3BBC - (15292);
    s1 = a1 + 0;
    a2 = 511;
    s0 = a0 + 0;
    a0 = sp + 1;
    a1 = 0 + 0;
    v1 = LD_U8(v0+15292);
    ST8(sp, v1);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882DECC;
L_0882DECC:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 512;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882DEDC;
L_0882DEDC:;
    cnd_ = s1 == 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_0882DF44; }
    goto L_0882DEE4;
L_0882DEE4:;
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    cnd_ = v1 == v0;
    a0 = LD32(s1);
    if (cnd_) { goto L_0882DF6C; }
    goto L_0882DEF4;
L_0882DEF4:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+8, 0); goto L_0882DF14; }
    goto L_0882DEFC;
L_0882DEFC:;
    cnd_ = sp == a0;
    if (cnd_) { goto L_0882DF48; }
    goto L_0882DF04;
L_0882DF04:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882DF0C;
L_0882DF0C:;
    ST32(s1, 0);
    ST32(s1+8, 0);
    goto L_0882DF14;
L_0882DF14:;
    a0 = sp + 0;
    ST32(s1+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882DF20;
L_0882DF20:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DF34;
L_0882DF34:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0882DF58; }
    goto L_0882DF3C;
L_0882DF3C:;
    ST32(s1+4, 0);
    goto L_0882DF40;
L_0882DF40:;
    ST32(s1+8, 0);
    goto L_0882DF44;
L_0882DF44:;
    goto L_0882DF48;
L_0882DF48:;
    sp = sp + 528;
    return f0;
L_0882DF58:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882DF64;
L_0882DF64:;
    goto L_0882DF48;
L_0882DF6C:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+4, 0); goto L_0882DF40; }
    goto L_0882DF74;
L_0882DF74:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882DF7C;
L_0882DF7C:;
    ST32(s1, 0);
    goto L_0882DF3C;
}

/* 0882DF84 */
rv_t func_0882DF84(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882DF84:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1);
    a1 = 0xff0000u;
    a1 = a1 | 0xff00;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0882E030; }
    goto L_0882DFB0;
L_0882DFB0:;
    v1 = LD32(a0);
    a1 = LD32(s0+8);
    ST32(sp, 0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882DFC8;
L_0882DFC8:;
    a1 = LD32(s0+8);
    a0 = s1 + 0;
    a2 = sp + 0;
    v1 = a1 + 3;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 30;
    v1 = v1 + v0;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0882DFF0; }
    goto L_0882DFEC;
L_0882DFEC:;
    v0 = (u32)((s32)v1 >> 2);
    goto L_0882DFF0;
L_0882DFF0:;
    v0 = v0 << 2;
    v0 = v0 - a1;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0882E018; }
    goto L_0882E000;
L_0882E000:;
    v0 = s1 + 0;
    goto L_0882E004;
L_0882E004:;
    goto L_0882E008;
L_0882E008:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0882E018:;
    v1 = LD32(s1);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E028;
L_0882E028:;
    v0 = s1 + 0;
    goto L_0882E004;
L_0882E030:;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E038;
L_0882E038:;
    goto L_0882E008;
}

/* 0882E040 */
void func_0882E040(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E040:;
    sp = sp - 16;
    s0 = a1 + 0;
    s0 = s0 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E058;
L_0882E058:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E064;
L_0882E064:;
    sp = sp + 16;
    return;
}

/* 0882E074 */
rv_t func_0882E074(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E074:;
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E088;
L_0882E088:;
    a0 = v0 + 0;
    a1 = s0 + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E094;
L_0882E094:;
    s0 = s0 + 8;
    a1 = s0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E0A4;
L_0882E0A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E0B4 */
rv_t func_0882E0B4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E0B4:;
    f12 = BITSF(LD32(a1));
    sp = sp - 16;
    s0 = a1 + 0;
    { rv_t r_ = func_0882D974(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E0CC;
L_0882E0CC:;
    a0 = v0 + 0;
    f12 = BITSF(LD32(s0+4));
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E0D8;
L_0882E0D8:;
    f12 = BITSF(LD32(s0+8));
    a0 = v0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E0E4;
L_0882E0E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E0F4 */
rv_t func_0882E0F4(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882E0F4:;
    sp = sp - 32;
    v0 = 9;
    ST32(sp, v0);
    ST32(sp+4, a1);
    s2 = sp + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    a1 = LD32(s2+4);
    goto L_0882E124;
L_0882E124:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E134;
L_0882E134:;
    v1 = LD32(s2);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s2+4); goto L_0882E124; }
    goto L_0882E148;
L_0882E148:;
    v0 = s1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E164 */
rv_t func_0882E164(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882E164:;
    sp = sp - 32;
    v0 = 9;
    ST32(sp, v0);
    ST32(sp+4, a1);
    s2 = sp + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    v1 = LD32(s2+4);
    goto L_0882E194;
L_0882E194:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    v0 = v0 + v1;
    f12 = BITSF(LD32(v0));
    s0 = s0 + 1;
    { rv_t r_ = func_0882D974(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E1AC;
L_0882E1AC:;
    v1 = LD32(s2);
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s2+4); goto L_0882E194; }
    goto L_0882E1BC;
L_0882E1BC:;
    v0 = s1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E1D8 */
void func_0882E1D8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882E1D8:;
    sp = sp - 32;
    v0 = 6;
    ST32(sp, v0);
    ST32(sp+4, a1);
    s2 = sp + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    a1 = LD32(s2+4);
    goto L_0882E208;
L_0882E208:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E218;
L_0882E218:;
    v1 = LD32(s2);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s2+4); goto L_0882E208; }
    goto L_0882E22C;
L_0882E22C:;
    v0 = s1 + 0;
    sp = sp + 32;
    return;
}

/* 0882E248 */
rv_t func_0882E248(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882E248:;
    sp = sp - 32;
    v0 = 6;
    ST32(sp, v0);
    ST32(sp+4, a1);
    s2 = sp + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    v1 = LD32(s2+4);
    goto L_0882E278;
L_0882E278:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    v0 = v0 + v1;
    f12 = BITSF(LD32(v0));
    s0 = s0 + 1;
    { rv_t r_ = func_0882D974(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E290;
L_0882E290:;
    v1 = LD32(s2);
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s2+4); goto L_0882E278; }
    goto L_0882E2A0;
L_0882E2A0:;
    v0 = s1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E2BC */
rv_t func_0882E2BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E2BC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a3 = 0 + 0;
    s0 = a1 + 0;
    a1 = a2 + 0;
    a2 = s0 + 0;
    a0 = LD32(a0+28);
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E2E8;
L_0882E2E8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882E300; }
    goto L_0882E2F0;
L_0882E2F0:;
    v0 = LD32(s1+20);
    v1 = s0 + 0;
    v0 = v0 + s0;
    ST32(s1+20, v0);
    goto L_0882E300;
L_0882E300:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E318 */
rv_t func_0882E318(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E318:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+28);
    { u64 r_ = func_0887ADB4(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E338;
L_0882E338:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882E350; }
    goto L_0882E340;
L_0882E340:;
    v0 = LD32(s0+20);
    v1 = s1 + 0;
    v0 = v0 + s1;
    ST32(s0+20, v0);
    goto L_0882E350;
L_0882E350:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E368 */
rv_t func_0882E368(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0882E368:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E370 */
rv_t func_0882E370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0882E370:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E378 */
rv_t func_0882E378(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E378:;
    sp = sp - 16;
    a0 = LD32(a0+28);
    v0 = func_0887B098(a0);
    goto L_0882E388;
L_0882E388:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E394 */
rv_t func_0882E394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E394:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a3 = LD32(a0+32);
    v1 = LD32(a0+36);
    a1 = LD32(a0+28);
    v0 = s1 + a3;
    v1 = v1 < v0;
    a0 = a2 + 0;
    a1 = a1 + a3;
    a2 = s1 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0882E3E8; }
    goto L_0882E3D4;
L_0882E3D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0882E3E8:;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E3F0;
L_0882E3F0:;
    v1 = LD32(s0+32);
    v0 = LD32(s0+20);
    v1 = v1 + s1;
    ST32(s0+32, v1);
    v0 = v0 + s1;
    ST32(s0+20, v0);
    v0 = s1 + 0;
    goto L_0882E3D4;
}

/* 0882E410 */
rv_t func_0882E410(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0882E410:;
    v1 = LD32(a0+32);
    v0 = LD32(a0+36);
    v1 = a1 + v1;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0882E43C; }
    goto L_0882E428;
L_0882E428:;
    v0 = LD32(a0+20);
    ST32(a0+32, v1);
    a2 = a1 + 0;
    v0 = v0 + a1;
    ST32(a0+20, v0);
    goto L_0882E43C;
L_0882E43C:;
    v0 = a2 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E444 */
rv_t func_0882E444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E444:;
    sp = sp - 16;
    a3 = 0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0882E494; }
    goto L_0882E470;
L_0882E470:;
    v1 = LD32(a0+32);
    a2 = LD32(a0+36);
    a1 = a1 + v1;
    v0 = a2 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_0882E4C0; }
    goto L_0882E488;
L_0882E488:;
    v0 = LD_U8(a0+41);
    cnd_ = v0 != 0;
    a1 = a1 - a2;
    if (cnd_) { goto L_0882E4B0; }
    goto L_0882E494;
L_0882E494:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0882E4B0:;
    func_0882E590(a0, a1, t1, t2, t3);
    goto L_0882E4B8;
L_0882E4B8:;
    v1 = LD32(s0+32);
    a0 = LD32(s0+28);
    goto L_0882E4C0;
L_0882E4C0:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a0 = a0 + v1;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E4D0;
L_0882E4D0:;
    v1 = LD32(s0+32);
    v0 = LD32(s0+20);
    a3 = s1 + 0;
    v1 = v1 + s1;
    v0 = v0 + s1;
    ST32(s0+20, v0);
    ST32(s0+32, v1);
    goto L_0882E494;
}

/* 0882E4F0 */
rv_t func_0882E4F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882E4F0:;
    sp = sp - 32;
    v1 = a1 + a3;
    s3 = a2 + 0;
    a2 = 0 + 0;
    s2 = a3 + 0;
    s1 = a1 + 0;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0882E544; }
    goto L_0882E528;
L_0882E528:;
    a1 = LD32(a0+36);
    v0 = a1 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_0882E570; }
    goto L_0882E538;
L_0882E538:;
    v0 = LD_U8(a0+41);
    cnd_ = v0 != 0;
    a1 = v1 - a1;
    if (cnd_) { goto L_0882E564; }
    goto L_0882E544;
L_0882E544:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0882E564:;
    func_0882E590(a0, a1, t1, t2, t3);
    goto L_0882E56C;
L_0882E56C:;
    a0 = LD32(s0+28);
    goto L_0882E570;
L_0882E570:;
    a2 = s1 + 0;
    a1 = s3 + 0;
    a0 = a0 + s2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E580;
L_0882E580:;
    a2 = s1 + 0;
    goto L_0882E544;
}

/* 0882E588 */
rv_t func_0882E588(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0882E588:;
    v0 = LD32(a0+32);
    return (rv_t){ v0, v1, f0 };
}

/* 0882E590 */
void func_0882E590(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E590:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+36);
    v0 = a1 < a0;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0882E5C8; }
    goto L_0882E5B8;
L_0882E5B8:;
    a0 = a0 << 1;
    goto L_0882E5BC;
L_0882E5BC:;
    v0 = a1 < a0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 << 1; goto L_0882E5BC; }
    goto L_0882E5C8;
L_0882E5C8:;
    s2 = a0 + v1;
    a0 = s2 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E5D4;
L_0882E5D4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0882E5EC; }
    goto L_0882E5DC;
L_0882E5DC:;
    a1 = LD32(s1+28);
    a2 = LD32(s1+36);
    a0 = v0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E5EC;
L_0882E5EC:;
    a0 = LD32(s1+28);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882E618; }
    goto L_0882E5F8;
L_0882E5F8:;
    ST32(s1+36, s2);
    goto L_0882E5FC;
L_0882E5FC:;
    ST32(s1+28, s0);
    sp = sp + 16;
    return;
L_0882E618:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E620;
L_0882E620:;
    ST32(s1+36, s2);
    goto L_0882E5FC;
}

/* 0882E628 */
rv_t func_0882E628(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E628:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a0+32);
    a0 = a2 + 0;
    a2 = s0 + 0;
    a1 = LD32(v0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E654;
L_0882E654:;
    a1 = LD32(s1+32);
    a0 = LD32(s1+36);
    v1 = LD32(s1+20);
    v0 = LD32(a1);
    a0 = a0 + s0;
    v1 = v1 + s0;
    v0 = v0 + s0;
    ST32(a1, v0);
    v0 = s0 + 0;
    ST32(s1+20, v1);
    ST32(s1+36, a0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882E694 */
rv_t func_0882E694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0882E694:;
    t0 = LD32(a0+32);
    a3 = LD32(a0+36);
    a2 = LD32(a0+20);
    v1 = LD32(t0);
    a3 = a3 + a1;
    a2 = a2 + a1;
    v1 = v1 + a1;
    v0 = a1 + 0;
    ST32(t0, v1);
    ST32(a0+20, a2);
    ST32(a0+36, a3);
    return (rv_t){ v0, v1, f0 };
}

/* 0882E6C4 */
rv_t func_0882E6C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E6C4:;
    sp = sp - 16;
    s1 = a1 + 0;
    a3 = 0 + 0;
    a1 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a0+40);
    cnd_ = v0 == 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_0882E708; }
    goto L_0882E6F0;
L_0882E6F0:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0882E708:;
    v0 = LD32(a0+32);
    a0 = LD32(v0);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E714;
L_0882E714:;
    a1 = LD32(s0+32);
    a0 = LD32(s0+36);
    v1 = LD32(s0+20);
    v0 = LD32(a1);
    a0 = a0 + s1;
    v1 = v1 + s1;
    v0 = v0 + s1;
    ST32(a1, v0);
    a3 = s1 + 0;
    ST32(s0+20, v1);
    ST32(s0+36, a0);
    goto L_0882E6F0;
}

/* 0882E744 */
rv_t func_0882E744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882E744:;
    sp = sp - 16;
    v1 = 0 + 0;
    s0 = a1 + 0;
    v0 = LD_U8(a0+40);
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0882E774; }
    goto L_0882E764;
L_0882E764:;
    v0 = LD32(a0+36);
    v0 = v0 < a3;
    cnd_ = v0 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_0882E788; }
    goto L_0882E774;
L_0882E774:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0882E788:;
    a0 = LD32(a0+28);
    a0 = a0 + a3;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E794;
L_0882E794:;
    v1 = s0 + 0;
    goto L_0882E774;
}

/* 0882E79C */
u32 func_0882E79C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0882E79C:;
    sp = sp - 64;
    s5 = D_08B30AEC - (2796);
    v1 = 0 + 0;
    v0 = LD32(s5+2796);
    s4 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0882E8E0; }
    goto L_0882E7D8;
L_0882E7D8:;
    v0 = LD32(a0+8);
    a0 = 1;
    v0 = (s32)v0 < 5;
    cnd_ = v0 == 0;
    ST32(sp, a0);
    if (cnd_) { goto L_0882EBCC; }
    goto L_0882E7EC;
L_0882E7EC:;
    v0 = D_08B30AD4 - (2772);
    goto L_0882E7F0;
L_0882E7F0:;
    s1 = v0 + 2772;
    cnd_ = (s32)a0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0882E8B8; }
    goto L_0882E7FC;
L_0882E7FC:;
    a1 = s1 + 16;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E810;
L_0882E810:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E820;
L_0882E820:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0882E894; }
    goto L_0882E828;
L_0882E828:;
    v0 = (u32)(s32)LD_S8(v0);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s4+8); goto L_0882E898; }
    goto L_0882E834;
L_0882E834:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+8, 0); goto L_0882E858; }
    goto L_0882E840;
L_0882E840:;
    cnd_ = s0 == a0;
    if (cnd_) { goto L_0882E888; }
    goto L_0882E848;
L_0882E848:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E850;
L_0882E850:;
    ST32(s1, 0);
    ST32(s1+8, 0);
    goto L_0882E858;
L_0882E858:;
    a0 = s0 + 0;
    ST32(s1+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E864;
L_0882E864:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882E878;
L_0882E878:;
    cnd_ = v0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_0882EBB8; }
    goto L_0882E880;
L_0882E880:;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_0882E888;
L_0882E888:;
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E890;
L_0882E890:;
    ST32(s1+12, v0);
    goto L_0882E894;
L_0882E894:;
    v0 = LD32(s4+8);
    goto L_0882E898;
L_0882E898:;
    v0 = (s32)v0 < 4;
    cnd_ = v0 == 0;
    a1 = s1 + 20;
    if (cnd_) { goto L_0882EBA0; }
    goto L_0882E8A4;
L_0882E8A4:;
    v0 = LD32(sp);
    goto L_0882E8A8;
L_0882E8A8:;
    s3 = s3 + 1;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_0882E7FC; }
    goto L_0882E8B8;
L_0882E8B8:;
    v0 = LD32(s4+8);
    v0 = (s32)v0 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s4+20); goto L_0882EB94; }
    goto L_0882E8C8;
L_0882E8C8:;
    v0 = D_08B30AF8 - (2808);
    ST32(v0+2808, 0);
    goto L_0882E8D0;
L_0882E8D0:;
    a1 = LD32(s4+16);
    cnd_ = a1 != 0;
    ST32(s5+2796, a1);
    if (cnd_) { goto L_0882E90C; }
    goto L_0882E8DC;
L_0882E8DC:;
    v1 = 1;
    goto L_0882E8E0;
L_0882E8E0:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_0882E90C:;
    a0 = sp + 4;
    func_08AA6380(a0, a1, t1, t2, t3);
    goto L_0882E914;
L_0882E914:;
    v1 = LD32(sp+4);
    a0 = LD32(s4+16);
    v0 = D_08B30AF0 - (2800);
    ST32(v0+2800, v1);
    cnd_ = (s32)a0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0882EA74; }
    goto L_0882E92C;
L_0882E92C:;
    v0 = D_08AEB700 - (-18688);
    f20 = BITSF(LD32(v0-18688));
    goto L_0882E934;
L_0882E934:;
    v0 = LD32(s4+8);
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0882EB84; }
    goto L_0882E940;
L_0882E940:;
    a1 = LD32(sp+4);
    goto L_0882E944;
L_0882E944:;
    a0 = s2 + 0;
    a2 = 4;
    a1 = a1 + 16;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E958;
L_0882E958:;
    a1 = LD32(sp+4);
    a0 = s2 + 0;
    a2 = 24;
    a1 = a1 + 20;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E970;
L_0882E970:;
    a1 = LD32(sp+4);
    a0 = s2 + 0;
    a2 = 24;
    a1 = a1 + 44;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E988;
L_0882E988:;
    v1 = LD32(s4+8);
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    a1 = LD32(sp+4);
    if (cnd_) { goto L_0882EB68; }
    goto L_0882E998;
L_0882E998:;
    a0 = s2 + 0;
    a2 = 16;
    a1 = a1 + 68;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E9AC;
L_0882E9AC:;
    v1 = LD32(s4+8);
    s0 = LD32(sp+4);
    goto L_0882E9B4;
L_0882E9B4:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a1 = s0 + 84;
    if (cnd_) { goto L_0882EB50; }
    goto L_0882E9C0;
L_0882E9C0:;
    ST32(s0+84, 0);
    v0 = LD32(s4+8);
    goto L_0882E9C8;
L_0882E9C8:;
    v0 = (s32)v0 < 5;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0882EB40; }
    goto L_0882E9D4;
L_0882E9D4:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882E9E0;
L_0882E9E0:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0882EB34; }
    goto L_0882E9E8;
L_0882E9E8:;
    v0 = (u32)(s32)LD_S8(v0);
    cnd_ = v0 == 0;
    s0 = LD32(sp+4);
    if (cnd_) { goto L_0882EB38; }
    goto L_0882E9F4;
L_0882E9F4:;
    a0 = LD32(s0);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+8, 0); goto L_0882EA18; }
    goto L_0882EA00;
L_0882EA00:;
    cnd_ = s1 == a0;
    if (cnd_) { goto L_0882EA4C; }
    goto L_0882EA08;
L_0882EA08:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EA10;
L_0882EA10:;
    ST32(s0, 0);
    ST32(s0+8, 0);
    goto L_0882EA18;
L_0882EA18:;
    a0 = s1 + 0;
    ST32(s0+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EA24;
L_0882EA24:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882EA38;
L_0882EA38:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0882EB20; }
    goto L_0882EA40;
L_0882EA40:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    s0 = LD32(sp+4);
    goto L_0882EA4C;
L_0882EA4C:;
    a0 = s1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EA54;
L_0882EA54:;
    ST32(s0+12, v0);
    s0 = LD32(sp+4);
    goto L_0882EA5C;
L_0882EA5C:;
    v0 = LD32(s4+16);
    s3 = s3 + 1;
    v1 = s0 + 88;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_0882E934; }
    goto L_0882EA74;
L_0882EA74:;
    a0 = 1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EA7C;
L_0882EA7C:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882EA84;
L_0882EA84:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0882F85C(a0);
    goto L_0882EA90;
L_0882EA90:;
    a1 = LD32(s4+16);
    v0 = D_08B30AF4 - (2804);
    v1 = (s32)a1 < 2;
    cnd_ = v1 == 0;
    ST32(v0+2804, s0);
    if (cnd_) { goto L_0882EB0C; }
    goto L_0882EAA4;
L_0882EAA4:;
    ST32(s0, 0);
    a1 = s0 + 4;
    goto L_0882EAAC;
L_0882EAAC:;
    a0 = s2 + 0;
    a2 = 24;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EABC;
L_0882EABC:;
    v1 = LD32(s4+16);
    s0 = LD32(s0);
    v1 = v1 - 1;
    cnd_ = (s32)v1 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882EAFC; }
    goto L_0882EAD0;
L_0882EAD0:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EAE4;
L_0882EAE4:;
    v1 = LD32(s4+16);
    s1 = s1 + 1;
    v1 = v1 - 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0882EAD0; }
    goto L_0882EAFC;
L_0882EAFC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EB04;
L_0882EB04:;
    v1 = 1;
    goto L_0882E8E0;
L_0882EB0C:;
    a1 = a1 - 1;
    a0 = s0 + 0;
    func_08AA581C(a0, a1, 0, 0, 0);
    goto L_0882EB18;
L_0882EB18:;
    a1 = s0 + 4;
    goto L_0882EAAC;
L_0882EB20:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EB2C;
L_0882EB2C:;
    s0 = LD32(sp+4);
    goto L_0882EA4C;
L_0882EB34:;
    s0 = LD32(sp+4);
    goto L_0882EB38;
L_0882EB38:;
    ST32(s0+12, 0);
    goto L_0882EA5C;
L_0882EB40:;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EB48;
L_0882EB48:;
    a0 = s2 + 0;
    goto L_0882E9D4;
L_0882EB50:;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EB60;
L_0882EB60:;
    v0 = LD32(s4+8);
    goto L_0882E9C8;
L_0882EB68:;
    s0 = LD32(sp+4);
    v0 = s0 + 68;
    ST32(v0+12, FBITS(f20));
    ST32(s0+68, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    goto L_0882E9B4;
L_0882EB84:;
    a1 = 4;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EB8C;
L_0882EB8C:;
    a1 = LD32(sp+4);
    goto L_0882E944;
L_0882EB94:;
    v0 = D_08B30AF8 - (2808);
    ST32(v0+2808, v1);
    goto L_0882E8D0;
L_0882EBA0:;
    a0 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EBB0;
L_0882EBB0:;
    v0 = LD32(sp);
    goto L_0882E8A8;
L_0882EBB8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EBC4;
L_0882EBC4:;
    goto L_0882E888;
L_0882EBCC:;
    a0 = a1 + 0;
    a2 = 4;
    a1 = sp + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EBE0;
L_0882EBE0:;
    a0 = LD32(sp);
    v0 = 1;
    cnd_ = a0 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882E8E0; }
    goto L_0882EBF0;
L_0882EBF0:;
    v0 = D_08B30AD4 - (2772);
    goto L_0882E7F0;
}

/* 0882EBF8 */
u32 func_0882EBF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882EBF8:;
    sp = sp - 32;
    s3 = a1 + 0;
    s1 = a0 + 0;
    a0 = LD32(a0+16);
    func_0883A128(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0882EC24;
L_0882EC24:;
    v0 = LD32(s1+8);
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0882ECD4; }
    goto L_0882EC34;
L_0882EC34:;
    v0 = LD32(s1+16);
    goto L_0882EC38;
L_0882EC38:;
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0882EC90; }
    goto L_0882EC40;
L_0882EC40:;
    s4 = (u32)-1;
    a2 = 0 + 0;
    goto L_0882EC48;
L_0882EC48:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EC54;
L_0882EC54:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    v0 = func_0883A248(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_0882EC60;
L_0882EC60:;
    s2 = v0 + 0;
    v0 = LD32(s1+8);
    a0 = s0 + 0;
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0882ECB4; }
    goto L_0882EC78;
L_0882EC78:;
    func_08828FF8();
    goto L_0882EC80;
L_0882EC80:;
    v0 = LD32(s1+16);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0882EC48; }
    goto L_0882EC90;
L_0882EC90:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_0882ECB4:;
    v0 = func_088354F8(a0);
    goto L_0882ECBC;
L_0882ECBC:;
    cnd_ = v0 == s4;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882EC78; }
    goto L_0882ECC4;
L_0882ECC4:;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ECCC;
L_0882ECCC:;
    ST32(v0, s2);
    goto L_0882EC78;
L_0882ECD4:;
    a0 = LD32(s1+16);
    func_08835530(a0, 0, 0, 0);
    goto L_0882ECDC;
L_0882ECDC:;
    v0 = LD32(s1+16);
    goto L_0882EC38;
}

/* 0882ECE4 */
u32 func_0882ECE4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882ECE4:;
    sp = sp - 48;
    s2 = a1 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0882EDA0; }
    goto L_0882ED18;
L_0882ED18:;
    v0 = D_08B25FC4 - (24516);
    s3 = v0 + 24516;
    s5 = (u32)-24200;
    s4 = (u32)-1;
    a1 = sp + 0;
    goto L_0882ED2C;
L_0882ED2C:;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s2 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ED3C;
L_0882ED3C:;
    v1 = LD32(sp);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_0882ED90; }
    goto L_0882ED48;
L_0882ED48:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0882EDC8; }
    goto L_0882ED54;
L_0882ED54:;
    a0 = s0 + 0;
    { u64 r_ = func_0883A208(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882ED5C;
L_0882ED5C:;
    a0 = v0 << 2;
    v1 = a0 + s3;
    a3 = LD32(sp);
    a0 = v1 + 0;
    a2 = v0 < 0xfau;
    cnd_ = v0 == s4;
    a1 = 0 + 0;
    if (cnd_) { goto L_0882ED7C; }
    goto L_0882ED78;
L_0882ED78:;
    a1 = LD32(v1);
    goto L_0882ED7C;
L_0882ED7C:;
    v0 = a3 | a1;
    cnd_ = a2 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0882ED8C; }
    goto L_0882ED88;
L_0882ED88:;
    ST32(a0, v0);
    goto L_0882ED8C;
L_0882ED8C:;
    v0 = LD32(s1+16);
    goto L_0882ED90;
L_0882ED90:;
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_0882ED2C; }
    goto L_0882EDA0;
L_0882EDA0:;
    v0 = 1;
    sp = sp + 48;
    return v0;
L_0882EDC8:;
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EDD0;
L_0882EDD0:;
    a0 = v0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EDD8;
L_0882EDD8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = LD32(sp);
    if (cnd_) { goto L_0882EDF4; }
    goto L_0882EDE4;
L_0882EDE4:;
    v1 = LD32(v0+24);
    v0 = a1 & 0x5e87;
    v1 = v1 | v0;
    ST32(a0+24, v1);
    goto L_0882EDF4;
L_0882EDF4:;
    v0 = a1 & s5;
    ST32(sp, v0);
    goto L_0882ED54;
}

/* 0882EE00 */
u32 func_0882EE00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_0882EE00:;
    sp = sp - 48;
    s4 = a0 + 0;
    a0 = 21;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EE30;
L_0882EE30:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EE40;
L_0882EE40:;
    a0 = D_08B22E60 - (11872);
    a0 = a0 + 11872;
    a1 = v0 + 0;
    a2 = sp + 0;
    s0 = v0 + 0;
    v0 = func_0881A824(a0, a1, a2);
    goto L_0882EE58;
L_0882EE58:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    a1 = LD32(sp);
    if (cnd_) { goto L_0882EEA8; }
    goto L_0882EE64;
L_0882EE64:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0882EE78; }
    goto L_0882EE6C;
L_0882EE6C:;
    a1 = LD32(a1);
    a0 = s0 + 0;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EE78;
L_0882EE78:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EE80;
L_0882EE80:;
    v0 = 0 + 0;
    goto L_0882EE84;
L_0882EE84:;
    sp = sp + 48;
    return v0;
L_0882EEA8:;
    a0 = s1 + 0;
    a2 = 4;
    a1 = a1 + 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EEBC;
L_0882EEBC:;
    a0 = LD32(sp);
    s5 = 0 + 0;
    a1 = LD32(a0+12);
    a0 = a0 + 16;
    func_08AA6404(a0, a1, 0, 0, 0);
    goto L_0882EED0;
L_0882EED0:;
    v1 = LD32(sp);
    v0 = LD32(v1+12);
    cnd_ = v0 != 0;
    s2 = LD32(v1+16);
    if (cnd_) { goto L_0882EEF0; }
    goto L_0882EEE0;
L_0882EEE0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EEE8;
L_0882EEE8:;
    v0 = 1;
    goto L_0882EE84;
L_0882EEF0:;
    a1 = s2 + 8;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EF04;
L_0882EF04:;
    a1 = s2 + 12;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EF18;
L_0882EF18:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EF2C;
L_0882EF2C:;
    a1 = LD32(s2);
    a0 = s2 + 4;
    s3 = 0 + 0;
    func_08AA35FC(a0, a1, 0, 0, 0);
    goto L_0882EF3C;
L_0882EF3C:;
    v1 = LD32(s2);
    cnd_ = v1 != 0;
    s0 = LD32(s2+4);
    if (cnd_) { goto L_0882EF68; }
    goto L_0882EF48;
L_0882EF48:;
    v1 = LD32(sp);
    goto L_0882EF4C;
L_0882EF4C:;
    s5 = s5 + 1;
    v0 = LD32(v1+12);
    v0 = s5 < v0;
    cnd_ = v0 != 0;
    s2 = s2 + 16;
    if (cnd_) { goto L_0882EEF0; }
    goto L_0882EF60;
L_0882EF60:;
    goto L_0882EEE0;
L_0882EF68:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EF7C;
L_0882EF7C:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EF90;
L_0882EF90:;
    a1 = s0 + 8;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EFA4;
L_0882EFA4:;
    v0 = LD32(s4+8);
    a1 = s0 + 12;
    s3 = s3 + 1;
    a0 = s1 + 0;
    a2 = 4;
    cnd_ = (s32)v0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0882EFE0; }
    goto L_0882EFC0;
L_0882EFC0:;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EFC8;
L_0882EFC8:;
    a1 = s0 + 16;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882EFDC;
L_0882EFDC:;
    v0 = LD32(s4+8);
    goto L_0882EFE0;
L_0882EFE0:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+12, 0); goto L_0882F004; }
    goto L_0882EFEC;
L_0882EFEC:;
    v0 = LD32(s2);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 20;
    if (cnd_) { goto L_0882EF68; }
    goto L_0882EFFC;
L_0882EFFC:;
    v1 = LD32(sp);
    goto L_0882EF4C;
L_0882F004:;
    ST32(s0+16, 0);
    goto L_0882EFEC;
}

/* 0882F00C */
u32 func_0882F00C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0882F00C:;
    sp = sp - 96;
    s0 = a1 + 0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    s2 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_0887AEBC(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F05C;
L_0882F05C:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0882F084; }
    goto L_0882F068;
L_0882F068:;
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(s2+16); goto L_0882F0C0; }
    goto L_0882F070;
L_0882F070:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+8, 0); goto L_0882F088; }
    goto L_0882F078;
L_0882F078:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F080;
L_0882F080:;
    ST32(sp, 0);
    goto L_0882F084;
L_0882F084:;
    ST32(sp+8, 0);
    goto L_0882F088;
L_0882F088:;
    cnd_ = s1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0882F1F4; }
    goto L_0882F090;
L_0882F090:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F098;
L_0882F098:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882F0AC;
L_0882F0AC:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0882F1E0; }
    goto L_0882F0B4;
L_0882F0B4:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_0882F0BC;
L_0882F0BC:;
    v0 = LD32(s2+16);
    goto L_0882F0C0;
L_0882F0C0:;
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0882F190; }
    goto L_0882F0C8;
L_0882F0C8:;
    fp = sp + 16;
    s7 = sp + 20;
    s6 = sp + 24;
    s5 = sp + 28;
    s4 = sp + 32;
    s3 = sp + 36;
    a2 = 4;
    goto L_0882F0E4;
L_0882F0E4:;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = fp + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F0F4;
L_0882F0F4:;
    a0 = s0 + 0;
    a1 = s7 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F108;
L_0882F108:;
    a0 = s0 + 0;
    a1 = s6 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F11C;
L_0882F11C:;
    a0 = s0 + 0;
    a1 = s5 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F130;
L_0882F130:;
    a0 = s0 + 0;
    a1 = s4 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F144;
L_0882F144:;
    a3 = 0 + 0;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = 4;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F158;
L_0882F158:;
    a2 = 0 + 0;
    a1 = 0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0887AEBC(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F168;
L_0882F168:;
    a0 = v0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F170;
L_0882F170:;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_0883AC6C(a0, a1);
    goto L_0882F17C;
L_0882F17C:;
    v1 = LD32(s2+16);
    s1 = s1 + 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    a2 = 4;
    if (cnd_) { goto L_0882F0E4; }
    goto L_0882F190;
L_0882F190:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882F1D0; }
    goto L_0882F19C;
L_0882F19C:;
    v0 = 1;
    sp = sp + 96;
    return v0;
L_0882F1D0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F1D8;
L_0882F1D8:;
    ST32(sp, 0);
    goto L_0882F19C;
L_0882F1E0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F1EC;
L_0882F1EC:;
    v0 = LD32(s2+16);
    goto L_0882F0C0;
L_0882F1F4:;
    ST32(sp, 0);
    goto L_0882F0BC;
}

/* 0882F1FC */
u32 func_0882F1FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_0882F1FC:;
    sp = sp - 96;
    s0 = a0 + 0;
    s1 = a1 + 0;
    func_088F2760(t1, t2, t3);
    goto L_0882F218;
L_0882F218:;
    v0 = LD32(s0+8);
    v0 = (s32)v0 < 10;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0882F394; }
    goto L_0882F228;
L_0882F228:;
    a1 = D_08B459D0 - (22992);
    goto L_0882F22C;
L_0882F22C:;
    a0 = s1 + 0;
    a1 = a1 + 22992;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F240;
L_0882F240:;
    a1 = D_08B459D4 - (22996);
    a0 = s1 + 0;
    a1 = a1 + 22996;
    a2 = 12;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F258;
L_0882F258:;
    a1 = D_08B459E0 - (23008);
    a0 = s1 + 0;
    a1 = a1 + 23008;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F270;
L_0882F270:;
    a1 = D_08B459E4 - (23012);
    a0 = s1 + 0;
    a1 = a1 + 23012;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F288;
L_0882F288:;
    a1 = D_08B459E8 - (23016);
    a0 = s1 + 0;
    a1 = a1 + 23016;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F2A0;
L_0882F2A0:;
    a0 = s1 + 0;
    a1 = sp + 64;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F2B4;
L_0882F2B4:;
    a1 = sp + 68;
    a2 = 4;
    a3 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F2C8;
L_0882F2C8:;
    v1 = LD32(sp+64);
    v0 = D_08AEB708 - (-18680);
    f4 = BITSF(LD32(v0-18680));
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    f2 = BITSF(v0);
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    f3 = BITSF(v0);
    v0 = (v1 >> 8) & 0xff;
    v1 = v1 & 0xff;
    f6 = BITSF(v0);
    f5 = BITSF(v1);
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f5);
    f3 = (float)(s32)FBITS(f6);
    f0 = f0 * f4;
    f1 = f1 * f4;
    f2 = f2 * f4;
    f3 = f3 * f4;
    a0 = sp + 48;
    ST32(sp+52, FBITS(f1));
    ST32(sp+48, FBITS(f2));
    ST32(sp+56, FBITS(f0));
    ST32(sp+60, FBITS(f3));
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+32, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    func_088EEC44(a0);
    goto L_0882F344;
L_0882F344:;
    f12 = BITSF(LD32(sp+68));
    func_088EEC38(f12);
    goto L_0882F34C;
L_0882F34C:;
    a1 = D_08B459EC - (23020);
    a0 = s1 + 0;
    a1 = a1 + 23020;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F364;
L_0882F364:;
    a1 = D_08B459F0 - (23024);
    a0 = s1 + 0;
    a1 = a1 + 23024;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F37C;
L_0882F37C:;
    v0 = 1;
    sp = sp + 96;
    return v0;
L_0882F394:;
    a1 = sp + 0;
    a2 = 24;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F3A4;
L_0882F3A4:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08B459D0 - (22992); goto L_0882F22C; }
    goto L_0882F3B0;
L_0882F3B0:;
    a1 = v0 << 3;
    a1 = a1 + v0;
    a1 = a1 << 2;
    a0 = s1 + 0;
    { u64 r_ = func_0887ADB4(a0, a1, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F3C4;
L_0882F3C4:;
    a1 = D_08B459D0 - (22992);
    goto L_0882F22C;
}

/* 0882F3CC */
rv_t func_0882F3CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F3CC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 8192;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882F3E4;
L_0882F3E4:;
    ST32(s0+316, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0882F3F8 */
u64 func_0882F3F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F3F8:;
    sp = sp - 16;
    v0 = LD32(a0+316);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882F418; }
    goto L_0882F40C;
L_0882F40C:;
    goto L_0882F410;
L_0882F410:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0882F418:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F420;
L_0882F420:;
    goto L_0882F410;
}

/* 0882F428 */
void func_0882F428(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F428:;
    sp = sp - 16;
    v0 = a1 + 0;
    s0 = a0 + 0;
    a1 = a0 + 8;
    ST32(a0, 0);
    a2 = 308;
    ST32(s0+4, v0);
    a0 = v0 + 0;
    v0 = func_088FB774(a0, a1, a2, t1, t2, t3);
    goto L_0882F454;
L_0882F454:;
    a0 = s0 + 0;
    func_0882F46C(a0);
    goto L_0882F45C;
L_0882F45C:;
    sp = sp + 16;
    return;
}

/* 0882F46C */
void func_0882F46C(u32 a0)
{
    u32 a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F46C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a1 = s0 + 60;
    a2 = LD32(a0+316);
    a0 = a0 + 16;
    func_0882F67C(a0, a1, a2);
    goto L_0882F48C;
L_0882F48C:;
    ST8(s0+348, 0);
    ST32(s0+320, 0);
    ST32(s0+324, 0);
    ST32(s0+328, 0);
    ST32(s0+332, 0);
    ST32(s0+336, 0);
    ST32(s0+340, 0);
    ST32(s0+344, 0);
    sp = sp + 16;
    return;
}

/* 0882F4BC */
void func_0882F4BC(void)
{
L_0882F4BC:;
    return;
}

/* 0882F4C4 */
u32 func_0882F4C4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_0882F4C4:;
    sp = sp - 32;
    s4 = a2 + 0;
    s2 = a1 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD_U8(a0+348);
    cnd_ = v0 != 0;
    s3 = LD32(a0+316);
    if (cnd_) { goto L_0882F5E0; }
    goto L_0882F4FC;
L_0882F4FC:;
    v0 = 1;
    ST8(a0+348, v0);
    v1 = LD32(a0+320);
    a3 = LD32(a0+332);
    v0 = LD32(s0+328);
    goto L_0882F510;
L_0882F510:;
    a2 = LD32(s0+324);
    a0 = v1 + v0;
    v1 = 31;
    v1 = v1 - a0;
    a1 = a3 << (v1 & 31);
    v0 = (s32)a2 < (s32)v1;
    ST32(s0+320, a0);
    ST32(s0+340, v1);
    cnd_ = v0 == 0;
    ST32(s0+332, a1);
    if (cnd_) { goto L_0882F5A8; }
    goto L_0882F538;
L_0882F538:;
    v0 = v1 - a2;
    v1 = a0 + a2;
    ST32(s0+340, v0);
    cnd_ = a2 == 0;
    ST32(s0+320, v1);
    if (cnd_) { goto L_0882F564; }
    goto L_0882F54C;
L_0882F54C:;
    v0 = LD32(s0+336);
    a0 = 0 - a2;
    v1 = a1 >> (a2 & 31);
    v0 = v0 << (a0 & 31);
    v1 = v1 | v0;
    ST32(s0+332, v1);
    goto L_0882F564;
L_0882F564:;
    a0 = LD32(s0+344);
    v0 = LD32(s0+8);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+336, 0); goto L_0882F594; }
    goto L_0882F578;
L_0882F578:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_0882F668; }
    goto L_0882F584;
L_0882F584:;
    v1 = LD32(v0);
    v0 = v0 + 4;
    ST32(s0, v0);
    ST32(s0+336, v1);
    goto L_0882F594;
L_0882F594:;
    v0 = a0 + 4;
    ST32(s0+344, v0);
    v0 = 32;
    a2 = 32;
    ST32(s0+324, v0);
    goto L_0882F5A8;
L_0882F5A8:;
    a0 = LD32(s0+340);
    a1 = LD32(s0+336);
    v1 = LD32(s0+332);
    v0 = 0 - a0;
    v0 = a1 << (v0 & 31);
    v1 = v1 >> (a0 & 31);
    v1 = v1 | v0;
    a2 = a2 - a0;
    a1 = a1 >> (a0 & 31);
    v0 = 31;
    ST32(s0+332, v1);
    ST32(s0+336, a1);
    ST32(s0+324, a2);
    ST32(s0+320, v0);
    goto L_0882F5E0;
L_0882F5E0:;
    a0 = LD32(s0+332);
    a1 = LD32(s0+320);
    v0 = a0 & 0xffe;
    v0 = v0 << 1;
    a2 = s3 + v0;
    v1 = LD_U8(a2);
    a3 = a0 + 0;
    v0 = a1 - v1;
    a0 = a0 >> (v1 & 31);
    ST32(s0+328, v1);
    cnd_ = (s32)v0 < 0;
    ST32(s0+320, v0);
    if (cnd_) { goto L_0882F650; }
    goto L_0882F610;
L_0882F610:;
    ST32(s0+332, a0);
    v0 = LD_U8(a2+1);
    ST8(s1, v0);
    s1 = s1 + 1;
    v0 = s1 - s2;
    cnd_ = v0 != s4;
    v1 = v0 + 0;
    if (cnd_) { goto L_0882F5E0; }
    goto L_0882F62C;
L_0882F62C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0882F650:;
    v1 = v0 + 0;
    v0 = (s32)v0 < -31;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+328); goto L_0882F510; }
    goto L_0882F660;
L_0882F660:;
    v1 = s1 - s2;
    goto L_0882F62C;
L_0882F668:;
    a1 = s0 + 336;
    a2 = 4;
    v0 = func_088FB774(a0, a1, a2, t1, t2, t3);
    goto L_0882F674;
L_0882F674:;
    a0 = LD32(s0+344);
    goto L_0882F594;
}

/* 0882F67C */
void func_0882F67C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F67C:;
    sp = sp - 16;
    s0 = a1 + 0;
    t3 = 0 + 0;
    a1 = 0 + 0;
    t8 = 2048;
    t9 = 1;
    t7 = 4;
    t6 = s0 + 255;
    goto L_0882F6A0;
L_0882F6A0:;
    v0 = LD32(a0);
    goto L_0882F6A4;
L_0882F6A4:;
    a1 = a1 + 1;
    t7 = t7 << 1;
    t5 = v0 + 0;
    t9 = t9 << 1;
    t8 = (u32)((s32)t8 >> 1);
    cnd_ = v0 == 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0882F6A0; }
    goto L_0882F6C0;
L_0882F6C0:;
    t4 = t9 << 2;
    v0 = t6 < s0;
    goto L_0882F6C8;
L_0882F6C8:;
    cnd_ = v0 != 0;
    a3 = 255;
    if (cnd_) { goto L_0882F6E0; }
    goto L_0882F6D0;
L_0882F6D0:;
    v0 = LD_U8(t6);
    t6 = t6 - 1;
    v0 = v0 << 8;
    a3 = a1 | v0;
    goto L_0882F6E0;
L_0882F6E0:;
    v0 = t3 + 0;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = a2 + v0;
    v1 = t8 + 0;
    t2 = (u32)((s32)a3 >> 8);
    t1 = (u32)((s32)a3 >> 16);
    t0 = (u32)((s32)a3 >> 24);
    goto L_0882F6FC;
L_0882F6FC:;
    v1 = v1 - 1;
    ST8(v0, a3);
    ST8(v0+1, t2);
    ST8(v0+2, t1);
    ST8(v0+3, t0);
    cnd_ = v1 != 0;
    v0 = v0 + t4;
    if (cnd_) { goto L_0882F6FC; }
    goto L_0882F718;
L_0882F718:;
    a3 = t7 + 0;
    a3 = (u32)((s32)a3 >> 1);
    goto L_0882F720;
L_0882F720:;
    t3 = t3 ^ a3;
    v0 = a3 & 0x3;
    cnd_ = v0 != 0;
    v1 = t3 & a3;
    if (cnd_) { goto L_0882F74C; }
    goto L_0882F730;
L_0882F730:;
    cnd_ = v1 == 0;
    if (cnd_) { a3 = (u32)((s32)a3 >> 1); goto L_0882F720; }
    goto L_0882F738;
L_0882F738:;
    t5 = t5 - 1;
    cnd_ = t5 != 0;
    if (cnd_) { v0 = t6 < s0; goto L_0882F6C8; }
    goto L_0882F744;
L_0882F744:;
    v0 = LD32(a0);
    goto L_0882F6A4;
L_0882F74C:;
    sp = sp + 16;
    return;
}

/* 0882F758 */
void func_0882F758(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F758:;
    { s64 p_ = (s64)(s32)a1 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a3 + 0;
    v0 = lo;
    a1 = lo;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0882F794; }
    goto L_0882F77C;
L_0882F77C:;
    ST32(s0, 0);
    goto L_0882F780;
L_0882F780:;
    v0 = 1;
    sp = sp + 16;
    return;
L_0882F794:;
    { rv_t r_ = func_088F9AB0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882F79C;
L_0882F79C:;
    ST32(s0, v0);
    goto L_0882F780;
}

/* 0882F7A4 */
void func_0882F7A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F7A4:;
    sp = sp - 16;
    v1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0882F7D8; }
    goto L_0882F7C4;
L_0882F7C4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_0882F7D8:;
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882F7E0;
L_0882F7E0:;
    ST32(s0, 0);
    v1 = 1;
    goto L_0882F7C4;
}

/* 0882F7EC */
u64 func_0882F7EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_0882F7EC:;
    a3 = D_08B15A18 - (23064);
    v0 = LD32(a3+23064);
    v1 = D_08B23208 - (12808);
    a2 = a0 + 0;
    a1 = v0 + 1;
    a0 = a1 << 2;
    v1 = v1 + 12808;
    v0 = (s32)v0 < 15;
    cnd_ = v0 == 0;
    a0 = a0 + v1;
    if (cnd_) { goto L_0882F81C; }
    goto L_0882F814;
L_0882F814:;
    ST32(a0, a2);
    ST32(a3+23064, a1);
    goto L_0882F81C;
L_0882F81C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0882F824 */
u64 func_0882F824(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0882F824:;
    a1 = D_08B15A18 - (23064);
    v0 = LD32(a1+23064);
    v1 = D_08B23208 - (12808);
    v1 = v1 + 12808;
    a0 = v0 << 2;
    a0 = a0 + v1;
    a2 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_0882F854; }
    goto L_0882F848;
L_0882F848:;
    v0 = LD32(a0);
    ST32(a1+23064, v1);
    a2 = v0 + 0;
    goto L_0882F854;
L_0882F854:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0882F85C */
void func_0882F85C(u32 a0)
{
L_0882F85C:;
    ST32(a0, 0);
    return;
}

/* 0882F864 */
void func_0882F864(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F864:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F87C;
L_0882F87C:;
    a0 = s0 + 0;
    func_08AA6494(a0, 0, 0, 0);
    goto L_0882F884;
L_0882F884:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882F88C;
L_0882F88C:;
    sp = sp + 16;
    return;
}

/* 0882F89C */
void func_0882F89C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882F89C:;
    sp = sp - 16;
    t0 = a1 + 0;
    t1 = a2 + 0;
    v1 = LD32(a0);
    v0 = a0 + 4;
    a1 = 0 + 0;
    a2 = v0 + 0;
    ST32(a0+28, t1);
    cnd_ = v1 != 0;
    ST32(a0+32, t0);
    if (cnd_) { goto L_0882F974; }
    goto L_0882F8C8;
L_0882F8C8:;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(t0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0882F95C; }
    goto L_0882F8E0;
L_0882F8E0:;
    f1 = BITSF(LD32(t0));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_0882F95C; }
    goto L_0882F8F8;
L_0882F8F8:;
    f1 = BITSF(LD32(t0+12));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0882F95C; }
    goto L_0882F910;
L_0882F910:;
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0882F95C; }
    goto L_0882F928;
L_0882F928:;
    f1 = BITSF(LD32(t0+20));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0882F95C; }
    goto L_0882F940;
L_0882F940:;
    f1 = BITSF(LD32(t0+16));
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_0882F964; }
    goto L_0882F958;
L_0882F958:;
    goto L_0882F95C;
L_0882F95C:;
    sp = sp + 16;
    return;
L_0882F964:;
    t_ = t1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882F96C;
L_0882F96C:;
    goto L_0882F95C;
L_0882F974:;
    v0 = func_0882F984(a0, a1, a2);
    goto L_0882F97C;
L_0882F97C:;
    goto L_0882F95C;
}

/* 0882F984 */
u32 func_0882F984(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_0882F984:;
    sp = sp - 80;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    s2 = sp + 32;
    a1 = a2 + 0;
    s0 = a0 + 0;
    a2 = sp + 0;
    a3 = s2 + 0;
    v1 = LD32(a0);
    s1 = v1 + v0;
    a0 = s1 + 0;
    func_08830B58(a0, a1, a2, a3);
    goto L_0882F9C8;
L_0882F9C8:;
    v0 = LD32(s0+32);
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+32)); goto L_0882FAEC; }
    goto L_0882F9E4;
L_0882F9E4:;
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(sp+4));
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+32)); goto L_0882FAEC; }
    goto L_0882F9FC;
L_0882F9FC:;
    f5 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(sp+8));
    fcc = FCMP(f4, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+32)); goto L_0882FAEC; }
    goto L_0882FA14;
L_0882FA14:;
    f6 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(sp+12));
    fcc = FCMP(f6, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+32)); goto L_0882FAEC; }
    goto L_0882FA2C;
L_0882FA2C:;
    f9 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(sp+16));
    fcc = FCMP(f8, f9, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+32)); goto L_0882FAEC; }
    goto L_0882FA44;
L_0882FA44:;
    f10 = BITSF(LD32(v0+16));
    f11 = BITSF(LD32(sp+20));
    fcc = FCMP(f10, f11, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(sp+32)); goto L_0882FAEC; }
    goto L_0882FA5C;
L_0882FA5C:;
    v0 = LD_U16(s1+10);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_0882FC48; }
    goto L_0882FA6C;
L_0882FA6C:;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+6); goto L_0882FACC; }
    goto L_0882FA7C;
L_0882FA7C:;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+6); goto L_0882FACC; }
    goto L_0882FA8C;
L_0882FA8C:;
    fcc = FCMP(f6, f4, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+6); goto L_0882FACC; }
    goto L_0882FA9C;
L_0882FA9C:;
    fcc = FCMP(f7, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+6); goto L_0882FACC; }
    goto L_0882FAAC;
L_0882FAAC:;
    fcc = FCMP(f10, f8, 14);
    cnd_ = !fcc;
    a1 = LD_U16(s1+6);
    if (cnd_) { goto L_0882FACC; }
    goto L_0882FABC;
L_0882FABC:;
    fcc = FCMP(f11, f9, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0882FC38; }
    goto L_0882FACC;
L_0882FACC:;
    a0 = s0 + 0;
    a2 = sp + 0;
    v0 = func_0882F984(a0, a1, a2);
    goto L_0882FAD8;
L_0882FAD8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882FBFC; }
    goto L_0882FAE0;
L_0882FAE0:;
    v0 = LD32(s0+32);
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(sp+32));
    goto L_0882FAEC;
L_0882FAEC:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0882FBFC; }
    goto L_0882FAFC;
L_0882FAFC:;
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(sp+36));
    fcc = FCMP(f2, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0882FBFC; }
    goto L_0882FB14;
L_0882FB14:;
    f5 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(sp+40));
    fcc = FCMP(f4, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0882FBFC; }
    goto L_0882FB2C;
L_0882FB2C:;
    f6 = BITSF(LD32(v0+8));
    f7 = BITSF(LD32(sp+44));
    fcc = FCMP(f6, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0882FBFC; }
    goto L_0882FB44;
L_0882FB44:;
    f9 = BITSF(LD32(v0+20));
    f8 = BITSF(LD32(sp+48));
    fcc = FCMP(f8, f9, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0882FBFC; }
    goto L_0882FB5C;
L_0882FB5C:;
    f10 = BITSF(LD32(v0+16));
    f11 = BITSF(LD32(sp+52));
    fcc = FCMP(f10, f11, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0882FBFC; }
    goto L_0882FB74;
L_0882FB74:;
    v0 = LD_U16(s1+10);
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_0882FC28; }
    goto L_0882FB84;
L_0882FB84:;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+8); goto L_0882FBE4; }
    goto L_0882FB94;
L_0882FB94:;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+8); goto L_0882FBE4; }
    goto L_0882FBA4;
L_0882FBA4:;
    fcc = FCMP(f6, f4, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+8); goto L_0882FBE4; }
    goto L_0882FBB4;
L_0882FBB4:;
    fcc = FCMP(f7, f5, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(s1+8); goto L_0882FBE4; }
    goto L_0882FBC4;
L_0882FBC4:;
    fcc = FCMP(f10, f8, 14);
    cnd_ = !fcc;
    a1 = LD_U16(s1+8);
    if (cnd_) { goto L_0882FBE4; }
    goto L_0882FBD4;
L_0882FBD4:;
    fcc = FCMP(f11, f9, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0882FC18; }
    goto L_0882FBE4;
L_0882FBE4:;
    a0 = s0 + 0;
    a2 = s2 + 0;
    v0 = func_0882F984(a0, a1, a2);
    goto L_0882FBF0;
L_0882FBF0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882FBFC; }
    goto L_0882FBF8;
L_0882FBF8:;
    v1 = 1;
    goto L_0882FBFC;
L_0882FBFC:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
L_0882FC18:;
    a0 = s0 + 0;
    v0 = func_0882FC58(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882FC20;
L_0882FC20:;
    goto L_0882FBF0;
L_0882FC28:;
    t_ = v0;
    a0 = LD_U16(s1+8);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FC30;
L_0882FC30:;
    goto L_0882FBF0;
L_0882FC38:;
    a0 = s0 + 0;
    v0 = func_0882FC58(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882FC40;
L_0882FC40:;
    goto L_0882FAD8;
L_0882FC48:;
    t_ = v0;
    a0 = LD_U16(s1+6);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FC50;
L_0882FC50:;
    goto L_0882FAD8;
}

/* 0882FC58 */
u32 func_0882FC58(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_0882FC58:;
    sp = sp - 16;
    v1 = a1 << 1;
    v1 = v1 + a1;
    v1 = v1 << 2;
    a2 = LD32(a0);
    s0 = a2 + v1;
    v0 = LD_U16(s0+10);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0882FCF0; }
    goto L_0882FC8C;
L_0882FC8C:;
    v0 = LD32(s1+28);
    t_ = v0;
    a0 = LD_U16(s0+6);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FC98;
L_0882FC98:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882FCC8; }
    goto L_0882FCA0;
L_0882FCA0:;
    v0 = LD_U16(s0+10);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0882FCE0; }
    goto L_0882FCB0;
L_0882FCB0:;
    v0 = LD32(s1+28);
    t_ = v0;
    a0 = LD_U16(s0+8);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FCBC;
L_0882FCBC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0882FCC8; }
    goto L_0882FCC4;
L_0882FCC4:;
    v1 = 1;
    goto L_0882FCC8;
L_0882FCC8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0882FCE0:;
    a1 = LD_U16(s0+8);
    v0 = func_0882FC58(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0882FCE8;
L_0882FCE8:;
    goto L_0882FCBC;
L_0882FCF0:;
    a1 = LD_U16(s0+6);
    v0 = func_0882FC58(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0882FCF8;
L_0882FCF8:;
    goto L_0882FC98;
}

/* 0882FD00 */
u32 func_0882FD00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_0882FD00:;
    sp = sp - 64;
    s2 = a0 + 0;
    a0 = 1;
    s7 = D_08B2325C - (12892);
    s4 = a1 + 0;
    s1 = s2 - 1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FD44;
L_0882FD44:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FD4C;
L_0882FD4C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0882F85C(a0);
    goto L_0882FD58;
L_0882FD58:;
    v0 = (s32)s2 < 2;
    cnd_ = v0 == 0;
    ST32(s7+12892, s0);
    if (cnd_) { goto L_08830000; }
    goto L_0882FD64;
L_0882FD64:;
    s5 = s2 << 1;
    goto L_0882FD68;
L_0882FD68:;
    s0 = s5 + s2;
    a0 = s0 << 3;
    s0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FD78;
L_0882FD78:;
    a0 = s0 + 0;
    s3 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FD84;
L_0882FD84:;
    s6 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0882FDA0; }
    goto L_0882FD94;
L_0882FD94:;
    a1 = a1 - 1;
    goto L_0882FD98;
L_0882FD98:;
    cnd_ = a1 != v0;
    a1 = a1 - 1;
    if (cnd_) { goto L_0882FD98; }
    goto L_0882FDA0;
L_0882FDA0:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    t_ = s4;
    a2 = s6 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FDB0;
L_0882FDB0:;
    cnd_ = v0 != 0;
    v0 = D_08B23254 - (12884);
    if (cnd_) { goto L_0882FE2C; }
    goto L_0882FDB8;
L_0882FDB8:;
    cnd_ = (s32)s2 <= 0;
    v0 = D_08AEB72C - (-18644);
    if (cnd_) { goto L_0882FE28; }
    goto L_0882FDC0;
L_0882FDC0:;
    f6 = BITSF(LD32(v0-18644));
    v1 = s6 + 0;
    v0 = s3 + 0;
    a0 = s2 + 0;
    goto L_0882FDD0;
L_0882FDD0:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+16));
    f3 = BITSF(LD32(v0+20));
    f0 = f0 + f5;
    f1 = f1 + f4;
    f2 = f2 + f3;
    a0 = a0 - 1;
    f0 = f0 * f6;
    f1 = f1 * f6;
    f2 = f2 * f6;
    v0 = v0 + 24;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(v1, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(v1+8, FBITS(f2));
    cnd_ = a0 != 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_0882FDD0; }
    goto L_0882FE28;
L_0882FE28:;
    v0 = D_08B23254 - (12884);
    goto L_0882FE2C;
L_0882FE2C:;
    s4 = D_08B23258 - (12888);
    ST32(v0+12884, s6);
    v0 = 1;
    cnd_ = s2 == v0;
    ST32(s4+12888, s3);
    if (cnd_) { goto L_0882FFC8; }
    goto L_0882FE40;
L_0882FE40:;
    a0 = LD32(s7+12892);
    v0 = D_08AEB730 - (-18640);
    v1 = D_08AEB734 - (-18636);
    f0 = BITSF(LD32(v0-18640));
    f1 = BITSF(LD32(v1-18636));
    v0 = a0 + 4;
    fp = (s32)0 < (s32)s2;
    ST32(v0+20, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(v0+16, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    cnd_ = fp == 0;
    ST32(v0+12, FBITS(f1));
    if (cnd_) { goto L_0882FEA0; }
    goto L_0882FE78;
L_0882FE78:;
    s1 = 0 + 0;
    s0 = s2 + 0;
    goto L_0882FE80;
L_0882FE80:;
    a0 = LD32(s7+12892);
    a1 = LD32(s4+12888);
    s0 = s0 - 1;
    a0 = a0 + 4;
    a1 = a1 + s1;
    f0 = func_08AA1680(a0, a1);
    goto L_0882FE98;
L_0882FE98:;
    cnd_ = s0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_0882FE80; }
    goto L_0882FEA0;
L_0882FEA0:;
    a0 = s5 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FEA8;
L_0882FEA8:;
    s0 = D_08B23248 - (12872);
    a0 = s5 + 0;
    ST32(s0+12872, v0);
    s4 = D_08B2324C - (12876);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FEBC;
L_0882FEBC:;
    a0 = s2 + 0;
    ST32(s4+12876, v0);
    s1 = D_08B23250 - (12880);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0882FECC;
L_0882FECC:;
    ST32(s1+12880, v0);
    cnd_ = fp == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0882FEF0; }
    goto L_0882FED8;
L_0882FED8:;
    v1 = LD32(s0+12872);
    goto L_0882FEDC;
L_0882FEDC:;
    ST16(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s2;
    cnd_ = v0 != 0;
    v1 = v1 + 2;
    if (cnd_) { goto L_0882FEDC; }
    goto L_0882FEF0;
L_0882FEF0:;
    a2 = LD32(s7+12892);
    a0 = 0 + 0;
    v0 = D_08B23260 - (12896);
    a2 = a2 + 4;
    a1 = s2 + 0;
    a3 = a2 + 0;
    ST16(v0+12896, 0);
    func_08830014(a0, a1, a2, a3);
    goto L_0882FF10;
L_0882FF10:;
    a0 = LD32(s1+12880);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882FFB8; }
    goto L_0882FF1C;
L_0882FF1C:;
    a0 = LD32(s4+12876);
    goto L_0882FF20;
L_0882FF20:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882FFA8; }
    goto L_0882FF28;
L_0882FF28:;
    a0 = LD32(s0+12872);
    goto L_0882FF2C;
L_0882FF2C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0882FF98; }
    goto L_0882FF34;
L_0882FF34:;
    cnd_ = s6 != 0;
    if (cnd_) { goto L_0882FF88; }
    goto L_0882FF3C;
L_0882FF3C:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_0882FF4C; }
    goto L_0882FF44;
L_0882FF44:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FF4C;
L_0882FF4C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FF54;
L_0882FF54:;
    v0 = LD32(s7+12892);
    sp = sp + 64;
    return v0;
L_0882FF88:;
    a0 = s6 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FF90;
L_0882FF90:;
    goto L_0882FF3C;
L_0882FF98:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FFA0;
L_0882FFA0:;
    goto L_0882FF34;
L_0882FFA8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FFB0;
L_0882FFB0:;
    a0 = LD32(s0+12872);
    goto L_0882FF2C;
L_0882FFB8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0882FFC0;
L_0882FFC0:;
    a0 = LD32(s4+12876);
    goto L_0882FF20;
L_0882FFC8:;
    v0 = LD32(s3);
    a0 = LD32(s7+12892);
    ST32(a0+4, v0);
    v1 = LD32(s3+4);
    ST32(a0+8, v1);
    v0 = LD32(s3+8);
    ST32(a0+12, v0);
    v1 = LD32(s3+12);
    ST32(a0+16, v1);
    v0 = LD32(s3+16);
    ST32(a0+20, v0);
    v1 = LD32(s3+20);
    ST32(a0+24, v1);
    goto L_0882FF34;
L_08830000:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08AA581C(a0, a1, 0, 0, 0);
    goto L_0883000C;
L_0883000C:;
    s5 = s2 << 1;
    goto L_0882FD68;
}

/* 08830014 */
void func_08830014(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 384);
L_08830014:;
    sp = sp - 384;
    v0 = D_08B2325C - (12892);
    fp = 0 + 0;
    s4 = sp + 48;
    s3 = sp + 128;
    t0 = LD32(v0+12892);
    v0 = D_08B23260 - (12896);
    t1 = LD_U16(v0+12896);
    t2 = LD32(t0);
    v0 = D_08AEB738 - (-18632);
    v1 = t1 << 1;
    v1 = v1 + t1;
    v1 = v1 << 2;
    f23 = BITSF(LD32(v0-18632));
    t1 = D_08AEB73C - (-18628);
    v0 = D_08AEB740 - (-18624);
    s7 = t2 + v1;
    v1 = (s32)a0 < (s32)a1;
    f22 = BITSF(LD32(t1-18628));
    f21 = BITSF(LD32(v0-18624));
    ST32(sp+272, a0);
    t0 = a3 + 0;
    ST32(sp+276, a1);
    ST32(sp+280, a2);
    ST32(sp+288, v1);
    ST32(sp+292, 0);
    ST32(sp+296, sp);
    goto L_088300B8;
L_088300B8:;
    a0 = 1;
    v0 = a0 << (fp & 31);
    v0 = v0 & 0xff;
    cnd_ = fp == a0;
    ST32(sp+284, v0);
    if (cnd_) { goto L_08830A9C; }
    goto L_088300CC;
L_088300CC:;
    v0 = (s32)fp < 2;
    cnd_ = v0 != 0;
    a1 = LD32(sp+280);
    if (cnd_) { goto L_088300E4; }
    goto L_088300D8;
L_088300D8:;
    v0 = 2;
    cnd_ = fp == v0;
    t1 = LD32(sp+280);
    if (cnd_) { goto L_08830A90; }
    goto L_088300E4;
L_088300E4:;
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1));
    goto L_088300EC;
L_088300EC:;
    v0 = LD32(sp+296);
    s0 = LD32(sp+272);
    f0 = f0 + f1;
    ST32(v0+16, 0);
    s5 = fp << 2;
    ST32(v0+32, 0);
    ST32(s4, FBITS(f22));
    ST32(s4+8, FBITS(f22));
    ST32(s4+16, FBITS(f22));
    ST32(s4+4, FBITS(f21));
    ST32(s4+12, FBITS(f21));
    ST32(s4+20, FBITS(f21));
    ST32(s3, FBITS(f22));
    ST32(s3+8, FBITS(f22));
    ST32(s3+16, FBITS(f22));
    ST32(s3+4, FBITS(f21));
    ST32(s3+12, FBITS(f21));
    ST32(s3+20, FBITS(f21));
    v1 = LD32(sp+288);
    cnd_ = v1 == 0;
    f20 = f0 * f23;
    if (cnd_) { goto L_088301EC; }
    goto L_08830140;
L_08830140:;
    a0 = LD32(sp+284);
    s1 = LD32(sp+296);
    s2 = LD32(sp+292);
    s6 = ~(0 | a0);
    goto L_08830150;
L_08830150:;
    a1 = D_08B23248 - (12872);
    a0 = LD32(a1+12872);
    v0 = s0 << 1;
    a3 = D_08B23254 - (12884);
    v0 = v0 + a0;
    a1 = LD_U16(v0);
    v1 = LD32(a3+12884);
    t1 = sp + 128;
    v0 = a1 << 1;
    v0 = v0 + a1;
    a2 = v0 << 3;
    v0 = v0 << 2;
    v1 = v1 + v0;
    v1 = s5 + v1;
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    a0 = t1 + s2;
    if (cnd_) { goto L_08830A50; }
    goto L_0883019C;
L_0883019C:;
    v0 = D_08B23258 - (12888);
    a1 = LD32(v0+12888);
    v0 = LD32(s1+16);
    ST32(sp+304, t0);
    a1 = a1 + a2;
    v0 = v0 + 1;
    ST32(s1+16, v0);
    f0 = func_08AA1680(a0, a1);
    goto L_088301BC;
L_088301BC:;
    a0 = D_08B23250 - (12880);
    v1 = LD32(a0+12880);
    a1 = LD32(sp+284);
    v1 = v1 + s0;
    v0 = LD_U8(v1);
    v0 = a1 | v0;
    goto L_088301D4;
L_088301D4:;
    ST8(v1, v0);
    s0 = s0 + 1;
    a1 = LD32(sp+276);
    v0 = (s32)s0 < (s32)a1;
    cnd_ = v0 != 0;
    t0 = LD32(sp+304);
    if (cnd_) { goto L_08830150; }
    goto L_088301EC;
L_088301EC:;
    v1 = s5 + sp;
    f5 = BITSF(0);
    a0 = LD32(v1+16);
    cnd_ = a0 == 0;
    f6 = f5;
    if (cnd_) { goto L_0883022C; }
    goto L_08830200;
L_08830200:;
    f3 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f1 = BITSF(LD32(s3+12));
    f4 = BITSF(LD32(s3+8));
    f2 = f2 - f3;
    f0 = BITSF(LD32(s3+20));
    f1 = f1 - f4;
    f3 = BITSF(LD32(s3+16));
    f2 = f2 * f1;
    f0 = f0 - f3;
    f5 = f2 * f0;
    goto L_0883022C;
L_0883022C:;
    v0 = LD32(v1+32);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08830264; }
    goto L_08830238;
L_08830238:;
    f3 = BITSF(LD32(s4));
    f2 = BITSF(LD32(s4+4));
    f1 = BITSF(LD32(s4+12));
    f4 = BITSF(LD32(s4+8));
    f2 = f2 - f3;
    f0 = BITSF(LD32(s4+20));
    f1 = f1 - f4;
    f3 = BITSF(LD32(s4+16));
    f2 = f2 * f1;
    f0 = f0 - f3;
    f6 = f2 * f0;
    goto L_08830264;
L_08830264:;
    f1 = BITSF(v0);
    f2 = BITSF(a0);
    v0 = D_08AEB744 - (-18620);
    f0 = (float)(s32)FBITS(f1);
    f1 = (float)(s32)FBITS(f2);
    f2 = BITSF(LD32(v0-18620));
    a0 = LD32(sp+296);
    f0 = f0 * f0;
    f1 = f1 * f1;
    a1 = LD32(sp+292);
    fp = fp + 1;
    a0 = a0 + 4;
    f0 = f0 + f1;
    a1 = a1 + 24;
    v0 = (s32)fp < 3;
    ST32(sp+296, a0);
    f0 = f0 * f2;
    s3 = s3 + 24;
    ST32(sp+292, a1);
    s4 = s4 + 24;
    f0 = f0 + f6;
    f0 = f0 + f5;
    cnd_ = v0 != 0;
    ST32(v1, FBITS(f0));
    if (cnd_) { goto L_088300B8; }
    goto L_088302C4;
L_088302C4:;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    s4 = 2;
    if (cnd_) { goto L_08830A34; }
    goto L_088302DC;
L_088302DC:;
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 0 + 0; goto L_088302F0; }
    goto L_088302F0;
L_088302F0:;
    s5 = s4 << 2;
    goto L_088302F4;
L_088302F4:;
    v1 = s5 + sp;
    v0 = LD32(v1+32);
    cnd_ = v0 == 0;
    a3 = LD32(sp+288);
    if (cnd_) { goto L_08830314; }
    goto L_08830304;
L_08830304:;
    v0 = LD32(v1+16);
    cnd_ = v0 != 0;
    a0 = LD32(sp+288);
    if (cnd_) { goto L_088309A4; }
    goto L_08830310;
L_08830310:;
    a3 = LD32(sp+288);
    goto L_08830314;
L_08830314:;
    a1 = LD32(sp+272);
    cnd_ = a3 == 0;
    s6 = D_08B2324C - (12876);
    if (cnd_) { goto L_08830350; }
    goto L_08830320;
L_08830320:;
    t1 = D_08B23248 - (12872);
    a3 = LD32(t1+12872);
    a2 = LD32(s6+12876);
    goto L_0883032C;
L_0883032C:;
    v1 = a1 << 1;
    v0 = v1 + a3;
    t1 = LD32(sp+276);
    a0 = LD_U16(v0);
    a1 = a1 + 1;
    v1 = v1 + a2;
    v0 = (s32)a1 < (s32)t1;
    cnd_ = v0 != 0;
    ST16(v1, a0);
    if (cnd_) { goto L_0883032C; }
    goto L_08830350;
L_08830350:;
    v0 = D_08AEB73C - (-18628);
    v1 = D_08AEB740 - (-18624);
    s3 = s4 << 1;
    f20 = BITSF(LD32(v0-18628));
    f21 = BITSF(LD32(v1-18624));
    v0 = s3 + s4;
    a3 = LD32(sp+272);
    s2 = v0 << 3;
    a0 = sp + 48;
    v1 = a0 + s2;
    s0 = s5 + sp;
    a0 = LD32(s6+12876);
    v0 = 1;
    ST32(s0+32, v0);
    a1 = a3 << 1;
    a1 = a1 + a0;
    ST32(v1, FBITS(f20));
    t1 = D_08B23258 - (12888);
    a0 = v1 + 0;
    ST32(v1+8, FBITS(f20));
    s1 = a3 + 1;
    ST32(v1+16, FBITS(f20));
    ST32(v1+4, FBITS(f21));
    ST32(v1+12, FBITS(f21));
    ST32(v1+20, FBITS(f21));
    a2 = LD_U16(a1);
    a1 = LD32(t1+12888);
    ST32(sp+304, t0);
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 3;
    a1 = a1 + v0;
    f0 = func_08AA1680(a0, a1);
    goto L_088303D4;
L_088303D4:;
    v1 = LD32(sp+276);
    a0 = LD32(sp+272);
    a1 = sp + 128;
    a3 = LD32(sp+276);
    v0 = v1 - a0;
    v0 = v0 - 1;
    v1 = a1 + s2;
    ST32(s0+16, v0);
    a0 = (s32)s1 < (s32)a3;
    ST32(v1+20, FBITS(f21));
    ST32(v1+16, FBITS(f20));
    ST32(v1, FBITS(f20));
    ST32(v1+8, FBITS(f20));
    ST32(v1+4, FBITS(f21));
    ST32(v1+12, FBITS(f21));
    cnd_ = a0 == 0;
    t0 = LD32(sp+304);
    if (cnd_) { goto L_08830468; }
    goto L_08830418;
L_08830418:;
    s0 = s2 + 0;
    goto L_0883041C;
L_0883041C:;
    a0 = LD32(s6+12876);
    v0 = s1 << 1;
    t1 = D_08B23258 - (12888);
    v0 = v0 + a0;
    v1 = LD_U16(v0);
    v0 = sp + 128;
    a1 = LD32(t1+12888);
    a0 = v0 + s0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 3;
    a1 = a1 + v0;
    ST32(sp+304, t0);
    f0 = func_08AA1680(a0, a1);
    goto L_08830454;
L_08830454:;
    s1 = s1 + 1;
    v1 = LD32(sp+276);
    v0 = (s32)s1 < (s32)v1;
    cnd_ = v0 != 0;
    t0 = LD32(sp+304);
    if (cnd_) { goto L_0883041C; }
    goto L_08830468;
L_08830468:;
    a0 = LD32(sp+288);
    goto L_0883046C;
L_0883046C:;
    cnd_ = a0 == 0;
    a1 = LD32(sp+272);
    if (cnd_) { goto L_088304A8; }
    goto L_08830474;
L_08830474:;
    s6 = D_08B2324C - (12876);
    t1 = D_08B23248 - (12872);
    a3 = LD32(t1+12872);
    a2 = LD32(s6+12876);
    goto L_08830484;
L_08830484:;
    v1 = a1 << 1;
    v0 = v1 + a2;
    t1 = LD32(sp+276);
    a0 = LD_U16(v0);
    a1 = a1 + 1;
    v1 = v1 + a3;
    v0 = (s32)a1 < (s32)t1;
    cnd_ = v0 != 0;
    ST16(v1, a0);
    if (cnd_) { goto L_08830484; }
    goto L_088304A8;
L_088304A8:;
    f1 = BITSF(LD32(t0+4));
    f0 = BITSF(LD32(t0));
    f4 = BITSF(0);
    f3 = BITSF(LD32(t0+12));
    f5 = f1 - f0;
    f2 = BITSF(LD32(t0+8));
    f1 = BITSF(LD32(t0+20));
    f0 = BITSF(LD32(t0+16));
    fcc = FCMP(f5, f4, 14);
    f3 = f3 - f2;
    cnd_ = !fcc;
    f6 = f1 - f0;
    if (cnd_) { goto L_088304E0; }
    goto L_088304D8;
L_088304D8:;
    v0 = D_08AEB748 - (-18616);
    f5 = BITSF(LD32(v0-18616));
    goto L_088304E0;
L_088304E0:;
    fcc = FCMP(f3, f4, 14);
    cnd_ = !fcc;
    v0 = D_08AEB748 - (-18616);
    if (cnd_) { goto L_088304F4; }
    goto L_088304F0;
L_088304F0:;
    f3 = BITSF(LD32(v0-18616));
    goto L_088304F4;
L_088304F4:;
    fcc = FCMP(f6, f4, 14);
    cnd_ = !fcc;
    v0 = s3 + s4;
    if (cnd_) { goto L_08830510; }
    goto L_08830504;
L_08830504:;
    v0 = D_08AEB748 - (-18616);
    f6 = BITSF(LD32(v0-18616));
    v0 = s3 + s4;
    goto L_08830510;
L_08830510:;
    v0 = v0 << 3;
    v1 = v0 + sp;
    v0 = LD32(sp+280);
    f1 = BITSF(LD32(v1+48));
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD_U16(s7+10);
    if (cnd_) { goto L_08830970; }
    goto L_08830534;
L_08830534:;
    a1 = D_08AEB74C - (-18612);
    f2 = BITSF(LD32(a1-18612));
    v0 = v0 | 0x1;
    ST16(s7+10, v0);
    f0 = BITSF(LD32(v1+48));
    f1 = BITSF(LD32(t0));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f5;
    f1 = BITSF(F2I(f0, 1));
    v1 = FBITS(f1);
    ST8(s7, v1);
    goto L_08830564;
L_08830564:;
    v0 = s3 + s4;
    v0 = v0 << 3;
    a3 = LD32(sp+280);
    a0 = v0 + sp;
    v1 = a0 + 48;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a3+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD_U16(s7+10);
    if (cnd_) { goto L_08830940; }
    goto L_08830590;
L_08830590:;
    f2 = BITSF(LD32(a1-18612));
    v0 = v0 | 0x8;
    ST16(s7+10, v0);
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(t0+4));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f5;
    f1 = BITSF(F2I(f0, 1));
    t1 = FBITS(f1);
    ST8(s7+3, t1);
    goto L_088305BC;
L_088305BC:;
    v0 = s3 + s4;
    v0 = v0 << 3;
    a3 = LD32(sp+280);
    a0 = v0 + sp;
    v1 = a0 + 48;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a3+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD_U16(s7+10);
    if (cnd_) { goto L_08830910; }
    goto L_088305E8;
L_088305E8:;
    f2 = BITSF(LD32(a1-18612));
    v0 = v0 | 0x2;
    ST16(s7+10, v0);
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(v1+8));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f3;
    f1 = BITSF(F2I(f0, 1));
    t1 = FBITS(f1);
    ST8(s7+1, t1);
    goto L_08830614;
L_08830614:;
    v0 = s3 + s4;
    v0 = v0 << 3;
    a3 = LD32(sp+280);
    a0 = v0 + sp;
    v1 = a0 + 48;
    f1 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(a3+12));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD_U16(s7+10);
    if (cnd_) { goto L_088308E0; }
    goto L_08830640;
L_08830640:;
    f2 = BITSF(LD32(a1-18612));
    v0 = v0 | 0x10;
    ST16(s7+10, v0);
    f1 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(t0+12));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f3;
    f1 = BITSF(F2I(f0, 1));
    t1 = FBITS(f1);
    ST8(s7+4, t1);
    goto L_0883066C;
L_0883066C:;
    v0 = s3 + s4;
    a0 = LD32(sp+280);
    v0 = v0 << 3;
    v1 = v0 + sp;
    f1 = BITSF(LD32(v1+64));
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD_U16(s7+10);
    if (cnd_) { goto L_088308B0; }
    goto L_08830694;
L_08830694:;
    f2 = BITSF(LD32(a1-18612));
    v0 = v0 | 0x4;
    ST16(s7+10, v0);
    f1 = BITSF(LD32(t0+16));
    f0 = BITSF(LD32(v1+64));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f6;
    f1 = BITSF(F2I(f0, 1));
    a3 = FBITS(f1);
    ST8(s7+2, a3);
    goto L_088306C0;
L_088306C0:;
    v0 = s3 + s4;
    v0 = v0 << 3;
    a0 = v0 + sp;
    v0 = LD32(sp+280);
    v1 = a0 + 64;
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v0+20));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v0 = LD_U16(s7+10);
    if (cnd_) { goto L_08830880; }
    goto L_088306EC;
L_088306EC:;
    f2 = BITSF(LD32(a1-18612));
    v0 = v0 | 0x20;
    ST16(s7+10, v0);
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(t0+20));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f6;
    f1 = BITSF(F2I(f0, 1));
    v1 = FBITS(f1);
    ST8(s7+5, v1);
    goto L_08830718;
L_08830718:;
    s0 = sp + 208;
    s1 = sp + 240;
    a0 = s7 + 0;
    a1 = t0 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    func_08830B58(a0, a1, a2, a3);
    goto L_08830734;
L_08830734:;
    a0 = s5 + sp;
    v1 = LD32(a0+32);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(s7+10); goto L_08830858; }
    goto L_08830748;
L_08830748:;
    v0 = LD_U16(s7+10);
    a3 = D_08B23260 - (12896);
    v1 = LD_U16(a3+12896);
    v0 = (v0 & ~(0x1u << 6)) | ((0 & 0x1) << 6);
    ST16(s7+10, v0);
    v1 = v1 + 1;
    a2 = s3 + s4;
    a1 = LD32(a0+32);
    v0 = LD32(sp+272);
    ST16(a3+12896, v1);
    a2 = a2 << 3;
    t1 = sp + 48;
    ST16(s7+6, v1);
    a2 = t1 + a2;
    a1 = v0 + a1;
    a3 = s0 + 0;
    a0 = v0 + 0;
    func_08830014(a0, a1, a2, a3);
    goto L_08830790;
L_08830790:;
    s0 = s5 + sp;
    v1 = LD32(s0+16);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(s7+10); goto L_08830830; }
    goto L_088307A4;
L_088307A4:;
    v0 = LD_U16(s7+10);
    a0 = D_08B23260 - (12896);
    v1 = LD_U16(a0+12896);
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST16(s7+10, v0);
    v1 = v1 + 1;
    a1 = D_08B23260 - (12896);
    a0 = LD32(s0+32);
    t1 = LD32(sp+272);
    ST16(a1+12896, v1);
    a2 = s3 + s4;
    a3 = sp + 128;
    ST16(s7+8, v1);
    a2 = a2 << 3;
    a2 = a3 + a2;
    a1 = LD32(sp+276);
    a0 = t1 + a0;
    a3 = s1 + 0;
    func_08830014(a0, a1, a2, a3);
    goto L_088307F0;
L_088307F0:;
    sp = sp + 384;
    return;
L_08830830:;
    v0 = D_08B2324C - (12876);
    a0 = LD32(v0+12876);
    v1 = v1 | 0x80;
    ST16(s7+10, v1);
    v1 = LD32(sp+276);
    v0 = v1 << 1;
    v0 = v0 + a0;
    v1 = LD_U16(v0-2);
    ST16(s7+8, v1);
    goto L_088307F0;
L_08830858:;
    v0 = D_08B2324C - (12876);
    a0 = LD32(v0+12876);
    v1 = v1 | 0x40;
    ST16(s7+10, v1);
    a1 = LD32(sp+272);
    v0 = a1 << 1;
    v0 = v0 + a0;
    v1 = LD_U16(v0);
    ST16(s7+6, v1);
    goto L_08830790;
L_08830880:;
    f2 = BITSF(LD32(a1-18612));
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    ST16(s7+10, v0);
    f1 = BITSF(LD32(a0+148));
    f0 = BITSF(LD32(t0+20));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f6;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    ST8(s7+5, a0);
    goto L_08830718;
L_088308B0:;
    f2 = BITSF(LD32(a1-18612));
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST16(s7+10, v0);
    f1 = BITSF(LD32(t0+16));
    f0 = BITSF(LD32(v1+144));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f6;
    f1 = BITSF(F2I(f0, 1));
    t1 = FBITS(f1);
    ST8(s7+2, t1);
    goto L_088306C0;
L_088308E0:;
    f2 = BITSF(LD32(a1-18612));
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST16(s7+10, v0);
    f1 = BITSF(LD32(a0+140));
    f0 = BITSF(LD32(t0+12));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f3;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    ST8(s7+4, v0);
    goto L_0883066C;
L_08830910:;
    f2 = BITSF(LD32(a1-18612));
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST16(s7+10, v0);
    f1 = BITSF(LD32(t0+8));
    f0 = BITSF(LD32(a0+136));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f3;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    ST8(s7+1, v0);
    goto L_08830614;
L_08830940:;
    f2 = BITSF(LD32(a1-18612));
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST16(s7+10, v0);
    f1 = BITSF(LD32(a0+132));
    f0 = BITSF(LD32(t0+4));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f5;
    f1 = BITSF(F2I(f0, 1));
    v0 = FBITS(f1);
    ST8(s7+3, v0);
    goto L_088305BC;
L_08830970:;
    a1 = D_08AEB74C - (-18612);
    f2 = BITSF(LD32(a1-18612));
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST16(s7+10, v0);
    f1 = BITSF(LD32(t0));
    f0 = BITSF(LD32(v1+128));
    f0 = f0 - f1;
    f0 = f0 * f2;
    f0 = f0 / f5;
    f1 = BITSF(F2I(f0, 1));
    a0 = FBITS(f1);
    ST8(s7, a0);
    goto L_08830564;
L_088309A4:;
    v0 = 1;
    v0 = v0 << (s4 & 31);
    t2 = v0 & 0xff;
    a2 = LD32(sp+272);
    cnd_ = a0 == 0;
    s3 = s4 << 1;
    if (cnd_) { goto L_08830468; }
    goto L_088309BC;
L_088309BC:;
    a3 = D_08B23248 - (12872);
    a1 = LD32(a3+12872);
    s6 = D_08B2324C - (12876);
    a3 = LD32(sp+276);
    a0 = LD32(s6+12876);
    v0 = D_08B23250 - (12880);
    v1 = a2 << 1;
    t1 = LD32(v0+12880);
    v0 = a3 << 1;
    a3 = v0 + a0;
    a1 = v1 + a1;
    a0 = v1 + a0;
    goto L_088309EC;
L_088309EC:;
    v1 = t1 + a2;
    v0 = LD_U8(v1);
    v0 = v0 & t2;
    cnd_ = v0 == 0;
    v1 = LD_U16(a1);
    if (cnd_) { goto L_08830A28; }
    goto L_08830A00;
L_08830A00:;
    a3 = a3 - 2;
    ST16(a3, v1);
    goto L_08830A08;
L_08830A08:;
    v1 = LD32(sp+276);
    a2 = a2 + 1;
    a1 = a1 + 2;
    v0 = (s32)a2 < (s32)v1;
    cnd_ = v0 != 0;
    s3 = s4 << 1;
    if (cnd_) { goto L_088309EC; }
    goto L_08830A20;
L_08830A20:;
    a0 = LD32(sp+288);
    goto L_0883046C;
L_08830A28:;
    ST16(a0, v1);
    a0 = a0 + 2;
    goto L_08830A08;
L_08830A34:;
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 1; goto L_088302F0; }
    goto L_08830A48;
L_08830A48:;
    s5 = s4 << 2;
    goto L_088302F4;
L_08830A50:;
    v0 = LD32(s1+32);
    t1 = D_08B23258 - (12888);
    a1 = LD32(t1+12888);
    v0 = v0 + 1;
    ST32(s1+32, v0);
    v1 = sp + 48;
    a0 = v1 + s2;
    a1 = a1 + a2;
    ST32(sp+304, t0);
    f0 = func_08AA1680(a0, a1);
    goto L_08830A78;
L_08830A78:;
    a0 = D_08B23250 - (12880);
    v1 = LD32(a0+12880);
    v1 = v1 + s0;
    v0 = LD_U8(v1);
    v0 = v0 & s6;
    goto L_088301D4;
L_08830A90:;
    f0 = BITSF(LD32(t1+20));
    f1 = BITSF(LD32(t1+16));
    goto L_088300EC;
L_08830A9C:;
    a3 = LD32(sp+280);
    f0 = BITSF(LD32(a3+12));
    f1 = BITSF(LD32(a3+8));
    goto L_088300EC;
}

/* 08830AAC */
void func_08830AAC(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08830AAC:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a0 + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    f0 = func_0882DAD8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08830AD0;
L_08830AD0:;
    a1 = s0 + 1;
    a0 = s1 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08830ADC;
L_08830ADC:;
    a1 = s0 + 2;
    a0 = s1 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08830AE8;
L_08830AE8:;
    a1 = s0 + 3;
    a0 = s1 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08830AF4;
L_08830AF4:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08830B00;
L_08830B00:;
    a1 = s0 + 5;
    a0 = s1 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08830B0C;
L_08830B0C:;
    a1 = s0 + 6;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08830B18;
L_08830B18:;
    a1 = s0 + 8;
    a0 = s1 + 0;
    s0 = s0 + 10;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08830B28;
L_08830B28:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f0 = func_0882DAD8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08830B34;
L_08830B34:;
    a1 = LD32(s1+20);
    a0 = s1 + 0;
    a1 = a1 & 0x1;
    { rv_t r_ = func_0882D824(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08830B44;
L_08830B44:;
    sp = sp + 16;
    return;
}

/* 08830B58 */
void func_08830B58(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
L_08830B58:;
    f4 = BITSF(LD32(a1));
    v0 = D_08AEB750 - (-18608);
    f5 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(v0-18608));
    v0 = LD_U8(a0);
    f3 = f5 - f4;
    f8 = BITSF(LD32(a1+16));
    f0 = BITSF(v0);
    f7 = BITSF(LD32(a1+12));
    f9 = f3 * f2;
    f1 = (float)(s32)FBITS(f0);
    f6 = BITSF(LD32(a1+8));
    f10 = BITSF(LD32(a1+20));
    v0 = LD_U16(a0+10);
    f1 = f1 * f9;
    f0 = f10 - f8;
    f3 = f7 - f6;
    v0 = v0 & 0x1;
    f11 = f0 * f2;
    f2 = f3 * f2;
    cnd_ = v0 == 0;
    f0 = f4 + f1;
    if (cnd_) { goto L_08830CC0; }
    goto L_08830BB0;
L_08830BB0:;
    ST32(a2, FBITS(f0));
    ST32(a3, FBITS(f4));
    goto L_08830BB8;
L_08830BB8:;
    v0 = LD_U8(a0+3);
    f1 = BITSF(v0);
    v0 = LD_U16(a0+10);
    f0 = (float)(s32)FBITS(f1);
    v0 = v0 & 0x8;
    f0 = f0 * f9;
    cnd_ = v0 == 0;
    f3 = f5 - f0;
    if (cnd_) { goto L_08830CB4; }
    goto L_08830BD8;
L_08830BD8:;
    ST32(a2+4, FBITS(f3));
    ST32(a3+4, FBITS(f5));
    goto L_08830BE0;
L_08830BE0:;
    v0 = LD_U8(a0+1);
    f1 = BITSF(v0);
    v0 = LD_U16(a0+10);
    f0 = (float)(s32)FBITS(f1);
    v0 = v0 & 0x2;
    f0 = f0 * f2;
    cnd_ = v0 == 0;
    f0 = f6 + f0;
    if (cnd_) { goto L_08830CA8; }
    goto L_08830C00;
L_08830C00:;
    ST32(a2+8, FBITS(f0));
    ST32(a3+8, FBITS(f6));
    goto L_08830C08;
L_08830C08:;
    v0 = LD_U8(a0+4);
    f1 = BITSF(v0);
    v0 = LD_U16(a0+10);
    f0 = (float)(s32)FBITS(f1);
    v0 = v0 & 0x10;
    f0 = f0 * f2;
    cnd_ = v0 == 0;
    f3 = f7 - f0;
    if (cnd_) { goto L_08830C9C; }
    goto L_08830C28;
L_08830C28:;
    ST32(a2+12, FBITS(f3));
    ST32(a3+12, FBITS(f7));
    goto L_08830C30;
L_08830C30:;
    v0 = LD_U8(a0+2);
    f1 = BITSF(v0);
    v0 = LD_U16(a0+10);
    f0 = (float)(s32)FBITS(f1);
    v0 = v0 & 0x4;
    f0 = f0 * f11;
    cnd_ = v0 == 0;
    f0 = f8 + f0;
    if (cnd_) { goto L_08830C90; }
    goto L_08830C50;
L_08830C50:;
    ST32(a2+16, FBITS(f0));
    ST32(a3+16, FBITS(f8));
    goto L_08830C58;
L_08830C58:;
    v0 = LD_U8(a0+5);
    f1 = BITSF(v0);
    v0 = LD_U16(a0+10);
    f0 = (float)(s32)FBITS(f1);
    v0 = v0 & 0x20;
    f0 = f0 * f11;
    cnd_ = v0 == 0;
    f0 = f10 - f0;
    if (cnd_) { goto L_08830C84; }
    goto L_08830C78;
L_08830C78:;
    ST32(a2+20, FBITS(f0));
    ST32(a3+20, FBITS(f10));
    return;
L_08830C84:;
    ST32(a2+20, FBITS(f10));
    ST32(a3+20, FBITS(f0));
    return;
L_08830C90:;
    ST32(a2+16, FBITS(f8));
    ST32(a3+16, FBITS(f0));
    goto L_08830C58;
L_08830C9C:;
    ST32(a2+12, FBITS(f7));
    ST32(a3+12, FBITS(f3));
    goto L_08830C30;
L_08830CA8:;
    ST32(a2+8, FBITS(f6));
    ST32(a3+8, FBITS(f0));
    goto L_08830C08;
L_08830CB4:;
    ST32(a2+4, FBITS(f5));
    ST32(a3+4, FBITS(f3));
    goto L_08830BE0;
L_08830CC0:;
    ST32(a2, FBITS(f4));
    ST32(a3, FBITS(f0));
    goto L_08830BB8;
}

/* 08830CCC */
void func_08830CCC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08830CCC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08830CEC;
L_08830CEC:;
    ST32(s0+12, v0);
    a0 = s0 + 0;
    ST32(s0+8, s1);
    func_08830D40(a0);
    goto L_08830CFC;
L_08830CFC:;
    sp = sp + 16;
    return;
}

/* 08830D10 */
u64 func_08830D10(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08830D10:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08830D30; }
    goto L_08830D24;
L_08830D24:;
    goto L_08830D28;
L_08830D28:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08830D30:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08830D38;
L_08830D38:;
    goto L_08830D28;
}

/* 08830D40 */
void func_08830D40(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_08830D40:;
    sp = sp - 16;
    a1 = 0 + 0;
    s0 = a0 + 0;
    a2 = LD32(s0+8);
    a0 = LD32(a0+12);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08830D60;
L_08830D60:;
    ST32(s0+4, 0);
    ST32(s0, 0);
    sp = sp + 16;
    return;
}

/* 08830D78 */
void func_08830D78(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_08830D78:;
    v1 = LD32(a0);
    a3 = LD32(a0+12);
    t3 = 32;
    v0 = v1 & 0x7;
    v0 = 0 - v0;
    t0 = a1 + 0;
    t2 = a2 + 0;
    a1 = v1 + a2;
    t1 = v0 & 0x7;
    a2 = t3 - a2;
    v1 = v1 >> 3;
    ST32(a0, a1);
    a3 = a3 + v1;
    cnd_ = t1 == 0;
    t0 = t0 << (a2 & 31);
    if (cnd_) { goto L_08830DD8; }
    goto L_08830DB4;
L_08830DB4:;
    v0 = LD_U8(a3);
    v1 = t3 - t1;
    v1 = t0 >> (v1 & 31);
    a0 = t2 < t1;
    v0 = v0 | v1;
    if (a0 == 0) t2 = t1;
    ST8(a3, v0);
    t0 = t0 << (t2 & 31);
    a3 = a3 + 1;
    goto L_08830DD8;
L_08830DD8:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08830DF4; }
    goto L_08830DE0;
L_08830DE0:;
    v0 = t0 >> 24;
    t0 = t0 << 8;
    ST8(a3, v0);
    cnd_ = t0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08830DE0; }
    goto L_08830DF4;
L_08830DF4:;
    return;
}

/* 08830DFC */
void func_08830DFC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
L_08830DFC:;
    v0 = LD32(a0);
    v1 = LD32(a0+12);
    v0 = v0 + 7;
    v0 = v0 >> 3;
    ST32(a2, v0);
    ST32(a1, v1);
    return;
}

/* 08830E18 */
void func_08830E18(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0;
L_08830E18:;
    v0 = LD32(a0+12);
    v0 = v0 + a1;
    ST8(v0, a2);
    return;
}
