#include "game.h"
#include "../../platform/common/game_hooks.h"   /* native hook (tools/dc/hooks.py) */

/* 088BA5D4 */
rv_t func_088BA5D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BA5D4:;
    sp = sp - 32;
    s1 = a0 + 0;
    a3 = LD32(a0);
    cnd_ = a3 == a1;
    s0 = a1 + 0;
    if (cnd_) { goto L_088BA71C; }
    goto L_088BA5FC;
L_088BA5FC:;
    ST32(s1, a1);
    v1 = a1 ^ 0x1;
    v1 = v1 < 0x1u;
    a0 = LD32(a0+12);
    a2 = a1 < 0x1u;
    a1 = a1 ^ 0x3;
    v0 = LD32(a0+248);
    v0 = (v0 & ~(0x1u << 6)) | ((v1 & 0x1) << 6);
    ST32(a0+248, v0);
    v1 = a3 < 0x1u;
    s2 = v1 | a2;
    a0 = LD32(s1+12);
    a1 = a1 < 0x1u;
    v0 = LD32(a0+248);
    v0 = (v0 & ~(0x1u << 4)) | ((a2 & 0x1) << 4);
    ST32(a0+248, v0);
    v1 = LD32(s1+12);
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 5)) | ((a1 & 0x1) << 5);
    ST32(v1+248, v0);
    a0 = LD32(s1+12);
    func_088C3A04(a0, t1, t2, t3);
    goto L_088BA654;
L_088BA654:;
    v0 = LD32(s1+12);
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    {u32 a_=v0+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(s1+12);
    v1 = LD32(a0+240);
    cnd_ = v1 == 0;
    v0 = LD32(a0+244);
    if (cnd_) { goto L_088BA678; }
    goto L_088BA670;
L_088BA670:;
    ST32(v1+244, v0);
    v0 = LD32(a0+244);
    goto L_088BA678;
L_088BA678:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (s32)s0 < 3; goto L_088BA68C; }
    goto L_088BA680;
L_088BA680:;
    ST32(v0, v1);
    a0 = LD32(s1+12);
    v0 = (s32)s0 < 3;
    goto L_088BA68C;
L_088BA68C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 3; goto L_088BA78C; }
    goto L_088BA694;
L_088BA694:;
    cnd_ = (s32)s0 <= 0;
    a1 = D_08B2BED0 - (-16688);
    if (cnd_) { goto L_088BA74C; }
    goto L_088BA69C;
L_088BA69C:;
    v1 = LD32(a1-16688);
    cnd_ = v1 == 0;
    a2 = a1 - 16688;
    if (cnd_) { goto L_088BA6B0; }
    goto L_088BA6A8;
L_088BA6A8:;
    v0 = a0 + 240;
    ST32(v1+244, v0);
    goto L_088BA6B0;
L_088BA6B0:;
    ST32(a0+240, v1);
    f0 = BITSF(0);
    ST32(a1-16688, a0);
    ST32(a0+244, a2);
    a0 = LD32(s1+12);
    v0 = LD32(a0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(a0+376)); goto L_088BA6D4; }
    goto L_088BA6D4;
L_088BA6D4:;
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    v0 = D_08AEC6A8 - (-14680);
    if (cnd_) { goto L_088BA738; }
    goto L_088BA6E8;
L_088BA6E8:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BA700; }
    goto L_088BA6F8;
L_088BA6F8:;
    ST32(a0+352, FBITS(f20));
    ST32(a0+248, v1);
    goto L_088BA700;
L_088BA700:;
    a0 = LD32(s1+12);
    { rv_t r_ = func_088C2C94(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA708;
L_088BA708:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088BA720; }
    goto L_088BA710;
L_088BA710:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    goto L_088BA71C;
L_088BA71C:;
    goto L_088BA720;
L_088BA720:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088BA738:;
    a0 = LD32(s1+12);
    f12 = BITSF(LD32(v0-14680));
    { rv_t r_ = func_088C2C74(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA744;
L_088BA744:;
    a0 = LD32(s1+12);
    goto L_088BA6E8;
L_088BA74C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088BA69C; }
    goto L_088BA754;
L_088BA754:;
    a1 = D_08B2BED8 - (-16680);
    v1 = LD32(a1-16680);
    cnd_ = v1 == 0;
    a2 = a1 - 16680;
    if (cnd_) { goto L_088BA76C; }
    goto L_088BA764;
L_088BA764:;
    v0 = a0 + 240;
    ST32(v1+244, v0);
    goto L_088BA76C;
L_088BA76C:;
    ST32(a0+240, v1);
    ST32(a1-16680, a0);
    ST32(a0+244, a2);
    v1 = LD32(s1+12);
    v0 = LD32(v1+248);
    v0 = v0 | 0x1;
    ST32(v1+248, v0);
    goto L_088BA700;
L_088BA78C:;
    cnd_ = s0 != v0;
    a1 = D_08B2BED0 - (-16688);
    if (cnd_) { goto L_088BA69C; }
    goto L_088BA794;
L_088BA794:;
    a1 = D_08B2BED4 - (-16684);
    v1 = LD32(a1-16684);
    cnd_ = v1 == 0;
    a2 = a1 - 16684;
    if (cnd_) { goto L_088BA7AC; }
    goto L_088BA7A4;
L_088BA7A4:;
    v0 = a0 + 240;
    ST32(v1+244, v0);
    goto L_088BA7AC;
L_088BA7AC:;
    ST32(a0+240, v1);
    ST32(a1-16684, a0);
    ST32(a0+244, a2);
    a0 = LD32(s1+12);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BA700; }
    goto L_088BA7CC;
L_088BA7CC:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BA700;
}

/* 088BA7D8 */
rv_t func_088BA7D8(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BA7D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088BA814; }
    goto L_088BA7EC;
L_088BA7EC:;
    v1 = LD32(a0+8);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088BA804; }
    goto L_088BA7FC;
L_088BA7FC:;
    func_088C37A0(a0);
    goto L_088BA804;
L_088BA804:;
    v0 = D_08B2BE40 - (-16832);
    a1 = LD32(s0+4);
    a0 = LD32(v0-16832);
    { rv_t r_ = func_08AB57F4(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BA814;
L_088BA814:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BA824 */
rv_t func_088BA824(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BA824:;
    sp = sp - 16;
    s2 = a0 + 20;
    s1 = a0 + 0;
    s0 = LD32(a0+12);
    a0 = s0 + 0;
    { u64 r_ = func_088C9D8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BA84C;
L_088BA84C:;
    f1 = BITSF(LD32(s0+192));
    s0 = s0 + 192;
    v0 = s2 + 0;
    ST32(s1+20, FBITS(f1));
    f0 = BITSF(LD32(s0+4));
    ST32(s2+4, FBITS(f0));
    f1 = BITSF(LD32(s0+8));
    ST32(s2+8, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BA884 */
rv_t func_088BA884(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BA884:;
    a1 = LD32(a0+12);
    t1 = a0 + 32;
    sp = sp - 16;
    v0 = LD32(a1+248);
    a2 = a0 + 0;
    t2 = t1 + 0;
    v0 = v0 & 0x2000;
    a3 = a1 + 16;
    cnd_ = v0 != 0;
    t0 = a1 + 32;
    if (cnd_) { goto L_088BAA14; }
    goto L_088BA8AC;
L_088BA8AC:;
    v1 = LD32(a1);
    ST32(sp, v1);
    v0 = LD32(a1+4);
    f0 = BITSF(LD32(sp));
    ST32(sp+4, v0);
    v1 = LD32(a1+8);
    ST32(sp+8, v1);
    a0 = LD32(a1+12);
    ST32(a2+32, FBITS(f0));
    ST32(sp+12, a0);
    v0 = LD32(a1+16);
    ST32(sp, v0);
    v1 = LD32(a3+4);
    f0 = BITSF(LD32(sp));
    ST32(sp+4, v1);
    v0 = LD32(a3+8);
    ST32(sp+8, v0);
    v1 = LD32(a3+12);
    ST32(t1+4, FBITS(f0));
    ST32(sp+12, v1);
    v0 = LD32(a1+32);
    ST32(sp, v0);
    v1 = LD32(t0+4);
    f0 = BITSF(LD32(sp));
    ST32(sp+4, v1);
    v0 = LD32(t0+8);
    ST32(sp+8, v0);
    v1 = LD32(t0+12);
    ST32(t1+8, FBITS(f0));
    ST32(sp+12, v1);
    v0 = LD32(a1);
    ST32(sp, v0);
    v1 = LD32(a1+4);
    ST32(sp+4, v1);
    v0 = LD32(a1+8);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+8, v0);
    v1 = LD32(a1+12);
    ST32(t1+12, FBITS(f0));
    ST32(sp+12, v1);
    v0 = LD32(a1+16);
    ST32(sp, v0);
    v1 = LD32(a3+4);
    ST32(sp+4, v1);
    v0 = LD32(a3+8);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+8, v0);
    v1 = LD32(a3+12);
    ST32(t1+16, FBITS(f0));
    ST32(sp+12, v1);
    v0 = LD32(a1+32);
    ST32(sp, v0);
    v1 = LD32(t0+4);
    ST32(sp+4, v1);
    v0 = LD32(t0+8);
    f0 = BITSF(LD32(sp+4));
    ST32(sp+8, v0);
    v1 = LD32(t0+12);
    ST32(t1+20, FBITS(f0));
    ST32(sp+12, v1);
    v0 = LD32(a1);
    ST32(sp, v0);
    v1 = LD32(a1+4);
    ST32(sp+4, v1);
    v0 = LD32(a1+8);
    ST32(sp+8, v0);
    v1 = LD32(a1+12);
    ST32(sp+12, v1);
    f0 = BITSF(LD32(sp+8));
    ST32(t1+24, FBITS(f0));
    v0 = LD32(a1+16);
    ST32(sp, v0);
    v1 = LD32(a3+4);
    ST32(sp+4, v1);
    v0 = LD32(a3+8);
    ST32(sp+8, v0);
    v1 = LD32(a3+12);
    f0 = BITSF(LD32(sp+8));
    ST32(sp+12, v1);
    ST32(t1+28, FBITS(f0));
    v0 = LD32(a1+32);
    ST32(sp, v0);
    v1 = LD32(t0+4);
    ST32(sp+4, v1);
    v0 = LD32(t0+8);
    ST32(sp+8, v0);
    v1 = LD32(t0+12);
    f0 = BITSF(LD32(sp+8));
    ST32(sp+12, v1);
    ST32(t1+32, FBITS(f0));
    goto L_088BAA14;
L_088BAA14:;
    v0 = t2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BAA20 */
rv_t func_088BAA20(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BAA20:;
    v0 = D_08B2BC44 - (-17340);
    f1 = BITSF(LD32(v0-17340));
    a2 = D_08B2BE48 - (-16824);
    v0 = D_08AEC6AC - (-14676);
    f0 = BITSF(LD32(v0-14676));
    v1 = (u32)(s32)LD_S8(a2-16824);
    a3 = D_08B2BE50 - (-16816);
    sp = sp - 16;
    f3 = f0 / f1;
    cnd_ = v1 != 0;
    a1 = a3 - 16816;
    if (cnd_) { goto L_088BAA54; }
    goto L_088BAA4C;
L_088BAA4C:;
    v0 = 1;
    ST8(a2-16824, v0);
    goto L_088BAA54;
L_088BAA54:;
    v1 = LD32(a0+12);
    v0 = a1 + 0;
    {u32 a_=v1+(224);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=v1+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f2 = BITSF(LD32(sp+8));
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f2 = f2 * f3;
    f1 = f1 * f3;
    f0 = f0 * f3;
    ST32(a1+8, FBITS(f2));
    ST32(a3-16816, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;
}

/* 088BAA98 */
u32 func_088BAA98(u32 a0)
{
    u32 v0 = 0;
L_088BAA98:;
    v0 = LD32(a0+12);
    v0 = v0 + 328;
    return v0;
}

/* 088BAAA4 */
rv_t func_088BAAA4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BAAA4:;
    sp = sp - 32;
    v1 = a1 + 0;
    a1 = sp + 0;
    a2 = LD32(a0+12);
    v0 = LD32(a2+248);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_088BAAF0; }
    goto L_088BAAC8;
L_088BAAC8:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    { rv_t r_ = func_088C69A0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BAAE4;
L_088BAAE4:;
    goto L_088BAAE8;
L_088BAAE8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088BAAF0:;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    a1 = sp + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    { rv_t r_ = func_088C6B34(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BAB10;
L_088BAB10:;
    goto L_088BAAE8;
}

/* 088BAB18 */
rv_t func_088BAB18(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BAB18:;
    sp = sp - 32;
    f2 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    a0 = LD32(a0+12);
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_088C6B34(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BAB44;
L_088BAB44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088BAB50 */
rv_t func_088BAB50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_088BAB50:;
    sp = sp - 80;
    a2 = a0 + 0;
    t0 = a1 + 0;
    a0 = LD32(a0+12);
    v1 = a2 + 32;
    v0 = LD32(a0+248);
    v0 = v0 & 0x2000;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_088BABCC; }
    goto L_088BAB78;
L_088BAB78:;
    f8 = BITSF(LD32(t0+32));
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f3 = BITSF(LD32(t0+12));
    f4 = BITSF(LD32(t0+16));
    f5 = BITSF(LD32(t0+20));
    f6 = BITSF(LD32(t0+24));
    f7 = BITSF(LD32(t0+28));
    ST32(a2+32, FBITS(f0));
    ST32(v1+32, FBITS(f8));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    goto L_088BABC4;
L_088BABC4:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088BABCC:;
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+12));
    f2 = BITSF(LD32(t0+24));
    f3 = BITSF(LD32(t0+4));
    f4 = BITSF(LD32(t0+16));
    f5 = BITSF(LD32(t0+28));
    f6 = BITSF(LD32(t0+32));
    ST32(sp+48, FBITS(f0));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    a3 = LD32(sp+48);
    ST32(sp+48, FBITS(f3));
    f0 = BITSF(LD32(t0+8));
    f1 = BITSF(LD32(t0+20));
    ST32(sp+4, v0);
    v0 = LD32(sp+48);
    ST32(sp+48, FBITS(f0));
    ST32(sp+16, v0);
    v0 = LD32(sp+56);
    a2 = LD32(sp+60);
    ST32(sp+8, v1);
    ST32(sp+24, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+48);
    ST32(sp, a3);
    ST32(sp+20, v1);
    ST32(sp+12, a2);
    ST32(sp+28, a2);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f6));
    ST32(sp+32, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    ST32(sp+44, a2);
    ST32(sp+36, v1);
    ST32(sp+40, v0);
    { rv_t r_ = func_088C67C4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BAC70;
L_088BAC70:;
    goto L_088BABC4;
}

/* 088BAC78 */
u64 func_088BAC78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088BAC78:;
    v0 = 1;
    v1 = (s32)a1 < 2;
    cnd_ = a1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088BAD14; }
    goto L_088BAC88;
L_088BAC88:;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(a2+12); goto L_088BACAC; }
    goto L_088BAC90;
L_088BAC90:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+12); goto L_088BAD08; }
    goto L_088BAC9C;
L_088BAC9C:;
    v0 = 3;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+12); goto L_088BACDC; }
    goto L_088BACA8;
L_088BACA8:;
    v1 = LD32(a2+12);
    goto L_088BACAC;
L_088BACAC:;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 13)) | ((0 & 0x1) << 13);
    goto L_088BACB4;
L_088BACB4:;
    ST32(v1+248, v0);
    a0 = LD32(a2+12);
    v0 = LD32(a0+248);
    v0 = (v0 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    goto L_088BACC4;
L_088BACC4:;
    ST32(a0+248, v0);
    v1 = LD32(a2+12);
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 15)) | ((0 & 0x1) << 15);
    goto L_088BACD4;
L_088BACD4:;
    ST32(v1+248, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_088BACDC:;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 13)) | ((0 & 0x1) << 13);
    ST32(v1+248, v0);
    a0 = LD32(a0+12);
    v0 = LD32(a0+248);
    v0 = (v0 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    ST32(a0+248, v0);
    v1 = LD32(a2+12);
    v0 = LD32(v1+248);
    v0 = v0 | 0x8000;
    goto L_088BACD4;
L_088BAD08:;
    v0 = LD32(v1+248);
    v0 = v0 | 0x2000;
    goto L_088BACB4;
L_088BAD14:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 13)) | ((0 & 0x1) << 13);
    ST32(v1+248, v0);
    a0 = LD32(a0+12);
    v0 = LD32(a0+248);
    v0 = v0 | 0x4000;
    goto L_088BACC4;
}

/* 088BAD34 */
rv_t func_088BAD34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088BAD34:;
    sp = sp - 48;
    v0 = D_08B2BC44 - (-17340);
    s0 = a0 + 0;
    v1 = a1 + 0;
    a1 = sp + 16;
    a2 = LD32(a0+12);
    f3 = BITSF(LD32(v0-17340));
    v0 = LD32(a2+248);
    a3 = a2 + 112;
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_088BADD0; }
    goto L_088BAD6C;
L_088BAD6C:;
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v1+4));
    f1 = f1 * f3;
    f2 = f2 * f3;
    f0 = f0 * f3;
    ST32(sp+8, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp, FBITS(f2));
    ST32(a2+112, FBITS(f2));
    f0 = BITSF(LD32(sp+4));
    ST32(a3+4, FBITS(f0));
    f1 = BITSF(LD32(sp+8));
    ST32(a3+8, FBITS(f1));
    goto L_088BADA4;
L_088BADA4:;
    a0 = LD32(s0+12);
    goto L_088BADA8;
L_088BADA8:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BADC0; }
    goto L_088BADB8;
L_088BADB8:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BADC0;
L_088BADC0:;
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;return (rv_t){ v0, v1, f0 }; }
L_088BADD0:;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    ST32(sp+24, FBITS(f2));
    v0 = FBITS(f3);
    ST32(sp+20, FBITS(f1));
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(sp+16, FBITS(f0));
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    func_088C4448(a0, a1);
    goto L_088BAE08;
L_088BAE08:;
    a0 = LD32(s0+12);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BADA8; }
    goto L_088BAE1C;
L_088BAE1C:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BADA4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;
}

/* 088BAE28 */
u64 func_088BAE28(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BAE28:;
    sp = sp - 32;
    v0 = D_08B2BC44 - (-17340);
    s0 = a0 + 0;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(sp+8, FBITS(f0));
    a1 = sp + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    f0 = BITSF(LD32(v0-17340));
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = LD32(a0+12);
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    func_088C4424(a0, a1);
    goto L_088BAE80;
L_088BAE80:;
    a0 = LD32(s0+12);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BAE9C; }
    goto L_088BAE94;
L_088BAE94:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BAE9C;
L_088BAE9C:;
    sp = sp + 32;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;return (u64)v0 | ((u64)v1 << 32); }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;
}

/* 088BAEAC */
void func_088BAEAC(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088BAEAC:;
    v0 = LD32(a0+12);
    ST32(v0+360, a1);
    return;
}

/* 088BAEB8 */
rv_t func_088BAEB8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BAEB8:;
    sp = sp - 32;
    s3 = a1 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 == a1;
    s2 = a0 + 0;
    if (cnd_) { goto L_088BAF70; }
    goto L_088BAEE4;
L_088BAEE4:;
    s1 = LD32(a0+12);
    ST32(s2+16, a1);
    s4 = LD32(s1+276);
    cnd_ = s4 == 0;
    if (cnd_) { goto L_088BAF4C; }
    goto L_088BAEF8;
L_088BAEF8:;
    s0 = LD32(s4);
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BAFD0; }
    goto L_088BAF08;
L_088BAF08:;
    a0 = LD32(s0+8);
    goto L_088BAF0C;
L_088BAF0C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BAFC0; }
    goto L_088BAF14;
L_088BAF14:;
    a0 = LD32(s0+16);
    goto L_088BAF18;
L_088BAF18:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BAFB0; }
    goto L_088BAF20;
L_088BAF20:;
    a0 = LD32(s0+24);
    goto L_088BAF24;
L_088BAF24:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BAFA0; }
    goto L_088BAF2C;
L_088BAF2C:;
    a0 = LD32(s0+28);
    goto L_088BAF30;
L_088BAF30:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BAF90; }
    goto L_088BAF38;
L_088BAF38:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAF40;
L_088BAF40:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAF48;
L_088BAF48:;
    s1 = LD32(s2+12);
    goto L_088BAF4C;
L_088BAF4C:;
    a0 = 48;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BAF54;
L_088BAF54:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s3 + 0;
    func_088CAA1C(a0, a1, 0, 0, 0);
    goto L_088BAF64;
L_088BAF64:;
    ST32(s1+276, s0);
    a0 = LD32(s2+12);
    { rv_t r_ = func_088C4118(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BAF70;
L_088BAF70:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088BAF90:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAF98;
L_088BAF98:;
    goto L_088BAF38;
L_088BAFA0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAFA8;
L_088BAFA8:;
    a0 = LD32(s0+28);
    goto L_088BAF30;
L_088BAFB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAFB8;
L_088BAFB8:;
    a0 = LD32(s0+24);
    goto L_088BAF24;
L_088BAFC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAFC8;
L_088BAFC8:;
    a0 = LD32(s0+16);
    goto L_088BAF18;
L_088BAFD0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BAFD8;
L_088BAFD8:;
    a0 = LD32(s0+8);
    goto L_088BAF0C;
}

/* 088BAFE0 */
u32 func_088BAFE0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BAFE0:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+272);
    return v0;
}

/* 088BAFEC */
void func_088BAFEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BAFEC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = LD32(a0+12);
    v0 = LD32(s0+272);
    cnd_ = a1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088BB02C; }
    goto L_088BB010;
L_088BB010:;
    ST32(s0+272, a1);
    { rv_t r_ = func_088C2C94(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB018;
L_088BB018:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088C9AE0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB024;
L_088BB024:;
    a0 = LD32(s1+12);
    func_088C3A04(a0, 0, 0, 0);
    goto L_088BB02C;
L_088BB02C:;
    sp = sp + 16;
    return;
}

/* 088BB040 */
rv_t func_088BB040(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BB040:;
    a3 = LD32(a0+12);
    sp = sp - 32;
    v1 = LD32(a3+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_088BB0C8; }
    goto L_088BB058;
L_088BB058:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 & 0x40;
    if (cnd_) { goto L_088BB0C8; }
    goto L_088BB064;
L_088BB064:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(a1+8));
    if (cnd_) { goto L_088BB0D0; }
    goto L_088BB06C;
L_088BB06C:;
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    cnd_ = a2 != 0;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_088BB0B8; }
    goto L_088BB084;
L_088BB084:;
    v0 = LD32(a3+248);
    f0 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    v1 = sp + 0;
    if (cnd_) { goto L_088BB09C; }
    goto L_088BB098;
L_088BB098:;
    f0 = BITSF(LD32(a3+376));
    goto L_088BB09C;
L_088BB09C:;
    {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BB0B8;
L_088BB0B8:;
    {u32 a_=a3+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a3+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BB0C8;
L_088BB0C8:;
    sp = sp + 32;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;return (rv_t){ v0, v1, f0 }; }
L_088BB0D0:;
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(sp+24, FBITS(f0));
    v0 = D_08B2BC44 - (-17340);
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    f0 = BITSF(LD32(v0-17340));
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    cnd_ = a2 != 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088BB140; }
    goto L_088BB10C;
L_088BB10C:;
    v0 = LD32(a3+248);
    f0 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    v1 = sp + 0;
    if (cnd_) { goto L_088BB124; }
    goto L_088BB120;
L_088BB120:;
    f0 = BITSF(LD32(a3+376));
    goto L_088BB124;
L_088BB124:;
    {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr8=BITSF(v0);}
    {float s0=vr8;float s1=vr8;float s2=vr8;float s3=vr8;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=v[9];float t2=v[10];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BB140;
L_088BB140:;
    {u32 a_=a3+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a3+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(a0+12);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BB0C8; }
    goto L_088BB164;
L_088BB164:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BB0C8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;
}

/* 088BB170 */
void func_088BB170(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_088BB170:;
    v0 = LD32(a0+12);
    f1 = BITSF(LD32(v0+176));
    v0 = v0 + 176;
    ST32(a1, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(a1+4, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(a1+8, FBITS(f1));
    return;
}

/* 088BB194 */
u32 func_088BB194(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB194:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = v0 & 0x1;
    return v0;
}

/* 088BB1A4 */
void func_088BB1A4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088BB1A4:;
    a0 = LD32(a0+12);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BB1C0; }
    goto L_088BB1B8;
L_088BB1B8:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BB1C0;
L_088BB1C0:;
    return;
}

/* 088BB1C8 */
u64 func_088BB1C8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB1C8:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = (v0 >> 1) & 0x1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB1D8 */
u64 func_088BB1D8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB1D8:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    a0 = LD32(a0+12);
    { u64 r_ = func_088CA0C4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB1EC;
L_088BB1EC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB1F8 */
u64 func_088BB1F8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB1F8:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = (v0 >> 22) & 0x1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB208 */
u64 func_088BB208(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    float *v = vfpu_v;
L_088BB208:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 22)) | ((a1 & 0x1) << 22);
    cnd_ = a1 != 0;
    ST32(v1+248, v0);
    if (cnd_) { goto L_088BB22C; }
    goto L_088BB220;
L_088BB220:;
    v0 = LD32(a0+12);
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    {u32 a_=v0+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BB22C;
L_088BB22C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB234 */
void func_088BB234(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB234:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 25)) | ((a1 & 0x1) << 25);
    ST32(v1+248, v0);
    return;
}

/* 088BB24C */
void func_088BB24C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB24C:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 7)) | ((a1 & 0x1) << 7);
    ST32(v1+248, v0);
    return;
}

/* 088BB264 */
void func_088BB264(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB264:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 8)) | ((a1 & 0x1) << 8);
    ST32(v1+248, v0);
    return;
}

/* 088BB27C */
void func_088BB27C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB27C:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 10)) | ((a1 & 0x1) << 10);
    ST32(v1+248, v0);
    return;
}

/* 088BB294 */
u32 func_088BB294(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB294:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+368);
    return v0;
}

/* 088BB2A0 */
void func_088BB2A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB2A0:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 11)) | ((a1 & 0x1) << 11);
    ST32(v1+248, v0);
    return;
}

/* 088BB2B8 */
u32 func_088BB2B8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB2B8:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+372);
    return v0;
}

/* 088BB2C4 */
void func_088BB2C4(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088BB2C4:;
    v0 = LD32(a0+12);
    ST32(v0+364, a1);
    return;
}

/* 088BB2D0 */
float func_088BB2D0(u32 a0)
{
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB2D0:;
    sp = sp - 16;
    a0 = LD32(a0+12);
    f0 = func_088C4480(a0);
    goto L_088BB2E0;
L_088BB2E0:;
    sp = sp + 16;
    return f0;
}

/* 088BB2EC */
void func_088BB2EC(u32 a0, float f12)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB2EC:;
    sp = sp - 16;
    a0 = LD32(a0+12);
    func_088C4488(a0, f12);
    goto L_088BB2FC;
L_088BB2FC:;
    sp = sp + 16;
    return;
}

/* 088BB308 */
float func_088BB308(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_088BB308:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(v0+256));
    return f0;
}

/* 088BB314 */
rv_t func_088BB314(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088BB314:;
    f0 = BITSF(0);
    v0 = D_08AEC6B0 - (-14672);
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    f1 = BITSF(LD32(v0-14672));
    if (cnd_) { goto L_088BB330; }
    goto L_088BB32C;
L_088BB32C:;
    f0 = f12;
    goto L_088BB330;
L_088BB330:;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088BB340; }
    goto L_088BB340;
L_088BB340:;
    v0 = LD32(a0+12);
    ST32(v0+256, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 088BB34C */
float func_088BB34C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_088BB34C:;
    v0 = LD32(a0+12);
    v1 = D_08AEC6B4 - (-14668);
    f0 = BITSF(LD32(v1-14668));
    f1 = BITSF(LD32(v0+264));
    f0 = f0 - f1;
    return f0;
}

/* 088BB364 */
float func_088BB364(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088BB364:;
    v0 = D_08AEC6B8 - (-14664);
    f0 = BITSF(LD32(v0-14664));
    f1 = BITSF(0);
    f12 = f0 - f12;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f12; goto L_088BB384; }
    goto L_088BB384;
L_088BB384:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BB394; }
    goto L_088BB394;
L_088BB394:;
    v0 = LD32(a0+12);
    ST32(v0+264, FBITS(f0));
    return f0;
}

/* 088BB3A0 */
float func_088BB3A0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_088BB3A0:;
    v0 = LD32(a0+12);
    v1 = D_08AEC6BC - (-14660);
    f0 = BITSF(LD32(v1-14660));
    f1 = BITSF(LD32(v0+268));
    f0 = f0 - f1;
    return f0;
}

/* 088BB3B8 */
rv_t func_088BB3B8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088BB3B8:;
    v0 = D_08AEC6C0 - (-14656);
    f0 = BITSF(LD32(v0-14656));
    f1 = BITSF(0);
    f12 = f0 - f12;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f12; goto L_088BB3D8; }
    goto L_088BB3D8;
L_088BB3D8:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BB3E8; }
    goto L_088BB3E8;
L_088BB3E8:;
    v0 = LD32(a0+12);
    ST32(v0+268, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
}

/* 088BB3F4 */
float func_088BB3F4(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_088BB3F4:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(v0+260));
    return f0;
}

/* 088BB400 */
float func_088BB400(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088BB400:;
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f12; goto L_088BB414; }
    goto L_088BB414;
L_088BB414:;
    v0 = LD32(a0+12);
    ST32(v0+260, FBITS(f0));
    return f0;
}

/* 088BB420 */
u64 func_088BB420(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB420:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = (v0 >> 19) & 0x1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB430 */
u64 func_088BB430(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB430:;
    sp = sp - 16;
    v1 = 0x100000u;
    a0 = LD32(a0+12);
    v0 = LD32(a0+248);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088BB46C; }
    goto L_088BB454;
L_088BB454:;
    s0 = 1;
    goto L_088BB458;
L_088BB458:;
    v0 = s0 & 0xff;
    goto L_088BB45C;
L_088BB45C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088BB46C:;
    v0 = func_088C6CF8();
    goto L_088BB474;
L_088BB474:;
    cnd_ = v0 == 0;
    v0 = s0 & 0xff;
    if (cnd_) { goto L_088BB45C; }
    goto L_088BB47C;
L_088BB47C:;
    s0 = 1;
    goto L_088BB458;
}

/* 088BB484 */
u32 func_088BB484(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB484:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = (v0 >> 21) & 0x1;
    return v0;
}

/* 088BB494 */
u32 func_088BB494(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB494:;
    v1 = LD32(a0+12);
    v0 = LD32(v1+248);
    v0 = (v0 >> 17) & 0x1;
    return v0;
}

/* 088BB4A4 */
void func_088BB4A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB4A4:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 17)) | ((a1 & 0x1) << 17);
    ST32(v1+248, v0);
    return;
}

/* 088BB4BC */
u64 func_088BB4BC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB4BC:;
    v1 = LD32(a0+12);
    v0 = LD_U16(v1+250);
    v0 = v0 & 0x1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB4CC */
u64 func_088BB4CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088BB4CC:;
    v1 = LD32(a0+12);
    a1 = a1 & 0xff;
    v0 = LD32(v1+248);
    v0 = (v0 & ~(0x1u << 16)) | ((a1 & 0x1) << 16);
    ST32(v1+248, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088BB4E4 */
u32 func_088BB4E4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BB4E4:;
    v1 = LD32(a0+12);
    v0 = LD_U16(v1+324);
    return v0;
}

/* 088BB4F0 */
rv_t func_088BB4F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB4F0:;
    sp = sp - 16;
    a1 = a1 & 0xffff;
    v1 = LD32(a0+12);
    v1 = v1 + 288;
    v0 = LD_U16(v1+36);
    cnd_ = a1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088BB518; }
    goto L_088BB510;
L_088BB510:;
    ST16(v1+36, a1);
    { rv_t r_ = func_088B8AA8(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB518;
L_088BB518:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BB524 */
float func_088BB524(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088BB524:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v1 = LD32(a0+12);
    if (cnd_) { goto L_088BB544; }
    goto L_088BB530;
L_088BB530:;
    v0 = LD32(v1+248);
    f0 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BB548; }
    goto L_088BB544;
L_088BB544:;
    f0 = BITSF(LD32(v1+376));
    goto L_088BB548;
L_088BB548:;
    return f0;
}

/* 088BB550 */
rv_t func_088BB550(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB550:;
    sp = sp - 16;
    a0 = LD32(a0+12);
    { rv_t r_ = func_088C2C74(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB560;
L_088BB560:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BB56C */
u32 func_088BB56C(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088BB56C:;
    v0 = LD32(a0+12);
    ST32(v0+392, a1);
    return v0;
}

/* 088BB578 */
u32 func_088BB578(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088BB578:;
    v0 = LD32(a0+12);
    ST32(v0+396, a1);
    return v0;
}

/* 088BB584 */
rv_t func_088BB584(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088BB584:;
    sp = sp - 64;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s1 = a1 < 0x1u;
    v0 = s1 & v0;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BB764; }
    goto L_088BB5B8;
L_088BB5B8:;
    v0 = s2 < 0x1u;
    v0 = s1 & v0;
    cnd_ = v0 != 0;
    v1 = D_08B2BE3C - (-16836);
    if (cnd_) { goto L_088BB5E4; }
    goto L_088BB5C8;
L_088BB5C8:;
    goto L_088BB5CC;
L_088BB5CC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088BB5E4:;
    s3 = v1 - 16836;
    a2 = LD32(s3+4);
    v0 = D_08AF7C50 - (31824);
    v0 = v0 + 31824;
    a1 = LD32(a2);
    ST32(v1-16836, v0);
    a0 = sp + 0;
    v0 = (u32)-1;
    s0 = s3 + 0;
    ST32(sp+4, a1);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a2);
    func_08AB56CC(a0);
    goto L_088BB620;
L_088BB620:;
    v1 = LD32(sp+4);
    goto L_088BB624;
L_088BB624:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088BB654; }
    goto L_088BB62C;
L_088BB62C:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_088BB654; }
    goto L_088BB634;
L_088BB634:;
    v0 = LD32(v1+8);
    a0 = LD32(s0+4);
    a1 = a1 + v0;
    { rv_t r_ = func_08AB57F4(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB644;
L_088BB644:;
    a0 = sp + 0;
    func_08AB5760(a0);
    goto L_088BB64C;
L_088BB64C:;
    v1 = LD32(sp+4);
    goto L_088BB624;
L_088BB654:;
    s2 = LD32(s0+4);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { s1 = LD32(s3+4); goto L_088BB694; }
    goto L_088BB664;
L_088BB664:;
    a0 = LD32(s1);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BB754; }
    goto L_088BB670;
L_088BB670:;
    a0 = LD32(s1+4);
    goto L_088BB674;
L_088BB674:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088BB740; }
    goto L_088BB67C;
L_088BB67C:;
    s0 = LD32(s1+12);
    goto L_088BB680;
L_088BB680:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088BB728; }
    goto L_088BB688;
L_088BB688:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB690;
L_088BB690:;
    s1 = LD32(s3+4);
    goto L_088BB694;
L_088BB694:;
    v0 = (u32)-1;
    ST32(s2+12, v0);
    cnd_ = s1 == 0;
    ST32(s2, 0);
    if (cnd_) { goto L_088BB5C8; }
    goto L_088BB6A4;
L_088BB6A4:;
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088BB6DC; }
    goto L_088BB6B0;
L_088BB6B0:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BB718; }
    goto L_088BB6BC;
L_088BB6BC:;
    a0 = LD32(s2+4);
    goto L_088BB6C0;
L_088BB6C0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088BB704; }
    goto L_088BB6C8;
L_088BB6C8:;
    s0 = LD32(s2+12);
    goto L_088BB6CC;
L_088BB6CC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088BB6EC; }
    goto L_088BB6D4;
L_088BB6D4:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB6DC;
L_088BB6DC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB6E4;
L_088BB6E4:;
    goto L_088BB5CC;
L_088BB6EC:;
    a0 = s0 + 0;
    func_08AB58C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088BB6F4;
L_088BB6F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB6FC;
L_088BB6FC:;
    goto L_088BB6D4;
L_088BB704:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB710;
L_088BB710:;
    s0 = LD32(s2+12);
    goto L_088BB6CC;
L_088BB718:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB720;
L_088BB720:;
    a0 = LD32(s2+4);
    goto L_088BB6C0;
L_088BB728:;
    a0 = s0 + 0;
    func_08AB58C8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088BB730;
L_088BB730:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB738;
L_088BB738:;
    goto L_088BB688;
L_088BB740:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB74C;
L_088BB74C:;
    s0 = LD32(s1+12);
    goto L_088BB680;
L_088BB754:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BB75C;
L_088BB75C:;
    a0 = LD32(s1+4);
    goto L_088BB674;
L_088BB764:;
    v0 = D_08AF7C50 - (31824);
    s0 = D_08B2BE3C - (-16836);
    a0 = 20;
    v0 = v0 + 31824;
    ST32(s0-16836, v0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB77C;
L_088BB77C:;
    s0 = s0 - 16836;
    v1 = 16;
    a0 = (u32)-1;
    ST32(s0+4, v0);
    ST32(v0+4, v1);
    ST32(v0+12, a0);
    ST32(v0, 0);
    ST32(v0+16, 0);
    goto L_088BB5B8;
}

/* 088BB7A0 */
rv_t func_088BB7A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB7A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088BB584(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB7B4;
L_088BB7B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BB7C0 */
rv_t func_088BB7C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BB7C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088BB584(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB7D4;
L_088BB7D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BB7E0 */
u32 func_088BB7E0(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088BB7E0:;
    sp = sp - 48;
    v1 = 0 + 0;
    s2 = a2 & 0xff;
    s1 = a1 + 0;
    v0 = LD32(a0+248);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088BBB1C; }
    goto L_088BB81C;
L_088BB81C:;
    a1 = LD32(a1+356);
    v0 = LD32(a0+360);
    cnd_ = v0 == a1;
    if (cnd_) {  goto L_088BBB20; }
    goto L_088BB82C;
L_088BB82C:;
    v0 = LD32(s1+248);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088BBB20; }
    goto L_088BB83C;
L_088BB83C:;
    a2 = LD32(a0+356);
    v0 = LD32(s1+360);
    cnd_ = v0 == a2;
    if (cnd_) {  goto L_088BBB20; }
    goto L_088BB84C;
L_088BB84C:;
    v0 = LD32(a0+396);
    v1 = LD32(s1+392);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088BBB1C; }
    goto L_088BB860;
L_088BB860:;
    v0 = LD32(a0+392);
    v1 = LD32(s1+396);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = a0 + 328;
    if (cnd_) { goto L_088BBD50; }
    goto L_088BB874;
L_088BB874:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s1+328));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = s1 + 328;
    if (cnd_) { goto L_088BBD50; }
    goto L_088BB88C;
L_088BB88C:;
    f1 = BITSF(LD32(a0+328));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 0 + 0; goto L_088BBB1C; }
    goto L_088BB8A4;
L_088BB8A4:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 0 + 0; goto L_088BBB1C; }
    goto L_088BB8BC;
L_088BB8BC:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 0 + 0; goto L_088BBB1C; }
    goto L_088BB8D4;
L_088BB8D4:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = 0 + 0; goto L_088BBB1C; }
    goto L_088BB8EC;
L_088BB8EC:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_088BBB1C; }
    goto L_088BB904;
L_088BB904:;
    a0 = D_08B2BE64 - (-16796);
    v0 = a0 - 16796;
    a3 = LD32(v0+12);
    v1 = a1 << 16;
    s3 = a2 + v1;
    cnd_ = a3 == 0;
    ST8(sp, 0);
    if (cnd_) { goto L_088BB938; }
    goto L_088BB920;
L_088BB920:;
    v0 = LD32(a3);
    goto L_088BB924;
L_088BB924:;
    cnd_ = s3 == v0;
    s5 = a3 + 8;
    if (cnd_) { goto L_088BB968; }
    goto L_088BB92C;
L_088BB92C:;
    a3 = LD32(a3+4);
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD32(a3); goto L_088BB924; }
    goto L_088BB938;
L_088BB938:;
    s4 = a0 - 16796;
    a0 = s4 + 0;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BB944;
L_088BB944:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_088BBD50; }
    goto L_088BB94C;
L_088BB94C:;
    v1 = LD32(s4+12);
    v0 = 1;
    ST8(sp, v0);
    s5 = a3 + 8;
    ST32(a3+4, v1);
    ST32(a3, s3);
    ST32(s4+12, a3);
    goto L_088BB968;
L_088BB968:;
    cnd_ = s5 == 0;
    v0 = D_08B2BC50 - (-17328);
    if (cnd_) { goto L_088BBD50; }
    goto L_088BB970;
L_088BB970:;
    v1 = LD32(v0-17328);
    cnd_ = s2 == 0;
    ST32(s5, v1);
    if (cnd_) { goto L_088BBAA4; }
    goto L_088BB97C;
L_088BB97C:;
    a3 = LD32(s0+380);
    cnd_ = a3 != 0;
    if (cnd_) { a1 = LD32(s1+380); goto L_088BBC2C; }
    goto L_088BB988;
L_088BB988:;
    v0 = LD32(s1+380);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+248); goto L_088BBB44; }
    goto L_088BB994;
L_088BB994:;
    t0 = D_08B2BC38 - (-17352);
    v0 = LD32(t0-17352);
    a1 = t0 - 17352;
    v1 = LD32(a1+8);
    a0 = v0 + 12;
    a2 = 0 + 0;
    v1 = v1 < a0;
    if (v1 == 0) a2 = v0;
    cnd_ = a2 == 0;
    ST32(t0-17352, a0);
    if (cnd_) { goto L_088BB9D4; }
    goto L_088BB9BC;
L_088BB9BC:;
    v1 = D_08B2BC34 - (-17356);
    v0 = LD32(v1-17356);
    ST32(a2, 0);
    ST32(a2+8, v0);
    ST32(a2+4, 0);
    ST32(v1-17356, a2);
    goto L_088BB9D4;
L_088BB9D4:;
    v0 = LD32(t0-17352);
    v1 = LD32(a1+8);
    a0 = v0 + 8;
    v1 = v1 < a0;
    if (v1 != 0) v0 = 0;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(t0-17352, a0);
    if (cnd_) { goto L_088BBA04; }
    goto L_088BB9F4;
L_088BB9F4:;
    v0 = LD32(a2+4);
    ST32(v1, s5);
    ST32(v1+4, v0);
    ST32(a2+4, v1);
    goto L_088BBA04;
L_088BBA04:;
    v1 = LD32(s0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+248); goto L_088BBA58; }
    goto L_088BBA14;
L_088BBA14:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+248); goto L_088BBA58; }
    goto L_088BBA20;
L_088BBA20:;
    v0 = LD32(t0-17352);
    v1 = LD32(a1+8);
    a0 = v0 + 8;
    v1 = v1 < a0;
    if (v1 != 0) v0 = 0;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(t0-17352, a0);
    if (cnd_) { goto L_088BBA50; }
    goto L_088BBA40;
L_088BBA40:;
    v0 = LD32(a2);
    ST32(v1, s0);
    ST32(v1+4, v0);
    ST32(a2, v1);
    goto L_088BBA50;
L_088BBA50:;
    ST32(s0+380, a2);
    v1 = LD32(s1+248);
    goto L_088BBA58;
L_088BBA58:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088BBAA8; }
    goto L_088BBA64;
L_088BBA64:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088BBAA8; }
    goto L_088BBA70;
L_088BBA70:;
    a1 = LD32(t0-17352);
    v0 = t0 - 17352;
    v1 = LD32(v0+8);
    a0 = a1 + 8;
    v1 = v1 < a0;
    if (v1 != 0) a1 = 0;
    cnd_ = a1 == 0;
    ST32(t0-17352, a0);
    if (cnd_) { goto L_088BBAA0; }
    goto L_088BBA90;
L_088BBA90:;
    v0 = LD32(a2);
    ST32(a1, s1);
    ST32(a1+4, v0);
    ST32(a2, a1);
    goto L_088BBAA0;
L_088BBAA0:;
    ST32(s1+380, a2);
    goto L_088BBAA4;
L_088BBAA4:;
    v0 = LD_U8(sp);
    goto L_088BBAA8;
L_088BBAA8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+248); goto L_088BBACC; }
    goto L_088BBAB0;
L_088BBAB0:;
    v1 = D_08B2BE60 - (-16800);
    v0 = LD32(v1-16800);
    ST32(s5+4, s0);
    v0 = v0 + 1;
    ST32(v1-16800, v0);
    ST32(s5+8, s1);
    v0 = LD32(s0+248);
    goto L_088BBACC;
L_088BBACC:;
    f1 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+376)); goto L_088BBADC; }
    goto L_088BBADC;
L_088BBADC:;
    v0 = LD32(s1+248);
    f0 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+376)); goto L_088BBAF0; }
    goto L_088BBAF0;
L_088BBAF0:;
    f1 = f1 + f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s5+12, FBITS(f0)); goto L_088BBB18; }
    goto L_088BBB08;
L_088BBB08:;
    v0 = D_08AEC6C4 - (-14652);
    f0 = BITSF(LD32(v0-14652));
    f0 = f0 / f1;
    ST32(s5+12, FBITS(f0));
    goto L_088BBB18;
L_088BBB18:;
    v1 = s5 + 0;
    goto L_088BBB1C;
L_088BBB1C:;
    goto L_088BBB20;
L_088BBB20:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_088BBB44:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a3 = LD32(s1+380);
    if (cnd_) { goto L_088BBBD0; }
    goto L_088BBB50;
L_088BBB50:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(a3+4); goto L_088BBBD4; }
    goto L_088BBB5C;
L_088BBB5C:;
    t0 = D_08B2BC38 - (-17352);
    v0 = LD32(t0-17352);
    a1 = t0 - 17352;
    v1 = LD32(a1+8);
    a0 = v0 + 8;
    ST32(t0-17352, a0);
    v1 = v1 < a0;
    if (v1 != 0) v0 = 0;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088BBB94; }
    goto L_088BBB84;
L_088BBB84:;
    v0 = LD32(a3);
    ST32(v1, s0);
    ST32(v1+4, v0);
    ST32(a3, v1);
    goto L_088BBB94;
L_088BBB94:;
    v0 = LD32(t0-17352);
    v1 = LD32(a1+8);
    ST32(s0+380, a3);
    goto L_088BBBA0;
L_088BBBA0:;
    a0 = v0 + 8;
    v1 = v1 < a0;
    ST32(t0-17352, a0);
    if (v1 != 0) v0 = 0;
    v1 = v0 + 0;
    goto L_088BBBB4;
L_088BBBB4:;
    cnd_ = v1 == 0;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088BBAA8; }
    goto L_088BBBBC;
L_088BBBBC:;
    v0 = LD32(a3+4);
    ST32(v1, s5);
    ST32(v1+4, v0);
    ST32(a3+4, v1);
    goto L_088BBAA4;
L_088BBBD0:;
    t0 = LD32(a3+4);
    goto L_088BBBD4;
L_088BBBD4:;
    cnd_ = t0 == 0;
    v1 = t0 + 0;
    if (cnd_) { goto L_088BBBF4; }
    goto L_088BBBDC;
L_088BBBDC:;
    v0 = LD32(v1);
    goto L_088BBBE0;
L_088BBBE0:;
    cnd_ = s5 == v0;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088BBAA8; }
    goto L_088BBBE8;
L_088BBBE8:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088BBBE0; }
    goto L_088BBBF4;
L_088BBBF4:;
    a0 = D_08B2BC38 - (-17352);
    goto L_088BBBF8;
L_088BBBF8:;
    a2 = LD32(a0-17352);
    v0 = a0 - 17352;
    v1 = LD32(v0+8);
    a1 = a2 + 8;
    v0 = 0 + 0;
    v1 = v1 < a1;
    if (v1 == 0) v0 = a2;
    cnd_ = v0 == 0;
    ST32(a0-17352, a1);
    if (cnd_) { goto L_088BBAA4; }
    goto L_088BBC1C;
L_088BBC1C:;
    ST32(v0+4, t0);
    ST32(v0, s5);
    ST32(a3+4, v0);
    goto L_088BBAA4;
L_088BBC2C:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s1+248); goto L_088BBCC8; }
    goto L_088BBC34;
L_088BBC34:;
    cnd_ = a3 == a1;
    if (cnd_) { v1 = LD32(a3+4); goto L_088BBC80; }
    goto L_088BBC3C;
L_088BBC3C:;
    a0 = a3 + 0;
    func_08AB5CAC(a0, a1);
    goto L_088BBC44;
L_088BBC44:;
    a0 = D_08B2BC38 - (-17352);
    a2 = LD32(a0-17352);
    v0 = a0 - 17352;
    v1 = LD32(v0+8);
    a1 = a2 + 8;
    ST32(a0-17352, a1);
    v1 = v1 < a1;
    if (v1 != 0) a2 = 0;
    cnd_ = a2 == 0;
    a0 = LD32(s0+380);
    if (cnd_) { goto L_088BBAA4; }
    goto L_088BBC6C;
L_088BBC6C:;
    v0 = LD32(a0+4);
    ST32(a2, s5);
    ST32(a2+4, v0);
    ST32(a0+4, a2);
    goto L_088BBAA4;
L_088BBC80:;
    cnd_ = v1 == 0;
    a0 = D_08B2BC38 - (-17352);
    if (cnd_) { goto L_088BBCA4; }
    goto L_088BBC88;
L_088BBC88:;
    v0 = LD32(v1);
    goto L_088BBC8C;
L_088BBC8C:;
    cnd_ = v0 == s5;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088BBAA8; }
    goto L_088BBC94;
L_088BBC94:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088BBC8C; }
    goto L_088BBCA0;
L_088BBCA0:;
    a0 = D_08B2BC38 - (-17352);
    goto L_088BBCA4;
L_088BBCA4:;
    a2 = LD32(a0-17352);
    v0 = a0 - 17352;
    v1 = LD32(v0+8);
    a1 = a2 + 8;
    ST32(a0-17352, a1);
    v1 = v1 < a1;
    if (v1 != 0) a2 = 0;
    v1 = a2 + 0;
    goto L_088BBBB4;
L_088BBCC8:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(a3+4); goto L_088BBD28; }
    goto L_088BBCD4;
L_088BBCD4:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(a3+4); goto L_088BBD28; }
    goto L_088BBCE0;
L_088BBCE0:;
    t0 = D_08B2BC38 - (-17352);
    v0 = LD32(t0-17352);
    a1 = t0 - 17352;
    v1 = LD32(a1+8);
    a0 = v0 + 8;
    ST32(t0-17352, a0);
    v1 = v1 < a0;
    if (v1 != 0) v0 = 0;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088BBD18; }
    goto L_088BBD08;
L_088BBD08:;
    v0 = LD32(a3);
    ST32(v1, s1);
    ST32(v1+4, v0);
    ST32(a3, v1);
    goto L_088BBD18;
L_088BBD18:;
    v0 = LD32(t0-17352);
    v1 = LD32(a1+8);
    ST32(s1+380, a3);
    goto L_088BBBA0;
L_088BBD28:;
    cnd_ = t0 == 0;
    v1 = t0 + 0;
    if (cnd_) { goto L_088BBBF4; }
    goto L_088BBD30;
L_088BBD30:;
    v0 = LD32(v1);
    goto L_088BBD34;
L_088BBD34:;
    cnd_ = s5 == v0;
    v0 = LD_U8(sp);
    if (cnd_) { goto L_088BBAA8; }
    goto L_088BBD3C;
L_088BBD3C:;
    v1 = LD32(v1+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088BBD34; }
    goto L_088BBD48;
L_088BBD48:;
    a0 = D_08B2BC38 - (-17352);
    goto L_088BBBF8;
L_088BBD50:;
    v1 = 0 + 0;
    goto L_088BBB1C;
}

/* 088BBD58 */
void func_088BBD58(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BBD58:;
    sp = sp - 32;
    s3 = D_08B2BE64 - (-16796);
    v0 = s3 - 16796;
    a1 = LD32(v0+12);
    cnd_ = a1 == 0;
    s2 = v0 + 12;
    if (cnd_) { goto L_088BBDB0; }
    goto L_088BBD84;
L_088BBD84:;
    s1 = a1 + 0;
    goto L_088BBD88;
L_088BBD88:;
    s0 = s1 + 8;
    a0 = s0 + 0;
    v0 = func_088BED64(a0);
    goto L_088BBD94;
L_088BBD94:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088BBDCC; }
    goto L_088BBDA0;
L_088BBDA0:;
    s2 = s1 + 4;
    v0 = LD32(s2);
    goto L_088BBDA8;
L_088BBDA8:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088BBD88; }
    goto L_088BBDB0;
L_088BBDB0:;
    sp = sp + 32;
    return;
L_088BBDCC:;
    v0 = LD32(s1+4);
    ST32(s2, v0);
    func_088BBFA8(a0, a1);
    goto L_088BBDD8;
L_088BBDD8:;
    a1 = s1 + 0;
    a0 = s3 - 16796;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BBDE4;
L_088BBDE4:;
    v0 = LD32(s2);
    goto L_088BBDA8;
}

/* 088BBDEC */
static u32 func_088BBDEC__orig(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BBDEC:;
    sp = sp - 16;
    a2 = LD32(a0+4);
    v0 = LD32(a2+248);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a2+248); goto L_088BBE20; }
    goto L_088BBE08;
L_088BBE08:;
    v1 = LD32(a0+8);
    v0 = LD32(v1+248);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088BBED8; }
    goto L_088BBE1C;
L_088BBE1C:;
    v0 = LD32(a2+248);
    goto L_088BBE20;
L_088BBE20:;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_088BBED8; }
    goto L_088BBE2C;
L_088BBE2C:;
    a3 = LD32(a0+8);
    v0 = LD32(a3+248);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_088BBED8; }
    goto L_088BBE40;
L_088BBE40:;
    v0 = a2 + 328;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a3+328));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = a3 + 328;
    if (cnd_) { goto L_088BBED4; }
    goto L_088BBE5C;
L_088BBE5C:;
    f1 = BITSF(LD32(a2+328));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = 1; goto L_088BBED8; }
    goto L_088BBE74;
L_088BBE74:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = 1; goto L_088BBED8; }
    goto L_088BBE8C;
L_088BBE8C:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = 1; goto L_088BBED8; }
    goto L_088BBEA4;
L_088BBEA4:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = 1; goto L_088BBED8; }
    goto L_088BBEBC;
L_088BBEBC:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a2+272); goto L_088BBEE8; }
    goto L_088BBED4;
L_088BBED4:;
    a1 = 1;
    goto L_088BBED8;
L_088BBED8:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_088BBEE8:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a2+276); goto L_088BBF88; }
    goto L_088BBEF4;
L_088BBEF4:;
    v1 = LD32(a3+272);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a3+276); goto L_088BBF48; }
    goto L_088BBF04;
L_088BBF04:;
    v0 = LD32(a2+272);
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD32(a0+8); goto L_088BBF38; }
    goto L_088BBF14;
L_088BBF14:;
    v0 = LD32(a3+272);
    cnd_ = v0 == v1;
    if (cnd_) { a1 = a2 + 0; goto L_088BBF34; }
    goto L_088BBF20;
L_088BBF20:;
    v0 = func_088BCDA8(a0);
    goto L_088BBF28;
L_088BBF28:;
    v0 = v0 ^ 0x1;
    goto L_088BBF2C;
L_088BBF2C:;
    a1 = v0 & 0xff;
    goto L_088BBED8;
L_088BBF34:;
    a2 = a3 + 0;
    goto L_088BBF38;
L_088BBF38:;
    v0 = func_088BDF78(a0, a1, a2);
    goto L_088BBF40;
L_088BBF40:;
    v0 = v0 ^ 0x1;
    goto L_088BBF2C;
L_088BBF48:;
    v1 = LD32(v0+32);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088BBF04; }
    goto L_088BBF54;
L_088BBF54:;
    v1 = LD32(a2+272);
    cnd_ = v1 == v0;
    a1 = a2 + 0;
    if (cnd_) { goto L_088BBF74; }
    goto L_088BBF60;
L_088BBF60:;
    a2 = a3 + 0;
    goto L_088BBF64;
L_088BBF64:;
    v0 = func_088BD858(a0, a1, a2);
    goto L_088BBF6C;
L_088BBF6C:;
    v0 = v0 ^ 0x1;
    goto L_088BBF2C;
L_088BBF74:;
    a2 = a3 + 0;
    goto L_088BBF78;
L_088BBF78:;
    v0 = func_088BE430(a0, a1, a2);
    goto L_088BBF80;
L_088BBF80:;
    v0 = v0 ^ 0x1;
    goto L_088BBF2C;
L_088BBF88:;
    v1 = LD32(v0+32);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088BBEF4; }
    goto L_088BBF94;
L_088BBF94:;
    v1 = LD32(a3+272);
    cnd_ = v1 == v0;
    a1 = a3 + 0;
    if (cnd_) { goto L_088BBF78; }
    goto L_088BBFA0;
L_088BBFA0:;
    goto L_088BBF64;
}

u32 func_088BBDEC(u32 a0, u32 a1)
{
    u32 r_ = 0;
    if (rs_phys_pair(a0, &r_)) return r_;   /* native hook (tools/dc/hooks.py) */
    return func_088BBDEC__orig(a0, a1);
}

/* 088BBFA8 */
void func_088BBFA8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088BBFA8:;
    v0 = D_08B2BE60 - (-16800);
    v1 = LD32(v0-16800);
    a1 = a1 & 0xff;
    v1 = v1 - 1;
    cnd_ = a1 == 0;
    ST32(v0-16800, v1);
    if (cnd_) { goto L_088BBFF8; }
    goto L_088BBFC0;
L_088BBFC0:;
    a1 = LD32(a0+4);
    v1 = LD32(a1+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BBFDC; }
    goto L_088BBFD4;
L_088BBFD4:;
    ST32(a1+248, v1);
    ST32(a1+352, 0);
    goto L_088BBFDC;
L_088BBFDC:;
    a0 = LD32(a0+8);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BBFF8; }
    goto L_088BBFF0;
L_088BBFF0:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BBFF8;
L_088BBFF8:;
    return;
}

/* 088BC000 */
u32 func_088BC000(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088BC000:;
    v0 = LD32(a0+4);
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088BC020; }
    goto L_088BC00C;
L_088BC00C:;
    v0 = LD32(a0+8);
    cnd_ = a1 == v0;
    if (cnd_) { v1 = 1; goto L_088BC018; }
    goto L_088BC018;
L_088BC018:;
    v0 = v1 + 0;
    return v0;
L_088BC020:;
    v1 = 1;
    goto L_088BC018;
}

/* 088BC028 */
void func_088BC028(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr56 = v[56], vr57 = v[57], vr58 = v[58], vr59 = v[59], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr63 = v[63], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr72 = v[72], vr73 = v[73], vr74 = v[74], vr75 = v[75], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr79 = v[79], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr84 = v[84], vr85 = v[85], vr86 = v[86], vr88 = v[88], vr89 = v[89], vr90 = v[90], vr92 = v[92], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[1920] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1920);
L_088BC028:;
    sp = sp - 1920;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    fp = t0 + 0;
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s5 = a1 + 0;
    s4 = a0 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    f20 = BITSF(0);
    a0 = LD32(a0+4);
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = func_088C32BC(a0);
    goto L_088BC090;
L_088BC090:;
    a2 = v0 + 0;
    a3 = sp + 512;
    t0 = v0 + 48;
    goto L_088BC09C;
L_088BC09C:;
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
    if (cnd_) { goto L_088BC09C; }
    goto L_088BC0C8;
L_088BC0C8:;
    a0 = LD32(s4+8);
    v0 = func_088C32BC(a0);
    goto L_088BC0D0;
L_088BC0D0:;
    a2 = v0 + 0;
    a3 = sp + 560;
    t0 = v0 + 48;
    goto L_088BC0DC;
L_088BC0DC:;
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
    if (cnd_) { goto L_088BC0DC; }
    goto L_088BC108;
L_088BC108:;
    v0 = LD32(s4+8);
    s0 = LD32(s4+4);
    f2 = BITSF(LD32(v0+260));
    f1 = BITSF(LD32(s0+260));
    f3 = BITSF(LD32(v0+256));
    a1 = v0 + 0;
    f1 = f1 * f2;
    v0 = D_08AEC6C8 - (-14648);
    f0 = BITSF(LD32(s0+256));
    f22 = BITSF(LD32(v0-14648));
    f1 = sqrtf(f1);
    t0 = s0 + 0;
    f0 = f0 * f3;
    fcc = FCMP(f22, f1, 14);
    cnd_ = fcc;
    f5 = sqrtf(f0);
    if (cnd_) { goto L_088BC150; }
    goto L_088BC14C;
L_088BC14C:;
    f22 = f1;
    goto L_088BC150;
L_088BC150:;
    v1 = 0 < s5;
    ST32(sp+1760, v1);
    f21 = BITSF(0);
    cnd_ = v1 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_088BC4CC; }
    goto L_088BC164;
L_088BC164:;
    v0 = D_08AEC6C8 - (-14648);
    f4 = BITSF(LD32(v0-14648));
    {u32 a_=fp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a3 = s1 + 0;
    a2 = s2 + 0;
    {u32 a_=sp+(1776);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = sp + 0;
    goto L_088BC180;
L_088BC180:;
    {u32 a_=t0+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(816);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(832);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1776);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    f0 = BITSF(0);
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(784);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+608);
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1792);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(a0, v0);
    {u32 a_=sp+(864);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(848);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = LD32(sp+612);
    {u32 a_=sp+(1808);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(1824);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(a0+4, v0);
    {u32 a_=sp+(1840);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(896);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+616);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr116=d0;vr117=d1;vr118=d2;vr119=d3;}
    {u32 a_=sp+(800);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(a0+8, v0);
    {u32 a_=sp+(912);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    v0 = LD32(sp+620);
    {u32 a_=sp+(928);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr124=d0;vr125=d1;vr126=d2;vr127=d3;}
    ST32(a0+12, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {u32 a_=a1+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+608);
    {u32 a_=a0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    ST32(a0+16, v0);
    v1 = LD32(sp+612);
    ST32(a0+20, v1);
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    v0 = LD32(sp+616);
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    ST32(a0+24, v0);
    v1 = LD32(sp+620);
    ST32(a0+28, v1);
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(512);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr12=d0;vr13=d1;vr14=d2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(544);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float t0=vr8;float t1=vr9;float t2=vr10;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+644);
    {u32 a_=sp+(560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(576);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+608, v0);
    {u32 a_=sp+(592);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    ST32(sp+612, v1);
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+648);
    v1 = LD32(sp+652);
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr124;float s1=vr125;float s2=vr126;float s3=vr127;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float t0=vr12;float t1=vr13;float t2=vr14;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+616, v0);
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    ST32(sp+620, v1);
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+644);
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    ST32(sp+624, v0);
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+628, v1);
    {u32 a_=sp+(608);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+648);
    v1 = LD32(sp+652);
    ST32(sp+632, v0);
    ST32(sp+636, v1);
    {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(624);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=a0+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(t0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(t0+376)); goto L_088BC380; }
    goto L_088BC380;
L_088BC380:;
    v0 = LD32(a1+248);
    f2 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(a1+376)); goto L_088BC394; }
    goto L_088BC394;
L_088BC394:;
    f2 = f0 + f2;
    {u32 a_=sp+(640);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1776);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr20;float t1=vr21;float t2=vr22;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = BITSF(0);
    f2 = f2 + f0;
    fcc = FCMP(f2, f1, 2);
    cnd_ = fcc;
    ST32(a0+36, FBITS(f2));
    if (cnd_) { goto L_088BC3CC; }
    goto L_088BC3C4;
L_088BC3C4:;
    f0 = f4 / f2;
    ST32(a0+36, FBITS(f0));
    goto L_088BC3CC;
L_088BC3CC:;
    {u32 a_=t0+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=t0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+644);
    ST32(sp+672, v0);
    ST32(sp+676, v1);
    v0 = LD32(sp+648);
    v1 = LD32(sp+652);
    ST32(sp+680, v0);
    ST32(sp+684, v1);
    {u32 a_=a1+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(672);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=a1+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+644);
    ST32(sp+656, v0);
    ST32(sp+660, v1);
    v0 = LD32(sp+648);
    v1 = LD32(sp+652);
    ST32(sp+664, v0);
    ST32(sp+668, v1);
    {u32 a_=sp+(656);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(1776);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088BCDA0; }
    goto L_088BC470;
L_088BC470:;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = f5 + f4;
    f3 = BITSF(LD32(a0+36));
    {u32 a_=a2+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    f2 = f0 * f5;
    f0 = f0 * f1;
    {u32 a_=a3+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    f20 = f20 + f4;
    ST32(a0+32, FBITS(f2));
    f0 = f0 * f3;
    {u32 a_=sp+(480);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    f21 = f21 + f0;
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BC4B4;
L_088BC4B4:;
    t1 = t1 + 1;
    v0 = t1 < s5;
    a0 = a0 + 48;
    a2 = a2 + 16;
    cnd_ = v0 != 0;
    a3 = a3 + 16;
    if (cnd_) { goto L_088BC180; }
    goto L_088BC4CC;
L_088BC4CC:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088BCB14; }
    goto L_088BC4E0;
L_088BC4E0:;
    s7 = 0 + 0;
    v1 = LD32(sp+1760);
    goto L_088BC4E8;
L_088BC4E8:;
    s6 = 1;
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088BC538; }
    goto L_088BC4F4;
L_088BC4F4:;
    s1 = sp + 0;
    goto L_088BC4F8;
L_088BC4F8:;
    f0 = BITSF(LD32(s1+36));
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=s0+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));} goto L_088BCB4C; }
    goto L_088BC510;
L_088BC510:;
    s3 = s3 + 1;
    v0 = s3 < s5;
    cnd_ = v0 != 0;
    s1 = s1 + 48;
    if (cnd_) { goto L_088BC4F8; }
    goto L_088BC520;
L_088BC520:;
    cnd_ = s6 != 0;
    if (cnd_) { {u32 a_=s0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088BC53C; }
    goto L_088BC528;
L_088BC528:;
    s7 = s7 + 1;
    v0 = s7 < 0xau;
    cnd_ = v0 != 0;
    v1 = LD32(sp+1760);
    if (cnd_) { goto L_088BC4E8; }
    goto L_088BC538;
L_088BC538:;
    {u32 a_=s0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088BC53C;
L_088BC53C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = D_08AEC6CC - (-14644);
    f2 = BITSF(LD32(v0-14644));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=s0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088BC574; }
    goto L_088BC564;
L_088BC564:;
    {u32 a_=sp+(768);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s0 = LD32(s4+4);
    {u32 a_=s0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088BC574;
L_088BC574:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s4+8); goto L_088BC5A0; }
    goto L_088BC594;
L_088BC594:;
    {u32 a_=sp+(768);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s0+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s4+8);
    goto L_088BC5A0;
L_088BC5A0:;
    {u32 a_=v0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=v0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088BC5D4; }
    goto L_088BC5C4;
L_088BC5C4:;
    {u32 a_=sp+(768);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s4+8);
    {u32 a_=v0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088BC5D4;
L_088BC5D4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BC5FC; }
    goto L_088BC5F4;
L_088BC5F4:;
    {u32 a_=sp+(768);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v0+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BC5FC;
L_088BC5FC:;
    f2 = BITSF(0);
    fcc = FCMP(f20, f2, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_088BCB14; }
    goto L_088BC610;
L_088BC610:;
    v0 = FBITS(f20);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr16=(float)1;vr17=(float)1;vr18=(float)1;vr19=(float)1;}
    {u32 a_=sp+(1376);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1392);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr16;float t0=vr12;float d0=s0/t0;vr4=d0;}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(496);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    s0 = LD32(s4+4);
    a2 = LD32(s4+8);
    {float s0=vr16;float t0=vr0;float d0=s0/t0;vr8=d0;}
    {u32 a_=sp+(480);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=s0+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a2+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=s0+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=s0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+608);
    v1 = LD32(sp+612);
    ST32(sp+640, v0);
    ST32(sp+644, v1);
    v0 = LD32(sp+616);
    v1 = LD32(sp+620);
    ST32(sp+648, v0);
    ST32(sp+652, v1);
    {u32 a_=a2+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a2+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+688);
    v1 = LD32(sp+692);
    ST32(sp+624, v0);
    v0 = LD32(sp+696);
    ST32(sp+628, v1);
    ST32(sp+632, v0);
    {u32 a_=sp+(640);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1408);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    v1 = LD32(sp+700);
    ST32(sp+636, v1);
    {u32 a_=sp+(624);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=fp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {vr20=BITSF(v0);}
    {float s0=vr20;float s1=vr20;float s2=vr20;float s3=vr20;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr20;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr92=d0;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    if (cnd_) { goto L_088BC738; }
    goto L_088BC72C;
L_088BC72C:;
    {float s0=vr16;float t0=vr92;float d0=s0/t0;vr0=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BC738;
L_088BC738:;
    {u32 a_=sp+(512);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);vr88=BITSF(LD32(a_+0));vr89=BITSF(LD32(a_+4));vr90=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(1424);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {float s0=vr88;float s1=vr89;float s2=vr90;float t0=vr96;float t1=vr97;float t2=vr98;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr64=d0;vr65=d1;vr66=d2;}
    {u32 a_=sp+(560);vr68=BITSF(LD32(a_+0));vr69=BITSF(LD32(a_+4));vr70=BITSF(LD32(a_+8));vr71=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1472);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);vr84=BITSF(LD32(a_+0));vr85=BITSF(LD32(a_+4));vr86=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(1536);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1488);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr84;float s1=vr85;float s2=vr86;float t0=vr96;float t1=vr97;float t2=vr98;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr68=d0;vr69=d1;vr70=d2;}
    {u32 a_=sp+(544);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(528);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float t0=vr64;float t1=vr65;float t2=vr66;float o0=0;o0+=vr0*t0;o0+=vr4*t1;o0+=vr8*t2;float o1=0;o1+=vr1*t0;o1+=vr5*t1;o1+=vr9*t2;float o2=0;o2+=vr2*t0;o2+=vr6*t1;o2+=vr10*t2;vr32=o0;vr33=o1;vr34=o2;}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    v0 = LD32(sp+704);
    {u32 a_=sp+(576);vr76=BITSF(LD32(a_+0));vr77=BITSF(LD32(a_+4));vr78=BITSF(LD32(a_+8));vr79=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=sp+(592);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    v1 = LD32(sp+708);
    a0 = LD32(sp+712);
    a1 = LD32(sp+716);
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float t0=vr68;float t1=vr69;float t2=vr70;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    ST32(sp+624, v0);
    {v0=FBITS(vr92);}
    f3 = BITSF(v0);
    v0 = LD32(sp+704);
    ST32(sp+628, v1);
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(1504);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    ST32(sp+632, a0);
    {u32 a_=sp+(1456);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(1520);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    ST32(sp+636, a1);
    ST32(sp+608, v0);
    {u32 a_=sp+(624);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr88;float t1=vr89;float t2=vr90;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    v0 = LD32(sp+708);
    ST32(sp+612, v0);
    v0 = LD32(sp+716);
    v1 = LD32(sp+712);
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+620, v0);
    ST32(sp+616, v1);
    {u32 a_=sp+(608);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr84;float t1=vr85;float t2=vr86;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(s0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    f0 = f2;
    if (cnd_) { goto L_088BC84C; }
    goto L_088BC848;
L_088BC848:;
    f0 = BITSF(LD32(s0+376));
    goto L_088BC84C;
L_088BC84C:;
    v0 = LD32(a2+248);
    f2 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(a2+376)); goto L_088BC860; }
    goto L_088BC860;
L_088BC860:;
    f2 = f0 + f2;
    {u32 a_=sp+(704);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr96;float t1=vr97;float t2=vr98;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    v0 = FBITS(f21);
    f2 = f2 + f0;
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    f0 = f3 / f2;
    f1 = f1 * f22;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BC89C; }
    goto L_088BC89C;
L_088BC89C:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    v1 = FBITS(f0);
    {u32 a_=sp+(1552);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(1552);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s1 = sp + 736;
    f0 = BITSF(0);
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(s0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    v1 = s0 + 160;
    if (cnd_) { goto L_088BC8E0; }
    goto L_088BC8DC;
L_088BC8DC:;
    f0 = BITSF(LD32(s0+376));
    goto L_088BC8E0;
L_088BC8E0:;
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(1568);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    a0 = s0 + 0;
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = func_088C32BC(a0);
    goto L_088BC924;
L_088BC924:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1632);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1584);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1600);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1616);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(752);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    f0 = BITSF(0);
    {u32 a_=s0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(736);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float d0=-s0;float d1=-s1;float d2=-s2;vr4=d0;vr5=d1;vr6=d2;}
    s0 = LD32(s4+8);
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+752);
    v1 = LD32(sp+760);
    a0 = LD32(sp+764);
    ST32(sp+736, v0);
    v0 = LD32(sp+756);
    ST32(sp+744, v1);
    ST32(sp+740, v0);
    ST32(sp+748, a0);
    v0 = LD32(s0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    a1 = s0 + 160;
    if (cnd_) { goto L_088BC9B0; }
    goto L_088BC9AC;
L_088BC9AC:;
    f0 = BITSF(LD32(s0+376));
    goto L_088BC9B0;
L_088BC9B0:;
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(1648);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    a0 = s0 + 0;
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = func_088C32BC(a0);
    goto L_088BC9F4;
L_088BC9F4:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1712);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1664);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1680);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1696);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(720);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    v0 = D_08AEC6D0 - (-14640);
    f2 = BITSF(LD32(v0-14640));
    {u32 a_=s0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(s4+4);
    {u32 a_=fp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a1 = LD32(s4+8);
    {u32 a_=a0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {u32 a_=sp+(1728);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = f1 * f22;
    f0 = f0 * f2;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+752);
    ST32(a0+144, v0);
    v1 = LD32(sp+756);
    ST32(a0+148, v1);
    v0 = LD32(sp+760);
    ST32(a0+152, v0);
    v1 = LD32(sp+764);
    ST32(a0+156, v1);
    {u32 a_=fp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a1+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {u32 a_=sp+(1744);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = f1 * f22;
    f0 = f0 * f2;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a1+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+752);
    ST32(a1+144, v0);
    v1 = LD32(sp+756);
    ST32(a1+148, v1);
    v0 = LD32(sp+760);
    ST32(a1+152, v0);
    v1 = LD32(sp+764);
    ST32(a1+156, v1);
    goto L_088BCB14;
L_088BCB14:;
    sp = sp + 1920;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return; }
L_088BCB4C:;
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=fp+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    a0 = LD32(s4+8);
    f3 = f1;
    a1 = s0 + 160;
    s2 = sp + 656;
    s6 = 0 + 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=s0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+644);
    ST32(sp+672, v0);
    ST32(sp+676, v1);
    v0 = LD32(sp+648);
    v1 = LD32(sp+652);
    ST32(sp+680, v0);
    ST32(sp+684, v1);
    {u32 a_=a0+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=a0+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+644);
    {u32 a_=sp+(672);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+656, v0);
    ST32(sp+660, v1);
    v0 = LD32(sp+648);
    v1 = LD32(sp+652);
    ST32(sp+664, v0);
    ST32(sp+668, v1);
    {u32 a_=sp+(656);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = BITSF(LD32(s1+32));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {u32 a_=sp+(1200);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = f0 - f1;
    f1 = BITSF(LD32(s1+36));
    f0 = f0 * f1;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(s0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f3 = BITSF(LD32(s0+376)); goto L_088BCC34; }
    goto L_088BCC34;
L_088BCC34:;
    {u32 a_=s2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1216);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = s0 + 0;
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = func_088C32BC(a0);
    goto L_088BCC7C;
L_088BCC7C:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1280);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(624);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    a2 = s1 + 16;
    f0 = BITSF(0);
    {u32 a_=s0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(656);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float d0=-s0;float d1=-s1;float d2=-s2;vr4=d0;vr5=d1;vr6=d2;}
    s0 = LD32(s4+8);
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+640);
    v1 = LD32(sp+648);
    a0 = LD32(sp+652);
    ST32(sp+656, v0);
    v0 = LD32(sp+644);
    ST32(sp+664, v1);
    ST32(sp+660, v0);
    ST32(sp+668, a0);
    v0 = LD32(s0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    a1 = s0 + 160;
    if (cnd_) { goto L_088BCD0C; }
    goto L_088BCD08;
L_088BCD08:;
    f0 = BITSF(LD32(s0+376));
    goto L_088BCD0C;
L_088BCD0C:;
    {u32 a_=s2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1296);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = s0 + 0;
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = func_088C32BC(a0);
    goto L_088BCD54;
L_088BCD54:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1360);vr72=BITSF(LD32(a_+0));vr73=BITSF(LD32(a_+4));vr74=BITSF(LD32(a_+8));vr75=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(624);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr72;float s1=vr73;float s2=vr74;float s3=vr75;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s0+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=s0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s0 = LD32(s4+4);
    goto L_088BC510;
L_088BCDA0:;
    ST32(a0+32, v0);
    goto L_088BC4B4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 088BCDA8 */
u32 func_088BCDA8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[912] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 912);
L_088BCDA8:;
    sp = sp - 912;
    s7 = 15;
    s6 = D_08AEC6E4 - (-14620);
    s5 = D_08AEC6E0 - (-14624);
    s4 = D_08AEC6DC - (-14628);
    s3 = a0 + 0;
    s2 = 0 + 0;
    s0 = sp + 0;
    f22 = BITSF(0);
    a1 = LD32(a0+4);
    a0 = LD32(a0+8);
    v0 = LD32(a1);
    ST32(sp+240, v0);
    v0 = LD32(a1+4);
    ST32(sp+244, v0);
    v0 = LD32(a1+8);
    ST32(sp+248, v0);
    v1 = LD32(a1+12);
    ST32(sp+252, v1);
    v0 = LD32(a0);
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+256, v0);
    v1 = LD32(a0+4);
    ST32(sp+260, v1);
    v0 = LD32(a0+8);
    ST32(sp+264, v0);
    v1 = LD32(a0+12);
    ST32(sp+268, v1);
    {u32 a_=sp+(256);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1);
    ST32(sp+256, v0);
    v1 = LD32(a1+4);
    ST32(sp+260, v1);
    v0 = LD32(a1+8);
    ST32(sp+264, v0);
    v1 = LD32(a1+12);
    ST32(sp+268, v1);
    v0 = LD32(a0+16);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    v1 = LD32(a0+20);
    ST32(sp+244, v1);
    v0 = LD32(a0+24);
    ST32(sp+248, v0);
    v1 = LD32(a0+28);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1);
    ST32(sp+256, v0);
    v1 = LD32(a1+4);
    ST32(sp+260, v1);
    v0 = LD32(a1+8);
    ST32(sp+264, v0);
    v1 = LD32(a1+12);
    ST32(sp+268, v1);
    v0 = LD32(a0+32);
    ST32(sp+240, v0);
    v1 = LD32(a0+36);
    ST32(sp+244, v1);
    v0 = LD32(a0+40);
    ST32(sp+248, v0);
    v1 = LD32(a0+44);
    ST32(sp+252, v1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1+16);
    ST32(sp+256, v0);
    v1 = LD32(a1+20);
    ST32(sp+260, v1);
    v0 = LD32(a1+24);
    ST32(sp+264, v0);
    v1 = LD32(a1+28);
    ST32(sp+268, v1);
    v0 = LD32(a0);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    v1 = LD32(a0+4);
    ST32(sp+244, v1);
    v0 = LD32(a0+8);
    ST32(sp+248, v0);
    v1 = LD32(a0+12);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1+16);
    ST32(sp+256, v0);
    v1 = LD32(a1+20);
    ST32(sp+260, v1);
    v0 = LD32(a1+24);
    ST32(sp+264, v0);
    v1 = LD32(a1+28);
    ST32(sp+268, v1);
    v0 = LD32(a0+16);
    ST32(sp+240, v0);
    v1 = LD32(a0+20);
    ST32(sp+244, v1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(a0+24);
    ST32(sp+248, v0);
    v1 = LD32(a0+28);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1+16);
    ST32(sp+256, v0);
    v1 = LD32(a1+20);
    ST32(sp+260, v1);
    v0 = LD32(a1+24);
    ST32(sp+264, v0);
    v1 = LD32(a1+28);
    ST32(sp+268, v1);
    v0 = LD32(a0+32);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    v1 = LD32(a0+36);
    ST32(sp+244, v1);
    v0 = LD32(a0+40);
    ST32(sp+248, v0);
    v1 = LD32(a0+44);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1+32);
    ST32(sp+256, v0);
    v1 = LD32(a1+36);
    ST32(sp+260, v1);
    v0 = LD32(a1+40);
    ST32(sp+264, v0);
    v1 = LD32(a1+44);
    ST32(sp+268, v1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(a0);
    ST32(sp+240, v0);
    v1 = LD32(a0+4);
    ST32(sp+244, v1);
    v0 = LD32(a0+8);
    ST32(sp+248, v0);
    v1 = LD32(a0+12);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1+32);
    ST32(sp+256, v0);
    v1 = LD32(a1+36);
    ST32(sp+260, v1);
    v0 = LD32(a1+40);
    ST32(sp+264, v0);
    v1 = LD32(a1+44);
    ST32(sp+268, v1);
    v0 = LD32(a0+16);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    v1 = LD32(a0+20);
    ST32(sp+244, v1);
    v0 = LD32(a0+24);
    ST32(sp+248, v0);
    v1 = LD32(a0+28);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1+32);
    ST32(sp+256, v0);
    v1 = LD32(a1+36);
    ST32(sp+260, v1);
    v0 = LD32(a1+40);
    ST32(sp+264, v0);
    v1 = LD32(a1+44);
    ST32(sp+268, v1);
    v0 = LD32(a0+32);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    v1 = LD32(a0+36);
    ST32(sp+244, v1);
    v0 = LD32(a0+40);
    ST32(sp+248, v0);
    v1 = LD32(a0+44);
    ST32(sp+252, v1);
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(a1);
    ST32(sp+144, v0);
    v1 = LD32(a1+4);
    ST32(sp+148, v1);
    v0 = LD32(a1+8);
    ST32(sp+152, v0);
    v1 = LD32(a1+12);
    ST32(sp+156, v1);
    v0 = LD32(a1+16);
    ST32(sp+160, v0);
    v1 = LD32(a1+20);
    ST32(sp+164, v1);
    v0 = LD32(a1+24);
    ST32(sp+168, v0);
    v1 = LD32(a1+28);
    ST32(sp+172, v1);
    v0 = LD32(a1+32);
    ST32(sp+176, v0);
    v1 = LD32(a1+36);
    ST32(sp+180, v1);
    v0 = LD32(a1+40);
    f21 = BITSF(LD32(s4-14628));
    ST32(sp+184, v0);
    v1 = LD32(a1+44);
    ST32(sp+188, v1);
    v0 = LD32(a0);
    ST32(sp+192, v0);
    v1 = LD32(a0+4);
    ST32(sp+196, v1);
    v0 = LD32(a0+8);
    ST32(sp+200, v0);
    v1 = LD32(a0+12);
    ST32(sp+204, v1);
    v0 = LD32(a0+16);
    ST32(sp+208, v0);
    v0 = D_08AEC6E8 - (-14616);
    v1 = LD32(a0+20);
    f23 = BITSF(LD32(v0-14616));
    ST32(sp+212, v1);
    v0 = LD32(a0+24);
    ST32(sp+216, v0);
    v1 = LD32(a0+28);
    ST32(sp+220, v1);
    v0 = LD32(a0+32);
    ST32(sp+224, v0);
    v1 = LD32(a0+36);
    ST32(sp+228, v1);
    v0 = LD32(a0+40);
    ST32(sp+232, v0);
    v1 = LD32(a0+44);
    ST32(sp+236, v1);
    {u32 a_=a1+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a1+(208);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=a0+(224);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a0+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=a0+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a1+(224);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BD1DC;
L_088BD1DC:;
    f0 = BITSF(LD32(s5-14624));
    s1 = s2 << 2;
    v0 = s1 + sp;
    ST32(v0+272, FBITS(f0));
    {u32 a_=s0+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(s6-14620));
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BD68C; }
    goto L_088BD210;
L_088BD210:;
    s2 = s2 + 1;
    v0 = s2 < 0xfu;
    cnd_ = v0 != 0;
    s0 = s0 + 16;
    if (cnd_) { goto L_088BD1DC; }
    goto L_088BD220;
L_088BD220:;
    f0 = BITSF(0);
    v0 = D_08AEC6EC - (-14612);
    fcc = FCMP(f22, f0, 14);
    cnd_ = !fcc;
    f4 = BITSF(LD32(v0-14612));
    if (cnd_) { goto L_088BD288; }
    goto L_088BD238;
L_088BD238:;
    v0 = D_08AEC6E4 - (-14620);
    f2 = BITSF(LD32(v0-14620));
    f3 = f0;
    s7 = 15;
    a0 = 0 + 0;
    a1 = sp + 272;
    v1 = sp + 0;
    goto L_088BD254;
L_088BD254:;
    {u32 a_=v1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1)); goto L_088BD648; }
    goto L_088BD274;
L_088BD274:;
    a0 = a0 + 1;
    goto L_088BD278;
L_088BD278:;
    v0 = a0 < 0xfu;
    v1 = v1 + 16;
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_088BD254; }
    goto L_088BD288;
L_088BD288:;
    v0 = s7 < 0xfu;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BD404; }
    goto L_088BD294;
L_088BD294:;
    a0 = s7 << 4;
    a0 = a0 + sp;
    v0 = LD32(a0);
    f0 = BITSF(LD32(s4-14628));
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    ST32(sp+368, v0);
    fcc = FCMP(f0, f22, 14);
    v0 = LD32(a0+4);
    ST32(sp+372, v0);
    v1 = LD32(a0+8);
    ST32(sp+376, v1);
    v0 = LD32(a0+12);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    cnd_ = fcc;
    ST32(sp+380, v0);
    if (cnd_) { goto L_088BD404; }
    goto L_088BD2D4;
L_088BD2D4:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s6-14620)); goto L_088BD4D0; }
    goto L_088BD2E8;
L_088BD2E8:;
    v1 = LD32(s3+4);
    v1 = LD32(v1+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    f0 = f0 - f22;
    if (cnd_) { goto L_088BD360; }
    goto L_088BD2FC;
L_088BD2FC:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+8); goto L_088BD364; }
    goto L_088BD308;
L_088BD308:;
    v0 = (v1 >> 6) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+8); goto L_088BD364; }
    goto L_088BD314;
L_088BD314:;
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    v0 = FBITS(f0);
    {u32 a_=sp+(784);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+416);
    v1 = LD32(sp+420);
    ST32(sp+384, v0);
    ST32(sp+388, v1);
    v0 = LD32(sp+424);
    v1 = LD32(sp+428);
    ST32(sp+392, v0);
    ST32(sp+396, v1);
    goto L_088BD360;
L_088BD360:;
    v0 = LD32(s3+8);
    goto L_088BD364;
L_088BD364:;
    a0 = LD32(v0+248);
    v1 = (a0 >> 4) & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(s3+4); goto L_088BD3DC; }
    goto L_088BD374;
L_088BD374:;
    v0 = (a0 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s3+4); goto L_088BD3DC; }
    goto L_088BD380;
L_088BD380:;
    v0 = (a0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s3+4); goto L_088BD3DC; }
    goto L_088BD38C;
L_088BD38C:;
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(800);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088BD3B8;
L_088BD3B8:;
    v0 = LD32(sp+432);
    v1 = LD32(sp+436);
    ST32(sp+400, v0);
    ST32(sp+404, v1);
    v0 = LD32(sp+440);
    v1 = LD32(sp+444);
    ST32(sp+408, v0);
    ST32(sp+412, v1);
    a2 = LD32(s3+4);
    goto L_088BD3DC;
L_088BD3DC:;
    a3 = LD32(s3+8);
    s0 = sp + 448;
    s1 = sp + 608;
    s2 = sp + 368;
    a0 = s0 + 0;
    a1 = s1 + 0;
    t0 = s2 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = func_088B2BF0(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; });
    goto L_088BD3FC;
L_088BD3FC:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BD444; }
    goto L_088BD404;
L_088BD404:;
    goto L_088BD408;
L_088BD408:;
    v0 = a2 + 0;
    sp = sp + 912;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;return v0; }
L_088BD444:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    t0 = s2 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_088BC028(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_088BD45C;
L_088BD45C:;
    a0 = LD32(s3+4);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+8); goto L_088BD490; }
    goto L_088BD470;
L_088BD470:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+8); goto L_088BD490; }
    goto L_088BD47C;
L_088BD47C:;
    {u32 a_=a0+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a0+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(s3+8);
    goto L_088BD490;
L_088BD490:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_088BD4C0; }
    goto L_088BD4A0;
L_088BD4A0:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s3 + 0; goto L_088BD4C0; }
    goto L_088BD4AC;
L_088BD4AC:;
    {u32 a_=a0+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a0+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = s3 + 0;
    goto L_088BD4C0;
L_088BD4C0:;
    a1 = s2 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_088BEB50(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_088BD4C8;
L_088BD4C8:;
    a2 = 1;
    goto L_088BD404;
L_088BD4D0:;
    v1 = LD32(s3+4);
    f1 = BITSF(LD32(s3+12));
    f0 = f4 + f0;
    v0 = LD32(v1+248);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    f0 = f0 * f1;
    if (cnd_) { goto L_088BD4F0; }
    goto L_088BD4EC;
L_088BD4EC:;
    f2 = BITSF(LD32(v1+376));
    goto L_088BD4F0;
L_088BD4F0:;
    a0 = LD32(s3+8);
    f1 = BITSF(0);
    v0 = LD32(a0+248);
    v0 = v0 & 0x30;
    cnd_ = v0 != 0;
    f4 = f0 * f2;
    if (cnd_) { goto L_088BD50C; }
    goto L_088BD508;
L_088BD508:;
    f1 = BITSF(LD32(a0+376));
    goto L_088BD50C;
L_088BD50C:;
    v0 = LD32(v1+248);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    f3 = f0 * f1;
    if (cnd_) { goto L_088BD574; }
    goto L_088BD51C;
L_088BD51C:;
    v0 = LD32(v1+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BD538; }
    goto L_088BD538;
L_088BD538:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_088BD550; }
    goto L_088BD54C;
L_088BD54C:;
    f2 = f1;
    goto L_088BD550;
L_088BD550:;
    v0 = D_08AEC6F0 - (-14608);
    f0 = BITSF(LD32(v0-14608));
    f0 = f2 * f0;
    fcc = FCMP(f4, f0, 14);
    cnd_ = fcc;
    f1 = f4;
    if (cnd_) { goto L_088BD570; }
    goto L_088BD56C;
L_088BD56C:;
    f1 = f0;
    goto L_088BD570;
L_088BD570:;
    f4 = f1;
    goto L_088BD574;
L_088BD574:;
    v0 = LD32(a0+248);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 == 0;
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BD5E0; }
    goto L_088BD584;
L_088BD584:;
    v0 = LD32(a0+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BD5A0; }
    goto L_088BD5A0;
L_088BD5A0:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_088BD5B8; }
    goto L_088BD5B4;
L_088BD5B4:;
    f2 = f1;
    goto L_088BD5B8;
L_088BD5B8:;
    v0 = D_08AEC6F0 - (-14608);
    f0 = BITSF(LD32(v0-14608));
    f0 = f2 * f0;
    fcc = FCMP(f3, f0, 14);
    cnd_ = fcc;
    f1 = f3;
    if (cnd_) { goto L_088BD5D8; }
    goto L_088BD5D4;
L_088BD5D4:;
    f1 = f0;
    goto L_088BD5D8;
L_088BD5D8:;
    f3 = f1;
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088BD5E0;
L_088BD5E0:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr4=d0;vr5=d1;vr6=d2;}
    v0 = FBITS(f4);
    {u32 a_=sp+(816);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {vr8=BITSF(v0);}
    {float s0=vr8;float s1=vr8;float s2=vr8;float s3=vr8;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = FBITS(f3);
    {u32 a_=sp+(832);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {vr8=BITSF(v0);}
    {float s0=vr8;float s1=vr8;float s2=vr8;float s3=vr8;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+432);
    v1 = LD32(sp+436);
    a0 = LD32(sp+440);
    a1 = LD32(sp+444);
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    ST32(sp+384, v0);
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+388, v1);
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+392, a0);
    ST32(sp+396, a1);
    goto L_088BD3B8;
L_088BD648:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BD674; }
    goto L_088BD658;
L_088BD658:;
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BD674; }
    goto L_088BD668;
L_088BD668:;
    f4 = f0;
    s7 = a0 + 0;
    goto L_088BD274;
L_088BD674:;
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = a0 + 1; goto L_088BD278; }
    goto L_088BD684;
L_088BD684:;
    goto L_088BD408;
L_088BD68C:;
    f20 = BITSF(0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    if (cnd_) { goto L_088BD6DC; }
    goto L_088BD6AC;
L_088BD6AC:;
    {float s0=vr12;float s1=vr13;float s2=vr14;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+368);
    ST32(s0, v0);
    v1 = LD32(sp+372);
    ST32(s0+4, v1);
    v0 = LD32(sp+376);
    ST32(s0+8, v0);
    v1 = LD32(sp+380);
    ST32(s0+12, v1);
    {u32 a_=s0+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    goto L_088BD6DC;
L_088BD6DC:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    a0 = LD32(s3+4);
    a1 = s0 + 0;
    a2 = sp + 768;
    a3 = sp + 772;
    {float s0=vr8;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+768, FBITS(f20));
    ST32(sp+772, FBITS(f20));
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;func_088C9FDC(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];});
    goto L_088BD70C;
L_088BD70C:;
    a1 = s0 + 0;
    a0 = LD32(s3+8);
    a2 = sp + 776;
    a3 = sp + 780;
    ST32(sp+776, FBITS(f20));
    ST32(sp+780, FBITS(f20));
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;func_088C9FDC(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];});
    goto L_088BD728;
L_088BD728:;
    {u32 a_=s0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+776));
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(LD32(sp+768));
    {v0=FBITS(vr0);}
    f5 = BITSF(v0);
    f1 = f1 - f0;
    f0 = BITSF(LD32(sp+772));
    f4 = BITSF(FBITS(f5) ^ 0x80000000u);
    f3 = BITSF(LD32(sp+780));
    f2 = f1 + f0;
    f1 = f1 - f0;
    fcc = FCMP(f20, f4, 14);
    f6 = f20;
    f7 = f2 + f3;
    cnd_ = fcc;
    f3 = f1 - f3;
    if (cnd_) { goto L_088BD774; }
    goto L_088BD770;
L_088BD770:;
    f6 = f4;
    goto L_088BD774;
L_088BD774:;
    fcc = FCMP(f4, f20, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_088BD788; }
    goto L_088BD784;
L_088BD784:;
    f0 = f4;
    goto L_088BD788;
L_088BD788:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BD404; }
    goto L_088BD798;
L_088BD798:;
    fcc = FCMP(f7, f6, 12);
    cnd_ = fcc;
    v0 = (v0 >> 0) & 0x7fffffff;
    if (cnd_) { goto L_088BD404; }
    goto L_088BD7A8;
L_088BD7A8:;
    f0 = BITSF(v0);
    f2 = f20;
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(s4-14628));
    if (cnd_) { goto L_088BD7D4; }
    goto L_088BD7C0;
L_088BD7C0:;
    f0 = f1 / f5;
    f2 = f7 + f5;
    f1 = f3 + f5;
    f2 = f2 * f0;
    f1 = f1 * f0;
    goto L_088BD7D4;
L_088BD7D4:;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_088BD7E8; }
    goto L_088BD7E4;
L_088BD7E4:;
    f0 = f1;
    goto L_088BD7E8;
L_088BD7E8:;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f1; goto L_088BD7F8; }
    goto L_088BD7F8;
L_088BD7F8:;
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BD810; }
    goto L_088BD808;
L_088BD808:;
    f22 = f0;
    s7 = s2 + 0;
    goto L_088BD810;
L_088BD810:;
    fcc = FCMP(f21, f2, 14);
    cnd_ = fcc;
    f0 = f21;
    if (cnd_) { goto L_088BD824; }
    goto L_088BD820;
L_088BD820:;
    f0 = f2;
    goto L_088BD824;
L_088BD824:;
    fcc = FCMP(f0, f22, 12);
    f21 = f0;
    cnd_ = fcc;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BD404; }
    goto L_088BD834;
L_088BD834:;
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    f2 = f7;
    fcc = FCMP(f7, f1, 14);
    cnd_ = fcc;
    v0 = s1 + sp;
    if (cnd_) { goto L_088BD850; }
    goto L_088BD84C;
L_088BD84C:;
    f2 = f1;
    goto L_088BD850;
L_088BD850:;
    ST32(v0+272, FBITS(f2));
    goto L_088BD210;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 088BD858 */
u32 func_088BD858(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[928] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 928);
L_088BD858:;
    sp = sp - 928;
    v0 = a1 + 208;
    s6 = a0 + 0;
    a0 = sp + 80;
    s2 = a1 + 0;
    s0 = a2 + 0;
    ST32(sp+656, v0);
    func_088C3A64(a0, a1);
    goto L_088BD8A4;
L_088BD8A4:;
    t0 = sp + 32;
    v0 = LD32(sp+656);
    a1 = LD32(sp+656);
    v1 = LD32(s2+208);
    a2 = LD32(v0+12);
    v0 = LD32(sp+80);
    a0 = LD32(a1+4);
    a1 = LD32(a1+8);
    ST32(sp, v0);
    a3 = s2 + 0;
    t1 = s2 + 48;
    v0 = LD32(sp+84);
    ST32(sp+648, 0);
    ST32(sp+4, v0);
    v0 = LD32(sp+88);
    ST32(sp+652, 0);
    ST32(sp+8, v0);
    v0 = LD32(sp+92);
    ST32(sp+16, v1);
    ST32(sp+12, v0);
    ST32(sp+20, a0);
    ST32(sp+24, a1);
    ST32(sp+28, a2);
    goto L_088BD900;
L_088BD900:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != t1;
    ST32(t0-4, a1);
    if (cnd_) { goto L_088BD900; }
    goto L_088BD92C;
L_088BD92C:;
    a0 = s0 + 0;
    { u64 r_ = func_088C9D8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BD934;
L_088BD934:;
    {u32 a_=s2+(224);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s2+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[12];float t1=v[13];float t2=v[14];float t3=v[15];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    v0 = LD32(s0+276);
    v1 = D_08AEC6F4 - (-14604);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f20 = BITSF(LD32(v1-14604));
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    a1 = LD32(v0+32);
    v0 = LD32(sp+176);
    v1 = LD32(sp+184);
    a0 = sp + 192;
    ST32(sp+16, v0);
    s3 = sp + 208;
    v0 = LD32(sp+180);
    ST32(sp+24, v1);
    ST32(sp+20, v0);
    v0 = LD32(sp+188);
    ST32(sp+28, v0);
    func_088B6508(a0, a1);
    goto L_088BD9A4;
L_088BD9A4:;
    a0 = sp + 192;
    func_088B6518(a0);
    goto L_088BD9AC;
L_088BD9AC:;
    a0 = sp + 192;
    goto L_088BD9B0;
L_088BD9B0:;
    a1 = s3 + 0;
    v0 = func_088B657C(a0, a1);
    goto L_088BD9B8;
L_088BD9B8:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BDD44; }
    goto L_088BD9C0;
L_088BD9C0:;
    {u32 a_=s0+(0);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(192);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    a1 = s3 + 0;
    goto L_088BD9D4;
L_088BD9D4:;
    {u32 a_=sp+(720);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=v[96];float t1=v[97];float t2=v[98];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a2 = a2 + 1;
    a0 = a2 < 0x3u;
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+176);
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    ST32(a1, v0);
    v1 = LD32(sp+180);
    ST32(a1+4, v1);
    v0 = LD32(sp+184);
    ST32(a1+8, v0);
    v1 = LD32(sp+188);
    ST32(a1+12, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 16;
    if (cnd_) { goto L_088BD9D4; }
    goto L_088BDA38;
L_088BDA38:;
    v0 = LD32(sp+652);
    cnd_ = v0 == 0;
    s7 = sp + 176;
    if (cnd_) { goto L_088BDC54; }
    goto L_088BDA44;
L_088BDA44:;
    a0 = sp + 0;
    goto L_088BDA48;
L_088BDA48:;
    a1 = s3 + 0;
    a2 = sp + 644;
    a3 = s7 + 0;
    v0 = func_088B3E5C(a0, a1, a2, a3);
    goto L_088BDA58;
L_088BDA58:;
    cnd_ = v0 != 0;
    s5 = sp + 272;
    if (cnd_) { goto L_088BDA70; }
    goto L_088BDA60;
L_088BDA60:;
    a0 = sp + 192;
    func_088B6524(a0);
    goto L_088BDA68;
L_088BDA68:;
    a0 = sp + 192;
    goto L_088BD9B0;
L_088BDA70:;
    s4 = sp + 432;
    a0 = s5 + 0;
    a1 = s4 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t0 = s7 + 0;
    v0 = func_088B4850(a0, a1, a2, a3, t0);
    goto L_088BDA8C;
L_088BDA8C:;
    f0 = BITSF(LD32(sp+644));
    {u32 a_=sp+(176);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    f0 = BITSF(LD32(s6+12));
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    fp = v0 + 0;
    {u32 a_=sp+(752);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    v0 = LD32(s2+248);
    v1 = 1;
    ST32(sp+648, v1);
    v0 = v0 & 0x30;
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f0 = BITSF(0);
    cnd_ = v0 != 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    if (cnd_) { goto L_088BDAF8; }
    goto L_088BDAF4;
L_088BDAF4:;
    f0 = BITSF(LD32(s2+376));
    goto L_088BDAF8;
L_088BDAF8:;
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = FBITS(f0);
    {u32 a_=sp+(768);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(a0);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    v0 = LD32(s0+248);
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float d0=-s0;float d1=-s1;float d2=-s2;v[4]=d0;v[5]=d1;v[6]=d2;}
    v0 = v0 & 0x30;
    s1 = sp + 624;
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f0 = BITSF(0);
    cnd_ = v0 != 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088BDB40; }
    goto L_088BDB3C;
L_088BDB3C:;
    f0 = BITSF(LD32(s0+376));
    goto L_088BDB40;
L_088BDB40:;
    {u32 a_=s1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(784);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    {float s0=v[4];float s1=v[4];float s2=v[4];float s3=v[4];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    v0 = LD32(s6+4);
    {u32 a_=sp+(784);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    cnd_ = v0 == s2;
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    if (cnd_) { goto L_088BDC30; }
    goto L_088BDB6C;
L_088BDB6C:;
    {float s0=v[8];float s1=v[9];float s2=v[10];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    a0 = s6 + 0;
    a1 = s1 + 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    func_088BEB50(a0, a1);
    goto L_088BDB80;
L_088BDB80:;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    a1 = fp + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    t0 = s1 + 0;
    a0 = s6 + 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BDBA0;
L_088BDBA0:;
    func_088BC028(a0, a1, a2, a3, t0);
    goto L_088BDBA8;
L_088BDBA8:;
    v1 = LD32(s2+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+248); goto L_088BDC00; }
    goto L_088BDBB8;
L_088BDBB8:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+248); goto L_088BDC00; }
    goto L_088BDBC4;
L_088BDBC4:;
    {u32 a_=s2+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=s2+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(sp+656);
    a2 = LD32(sp+656);
    v0 = LD32(s2+208);
    v1 = LD32(a0+4);
    a1 = LD32(a2+12);
    a0 = LD32(a0+8);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    v1 = LD32(s0+248);
    goto L_088BDC00;
L_088BDC00:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 5) & 0x1;
    if (cnd_) { goto L_088BDA60; }
    goto L_088BDC0C;
L_088BDC0C:;
    cnd_ = v0 != 0;
    {u32 a_=sp+(608);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BDA60; }
    goto L_088BDC14;
L_088BDC14:;
    {u32 a_=s0+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[4]=d0;v[5]=d1;v[6]=d2;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=s0+(192);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s0+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BDA60;
L_088BDC30:;
    a0 = s6 + 0;
    a1 = s7 + 0;
    func_088BEB50(a0, a1);
    goto L_088BDC3C;
L_088BDC3C:;
    a0 = s6 + 0;
    a1 = fp + 0;
    a2 = s5 + 0;
    a3 = s4 + 0;
    t0 = s7 + 0;
    goto L_088BDBA0;
L_088BDC54:;
    s1 = sp + 256;
    a0 = sp + 0;
    a1 = sp + 144;
    f12 = f20;
    a2 = s3 + 0;
    a3 = s7 + 0;
    t0 = sp + 640;
    t1 = s1 + 0;
    t2 = 0 + 0;
    ST32(sp+640, 0);
    f0 = func_088B3784(a0, a1, a2, a3, t0, t1, t2, f12);
    goto L_088BDC80;
L_088BDC80:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = LD32(sp+656);
    if (cnd_) { goto L_088BDCC8; }
    goto L_088BDC98;
L_088BDC98:;
    a2 = LD32(sp+656);
    v0 = LD32(s2+208);
    v1 = LD32(a0+4);
    a1 = LD32(a2+12);
    a0 = LD32(a0+8);
    a2 = 1;
    ST32(sp+652, a2);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    goto L_088BDA44;
L_088BDCC8:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+652);
    if (cnd_) { goto L_088BDD34; }
    goto L_088BDCD8;
L_088BDCD8:;
    v0 = LD32(sp+176);
    v1 = LD32(sp+188);
    f20 = f1;
    ST32(sp+80, v0);
    a3 = sp + 96;
    a2 = s3 + 0;
    v0 = LD32(sp+180);
    ST32(sp+92, v1);
    ST32(sp+84, v0);
    v0 = LD32(sp+184);
    ST32(sp+88, v0);
    goto L_088BDD04;
L_088BDD04:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(a3, v0);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = a2 != s1;
    ST32(a3-4, a1);
    if (cnd_) { goto L_088BDD04; }
    goto L_088BDD30;
L_088BDD30:;
    v0 = LD32(sp+652);
    goto L_088BDD34;
L_088BDD34:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088BDA60; }
    goto L_088BDD3C;
L_088BDD3C:;
    a0 = sp + 0;
    goto L_088BDA48;
L_088BDD44:;
    v0 = LD32(sp+652);
    cnd_ = v0 != 0;
    v1 = D_08AEC6F4 - (-14604);
    if (cnd_) { goto L_088BDD64; }
    goto L_088BDD50;
L_088BDD50:;
    f0 = BITSF(LD32(v1-14604));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    {u32 a_=sp+(80);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BDDA4; }
    goto L_088BDD64;
L_088BDD64:;
    a0 = sp + 192;
    func_088B6510();
    goto L_088BDD6C;
L_088BDD6C:;
    v0 = LD32(sp+648);
    sp = sp + 928;
    return v0;
L_088BDDA4:;
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[12]=sum;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    s3 = sp + 432;
    s4 = sp + 272;
    v0 = 1;
    a3 = sp + 96;
    a0 = s3 + 0;
    {float s0=v[12];float d0=sqrtf(s0);v[12]=d0;}
    a1 = s4 + 0;
    a2 = s2 + 0;
    t0 = sp + 80;
    f20 = f0 - f20;
    ST32(sp+648, v0);
    {float s0=v[0];float t0=v[12];float d0=s0/t0;v[4]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v0 = func_088B4850(a0, a1, a2, a3, t0);
    goto L_088BDDE8;
L_088BDDE8:;
    s1 = v0 + 0;
    v0 = LD32(s6+4);
    cnd_ = v0 == s2;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BDF54; }
    goto L_088BDDF8;
L_088BDDF8:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    s0 = sp + 624;
    a0 = s6 + 0;
    a1 = s0 + 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    func_088BEB50(a0, a1);
    goto L_088BDE10;
L_088BDE10:;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    a1 = s1 + 0;
    a2 = s4 + 0;
    a3 = s3 + 0;
    t0 = s0 + 0;
    a0 = s6 + 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BDE30;
L_088BDE30:;
    func_088BC028(a0, a1, a2, a3, t0);
    goto L_088BDE38;
L_088BDE38:;
    a0 = LD32(s6+4);
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s6+8); goto L_088BDECC; }
    goto L_088BDE4C;
L_088BDE4C:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s6+8); goto L_088BDECC; }
    goto L_088BDE58;
L_088BDE58:;
    v0 = (v1 >> 6) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s6+8); goto L_088BDECC; }
    goto L_088BDE64;
L_088BDE64:;
    {u32 a_=a0+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = FBITS(f20);
    {u32 a_=sp+(800);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(816);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {v[12]=BITSF(v1);}
    {float s0=v[12];float s1=v[12];float s2=v[12];float s3=v[12];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=a0+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=a0+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(s6+4);
    {u32 a_=v0+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=v0+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=v0+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(s6+8);
    goto L_088BDECC;
L_088BDECC:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 5) & 0x1;
    if (cnd_) { goto L_088BDD64; }
    goto L_088BDEDC;
L_088BDEDC:;
    cnd_ = v0 != 0;
    v0 = (v1 >> 6) & 0x1;
    if (cnd_) { goto L_088BDD64; }
    goto L_088BDEE4;
L_088BDEE4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BDD64; }
    goto L_088BDEEC;
L_088BDEEC:;
    {u32 a_=a0+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = FBITS(f20);
    {u32 a_=sp+(832);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(848);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {v[12]=BITSF(v0);}
    {float s0=v[12];float s1=v[12];float s2=v[12];float s3=v[12];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=a0+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=a0+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(s6+8);
    {u32 a_=v0+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=v0+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=v0+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BDD64;
L_088BDF54:;
    a0 = s6 + 0;
    a1 = sp + 80;
    func_088BEB50(a0, a1);
    goto L_088BDF60;
L_088BDF60:;
    a0 = s6 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = sp + 80;
    goto L_088BDE30;
}

/* 088BDF78 */
u32 func_088BDF78(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_088BDF78:;
    sp = sp - 304;
    s5 = sp + 96;
    fp = a0 + 0;
    a0 = s5 + 0;
    s7 = a1 + 208;
    s6 = a1 + 0;
    s4 = a2 + 0;
    func_088C3A64(a0, a1);
    goto L_088BDFC8;
L_088BDFC8:;
    t1 = sp + 48;
    v0 = LD32(sp+96);
    a0 = LD32(s6+208);
    a1 = LD32(s7+4);
    a2 = LD32(s7+8);
    a3 = LD32(s7+12);
    ST32(sp+16, v0);
    t0 = s6 + 0;
    t2 = s6 + 48;
    v0 = LD32(sp+100);
    v1 = LD32(sp+108);
    ST32(sp+32, a0);
    ST32(sp+20, v0);
    v0 = LD32(sp+104);
    ST32(sp+28, v1);
    ST32(sp+24, v0);
    ST32(sp+36, a1);
    ST32(sp+40, a2);
    ST32(sp+44, a3);
    goto L_088BE014;
L_088BE014:;
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
    if (cnd_) { goto L_088BE014; }
    goto L_088BE040;
L_088BE040:;
    v0 = LD32(s4+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BE05C; }
    goto L_088BE05C;
L_088BE05C:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f20 = f0;
    if (cnd_) { goto L_088BE074; }
    goto L_088BE070;
L_088BE070:;
    f20 = f1;
    goto L_088BE074;
L_088BE074:;
    {u32 a_=s4+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s4+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(s4+224);
    v1 = LD32(s4+228);
    a0 = LD32(s4+232);
    a1 = LD32(s4+236);
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+96, v0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    ST32(sp+100, v1);
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    ST32(sp+104, a0);
    {float s0=v[8];float t0=v[8];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    ST32(sp+108, a1);
    if (cnd_) { goto L_088BE0C4; }
    goto L_088BE0B4;
L_088BE0B4:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BE0C4;
L_088BE0C4:;
    {v0=FBITS(v[8]);}
    f0 = BITSF(v0);
    f1 = f0 / f20;
    f2 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC6F8 - (-14600);
    if (cnd_) { goto L_088BE424; }
    goto L_088BE0E8;
L_088BE0E8:;
    f0 = BITSF(LD32(v0-14600));
    f0 = f1 + f0;
    goto L_088BE0F0;
L_088BE0F0:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    s0 = v0 + 1;
    f1 = BITSF(s0);
    cnd_ = (s32)s0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088BE408; }
    goto L_088BE108;
L_088BE108:;
    f1 = f2 / f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    if (cnd_) { goto L_088BE144; }
    goto L_088BE120;
L_088BE120:;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    goto L_088BE144;
L_088BE144:;
    s3 = sp + 16;
    a0 = s3 + 0;
    a1 = s5 + 0;
    f12 = f20;
    a2 = sp + 160;
    a3 = sp + 0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = func_088B43EC(a0, a1, a2, a3, f12);
    goto L_088BE164;
L_088BE164:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088BE194; }
    goto L_088BE16C;
L_088BE16C:;
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = BITSF(0);
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { s1 = 0 + 0; goto L_088BE194; }
    goto L_088BE194;
L_088BE194:;
    f21 = BITSF(0);
    s2 = (u32)-1;
    goto L_088BE19C;
L_088BE19C:;
    cnd_ = s1 != 0;
    v1 = LD32(sp+100);
    if (cnd_) { goto L_088BE214; }
    goto L_088BE1A4;
L_088BE1A4:;
    s0 = s0 - 1;
    goto L_088BE1A8;
L_088BE1A8:;
    a0 = s3 + 0;
    a1 = s5 + 0;
    f12 = f20;
    a2 = sp + 160;
    cnd_ = s0 == s2;
    a3 = sp + 0;
    if (cnd_) { goto L_088BE210; }
    goto L_088BE1C0;
L_088BE1C0:;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = func_088B43EC(a0, a1, a2, a3, f12);
    goto L_088BE1D4;
L_088BE1D4:;
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088BE19C; }
    goto L_088BE1DC;
L_088BE1DC:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_088BE1A8; }
    goto L_088BE1E4;
L_088BE1E4:;
    {u32 a_=sp+(112);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { s1 = 0 + 0; goto L_088BE19C; }
    goto L_088BE208;
L_088BE208:;
    goto L_088BE19C;
L_088BE210:;
    v1 = LD32(sp+100);
    goto L_088BE214;
L_088BE214:;
    a0 = LD32(sp+104);
    a1 = LD32(sp+108);
    v0 = LD32(sp+96);
    ST32(s4+212, v1);
    ST32(s4+208, v0);
    ST32(s4+216, a0);
    cnd_ = s1 == 0;
    ST32(s4+220, a1);
    if (cnd_) { goto L_088BE3A8; }
    goto L_088BE234;
L_088BE234:;
    f0 = BITSF(LD32(fp+12));
    f1 = BITSF(LD32(sp+160));
    v1 = LD32(s6+248);
    f1 = f1 * f0;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    ST32(sp+160, FBITS(f1));
    if (cnd_) { goto L_088BE2B8; }
    goto L_088BE250;
L_088BE250:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s4+248); goto L_088BE2BC; }
    goto L_088BE25C;
L_088BE25C:;
    v0 = v1 & 0x30;
    f2 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s6+376)); goto L_088BE26C; }
    goto L_088BE26C;
L_088BE26C:;
    f0 = BITSF(LD32(sp+160));
    v0 = D_08AEC6FC - (-14596);
    f1 = BITSF(LD32(v0-14596));
    f0 = f0 * f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BE28C; }
    goto L_088BE28C;
L_088BE28C:;
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=s7+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s7+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BE2B8;
L_088BE2B8:;
    v1 = LD32(s4+248);
    goto L_088BE2BC;
L_088BE2BC:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    {u32 a_=sp+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BE334; }
    goto L_088BE2C8;
L_088BE2C8:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 & 0x30;
    if (cnd_) { goto L_088BE334; }
    goto L_088BE2D4;
L_088BE2D4:;
    f2 = BITSF(0);
    cnd_ = v0 != 0;
    v1 = s4 + 208;
    if (cnd_) { goto L_088BE2E4; }
    goto L_088BE2E0;
L_088BE2E0:;
    f2 = BITSF(LD32(s4+376));
    goto L_088BE2E4;
L_088BE2E4:;
    f0 = BITSF(LD32(sp+160));
    v0 = D_08AEC6FC - (-14596);
    f1 = BITSF(LD32(v0-14596));
    f0 = f0 * f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BE304; }
    goto L_088BE304;
L_088BE304:;
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    goto L_088BE334;
L_088BE334:;
    v0 = FBITS(f20);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=s4+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(fp+4);
    s0 = sp + 144;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    cnd_ = v0 == s6;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088BE3E4; }
    goto L_088BE36C;
L_088BE36C:;
    {float s0=v[8];float s1=v[9];float s2=v[10];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    a0 = fp + 0;
    a1 = s0 + 0;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    func_088BEB50(a0, a1);
    goto L_088BE380;
L_088BE380:;
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    a2 = sp + 128;
    a0 = fp + 0;
    t0 = s0 + 0;
    a1 = 1;
    a3 = a2 + 0;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BE3A0;
L_088BE3A0:;
    func_088BC028(a0, a1, a2, a3, t0);
    goto L_088BE3A8;
L_088BE3A8:;
    v0 = s1 + 0;
    sp = sp + 304;
    return v0;
L_088BE3E4:;
    a0 = fp + 0;
    a1 = sp + 0;
    func_088BEB50(a0, a1);
    goto L_088BE3F0;
L_088BE3F0:;
    a2 = sp + 128;
    a0 = fp + 0;
    a1 = 1;
    a3 = a2 + 0;
    t0 = sp + 0;
    goto L_088BE3A0;
L_088BE408:;
    v0 = s0 & 0x1;
    v1 = s0 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088BE108;
L_088BE424:;
    f0 = BITSF(LD32(v0-14600));
    f0 = f1 - f0;
    goto L_088BE0F0;
}

/* 088BE430 */
u32 func_088BE430(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115];
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 448);
L_088BE430:;
    sp = sp - 448;
    fp = 0 + 0;
    s3 = a0 + 0;
    s2 = a1 + 0;
    v0 = LD32(a1+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    s1 = a2 + 0;
    if (cnd_) { goto L_088BE48C; }
    goto L_088BE488;
L_088BE488:;
    f0 = f1;
    goto L_088BE48C;
L_088BE48C:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f20 = f0;
    if (cnd_) { goto L_088BE4A4; }
    goto L_088BE4A0;
L_088BE4A0:;
    f20 = f1;
    goto L_088BE4A4;
L_088BE4A4:;
    {u32 a_=s2+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s2+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=v[7];float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(s2+224);
    v1 = LD32(s2+228);
    a0 = LD32(s2+232);
    a1 = LD32(s2+236);
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+32, v0);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    ST32(sp+36, v1);
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    ST32(sp+40, a0);
    {float s0=v[8];float t0=v[8];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    ST32(sp+44, a1);
    if (cnd_) { goto L_088BE4F4; }
    goto L_088BE4E4;
L_088BE4E4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BE4F4;
L_088BE4F4:;
    {v0=FBITS(v[8]);}
    f0 = BITSF(v0);
    f1 = f0 / f20;
    f2 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC700 - (-14592);
    if (cnd_) { goto L_088BEB44; }
    goto L_088BE518;
L_088BE518:;
    f0 = BITSF(LD32(v0-14592));
    f0 = f1 + f0;
    goto L_088BE520;
L_088BE520:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    s6 = v0 + 1;
    f1 = BITSF(s6);
    cnd_ = (s32)s6 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088BEB28; }
    goto L_088BE538;
L_088BE538:;
    f1 = f2 / f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    if (cnd_) { goto L_088BE568; }
    goto L_088BE550;
L_088BE550:;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[16]=BITSF(v0);}
    {float s0=v[16];float s1=v[16];float s2=v[16];float s3=v[16];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[16];float t1=v[17];float t2=v[18];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    goto L_088BE568;
L_088BE568:;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s1+276);
    s4 = sp + 64;
    a0 = s4 + 0;
    a1 = LD32(v0+32);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    func_088B6508(a0, a1);
    goto L_088BE590;
L_088BE590:;
    a0 = s4 + 0;
    s5 = sp + 80;
    s7 = sp + 144;
    func_088B6518(a0);
    goto L_088BE5A0;
L_088BE5A0:;
    {u32 a_=sp+(320);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    goto L_088BE5B0;
L_088BE5B0:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    v0 = func_088B657C(a0, a1);
    goto L_088BE5CC;
L_088BE5CC:;
    cnd_ = v0 == 0;
    {u32 a_=sp+(368);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BE858; }
    goto L_088BE5D4;
L_088BE5D4:;
    {u32 a_=s1+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    a2 = 0 + 0;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a1 = s5 + 0;
    goto L_088BE5F0;
L_088BE5F0:;
    {u32 a_=sp+(304);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float t0=v[96];float t1=v[97];float t2=v[98];float o0=0;o0+=vr112*t0;o0+=v[116]*t1;o0+=v[120]*t2;float o1=0;o1+=vr113*t0;o1+=v[117]*t1;o1+=v[121]*t2;float o2=0;o2+=vr114*t0;o2+=v[118]*t1;o2+=v[122]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a2 = a2 + 1;
    a0 = a2 < 0x3u;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+128);
    ST32(a1, v0);
    v1 = LD32(sp+132);
    ST32(a1+4, v1);
    v0 = LD32(sp+136);
    ST32(a1+8, v0);
    v1 = LD32(sp+140);
    ST32(a1+12, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 16;
    if (cnd_) { goto L_088BE5F0; }
    goto L_088BE644;
L_088BE644:;
    s0 = sp + 32;
    a0 = s5 + 0;
    a1 = s0 + 0;
    f12 = f20;
    a2 = sp + 160;
    a3 = sp + 0;
    t0 = sp + 16;
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = func_088B2E58(a0, a1, a2, a3, t0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_088BE674;
L_088BE674:;
    {u32 a_=sp+(320);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(368);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BE7E4; }
    goto L_088BE688;
L_088BE688:;
    {u32 a_=sp+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f2 = BITSF(0);
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_088BE7E8; }
    goto L_088BE6B0;
L_088BE6B0:;
    f0 = BITSF(LD32(s3+12));
    f1 = BITSF(LD32(sp+160));
    v1 = LD32(s2+248);
    fp = 1;
    f1 = f1 * f0;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    ST32(sp+160, FBITS(f1));
    if (cnd_) { goto L_088BE754; }
    goto L_088BE6D0;
L_088BE6D0:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 & 0x30;
    if (cnd_) { goto L_088BE754; }
    goto L_088BE6DC;
L_088BE6DC:;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s2+376)); goto L_088BE6E4; }
    goto L_088BE6E4;
L_088BE6E4:;
    f0 = BITSF(LD32(sp+160));
    v0 = D_08AEC704 - (-14588);
    f1 = BITSF(LD32(v0-14588));
    f0 = f0 * f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BE704; }
    goto L_088BE704;
L_088BE704:;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+36);
    a0 = LD32(sp+40);
    a1 = LD32(sp+44);
    v0 = LD32(sp+32);
    ST32(s2+212, v1);
    ST32(s2+208, v0);
    ST32(s2+216, a0);
    ST32(s2+220, a1);
    goto L_088BE754;
L_088BE754:;
    v0 = FBITS(f20);
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(s3+4);
    s0 = sp + 128;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=v[7];float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    cnd_ = v0 == s2;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088BE810; }
    goto L_088BE78C;
L_088BE78C:;
    {float s0=v[8];float s1=v[9];float s2=v[10];float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    a0 = s3 + 0;
    a1 = s0 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;func_088BEB50(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];});
    goto L_088BE7B0;
L_088BE7B0:;
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    t0 = s0 + 0;
    a0 = s3 + 0;
    a1 = 1;
    a2 = s7 + 0;
    a3 = s7 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BC028(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BE7D4;
L_088BE7D4:;
    {u32 a_=sp+(368);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    goto L_088BE7E4;
L_088BE7E4:;
    a0 = s4 + 0;
    goto L_088BE7E8;
L_088BE7E8:;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    func_088B6524(a0);
    goto L_088BE7FC;
L_088BE7FC:;
    {u32 a_=sp+(368);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    goto L_088BE5B0;
L_088BE810:;
    a1 = sp + 0;
    a0 = s3 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;func_088BEB50(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];});
    goto L_088BE82C;
L_088BE82C:;
    a0 = s3 + 0;
    a1 = 1;
    a2 = s7 + 0;
    a3 = s7 + 0;
    t0 = sp + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BC028(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BE844;
L_088BE844:;
    {u32 a_=sp+(320);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    goto L_088BE7E4;
L_088BE858:;
    cnd_ = fp != 0;
    s6 = s6 - 1;
    if (cnd_) { goto L_088BEAC8; }
    goto L_088BE860;
L_088BE860:;
    v0 = (u32)-1;
    cnd_ = s6 == v0;
    s7 = sp + 144;
    if (cnd_) { goto L_088BEAC8; }
    goto L_088BE86C;
L_088BE86C:;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088BE870;
L_088BE870:;
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    a0 = s4 + 0;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    func_088B6518(a0);
    goto L_088BE884;
L_088BE884:;
    a0 = s4 + 0;
    goto L_088BE888;
L_088BE888:;
    a1 = s5 + 0;
    v0 = func_088B657C(a0, a1);
    goto L_088BE890;
L_088BE890:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088BEAB4; }
    goto L_088BE898;
L_088BE898:;
    {u32 a_=s1+(0);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(192);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    a1 = s5 + 0;
    goto L_088BE8AC;
L_088BE8AC:;
    {u32 a_=sp+(256);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=v[96];float t1=v[97];float t2=v[98];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a2 = a2 + 1;
    a0 = a2 < 0x3u;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+144);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    ST32(a1, v0);
    v1 = LD32(sp+148);
    ST32(a1+4, v1);
    v0 = LD32(sp+152);
    ST32(a1+8, v0);
    v1 = LD32(sp+156);
    ST32(a1+12, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 16;
    if (cnd_) { goto L_088BE8AC; }
    goto L_088BE910;
L_088BE910:;
    s0 = sp + 32;
    a0 = s5 + 0;
    a1 = s0 + 0;
    f12 = f20;
    a2 = sp + 160;
    a3 = sp + 0;
    t0 = sp + 16;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = func_088B2E58(a0, a1, a2, a3, t0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; });
    goto L_088BE930;
L_088BE930:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088BEA80; }
    goto L_088BE938;
L_088BE938:;
    cnd_ = s6 == 0;
    {u32 a_=sp+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BE964; }
    goto L_088BE940;
L_088BE940:;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f1 = BITSF(0);
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BEA80; }
    goto L_088BE964;
L_088BE964:;
    f0 = BITSF(LD32(s3+12));
    f1 = BITSF(LD32(sp+160));
    v1 = LD32(s2+248);
    fp = 1;
    f1 = f1 * f0;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    ST32(sp+160, FBITS(f1));
    if (cnd_) { goto L_088BEA0C; }
    goto L_088BE984;
L_088BE984:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    v0 = v1 & 0x30;
    if (cnd_) { goto L_088BEA0C; }
    goto L_088BE990;
L_088BE990:;
    f2 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s2+376)); goto L_088BE99C; }
    goto L_088BE99C;
L_088BE99C:;
    f0 = BITSF(LD32(sp+160));
    v0 = D_08AEC704 - (-14588);
    f1 = BITSF(LD32(v0-14588));
    f0 = f0 * f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088BE9BC; }
    goto L_088BE9BC;
L_088BE9BC:;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=s0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+36);
    a0 = LD32(sp+40);
    a1 = LD32(sp+44);
    v0 = LD32(sp+32);
    ST32(s2+212, v1);
    ST32(s2+208, v0);
    ST32(s2+216, a0);
    ST32(s2+220, a1);
    goto L_088BEA0C;
L_088BEA0C:;
    v0 = FBITS(f20);
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v0 = LD32(s3+4);
    s0 = sp + 128;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=v[7];float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    cnd_ = v0 == s2;
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088BEA90; }
    goto L_088BEA44;
L_088BEA44:;
    {float s0=v[8];float s1=v[9];float s2=v[10];float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    a0 = s3 + 0;
    a1 = s0 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;func_088BEB50(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];});
    goto L_088BEA58;
L_088BEA58:;
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    t0 = s0 + 0;
    a0 = s3 + 0;
    a1 = 1;
    a2 = s7 + 0;
    a3 = s7 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BEA78;
L_088BEA78:;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BC028(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BEA80;
L_088BEA80:;
    a0 = s4 + 0;
    func_088B6524(a0);
    goto L_088BEA88;
L_088BEA88:;
    a0 = s4 + 0;
    goto L_088BE888;
L_088BEA90:;
    a1 = sp + 0;
    a0 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;func_088BEB50(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];});
    goto L_088BEA9C;
L_088BEA9C:;
    a0 = s3 + 0;
    a1 = 1;
    a2 = s7 + 0;
    a3 = s7 + 0;
    t0 = sp + 0;
    goto L_088BEA78;
L_088BEAB4:;
    cnd_ = fp != 0;
    s6 = s6 - 1;
    if (cnd_) { goto L_088BEAC8; }
    goto L_088BEABC;
L_088BEABC:;
    v0 = (u32)-1;
    cnd_ = s6 != v0;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BE870; }
    goto L_088BEAC8;
L_088BEAC8:;
    v0 = LD32(sp+32);
    a1 = LD32(sp+36);
    a2 = LD32(sp+40);
    v1 = LD32(sp+44);
    ST32(s2+208, v0);
    a0 = s4 + 0;
    ST32(s2+220, v1);
    ST32(s2+212, a1);
    ST32(s2+216, a2);
    func_088B6510();
    goto L_088BEAF0;
L_088BEAF0:;
    v0 = fp + 0;
    sp = sp + 448;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;return v0; }
L_088BEB28:;
    v0 = s6 & 0x1;
    v1 = s6 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088BE538;
L_088BEB44:;
    f0 = BITSF(LD32(v0-14592));
    f0 = f1 - f0;
    goto L_088BE520;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;
}

/* 088BEB50 */
void func_088BEB50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BEB50:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+4);
    v1 = LD32(a0+248);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088BEB90; }
    goto L_088BEB78;
L_088BEB78:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+8); goto L_088BEB94; }
    goto L_088BEB84;
L_088BEB84:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BEB90;
L_088BEB90:;
    a0 = LD32(s0+8);
    goto L_088BEB94;
L_088BEB94:;
    v1 = LD32(a0+248);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 4) & 0x1;
    if (cnd_) { goto L_088BEBB4; }
    goto L_088BEBA4;
L_088BEBA4:;
    cnd_ = v0 != 0;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    if (cnd_) { goto L_088BEBB4; }
    goto L_088BEBAC;
L_088BEBAC:;
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088BEBB4;
L_088BEBB4:;
    a0 = LD32(s0+8);
    { u64 r_ = func_088C9DF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEBBC;
L_088BEBBC:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088BEBD4; }
    goto L_088BEBC4;
L_088BEBC4:;
    v1 = LD32(s0+4);
    v0 = LD32(v1+248);
    v0 = v0 | 0x4;
    ST32(v1+248, v0);
    goto L_088BEBD4;
L_088BEBD4:;
    a0 = LD32(s0+4);
    { u64 r_ = func_088C9DF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEBDC;
L_088BEBDC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088BEBF8; }
    goto L_088BEBE4;
L_088BEBE4:;
    v1 = LD32(s0+8);
    v0 = LD32(v1+248);
    v0 = v0 | 0x4;
    ST32(v1+248, v0);
    a0 = LD32(s0+4);
    goto L_088BEBF8;
L_088BEBF8:;
    a1 = LD32(s0+8);
    func_088CA220(a0, a1, 0, 0, 0);
    goto L_088BEC00;
L_088BEC00:;
    a0 = LD32(s0+8);
    a1 = LD32(s0+4);
    func_088CA220(a0, a1, 0, 0, 0);
    goto L_088BEC0C;
L_088BEC0C:;
    a0 = LD32(s0+4);
    v0 = LD32(a0+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(s0+8);
    if (cnd_) { goto L_088BEC4C; }
    goto L_088BEC20;
L_088BEC20:;
    v0 = LD32(v1+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1+248); goto L_088BEC50; }
    goto L_088BEC30;
L_088BEC30:;
    v0 = D_08AEC708 - (-14584);
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0-14584));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a1 = LD32(a0+384); goto L_088BED50; }
    goto L_088BEC4C;
L_088BEC4C:;
    v0 = LD32(v1+248);
    goto L_088BEC50;
L_088BEC50:;
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0+248); goto L_088BEC8C; }
    goto L_088BEC5C;
L_088BEC5C:;
    v0 = LD32(a0+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0+248); goto L_088BEC8C; }
    goto L_088BEC6C;
L_088BEC6C:;
    v0 = D_08AEC70C - (-14580);
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0-14580));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088BED40; }
    goto L_088BEC88;
L_088BEC88:;
    v1 = LD32(a0+248);
    goto L_088BEC8C;
L_088BEC8C:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+8); goto L_088BECDC; }
    goto L_088BEC98;
L_088BEC98:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+8); goto L_088BECDC; }
    goto L_088BECA4;
L_088BECA4:;
    v0 = D_08AEC70C - (-14580);
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0-14580));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s0+8); goto L_088BECDC; }
    goto L_088BECC0;
L_088BECC0:;
    v0 = 0x80000u;
    v0 = v1 | v0;
    ST32(a0+248, v0);
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    v1 = LD32(s0+4);
    {u32 a_=v1+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(s0+8);
    goto L_088BECDC;
L_088BECDC:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BED30; }
    goto L_088BECEC;
L_088BECEC:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088BED34; }
    goto L_088BECF8;
L_088BECF8:;
    v0 = D_08AEC708 - (-14584);
    f0 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0-14584));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BED34; }
    goto L_088BED14;
L_088BED14:;
    v0 = 0x80000u;
    v0 = v1 | v0;
    ST32(a0+248, v0);
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    v1 = LD32(s0+8);
    {u32 a_=v1+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088BED30;
L_088BED30:;
    goto L_088BED34;
L_088BED34:;
    sp = sp + 16;
    return;
L_088BED40:;
    a1 = LD32(v1+384);
    func_088CA120(a0, a1);
    goto L_088BED48;
L_088BED48:;
    a0 = LD32(s0+4);
    goto L_088BEC88;
L_088BED50:;
    a0 = v1 + 0;
    func_088CA120(a0, a1);
    goto L_088BED58;
L_088BED58:;
    a0 = LD32(s0+4);
    v1 = LD32(s0+8);
    goto L_088BEC4C;
}

/* 088BED64 */
u32 func_088BED64(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088BED64:;
    v0 = D_08B2BC50 - (-17328);
    v1 = LD32(v0-17328);
    v0 = LD32(a0);
    v0 = v0 ^ v1;
    v0 = 0 < v0;
    return v0;
}

/* 088BED7C */
u64 func_088BED7C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088BED7C:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 32;
    v0 = a1 & v0;
    a2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088BEDD0; }
    goto L_088BEDB0;
L_088BEDB0:;
    v1 = D_08B2BE64 - (-16796);
    a0 = v1 - 16796;
    ST32(v1-16796, 0);
    v0 = 16;
    v1 = 24;
    ST32(a0+4, v0);
    ST32(a0+8, v1);
    ST32(a0+12, 0);
    goto L_088BEDD0;
L_088BEDD0:;
    v0 = a2 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088BEE88; }
    goto L_088BEDE0;
L_088BEDE0:;
    s3 = D_08B2BE64 - (-16796);
    s2 = s3 - 16796;
    s1 = LD32(s2+12);
    cnd_ = s1 == 0;
    if (cnd_) { s0 = LD32(s2); goto L_088BEE20; }
    goto L_088BEDF4;
L_088BEDF4:;
    a0 = s1 + 8;
    goto L_088BEDF8;
L_088BEDF8:;
    s0 = s1 + 0;
    s1 = LD32(s1+4);
    a1 = 0 + 0;
    func_088BBFA8(a0, a1);
    goto L_088BEE08;
L_088BEE08:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEE14;
L_088BEE14:;
    cnd_ = s1 != 0;
    a0 = s1 + 8;
    if (cnd_) { goto L_088BEDF8; }
    goto L_088BEE1C;
L_088BEE1C:;
    s0 = LD32(s2);
    goto L_088BEE20;
L_088BEE20:;
    cnd_ = s0 == 0;
    if (cnd_) { s0 = LD32(s3-16796); goto L_088BEE5C; }
    goto L_088BEE28;
L_088BEE28:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s3-16796); goto L_088BEE5C; }
    goto L_088BEE34;
L_088BEE34:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BEEE0; }
    goto L_088BEE40;
L_088BEE40:;
    s1 = LD32(s0+12);
    goto L_088BEE44;
L_088BEE44:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088BEEC8; }
    goto L_088BEE4C;
L_088BEE4C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEE54;
L_088BEE54:;
    ST32(s2, 0);
    s0 = LD32(s3-16796);
    goto L_088BEE5C;
L_088BEE5C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088BEE88; }
    goto L_088BEE64;
L_088BEE64:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088BEEB8; }
    goto L_088BEE70;
L_088BEE70:;
    s1 = LD32(s0+12);
    goto L_088BEE74;
L_088BEE74:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088BEEA0; }
    goto L_088BEE7C;
L_088BEE7C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEE84;
L_088BEE84:;
    goto L_088BEE88;
L_088BEE88:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088BEEA0:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088BEEA8;
L_088BEEA8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEEB0;
L_088BEEB0:;
    goto L_088BEE7C;
L_088BEEB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEEC0;
L_088BEEC0:;
    s1 = LD32(s0+12);
    goto L_088BEE74;
L_088BEEC8:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088BEED0;
L_088BEED0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEED8;
L_088BEED8:;
    goto L_088BEE4C;
L_088BEEE0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEEE8;
L_088BEEE8:;
    s1 = LD32(s0+12);
    goto L_088BEE44;
}

/* 088BEEF0 */
rv_t func_088BEEF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BEEF0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088BED7C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEF04;
L_088BEF04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BEF10 */
rv_t func_088BEF10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BEF10:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088BED7C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BEF24;
L_088BEF24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088BEF30 */
void func_088BEF30(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088BEF30:;
    sp = sp - 48;
    v0 = D_08B2BE84 - (-16764);
    a0 = sp + 0;
    a1 = LD32(v0-16764);
    v0 = (u32)-1;
    ST32(sp+16, v0);
    v1 = LD32(a1);
    ST32(sp+8, 0);
    ST32(sp+4, v1);
    ST32(sp+12, 0);
    ST32(sp, a1);
    func_08AB41DC(a0);
    goto L_088BEF68;
L_088BEF68:;
    v0 = LD32(sp+4);
    goto L_088BEF6C;
L_088BEF6C:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088BEFB0; }
    goto L_088BEF74;
L_088BEF74:;
    cnd_ = (s32)v0 < 0;
    s0 = LD32(sp+20);
    if (cnd_) { goto L_088BEFB0; }
    goto L_088BEF7C;
L_088BEF7C:;
    v0 = LD_U8(s0+92);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088BEF98; }
    goto L_088BEF88;
L_088BEF88:;
    a0 = sp + 0;
    func_08AB4270(a0);
    goto L_088BEF90;
L_088BEF90:;
    v0 = LD32(sp+4);
    goto L_088BEF6C;
L_088BEF98:;
    func_088BEFC0(a0);
    goto L_088BEFA0;
L_088BEFA0:;
    a0 = s0 + 0;
    func_088C1BD0(a0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088BEFA8;
L_088BEFA8:;
    goto L_088BEF88;
L_088BEFB0:;
    sp = sp + 48;
    return;
}

/* 088BEFC0 */
void func_088BEFC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088BEFC0:;
    sp = sp - 96;
    t6 = 0 + 0;
    s1 = a0 + 0;
    t2 = LD32(a0+4);
    cnd_ = t2 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088BF008; }
    goto L_088BEFE4;
L_088BEFE4:;
    v0 = LD32(a0+8);
    v1 = v0 + 48;
    v0 = LD32(v1);
    goto L_088BEFF0;
L_088BEFF0:;
    a1 = a1 + 1;
    a0 = a1 < t2;
    cnd_ = v0 != 0;
    v1 = v1 + 64;
    if (cnd_) { goto L_088BF1EC; }
    goto L_088BF000;
L_088BF000:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088BEFF0; }
    goto L_088BF008;
L_088BF008:;
    v0 = D_08AEC72C - (-14548);
    f2 = BITSF(LD32(v0-14548));
    f1 = BITSF(LD32(s1+100));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a3 = LD32(s1+104);
    if (cnd_) { goto L_088BF03C; }
    goto L_088BF024;
L_088BF024:;
    v0 = D_08AEC730 - (-14544);
    f0 = BITSF(LD32(v0-14544));
    f0 = f0 - f1;
    f1 = BITSF(a3);
    f1 = f1 * f0;
    a3 = FBITS(f1);
    goto L_088BF03C;
L_088BF03C:;
    cnd_ = t2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088BF1A0; }
    goto L_088BF044;
L_088BF044:;
    v0 = D_08AEC734 - (-14540);
    v1 = D_08B2BC4C - (-17332);
    t7 = LD32(v0-14540);
    t4 = LD32(v1-17332);
    a2 = LD32(s1+8);
    t1 = FBITS(f2);
    t5 = D_08B2BE90 - (-16752);
    t3 = 0 + 0;
    goto L_088BF064;
L_088BF064:;
    {u32 a_=a2+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {v[16]=BITSF(a3);}
    {float s0=v[16];float s1=v[16];float s2=v[16];float s3=v[16];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {u32 a_=t5+(-16752);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[24]=BITSF(t1);}
    {float s0=v[24];float s1=v[24];float s2=v[24];float s3=v[24];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {v[20]=BITSF(t4);}
    {float s0=v[20];float s1=v[20];float s2=v[20];float s3=v[20];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[16];float t1=v[17];float t2=v[18];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr4=d0;vr5=d1;vr6=d2;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[24];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    cnd_ = t6 == 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088BF0D8; }
    goto L_088BF0A8;
L_088BF0A8:;
    v0 = LD32(s1+24);
    v1 = LD32(v0+8);
    v1 = t3 + v1;
    v0 = LD_U8(v1+2);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));} goto L_088BF0DC; }
    goto L_088BF0C4;
L_088BF0C4:;
    {v[32]=BITSF(t7);}
    {float s0=v[32];float s1=v[32];float s2=v[32];float s3=v[32];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=v[32];float t1=v[33];float t2=v[34];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BF0D8;
L_088BF0D8:;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    goto L_088BF0DC;
L_088BF0DC:;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=v[20];vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    t3 = t3 + 3;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=a2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=v[7];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;v[7]=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    cnd_ = t0 != 0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088BF120; }
    goto L_088BF104;
L_088BF104:;
    {v[28]=BITSF(t1);}
    {float s0=v[28];float s1=v[28];float s2=v[28];float s3=v[28];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[28];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(v[7]));}
    goto L_088BF120;
L_088BF120:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+12);
    ST32(a2+16, v0);
    t0 = t0 + 1;
    a1 = t0 < t2;
    v0 = LD32(a2+8);
    ST32(a2+20, v1);
    ST32(a2+24, v0);
    ST32(a2+28, a0);
    v0 = LD32(sp+16);
    {u32 a_=a2+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(a2, v0);
    v1 = LD32(sp+20);
    ST32(a2+4, v1);
    v0 = LD32(sp+24);
    ST32(a2+8, v0);
    v1 = LD32(sp+28);
    ST32(a2+12, v1);
    {u32 a_=a2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+64);
    ST32(a2+32, v0);
    v1 = LD32(sp+68);
    ST32(a2+36, v1);
    v0 = LD32(sp+72);
    ST32(a2+40, v0);
    v1 = LD32(sp+76);
    ST32(a2+44, v1);
    cnd_ = a1 != 0;
    a2 = a2 + 64;
    if (cnd_) { goto L_088BF064; }
    goto L_088BF1A0;
L_088BF1A0:;
    s0 = 0 + 0;
    goto L_088BF1A4;
L_088BF1A4:;
    a0 = s1 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BF1F4(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BF1AC;
L_088BF1AC:;
    a0 = s1 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BF9DC(a0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BF1B4;
L_088BF1B4:;
    a0 = s1 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BF9A0(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BF1BC;
L_088BF1BC:;
    a0 = s1 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BFCF0(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BF1C4;
L_088BF1C4:;
    s0 = s0 + 1;
    a0 = s1 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;func_088BF348(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];});
    goto L_088BF1D0;
L_088BF1D0:;
    v0 = s0 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088BF1A4; }
    goto L_088BF1DC;
L_088BF1DC:;
    sp = sp + 96;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;return; }
L_088BF1EC:;
    t6 = 1;
    goto L_088BF008;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 088BF1F4 */
void func_088BF1F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_088BF1F4:;
    sp = sp - 96;
    s2 = a0 + 0;
    a0 = LD32(a0+24);
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088BF328; }
    goto L_088BF224;
L_088BF224:;
    v0 = D_08AEC738 - (-14536);
    f20 = BITSF(LD32(v0-14536));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(a0+16);
    goto L_088BF238;
L_088BF238:;
    s0 = s3 << 1;
    v0 = s0 + v0;
    a1 = LD_U8(v0);
    v0 = func_088C2198(a0, a1);
    goto L_088BF248;
L_088BF248:;
    a0 = LD32(s2+24);
    s1 = v0 + 0;
    s1 = s1 << 6;
    v0 = LD32(a0+16);
    s0 = s0 + v0;
    a1 = LD_U8(s0+1);
    v0 = func_088C2198(a0, a1);
    goto L_088BF264;
L_088BF264:;
    v1 = LD32(s2+8);
    a1 = v0 << 6;
    a2 = s3 << 2;
    a0 = v1 + s1;
    v1 = v1 + a1;
    {u32 a_=a0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    s3 = s3 + 1;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    {float s0=vr0;float t0=vr0;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    if (cnd_) { v0 = LD32(s2+12); goto L_088BF2BC; }
    goto L_088BF2A8;
L_088BF2A8:;
    {u32 a_=sp+(16);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=vr0;float d0=s0/t0;v[8]=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=v[8];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s2+12);
    goto L_088BF2BC;
L_088BF2BC:;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = a2 + v0;
    f0 = BITSF(LD32(v0));
    f0 = f0 - f1;
    f0 = f0 * f20;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s2+8);
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = v0 + a1;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=v0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(s2+24);
    v0 = LD32(a0+12);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0+16); goto L_088BF238; }
    goto L_088BF328;
L_088BF328:;
    sp = sp + 96;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;
}

/* 088BF348 */
void func_088BF348(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr106 = v[106], vr108 = v[108], vr109 = v[109], vr110 = v[110], vr111 = v[111];
    u8 stack_[768] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 768);
L_088BF348:;
    sp = sp - 768;
    s1 = a0 + 0;
    s4 = 0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[106]=vr106;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;func_088C020C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr20=v[20];vr21=v[21];vr22=v[22];vr23=v[23];vr24=v[24];vr25=v[25];vr26=v[26];vr27=v[27];vr80=v[80];vr81=v[81];vr82=v[82];vr83=v[83];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr106=v[106];});
    goto L_088BF384;
L_088BF384:;
    a0 = LD32(s1+24);
    v0 = LD32(a0+20);
    cnd_ = v0 == 0;
    v0 = D_08AEC73C - (-14532);
    if (cnd_) { goto L_088BF838; }
    goto L_088BF394;
L_088BF394:;
    v1 = D_08AEC740 - (-14528);
    f20 = BITSF(LD32(v0-14532));
    s6 = LD32(v1-14528);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    s7 = sp + 64;
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    fp = sp + 80;
    s5 = 0 + 0;
    goto L_088BF3B4;
L_088BF3B4:;
    v0 = LD32(a0+24);
    s0 = v0 + s5;
    a1 = LD_U8(s0);
    v0 = func_088C2198(a0, a1);
    goto L_088BF3C4;
L_088BF3C4:;
    a1 = LD_U8(s0+1);
    a0 = LD32(s1+24);
    s2 = v0 << 6;
    v0 = func_088C2198(a0, a1);
    goto L_088BF3D4;
L_088BF3D4:;
    v1 = LD32(s1+8);
    s3 = v0 << 6;
    t1 = LD32(s1+16);
    v0 = v1 + s2;
    v1 = v1 + s3;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = s2 + t1;
    t0 = v0 + 64;
    a3 = sp + 16;
    a2 = v0 + 16;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088BF408;
L_088BF408:;
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
    if (cnd_) { goto L_088BF408; }
    goto L_088BF434;
L_088BF434:;
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    ST32(sp+20, FBITS(f0));
    {u32 a_=sp+(208);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f0 = BITSF(LD32(sp+48));
    ST32(sp+32, FBITS(f1));
    {u32 a_=sp+(0);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+24, FBITS(f0));
    a3 = s3 + t1;
    a0 = fp + 0;
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+52));
    ST32(sp+48, FBITS(f2));
    {u32 a_=sp+(16);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    ST32(sp+40, FBITS(f0));
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    a1 = s7 + 0;
    ST32(sp+52, FBITS(f1));
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float t0=v[100];float t1=v[101];float t2=v[102];float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    t0 = LD32(sp+64);
    t1 = LD32(sp+68);
    t2 = LD32(sp+72);
    t3 = LD32(sp+76);
    ST32(sp, t0);
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a2 = sp + 96;
    ST32(sp+4, t1);
    ST32(sp+8, t2);
    ST32(sp+12, t3);
    v0 = LD32(a3);
    ST32(sp+64, v0);
    v1 = LD32(a3+4);
    ST32(sp+68, v1);
    v0 = LD32(a3+8);
    ST32(sp+72, v0);
    {u32 a_=sp+(688);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    v1 = LD32(a3+12);
    ST32(sp+96, t0);
    ST32(sp+76, v1);
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+100, t1);
    ST32(sp+104, t2);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    ST32(sp+108, t3);
    {float s0=vr20;float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr20;float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;func_08835D58(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];});
    goto L_088BF538;
L_088BF538:;
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(s0+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088BF894; }
    goto L_088BF550;
L_088BF550:;
    v0 = 1;
    ST32(sp+84, FBITS(f0));
    goto L_088BF558;
L_088BF558:;
    f1 = BITSF(LD32(sp+88));
    goto L_088BF55C;
L_088BF55C:;
    f0 = BITSF(LD32(s0+12));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+16)); goto L_088BF86C; }
    goto L_088BF570;
L_088BF570:;
    ST32(sp+88, FBITS(f0));
    f1 = BITSF(LD32(sp+80));
    goto L_088BF578;
L_088BF578:;
    f0 = BITSF(LD32(sp+84));
    f2 = BITSF(LD32(sp+88));
    f1 = f1 * f1;
    f0 = f0 * f0;
    f2 = f2 * f2;
    {u32 a_=sp+(352);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    f1 = f1 + f0;
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(384);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    f1 = f1 + f2;
    {u32 a_=sp+(400);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    a0 = LD32(s1+16);
    f1 = f20 - f1;
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(672);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {vr96=BITSF(s6);}
    {float s0=vr96;float s1=vr96;float s2=vr96;float s3=vr96;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    f1 = sqrtf(f1);
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(272);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    v0 = a0 + s3;
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    a1 = LD32(s1+8);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    a0 = a0 + s2;
    a3 = a0 + 16;
    a2 = a1 + s2;
    a1 = a1 + s3;
    ST32(sp+92, FBITS(f1));
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
    {v[115]=BITSF(LD32(sp+(92)));}
    {float s0=vr0;v[120]=(float)1;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[112];float t1=v[113];float t2=v[114];float t3=v[115];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[112];vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[113];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[114];v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=v[115];v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=v[120];float t0=v[85];float d0=s0-t0;vr96=d0;}
    {float s0=v[120];float t0=vr80;float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0+t0;v[100]=d0;}
    {float s0=vr82;float t0=v[87];float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=v[86];float t0=vr83;float d0=s0+t0;v[105]=d0;}
    {float s0=vr106;float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=vr82;float t0=v[87];float d0=s0+t0;vr98=d0;}
    {float s0=v[86];float t0=vr83;float d0=s0-t0;v[102]=d0;}
    {float s0=vr106;float t0=v[85];float d0=s0-t0;vr106=d0;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(v[100]));ST32(a_+8,FBITS(v[104]));ST32(a_+12,FBITS(vr108));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr97));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[105]));ST32(a_+12,FBITS(vr109));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr98));ST32(a_+4,FBITS(v[102]));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr110));}
    {u32 a_=sp+(128);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {u32 a_=sp+(112);vr108=BITSF(LD32(a_+0));vr109=BITSF(LD32(a_+4));vr110=BITSF(LD32(a_+8));vr111=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr80=d0;vr81=d1;vr82=d2;vr83=d3;}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {u32 a_=v0+(0);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float t0=vr20;float t1=vr21;float t2=vr22;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr16=o0;vr17=o1;vr18=o2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    {u32 a_=sp+(448);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    ST32(sp, v0);
    {u32 a_=sp+(464);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    ST32(sp+4, v1);
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    v0 = LD32(sp+104);
    v1 = LD32(sp+108);
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    ST32(sp+8, v0);
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+12, v1);
    {u32 a_=a0+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {u32 a_=a3+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=a3+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(672);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+104);
    v1 = LD32(sp+108);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr20;vr8=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+104);
    v1 = LD32(sp+108);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a2+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s1+8);
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = v0 + s3;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=v0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(s1+24);
    goto L_088BF824;
L_088BF824:;
    s4 = s4 + 1;
    v0 = LD32(a0+20);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s5 = s5 + 20;
    if (cnd_) { goto L_088BF3B4; }
    goto L_088BF838;
L_088BF838:;
    sp = sp + 768;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[106]=vr106;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;return; }
L_088BF86C:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BF884; }
    goto L_088BF87C;
L_088BF87C:;
    ST32(sp+88, FBITS(f0));
    v0 = 1;
    goto L_088BF884;
L_088BF884:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+24); goto L_088BF824; }
    goto L_088BF88C;
L_088BF88C:;
    f1 = BITSF(LD32(sp+80));
    goto L_088BF578;
L_088BF894:;
    f0 = BITSF(LD32(s0+8));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+88));
    if (cnd_) { goto L_088BF55C; }
    goto L_088BF8A8;
L_088BF8A8:;
    ST32(sp+84, FBITS(f0));
    v0 = 1;
    goto L_088BF558;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[106]=vr106;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;
}

/* 088BF8B4 */
void func_088BF8B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088BF8B4:;
    sp = sp - 48;
    v0 = D_08AEC744 - (-14524);
    v1 = D_08AEC748 - (-14520);
    s3 = 0 + 0;
    s2 = a0 + 0;
    s1 = a0 + 28;
    f0 = BITSF(LD32(v1-14520));
    f1 = BITSF(LD32(v0-14524));
    ST32(s1+20, FBITS(f0));
    ST32(s1+16, FBITS(f1));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    ST32(s1+12, FBITS(f0));
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    ST32(a0+28, FBITS(f1));
    if (cnd_) { goto L_088BF924; }
    goto L_088BF908;
L_088BF908:;
    goto L_088BF90C;
L_088BF90C:;
    sp = sp + 48;
    return;
L_088BF924:;
    v0 = LD32(s2+8);
    goto L_088BF928;
L_088BF928:;
    s0 = s3 << 6;
    a0 = s1 + 0;
    v0 = v0 + s0;
    f1 = BITSF(LD32(v0));
    a1 = sp + 0;
    s3 = s3 + 1;
    ST32(sp, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+4, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(sp+8, FBITS(f1));
    f0 = func_08AA0F30(a0, a1);
    goto L_088BF958;
L_088BF958:;
    a0 = s1 + 0;
    v0 = LD32(s2+8);
    a1 = sp + 0;
    v0 = v0 + s0;
    f1 = BITSF(LD32(v0+16));
    v0 = v0 + 16;
    ST32(sp, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+4, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(sp+8, FBITS(f1));
    f0 = func_08AA0F30(a0, a1);
    goto L_088BF988;
L_088BF988:;
    v0 = LD32(s2+4);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_088BF928; }
    goto L_088BF998;
L_088BF998:;
    goto L_088BF90C;
}

/* 088BF9A0 */
void func_088BF9A0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088BF9A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088BF8B4(a0);
    goto L_088BF9B4;
L_088BF9B4:;
    v0 = D_08AEC74C - (-14516);
    f12 = BITSF(LD32(v0-14516));
    a1 = s0 + 28;
    s0 = s0 + 52;
    a0 = s0 + 0;
    { rv_t r_ = func_088B8958(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088BF9CC;
L_088BF9CC:;
    sp = sp + 16;
    return;
}

/* 088BF9DC */
void func_088BF9DC(u32 a0, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088BF9DC:;
    sp = sp - 176;
    s6 = 0 + 0;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_088BFC64; }
    goto L_088BFA20;
L_088BFA20:;
    v1 = LD32(s5+8);
    goto L_088BFA24;
L_088BFA24:;
    v0 = s6 << 6;
    s1 = v1 + v0;
    t2 = LD32(s1+48);
    cnd_ = t2 == 0;
    v0 = D_08AEC754 - (-14508);
    if (cnd_) { goto L_088BFC54; }
    goto L_088BFA38;
L_088BFA38:;
    v1 = D_08AEC758 - (-14504);
    f20 = BITSF(LD32(v0-14508));
    f22 = BITSF(LD32(v1-14504));
    f21 = BITSF(0);
    s3 = D_08B2BDB4 - (-16972);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s4 = D_08AEC750 - (-14512);
    s2 = s3 - 16972;
    s7 = 1;
    goto L_088BFA60;
L_088BFA60:;
    a3 = LD32(t2+120);
    v1 = LD32(s3-16972);
    t1 = LD32(s2+44);
    v0 = a3 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + v1;
    a1 = LD32(a0);
    v1 = (a3 >> 1) & 0x7fff;
    v0 = 1;
    a3 = a3 & 0x1;
    a1 = a1 + v1;
    v1 = 3;
    a1 = a1 << 3;
    if (a3 != 0) v0 = v1;
    t1 = t1 + a1;
    v0 = v0 << 1;
    v1 = a3 << 2;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a2 = LD32(a0+4);
    a1 = LD_U16(v1);
    a0 = LD_U16(v0);
    t0 = LD32(s2+56);
    a1 = a2 + a1;
    a0 = a2 + a0;
    v0 = 2;
    if (a3 != 0) v0 = 0;
    a1 = a1 << 4;
    a0 = a0 << 4;
    a1 = t0 + a1;
    a0 = t0 + a0;
    v0 = v0 << 1;
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = v0 + t1;
    v1 = LD_U16(v0);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    a2 = a2 + v1;
    a2 = a2 << 4;
    t0 = t0 + a2;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=t0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr12=d0;vr13=d1;vr14=d2;}
    {u32 a_=sp+(96);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr8;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=t2+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float d0=-s0;float d1=-s1;float d2=-s2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f1 = BITSF(LD32(t2+112));
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(t2+112, v0); goto L_088BFB74; }
    goto L_088BFB74;
L_088BFB74:;
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    f0 = BITSF(LD32(s4-14512));
    {u32 a_=sp+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    fcc = FCMP(f3, f0, 12);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    cnd_ = fcc;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088BFBE0; }
    goto L_088BFBB4;
L_088BFBB4:;
    f0 = BITSF(LD32(t2+112));
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = f0 * f20;
    f1 = BITSF(v0);
    f0 = f0 + f22;
    f0 = f0 * f0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088BFCB0; }
    goto L_088BFBE0;
L_088BFBE0:;
    ST8(t2+116, s7);
    goto L_088BFBE4;
L_088BFBE4:;
    v0 = LD_U8(t2+116);
    cnd_ = v0 == 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_088BFC34; }
    goto L_088BFBF0;
L_088BFBF0:;
    fcc = FCMP(f21, f3, 14);
    cnd_ = !fcc;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BFC34; }
    goto L_088BFC00;
L_088BFC00:;
    v0 = FBITS(f3);
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=s1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD_U8(t2+116);
    v0 = v0 & 0xff;
    goto L_088BFC34;
L_088BFC34:;
    cnd_ = v0 != 0;
    s0 = LD32(t2+128);
    if (cnd_) { goto L_088BFC9C; }
    goto L_088BFC3C;
L_088BFC3C:;
    f0 = BITSF(LD32(t2+112));
    f0 = f0 * f20;
    ST32(t2+112, FBITS(f0));
    goto L_088BFC48;
L_088BFC48:;
    cnd_ = s0 != 0;
    t2 = s0 + 0;
    if (cnd_) { goto L_088BFA60; }
    goto L_088BFC50;
L_088BFC50:;
    a1 = LD32(s5+4);
    goto L_088BFC54;
L_088BFC54:;
    s6 = s6 + 1;
    v0 = s6 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s5+8); goto L_088BFA24; }
    goto L_088BFC64;
L_088BFC64:;
    sp = sp + 176;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;return; }
L_088BFC9C:;
    a1 = t2 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_08AB5D48(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088BFCA8;
L_088BFCA8:;
    goto L_088BFC48;
L_088BFCB0:;
    fcc = FCMP(f21, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088BFCE4; }
    goto L_088BFCC0;
L_088BFCC0:;
    v0 = LD32(t2);
    ST32(s1, v0);
    v1 = LD32(t2+4);
    ST32(s1+4, v1);
    v0 = LD32(t2+8);
    ST32(s1+8, v0);
    v1 = LD32(t2+12);
    ST32(s1+12, v1);
    goto L_088BFBE4;
L_088BFCE4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=s1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BFBE4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 088BFCF0 */
void func_088BFCF0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_088BFCF0:;
    sp = sp - 336;
    s2 = LD32(a0+76);
    cnd_ = s2 == 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_088BFEA8; }
    goto L_088BFD40;
L_088BFD40:;
    t2 = LD32(a0+4);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    v0 = D_08B2BDB4 - (-16972);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    fp = v0 - 16972;
    a3 = LD32(s2);
    goto L_088BFD58;
L_088BFD58:;
    a0 = D_08B2BDB4 - (-16972);
    v1 = LD32(a0-16972);
    v0 = a3 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + v1;
    a1 = LD32(a0);
    t1 = LD32(fp+44);
    v1 = (a3 >> 1) & 0x7fff;
    a1 = a1 + v1;
    a3 = a3 & 0x1;
    v1 = 3;
    v0 = 1;
    a1 = a1 << 3;
    if (a3 != 0) v0 = v1;
    t1 = t1 + a1;
    v0 = v0 << 1;
    v1 = a3 << 2;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a2 = LD32(a0+4);
    a1 = LD_U16(v1);
    a0 = LD_U16(v0);
    t0 = LD32(fp+56);
    a1 = a2 + a1;
    a0 = a2 + a0;
    v0 = 2;
    if (a3 != 0) v0 = 0;
    a1 = a1 << 4;
    a0 = a0 << 4;
    s4 = t0 + a1;
    s7 = t0 + a0;
    v0 = v0 << 1;
    {u32 a_=s4+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s7+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = v0 + t1;
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=v[15];float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    v1 = LD_U16(v0);
    s1 = 0 + 0;
    a2 = a2 + v1;
    a2 = a2 << 4;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(v[15]));}
    s6 = t0 + a2;
    {u32 a_=s4+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s6+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(240);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr12;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    cnd_ = t2 == 0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088BFE9C; }
    goto L_088BFE38;
L_088BFE38:;
    v0 = D_08AEC768 - (-14488);
    v1 = D_08AEC76C - (-14484);
    f24 = BITSF(LD32(v0-14488));
    f25 = BITSF(LD32(v1-14484));
    f23 = BITSF(0);
    a0 = LD32(s3+8);
    goto L_088BFE50;
L_088BFE50:;
    s0 = s1 << 6;
    v0 = a0 + s0;
    v1 = LD32(v0+48);
    cnd_ = v1 == 0;
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BFEF0; }
    goto L_088BFE64;
L_088BFE64:;
    a3 = LD32(s2);
    v0 = LD32(v1+120);
    goto L_088BFE6C;
L_088BFE6C:;
    cnd_ = v0 == a3;
    if (cnd_) { s1 = s1 + 1; goto L_088BFE90; }
    goto L_088BFE74;
L_088BFE74:;
    v1 = LD32(v1+128);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+120); goto L_088BFE6C; }
    goto L_088BFE80;
L_088BFE80:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BFEF0; }
    goto L_088BFE8C;
L_088BFE8C:;
    s1 = s1 + 1;
    goto L_088BFE90;
L_088BFE90:;
    v0 = s1 < t2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+8); goto L_088BFE50; }
    goto L_088BFE9C;
L_088BFE9C:;
    s2 = LD32(s2+12);
    cnd_ = s2 != 0;
    if (cnd_) { a3 = LD32(s2); goto L_088BFD58; }
    goto L_088BFEA8;
L_088BFEA8:;
    sp = sp + 336;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;return; }
L_088BFEF0:;
    s5 = D_08AEC764 - (-14492);
    v1 = LD32(s5-14492);
    {u32 a_=sp+(160);vr16=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {vr16=BITSF(v1);}
    {float s0=vr16;float s1=vr16;float s2=vr16;float s3=vr16;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr16;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    v0 = a0 + s0;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=s4+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a0=FBITS(vr0);}
    f0 = BITSF(a0);
    f21 = BITSF(a0);
    fcc = FCMP(f0, f23, 12);
    cnd_ = fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088BFE8C; }
    goto L_088BFF4C;
L_088BFF4C:;
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=v0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(240);vr16=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088BFFA0; }
    goto L_088BFF94;
L_088BFF94:;
    {float s0=vr16;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088BFFA0;
L_088BFFA0:;
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    f22 = BITSF(0);
    f20 = f1 + f1;
    fcc = FCMP(f20, f22, 2);
    cnd_ = fcc;
    if (cnd_) { s1 = s1 + 1; goto L_088BFE90; }
    goto L_088BFFC0;
L_088BFFC0:;
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a0=FBITS(vr0);}
    f0 = BITSF(a0);
    fcc = FCMP(f0, f24, 14);
    cnd_ = !fcc;
    a0 = sp + 48;
    if (cnd_) { goto L_088C0038; }
    goto L_088BFFE0;
L_088BFFE0:;
    a1 = sp + 64;
    a0 = sp + 32;
    a2 = s4 + 0;
    a3 = s7 + 0;
    t0 = s6 + 0;
    t1 = sp + 0;
    t2 = sp + 144;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;__auto_type vr_t_ = func_088B0E58(a0, a1, a2, a3, t0, t1, t2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];vr16=v[16];vr_t_; });
    goto L_088C0000;
L_088C0000:;
    cnd_ = v0 == 0;
    a0 = sp + 48;
    if (cnd_) { goto L_088C0038; }
    goto L_088C0008;
L_088C0008:;
    v0 = LD_U8(sp);
    cnd_ = v0 == 0;
    a1 = sp + 16;
    if (cnd_) { goto L_088C003C; }
    goto L_088C0014;
L_088C0014:;
    f0 = BITSF(LD32(sp+144));
    fcc = FCMP(f22, f0, 14);
    cnd_ = !fcc;
    a2 = s4 + 0;
    if (cnd_) { goto L_088C0040; }
    goto L_088C0028;
L_088C0028:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    {u32 a_=sp+(64);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C0144; }
    goto L_088C0038;
L_088C0038:;
    a1 = sp + 16;
    goto L_088C003C;
L_088C003C:;
    a2 = s4 + 0;
    goto L_088C0040;
L_088C0040:;
    a3 = s7 + 0;
    t0 = s6 + 0;
    t1 = sp + 0;
    t2 = sp + 144;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;__auto_type vr_t_ = func_088B0E58(a0, a1, a2, a3, t0, t1, t2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];vr16=v[16];vr_t_; });
    goto L_088C0054;
L_088C0054:;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = LD32(s3+4); goto L_088BFE8C; }
    goto L_088C005C;
L_088C005C:;
    v0 = LD_U8(sp);
    cnd_ = v0 != 0;
    if (cnd_) { t2 = LD32(s3+4); goto L_088BFE8C; }
    goto L_088C0068;
L_088C0068:;
    f1 = BITSF(LD32(sp+144));
    fcc = FCMP(f23, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { t2 = LD32(s3+4); goto L_088BFE8C; }
    goto L_088C007C;
L_088C007C:;
    f0 = BITSF(LD32(s5-14492));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C0098; }
    goto L_088C0090;
L_088C0090:;
    t2 = LD32(s3+4);
    goto L_088BFE8C;
L_088C0098:;
    v0 = FBITS(f1);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    v0 = LD32(s3+8);
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    s0 = v0 + s0;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+128);
    ST32(s0, v0);
    v1 = LD32(sp+132);
    ST32(s0+4, v1);
    v0 = LD32(sp+136);
    ST32(s0+8, v0);
    v1 = LD32(sp+140);
    ST32(s0+12, v1);
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;__auto_type vr_t_ = func_088B6870(0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];vr16=v[16];vr_t_; });
    goto L_088C00F0;
L_088C00F0:;
    a1 = v0 + 0;
    v0 = LD32(s0+48);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1+128, v0); goto L_088C010C; }
    goto L_088C0100;
L_088C0100:;
    ST32(v0+124, a1);
    v0 = LD32(s0+48);
    ST32(a1+128, v0);
    goto L_088C010C;
L_088C010C:;
    v0 = LD32(sp+128);
    a0 = LD32(s2);
    ST32(s0+48, a1);
    ST32(a1, v0);
    v0 = LD32(sp+132);
    ST32(a1+4, v0);
    v1 = LD32(sp+136);
    ST32(a1+8, v1);
    v0 = LD32(sp+140);
    goto L_088C0130;
L_088C0130:;
    ST32(a1+120, a0);
    t2 = LD32(s3+4);
    ST32(a1+112, FBITS(f21));
    ST32(a1+12, v0);
    goto L_088BFE8C;
L_088C0144:;
    v0 = FBITS(f0);
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = FBITS(f25);
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    v0 = LD32(s3+8);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    s0 = v0 + s0;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=v[11];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+80);
    ST32(s0, v0);
    v1 = LD32(sp+84);
    ST32(s0+4, v1);
    v0 = LD32(sp+88);
    ST32(s0+8, v0);
    v1 = LD32(sp+92);
    ST32(s0+12, v1);
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;__auto_type vr_t_ = func_088B6870(0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr12=v[12];vr13=v[13];vr14=v[14];vr16=v[16];vr_t_; });
    goto L_088C01C8;
L_088C01C8:;
    a1 = v0 + 0;
    v0 = LD32(s0+48);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1+128, v0); goto L_088C01E4; }
    goto L_088C01D8;
L_088C01D8:;
    ST32(v0+124, a1);
    v0 = LD32(s0+48);
    ST32(a1+128, v0);
    goto L_088C01E4;
L_088C01E4:;
    v0 = LD32(sp+80);
    a0 = LD32(s2);
    ST32(s0+48, a1);
    ST32(a1, v0);
    v0 = LD32(sp+84);
    ST32(a1+4, v0);
    v1 = LD32(sp+88);
    ST32(a1+8, v1);
    v0 = LD32(sp+92);
    goto L_088C0130;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[16]=vr16;
}

/* 088C020C */
void func_088C020C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 560);
L_088C020C:;
    sp = sp - 560;
    v0 = LD32(a0);
    s4 = LD32(v0+16);
    cnd_ = s4 == 0;
    s6 = a0 + 0;
    if (cnd_) { goto L_088C0B9C; }
    goto L_088C0248;
L_088C0248:;
    v0 = LD_U8(a0+21);
    v1 = LD_U8(a0+20);
    a0 = LD32(a0+8);
    v0 = v0 << 6;
    v1 = v1 << 6;
    v0 = a0 + v0;
    v1 = a0 + v1;
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD_U8(s6+23);
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    v1 = LD_U8(s6+22);
    v0 = v0 << 6;
    a1 = D_08B22500 - (9472);
    v1 = v1 << 6;
    v1 = a0 + v1;
    a0 = a0 + v0;
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    t0 = a1 + 9472;
    a2 = D_08B22200 - (8704);
    t1 = a2 + 8704;
    t3 = 1;
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[12]=s0*t0;v[13]=s1*t0;v[14]=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    ST32(a1+9472, FBITS(f0));
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    f0 = BITSF(LD32(sp+4));
    ST32(t0+12, FBITS(f0));
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    f1 = BITSF(LD32(sp+8));
    ST32(t0+24, FBITS(f1));
    {u32 a_=sp+(272);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[16];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[16];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];float t1=v[13];float t2=v[14];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[16];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f0 = BITSF(LD32(sp+16));
    ST32(t0+4, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    ST32(t0+16, FBITS(f1));
    f0 = BITSF(LD32(sp+24));
    ST32(t0+28, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    ST32(t0+8, FBITS(f1));
    f0 = BITSF(LD32(sp+36));
    ST32(t0+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    ST32(t0+32, FBITS(f1));
    v0 = LD32(s4+32);
    {v[112]=BITSF(LD32(v0+(12)));}
    {v[113]=BITSF(LD32(v0+(16)));}
    {v[114]=BITSF(LD32(v0+(20)));}
    {v[115]=BITSF(LD32(v0+(24)));}
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
    {v[96]=BITSF(LD32(t0+(0)));}
    {v[97]=BITSF(LD32(t0+(4)));}
    {v[98]=BITSF(LD32(t0+(8)));}
    {v[100]=BITSF(LD32(t0+(12)));}
    {v[101]=BITSF(LD32(t0+(16)));}
    {v[102]=BITSF(LD32(t0+(20)));}
    {v[104]=BITSF(LD32(t0+(24)));}
    {v[105]=BITSF(LD32(t0+(28)));}
    {v[106]=BITSF(LD32(t0+(32)));}
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
    ST32(a1+9472, FBITS(f0));
    f0 = BITSF(LD32(sp+120));
    ST32(t0+4, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+124));
    f0 = BITSF(LD32(sp+128));
    ST32(t0+12, FBITS(f1));
    ST32(t0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    ST32(t0+20, FBITS(f1));
    ST32(t0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+140));
    f0 = BITSF(LD32(sp+144));
    ST32(t0+28, FBITS(f1));
    ST32(t0+32, FBITS(f0));
    v0 = LD32(s6+8);
    f0 = BITSF(LD32(v0));
    ST32(a2+8704, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(s4+4);
    ST32(t1+4, FBITS(f1));
    v1 = (s32)t3 < (s32)a0;
    f0 = BITSF(LD32(v0+8));
    cnd_ = v1 == 0;
    ST32(t1+8, FBITS(f0));
    if (cnd_) { goto L_088C07C0; }
    goto L_088C04DC;
L_088C04DC:;
    a3 = LD32(s4+32);
    t4 = t0 + 0;
    t5 = t1 + 0;
    t0 = t0 + 36;
    t1 = t1 + 12;
    t2 = 28;
    goto L_088C04F4;
L_088C04F4:;
    a0 = LD32(s4+28);
    v0 = t3 << 2;
    v1 = a3 + t2;
    v0 = v0 + a0;
    a2 = LD32(v0);
    {v[112]=BITSF(LD32(v1+(12)));}
    {v[113]=BITSF(LD32(v1+(16)));}
    {v[114]=BITSF(LD32(v1+(20)));}
    {v[115]=BITSF(LD32(v1+(24)));}
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
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[100]));}
    {ST32(sp+(128),FBITS(v[101]));}
    {ST32(sp+(132),FBITS(v[102]));}
    {ST32(sp+(136),FBITS(v[104]));}
    {ST32(sp+(140),FBITS(v[105]));}
    {ST32(sp+(144),FBITS(v[106]));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a0 = a2 << 3;
    a0 = a0 + a2;
    a0 = a0 << 2;
    a0 = a0 + t4;
    {v[112]=BITSF(LD32(sp+(112)));}
    {v[113]=BITSF(LD32(sp+(116)));}
    {v[114]=BITSF(LD32(sp+(120)));}
    {v[116]=BITSF(LD32(sp+(124)));}
    {v[117]=BITSF(LD32(sp+(128)));}
    {v[118]=BITSF(LD32(sp+(132)));}
    {v[120]=BITSF(LD32(sp+(136)));}
    {v[121]=BITSF(LD32(sp+(140)));}
    {v[122]=BITSF(LD32(sp+(144)));}
    {v[96]=BITSF(LD32(a0+(0)));}
    {v[97]=BITSF(LD32(a0+(4)));}
    {v[98]=BITSF(LD32(a0+(8)));}
    {v[100]=BITSF(LD32(a0+(12)));}
    {v[101]=BITSF(LD32(a0+(16)));}
    {v[102]=BITSF(LD32(a0+(20)));}
    {v[104]=BITSF(LD32(a0+(24)));}
    {v[105]=BITSF(LD32(a0+(28)));}
    {v[106]=BITSF(LD32(a0+(32)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(64),FBITS(v[80]));}
    {ST32(sp+(68),FBITS(v[81]));}
    {ST32(sp+(72),FBITS(v[82]));}
    {ST32(sp+(76),FBITS(v[84]));}
    {ST32(sp+(80),FBITS(v[85]));}
    {ST32(sp+(84),FBITS(v[86]));}
    {ST32(sp+(88),FBITS(v[88]));}
    {ST32(sp+(92),FBITS(v[89]));}
    {ST32(sp+(96),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+92));
    a1 = a2 << 1;
    ST32(t0, FBITS(f0));
    a1 = a1 + a2;
    a1 = a1 << 2;
    f0 = BITSF(LD32(sp+68));
    {u32 a_=sp+(368);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(t0+4, FBITS(f0));
    a1 = a1 + t5;
    t3 = t3 + 1;
    f0 = BITSF(LD32(sp+72));
    {u32 a_=sp+(384);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(400);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(t0+8, FBITS(f0));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    f0 = BITSF(LD32(sp+76));
    v0 = LD32(a0);
    v1 = LD32(a0+4);
    ST32(t0+12, FBITS(f0));
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    f0 = BITSF(LD32(sp+80));
    v0 = LD32(a0+8);
    ST32(t0+28, FBITS(f1));
    {v[2]=BITSF(v0);}
    ST32(t0+16, FBITS(f0));
    f0 = BITSF(LD32(sp+84));
    ST32(t0+20, FBITS(f0));
    f0 = BITSF(LD32(sp+88));
    ST32(t0+24, FBITS(f0));
    f0 = BITSF(LD32(sp+96));
    ST32(t0+32, FBITS(f0));
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    a3 = LD32(s4+32);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    v0 = LD32(a0+12);
    v1 = LD32(a0+16);
    a2 = LD32(a0+32);
    {u32 a_=sp+(352);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    v0 = LD32(a0+20);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(a0+24);
    v1 = LD32(a0+28);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    a0 = a3 + t2;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {v[0]=BITSF(v0);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = LD32(a0);
    {v[1]=BITSF(v1);}
    v1 = LD32(a0+4);
    {v[2]=BITSF(a2);}
    a2 = LD32(a0+8);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a2);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[4]);}
    ST32(sp+192, v0);
    f6 = BITSF(v0);
    {v1=FBITS(v[6]);}
    f4 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1));
    {v0=FBITS(v[5]);}
    f5 = BITSF(v1);
    f0 = BITSF(v0);
    f2 = f6 + f2;
    f4 = f5 + f4;
    f3 = f0 + f3;
    a0 = LD32(s4+4);
    ST32(t1, FBITS(f2));
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    v0 = (s32)t3 < (s32)a0;
    ST32(t1+4, FBITS(f3));
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    ST32(t1+8, FBITS(f4));
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    ST32(sp+196, FBITS(f0));
    t0 = t0 + 36;
    t2 = t2 + 28;
    ST32(sp+200, v1);
    t1 = t1 + 12;
    ST32(sp+176, FBITS(f6));
    ST32(sp+180, FBITS(f0));
    ST32(sp+184, v1);
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f3));
    cnd_ = v0 != 0;
    ST32(sp+168, FBITS(f4));
    if (cnd_) { goto L_088C04F4; }
    goto L_088C07C0;
L_088C07C0:;
    s5 = 1;
    v0 = (s32)s5 < (s32)a0;
    cnd_ = v0 == 0;
    v1 = D_08B22500 - (9472);
    if (cnd_) { goto L_088C0998; }
    goto L_088C07D0;
L_088C07D0:;
    v0 = D_08B22200 - (8704);
    v1 = v1 + 9472;
    v0 = v0 + 8704;
    s1 = v1 + 36;
    fp = 28;
    s7 = v0 + 12;
    goto L_088C07E8;
L_088C07E8:;
    v1 = LD32(s4+28);
    a0 = LD32(s6+24);
    v0 = s5 << 2;
    v0 = v0 + v1;
    a1 = s5 + 0;
    s3 = LD32(v0);
    v0 = func_088C2198(a0, a1);
    goto L_088C0804;
L_088C0804:;
    cnd_ = (s32)v0 < 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088C0E30; }
    goto L_088C080C;
L_088C080C:;
    a0 = LD32(s6+24);
    v0 = v0 << 1;
    v0 = v0 + s2;
    v1 = LD32(a0+8);
    v0 = v0 + v1;
    s0 = LD_U8(v0+1);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C0BCC; }
    goto L_088C082C;
L_088C082C:;
    v1 = LD32(s4+32);
    v0 = s3 << 3;
    v0 = v0 + s3;
    v1 = v1 + fp;
    {v[112]=BITSF(LD32(v1+(12)));}
    {v[113]=BITSF(LD32(v1+(16)));}
    {v[114]=BITSF(LD32(v1+(20)));}
    {v[115]=BITSF(LD32(v1+(24)));}
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
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[100]));}
    {ST32(sp+(128),FBITS(v[101]));}
    {ST32(sp+(132),FBITS(v[102]));}
    {ST32(sp+(136),FBITS(v[104]));}
    {ST32(sp+(140),FBITS(v[105]));}
    {ST32(sp+(144),FBITS(v[106]));}
    v1 = D_08B22500 - (9472);
    v0 = v0 << 2;
    v1 = v1 + 9472;
    v0 = v0 + v1;
    {v[112]=BITSF(LD32(sp+(112)));}
    {v[113]=BITSF(LD32(sp+(116)));}
    {v[114]=BITSF(LD32(sp+(120)));}
    {v[116]=BITSF(LD32(sp+(124)));}
    {v[117]=BITSF(LD32(sp+(128)));}
    {v[118]=BITSF(LD32(sp+(132)));}
    {v[120]=BITSF(LD32(sp+(136)));}
    {v[121]=BITSF(LD32(sp+(140)));}
    {v[122]=BITSF(LD32(sp+(144)));}
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
    {ST32(sp+(224),FBITS(v[80]));}
    {ST32(sp+(228),FBITS(v[81]));}
    {ST32(sp+(232),FBITS(v[82]));}
    {ST32(sp+(236),FBITS(v[84]));}
    {ST32(sp+(240),FBITS(v[85]));}
    {ST32(sp+(244),FBITS(v[86]));}
    {ST32(sp+(248),FBITS(v[88]));}
    {ST32(sp+(252),FBITS(v[89]));}
    {ST32(sp+(256),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+224));
    goto L_088C0938;
L_088C0938:;
    f1 = BITSF(LD32(sp+228));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+232));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    f1 = BITSF(LD32(sp+236));
    f0 = BITSF(LD32(sp+240));
    ST32(s1+12, FBITS(f1));
    ST32(s1+16, FBITS(f0));
    f1 = BITSF(LD32(sp+244));
    f0 = BITSF(LD32(sp+248));
    ST32(s1+20, FBITS(f1));
    ST32(s1+24, FBITS(f0));
    f1 = BITSF(LD32(sp+252));
    f0 = BITSF(LD32(sp+256));
    ST32(s1+28, FBITS(f1));
    ST32(s1+32, FBITS(f0));
    goto L_088C097C;
L_088C097C:;
    a0 = LD32(s4+4);
    s5 = s5 + 1;
    s7 = s7 + 12;
    v0 = (s32)s5 < (s32)a0;
    fp = fp + 28;
    cnd_ = v0 != 0;
    s1 = s1 + 36;
    if (cnd_) { goto L_088C07E8; }
    goto L_088C0998;
L_088C0998:;
    s1 = 1;
    v0 = (s32)s1 < (s32)a0;
    cnd_ = v0 == 0;
    s2 = 28;
    if (cnd_) { goto L_088C0B9C; }
    goto L_088C09A8;
L_088C09A8:;
    v0 = D_08B22500 - (9472);
    s3 = v0 + 9472;
    goto L_088C09B0;
L_088C09B0:;
    v1 = LD32(s4+28);
    v0 = s1 << 2;
    a0 = LD32(s6+24);
    v0 = v0 + v1;
    s0 = LD32(v0);
    a1 = s1 + 0;
    v0 = func_088C2198(a0, a1);
    goto L_088C09CC;
L_088C09CC:;
    v1 = s0 << 3;
    v1 = v1 + s0;
    v1 = v1 << 2;
    s1 = s1 + 1;
    a0 = v0 << 6;
    cnd_ = (s32)v0 < 0;
    v1 = v1 + s3;
    if (cnd_) { goto L_088C0B8C; }
    goto L_088C09E8;
L_088C09E8:;
    v0 = LD32(s4+32);
    a1 = LD32(s6+16);
    v0 = v0 + s2;
    {v[112]=BITSF(LD32(v0+(12)));}
    {v[113]=BITSF(LD32(v0+(16)));}
    {v[114]=BITSF(LD32(v0+(20)));}
    {v[115]=BITSF(LD32(v0+(24)));}
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
    {ST32(sp+(224),FBITS(v[96]));}
    {ST32(sp+(228),FBITS(v[97]));}
    {ST32(sp+(232),FBITS(v[98]));}
    {ST32(sp+(236),FBITS(v[100]));}
    {ST32(sp+(240),FBITS(v[101]));}
    {ST32(sp+(244),FBITS(v[102]));}
    {ST32(sp+(248),FBITS(v[104]));}
    {ST32(sp+(252),FBITS(v[105]));}
    {ST32(sp+(256),FBITS(v[106]));}
    {v[112]=BITSF(LD32(sp+(224)));}
    {v[113]=BITSF(LD32(sp+(228)));}
    {v[114]=BITSF(LD32(sp+(232)));}
    {v[116]=BITSF(LD32(sp+(236)));}
    {v[117]=BITSF(LD32(sp+(240)));}
    {v[118]=BITSF(LD32(sp+(244)));}
    {v[120]=BITSF(LD32(sp+(248)));}
    {v[121]=BITSF(LD32(sp+(252)));}
    {v[122]=BITSF(LD32(sp+(256)));}
    {v[96]=BITSF(LD32(v1+(0)));}
    {v[97]=BITSF(LD32(v1+(4)));}
    {v[98]=BITSF(LD32(v1+(8)));}
    {v[100]=BITSF(LD32(v1+(12)));}
    {v[101]=BITSF(LD32(v1+(16)));}
    {v[102]=BITSF(LD32(v1+(20)));}
    {v[104]=BITSF(LD32(v1+(24)));}
    {v[105]=BITSF(LD32(v1+(28)));}
    {v[106]=BITSF(LD32(v1+(32)));}
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
    f1 = BITSF(LD32(sp+124));
    a1 = a1 + a0;
    ST32(sp+48, FBITS(f0));
    a0 = a1 + 16;
    f0 = BITSF(LD32(sp+136));
    v0 = LD32(sp+48);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    ST32(a1+16, v0);
    v1 = LD32(sp+52);
    ST32(a0+4, v1);
    v0 = LD32(sp+56);
    ST32(a0+8, v0);
    v1 = LD32(sp+60);
    ST32(a0+12, v1);
    f0 = BITSF(LD32(sp+116));
    f1 = BITSF(LD32(sp+128));
    ST32(sp+48, FBITS(f0));
    f0 = BITSF(LD32(sp+140));
    v0 = LD32(sp+48);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    ST32(a0+16, v0);
    v1 = LD32(sp+52);
    ST32(a0+20, v1);
    v0 = LD32(sp+56);
    ST32(a0+24, v0);
    v1 = LD32(sp+60);
    ST32(a0+28, v1);
    f0 = BITSF(LD32(sp+120));
    f1 = BITSF(LD32(sp+132));
    ST32(sp+48, FBITS(f0));
    f0 = BITSF(LD32(sp+144));
    v0 = LD32(sp+48);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f0));
    ST32(a0+32, v0);
    v1 = LD32(sp+52);
    ST32(a0+36, v1);
    v0 = LD32(sp+56);
    ST32(a0+40, v0);
    v1 = LD32(sp+60);
    ST32(a0+44, v1);
    goto L_088C0B8C;
L_088C0B8C:;
    v0 = LD32(s4+4);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = s2 + 28;
    if (cnd_) { goto L_088C09B0; }
    goto L_088C0B9C;
L_088C0B9C:;
    sp = sp + 560;
    return;
L_088C0BCC:;
    a1 = s0 + 0;
    v0 = func_088C2198(a0, a1);
    goto L_088C0BD4;
L_088C0BD4:;
    a0 = v0 + 0;
    v0 = s0 << 1;
    v0 = v0 + s0;
    v1 = D_08B22200 - (8704);
    v1 = v1 + 8704;
    v0 = v0 << 2;
    v0 = v0 + v1;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s7+4));
    f5 = BITSF(LD32(s7));
    f1 = BITSF(LD32(s7+8));
    f2 = f2 - f0;
    f3 = f3 - f5;
    f4 = f4 - f1;
    f6 = BITSF(0);
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {u32 a_=sp+(480);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+192, FBITS(f3));
    fcc = FCMP(f0, f6, 2);
    ST32(sp+196, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+200, FBITS(f4));
    if (cnd_) { goto L_088C0C8C; }
    goto L_088C0C54;
L_088C0C54:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(272);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    ST32(sp+192, v1);
    ST32(sp+196, v0);
    ST32(sp+200, FBITS(f3));
    goto L_088C0C8C;
L_088C0C8C:;
    v0 = LD32(s6+8);
    a0 = a0 << 6;
    v1 = s2 << 6;
    v1 = v0 + v1;
    v0 = v0 + a0;
    {u32 a_=v0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(496);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f4 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[8]=BITSF(v1);}
    v1 = FBITS(f2);
    {v[9]=BITSF(v0);}
    {v[10]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+176, FBITS(f4));
    fcc = FCMP(f0, f6, 2);
    ST32(sp+180, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+184, FBITS(f2));
    if (cnd_) { goto L_088C0D30; }
    goto L_088C0CF8;
L_088C0CF8:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(272);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+160, v1);
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    goto L_088C0D30;
L_088C0D30:;
    a1 = sp + 192;
    a2 = sp + 176;
    a0 = sp + 208;
    func_08835B50(a0, a1, a2);
    goto L_088C0D40;
L_088C0D40:;
    {v[112]=BITSF(LD32(sp+(208)));}
    {v[113]=BITSF(LD32(sp+(212)));}
    {v[114]=BITSF(LD32(sp+(216)));}
    {v[115]=BITSF(LD32(sp+(220)));}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    {v[112]=BITSF(LD32(s1+(0)));}
    {v[113]=BITSF(LD32(s1+(4)));}
    {v[114]=BITSF(LD32(s1+(8)));}
    {v[116]=BITSF(LD32(s1+(12)));}
    {v[117]=BITSF(LD32(s1+(16)));}
    {v[118]=BITSF(LD32(s1+(20)));}
    {v[120]=BITSF(LD32(s1+(24)));}
    {v[121]=BITSF(LD32(s1+(28)));}
    {v[122]=BITSF(LD32(s1+(32)));}
    {v[96]=BITSF(LD32(sp+(64)));}
    {v[97]=BITSF(LD32(sp+(68)));}
    {v[98]=BITSF(LD32(sp+(72)));}
    {v[100]=BITSF(LD32(sp+(76)));}
    {v[101]=BITSF(LD32(sp+(80)));}
    {v[102]=BITSF(LD32(sp+(84)));}
    {v[104]=BITSF(LD32(sp+(88)));}
    {v[105]=BITSF(LD32(sp+(92)));}
    {v[106]=BITSF(LD32(sp+(96)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(224),FBITS(v[80]));}
    {ST32(sp+(228),FBITS(v[81]));}
    {ST32(sp+(232),FBITS(v[82]));}
    {ST32(sp+(236),FBITS(v[84]));}
    {ST32(sp+(240),FBITS(v[85]));}
    {ST32(sp+(244),FBITS(v[86]));}
    {ST32(sp+(248),FBITS(v[88]));}
    {ST32(sp+(252),FBITS(v[89]));}
    {ST32(sp+(256),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+224));
    goto L_088C0938;
L_088C0E30:;
    a0 = LD32(s6+24);
    a1 = s5 + 0;
    v0 = func_088C21D4(a0, a1);
    goto L_088C0E3C;
L_088C0E3C:;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088C082C; }
    goto L_088C0E44;
L_088C0E44:;
    v0 = v0 << 3;
    v0 = v0 + v1;
    v1 = D_08B22500 - (9472);
    v0 = v0 << 2;
    v1 = v1 + 9472;
    v0 = v0 + v1;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(s1+12, FBITS(f3));
    ST32(s1+16, FBITS(f4));
    ST32(s1+20, FBITS(f5));
    ST32(s1+24, FBITS(f6));
    ST32(s1+28, FBITS(f7));
    ST32(s1+32, FBITS(f8));
    goto L_088C097C;
}

/* 088C0EA8 */
void func_088C0EA8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[752] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 752);
L_088C0EA8:;
    sp = sp - 752;
    v0 = LD_U8(a0+92);
    cnd_ = v0 == 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_088C0F24; }
    goto L_088C0EE0;
L_088C0EE0:;
    v1 = D_08B285AC - (-31316);
    v0 = LD32(a0);
    a0 = LD32(v1-31316);
    ST32(v0+220, a0);
    ST32(v0+224, a0);
    goto L_088C0EF4;
L_088C0EF4:;
    sp = sp + 752;
    return;
L_088C0F24:;
    v0 = D_08AEC770 - (-14480);
    f12 = BITSF(LD32(v0-14480));
    a0 = LD32(a0);
    a1 = 0 + 0;
    { rv_t r_ = func_08806C1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C0F38;
L_088C0F38:;
    v0 = LD32(s5);
    s4 = LD32(v0+16);
    cnd_ = s4 == 0;
    a1 = D_08B22200 - (8704);
    if (cnd_) { goto L_088C0EF4; }
    goto L_088C0F48;
L_088C0F48:;
    v0 = LD_U8(s5+21);
    v1 = LD_U8(s5+20);
    a0 = LD32(s5+8);
    v0 = v0 << 6;
    v1 = v1 << 6;
    v0 = a0 + v0;
    v1 = a0 + v1;
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD_U8(s5+23);
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    v1 = LD_U8(s5+22);
    v0 = v0 << 6;
    v1 = v1 << 6;
    v1 = a0 + v1;
    a0 = a0 + v0;
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    v0 = D_08B22500 - (9472);
    a2 = v0 + 9472;
    t0 = a1 + 8704;
    t3 = 1;
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[12]=s0*t0;v[13]=s1*t0;v[14]=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=v1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    f0 = BITSF(LD32(sp));
    ST32(v0+9472, FBITS(f0));
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    f0 = BITSF(LD32(sp+4));
    ST32(a2+12, FBITS(f0));
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    f1 = BITSF(LD32(sp+8));
    ST32(a2+24, FBITS(f1));
    {u32 a_=sp+(272);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[16];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[16];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];float t1=v[13];float t2=v[14];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[16];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    f0 = BITSF(LD32(sp+16));
    ST32(a2+4, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    ST32(a2+16, FBITS(f1));
    f0 = BITSF(LD32(sp+24));
    ST32(a2+28, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    ST32(a2+8, FBITS(f1));
    f0 = BITSF(LD32(sp+36));
    ST32(a2+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    ST32(a2+32, FBITS(f1));
    v0 = LD32(s4+32);
    {v[112]=BITSF(LD32(v0+(12)));}
    {v[113]=BITSF(LD32(v0+(16)));}
    {v[114]=BITSF(LD32(v0+(20)));}
    {v[115]=BITSF(LD32(v0+(24)));}
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
    {v[96]=BITSF(LD32(a2+(0)));}
    {v[97]=BITSF(LD32(a2+(4)));}
    {v[98]=BITSF(LD32(a2+(8)));}
    {v[100]=BITSF(LD32(a2+(12)));}
    {v[101]=BITSF(LD32(a2+(16)));}
    {v[102]=BITSF(LD32(a2+(20)));}
    {v[104]=BITSF(LD32(a2+(24)));}
    {v[105]=BITSF(LD32(a2+(28)));}
    {v[106]=BITSF(LD32(a2+(32)));}
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
    v0 = D_08B22500 - (9472);
    f1 = BITSF(LD32(sp+116));
    ST32(v0+9472, FBITS(f0));
    f0 = BITSF(LD32(sp+120));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f0));
    f1 = BITSF(LD32(sp+124));
    f0 = BITSF(LD32(sp+128));
    ST32(a2+12, FBITS(f1));
    ST32(a2+16, FBITS(f0));
    f1 = BITSF(LD32(sp+132));
    f0 = BITSF(LD32(sp+136));
    ST32(a2+20, FBITS(f1));
    ST32(a2+24, FBITS(f0));
    f1 = BITSF(LD32(sp+140));
    f0 = BITSF(LD32(sp+144));
    ST32(a2+28, FBITS(f1));
    ST32(a2+32, FBITS(f0));
    v0 = LD32(s5+8);
    f0 = BITSF(LD32(v0));
    ST32(a1+8704, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    a0 = LD32(s4+4);
    ST32(t0+4, FBITS(f1));
    v1 = (s32)t3 < (s32)a0;
    f0 = BITSF(LD32(v0+8));
    cnd_ = v1 == 0;
    ST32(t0+8, FBITS(f0));
    if (cnd_) { goto L_088C14C0; }
    goto L_088C11DC;
L_088C11DC:;
    a3 = LD32(s4+32);
    t5 = t0 + 0;
    t1 = t0 + 12;
    t4 = a2 + 0;
    t0 = a2 + 36;
    t2 = 28;
    goto L_088C11F4;
L_088C11F4:;
    a0 = LD32(s4+28);
    v0 = t3 << 2;
    v1 = a3 + t2;
    v0 = v0 + a0;
    a2 = LD32(v0);
    {v[112]=BITSF(LD32(v1+(12)));}
    {v[113]=BITSF(LD32(v1+(16)));}
    {v[114]=BITSF(LD32(v1+(20)));}
    {v[115]=BITSF(LD32(v1+(24)));}
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
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[100]));}
    {ST32(sp+(128),FBITS(v[101]));}
    {ST32(sp+(132),FBITS(v[102]));}
    {ST32(sp+(136),FBITS(v[104]));}
    {ST32(sp+(140),FBITS(v[105]));}
    {ST32(sp+(144),FBITS(v[106]));}
    t3 = t3 + 1;
    a0 = a2 << 3;
    a0 = a0 + a2;
    a0 = a0 << 2;
    a0 = a0 + t4;
    {v[112]=BITSF(LD32(sp+(112)));}
    {v[113]=BITSF(LD32(sp+(116)));}
    {v[114]=BITSF(LD32(sp+(120)));}
    {v[116]=BITSF(LD32(sp+(124)));}
    {v[117]=BITSF(LD32(sp+(128)));}
    {v[118]=BITSF(LD32(sp+(132)));}
    {v[120]=BITSF(LD32(sp+(136)));}
    {v[121]=BITSF(LD32(sp+(140)));}
    {v[122]=BITSF(LD32(sp+(144)));}
    {v[96]=BITSF(LD32(a0+(0)));}
    {v[97]=BITSF(LD32(a0+(4)));}
    {v[98]=BITSF(LD32(a0+(8)));}
    {v[100]=BITSF(LD32(a0+(12)));}
    {v[101]=BITSF(LD32(a0+(16)));}
    {v[102]=BITSF(LD32(a0+(20)));}
    {v[104]=BITSF(LD32(a0+(24)));}
    {v[105]=BITSF(LD32(a0+(28)));}
    {v[106]=BITSF(LD32(a0+(32)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(64),FBITS(v[80]));}
    {ST32(sp+(68),FBITS(v[81]));}
    {ST32(sp+(72),FBITS(v[82]));}
    {ST32(sp+(76),FBITS(v[84]));}
    {ST32(sp+(80),FBITS(v[85]));}
    {ST32(sp+(84),FBITS(v[86]));}
    {ST32(sp+(88),FBITS(v[88]));}
    {ST32(sp+(92),FBITS(v[89]));}
    {ST32(sp+(96),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+92));
    a1 = a2 << 1;
    ST32(t0, FBITS(f0));
    a1 = a1 + a2;
    a1 = a1 << 2;
    f0 = BITSF(LD32(sp+68));
    {u32 a_=sp+(384);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    ST32(t0+4, FBITS(f0));
    a1 = a1 + t5;
    f0 = BITSF(LD32(sp+72));
    {u32 a_=sp+(400);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(416);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(t0+8, FBITS(f0));
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    f0 = BITSF(LD32(sp+76));
    ST32(t0+28, FBITS(f1));
    ST32(t0+12, FBITS(f0));
    f0 = BITSF(LD32(sp+80));
    v0 = LD32(a0);
    v1 = LD32(a0+4);
    ST32(t0+16, FBITS(f0));
    f0 = BITSF(LD32(sp+84));
    ST32(t0+20, FBITS(f0));
    f0 = BITSF(LD32(sp+88));
    ST32(t0+24, FBITS(f0));
    f0 = BITSF(LD32(sp+96));
    ST32(t0+32, FBITS(f0));
    t0 = t0 + 36;
    {u32 a_=sp+(432);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(a0+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    a3 = LD32(s4+32);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    v0 = LD32(a0+12);
    v1 = LD32(a0+16);
    a2 = LD32(a0+32);
    {u32 a_=sp+(368);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(448);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(a0+20);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(a0+24);
    v1 = LD32(a0+28);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    a0 = a3 + t2;
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(464);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {v[0]=BITSF(v0);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    v0 = LD32(a0);
    {v[1]=BITSF(v1);}
    v1 = LD32(a0+4);
    {v[2]=BITSF(a2);}
    a2 = LD32(a0+8);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a2);}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[4]);}
    ST32(sp+192, v0);
    f6 = BITSF(v0);
    {v1=FBITS(v[6]);}
    f2 = BITSF(LD32(a1));
    f4 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+4));
    {v0=FBITS(v[5]);}
    f5 = BITSF(v1);
    f0 = BITSF(v0);
    f2 = f6 + f2;
    f4 = f5 + f4;
    f3 = f0 + f3;
    a0 = LD32(s4+4);
    ST32(t1, FBITS(f2));
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    v0 = (s32)t3 < (s32)a0;
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    t2 = t2 + 28;
    ST32(t1+4, FBITS(f3));
    ST32(t1+8, FBITS(f4));
    t1 = t1 + 12;
    ST32(sp+196, FBITS(f0));
    ST32(sp+200, v1);
    ST32(sp+176, FBITS(f6));
    ST32(sp+180, FBITS(f0));
    ST32(sp+184, v1);
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, FBITS(f3));
    cnd_ = v0 != 0;
    ST32(sp+168, FBITS(f4));
    if (cnd_) { goto L_088C11F4; }
    goto L_088C14C0;
L_088C14C0:;
    s6 = 1;
    v0 = (s32)s6 < (s32)a0;
    cnd_ = v0 == 0;
    v1 = D_08B22500 - (9472);
    if (cnd_) { goto L_088C1698; }
    goto L_088C14D0;
L_088C14D0:;
    v0 = D_08B22200 - (8704);
    v1 = v1 + 9472;
    v0 = v0 + 8704;
    s1 = v1 + 36;
    fp = 28;
    s7 = v0 + 12;
    goto L_088C14E8;
L_088C14E8:;
    v1 = LD32(s4+28);
    a0 = LD32(s5+24);
    v0 = s6 << 2;
    v0 = v0 + v1;
    a1 = s6 + 0;
    s3 = LD32(v0);
    v0 = func_088C2198(a0, a1);
    goto L_088C1504;
L_088C1504:;
    cnd_ = (s32)v0 < 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088C1B58; }
    goto L_088C150C;
L_088C150C:;
    a0 = LD32(s5+24);
    v0 = v0 << 1;
    v0 = v0 + s2;
    v1 = LD32(a0+8);
    v0 = v0 + v1;
    s0 = LD_U8(v0+1);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C18F4; }
    goto L_088C152C;
L_088C152C:;
    v1 = LD32(s4+32);
    v0 = s3 << 3;
    v0 = v0 + s3;
    v1 = v1 + fp;
    {v[112]=BITSF(LD32(v1+(12)));}
    {v[113]=BITSF(LD32(v1+(16)));}
    {v[114]=BITSF(LD32(v1+(20)));}
    {v[115]=BITSF(LD32(v1+(24)));}
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
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[100]));}
    {ST32(sp+(128),FBITS(v[101]));}
    {ST32(sp+(132),FBITS(v[102]));}
    {ST32(sp+(136),FBITS(v[104]));}
    {ST32(sp+(140),FBITS(v[105]));}
    {ST32(sp+(144),FBITS(v[106]));}
    v1 = D_08B22500 - (9472);
    v0 = v0 << 2;
    v1 = v1 + 9472;
    v0 = v0 + v1;
    {v[112]=BITSF(LD32(sp+(112)));}
    {v[113]=BITSF(LD32(sp+(116)));}
    {v[114]=BITSF(LD32(sp+(120)));}
    {v[116]=BITSF(LD32(sp+(124)));}
    {v[117]=BITSF(LD32(sp+(128)));}
    {v[118]=BITSF(LD32(sp+(132)));}
    {v[120]=BITSF(LD32(sp+(136)));}
    {v[121]=BITSF(LD32(sp+(140)));}
    {v[122]=BITSF(LD32(sp+(144)));}
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
    {ST32(sp+(224),FBITS(v[80]));}
    {ST32(sp+(228),FBITS(v[81]));}
    {ST32(sp+(232),FBITS(v[82]));}
    {ST32(sp+(236),FBITS(v[84]));}
    {ST32(sp+(240),FBITS(v[85]));}
    {ST32(sp+(244),FBITS(v[86]));}
    {ST32(sp+(248),FBITS(v[88]));}
    {ST32(sp+(252),FBITS(v[89]));}
    {ST32(sp+(256),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+224));
    goto L_088C1638;
L_088C1638:;
    f1 = BITSF(LD32(sp+228));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+232));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f0));
    f1 = BITSF(LD32(sp+236));
    f0 = BITSF(LD32(sp+240));
    ST32(s1+12, FBITS(f1));
    ST32(s1+16, FBITS(f0));
    f1 = BITSF(LD32(sp+244));
    f0 = BITSF(LD32(sp+248));
    ST32(s1+20, FBITS(f1));
    ST32(s1+24, FBITS(f0));
    f1 = BITSF(LD32(sp+252));
    f0 = BITSF(LD32(sp+256));
    ST32(s1+28, FBITS(f1));
    ST32(s1+32, FBITS(f0));
    goto L_088C167C;
L_088C167C:;
    a0 = LD32(s4+4);
    s6 = s6 + 1;
    s7 = s7 + 12;
    v0 = (s32)s6 < (s32)a0;
    fp = fp + 28;
    cnd_ = v0 != 0;
    s1 = s1 + 36;
    if (cnd_) { goto L_088C14E8; }
    goto L_088C1698;
L_088C1698:;
    s2 = 1;
    v0 = (s32)s2 < (s32)a0;
    cnd_ = v0 == 0;
    v0 = D_08B22200 - (8704);
    if (cnd_) { goto L_088C1710; }
    goto L_088C16A8;
L_088C16A8:;
    s6 = v0 + 8704;
    s1 = s6 + 12;
    s3 = 28;
    goto L_088C16B4;
L_088C16B4:;
    v1 = LD32(s4+28);
    a0 = LD32(s5+24);
    v0 = s2 << 2;
    v0 = v0 + v1;
    a1 = s2 + 0;
    s0 = LD32(v0);
    v0 = func_088C2198(a0, a1);
    goto L_088C16D0;
L_088C16D0:;
    cnd_ = (s32)v0 < 0;
    v0 = v0 << 6;
    if (cnd_) { goto L_088C17D0; }
    goto L_088C16D8;
L_088C16D8:;
    v1 = LD32(s5+8);
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(s1, FBITS(f0));
    f1 = BITSF(LD32(v1+4));
    ST32(s1+4, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    ST32(s1+8, FBITS(f0));
    goto L_088C16F8;
L_088C16F8:;
    v0 = LD32(s4+4);
    s2 = s2 + 1;
    s3 = s3 + 28;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 12;
    if (cnd_) { goto L_088C16B4; }
    goto L_088C1710;
L_088C1710:;
    v0 = LD32(s5);
    s2 = v0 + 112;
    cnd_ = s2 == 0;
    v1 = 1;
    if (cnd_) { goto L_088C17C4; }
    goto L_088C1720;
L_088C1720:;
    v0 = LD_U16(v0+112);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088C1794; }
    goto L_088C172C;
L_088C172C:;
    a0 = LD32(s2+92);
    v0 = D_08B22200 - (8704);
    v1 = D_08B22500 - (9472);
    s0 = v0 + 8704;
    s3 = v1 + 9472;
    s1 = 0 + 0;
    goto L_088C1744;
L_088C1744:;
    a0 = a0 + s1;
    a0 = a0 + 12;
    a1 = s3 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1754;
L_088C1754:;
    v0 = LD32(s2+92);
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f0 = BITSF(LD32(s0+8));
    v1 = v0 + s1;
    ST32(v1, FBITS(f1));
    a0 = v0 + 0;
    s4 = s4 + 1;
    ST32(v1+8, FBITS(f0));
    s1 = s1 + 28;
    s3 = s3 + 36;
    ST32(v1+4, FBITS(f2));
    v0 = LD_U16(s2);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_088C1744; }
    goto L_088C1794;
L_088C1794:;
    v0 = LD32(s2);
    v1 = 0x10000u;
    a0 = 0x20000u;
    v0 = v0 | v1;
    v0 = v0 | a0;
    ST32(s2, v0);
    v0 = D_08B285AC - (-31316);
    a0 = LD32(s5);
    v1 = LD32(v0-31316);
    ST32(a0+220, v1);
    ST32(a0+224, v1);
    v1 = 1;
    goto L_088C17C4;
L_088C17C4:;
    v0 = D_08B2118C - (4492);
    ST8(v0+4492, v1);
    goto L_088C0EF4;
L_088C17D0:;
    a0 = s0 << 3;
    v1 = D_08B22500 - (9472);
    a0 = a0 + s0;
    v0 = v1 + 9472;
    a3 = LD32(s4+32);
    a0 = a0 << 2;
    a1 = s0 << 1;
    a0 = a0 + v0;
    a1 = a1 + s0;
    v1 = LD32(a0);
    v0 = LD32(a0+4);
    {u32 a_=sp+(656);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    a1 = a1 << 2;
    {v[48]=BITSF(v1);}
    v1 = LD32(a0+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v0 = LD32(a0+12);
    v1 = LD32(a0+16);
    a1 = a1 + s6;
    a3 = a3 + s3;
    {u32 a_=sp+(672);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {v[16]=BITSF(v0);}
    v0 = LD32(a0+20);
    {v[17]=BITSF(v1);}
    {v[18]=BITSF(v0);}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    v0 = LD32(a0+24);
    v1 = LD32(a0+28);
    a2 = LD32(a0+32);
    f6 = BITSF(LD32(a1+8));
    f4 = BITSF(LD32(a1));
    f5 = BITSF(LD32(a1+4));
    a0 = LD32(a3+8);
    {u32 a_=sp+(640);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v0);}
    {u32 a_=sp+(576);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = LD32(a3);
    {v[33]=BITSF(v1);}
    {v[16]=BITSF(v0);}
    v1 = LD32(a3+4);
    {v[34]=BITSF(a2);}
    {v[17]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[18]=BITSF(a0);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v1=FBITS(v[20]);}
    {v0=FBITS(v[22]);}
    f2 = BITSF(v1);
    f3 = BITSF(v0);
    {v0=FBITS(v[21]);}
    f0 = BITSF(v0);
    f4 = f2 + f4;
    f6 = f3 + f6;
    f5 = f0 + f5;
    ST32(sp+160, v1);
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(s1+4, FBITS(f5));
    ST32(s1+8, FBITS(f6));
    ST32(s1, FBITS(f4));
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    ST32(sp+192, FBITS(f4));
    ST32(sp+196, FBITS(f5));
    ST32(sp+200, FBITS(f6));
    goto L_088C16F8;
L_088C18F4:;
    a1 = s0 + 0;
    v0 = func_088C2198(a0, a1);
    goto L_088C18FC;
L_088C18FC:;
    a0 = v0 + 0;
    v0 = s0 << 1;
    v0 = v0 + s0;
    v1 = D_08B22200 - (8704);
    v1 = v1 + 8704;
    v0 = v0 << 2;
    v0 = v0 + v1;
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s7+4));
    f5 = BITSF(LD32(s7));
    f1 = BITSF(LD32(s7+8));
    f2 = f2 - f0;
    f3 = f3 - f5;
    f4 = f4 - f1;
    f6 = BITSF(0);
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {u32 a_=sp+(544);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+192, FBITS(f3));
    fcc = FCMP(f0, f6, 2);
    ST32(sp+196, FBITS(f2));
    cnd_ = fcc;
    ST32(sp+200, FBITS(f4));
    if (cnd_) { goto L_088C19B4; }
    goto L_088C197C;
L_088C197C:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(272);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    ST32(sp+192, v1);
    ST32(sp+196, v0);
    ST32(sp+200, FBITS(f3));
    goto L_088C19B4;
L_088C19B4:;
    v0 = LD32(s5+8);
    a0 = a0 << 6;
    v1 = s2 << 6;
    v1 = v0 + v1;
    v0 = v0 + a0;
    {u32 a_=v0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(560);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f4 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[8]=BITSF(v1);}
    v1 = FBITS(f2);
    {v[9]=BITSF(v0);}
    {v[10]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+176, FBITS(f4));
    fcc = FCMP(f0, f6, 2);
    ST32(sp+180, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+184, FBITS(f2));
    if (cnd_) { goto L_088C1A58; }
    goto L_088C1A20;
L_088C1A20:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {u32 a_=sp+(272);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+160, v1);
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    goto L_088C1A58;
L_088C1A58:;
    a1 = sp + 192;
    a2 = sp + 176;
    a0 = sp + 208;
    func_08835B50(a0, a1, a2);
    goto L_088C1A68;
L_088C1A68:;
    {v[112]=BITSF(LD32(sp+(208)));}
    {v[113]=BITSF(LD32(sp+(212)));}
    {v[114]=BITSF(LD32(sp+(216)));}
    {v[115]=BITSF(LD32(sp+(220)));}
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
    {ST32(sp+(64),FBITS(v[96]));}
    {ST32(sp+(68),FBITS(v[97]));}
    {ST32(sp+(72),FBITS(v[98]));}
    {ST32(sp+(76),FBITS(v[100]));}
    {ST32(sp+(80),FBITS(v[101]));}
    {ST32(sp+(84),FBITS(v[102]));}
    {ST32(sp+(88),FBITS(v[104]));}
    {ST32(sp+(92),FBITS(v[105]));}
    {ST32(sp+(96),FBITS(v[106]));}
    {v[112]=BITSF(LD32(s1+(0)));}
    {v[113]=BITSF(LD32(s1+(4)));}
    {v[114]=BITSF(LD32(s1+(8)));}
    {v[116]=BITSF(LD32(s1+(12)));}
    {v[117]=BITSF(LD32(s1+(16)));}
    {v[118]=BITSF(LD32(s1+(20)));}
    {v[120]=BITSF(LD32(s1+(24)));}
    {v[121]=BITSF(LD32(s1+(28)));}
    {v[122]=BITSF(LD32(s1+(32)));}
    {v[96]=BITSF(LD32(sp+(64)));}
    {v[97]=BITSF(LD32(sp+(68)));}
    {v[98]=BITSF(LD32(sp+(72)));}
    {v[100]=BITSF(LD32(sp+(76)));}
    {v[101]=BITSF(LD32(sp+(80)));}
    {v[102]=BITSF(LD32(sp+(84)));}
    {v[104]=BITSF(LD32(sp+(88)));}
    {v[105]=BITSF(LD32(sp+(92)));}
    {v[106]=BITSF(LD32(sp+(96)));}
    {float m00=0;m00+=v[112]*v[96];m00+=v[116]*v[97];m00+=v[120]*v[98];float m01=0;m01+=v[113]*v[96];m01+=v[117]*v[97];m01+=v[121]*v[98];float m02=0;m02+=v[114]*v[96];m02+=v[118]*v[97];m02+=v[122]*v[98];float m10=0;m10+=v[112]*v[100];m10+=v[116]*v[101];m10+=v[120]*v[102];float m11=0;m11+=v[113]*v[100];m11+=v[117]*v[101];m11+=v[121]*v[102];float m12=0;m12+=v[114]*v[100];m12+=v[118]*v[101];m12+=v[122]*v[102];float m20=0;m20+=v[112]*v[104];m20+=v[116]*v[105];m20+=v[120]*v[106];float m21=0;m21+=v[113]*v[104];m21+=v[117]*v[105];m21+=v[121]*v[106];float m22=0;m22+=v[114]*v[104];m22+=v[118]*v[105];m22+=v[122]*v[106];v[80]=m00;v[81]=m01;v[82]=m02;v[84]=m10;v[85]=m11;v[86]=m12;v[88]=m20;v[89]=m21;v[90]=m22;}
    {ST32(sp+(224),FBITS(v[80]));}
    {ST32(sp+(228),FBITS(v[81]));}
    {ST32(sp+(232),FBITS(v[82]));}
    {ST32(sp+(236),FBITS(v[84]));}
    {ST32(sp+(240),FBITS(v[85]));}
    {ST32(sp+(244),FBITS(v[86]));}
    {ST32(sp+(248),FBITS(v[88]));}
    {ST32(sp+(252),FBITS(v[89]));}
    {ST32(sp+(256),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+224));
    goto L_088C1638;
L_088C1B58:;
    a0 = LD32(s5+24);
    a1 = s6 + 0;
    v0 = func_088C21D4(a0, a1);
    goto L_088C1B64;
L_088C1B64:;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088C152C; }
    goto L_088C1B6C;
L_088C1B6C:;
    v0 = v0 << 3;
    v0 = v0 + v1;
    v1 = D_08B22500 - (9472);
    v0 = v0 << 2;
    v1 = v1 + 9472;
    v0 = v0 + v1;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    ST32(s1+8, FBITS(f2));
    ST32(s1+12, FBITS(f3));
    ST32(s1+16, FBITS(f4));
    ST32(s1+20, FBITS(f5));
    ST32(s1+24, FBITS(f6));
    ST32(s1+28, FBITS(f7));
    ST32(s1+32, FBITS(f8));
    goto L_088C167C;
}

/* 088C1BD0 */
void func_088C1BD0(u32 a0, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C1BD0:;
    sp = sp - 32;
    a3 = a0 + 0;
    f2 = BITSF(0);
    t0 = LD32(a0+4);
    t1 = 0 + 0;
    cnd_ = t0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088C1C34; }
    goto L_088C1BF0;
L_088C1BF0:;
    a1 = LD32(a0+8);
    goto L_088C1BF4;
L_088C1BF4:;
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = 1;
    a2 = a2 + 1;
    a0 = a2 < t0;
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = LD32(a1+48);
    a1 = a1 + 64;
    if (v1 != 0) t1 = v0;
    {float s0=v[4];float d0=sqrtf(s0);v[4]=d0;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    cnd_ = a0 != 0;
    f2 = f2 + f0;
    if (cnd_) { goto L_088C1BF4; }
    goto L_088C1C34;
L_088C1C34:;
    v1 = D_08B2BC44 - (-17340);
    v0 = D_08AEC774 - (-14476);
    f1 = BITSF(LD32(v1-17340));
    f0 = BITSF(LD32(v0-14476));
    f0 = f1 * f0;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a3+96, 0); goto L_088C1C64; }
    goto L_088C1C58;
L_088C1C58:;
    f0 = BITSF(LD32(a3+96));
    f0 = f0 + f1;
    ST32(a3+96, FBITS(f0));
    goto L_088C1C64;
L_088C1C64:;
    v0 = D_08AEC778 - (-14472);
    f0 = BITSF(LD32(a3+96));
    f1 = BITSF(LD32(v0-14472));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088C1CC0; }
    goto L_088C1C80;
L_088C1C80:;
    cnd_ = t1 == 0;
    if (cnd_) { ST32(a3+100, 0); goto L_088C1C98; }
    goto L_088C1C88;
L_088C1C88:;
    f1 = BITSF(LD32(v1-17340));
    f0 = BITSF(LD32(a3+100));
    f0 = f0 + f1;
    ST32(a3+100, FBITS(f0));
    goto L_088C1C98;
L_088C1C98:;
    v0 = D_08AEC77C - (-14468);
    f0 = BITSF(LD32(a3+100));
    f1 = BITSF(LD32(v0-14468));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088C1CC0; }
    goto L_088C1CB4;
L_088C1CB4:;
    goto L_088C1CB8;
L_088C1CB8:;
    sp = sp + 32;
    return;
L_088C1CC0:;
    a0 = a3 + 0;
    func_088C1CD0(a0, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_088C1CC8;
L_088C1CC8:;
    goto L_088C1CB8;
}

/* 088C1CD0 */
void func_088C1CD0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C1CD0:;
    sp = sp - 32;
    s2 = a0 + 0;
    func_088C0EA8(a0, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_088C1CF0;
L_088C1CF0:;
    a0 = s2 + 52;
    { rv_t r_ = func_088B8AA8(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1CF8;
L_088C1CF8:;
    s1 = LD32(s2+4);
    v0 = (u32)-1;
    s1 = s1 - 1;
    cnd_ = s1 == v0;
    s3 = (u32)-1;
    if (cnd_) { goto L_088C1D44; }
    goto L_088C1D0C;
L_088C1D0C:;
    v1 = LD32(s2+8);
    goto L_088C1D10;
L_088C1D10:;
    v0 = s1 << 6;
    s0 = v1 + v0;
    a1 = LD32(s0+48);
    cnd_ = a1 == 0;
    if (cnd_) { s1 = s1 - 1; goto L_088C1D3C; }
    goto L_088C1D24;
L_088C1D24:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB5D48(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1D2C;
L_088C1D2C:;
    v0 = LD32(s0+48);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088C1D24; }
    goto L_088C1D38;
L_088C1D38:;
    s1 = s1 - 1;
    goto L_088C1D3C;
L_088C1D3C:;
    cnd_ = s1 != s3;
    if (cnd_) { v1 = LD32(s2+8); goto L_088C1D10; }
    goto L_088C1D44;
L_088C1D44:;
    v0 = 1;
    ST8(s2+92, v0);
    sp = sp + 32;
    return;
}

/* 088C1D68 */
rv_t func_088C1D68(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088C1D68:;
    sp = sp - 64;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s1 = a1 < 0x1u;
    v0 = s1 & v0;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C1F90; }
    goto L_088C1D9C;
L_088C1D9C:;
    v0 = s2 < 0x1u;
    v0 = s1 & v0;
    cnd_ = v0 != 0;
    v1 = D_08B2BE80 - (-16768);
    if (cnd_) { goto L_088C1DC8; }
    goto L_088C1DAC;
L_088C1DAC:;
    goto L_088C1DB0;
L_088C1DB0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088C1DC8:;
    s3 = v1 - 16768;
    a2 = LD32(s3+4);
    v0 = D_08AF7C60 - (31840);
    v0 = v0 + 31840;
    a1 = LD32(a2);
    ST32(v1-16768, v0);
    a0 = sp + 0;
    v0 = (u32)-1;
    s0 = s3 + 0;
    ST32(sp+4, a1);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, a2);
    func_08AB41DC(a0);
    goto L_088C1E04;
L_088C1E04:;
    v1 = LD32(sp+4);
    goto L_088C1E08;
L_088C1E08:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_088C1E38; }
    goto L_088C1E10;
L_088C1E10:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+16);
    if (cnd_) { goto L_088C1E38; }
    goto L_088C1E18;
L_088C1E18:;
    v0 = LD32(v1+8);
    a0 = LD32(s0+4);
    a1 = a1 + v0;
    func_08AB4304(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088C1E28;
L_088C1E28:;
    a0 = sp + 0;
    func_08AB4270(a0);
    goto L_088C1E30;
L_088C1E30:;
    v1 = LD32(sp+4);
    goto L_088C1E08;
L_088C1E38:;
    s2 = LD32(s0+4);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { s3 = LD32(s3+4); goto L_088C1EAC; }
    goto L_088C1E48;
L_088C1E48:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_088C1E8C; }
    goto L_088C1E54;
L_088C1E54:;
    v0 = LD32(a0-4);
    v1 = 108;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_088C1E68;
L_088C1E68:;
    cnd_ = a0 == s0;
    s0 = s0 - 108;
    if (cnd_) { goto L_088C1E80; }
    goto L_088C1E70;
L_088C1E70:;
    a0 = s0 + 52;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1E78;
L_088C1E78:;
    a0 = LD32(s1);
    goto L_088C1E68;
L_088C1E80:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1E88;
L_088C1E88:;
    a0 = LD32(s1+4);
    goto L_088C1E8C;
L_088C1E8C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088C1F7C; }
    goto L_088C1E94;
L_088C1E94:;
    s0 = LD32(s1+12);
    goto L_088C1E98;
L_088C1E98:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C1F64; }
    goto L_088C1EA0;
L_088C1EA0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1EA8;
L_088C1EA8:;
    s3 = LD32(s3+4);
    goto L_088C1EAC;
L_088C1EAC:;
    v0 = (u32)-1;
    ST32(s2+12, v0);
    cnd_ = s3 == 0;
    ST32(s2, 0);
    if (cnd_) { goto L_088C1DAC; }
    goto L_088C1EBC;
L_088C1EBC:;
    s1 = LD32(s3);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088C1F28; }
    goto L_088C1EC8;
L_088C1EC8:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_088C1F0C; }
    goto L_088C1ED4;
L_088C1ED4:;
    v0 = LD32(a0-4);
    v1 = 108;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_088C1EE8;
L_088C1EE8:;
    cnd_ = a0 == s0;
    s0 = s0 - 108;
    if (cnd_) { goto L_088C1F00; }
    goto L_088C1EF0;
L_088C1EF0:;
    a0 = s0 + 52;
    { rv_t r_ = func_088B8B58(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1EF8;
L_088C1EF8:;
    a0 = LD32(s1);
    goto L_088C1EE8;
L_088C1F00:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1F08;
L_088C1F08:;
    a0 = LD32(s1+4);
    goto L_088C1F0C;
L_088C1F0C:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088C1F50; }
    goto L_088C1F14;
L_088C1F14:;
    s0 = LD32(s1+12);
    goto L_088C1F18;
L_088C1F18:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C1F38; }
    goto L_088C1F20;
L_088C1F20:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1F28;
L_088C1F28:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1F30;
L_088C1F30:;
    goto L_088C1DB0;
L_088C1F38:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088C1F40;
L_088C1F40:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1F48;
L_088C1F48:;
    goto L_088C1F20;
L_088C1F50:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1F5C;
L_088C1F5C:;
    s0 = LD32(s1+12);
    goto L_088C1F18;
L_088C1F64:;
    a0 = s0 + 0;
    func_08AB4390(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088C1F6C;
L_088C1F6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C1F74;
L_088C1F74:;
    goto L_088C1EA0;
L_088C1F7C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1F88;
L_088C1F88:;
    s0 = LD32(s1+12);
    goto L_088C1E98;
L_088C1F90:;
    v0 = D_08AF7C60 - (31840);
    s0 = D_08B2BE80 - (-16768);
    a0 = 20;
    v0 = v0 + 31840;
    ST32(s0-16768, v0);
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1FA8;
L_088C1FA8:;
    s0 = s0 - 16768;
    v1 = 16;
    a0 = (u32)-1;
    ST32(s0+4, v0);
    ST32(v0+4, v1);
    ST32(v0+12, a0);
    ST32(v0, 0);
    ST32(v0+16, 0);
    goto L_088C1D9C;
}

/* 088C1FCC */
rv_t func_088C1FCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C1FCC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088C1D68(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C1FE0;
L_088C1FE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088C1FEC */
rv_t func_088C1FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C1FEC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088C1D68(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C2000;
L_088C2000:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088C200C */
rv_t func_088C200C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32); memcpy(stack_ + 32, PTR(sp_in), 16); /* stack-passed arguments */
L_088C200C:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    s2 = LD32(sp+40);
    ST32(a0+4, a2);
    a0 = a1 << 1;
    ST32(s1, a1);
    ST32(s1+8, a3);
    ST32(s1+12, t0);
    ST32(s1+16, t1);
    ST32(s1+20, t2);
    ST32(s1+24, t3);
    s3 = LD32(sp+44);
    v0 = (u32)(s32)LD_S8(sp+32);
    v1 = (u32)(s32)LD_S8(sp+33);
    ST8(s1+28, v0);
    ST8(s1+29, v1);
    v0 = (u32)(s32)LD_S8(sp+36);
    v1 = (u32)(s32)LD_S8(sp+37);
    ST8(s1+30, v0);
    ST8(s1+31, v1);
    ST32(s1+32, s2);
    ST32(s1+36, s3);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C2080;
L_088C2080:;
    a1 = v0 + 0;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_088C20A4; }
    goto L_088C208C;
L_088C208C:;
    a0 = (u32)-1;
    goto L_088C2090;
L_088C2090:;
    v1 = v1 - 1;
    ST8(v0, 0);
    ST8(v0+1, 0);
    cnd_ = v1 != a0;
    v0 = v0 + 2;
    if (cnd_) { goto L_088C2090; }
    goto L_088C20A4;
L_088C20A4:;
    v0 = LD32(s1+4);
    ST32(s1+40, a1);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088C2104; }
    goto L_088C20B4;
L_088C20B4:;
    v1 = LD32(s1+8);
    goto L_088C20B8;
L_088C20B8:;
    v0 = a3 << 1;
    v0 = v0 + a3;
    v0 = v0 + v1;
    a1 = LD_U8(v0);
    a0 = LD32(s1+40);
    a2 = a3 + 1;
    a1 = a1 << 1;
    a0 = a1 + a0;
    v0 = LD_U8(a0);
    v0 = v0 | 0x1;
    ST8(a0, v0);
    v1 = LD32(s1+40);
    a1 = a1 + v1;
    ST8(a1+1, a3);
    a3 = a2 & 0xff;
    v0 = LD32(s1+4);
    v0 = a3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_088C20B8; }
    goto L_088C2104;
L_088C2104:;
    cnd_ = s2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088C214C; }
    goto L_088C210C;
L_088C210C:;
    a3 = s3 + 0;
    goto L_088C2110;
L_088C2110:;
    a0 = LD_U8(a3);
    v1 = LD32(s1+40);
    t0 = t0 + 1;
    a0 = a0 << 1;
    v1 = a0 + v1;
    v0 = LD_U8(v1);
    a2 = t0 < s2;
    v0 = v0 | 0x4;
    ST8(v1, v0);
    a1 = LD32(s1+40);
    v0 = LD_U8(a3+1);
    a3 = a3 + 2;
    a0 = a0 + a1;
    cnd_ = a2 != 0;
    ST8(a0+1, v0);
    if (cnd_) { goto L_088C2110; }
    goto L_088C214C;
L_088C214C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088C2168 */
u64 func_088C2168(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C2168:;
    sp = sp - 16;
    v0 = LD32(a0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088C2188; }
    goto L_088C217C;
L_088C217C:;
    goto L_088C2180;
L_088C2180:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088C2188:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2190;
L_088C2190:;
    goto L_088C2180;
}

/* 088C2198 */
u32 func_088C2198(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088C2198:;
    v0 = LD32(a0);
    a2 = a1 << 1;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088C21CC; }
    goto L_088C21AC;
L_088C21AC:;
    v1 = LD32(a0+40);
    a0 = a2 + v1;
    v0 = LD_U8(a0);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C21CC; }
    goto L_088C21C4;
L_088C21C4:;
    v0 = LD_U8(a0+1);
    return v0;
L_088C21CC:;
    v0 = (u32)-1;
    return v0;
}

/* 088C21D4 */
u32 func_088C21D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088C21D4:;
    v0 = LD32(a0);
    a2 = a1 << 1;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088C2208; }
    goto L_088C21E8;
L_088C21E8:;
    v1 = LD32(a0+40);
    a0 = a2 + v1;
    v0 = LD_U8(a0);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C2208; }
    goto L_088C2200;
L_088C2200:;
    v0 = LD_U8(a0+1);
    return v0;
L_088C2208:;
    v0 = (u32)-1;
    return v0;
}

/* 088C2210 */
void func_088C2210(void)
{
    u32 v0 = 0;
L_088C2210:;
    v0 = D_08B2BEA0 - (-16736);
    ST32(v0-16736, 0);
    return;
}

/* 088C221C */
void func_088C221C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C221C:;
    sp = sp - 16;
    s1 = D_08B2BEA0 - (-16736);
    v0 = LD32(s1-16736);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C2254; }
    goto L_088C2238;
L_088C2238:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    s0 = LD32(v0+136);
    if (cnd_) { goto L_088C224C; }
    goto L_088C2244;
L_088C2244:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C224C;
L_088C224C:;
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088C2238; }
    goto L_088C2254;
L_088C2254:;
    ST32(s1-16736, 0);
    sp = sp + 16;
    return;
}

/* 088C226C */
void func_088C226C(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C226C:;
    sp = sp - 16;
    func_088C221C(t1, t2, t3);
    goto L_088C227C;
L_088C227C:;
    sp = sp + 16;
    return;
}

/* 088C2288 */
void func_088C2288(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C2288:;
    sp = sp - 16;
    v0 = D_08B2BEA0 - (-16736);
    a0 = LD32(v0-16736);
    cnd_ = a0 == 0;
    s1 = v0 - 16736;
    if (cnd_) { goto L_088C22E0; }
    goto L_088C22A8;
L_088C22A8:;
    s0 = a0 + 0;
    goto L_088C22AC;
L_088C22AC:;
    v0 = LD32(s0+128);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088C230C; }
    goto L_088C22B8;
L_088C22B8:;
    v0 = LD32(s0+132);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = s0 + 136; goto L_088C2304; }
    goto L_088C22C4;
L_088C22C4:;
    v0 = LD32(s0+136);
    a0 = s0 + 0;
    cnd_ = s0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088C22F4; }
    goto L_088C22D4;
L_088C22D4:;
    v0 = LD32(s1);
    goto L_088C22D8;
L_088C22D8:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088C22AC; }
    goto L_088C22E0;
L_088C22E0:;
    sp = sp + 16;
    return;
L_088C22F4:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C22FC;
L_088C22FC:;
    v0 = LD32(s1);
    goto L_088C22D8;
L_088C2304:;
    v0 = LD32(s1);
    goto L_088C22D8;
L_088C230C:;
    s1 = s0 + 136;
    func_088C2760(a0);
    goto L_088C2314;
L_088C2314:;
    v0 = LD32(s1);
    goto L_088C22D8;
}

/* 088C231C */
void func_088C231C(u32 a0)
{
    int cnd_;
L_088C231C:;
    cnd_ = a0 != 0;
    if (cnd_) { ST32(a0+128, 0); goto L_088C2324; }
    goto L_088C2324;
L_088C2324:;
    return;
}

/* 088C232C */
void func_088C232C(u32 a0)
{
    u32 v0 = 0;
L_088C232C:;
    v0 = LD32(a0+132);
    v0 = v0 + 1;
    ST32(a0+132, v0);
    return;
}

/* 088C233C */
void func_088C233C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088C233C:;
    v0 = LD32(a0+132);
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_088C234C; }
    goto L_088C2348;
L_088C2348:;
    ST32(a0+132, v1);
    goto L_088C234C;
L_088C234C:;
    return;
}

/* 088C2354 */
void func_088C2354(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67];
    u8 stack_[224] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 224);
L_088C2354:;
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a0+(112);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr16=d0;vr17=d1;vr18=d2;}
    sp = sp - 224;
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(80);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=a0+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(208);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;v[27]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;v[23]=d3;}
    {float t0=vr64;float t1=vr65;float t2=vr66;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+4);
    a2 = LD32(sp+8);
    a3 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a1+4, v1);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    t0 = a0 + 48;
    ST32(a1, v0);
    {u32 a_=sp+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(a1+8, a2);
    ST32(a1+12, a3);
    {u32 a_=a0+(48);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(96);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=t0+(16);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=t0+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;v[23]=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;v[27]=d3;}
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+4);
    a2 = LD32(sp+8);
    a3 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a1+4, v1);
    ST32(a1, v0);
    ST32(a1+8, a2);
    ST32(a1+12, a3);
    {u32 a_=a0+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    sp = sp + 224;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;
}

/* 088C2464 */
void func_088C2464(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr79 = v[79], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[864] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 864);
L_088C2464:;
    sp = sp - 864;
    {u32 a_=a0+(16);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=a0+(32);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=a0+(0);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=a0+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(544);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(560);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {float s0=vr100;float s1=vr101;float s2=vr102;float s3=vr103;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(576);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);vr68=BITSF(LD32(a_+0));vr69=BITSF(LD32(a_+4));vr70=BITSF(LD32(a_+8));vr71=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(592);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(688);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(224);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=a1+(0);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a0 = a0 + 48;
    {float t0=vr116;float t1=vr117;float t2=vr118;float o0=0;o0+=vr0*t0;o0+=vr4*t1;o0+=vr8*t2;float o1=0;o1+=vr1*t0;o1+=vr5*t1;o1+=vr9*t2;float o2=0;o2+=vr2*t0;o2+=vr6*t1;o2+=vr10*t2;vr112=o0;vr113=o1;vr114=o2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=a0+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = LD32(sp+96);
    {u32 a_=a1+(16);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(752);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(768);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(224);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=a1+(32);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    ST32(sp+48, v0);
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr124=d0;vr125=d1;vr126=d2;vr127=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    v0 = LD32(sp+100);
    {float s0=vr124;float s1=vr125;float s2=vr126;float s3=vr127;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    ST32(sp+52, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    v0 = LD32(sp+104);
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float t0=v[84];float t1=v[85];float t2=v[86];float o0=0;o0+=vr0*t0;o0+=vr4*t1;o0+=vr8*t2;float o1=0;o1+=vr1*t0;o1+=vr5*t1;o1+=vr9*t2;float o2=0;o2+=vr2*t0;o2+=vr6*t1;o2+=vr10*t2;vr80=o0;vr81=o1;vr82=o2;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(304);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float t0=vr80;float t1=vr81;float t2=vr82;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=a0+(32);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    ST32(sp+56, v0);
    {u32 a_=sp+(528);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(848);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+108);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    ST32(sp+60, v0);
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    v0 = LD32(sp+112);
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    ST32(sp+64, v0);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[108]=d0;v[109]=d1;v[110]=d2;v[111]=d3;}
    v0 = LD32(sp+116);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr124=d0;vr125=d1;vr126=d2;vr127=d3;}
    ST32(sp+68, v0);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    v0 = LD32(sp+120);
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    ST32(sp+72, v0);
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    v0 = LD32(sp+124);
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr124;float s1=vr125;float s2=vr126;float s3=vr127;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    ST32(sp+76, v0);
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr116=d0;vr117=d1;vr118=d2;vr119=d3;}
    a3 = a1 + 0;
    v0 = LD32(sp+128);
    t0 = sp + 48;
    a2 = sp + 0;
    ST32(sp+80, v0);
    v0 = LD32(sp+132);
    ST32(sp+84, v0);
    v0 = LD32(sp+136);
    ST32(sp+88, v0);
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    v0 = LD32(sp+140);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+136);
    ST32(sp+92, v0);
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    v0 = LD32(sp+128);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+8, v1);
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    ST32(sp, v0);
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr4=o0;vr5=o1;vr6=o2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+132);
    v1 = LD32(sp+112);
    ST32(sp+4, v0);
    v0 = LD32(sp+140);
    ST32(sp+16, v1);
    ST32(sp+12, v0);
    v0 = LD32(sp+116);
    v1 = LD32(sp+120);
    ST32(sp+20, v0);
    v0 = LD32(sp+124);
    ST32(sp+24, v1);
    ST32(sp+28, v0);
    v1 = LD32(sp+96);
    v0 = LD32(sp+100);
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    v1 = LD32(sp+104);
    v0 = LD32(sp+108);
    ST32(sp+40, v1);
    ST32(sp+44, v0);
    goto L_088C272C;
L_088C272C:;
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
    if (cnd_) { goto L_088C272C; }
    goto L_088C2758;
L_088C2758:;
    sp = sp + 864;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 088C2760 */
void func_088C2760(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
L_088C2760:;
    t0 = a0 + 0;
    v0 = LD32(a0+96);
    v1 = LD32(a0+100);
    a1 = LD32(t0+108);
    a0 = LD32(a0+104);
    ST32(t0+112, v0);
    t2 = t0 + 48;
    a3 = t0 + 0;
    ST32(t0+120, a0);
    a2 = t2 + 0;
    t1 = t0 + 96;
    ST32(t0+116, v1);
    ST32(t0+124, a1);
    a0 = LD32(t0+128);
    v1 = LD32(a0+208);
    a0 = a0 + 208;
    ST32(t0+96, v1);
    v0 = LD32(a0+4);
    ST32(t0+100, v0);
    v1 = LD32(a0+8);
    ST32(t0+104, v1);
    v0 = LD32(a0+12);
    ST32(t0+108, v0);
    goto L_088C27BC;
L_088C27BC:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(a3, v0);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = a2 != t1;
    ST32(a3-4, a1);
    if (cnd_) { goto L_088C27BC; }
    goto L_088C27E8;
L_088C27E8:;
    f0 = BITSF(LD32(t0+16));
    f1 = BITSF(LD32(t0+32));
    f2 = BITSF(LD32(t0+4));
    f3 = BITSF(LD32(t0+8));
    ST32(t0+4, FBITS(f0));
    v0 = t0 + 16;
    v1 = t0 + 32;
    ST32(t0+8, FBITS(f1));
    a3 = t2 + 0;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+4));
    ST32(t0+16, FBITS(f2));
    ST32(v0+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    a2 = LD32(t0+128);
    ST32(t0+32, FBITS(f3));
    t0 = a2 + 48;
    goto L_088C282C;
L_088C282C:;
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
    if (cnd_) { goto L_088C282C; }
    goto L_088C2858;
L_088C2858:;
    return;
}

/* 088C2860 */
void func_088C2860(void)
{
    u32 v0 = 0, v1 = 0;
L_088C2860:;
    v0 = D_08B2BED0 - (-16688);
    ST32(v0-16688, 0);
    v1 = D_08B2BED4 - (-16684);
    v0 = D_08B2BED8 - (-16680);
    ST32(v1-16684, 0);
    ST32(v0-16680, 0);
    return;
}

/* 088C287C */
void func_088C287C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C287C:;
    sp = sp - 32;
    s5 = D_08B2BEA4 - (-16732);
    s4 = LD32(s5-16732);
    cnd_ = s4 == 0;
    if (cnd_) { goto L_088C292C; }
    goto L_088C28A8;
L_088C28A8:;
    a0 = LD32(s4);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s4+4); goto L_088C2910; }
    goto L_088C28B4;
L_088C28B4:;
    v0 = LD32(a0-4);
    v1 = 400;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s2 = a0 + v0;
    goto L_088C28C8;
L_088C28C8:;
    cnd_ = a0 == s2;
    s1 = s2 - 400;
    if (cnd_) { goto L_088C2904; }
    goto L_088C28D0;
L_088C28D0:;
    a0 = LD32(s1+388);
    s2 = s1 + 0;
    cnd_ = a0 == 0;
    s3 = s1 + 388;
    if (cnd_) { goto L_088C28F0; }
    goto L_088C28E0;
L_088C28E0:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C28E8;
L_088C28E8:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088C28E0; }
    goto L_088C28F0;
L_088C28F0:;
    ST32(s3, 0);
    a0 = s1 + 288;
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C28FC;
L_088C28FC:;
    a0 = LD32(s4);
    goto L_088C28C8;
L_088C2904:;
    a0 = a0 - 16;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C290C;
L_088C290C:;
    a0 = LD32(s4+4);
    goto L_088C2910;
L_088C2910:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088C297C; }
    goto L_088C2918;
L_088C2918:;
    s0 = LD32(s4+12);
    goto L_088C291C;
L_088C291C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C2964; }
    goto L_088C2924;
L_088C2924:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C292C;
L_088C292C:;
    v1 = s5 - 16732;
    v0 = (u32)-1;
    ST32(v1+12, v0);
    ST32(s5-16732, 0);
    func_088C29AC(t1, t2, t3);
    goto L_088C2940;
L_088C2940:;
    sp = sp + 32;
    return;
L_088C2964:;
    a0 = s0 + 0;
    func_08AB6168(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088C296C;
L_088C296C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2974;
L_088C2974:;
    goto L_088C2924;
L_088C297C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C2988;
L_088C2988:;
    s0 = LD32(s4+12);
    goto L_088C291C;
}

/* 088C2990 */
void func_088C2990(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C2990:;
    sp = sp - 16;
    func_088C287C(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088C29A0;
L_088C29A0:;
    sp = sp + 16;
    return;
}

/* 088C29AC */
void func_088C29AC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C29AC:;
    sp = sp - 16;
    s2 = D_08B2BEB8 - (-16712);
    s0 = LD32(s2-16712);
    cnd_ = s0 == 0;
    if (cnd_) { s2 = D_08B2BEC4 - (-16700); goto L_088C29F8; }
    goto L_088C29D0;
L_088C29D0:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C2A80; }
    goto L_088C29DC;
L_088C29DC:;
    s1 = LD32(s0+12);
    goto L_088C29E0;
L_088C29E0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088C2A68; }
    goto L_088C29E8;
L_088C29E8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C29F0;
L_088C29F0:;
    ST32(s2-16712, 0);
    s2 = D_08B2BEC4 - (-16700);
    goto L_088C29F8;
L_088C29F8:;
    s0 = LD32(s2-16700);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088C2A2C; }
    goto L_088C2A04;
L_088C2A04:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C2A58; }
    goto L_088C2A10;
L_088C2A10:;
    s1 = LD32(s0+12);
    goto L_088C2A14;
L_088C2A14:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088C2A40; }
    goto L_088C2A1C;
L_088C2A1C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2A24;
L_088C2A24:;
    ST32(s2-16700, 0);
    goto L_088C2A2C;
L_088C2A2C:;
    sp = sp + 16;
    return;
L_088C2A40:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088C2A48;
L_088C2A48:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2A50;
L_088C2A50:;
    goto L_088C2A1C;
L_088C2A58:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2A60;
L_088C2A60:;
    s1 = LD32(s0+12);
    goto L_088C2A14;
L_088C2A68:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088C2A70;
L_088C2A70:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2A78;
L_088C2A78:;
    goto L_088C29E8;
L_088C2A80:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C2A88;
L_088C2A88:;
    s1 = LD32(s0+12);
    goto L_088C29E0;
}

/* 088C2A90 */
void func_088C2A90(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_088C2A90:;
    sp = sp - 64;
    v0 = D_08AEC7A0 - (-14432);
    v1 = D_08AEC79C - (-14436);
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    a2 = a0 + 328;
    s0 = a0 + 0;
    s1 = (u32)-1;
    f20 = BITSF(LD32(v0-14432));
    ST32(sp+4, 0);
    v0 = D_08AEC798 - (-14440);
    ST32(sp, FBITS(f20));
    ST32(sp+8, 0);
    t1 = LD32(sp+12);
    a3 = LD32(sp+4);
    t0 = LD32(sp+8);
    f1 = BITSF(LD32(v0-14440));
    f0 = BITSF(LD32(v1-14436));
    v1 = LD32(sp);
    v0 = 999;
    {u32 a_=a0+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(a0+364, v0);
    ST32(a0+376, 0);
    ST32(a0+356, a1);
    a0 = a0 + 288;
    ST32(a2+16, FBITS(f1));
    ST32(a2+8, FBITS(f1));
    ST32(a2+20, FBITS(f0));
    ST32(a2+4, FBITS(f0));
    ST32(a2+12, FBITS(f0));
    ST32(s0, v1);
    ST32(s0+4, a3);
    ST32(s0+8, t0);
    ST32(s0+328, FBITS(f1));
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(s0+12, t1);
    ST32(sp+4, FBITS(f20));
    ST32(sp+8, 0);
    ST32(sp, 0);
    a3 = LD32(sp+4);
    a2 = LD32(sp+8);
    ST32(sp+4, 0);
    ST32(sp+8, FBITS(f20));
    t0 = LD32(sp);
    v1 = LD32(sp+4);
    a1 = LD32(sp+8);
    ST32(s0+280, 0);
    ST32(s0+16, t0);
    ST32(s0+20, a3);
    ST32(s0+32, t0);
    ST32(s0+44, t1);
    ST32(s0+28, t1);
    ST32(s0+24, a2);
    ST32(s0+36, v1);
    ST32(s0+40, a1);
    ST32(s0+284, 0);
    ST32(s0+276, 0);
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C2BA4;
L_088C2BA4:;
    v1 = LD32(s0+248);
    v0 = 0xffcc0000u;
    v0 = v0 | 0x1c05;
    v1 = v1 | 0x1;
    ST32(sp, 0);
    v1 = v1 & v0;
    v0 = 0x400000u;
    v1 = v1 | v0;
    v1 = (v1 & ~(0x1u << 23)) | ((0 & 0x1) << 23);
    v0 = 0x1000000u;
    ST32(sp+4, FBITS(f20));
    v1 = v1 | v0;
    v1 = (v1 & ~(0x1u << 25)) | ((0 & 0x1) << 25);
    ST32(sp+8, 0);
    v1 = (v1 & ~(0x7u << 10)) | ((0 & 0x7) << 10);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp);
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    a2 = LD32(sp+12);
    ST32(s0+96, v0);
    v0 = D_08AEC7A4 - (-14428);
    {u32 a_=s0+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = BITSF(LD32(v0-14428));
    v0 = D_08AEC7A8 - (-14424);
    ST32(s0+100, a0);
    {u32 a_=s0+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = s0 + 0;
    ST32(s0+256, FBITS(f0));
    f0 = BITSF(LD32(v0-14424));
    v0 = D_08AEC7AC - (-14420);
    ST32(s0+104, a1);
    ST32(s0+264, FBITS(f0));
    f0 = BITSF(LD32(v0-14420));
    ST32(s0+108, a2);
    ST32(s0+260, FBITS(f20));
    ST32(s0+268, FBITS(f0));
    ST32(s0+248, v1);
    ST32(s0+360, s1);
    ST32(s0+252, FBITS(f20));
    ST32(s0+352, 0);
    ST32(s0+272, 0);
    func_088CA214(a0);
    goto L_088C2C50;
L_088C2C50:;
    ST32(s0+396, s1);
    ST32(s0+392, s1);
    ST32(s0+384, 0);
    sp = sp + 64;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;
}

/* 088C2C74 */
rv_t func_088C2C74(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C2C74:;
    ST32(a0+376, FBITS(f12));
    sp = sp - 16;
    { rv_t r_ = func_088C2C94(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C2C88;
L_088C2C88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088C2C94 */
rv_t func_088C2C94(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088C2C94:;
    sp = sp - 128;
    a1 = LD32(a0+276);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088C2E08; }
    goto L_088C2CB0;
L_088C2CB0:;
    v0 = LD32(a0+248);
    f20 = BITSF(0);
    v0 = v0 & 0x30;
    cnd_ = v0 == 0;
    if (cnd_) { f20 = BITSF(LD32(a0+376)); goto L_088C2CC4; }
    goto L_088C2CC4;
L_088C2CC4:;
    v1 = LD32(s0+272);
    cnd_ = v1 == 0;
    v0 = D_08AEC7B0 - (-14416);
    if (cnd_) { goto L_088C2CDC; }
    goto L_088C2CD0;
L_088C2CD0:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = D_08AEC7B0 - (-14416);
    if (cnd_) { goto L_088C2D98; }
    goto L_088C2CDC;
L_088C2CDC:;
    f0 = BITSF(LD32(v0-14416));
    f3 = BITSF(LD32(a1+4));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = f0; goto L_088C2CF4; }
    goto L_088C2CF4;
L_088C2CF4:;
    f1 = BITSF(LD32(a1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088C2D08; }
    goto L_088C2D08;
L_088C2D08:;
    f4 = BITSF(LD32(a1+12));
    fcc = FCMP(f0, f4, 14);
    cnd_ = !fcc;
    if (cnd_) { f4 = f0; goto L_088C2D1C; }
    goto L_088C2D1C;
L_088C2D1C:;
    f3 = f3 * f3;
    f1 = f1 * f1;
    v0 = D_08AEC7B8 - (-14408);
    f0 = BITSF(LD32(v0-14408));
    f4 = f4 * f4;
    f2 = f3 + f1;
    f0 = f20 * f0;
    v0 = LD32(sp+92);
    f1 = f1 + f4;
    f3 = f3 + f4;
    f2 = f0 / f2;
    ST32(s0+140, v0);
    f1 = f0 / f1;
    ST32(sp+88, FBITS(f2));
    v0 = LD32(sp+88);
    ST32(s0+136, v0);
    f0 = f0 / f3;
    ST32(sp+80, FBITS(f1));
    v0 = LD32(sp+80);
    ST32(s0+128, v0);
    ST32(sp+84, FBITS(f0));
    v0 = LD32(sp+84);
    ST32(s0+132, v0);
    goto L_088C2D78;
L_088C2D78:;
    a0 = s0 + 0;
    goto L_088C2D7C;
L_088C2D7C:;
    { rv_t r_ = func_088C2E14(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C2D84;
L_088C2D84:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_088C2D98:;
    a1 = s0 + 0;
    a0 = sp + 0;
    func_088B4DF0(a0, a1);
    goto L_088C2DA4;
L_088C2DA4:;
    a0 = sp + 0;
    f0 = func_088B52A8(a0);
    goto L_088C2DAC;
L_088C2DAC:;
    v0 = D_08AEC7B0 - (-14416);
    f1 = BITSF(LD32(v0-14416));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088C2DC4; }
    goto L_088C2DC4;
L_088C2DC4:;
    v0 = D_08AEC7B4 - (-14412);
    f1 = f0 * f0;
    f0 = BITSF(LD32(v0-14412));
    v0 = LD32(sp+92);
    f0 = f20 * f0;
    ST32(s0+140, v0);
    f0 = f0 / f1;
    ST32(sp+88, FBITS(f0));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f0));
    a0 = LD32(sp+88);
    v1 = LD32(sp+84);
    v0 = LD32(sp+80);
    ST32(s0+136, a0);
    ST32(s0+128, v0);
    ST32(s0+132, v1);
    goto L_088C2D78;
L_088C2E08:;
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    {u32 a_=a0+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088C2D7C;
}

/* 088C2E14 */
rv_t func_088C2E14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr56 = v[56], vr57 = v[57], vr58 = v[58], vr59 = v[59], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr63 = v[63], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr72 = v[72], vr73 = v[73], vr74 = v[74], vr75 = v[75], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr79 = v[79], vr92 = v[92], vr93 = v[93], vr94 = v[94], vr95 = v[95], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[1456] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1456);
L_088C2E14:;
    v1 = LD32(a0+248);
    sp = sp - 1456;
    v0 = (v1 >> 6) & 0x1;
    cnd_ = v0 == 0;
    t3 = a0 + 0;
    if (cnd_) { goto L_088C2E34; }
    goto L_088C2E28;
L_088C2E28:;
    v0 = (v1 >> 7) & 0x1;
    cnd_ = v0 == 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    if (cnd_) { goto L_088C2E50; }
    goto L_088C2E34;
L_088C2E34:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 != 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    if (cnd_) { goto L_088C2E50; }
    goto L_088C2E40;
L_088C2E40:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(t3+128)); goto L_088C2E64; }
    goto L_088C2E4C;
L_088C2E4C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    goto L_088C2E50;
L_088C2E50:;
    {u32 a_=t3+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=t3+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=t3+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C2E5C;
L_088C2E5C:;
    sp = sp + 1456;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[92]=vr92;v[93]=vr93;v[94]=vr94;v[95]=vr95;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[121]=vr121;v[122]=vr122;return (rv_t){ v0, v1, f0 }; }
L_088C2E64:;
    ST32(sp+52, 0);
    v0 = t3 + 128;
    t2 = sp + 64;
    ST32(sp+48, FBITS(f0));
    t1 = t3 + 0;
    t4 = t3 + 48;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+56, 0);
    a3 = LD32(sp+52);
    f1 = BITSF(LD32(v0+8));
    ST32(sp+52, FBITS(f0));
    a2 = LD32(sp+56);
    v0 = LD32(sp+52);
    t0 = LD32(sp+48);
    ST32(sp+52, 0);
    ST32(sp+48, 0);
    ST32(sp+56, FBITS(f1));
    a0 = LD32(sp+60);
    a1 = LD32(sp+48);
    ST32(sp+20, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    ST32(sp, t0);
    ST32(sp+4, a3);
    ST32(sp+8, a2);
    ST32(sp+16, a1);
    ST32(sp+24, a2);
    ST32(sp+32, a1);
    ST32(sp+36, v1);
    ST32(sp+40, v0);
    ST32(sp+12, a0);
    ST32(sp+28, a0);
    ST32(sp+44, a0);
    goto L_088C2EE8;
L_088C2EE8:;
    v0 = LD32(t1);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    a1 = LD32(t1+12);
    ST32(t2, v0);
    t1 = t1 + 16;
    t2 = t2 + 16;
    ST32(t2-12, v1);
    ST32(t2-8, a0);
    cnd_ = t1 != t4;
    ST32(t2-4, a1);
    if (cnd_) { goto L_088C2EE8; }
    goto L_088C2F14;
L_088C2F14:;
    f0 = BITSF(LD32(sp+80));
    f1 = BITSF(LD32(sp+68));
    {u32 a_=sp+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    ST32(sp+68, FBITS(f0));
    {u32 a_=sp+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+96));
    ST32(sp+80, FBITS(f1));
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr120=d0;vr121=d1;vr122=d2;v[123]=d3;}
    f1 = BITSF(LD32(sp+72));
    ST32(sp+72, FBITS(f0));
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {u32 a_=sp+(336);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {float t0=v[100];float t1=v[101];float t2=v[102];float o0=0;o0+=vr112*t0;o0+=v[116]*t1;o0+=vr120*t2;float o1=0;o1+=vr113*t0;o1+=v[117]*t1;o1+=vr121*t2;float o2=0;o2+=vr114*t0;o2+=v[118]*t1;o2+=vr122*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = BITSF(LD32(sp+100));
    v0 = LD32(sp+48);
    f2 = BITSF(LD32(sp+88));
    ST32(sp+88, FBITS(f0));
    {u32 a_=sp+(352);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));vr67=BITSF(LD32(a_+12));}
    ST32(sp+160, v0);
    {float s0=vr44;float s1=vr45;float s2=vr46;float s3=vr47;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr92=d0;vr93=d1;vr94=d2;vr95=d3;}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    v0 = LD32(sp+52);
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {u32 a_=sp+(80);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(1408);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    ST32(sp+96, FBITS(f1));
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(1424);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    ST32(sp+100, FBITS(f2));
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(vr92));ST32(a_+4,FBITS(vr93));ST32(a_+8,FBITS(vr94));ST32(a_+12,FBITS(vr95));}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    ST32(sp+164, v0);
    {u32 a_=sp+(640);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = LD32(sp+56);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    {u32 a_=sp+(384);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    ST32(sp+168, v0);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr68=d0;vr69=d1;vr70=d2;vr71=d3;}
    {u32 a_=sp+(672);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    v0 = LD32(sp+60);
    {u32 a_=sp+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(v[123]));}
    ST32(sp+172, v0);
    {float s0=vr92;float s1=vr93;float s2=vr94;float s3=vr95;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    v0 = LD32(sp+208);
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+176, v0);
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    {u32 a_=sp+(656);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    v0 = LD32(sp+212);
    {u32 a_=sp+(416);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(944);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+180, v0);
    {u32 a_=sp+(960);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    v0 = LD32(sp+216);
    {u32 a_=sp+(976);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    ST32(sp+184, v0);
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr72=d0;vr73=d1;vr74=d2;vr75=d3;}
    {u32 a_=t3+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=t3+(16);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    v0 = LD32(sp+220);
    {u32 a_=sp+(992);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    ST32(sp+188, v0);
    {u32 a_=sp+(1008);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1056);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1040);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1024);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=t3+(32);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
    v0 = LD32(sp+224);
    v1 = LD32(sp+228);
    a0 = LD32(sp+232);
    a1 = LD32(sp+236);
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(1088);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float t0=v[8];float t1=v[9];float t2=v[10];float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(1168);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1184);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    ST32(sp+192, v0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    v0 = LD32(sp+224);
    ST32(sp+196, v1);
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    ST32(sp+112, v0);
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    v0 = LD32(sp+228);
    ST32(sp+200, a0);
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    ST32(sp+116, v0);
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    v0 = LD32(sp+232);
    ST32(sp+204, a1);
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    ST32(sp+120, v0);
    {u32 a_=sp+(192);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    v0 = LD32(sp+236);
    v1 = LD32(sp+212);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+124, v0);
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    v0 = LD32(sp+208);
    ST32(sp+132, v1);
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    a3 = t4 + 0;
    ST32(sp+128, v0);
    a2 = sp + 112;
    t0 = sp + 160;
    v0 = LD32(sp+216);
    v1 = LD32(sp+220);
    ST32(sp+136, v0);
    v0 = LD32(sp+48);
    ST32(sp+140, v1);
    ST32(sp+144, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    ST32(sp+148, v1);
    v1 = LD32(sp+60);
    ST32(sp+152, v0);
    ST32(sp+156, v1);
    goto L_088C3288;
L_088C3288:;
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
    if (cnd_) { goto L_088C3288; }
    goto L_088C32B4;
L_088C32B4:;
    goto L_088C2E5C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[92]=vr92;v[93]=vr93;v[94]=vr94;v[95]=vr95;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 088C32BC */
u32 func_088C32BC(u32 a0)
{
    u32 v0 = 0;
L_088C32BC:;
    v0 = a0 + 48;
    return v0;
}

/* 088C32C4 */
u32 func_088C32C4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088C32C4:;
    sp = sp - 48;
    fp = D_08B2BEA4 - (-16732);
    a1 = LD32(fp-16732);
    cnd_ = a1 == 0;
    v1 = LD32(fp-16732);
    if (cnd_) { goto L_088C3354; }
    goto L_088C3300;
L_088C3300:;
    t1 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_088C3308;
L_088C3308:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_088C333C; }
    goto L_088C3324;
L_088C3324:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_088C333C;
L_088C333C:;
    cnd_ = a2 != t1;
    s1 = a2 + 0;
    if (cnd_) { goto L_088C339C; }
    goto L_088C3344;
L_088C3344:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_088C3308; }
    goto L_088C3350;
L_088C3350:;
    v1 = LD32(fp-16732);
    goto L_088C3354;
L_088C3354:;
    s7 = fp - 16732;
    cnd_ = v1 == 0;
    s2 = LD32(s7+16);
    if (cnd_) { goto L_088C3644; }
    goto L_088C3360;
L_088C3360:;
    s3 = LD32(s7+4);
    v0 = LD32(v1+8);
    goto L_088C3368;
L_088C3368:;
    cnd_ = v0 == s2;
    if (cnd_) { v1 = LD32(s7); goto L_088C363C; }
    goto L_088C3370;
L_088C3370:;
    v1 = LD32(v1+12);
    goto L_088C3374;
L_088C3374:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088C3368; }
    goto L_088C337C;
L_088C337C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C3384;
L_088C3384:;
    s4 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_088C34F0; }
    goto L_088C3398;
L_088C3398:;
    s1 = (u32)-1;
    goto L_088C339C;
L_088C339C:;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    v1 = (u32)-1;
    if (cnd_) { goto L_088C349C; }
    goto L_088C33A8;
L_088C33A8:;
    a0 = fp - 16732;
    v0 = LD32(a0+12);
    cnd_ = s1 == v0;
    v0 = D_08B2BEA4 - (-16732);
    if (cnd_) { goto L_088C34E8; }
    goto L_088C33B8;
L_088C33B8:;
    a1 = LD32(v0-16732);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088C33F8; }
    goto L_088C33C4;
L_088C33C4:;
    a2 = LD32(a1+8);
    goto L_088C33C8;
L_088C33C8:;
    v0 = (s32)s1 < (s32)a2;
    cnd_ = v0 != 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088C33E8; }
    goto L_088C33D4;
L_088C33D4:;
    v0 = LD32(a0+4);
    v0 = a2 + v0;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C33F8; }
    goto L_088C33E8;
L_088C33E8:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a2 = LD32(a1+8); goto L_088C33C8; }
    goto L_088C33F4;
L_088C33F4:;
    v1 = 0 + 0;
    goto L_088C33F8;
L_088C33F8:;
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088C3454; }
    goto L_088C3400;
L_088C3400:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    a3 = LD32(a0+12);
    cnd_ = (s32)a3 <= 0;
    t0 = s1 - v0;
    if (cnd_) { goto L_088C3438; }
    goto L_088C3418;
L_088C3418:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_088C3420;
L_088C3420:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)a3;
    cnd_ = v0 == t0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088C34D0; }
    goto L_088C3430;
L_088C3430:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088C3420; }
    goto L_088C3438;
L_088C3438:;
    v1 = 0 + 0;
    goto L_088C343C;
L_088C343C:;
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088C3454; }
    goto L_088C3444;
L_088C3444:;
    v0 = fp - 16732;
    s0 = v1 + 0;
    ST32(v0+8, v1);
    ST32(v0+12, s1);
    goto L_088C3454;
L_088C3454:;
    cnd_ = s0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_088C349C; }
    goto L_088C345C;
L_088C345C:;
    a2 = D_08B2BED0 - (-16688);
    v1 = LD32(a2-16688);
    cnd_ = v1 == 0;
    a3 = a2 - 16688;
    if (cnd_) { goto L_088C3474; }
    goto L_088C346C;
L_088C346C:;
    v0 = s0 + 240;
    ST32(v1+244, v0);
    goto L_088C3474;
L_088C3474:;
    ST32(s0+240, v1);
    a0 = s0 + 0;
    a1 = s1 + 0;
    ST32(s0+244, a3);
    ST32(a2-16688, s0);
    func_088C2A90(a0, a1, t2, t3);
    goto L_088C348C;
L_088C348C:;
    v0 = D_08AEC7BC - (-14404);
    f0 = BITSF(LD32(v0-14404));
    v1 = s1 + 0;
    ST32(s0+376, FBITS(f0));
    goto L_088C349C;
L_088C349C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_088C34D0:;
    v0 = 400;
    { s64 p_ = (s64)(s32)t0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD32(v1);
    v0 = lo;
    v1 = v1 + v0;
    goto L_088C343C;
L_088C34E8:;
    s0 = LD32(a0+8);
    goto L_088C3454;
L_088C34F0:;
    a0 = 400;
    { s64 p_ = (s64)(s32)s3 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s1 = s3 - 1;
    a0 = lo;
    a0 = a0 + 16;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C3508;
L_088C3508:;
    s5 = v0 + 16;
    ST32(s5-4, s3);
    cnd_ = s3 == 0;
    s0 = s5 + 0;
    if (cnd_) { goto L_088C3530; }
    goto L_088C3518;
L_088C3518:;
    s6 = (u32)-1;
    goto L_088C351C;
L_088C351C:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_08AB608C(a0, 0, 0, 0);
    goto L_088C3528;
L_088C3528:;
    cnd_ = s1 != s6;
    s0 = s0 + 400;
    if (cnd_) { goto L_088C351C; }
    goto L_088C3530;
L_088C3530:;
    ST32(s4, s5);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C353C;
L_088C353C:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = s3 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C3554;
L_088C3554:;
    ST32(s0+4, v0);
    a0 = 0 + 0;
    ST32(s0+12, 0);
    cnd_ = (s32)s3 <= 0;
    ST32(s0+8, s3);
    if (cnd_) { goto L_088C3580; }
    goto L_088C3568;
L_088C3568:;
    v1 = v0 + 0;
    goto L_088C356C;
L_088C356C:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s3;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088C356C; }
    goto L_088C3580;
L_088C3580:;
    v1 = LD32(s4);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s0, v0);
    cnd_ = v1 != 0;
    ST32(s4+4, s0);
    if (cnd_) { goto L_088C35E4; }
    goto L_088C3598;
L_088C3598:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_088C35D4; }
    goto L_088C35A0;
L_088C35A0:;
    s0 = LD32(s4+12);
    goto L_088C35A4;
L_088C35A4:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C35BC; }
    goto L_088C35AC;
L_088C35AC:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C35B4;
L_088C35B4:;
    s1 = (u32)-1;
    goto L_088C339C;
L_088C35BC:;
    a0 = s0 + 0;
    func_08AB6168(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088C35C4;
L_088C35C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C35CC;
L_088C35CC:;
    goto L_088C35AC;
L_088C35D4:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C35DC;
L_088C35DC:;
    s0 = LD32(s4+12);
    goto L_088C35A4;
L_088C35E4:;
    cnd_ = s4 == 0;
    ST32(s4+8, s2);
    if (cnd_) { goto L_088C3398; }
    goto L_088C35EC;
L_088C35EC:;
    v0 = LD32(s7);
    ST32(s4+12, v0);
    ST32(s7, s4);
    t0 = LD32(fp-16732);
    a2 = LD32(t0+4);
    a3 = LD32(a2+12);
    v0 = LD32(a2+8);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_088C3634; }
    goto L_088C3614;
L_088C3614:;
    v1 = a3 + 1;
    a0 = LD32(a2+4);
    ST32(a2+12, v1);
    v0 = a3 << 2;
    v0 = v0 + a0;
    a1 = LD32(v0);
    v1 = LD32(t0+8);
    a1 = a1 + v1;
    goto L_088C3634;
L_088C3634:;
    s1 = a1 + 0;
    goto L_088C339C;
L_088C363C:;
    s2 = s2 + s3;
    goto L_088C3374;
L_088C3644:;
    s3 = LD32(s7+4);
    goto L_088C337C;
}

/* 088C364C */
u32 func_088C364C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C364C:;
    sp = sp - 16;
    s0 = D_08B2BEA4 - (-16732);
    s0 = s0 - 16732;
    a0 = s0 + 0;
    v0 = func_08AB6250(a0, t1, t2, t3);
    goto L_088C366C;
L_088C366C:;
    s1 = v0 + 0;
    a1 = v0 + 0;
    v0 = (u32)-1;
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    a3 = (u32)-1;
    if (cnd_) { goto L_088C36E4; }
    goto L_088C3684;
L_088C3684:;
    v0 = func_08AB55FC(a0, a1);
    goto L_088C368C;
L_088C368C:;
    a2 = D_08B2BED8 - (-16680);
    s0 = v0 + 0;
    t0 = a2 - 16680;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_088C36E4; }
    goto L_088C36A8;
L_088C36A8:;
    v0 = LD32(a2-16680);
    cnd_ = v0 == 0;
    v1 = s0 + 240;
    if (cnd_) { goto L_088C36B8; }
    goto L_088C36B4;
L_088C36B4:;
    ST32(v0+244, v1);
    goto L_088C36B8;
L_088C36B8:;
    ST32(s0+240, v0);
    ST32(s0+244, t0);
    ST32(a2-16680, s0);
    func_088C2A90(a0, a1, 0, 0);
    goto L_088C36C8;
L_088C36C8:;
    v1 = 1;
    v0 = LD32(s0+248);
    a3 = s1 + 0;
    v0 = v0 | 0x10;
    ST32(s0+248, v0);
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    goto L_088C36E4;
L_088C36E4:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
}

/* 088C36FC */
u32 func_088C36FC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C36FC:;
    sp = sp - 16;
    s0 = D_08B2BEA4 - (-16732);
    s0 = s0 - 16732;
    a0 = s0 + 0;
    v0 = func_08AB6250(a0, t1, t2, t3);
    goto L_088C371C;
L_088C371C:;
    s1 = v0 + 0;
    a1 = v0 + 0;
    v0 = (u32)-1;
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    v1 = (u32)-1;
    if (cnd_) { goto L_088C3788; }
    goto L_088C3734;
L_088C3734:;
    v0 = func_08AB55FC(a0, a1);
    goto L_088C373C;
L_088C373C:;
    a2 = D_08B2BED4 - (-16684);
    s0 = v0 + 0;
    a3 = a2 - 16684;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_088C3788; }
    goto L_088C3758;
L_088C3758:;
    v0 = LD32(a2-16684);
    cnd_ = v0 == 0;
    v1 = s0 + 240;
    if (cnd_) { goto L_088C3768; }
    goto L_088C3764;
L_088C3764:;
    ST32(v0+244, v1);
    goto L_088C3768;
L_088C3768:;
    ST32(s0+240, v0);
    ST32(s0+244, a3);
    ST32(a2-16684, s0);
    func_088C2A90(a0, a1, 0, 0);
    goto L_088C3778;
L_088C3778:;
    v1 = s1 + 0;
    v0 = LD32(s0+248);
    v0 = v0 | 0x20;
    ST32(s0+248, v0);
    goto L_088C3788;
L_088C3788:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088C37A0 */
void func_088C37A0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C37A0:;
    sp = sp - 32;
    s6 = D_08B2BEA4 - (-16732);
    s4 = a0 + 0;
    a1 = s4 + 0;
    a0 = s6 - 16732;
    v0 = func_08AB55FC(a0, a1);
    goto L_088C37D8;
L_088C37D8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088C393C; }
    goto L_088C37E0;
L_088C37E0:;
    v1 = LD32(v0+240);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s2+244); goto L_088C37F8; }
    goto L_088C37EC;
L_088C37EC:;
    v0 = LD32(v0+244);
    ST32(v1+244, v0);
    v0 = LD32(s2+244);
    goto L_088C37F8;
L_088C37F8:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0, v1); goto L_088C3800; }
    goto L_088C3800;
L_088C3800:;
    a0 = LD32(s2+384);
    cnd_ = a0 == 0;
    s5 = D_08B2BE64 - (-16796);
    if (cnd_) { goto L_088C3824; }
    goto L_088C380C;
L_088C380C:;
    v0 = LD32(s2+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C39F4; }
    goto L_088C381C;
L_088C381C:;
    func_088C231C(a0);
    goto L_088C3824;
L_088C3824:;
    v0 = s5 - 16796;
    a1 = LD32(v0+12);
    cnd_ = a1 == 0;
    s3 = v0 + 12;
    if (cnd_) { goto L_088C3864; }
    goto L_088C3834;
L_088C3834:;
    s1 = a1 + 0;
    goto L_088C3838;
L_088C3838:;
    s0 = s1 + 8;
    a0 = s0 + 0;
    a1 = s2 + 0;
    v0 = func_088BC000(a0, a1);
    goto L_088C3848;
L_088C3848:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_088C39D4; }
    goto L_088C3854;
L_088C3854:;
    s3 = s1 + 4;
    v0 = LD32(s3);
    goto L_088C385C;
L_088C385C:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088C3838; }
    goto L_088C3864;
L_088C3864:;
    s1 = LD32(s2+276);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s2+280); goto L_088C38C8; }
    goto L_088C3870;
L_088C3870:;
    s0 = LD32(s1);
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C39C4; }
    goto L_088C3880;
L_088C3880:;
    a0 = LD32(s0+8);
    goto L_088C3884;
L_088C3884:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C39B4; }
    goto L_088C388C;
L_088C388C:;
    a0 = LD32(s0+16);
    goto L_088C3890;
L_088C3890:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C39A4; }
    goto L_088C3898;
L_088C3898:;
    a0 = LD32(s0+24);
    goto L_088C389C;
L_088C389C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C3994; }
    goto L_088C38A4;
L_088C38A4:;
    a0 = LD32(s0+28);
    goto L_088C38A8;
L_088C38A8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C3984; }
    goto L_088C38B0;
L_088C38B0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C38B8;
L_088C38B8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C38C0;
L_088C38C0:;
    ST32(s2+276, 0);
    a0 = LD32(s2+280);
    goto L_088C38C8;
L_088C38C8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C3974; }
    goto L_088C38D0;
L_088C38D0:;
    a0 = LD32(s2+284);
    goto L_088C38D4;
L_088C38D4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C3964; }
    goto L_088C38DC;
L_088C38DC:;
    v0 = LD32(s2+248);
    goto L_088C38E0;
L_088C38E0:;
    ST32(s2+280, 0);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    ST32(s2+284, 0);
    if (cnd_) { goto L_088C38FC; }
    goto L_088C38F0;
L_088C38F0:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    goto L_088C38FC;
L_088C38FC:;
    v1 = (u32)-1;
    cnd_ = s4 == v1;
    a0 = s6 - 16732;
    if (cnd_) { goto L_088C393C; }
    goto L_088C3908;
L_088C3908:;
    v0 = LD32(a0+12);
    cnd_ = s4 == v0;
    if (cnd_) { ST32(a0+12, v1); goto L_088C3914; }
    goto L_088C3914;
L_088C3914:;
    a1 = s4 + 0;
    v0 = func_08AB64D4(a0, a1);
    goto L_088C391C;
L_088C391C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C3940; }
    goto L_088C3924;
L_088C3924:;
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s4 - a1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C393C;
L_088C393C:;
    goto L_088C3940;
L_088C3940:;
    sp = sp + 32;
    return;
L_088C3964:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C396C;
L_088C396C:;
    v0 = LD32(s2+248);
    goto L_088C38E0;
L_088C3974:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C397C;
L_088C397C:;
    a0 = LD32(s2+284);
    goto L_088C38D4;
L_088C3984:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C398C;
L_088C398C:;
    goto L_088C38B0;
L_088C3994:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C399C;
L_088C399C:;
    a0 = LD32(s0+28);
    goto L_088C38A8;
L_088C39A4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C39AC;
L_088C39AC:;
    a0 = LD32(s0+24);
    goto L_088C389C;
L_088C39B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C39BC;
L_088C39BC:;
    a0 = LD32(s0+16);
    goto L_088C3890;
L_088C39C4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C39CC;
L_088C39CC:;
    a0 = LD32(s0+8);
    goto L_088C3884;
L_088C39D4:;
    v0 = LD32(s1+4);
    ST32(s3, v0);
    func_088BBFA8(a0, a1);
    goto L_088C39E0;
L_088C39E0:;
    a1 = s1 + 0;
    a0 = s5 - 16796;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C39EC;
L_088C39EC:;
    v0 = LD32(s3);
    goto L_088C385C;
L_088C39F4:;
    a0 = s2 + 0;
    func_088CA168(a0);
    goto L_088C39FC;
L_088C39FC:;
    s5 = D_08B2BE64 - (-16796);
    goto L_088C3824;
}

/* 088C3A04 */
void func_088C3A04(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C3A04:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+388);
    cnd_ = a0 == 0;
    s2 = s1 + 388;
    if (cnd_) { goto L_088C3A38; }
    goto L_088C3A28;
L_088C3A28:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C3A30;
L_088C3A30:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088C3A28; }
    goto L_088C3A38;
L_088C3A38:;
    ST32(s2, 0);
    a0 = s1 + 288;
    { rv_t r_ = func_088B8AA8(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C3A44;
L_088C3A44:;
    a0 = s1 + 0;
    func_088CA214(a0);
    goto L_088C3A4C;
L_088C3A4C:;
    sp = sp + 16;
    return;
}

/* 088C3A64 */
void func_088C3A64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_088C3A64:;
    v1 = LD32(a1+276);
    cnd_ = v1 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_088C3A8C; }
    goto L_088C3A70;
L_088C3A70:;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    return;
L_088C3A8C:;
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 088C3A9C */
u32 func_088C3A9C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr52 = v[52];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_088C3A9C:;
    sp = sp - 176;
    t8 = a1 + 0;
    {u32 a_=a2+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    t7 = LD32(a0+16);
    s0 = LD32(a0+20);
    s1 = LD32(a0+24);
    s2 = LD32(a0+28);
    {float s0=vr4;float s1=vr5;float s2=vr6;float d0=-s0;float d1=-s1;float d2=-s2;vr4=d0;vr5=d1;vr6=d2;}
    a2 = a0 + 208;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp, t7);
    ST32(sp+4, s0);
    ST32(sp+8, s1);
    ST32(sp+12, s2);
    a3 = LD32(a0);
    t0 = LD32(a0+4);
    t1 = LD32(a0+8);
    t2 = LD32(a0+12);
    t3 = LD32(a0+32);
    t4 = LD32(a0+36);
    t5 = LD32(a0+40);
    t6 = LD32(a0+44);
    ST32(sp+16, a3);
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+20, t0);
    {s3=FBITS(vr0);}
    f5 = BITSF(s3);
    ST32(sp+24, t1);
    ST32(sp+28, t2);
    ST32(sp, t3);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+4, t4);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {v0=FBITS(vr0);}
    ST32(sp+8, t5);
    v1 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    ST32(sp+12, t6);
    f3 = BITSF(v0);
    v1 = LD32(a2+4);
    v0 = LD32(a0+208);
    ST32(sp+16, v0);
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    ST32(sp+20, v1);
    {t9=FBITS(vr4);}
    f4 = BITSF(t9);
    v0 = LD32(a2+8);
    a1 = LD32(a2+12);
    v1 = LD32(a0+276);
    ST32(sp+32, a3);
    ST32(sp+36, t0);
    ST32(sp+40, t1);
    ST32(sp+44, t2);
    ST32(sp+24, v0);
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = D_08AEC7C0 - (-14400);
    ST32(sp+28, a1);
    f0 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0-14400));
    ST32(sp+48, t7);
    v0 = FBITS(f0);
    {vr8=BITSF(v0);}
    {float s0=vr8;float s1=vr8;float s2=vr8;float s3=vr8;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;vr28=s0*t0;vr29=s1*t0;vr30=s2*t0;}
    ST32(sp+52, s0);
    fcc = FCMP(f2, f1, 12);
    ST32(sp+56, s1);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    ST32(sp+60, s2);
    f0 = BITSF(LD32(v1+8));
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+64, t3);
    v0 = FBITS(f0);
    {vr12=BITSF(v0);}
    {float s0=vr12;float s1=vr12;float s2=vr12;float s3=vr12;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;vr24=s0*t0;vr25=s1*t0;vr26=s2*t0;}
    ST32(sp+68, t4);
    ST32(sp+72, t5);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    ST32(sp+76, t6);
    f0 = BITSF(LD32(v1+12));
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {vr16=BITSF(v1);}
    {float s0=vr16;float s1=vr16;float s2=vr16;float s3=vr16;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr16;vr20=s0*t0;vr21=s1*t0;vr22=s2*t0;}
    cnd_ = fcc;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    if (cnd_) { goto L_088C4040; }
    goto L_088C3C24;
L_088C3C24:;
    s3 = (s3 >> 0) & 0x7fffffff;
    f0 = BITSF(s3);
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    t9 = (t9 >> 0) & 0x7fffffff;
    if (cnd_) { goto L_088C3FF4; }
    goto L_088C3C3C;
L_088C3C3C:;
    f0 = BITSF(t9);
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    v0 = D_08AEC7C4 - (-14396);
    if (cnd_) { goto L_088C3F14; }
    goto L_088C3C50;
L_088C3C50:;
    v1 = FBITS(f3);
    f2 = BITSF(LD32(v0-14396));
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088C3E84; }
    goto L_088C3C70;
L_088C3C70:;
    v0 = FBITS(f5);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088C3E20; }
    goto L_088C3C8C;
L_088C3C8C:;
    v1 = FBITS(f4);
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088C3D70; }
    goto L_088C3CA8;
L_088C3CA8:;
    v0 = FBITS(f3);
    {vr32=BITSF(v0);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr36;vr16=s0*t0;vr17=s1*t0;vr18=s2*t0;}
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v1 = FBITS(f5);
    {vr40=BITSF(v1);}
    {float s0=vr40;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v0=FBITS(vr0);}
    {vr44=BITSF(v0);}
    {float s0=vr44;float s1=vr44;float s2=vr44;float s3=vr44;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float t0=vr44;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    v0 = FBITS(f4);
    {v[48]=BITSF(v0);}
    {float s0=v[48];float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr52=BITSF(v0);}
    {float s0=vr52;float s1=vr52;float s2=vr52;float s3=vr52;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr52;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    s0 = 1;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = LD32(sp+116);
    a1 = LD32(sp+120);
    v1 = LD32(sp+124);
    v0 = LD32(sp+112);
    ST32(t8+4, a0);
    ST32(t8, v0);
    ST32(t8+12, v1);
    ST32(t8+8, a1);
    goto L_088C3D54;
L_088C3D54:;
    v0 = s0 + 0;
    sp = sp + 176;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[32]=vr32;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[52]=vr52;return v0; }
L_088C3D70:;
    v0 = FBITS(f5);
    {vr32=BITSF(v0);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float t0=vr36;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    {vr40=BITSF(v1);}
    {float s0=vr40;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v0=FBITS(vr0);}
    {vr44=BITSF(v0);}
    {float s0=vr44;float s1=vr44;float s2=vr44;float s3=vr44;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr44;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    s0 = 2;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    goto L_088C3DD0;
L_088C3DD0:;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+96);
    a3 = LD32(sp+100);
    t0 = LD32(sp+104);
    t1 = LD32(sp+108);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a0 = LD32(sp+96);
    a1 = LD32(sp+100);
    a2 = LD32(sp+104);
    v0 = LD32(sp+108);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088C3DFC;
L_088C3DFC:;
    ST32(t8, v1);
    ST32(t8+28, v0);
    ST32(t8+4, a3);
    ST32(t8+8, t0);
    ST32(t8+12, t1);
    ST32(t8+16, a0);
    ST32(t8+20, a1);
    ST32(t8+24, a2);
    goto L_088C3D54;
L_088C3E20:;
    v1 = FBITS(f3);
    {vr32=BITSF(v1);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr36;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {vr40=BITSF(v0);}
    {float s0=vr40;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v0=FBITS(vr0);}
    {vr44=BITSF(v0);}
    {float s0=vr44;float s1=vr44;float s2=vr44;float s3=vr44;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr44;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    s0 = 2;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    goto L_088C3DD0;
L_088C3E84:;
    v0 = FBITS(f5);
    {vr32=BITSF(v0);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float t0=vr36;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v1 = FBITS(f4);
    {vr40=BITSF(v1);}
    {float s0=vr40;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr12;float t1=vr13;float t2=vr14;float t3=vr15;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {v0=FBITS(vr0);}
    {vr44=BITSF(v0);}
    {float s0=vr44;float s1=vr44;float s2=vr44;float s3=vr44;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr44;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    s0 = 2;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+112);
    a3 = LD32(sp+116);
    t0 = LD32(sp+120);
    t1 = LD32(sp+124);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a0 = LD32(sp+112);
    a1 = LD32(sp+116);
    a2 = LD32(sp+120);
    v0 = LD32(sp+124);
    goto L_088C3DFC;
L_088C3F14:;
    v0 = FBITS(f4);
    {vr32=BITSF(v0);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float t0=vr36;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    s0 = 4;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    goto L_088C3F5C;
L_088C3F5C:;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    t4 = LD32(sp+80);
    t5 = LD32(sp+84);
    t6 = LD32(sp+88);
    t7 = LD32(sp+92);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    t0 = LD32(sp+80);
    t1 = LD32(sp+84);
    t2 = LD32(sp+88);
    t3 = LD32(sp+92);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+80);
    a1 = LD32(sp+84);
    a2 = LD32(sp+88);
    a3 = LD32(sp+92);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v0 = LD32(sp+80);
    a0 = LD32(sp+84);
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(t8, t4);
    ST32(t8+4, t5);
    ST32(t8+8, t6);
    ST32(t8+12, t7);
    ST32(t8+16, t0);
    ST32(t8+20, t1);
    ST32(t8+24, t2);
    ST32(t8+28, t3);
    ST32(t8+32, v1);
    ST32(t8+36, a1);
    ST32(t8+40, a2);
    ST32(t8+44, a3);
    ST32(t8+48, v0);
    ST32(t8+52, a0);
    v1 = LD32(sp+92);
    v0 = LD32(sp+88);
    goto L_088C3FE8;
L_088C3FE8:;
    ST32(t8+56, v0);
    ST32(t8+60, v1);
    goto L_088C3D54;
L_088C3FF4:;
    v1 = FBITS(f5);
    {vr32=BITSF(v1);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr24;float s1=vr25;float s2=vr26;float t0=vr36;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    s0 = 4;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr28;float t1=vr29;float t2=vr30;float t3=vr31;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    goto L_088C3F5C;
L_088C4040:;
    v0 = FBITS(f3);
    {vr32=BITSF(v0);}
    {float s0=vr32;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v0=FBITS(vr0);}
    {vr36=BITSF(v0);}
    {float s0=vr36;float s1=vr36;float s2=vr36;float s3=vr36;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float t0=vr36;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    s0 = 4;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr24;float t1=vr25;float t2=vr26;float t3=vr27;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr20;float t1=vr21;float t2=vr22;float t3=vr23;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    t4 = LD32(sp+96);
    t5 = LD32(sp+100);
    t6 = LD32(sp+104);
    t7 = LD32(sp+108);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    t0 = LD32(sp+96);
    t1 = LD32(sp+100);
    t2 = LD32(sp+104);
    t3 = LD32(sp+108);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    v1 = LD32(sp+84);
    v0 = LD32(sp+80);
    a0 = LD32(sp+88);
    a1 = LD32(sp+92);
    a3 = LD32(sp+100);
    a2 = LD32(sp+96);
    ST32(t8, v0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    ST32(t8+4, v1);
    ST32(t8+8, a0);
    ST32(t8+12, a1);
    ST32(t8+16, t4);
    ST32(t8+20, t5);
    ST32(t8+24, t6);
    ST32(t8+28, t7);
    ST32(t8+32, t0);
    ST32(t8+36, t1);
    ST32(t8+40, t2);
    ST32(t8+44, t3);
    ST32(t8+48, a2);
    ST32(t8+52, a3);
    v1 = LD32(sp+108);
    v0 = LD32(sp+104);
    goto L_088C3FE8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[32]=vr32;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[52]=vr52;
}

/* 088C4118 */
rv_t func_088C4118(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3];
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 256);
L_088C4118:;
    sp = sp - 256;
    v0 = LD32(a0+248);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088C414C; }
    goto L_088C4140;
L_088C4140:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    goto L_088C414C;
L_088C414C:;
    a0 = LD32(s1+388);
    cnd_ = a0 == 0;
    s2 = s1 + 388;
    if (cnd_) { goto L_088C4188; }
    goto L_088C4158;
L_088C4158:;
    s0 = LD32(a0);
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { u64 r_ = func_088B692C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C4170;
L_088C4170:;
    a0 = s0 + 0;
    {u32 a_=sp+(160);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = s0 != 0;
    {u32 a_=sp+(208);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C4158; }
    goto L_088C4188;
L_088C4188:;
    ST32(s2, 0);
    v0 = LD32(s1+276);
    {u32 a_=s1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(0);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[112]=d0;v[113]=d1;v[114]=d2;v[115]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float t0=v[8];float t1=v[9];float t2=v[10];float o0=0;o0+=v[112]*t0;o0+=v[116]*t1;o0+=v[120]*t2;float o1=0;o1+=v[113]*t0;o1+=v[117]*t1;o1+=v[121]*t2;float o2=0;o2+=v[114]*t0;o2+=v[118]*t1;o2+=v[122]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    a2 = LD32(s1+280);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    ST32(s1+224, v0);
    ST32(s1+228, v1);
    ST32(s1+232, a0);
    ST32(s1+236, a1);
    ST32(s1+208, v0);
    ST32(s1+212, v1);
    ST32(s1+216, a0);
    cnd_ = a2 != 0;
    ST32(s1+220, a1);
    if (cnd_) { goto L_088C43E4; }
    goto L_088C41F8;
L_088C41F8:;
    a0 = LD32(s1+284);
    goto L_088C41FC;
L_088C41FC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088C43D4; }
    goto L_088C4204;
L_088C4204:;
    v0 = LD32(s1+276);
    goto L_088C4208;
L_088C4208:;
    v1 = LD32(v0);
    s3 = LD32(v1);
    s2 = s3 << 4;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;__auto_type vr_t_ = func_08A94838(a0, t1, t2, t3); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C421C;
L_088C421C:;
    a0 = v0 + 0;
    s0 = s3 - 1;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v1 = s0 + 0;
    if (cnd_) { goto L_088C423C; }
    goto L_088C4230;
L_088C4230:;
    v1 = v1 - 1;
    goto L_088C4234;
L_088C4234:;
    cnd_ = v1 != v0;
    v1 = v1 - 1;
    if (cnd_) { goto L_088C4234; }
    goto L_088C423C;
L_088C423C:;
    ST32(s1+280, a0);
    a0 = s2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;__auto_type vr_t_ = func_08A94838(a0, 0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C4248;
L_088C4248:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v1 = s0 + 0;
    if (cnd_) { goto L_088C4264; }
    goto L_088C4258;
L_088C4258:;
    v1 = v1 - 1;
    goto L_088C425C;
L_088C425C:;
    cnd_ = v1 != v0;
    v1 = v1 - 1;
    if (cnd_) { goto L_088C425C; }
    goto L_088C4264;
L_088C4264:;
    ST32(s1+284, a0);
    cnd_ = s3 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088C4390; }
    goto L_088C4270;
L_088C4270:;
    v0 = LD32(s1+276);
    {u32 a_=s1+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    v1 = LD32(v0);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    a1 = a3 << 4;
    v0 = LD32(v1+4);
    {u32 a_=s1+(32);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    v0 = v0 + a1;
    {u32 a_=v0+(0);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    a0 = LD32(s1+280);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float t0=v[116];float t1=v[117];float t2=v[118];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;v[112]=o0;v[113]=o1;v[114]=o2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    v0 = LD32(sp+16);
    a0 = a1 + a0;
    {u32 a_=sp+(112);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    ST32(a0, v0);
    {u32 a_=sp+(128);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+20);
    a3 = a3 + 1;
    a2 = a3 < s3;
    ST32(a0+4, v0);
    v0 = LD32(sp+24);
    ST32(a0+8, v0);
    v1 = LD32(sp+28);
    ST32(a0+12, v1);
    {u32 a_=s1+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=a0+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(s1+276);
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(v0);
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    v0 = LD32(v1+4);
    {u32 a_=s1+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v0 = v0 + a1;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=v0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+284);
    {u32 a_=sp+(96);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+16);
    a1 = a1 + v1;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(a1, v0);
    v1 = LD32(sp+20);
    ST32(a1+4, v1);
    v0 = LD32(sp+24);
    ST32(a1+8, v0);
    v1 = LD32(sp+28);
    ST32(a1+12, v1);
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    cnd_ = a2 != 0;
    {u32 a_=a1+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088C4270; }
    goto L_088C4390;
L_088C4390:;
    v0 = LD32(s1+248);
    a0 = s1 + 288;
    v0 = v0 | 0x8;
    ST32(s1+248, v0);
    { rv_t r_ = func_088B8AA8(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C43A4;
L_088C43A4:;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;__auto_type vr_t_ = func_088C2C94(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C43AC;
L_088C43AC:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C43B8;
L_088C43B8:;
    sp = sp + 256;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;return (rv_t){ v0, v1, f0 }; }
L_088C43D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C43DC;
L_088C43DC:;
    v0 = LD32(s1+276);
    goto L_088C4208;
L_088C43E4:;
    a0 = a2 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C43EC;
L_088C43EC:;
    a0 = LD32(s1+284);
    goto L_088C41FC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;
}

/* 088C43F4 */
void func_088C43F4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C43F4:;
    {u32 a_=a1+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a2+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=a1+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = a0 + 0;
    sp = sp - 32;
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr0=d0;vr1=d1;vr2=d2;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=a0+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    sp = sp + 32;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;
}

/* 088C4424 */
void func_088C4424(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088C4424:;
    v1 = LD32(a1);
    ST32(a0+144, v1);
    v0 = LD32(a1+4);
    ST32(a0+148, v0);
    v1 = LD32(a1+8);
    ST32(a0+152, v1);
    v0 = LD32(a1+12);
    ST32(a0+156, v0);
    return;
}

/* 088C4448 */
void func_088C4448(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088C4448:;
    v1 = LD32(a1);
    ST32(a0+160, v1);
    v0 = LD32(a1+4);
    ST32(a0+164, v0);
    v1 = LD32(a1+8);
    ST32(a0+168, v1);
    v0 = LD32(a1+12);
    ST32(a0+172, v0);
    return;
}

/* 088C446C */
void func_088C446C(u32 a0)
{
    u32 s0 = 0, s1 = 0, s2 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3];
L_088C446C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    {u32 a_=a0+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 088C4480 */
float func_088C4480(u32 a0)
{
    float f0 = 0;
L_088C4480:;
    f0 = BITSF(LD32(a0+252));
    return f0;
}

/* 088C4488 */
void func_088C4488(u32 a0, float f12)
{
L_088C4488:;
    ST32(a0+252, FBITS(f12));
    return;
}

/* 088C4490 */
u32 func_088C4490(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C4490:;
    sp = sp - 16;
    v1 = 0x800000u;
    v0 = LD32(a0+248);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = a0 + 96;
    if (cnd_) { goto L_088C44BC; }
    goto L_088C44AC;
L_088C44AC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_088C44BC:;
    v0 = func_088B0800();
    goto L_088C44C4;
L_088C44C4:;
    a0 = v0 + 0;
    goto L_088C44AC;
}

/* 088C44CC */
u32 func_088C44CC(u32 a0)
{
    u32 v0 = 0;
L_088C44CC:;
    v0 = a0 + 96;
    return v0;
}

/* 088C44D4 */
u64 func_088C44D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr36 = v[36], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43];
    u8 stack_[1296] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1296);
L_088C44D4:;
    sp = sp - 1296;
    a3 = 0 + 0;
    v1 = LD32(a0+276);
    v0 = LD32(v1);
    t0 = LD32(v0);
    cnd_ = t0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088C454C; }
    goto L_088C450C;
L_088C450C:;
    t2 = LD32(a0+284);
    t1 = LD32(a0+280);
    goto L_088C4514;
L_088C4514:;
    v0 = a3 << 4;
    a1 = v0 + t1;
    v1 = LD32(a1);
    v0 = v0 + t2;
    a3 = a3 + 1;
    ST32(v0, v1);
    a2 = a3 < t0;
    v1 = LD32(a1+4);
    ST32(v0+4, v1);
    a0 = LD32(a1+8);
    ST32(v0+8, a0);
    v1 = LD32(a1+12);
    cnd_ = a2 != 0;
    ST32(v0+12, v1);
    if (cnd_) { goto L_088C4514; }
    goto L_088C454C;
L_088C454C:;
    v0 = LD32(s2+248);
    a0 = s2 + 0;
    v0 = v0 | 0x8;
    ST32(s2+248, v0);
    func_088C906C(a0);
    goto L_088C4560;
L_088C4560:;
    v0 = LD32(s2+248);
    v0 = (v0 >> 5) & 0x1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088C459C; }
    goto L_088C4570;
L_088C4570:;
    a1 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr36=v[36];vr40=v[40];vr41=v[41];vr42=v[42];vr43=v[43];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C4578;
L_088C4578:;
    sp = sp + 1296;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;return (u64)v0 | ((u64)v1 << 32); }
L_088C459C:;
    a0 = s2 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;func_088CA1B4(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr36=v[36];});
    goto L_088C45A4;
L_088C45A4:;
    f0 = BITSF(LD32(s2+264));
    {u32 a_=s2+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    f0 = BITSF(LD32(s2+268));
    {u32 a_=s2+(144);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=s2+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(288);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr12=BITSF(v0);}
    {float s0=vr12;float s1=vr12;float s2=vr12;float s3=vr12;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr12;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    s0 = LD32(s2+388);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+4);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    a2 = LD32(sp+16);
    a3 = LD32(sp+20);
    t0 = LD32(sp+24);
    t1 = LD32(sp+28);
    v0 = LD32(sp);
    ST32(s2+164, v1);
    ST32(s2+160, v0);
    ST32(s2+168, a0);
    ST32(s2+172, a1);
    ST32(s2+144, a2);
    ST32(s2+148, a3);
    ST32(s2+152, t0);
    cnd_ = s0 == 0;
    ST32(s2+156, t1);
    if (cnd_) { goto L_088C46C4; }
    goto L_088C4640;
L_088C4640:;
    v0 = D_08AEC7C8 - (-14392);
    f20 = BITSF(LD32(v0-14392));
    f21 = BITSF(0);
    s1 = 0x80000u;
    goto L_088C4650;
L_088C4650:;
    a0 = s2 + 0;
    v0 = func_088C4490(a0);
    goto L_088C4658;
L_088C4658:;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    a1 = s0 + 0;
    a0 = s2 + 0;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    a2 = 1;
    if (cnd_) { goto L_088C46B0; }
    goto L_088C4684;
L_088C4684:;
    {u32 a_=s2+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088C46B0; }
    goto L_088C46A4;
L_088C46A4:;
    v0 = LD32(s2+248);
    v0 = v0 | s1;
    ST32(s2+248, v0);
    goto L_088C46B0;
L_088C46B0:;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;func_088C7FC0(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr36=v[36];vr40=v[40];vr41=v[41];vr42=v[42];vr43=v[43];});
    goto L_088C46B8;
L_088C46B8:;
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088C4650; }
    goto L_088C46C4;
L_088C46C4:;
    v0 = LD32(s2+160);
    v1 = LD32(s2+164);
    a0 = LD32(s2+168);
    a1 = LD32(s2+172);
    ST32(sp+16, v0);
    v0 = D_08AEC7CC - (-14388);
    ST32(sp+20, v1);
    ST32(sp+24, a0);
    ST32(sp+28, a1);
    {u32 a_=sp+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    f21 = BITSF(LD32(v0-14388));
    if (cnd_) { goto L_088C4CE8; }
    goto L_088C4700;
L_088C4700:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr12;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C4718;
L_088C4718:;
    v0 = LD32(s2+276);
    {v1=FBITS(vr4);}
    f20 = BITSF(v1);
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088C473C; }
    goto L_088C473C;
L_088C473C:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088C4750; }
    goto L_088C4750;
L_088C4750:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = fcc;
    v1 = D_08AEC7D4 - (-14380);
    if (cnd_) { goto L_088C4B58; }
    goto L_088C4760;
L_088C4760:;
    {u32 a_=s2+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088C4764;
L_088C4764:;
    {u32 a_=sp+(304);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f21);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s2+(208);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = LD32(s2+208);
    v1 = LD32(s2+212);
    a1 = LD32(s2+216);
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[16]=d0;v[17]=d1;v[18]=d2;}
    a2 = LD32(s2+220);
    ST32(s2+224, v0);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = s2 + 144;
    {u32 a_=s2+(208);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    ST32(s2+232, a1);
    {u32 a_=sp+(320);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(s2+236, a2);
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(s2+228, v1);
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+4));
    ST32(sp+16, 0);
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f3) ^ 0x80000000u);
    ST32(sp+20, FBITS(f0));
    {u32 a_=sp+(528);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+20);
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = BITSF(LD32(s2+144));
    v1 = LD32(sp+16);
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {u32 a_=sp+(560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f1));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    ST32(sp+16, FBITS(f2));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    a3 = sp + 144;
    ST32(sp+20, 0);
    {u32 a_=sp+(1216);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1232);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+148, v0);
    {u32 a_=sp+(768);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    v0 = LD32(sp+16);
    a0 = LD32(sp+24);
    ST32(sp+24, FBITS(f0));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    ST32(sp+160, v0);
    {u32 a_=sp+(784);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = LD32(sp+20);
    ST32(sp+16, FBITS(f3));
    {u32 a_=sp+(816);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    ST32(sp+164, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    v0 = LD32(sp+24);
    a1 = LD32(sp+28);
    ST32(sp+20, FBITS(f1));
    {u32 a_=sp+(832);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    ST32(sp+168, v0);
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    v0 = LD32(sp+16);
    ST32(sp+144, v1);
    a2 = sp + 192;
    t0 = sp + 240;
    ST32(sp+152, a0);
    ST32(sp+156, a1);
    ST32(sp+172, a1);
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+176, v0);
    {u32 a_=sp+(160);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+20);
    ST32(sp+24, 0);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    ST32(sp+180, v0);
    {u32 a_=sp+(848);v[44]=BITSF(LD32(a_+0));v[45]=BITSF(LD32(a_+4));v[46]=BITSF(LD32(a_+8));v[47]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(880);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    v0 = LD32(sp+24);
    ST32(sp+188, a1);
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+184, v0);
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(864);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s2+(0);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s2+(16);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float t0=v[24];float t1=v[25];float t2=v[26];float o0=0;o0+=v[32]*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=vr41*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+16);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[32]*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=vr41*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(928);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(944);v[44]=BITSF(LD32(a_+0));v[45]=BITSF(LD32(a_+4));v[46]=BITSF(LD32(a_+8));v[47]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(912);vr36=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    ST32(sp+192, v0);
    {float s0=vr36;float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+20);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {u32 a_=s2+(32);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+196, v0);
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    v0 = LD32(sp+24);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float t0=vr12;float t1=vr13;float t2=vr14;float o0=0;o0+=v[32]*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=vr41*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    ST32(sp+200, v0);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+28);
    v1 = LD32(sp+4);
    ST32(sp+204, v0);
    v0 = LD32(sp);
    ST32(sp+212, v1);
    ST32(sp+208, v0);
    v1 = LD32(sp+12);
    v0 = LD32(sp+8);
    ST32(sp+220, v1);
    ST32(sp+216, v0);
    v1 = LD32(sp+244);
    v0 = LD32(sp+240);
    ST32(sp+228, v1);
    ST32(sp+224, v0);
    v1 = LD32(sp+252);
    v0 = LD32(sp+248);
    ST32(sp+236, v1);
    ST32(sp+232, v0);
    goto L_088C4A80;
L_088C4A80:;
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
    if (cnd_) { goto L_088C4A80; }
    goto L_088C4AAC;
L_088C4AAC:;
    {u32 a_=sp+(160);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[20];float s1=v[21];float s2=v[22];float t0=v[16];float t1=v[17];float t2=v[18];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[16]=d0;v[17]=d1;v[18]=d2;}
    {u32 a_=sp+(176);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr12=sum;}
    {u32 a_=sp+(1152);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=s2+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    a0 = s2 + 0;
    {u32 a_=s2+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1168);vr36=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {float s0=vr12;float d0=sqrtf(s0);vr12=d0;}
    {float s0=vr36;float t0=vr12;float d0=s0/t0;vr4=d0;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr4;v[16]=s0*t0;v[17]=s1*t0;v[18]=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[16];float t1=v[17];float t2=v[18];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {vr40=BITSF(v0);}
    {float s0=vr40;float s1=vr40;float s2=vr40;float s3=vr40;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr40;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=s2+(16);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr8=d0;vr9=d1;vr10=d2;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=vr36;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=s2+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+244);
    a1 = LD32(sp+248);
    a2 = LD32(sp+252);
    v0 = LD32(sp+240);
    ST32(s2+4, v1);
    ST32(s2, v0);
    ST32(s2+8, a1);
    ST32(s2+12, a2);
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;func_088C909C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr36=v[36];vr40=v[40];vr41=v[41];vr42=v[42];vr43=v[43];});
    goto L_088C4B48;
L_088C4B48:;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;__auto_type vr_t_ = func_088C2E14(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr36=v[36];vr40=v[40];vr41=v[41];vr42=v[42];vr43=v[43];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C4B50;
L_088C4B50:;
    a0 = s2 + 0;
    goto L_088C4570;
L_088C4B58:;
    v0 = D_08AEC7D0 - (-14384);
    f1 = BITSF(LD32(v0-14384));
    f0 = BITSF(LD32(v1-14380));
    s3 = s2 + 328;
    ST32(s3+16, FBITS(f1));
    v0 = s2 + 208;
    s0 = sp + 32;
    ST32(s3+20, FBITS(f0));
    a0 = s3 + 0;
    a1 = s0 + 0;
    ST32(s3+8, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    ST32(s3+12, FBITS(f0));
    ST32(s2+328, FBITS(f1));
    f1 = BITSF(LD32(s2+208));
    f0 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+32, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C4BAC;
L_088C4BAC:;
    {u32 a_=s2+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s2+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a1 = s0 + 0;
    a0 = s3 + 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(sp+32, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C4BE0;
L_088C4BE0:;
    v0 = LD32(s2+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088C4BFC; }
    goto L_088C4BFC;
L_088C4BFC:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f6 = f0;
    if (cnd_) { goto L_088C4C14; }
    goto L_088C4C10;
L_088C4C10:;
    f6 = f1;
    goto L_088C4C14;
L_088C4C14:;
    f0 = BITSF(LD32(s2+328));
    f1 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s3+16));
    f3 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s3+12));
    f5 = BITSF(LD32(s3+20));
    f1 = f1 - f6;
    f0 = f0 - f6;
    f5 = f5 + f6;
    f2 = f2 - f6;
    f3 = f3 + f6;
    f4 = f4 + f6;
    v0 = D_08AEC7D8 - (-14376);
    f12 = BITSF(LD32(v0-14376));
    ST32(s3+8, FBITS(f1));
    s1 = s2 + 288;
    a1 = s3 + 0;
    ST32(s2+328, FBITS(f0));
    a0 = s1 + 0;
    s0 = sp + 48;
    ST32(s3+16, FBITS(f2));
    ST32(s3+4, FBITS(f3));
    ST32(s3+12, FBITS(f4));
    ST32(s3+20, FBITS(f5));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;__auto_type vr_t_ = func_088B8958(a0, a1, 0, 0, 0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr36=v[36];vr40=v[40];vr41=v[41];vr42=v[42];vr43=v[43];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C4C78;
L_088C4C78:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;func_088B4DF0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];});
    goto L_088C4C84;
L_088C4C84:;
    a0 = s0 + 0;
    a1 = sp + 16;
    a2 = s1 + 0;
    t1 = sp + 128;
    f12 = f20;
    a3 = sp + 0;
    t0 = sp + 256;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;__auto_type vr_t_ = func_088B52B0(a0, a1, a2, a3, t0, t1, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr_t_; });
    goto L_088C4CA4;
L_088C4CA4:;
    v0 = D_08AEC7DC - (-14372);
    f1 = BITSF(LD32(v0-14372));
    f0 = f0 + f1;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f20; goto L_088C4CC0; }
    goto L_088C4CC0;
L_088C4CC0:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=s2+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088C4764; }
    goto L_088C4CD0;
L_088C4CD0:;
    f21 = f0 / f20;
    v0 = LD32(s2+248);
    v1 = 0x100000u;
    v0 = v0 | v1;
    ST32(s2+248, v0);
    goto L_088C4760;
L_088C4CE8:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;v[32]=(float)1;v[33]=(float)1;v[34]=(float)1;v[35]=(float)1;}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    goto L_088C4718;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[36]=vr36;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;
}

/* 088C4CF4 */
u64 func_088C4CF4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[2304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 2304);
L_088C4CF4:;
    sp = sp - 2304;
    s3 = a0 + 0;
    func_088C906C(a0);
    goto L_088C4D48;
L_088C4D48:;
    a2 = LD32(s3+248);
    v0 = (a2 >> 7) & 0x1;
    cnd_ = v0 == 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    if (cnd_) { goto L_088C67A8; }
    goto L_088C4D58;
L_088C4D58:;
    v0 = a2 & 0x2000;
    cnd_ = v0 != 0;
    v0 = s3 + 112;
    if (cnd_) { goto L_088C4D9C; }
    goto L_088C4D64;
L_088C4D64:;
    v0 = LD32(s3+272);
    cnd_ = v0 != 0;
    v0 = s3 + 112;
    if (cnd_) { goto L_088C4D9C; }
    goto L_088C4D70;
L_088C4D70:;
    a0 = LD32(s3+388);
    cnd_ = a0 == 0;
    s1 = s3 + 388;
    if (cnd_) { goto L_088C4D8C; }
    goto L_088C4D7C;
L_088C4D7C:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C4D84;
L_088C4D84:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088C4D7C; }
    goto L_088C4D8C;
L_088C4D8C:;
    ST32(s1, 0);
    a0 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C6D00(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C4D98;
L_088C4D98:;
    v0 = s3 + 112;
    goto L_088C4D9C;
L_088C4D9C:;
    a2 = LD32(v0+12);
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    v0 = D_08B2BC44 - (-17340);
    f0 = BITSF(LD32(v0-17340));
    v1 = LD32(s3+112);
    {u32 a_=s3+(176);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(832);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    ST32(sp, v1);
    a3 = 0 + 0;
    ST32(sp+4, a0);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+8, a1);
    ST32(sp+12, a2);
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    v1 = LD32(s3+276);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(v1);
    s7 = LD32(v0);
    v0 = 0 < s7;
    cnd_ = v0 == 0;
    ST32(sp+2144, v0);
    if (cnd_) { goto L_088C4E4C; }
    goto L_088C4E0C;
L_088C4E0C:;
    t1 = LD32(s3+284);
    t0 = LD32(s3+280);
    goto L_088C4E14;
L_088C4E14:;
    v0 = a3 << 4;
    a1 = v0 + t0;
    v1 = LD32(a1);
    v0 = v0 + t1;
    a3 = a3 + 1;
    ST32(v0, v1);
    a2 = a3 < s7;
    v1 = LD32(a1+4);
    ST32(v0+4, v1);
    a0 = LD32(a1+8);
    ST32(v0+8, a0);
    v1 = LD32(a1+12);
    cnd_ = a2 != 0;
    ST32(v0+12, v1);
    if (cnd_) { goto L_088C4E14; }
    goto L_088C4E4C;
L_088C4E4C:;
    v0 = LD32(s3+248);
    v1 = LD32(s3+208);
    a1 = LD32(s3+212);
    a2 = LD32(s3+216);
    a3 = LD32(s3+220);
    v0 = v0 | 0x8;
    ST32(s3+248, v0);
    a0 = s3 + 0;
    ST32(s3+224, v1);
    ST32(s3+228, a1);
    ST32(s3+232, a2);
    ST32(s3+236, a3);
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088CA1B4(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C4E80;
L_088C4E80:;
    {u32 a_=sp+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(s3+164, v1);
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    ST32(s3+160, v0);
    ST32(s3+168, a0);
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    ST32(s3+172, a1);
    if (cnd_) { goto L_088C4EC4; }
    goto L_088C4EB4;
L_088C4EB4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C4EC4;
L_088C4EC4:;
    v1 = D_08AEC7E0 - (-14368);
    {a0=FBITS(vr8);}
    f1 = BITSF(LD32(v1-14368));
    f0 = BITSF(a0);
    f20 = BITSF(a0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088C4F34; }
    goto L_088C4EE8;
L_088C4EE8:;
    sp = sp + 2304;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;return (u64)v0 | ((u64)v1 << 32); }
L_088C4F34:;
    a0 = sp + 32;
    func_088B18EC(a0);
    goto L_088C4F3C;
L_088C4F3C:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(sp+848, 0);
    if (cnd_) { goto L_088C67A0; }
    goto L_088C4F50;
L_088C4F50:;
    v0 = D_08AEC7E4 - (-14364);
    f23 = BITSF(LD32(v0-14364));
    v0 = D_08AEC804 - (-14332);
    v1 = D_08AEC7E8 - (-14360);
    f27 = BITSF(LD32(v0-14332));
    v0 = D_08AEC80C - (-14324);
    f24 = BITSF(LD32(v1-14360));
    f26 = BITSF(LD32(v0-14324));
    v1 = s3 + 208;
    v0 = s3 + 288;
    ST32(sp+912, v1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    f25 = f0;
    ST32(sp+944, v0);
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+848);
    goto L_088C4F90;
L_088C4F90:;
    v1 = v1 + 1;
    v0 = v1 < 0xbu;
    cnd_ = v0 == 0;
    ST32(sp+848, v1);
    if (cnd_) { goto L_088C6790; }
    goto L_088C4FA0;
L_088C4FA0:;
    v1 = LD32(s3+272);
    ST32(sp+820, 0);
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    ST32(sp+852, 0);
    if (cnd_) { goto L_088C6308; }
    goto L_088C4FB4;
L_088C4FB4:;
    cnd_ = (s32)v1 <= 0;
    s2 = s3 + 328;
    if (cnd_) { goto L_088C6308; }
    goto L_088C4FBC;
L_088C4FBC:;
    ST32(s2+8, FBITS(f23));
    v1 = FBITS(f20);
    {u32 a_=sp+(928);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(s2+16, FBITS(f23));
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(s2+4, FBITS(f24));
    a0 = s2 + 0;
    a1 = sp + 320;
    ST32(s2+12, FBITS(f24));
    ST32(s2+20, FBITS(f24));
    ST32(s3+328, FBITS(f23));
    v0 = LD32(sp+912);
    f0 = BITSF(LD32(s3+208));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp+320, FBITS(f0));
    ST32(sp+324, FBITS(f1));
    ST32(sp+328, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C5014;
L_088C5014:;
    {u32 a_=sp+(928);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s3+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s2 + 0;
    a1 = sp + 320;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    f0 = BITSF(LD32(sp+512));
    f1 = BITSF(LD32(sp+516));
    ST32(sp+320, FBITS(f0));
    f0 = BITSF(LD32(sp+520));
    ST32(sp+324, FBITS(f1));
    ST32(sp+328, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C5054;
L_088C5054:;
    v0 = LD32(s3+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088C5070; }
    goto L_088C5070;
L_088C5070:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f6 = f0;
    if (cnd_) { goto L_088C5088; }
    goto L_088C5084;
L_088C5084:;
    f6 = f1;
    goto L_088C5088;
L_088C5088:;
    f0 = BITSF(LD32(s3+328));
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2+16));
    f3 = BITSF(LD32(s2+4));
    f4 = BITSF(LD32(s2+12));
    f5 = BITSF(LD32(s2+20));
    f0 = f0 - f6;
    f1 = f1 - f6;
    f5 = f5 + f6;
    f2 = f2 - f6;
    f3 = f3 + f6;
    f4 = f4 + f6;
    ST32(s3+328, FBITS(f0));
    v0 = D_08AEC7EC - (-14356);
    a1 = s2 + 0;
    a0 = LD32(sp+944);
    f12 = BITSF(LD32(v0-14356));
    ST32(s2+8, FBITS(f1));
    s0 = sp + 528;
    ST32(s2+16, FBITS(f2));
    ST32(s2+4, FBITS(f3));
    ST32(s2+12, FBITS(f4));
    ST32(s2+20, FBITS(f5));
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B8958(a0, a1, 0, 0, 0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C50E8;
L_088C50E8:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088B4DF0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C50F4;
L_088C50F4:;
    a2 = LD32(sp+944);
    a0 = s0 + 0;
    a1 = sp + 0;
    f12 = f20;
    a3 = sp + 48;
    t0 = sp + 820;
    t1 = 8;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B58CC(a0, a1, a2, a3, t0, t1, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; });
    goto L_088C5114;
L_088C5114:;
    f22 = f0;
    goto L_088C5118;
L_088C5118:;
    fcc = FCMP(f25, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = LD32(s3+248); goto L_088C5294; }
    goto L_088C5128;
L_088C5128:;
    v1 = LD32(s3+248);
    v0 = 0x20000u;
    t0 = 0 + 0;
    a3 = v1 >> 16;
    v0 = v1 & v0;
    a3 = a3 ^ 0x1;
    v1 = (v1 >> 8) & 0x1;
    if (v0 == 0) t0 = v1;
    a3 = a3 & 0x1;
    a1 = s2 + 0;
    a2 = 1;
    t1 = 0 + 0;
    a0 = sp + 32;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088B1958(a0, a1, a2, a3, t0, t1, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5160;
L_088C5160:;
    v1 = FBITS(f22);
    {u32 a_=sp+(960);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(960);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    s2 = sp + 496;
    a0 = s2 + 0;
    a1 = s3 + 0;
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    func_088C3A64(a0, a1);
    goto L_088C5198;
L_088C5198:;
    v0 = LD32(sp+912);
    a0 = LD32(s3+208);
    v1 = LD32(sp+508);
    a1 = LD32(v0+4);
    a2 = LD32(v0+8);
    a3 = LD32(v0+12);
    v0 = LD32(sp+496);
    ST32(sp+348, v1);
    t1 = sp + 368;
    t0 = s3 + 0;
    ST32(sp+336, v0);
    t2 = s3 + 48;
    v0 = LD32(sp+500);
    ST32(sp+352, a0);
    ST32(sp+340, v0);
    v0 = LD32(sp+504);
    ST32(sp+356, a1);
    ST32(sp+344, v0);
    ST32(sp+360, a2);
    ST32(sp+364, a3);
    goto L_088C51E8;
L_088C51E8:;
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
    if (cnd_) { goto L_088C51E8; }
    goto L_088C5214;
L_088C5214:;
    v1 = D_08AEC7F0 - (-14352);
    f0 = BITSF(LD32(v1-14352));
    s1 = LD32(sp+32);
    cnd_ = s1 == 0;
    ST32(sp+824, FBITS(f0));
    if (cnd_) { goto L_088C526C; }
    goto L_088C5228;
L_088C5228:;
    v0 = D_08AEC808 - (-14328);
    f21 = BITSF(LD32(v0-14328));
    fp = (u32)-1;
    s0 = LD32(s1);
    goto L_088C5238;
L_088C5238:;
    v0 = LD32(s3+396);
    v1 = LD32(s0+392);
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(s1+4); goto L_088C5264; }
    goto L_088C524C;
L_088C524C:;
    v0 = LD32(s3+392);
    v1 = LD32(s0+396);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C6018; }
    goto L_088C5260;
L_088C5260:;
    s1 = LD32(s1+4);
    goto L_088C5264;
L_088C5264:;
    cnd_ = s1 != 0;
    if (cnd_) { s0 = LD32(s1); goto L_088C5238; }
    goto L_088C526C;
L_088C526C:;
    f1 = BITSF(LD32(sp+824));
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a0 = D_08AEC7F0 - (-14352);
    if (cnd_) { goto L_088C5F34; }
    goto L_088C5284;
L_088C5284:;
    a2 = LD32(s3+248);
    f22 = f2;
    goto L_088C528C;
L_088C528C:;
    fcc = FCMP(f25, f22, 12);
    goto L_088C5294;
L_088C5294:;
    cnd_ = !fcc;
    v0 = D_08AEC810 - (-14320);
    if (cnd_) { goto L_088C52D8; }
    goto L_088C529C;
L_088C529C:;
    {u32 a_=sp+(1056);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = FBITS(f22);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1056);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=s3+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    f20 = f20 - f22;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s3+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = D_08AEC810 - (-14320);
    goto L_088C52D8;
L_088C52D8:;
    f0 = BITSF(LD32(v0-14320));
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    v0 = 0x100000u;
    if (cnd_) { goto L_088C5870; }
    goto L_088C52EC;
L_088C52EC:;
    a3 = LD32(sp+820);
    v0 = a2 | v0;
    cnd_ = a3 == 0;
    ST32(s3+248, v0);
    if (cnd_) { goto L_088C5F2C; }
    goto L_088C52FC;
L_088C52FC:;
    s1 = 0 + 0;
    cnd_ = a3 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088C5374; }
    goto L_088C5308;
L_088C5308:;
    s6 = (u32)-1;
    s4 = sp + 48;
    s2 = sp + 64;
    goto L_088C5314;
L_088C5314:;
    v0 = LD32(s2+4);
    s0 = s1 << 5;
    a0 = s3 + 0;
    a2 = s4 + s0;
    cnd_ = v0 == s6;
    a1 = v0 + 0;
    if (cnd_) { goto L_088C5340; }
    goto L_088C532C;
L_088C532C:;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088CA2D0(a0, a1, a2, t1, t2, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5334;
L_088C5334:;
    a0 = s3 + 0;
    func_088CA168(a0);
    goto L_088C533C;
L_088C533C:;
    a3 = LD32(sp+820);
    goto L_088C5340;
L_088C5340:;
    v0 = LD_U8(s2+8);
    a0 = s4 + s5;
    a1 = s4 + s0;
    cnd_ = v0 != 0;
    v1 = s5 + sp;
    if (cnd_) { goto L_088C5EDC; }
    goto L_088C5354;
L_088C5354:;
    v0 = LD_U8(v1+72);
    cnd_ = v0 == 0;
    if (cnd_) { {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));} goto L_088C5EE0; }
    goto L_088C5360;
L_088C5360:;
    s5 = s0 + 0;
    goto L_088C5364;
L_088C5364:;
    s1 = s1 + 1;
    v0 = s1 < a3;
    cnd_ = v0 != 0;
    s2 = s2 + 32;
    if (cnd_) { goto L_088C5314; }
    goto L_088C5374;
L_088C5374:;
    a1 = s5 + sp;
    v1 = LD32(a1+48);
    a1 = a1 + 48;
    a0 = s3 + 0;
    ST32(sp+512, v1);
    v0 = LD32(a1+4);
    ST32(sp+516, v0);
    v1 = LD32(a1+8);
    ST32(sp+520, v1);
    v0 = LD32(a1+12);
    ST32(sp+524, v0);
    v0 = func_088C4490(a0);
    goto L_088C53A4;
L_088C53A4:;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v1 = LD32(sp+852);
    {u32 a_=sp+(512);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    t0 = v0 + 0;
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = s5 + sp; goto L_088C54B0; }
    goto L_088C53CC;
L_088C53CC:;
    v0 = LD32(v1+248);
    v0 = (v0 >> 12) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = s5 + sp; goto L_088C54B0; }
    goto L_088C53DC;
L_088C53DC:;
    fcc = FCMP(f0, f26, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = s5 + sp; goto L_088C54B0; }
    goto L_088C53EC;
L_088C53EC:;
    {u32 a_=v1+(208);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {u32 a_=sp+(1072);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+416);
    v1 = LD32(sp+420);
    ST32(sp+496, v0);
    ST32(sp+500, v1);
    v0 = LD32(sp+424);
    v1 = LD32(sp+428);
    ST32(sp+504, v0);
    ST32(sp+508, v1);
    {u32 a_=sp+(496);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(976);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C546C; }
    goto L_088C5460;
L_088C5460:;
    {float s0=v[16];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C546C;
L_088C546C:;
    f2 = BITSF(0);
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v1 = s5 + sp;
    if (cnd_) { goto L_088C54B0; }
    goto L_088C5488;
L_088C5488:;
    v0 = LD32(sp+496);
    v1 = LD32(sp+504);
    f3 = f2;
    ST32(sp, v0);
    v0 = LD32(sp+500);
    ST32(sp+8, v1);
    ST32(sp+4, v0);
    v0 = LD32(sp+508);
    ST32(sp+12, v0);
    v1 = s5 + sp;
    goto L_088C54B0;
L_088C54B0:;
    v0 = LD_U8(v1+72);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088C5ED0; }
    goto L_088C54BC;
L_088C54BC:;
    v0 = LD32(s3+272);
    cnd_ = v0 != 0;
    a3 = LD32(sp+820);
    if (cnd_) { goto L_088C54D4; }
    goto L_088C54C8;
L_088C54C8:;
    v0 = 1;
    cnd_ = a3 == v0;
    v0 = s5 + sp;
    if (cnd_) { goto L_088C550C; }
    goto L_088C54D4;
L_088C54D4:;
    a2 = LD32(v1+64);
    cnd_ = a3 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088C5504; }
    goto L_088C54E0;
L_088C54E0:;
    v1 = sp + 0;
    goto L_088C54E4;
L_088C54E4:;
    v0 = LD_U8(v1+72);
    a1 = a1 + 1;
    cnd_ = v0 == 0;
    a0 = a1 < a3;
    if (cnd_) { goto L_088C54FC; }
    goto L_088C54F4;
L_088C54F4:;
    v0 = LD32(v1+64);
    a2 = a2 & v0;
    goto L_088C54FC;
L_088C54FC:;
    cnd_ = a0 != 0;
    v1 = v1 + 32;
    if (cnd_) { goto L_088C54E4; }
    goto L_088C5504;
L_088C5504:;
    a0 = (a2 >> 4) & 0x1;
    goto L_088C5508;
L_088C5508:;
    v0 = s5 + sp;
    goto L_088C550C;
L_088C550C:;
    v1 = LD_U8(v0+72);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = D_08AEC80C - (-14324); goto L_088C5EC8; }
    goto L_088C5518;
L_088C5518:;
    v0 = D_08AEC814 - (-14316);
    f0 = BITSF(LD32(v0-14316));
    goto L_088C5520;
L_088C5520:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(s3+248); goto L_088C553C; }
    goto L_088C5528;
L_088C5528:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = LD32(s3+248); goto L_088C5554; }
    goto L_088C5538;
L_088C5538:;
    v0 = LD32(s3+248);
    goto L_088C553C;
L_088C553C:;
    v1 = 0x80000u;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    v0 = v0 | v1;
    ST32(s3+248, v0);
    {u32 a_=s3+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a2 = LD32(s3+248);
    goto L_088C5554;
L_088C5554:;
    v0 = 0x80000u;
    v0 = a2 & v0;
    cnd_ = v0 == 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_088C55B8; }
    goto L_088C5564;
L_088C5564:;
    {u32 a_=t0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s3+(112);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {u32 a_=sp+(1088);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEC818 - (-14312);
    f0 = BITSF(LD32(v0-14312));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088C5870; }
    goto L_088C55B8;
L_088C55B8:;
    cnd_ = a0 == 0;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C5694; }
    goto L_088C55C0;
L_088C55C0:;
    v0 = D_08AEC81C - (-14308);
    f0 = BITSF(LD32(v0-14308));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    if (cnd_) { goto L_088C5698; }
    goto L_088C55D8;
L_088C55D8:;
    fcc = FCMP(f26, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088C5698; }
    goto L_088C55E8;
L_088C55E8:;
    {u32 a_=t0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {u32 a_=sp+(1104);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    v0 = D_08AEC820 - (-14304);
    f0 = BITSF(LD32(v0-14304));
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1120);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v0 = FBITS(f0);
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=t0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(976);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+8, v0);
    ST32(sp+12, v1);
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=v[16];float t0=vr0;float d0=s0/t0;vr8=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    goto L_088C5694;
L_088C5694:;
    {float s0=vr8;float s1=vr9;float s2=vr10;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    goto L_088C5698;
L_088C5698:;
    f2 = BITSF(0);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088C580C; }
    goto L_088C56B8;
L_088C56B8:;
    v1 = v0 + 0;
    {u32 a_=sp+(1136);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = D_08AEC824 - (-14300);
    f4 = BITSF(LD32(v0-14300));
    {u32 a_=sp+(1152);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    v0 = (a1 >> 25) & 0x1;
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088C580C; }
    goto L_088C5710;
L_088C5710:;
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));} goto L_088C5810; }
    goto L_088C5720;
L_088C5720:;
    fcc = FCMP(f26, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));} goto L_088C5810; }
    goto L_088C5730;
L_088C5730:;
    cnd_ = a0 != 0;
    if (cnd_) { {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));} goto L_088C5810; }
    goto L_088C5738;
L_088C5738:;
    {u32 a_=t0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));} goto L_088C5810; }
    goto L_088C5758;
L_088C5758:;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    v1 = FBITS(f3);
    {u32 a_=sp+(1168);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v1);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=t0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1168);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;v[12]=d0;v[13]=d1;v[14]=d2;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    if (cnd_) { goto L_088C57B0; }
    goto L_088C57A0;
L_088C57A0:;
    {u32 a_=sp+(976);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[16];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C57B0;
L_088C57B0:;
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    v0 = D_08AEC828 - (-14296);
    f0 = BITSF(LD32(v0-14296));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(512);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C5870; }
    goto L_088C57D0;
L_088C57D0:;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f1 = BITSF(v1);
    {u32 a_=sp+(1184);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = f1 * f4;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    goto L_088C580C;
L_088C580C:;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    goto L_088C5810;
L_088C5810:;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    v0 = D_08AEC7EC - (-14356);
    if (cnd_) { goto L_088C5834; }
    goto L_088C5824;
L_088C5824:;
    {u32 a_=sp+(976);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C5834;
L_088C5834:;
    f1 = BITSF(LD32(v0-14356));
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = (a1 >> 24) & 0x1;
    if (cnd_) { goto L_088C5870; }
    goto L_088C5850;
L_088C5850:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C5860; }
    goto L_088C5858;
L_088C5858:;
    cnd_ = a0 == 0;
    if (cnd_) { f20 = f20 * f0; goto L_088C5860; }
    goto L_088C5860;
L_088C5860:;
    fcc = FCMP(f25, f20, 12);
    cnd_ = fcc;
    v1 = LD32(sp+848);
    if (cnd_) { goto L_088C4F90; }
    goto L_088C5870;
L_088C5870:;
    {u32 a_=s3+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s3+(224);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    a2 = (a2 >> 7) & 0x1;
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+516);
    a0 = LD32(sp+520);
    a1 = LD32(sp+524);
    v0 = LD32(sp+512);
    ST32(s3+164, v1);
    ST32(s3+160, v0);
    ST32(s3+168, a0);
    cnd_ = a2 == 0;
    ST32(s3+172, a1);
    if (cnd_) { goto L_088C5EB4; }
    goto L_088C58A8;
L_088C58A8:;
    v0 = LD32(s3+276);
    f20 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f20 = f0; goto L_088C58C4; }
    goto L_088C58C4;
L_088C58C4:;
    a0 = s3 + 0;
    v0 = func_088C4490(a0);
    goto L_088C58CC;
L_088C58CC:;
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    s1 = v0 + 0;
    v0 = D_08AEC804 - (-14332);
    f0 = BITSF(LD32(v0-14332));
    {u32 a_=sp+(1200);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = D_08AEC7EC - (-14356);
    a0 = FBITS(f0);
    {vr4=BITSF(a0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    f0 = BITSF(LD32(v0-14356));
    {u32 a_=sp+(1216);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a1 = 1;
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s3+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+516);
    a2 = LD32(sp+520);
    a3 = LD32(sp+524);
    v0 = LD32(sp+512);
    ST32(s3+164, v1);
    {u32 a_=sp+(1216);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    a0 = s3 + 0;
    ST32(s3+160, v0);
    s2 = s3 + 388;
    ST32(s3+168, a2);
    ST32(s3+172, a3);
    {u32 a_=s1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s3+(208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C5964;
L_088C5964:;
    a0 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C742C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C596C;
L_088C596C:;
    a0 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C7D78(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5974;
L_088C5974:;
    a0 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C794C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C597C;
L_088C597C:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C8848(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5988;
L_088C5988:;
    a0 = LD32(s3+388);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_088C59A8; }
    goto L_088C5994;
L_088C5994:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C599C;
L_088C599C:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088C5994; }
    goto L_088C59A4;
L_088C59A4:;
    ST32(s2, 0);
    goto L_088C59A8;
L_088C59A8:;
    v0 = D_08AEC82C - (-14292);
    {u32 a_=sp+(1232);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0-14292));
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s3 + 0;
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=s3+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a1 = 0 + 0;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s3+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C59E8;
L_088C59E8:;
    {u32 a_=s1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s3+(144);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {u32 a_=sp+(1248);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v0=FBITS(vr0);}
    {v[12]=BITSF(v0);}
    {float s0=v[12];float s1=v[12];float s2=v[12];float s3=v[12];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=v[12];vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+512);
    v1 = LD32(sp+516);
    a0 = LD32(sp+520);
    a1 = LD32(sp+524);
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    ST32(s3+144, v0);
    ST32(s3+148, v1);
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    ST32(s3+152, a0);
    cnd_ = !((vfpu_cc >> 4) & 1);
    ST32(s3+156, a1);
    if (cnd_) { goto L_088C5A5C; }
    goto L_088C5A4C;
L_088C5A4C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C5A5C;
L_088C5A5C:;
    {v0=FBITS(vr8);}
    f1 = BITSF(v0);
    v0 = D_08AEC810 - (-14320);
    f0 = BITSF(LD32(v0-14320));
    f6 = BITSF(0);
    f0 = f20 * f0;
    f1 = f1 - f0;
    fcc = FCMP(f6, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC830 - (-14288);
    if (cnd_) { goto L_088C5E6C; }
    goto L_088C5A88;
L_088C5A88:;
    f2 = f20 * f20;
    v0 = D_08AEC7F0 - (-14352);
    f0 = BITSF(LD32(v0-14352));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_088C5AA4; }
    goto L_088C5AA4;
L_088C5AA4:;
    f0 = f1 * f0;
    {u32 a_=sp+(1264);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+496, FBITS(f6));
    {u32 a_=sp+(1280);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1264);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    t0 = LD32(sp+496);
    {u32 a_=sp+(1328);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1296);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2208);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f4 = BITSF(LD32(sp+516));
    f0 = BITSF(LD32(sp+520));
    f3 = BITSF(LD32(sp+512));
    f1 = BITSF(FBITS(f4) ^ 0x80000000u);
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+500, FBITS(f0));
    f5 = BITSF(FBITS(f3) ^ 0x80000000u);
    {u32 a_=sp+(1312);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+504, FBITS(f1));
    {u32 a_=sp+(1808);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+496, FBITS(f2));
    {u32 a_=sp+(1552);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    a1 = LD32(sp+500);
    ST32(sp+500, FBITS(f6));
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {u32 a_=sp+(1824);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a2 = LD32(sp+504);
    v1 = LD32(sp+496);
    {u32 a_=sp+(1840);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = LD32(sp+500);
    {u32 a_=sp+(2160);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(2176);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=sp+(1568);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1584);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(sp+504, FBITS(f3));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    ST32(sp+496, FBITS(f4));
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+500, FBITS(f5));
    {u32 a_=sp+(2192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    a0 = LD32(sp+508);
    ST32(sp+720, t0);
    {u32 a_=sp+(2176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    ST32(sp+728, a2);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[92]=d0;v[93]=d1;v[94]=d2;v[95]=d3;}
    ST32(sp+724, a1);
    {u32 a_=sp+(2208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    ST32(sp+732, a0);
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    a3 = LD32(sp+504);
    ST32(sp+740, v0);
    {u32 a_=sp+(720);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    v0 = LD32(sp+496);
    ST32(sp+504, FBITS(f6));
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    ST32(sp+736, v1);
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    ST32(sp+744, a3);
    {u32 a_=sp+(1792);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+748, a0);
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[28];float s1=v[29];float s2=v[30];float s3=v[31];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    v1 = LD32(sp+500);
    ST32(sp+752, v0);
    {u32 a_=sp+(736);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    v0 = LD32(sp+504);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[108]=d0;v[109]=d1;v[110]=d2;v[111]=d3;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(sp+756, v1);
    {u32 a_=sp+(1856);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    ST32(sp+760, v0);
    {u32 a_=sp+(1600);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(1872);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    ST32(sp+764, a0);
    {u32 a_=sp+(1888);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1904);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(1616);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(752);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1616);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1920);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(1936);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1936);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1552);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1808);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1408);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(1664);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(1424);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1680);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1984);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(2000);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(1632);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1648);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1952);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1968);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(1456);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(1696);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(1712);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(2016);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(2032);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(1472);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(1728);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(1488);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(1744);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(1504);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(1520);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(1760);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(2080);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(1776);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(1504);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1760);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(2048);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(2064);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(2096);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(2080);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s3+(0);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(32);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float t0=v[24];float t1=v[25];float t2=v[26];float o0=0;o0+=v[32]*t0;o0+=v[36]*t1;o0+=v[40]*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=v[41]*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=v[42]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+496);
    v1 = LD32(sp+500);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    ST32(sp+768, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    v0 = LD32(sp+504);
    {float t0=vr8;float t1=vr9;float t2=vr10;float o0=0;o0+=v[32]*t0;o0+=v[36]*t1;o0+=v[40]*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=v[41]*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=v[42]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+772, v1);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    v1 = LD32(sp+508);
    ST32(sp+776, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[32]*t0;o0+=v[36]*t1;o0+=v[40]*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=v[41]*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=v[42]*t2;vr0=o0;vr1=o1;vr2=o2;}
    v0 = LD32(sp+416);
    ST32(sp+780, v1);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v1 = LD32(sp+420);
    ST32(sp+784, v0);
    {u32 a_=sp+(1568);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1824);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+424);
    ST32(sp+788, v1);
    t1 = sp + 720;
    a2 = sp + 768;
    v1 = LD32(sp+428);
    ST32(sp+792, v0);
    t0 = sp + 816;
    v0 = LD32(sp+304);
    ST32(sp+796, v1);
    ST32(sp+800, v0);
    v1 = LD32(sp+308);
    v0 = LD32(sp+312);
    ST32(sp+804, v1);
    v1 = LD32(sp+316);
    ST32(sp+808, v0);
    ST32(sp+812, v1);
    goto L_088C5DA8;
L_088C5DA8:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(t1, v0);
    a2 = a2 + 16;
    t1 = t1 + 16;
    ST32(t1-12, v1);
    ST32(t1-8, a0);
    cnd_ = a2 != t0;
    ST32(t1-4, a1);
    if (cnd_) { goto L_088C5DA8; }
    goto L_088C5DD4;
L_088C5DD4:;
    {u32 a_=sp+(736);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];float t1=v[13];float t2=v[14];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[12]=d0;v[13]=d1;v[14]=d2;}
    {u32 a_=sp+(752);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr8=d0;vr9=d1;vr10=d2;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;v[20]=(float)1;v[21]=(float)1;v[22]=(float)1;v[23]=(float)1;}
    {u32 a_=sp+(720);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[16]=sum;}
    {float s0=v[24];float s1=v[25];float s2=v[26];float t0=vr0;float t1=vr1;float t2=vr2;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(2112);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=s3+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=s3+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=v[16];float d0=sqrtf(s0);v[16]=d0;}
    {float s0=v[20];float t0=v[16];float d0=s0/t0;vr4=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr4;v[12]=s0*t0;v[13]=s1*t0;v[14]=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    {v[36]=BITSF(v0);}
    {float s0=v[36];float s1=v[36];float s2=v[36];float s3=v[36];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[36];vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=s3+(16);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;vr8=d0;vr9=d1;vr10=d2;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {float s0=v[20];float t0=vr0;float d0=s0/t0;vr4=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=s3+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = LD32(sp+500);
    a0 = LD32(sp+504);
    a1 = LD32(sp+508);
    v0 = LD32(sp+496);
    ST32(s3+4, v1);
    ST32(s3, v0);
    ST32(s3+8, a0);
    ST32(s3+12, a1);
    v0 = D_08AEC830 - (-14288);
    goto L_088C5E6C;
L_088C5E6C:;
    f0 = BITSF(LD32(v0-14288));
    {u32 a_=s3+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2128);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;vr1=d1;vr2=d2;}
    a0 = s3 + 0;
    {u32 a_=s3+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C909C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5E98;
L_088C5E98:;
    a0 = s3 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088C2E14(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C5EA0;
L_088C5EA0:;
    a0 = sp + 32;
    goto L_088C5EA4;
L_088C5EA4:;
    { u64 r_ = func_088B18F4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C5EAC;
L_088C5EAC:;
    goto L_088C4EE8;
L_088C5EB4:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C5EC0;
L_088C5EC0:;
    a0 = sp + 32;
    goto L_088C5EA4;
L_088C5EC8:;
    f0 = BITSF(LD32(v1-14324));
    goto L_088C5520;
L_088C5ED0:;
    v0 = LD32(v1+64);
    a0 = (v0 >> 4) & 0x1;
    goto L_088C5508;
L_088C5EDC:;
    {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    goto L_088C5EE0;
L_088C5EE0:;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {a0=FBITS(vr0);}
    f1 = BITSF(a0);
    {a0=FBITS(vr4);}
    f2 = BITSF(a0);
    v0 = s0 + sp;
    v1 = s5 + sp;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a0 = s1 << 5;
    if (cnd_) { goto L_088C5364; }
    goto L_088C5F18;
L_088C5F18:;
    v0 = LD_U8(v0+72);
    v1 = LD_U8(v1+72);
    v0 = v0 ^ v1;
    if (v0 == 0) s5 = a0;
    goto L_088C5364;
L_088C5F2C:;
    a2 = v0 + 0;
    goto L_088C5870;
L_088C5F34:;
    f0 = BITSF(LD32(a0-14352));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = LD32(s3+248); goto L_088C528C; }
    goto L_088C5F48;
L_088C5F48:;
    f0 = f1 * f22;
    f0 = f0 - f27;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_088C5F60; }
    goto L_088C5F60;
L_088C5F60:;
    v0 = LD32(sp+852);
    cnd_ = v0 == 0;
    f22 = f0;
    if (cnd_) { goto L_088C5FC0; }
    goto L_088C5F6C;
L_088C5F6C:;
    v1 = LD32(v0+248);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    a1 = LD32(sp+852);
    if (cnd_) { goto L_088C5F98; }
    goto L_088C5F7C;
L_088C5F7C:;
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a0 = LD32(sp+852);
    if (cnd_) { goto L_088C5F98; }
    goto L_088C5F88;
L_088C5F88:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+248, v1);
    ST32(a0+352, FBITS(f2));
    a1 = LD32(sp+852);
    goto L_088C5F98;
L_088C5F98:;
    a0 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088CA220(a0, a1, t1, t2, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5FA0;
L_088C5FA0:;
    a0 = LD32(sp+852);
    a1 = s3 + 0;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088CA220(a0, a1, 0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C5FAC;
L_088C5FAC:;
    v1 = LD32(sp+852);
    v0 = LD32(v1+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C5FC8; }
    goto L_088C5FC0;
L_088C5FC0:;
    a2 = LD32(s3+248);
    goto L_088C528C;
L_088C5FC8:;
    a0 = s3 + 0;
    v0 = func_088C4490(a0);
    goto L_088C5FD0;
L_088C5FD0:;
    a2 = LD32(s3+248);
    {u32 a_=v0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = (a2 >> 9) & 0x1;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a0=FBITS(vr0);}
    f0 = BITSF(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C528C; }
    goto L_088C5FF4;
L_088C5FF4:;
    fcc = FCMP(f0, f26, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+852);
    if (cnd_) { goto L_088C528C; }
    goto L_088C6004;
L_088C6004:;
    a0 = s3 + 0;
    a1 = LD32(v0+384);
    func_088CA120(a0, a1);
    goto L_088C6010;
L_088C6010:;
    a2 = LD32(s3+248);
    goto L_088C528C;
L_088C6018:;
    cnd_ = s0 == s3;
    if (cnd_) { s1 = LD32(s1+4); goto L_088C5264; }
    goto L_088C6020;
L_088C6020:;
    v1 = LD32(s0+356);
    v0 = LD32(s3+360);
    cnd_ = v1 == v0;
    v1 = 0x20000u;
    if (cnd_) { goto L_088C5260; }
    goto L_088C6030;
L_088C6030:;
    v0 = LD32(s0+248);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s1+4); goto L_088C5264; }
    goto L_088C6040;
L_088C6040:;
    v1 = LD32(s0+272);
    cnd_ = v1 == 0;
    v0 = 3;
    if (cnd_) { goto L_088C6054; }
    goto L_088C604C;
L_088C604C:;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(s0+276); goto L_088C6158; }
    goto L_088C6054;
L_088C6054:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    func_088C3A64(a0, a1);
    goto L_088C6060;
L_088C6060:;
    v0 = LD32(sp+496);
    v1 = LD32(sp+508);
    a0 = s0 + 208;
    ST32(sp+608, v0);
    a3 = sp + 640;
    a2 = s0 + 0;
    v0 = LD32(sp+500);
    ST32(sp+620, v1);
    t0 = s0 + 48;
    ST32(sp+612, v0);
    v0 = LD32(sp+504);
    ST32(sp+616, v0);
    v0 = LD32(s0+208);
    ST32(sp+624, v0);
    v1 = LD32(a0+4);
    ST32(sp+628, v1);
    v0 = LD32(a0+8);
    ST32(sp+632, v0);
    v1 = LD32(a0+12);
    ST32(sp+636, v1);
    goto L_088C60B0;
L_088C60B0:;
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
    if (cnd_) { goto L_088C60B0; }
    goto L_088C60DC;
L_088C60DC:;
    s6 = sp + 336;
    a0 = s6 + 0;
    a1 = sp + 608;
    a2 = sp + 512;
    a3 = sp + 824;
    t0 = s2 + 0;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B2FF0(a0, a1, a2, a3, t0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; });
    goto L_088C60F8;
L_088C60F8:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(s1+4); goto L_088C5264; }
    goto L_088C6100;
L_088C6100:;
    {u32 a_=sp+(496);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr8=sum;}
    {u32 a_=sp+(976);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a3 = 1;
    ST32(sp+852, s0);
    ST32(sp+820, a3);
    {float s0=vr8;float d0=sqrtf(s0);vr8=d0;}
    ST8(sp+72, 0);
    ST32(sp+64, 0);
    {float s0=v[12];float t0=vr8;float d0=s0/t0;vr0=d0;}
    ST32(sp+68, fp);
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+496);
    v1 = LD32(sp+500);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    v0 = LD32(sp+504);
    v1 = LD32(sp+508);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    goto L_088C5260;
L_088C6158:;
    cnd_ = a1 == 0;
    if (cnd_) { s1 = LD32(s1+4); goto L_088C5264; }
    goto L_088C6160;
L_088C6160:;
    a1 = LD32(a1+32);
    cnd_ = a1 == 0;
    s4 = sp + 688;
    if (cnd_) { goto L_088C5260; }
    goto L_088C616C;
L_088C616C:;
    a0 = s4 + 0;
    func_088B6508(a0, a1);
    goto L_088C6174;
L_088C6174:;
    a0 = s4 + 0;
    func_088B6518(a0);
    goto L_088C617C;
L_088C617C:;
    s5 = sp + 432;
    s6 = sp + 336;
    a1 = s5 + 0;
    goto L_088C6188;
L_088C6188:;
    a0 = s4 + 0;
    v0 = func_088B657C(a0, a1);
    goto L_088C6190;
L_088C6190:;
    a3 = s0 + 192;
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = s5 + 0;
    if (cnd_) { goto L_088C62F8; }
    goto L_088C61A0;
L_088C61A0:;
    {u32 a_=s0+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1040);v[44]=BITSF(LD32(a_+0));v[45]=BITSF(LD32(a_+4));v[46]=BITSF(LD32(a_+8));v[47]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=a1+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(992);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {float t0=v[48];float t1=v[49];float t2=v[50];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    a2 = a2 + 1;
    a0 = a2 < 0x3u;
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+496);
    ST32(a1, v0);
    v1 = LD32(sp+500);
    ST32(a1+4, v1);
    v0 = LD32(sp+504);
    ST32(a1+8, v0);
    v1 = LD32(sp+508);
    ST32(a1+12, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 16;
    if (cnd_) { goto L_088C61A0; }
    goto L_088C6214;
L_088C6214:;
    f12 = BITSF(LD32(sp+824));
    a0 = s6 + 0;
    a1 = sp + 512;
    a2 = s5 + 0;
    a3 = s2 + 0;
    t0 = sp + 828;
    t1 = sp + 704;
    t2 = 1;
    ST32(sp+828, 0);
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B3784(a0, a1, a2, a3, t0, t1, t2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; });
    goto L_088C623C;
L_088C623C:;
    fcc = FCMP(f0, f25, 12);
    cnd_ = fcc;
    f4 = f0;
    if (cnd_) { goto L_088C62F4; }
    goto L_088C624C;
L_088C624C:;
    f0 = BITSF(LD32(sp+824));
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    v0 = LD_U8(sp+704);
    if (cnd_) { goto L_088C62A0; }
    goto L_088C6260;
L_088C6260:;
    fcc = FCMP(f4, f0, 2);
    cnd_ = !fcc;
    {u32 a_=sp+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C62E4; }
    goto L_088C6270;
L_088C6270:;
    {u32 a_=sp+(48);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr4);}
    {v1=FBITS(vr0);}
    f1 = BITSF(v0);
    f2 = BITSF(v1);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = LD_U8(sp+704);
    if (cnd_) { goto L_088C62E4; }
    goto L_088C62A0;
L_088C62A0:;
    a0 = s4 + 0;
    ST32(sp+824, FBITS(f4));
    ST32(sp+852, s0);
    ST8(sp+72, v0);
    v0 = func_088B66B8(a0);
    goto L_088C62B4;
L_088C62B4:;
    a3 = 1;
    v1 = LD32(sp+500);
    ST32(sp+64, v0);
    v0 = LD32(sp+496);
    ST32(sp+52, v1);
    ST32(sp+48, v0);
    v1 = LD32(sp+508);
    v0 = LD32(sp+504);
    ST32(sp+820, a3);
    ST32(sp+56, v0);
    ST32(sp+60, v1);
    ST32(sp+68, fp);
    goto L_088C62E4;
L_088C62E4:;
    a0 = s4 + 0;
    func_088B6524(a0);
    goto L_088C62EC;
L_088C62EC:;
    a1 = s5 + 0;
    goto L_088C6188;
L_088C62F4:;
    ST32(sp+824, FBITS(f21));
    goto L_088C62F8;
L_088C62F8:;
    a0 = s4 + 0;
    func_088B6510();
    goto L_088C6300;
L_088C6300:;
    s1 = LD32(s1+4);
    goto L_088C5264;
L_088C6308:;
    s2 = s3 + 328;
    ST32(s3+328, FBITS(f23));
    s0 = s2 + 0;
    ST32(s2+8, FBITS(f23));
    ST32(s2+16, FBITS(f23));
    ST32(s2+4, FBITS(f24));
    ST32(s2+12, FBITS(f24));
    ST32(s2+20, FBITS(f24));
    a0 = LD32(sp+2144);
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088C63CC; }
    goto L_088C6334;
L_088C6334:;
    s4 = sp + 320;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    goto L_088C633C;
L_088C633C:;
    {u32 a_=sp+(864);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = FBITS(f20);
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    v0 = LD32(s3+280);
    v1 = s1 << 4;
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = v0 + v1;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=v0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    a0 = s0 + 0;
    a1 = s4 + 0;
    s1 = s1 + 1;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    f0 = BITSF(LD32(v0));
    ST32(sp+320, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+324, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    ST32(sp+328, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C639C;
L_088C639C:;
    a0 = s0 + 0;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    a1 = s4 + 0;
    ST32(sp+320, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+324, FBITS(f1));
    ST32(sp+328, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C63C0;
L_088C63C0:;
    v0 = s1 < s7;
    cnd_ = v0 != 0;
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C633C; }
    goto L_088C63CC;
L_088C63CC:;
    v0 = D_08AEC7EC - (-14356);
    f12 = BITSF(LD32(v0-14356));
    s1 = s3 + 288;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B8958(a0, a1, 0, 0, 0, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C63E4;
L_088C63E4:;
    v0 = LD32(s1+24);
    v1 = D_08AEC7F0 - (-14352);
    cnd_ = v0 == 0;
    f21 = BITSF(LD32(v1-14352));
    if (cnd_) { goto L_088C6568; }
    goto L_088C63F4;
L_088C63F4:;
    {u32 a_=sp+(880);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = FBITS(f20);
    {vr0=BITSF(a0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(880);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    v0 = LD32(s3+208);
    v1 = LD32(s3+212);
    a2 = LD32(s3+216);
    a3 = LD32(s3+220);
    a0 = sp + 416;
    a1 = s3 + 0;
    ST32(sp+304, v0);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+308, v1);
    ST32(sp+312, a2);
    ST32(sp+316, a3);
    func_088C3A64(a0, a1);
    goto L_088C6448;
L_088C6448:;
    a3 = sp + 368;
    v0 = LD32(sp+416);
    v1 = LD32(sp+424);
    a2 = s3 + 0;
    ST32(sp+336, v0);
    t0 = s3 + 48;
    v0 = LD32(sp+420);
    ST32(sp+344, v1);
    ST32(sp+340, v0);
    v0 = LD32(sp+428);
    v1 = LD32(sp+304);
    ST32(sp+348, v0);
    v0 = LD32(sp+308);
    ST32(sp+352, v1);
    ST32(sp+356, v0);
    v1 = LD32(sp+312);
    v0 = LD32(sp+316);
    ST32(sp+360, v1);
    ST32(sp+364, v0);
    goto L_088C6494;
L_088C6494:;
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
    if (cnd_) { goto L_088C6494; }
    goto L_088C64C0;
L_088C64C0:;
    s0 = LD32(s1+24);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = D_08AEC7F0 - (-14352); goto L_088C656C; }
    goto L_088C64CC;
L_088C64CC:;
    s5 = sp + 432;
    s6 = sp + 336;
    fp = sp + 480;
    s4 = D_08B2BDB4 - (-16972);
    a1 = LD32(s0);
    goto L_088C64E0;
L_088C64E0:;
    a0 = s5 + 0;
    func_088B4AC4(a0, a1);
    goto L_088C64E8;
L_088C64E8:;
    t0 = s0 + 8;
    f12 = f21;
    a0 = s6 + 0;
    a1 = sp + 16;
    a2 = s5 + 0;
    a3 = sp + 416;
    t1 = fp + 0;
    t2 = 1;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B3784(a0, a1, a2, a3, t0, t1, t2, f12); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; });
    goto L_088C650C;
L_088C650C:;
    v0 = D_08AEC7F4 - (-14348);
    f2 = f0;
    f1 = f0 - f21;
    f0 = BITSF(LD32(v0-14348));
    fcc = FCMP(f2, f0, 12);
    v1 = FBITS(f1);
    cnd_ = fcc;
    v0 = (v1 >> 0) & 0x7fffffff;
    if (cnd_) { goto L_088C6698; }
    goto L_088C652C;
L_088C652C:;
    v1 = D_08AEC7E0 - (-14368);
    f0 = BITSF(LD32(v1-14368));
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+820);
    if (cnd_) { goto L_088C661C; }
    goto L_088C6548;
L_088C6548:;
    a0 = s4 - 16972;
    v1 = v0 << 5;
    v0 = v0 < 0x8u;
    cnd_ = v0 != 0;
    s1 = v1 + sp;
    if (cnd_) { goto L_088C65A4; }
    goto L_088C655C;
L_088C655C:;
    s0 = LD32(s0+12);
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD32(s0); goto L_088C64E0; }
    goto L_088C6568;
L_088C6568:;
    v0 = D_08AEC7F0 - (-14352);
    goto L_088C656C;
L_088C656C:;
    f0 = BITSF(LD32(v0-14352));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    f22 = f20;
    if (cnd_) { goto L_088C5118; }
    goto L_088C6580;
L_088C6580:;
    f0 = f21 * f20;
    f1 = BITSF(0);
    f0 = f0 - f27;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088C5114; }
    goto L_088C659C;
L_088C659C:;
    f22 = f0;
    goto L_088C5118;
L_088C65A4:;
    a2 = LD32(s0);
    a1 = LD32(s4-16972);
    v1 = a2 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    a1 = a1 + v0;
    v0 = LD_U8(sp+480);
    a2 = (a2 >> 1) & 0x7fff;
    ST8(s1+72, v0);
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C65D0;
L_088C65D0:;
    a2 = LD32(sp+820);
    v0 = v0 & 0xffff;
    ST32(s1+64, v0);
    v1 = a2 << 5;
    v1 = v1 + sp;
    v0 = LD32(sp+416);
    a0 = v1 + 48;
    a1 = LD32(s0);
    ST32(v1+48, v0);
    a3 = a2 + 1;
    v0 = LD32(sp+420);
    ST32(v1+68, a1);
    ST32(a0+4, v0);
    v0 = LD32(sp+424);
    ST32(sp+820, a3);
    ST32(a0+8, v0);
    v0 = LD32(sp+428);
    ST32(a0+12, v0);
    goto L_088C655C;
L_088C661C:;
    fcc = FCMP(f2, f21, 12);
    cnd_ = !fcc;
    a0 = s4 - 16972;
    if (cnd_) { goto L_088C655C; }
    goto L_088C662C;
L_088C662C:;
    a2 = LD32(s0);
    a1 = LD32(s4-16972);
    f21 = f2;
    v1 = a2 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    a1 = a1 + v0;
    v0 = LD_U8(sp+480);
    a2 = (a2 >> 1) & 0x7fff;
    ST8(sp+72, v0);
    { rv_t r_ = func_08AA9C10(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C665C;
L_088C665C:;
    v0 = v0 & 0xffff;
    ST32(sp+64, v0);
    a3 = 1;
    v0 = LD32(s0);
    v1 = LD32(sp+416);
    ST32(sp+820, a3);
    ST32(sp+68, v0);
    v0 = LD32(sp+420);
    ST32(sp+48, v1);
    ST32(sp+52, v0);
    v1 = LD32(sp+424);
    v0 = LD32(sp+428);
    ST32(sp+56, v1);
    ST32(sp+60, v0);
    goto L_088C655C;
L_088C6698:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    a0 = s3 + 0;
    {u32 a_=s3+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    func_088CA168(a0);
    goto L_088C66A8;
L_088C66A8:;
    v0 = LD32(s3+248);
    v1 = 0x100000u;
    a0 = s6 + 0;
    v0 = v0 | v1;
    ST32(s3+248, v0);
    a1 = s5 + 0;
    a2 = sp + 816;
    a3 = sp + 496;
    v0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088B3E5C(a0, a1, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; });
    goto L_088C66CC;
L_088C66CC:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088C6748; }
    goto L_088C66D4;
L_088C66D4:;
    v0 = LD32(s3+248);
    v0 = (v0 >> 7) & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08AEC7FC - (-14340);
    if (cnd_) { goto L_088C6788; }
    goto L_088C66E4;
L_088C66E4:;
    v0 = D_08AEC7F8 - (-14344);
    f1 = BITSF(LD32(v0-14344));
    goto L_088C66EC;
L_088C66EC:;
    f0 = BITSF(LD32(sp+816));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = s3 + 0;
    if (cnd_) { goto L_088C6748; }
    goto L_088C6700;
L_088C6700:;
    v0 = D_08AEC800 - (-14336);
    f1 = BITSF(LD32(v0-14336));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088C6718; }
    goto L_088C6718;
L_088C6718:;
    {u32 a_=sp+(496);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(896);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = FBITS(f1);
    {vr0=BITSF(a0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {u32 a_=s3+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=s3+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a0 = s3 + 0;
    goto L_088C6748;
L_088C6748:;
    a1 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C6750;
L_088C6750:;
    {u32 a_=s3+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s3+(224);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    a0 = sp + 32;
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    a1 = LD32(sp+516);
    a2 = LD32(sp+520);
    v1 = LD32(sp+524);
    v0 = LD32(sp+512);
    ST32(s3+164, a1);
    ST32(s3+160, v0);
    ST32(s3+172, v1);
    ST32(s3+168, a2);
    goto L_088C5EA4;
L_088C6788:;
    f1 = BITSF(LD32(v0-14340));
    goto L_088C66EC;
L_088C6790:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    a2 = LD32(s3+248);
    {u32 a_=s3+(176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C5870;
L_088C67A0:;
    a2 = LD32(s3+248);
    goto L_088C5870;
L_088C67A8:;
    a0 = s3 + 0;
    {u32 a_=s3+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;func_088C909C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];});
    goto L_088C67B4;
L_088C67B4:;
    a0 = s3 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_088C2E14(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C67BC;
L_088C67BC:;
    a2 = LD32(s3+248);
    goto L_088C4D58;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 088C67C4 */
rv_t func_088C67C4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088C67C4:;
    sp = sp - 128;
    s1 = a1 + 0;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088C6984; }
    goto L_088C67E8;
L_088C67E8:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    goto L_088C67F4;
L_088C67F4:;
    a0 = s0 + 0;
    goto L_088C67F8;
L_088C67F8:;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_088C9D8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C680C;
L_088C680C:;
    a2 = s1 + 0;
    a3 = s0 + 0;
    t0 = s1 + 48;
    {u32 a_=sp+(96);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_088C6828;
L_088C6828:;
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
    if (cnd_) { goto L_088C6828; }
    goto L_088C6854;
L_088C6854:;
    a0 = s0 + 0;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_088C2E14(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C686C;
L_088C686C:;
    v0 = LD32(s0+276);
    cnd_ = v0 != 0;
    {u32 a_=sp+(96);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C688C; }
    goto L_088C6878;
L_088C6878:;
    sp = sp + 128;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;return (rv_t){ v0, v1, f0 }; }
L_088C688C:;
    {u32 a_=s0+(224);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=s0+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float t0=v[32];float t1=v[33];float t2=v[34];float t3=v[35];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=s0+(0);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=s0+(192);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float t0=v[24];float t1=v[25];float t2=v[26];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {float s0=v[20];float s1=v[21];float s2=v[22];float s3=v[23];float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    a0 = s0 + 0;
    a1 = 0 + 0;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    v1 = LD32(sp+20);
    a2 = LD32(sp+24);
    a3 = LD32(sp+28);
    v0 = LD32(sp+16);
    ST32(s0+212, v1);
    ST32(s0+208, v0);
    ST32(s0+216, a2);
    ST32(s0+220, a3);
    {u32 a_=s0+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v1 = LD32(sp+36);
    a3 = LD32(sp+44);
    v0 = LD32(sp+32);
    a2 = LD32(sp+40);
    ST32(s0+228, v1);
    ST32(s0+224, v0);
    ST32(s0+236, a3);
    ST32(s0+232, a2);
    { rv_t r_ = ({ v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr48=v[48];vr49=v[49];vr50=v[50];vr51=v[51];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C6920;
L_088C6920:;
    v1 = LD32(s0+276);
    v0 = LD32(v1);
    t0 = LD32(v0);
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088C6974; }
    goto L_088C6934;
L_088C6934:;
    t2 = LD32(s0+284);
    t1 = LD32(s0+280);
    goto L_088C693C;
L_088C693C:;
    v0 = a3 << 4;
    a1 = v0 + t1;
    v1 = LD32(a1);
    v0 = v0 + t2;
    a3 = a3 + 1;
    ST32(v0, v1);
    a2 = a3 < t0;
    v1 = LD32(a1+4);
    ST32(v0+4, v1);
    a0 = LD32(a1+8);
    ST32(v0+8, a0);
    v1 = LD32(a1+12);
    cnd_ = a2 != 0;
    ST32(v0+12, v1);
    if (cnd_) { goto L_088C693C; }
    goto L_088C6974;
L_088C6974:;
    v0 = LD32(s0+248);
    v0 = v0 | 0x8;
    ST32(s0+248, v0);
    goto L_088C6878;
L_088C6984:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_088C67F8; }
    goto L_088C6990;
L_088C6990:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(a0+248, v1);
    ST32(a0+352, 0);
    goto L_088C67F4;
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;
}

/* 088C69A0 */
rv_t func_088C69A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_088C69A0:;
    sp = sp - 112;
    s1 = a1 + 0;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088C69D4; }
    goto L_088C69C4;
L_088C69C4:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    v1 = LD32(a0+248);
    goto L_088C69D4;
L_088C69D4:;
    v0 = (v1 >> 5) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 4) & 0x1;
    if (cnd_) { goto L_088C6B08; }
    goto L_088C69E0;
L_088C69E0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_088C69F8; }
    goto L_088C69E8;
L_088C69E8:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+248, v1);
    ST32(s0+352, 0);
    goto L_088C69F4;
L_088C69F4:;
    v1 = LD32(s1);
    goto L_088C69F8;
L_088C69F8:;
    a2 = LD32(s0+276);
    ST32(s0+192, v1);
    v0 = LD32(s1+4);
    ST32(s0+196, v0);
    v1 = LD32(s1+8);
    ST32(s0+200, v1);
    v0 = LD32(s1+12);
    cnd_ = a2 == 0;
    ST32(s0+204, v0);
    if (cnd_) { goto L_088C6AF4; }
    goto L_088C6A1C;
L_088C6A1C:;
    v0 = LD32(s0+208);
    v1 = LD32(s0+212);
    a0 = LD32(s0+216);
    a1 = LD32(s0+220);
    ST32(s0+224, v0);
    {u32 a_=s0+(0);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=s0+(16);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    ST32(s0+228, v1);
    {u32 a_=s0+(32);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    ST32(s0+232, a0);
    {u32 a_=s0+(192);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    ST32(s0+236, a1);
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    a3 = 0 + 0;
    {u32 a_=a2+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[48]*t0;o0+=v[52]*t1;o0+=v[56]*t2;float o1=0;o1+=v[49]*t0;o1+=v[53]*t1;o1+=v[57]*t2;float o2=0;o2+=v[50]*t0;o2+=v[54]*t1;o2+=v[58]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    v0 = LD32(a2);
    a1 = LD32(sp+4);
    v1 = LD32(sp+8);
    a0 = LD32(sp+12);
    t2 = LD32(v0);
    v0 = LD32(sp);
    ST32(s0+212, a1);
    ST32(s0+208, v0);
    ST32(s0+216, v1);
    cnd_ = t2 == 0;
    ST32(s0+220, a0);
    if (cnd_) { goto L_088C6ADC; }
    goto L_088C6A9C;
L_088C6A9C:;
    t1 = LD32(s0+284);
    t0 = LD32(s0+280);
    goto L_088C6AA4;
L_088C6AA4:;
    v0 = a3 << 4;
    a1 = v0 + t0;
    v1 = LD32(a1);
    v0 = v0 + t1;
    a3 = a3 + 1;
    ST32(v0, v1);
    a2 = a3 < t2;
    v1 = LD32(a1+4);
    ST32(v0+4, v1);
    a0 = LD32(a1+8);
    ST32(v0+8, a0);
    v1 = LD32(a1+12);
    cnd_ = a2 != 0;
    ST32(v0+12, v1);
    if (cnd_) { goto L_088C6AA4; }
    goto L_088C6ADC;
L_088C6ADC:;
    v0 = LD32(s0+248);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = v0 | 0x8;
    ST32(s0+248, v0);
    { rv_t r_ = ({ v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr32=v[32];vr33=v[33];vr34=v[34];vr35=v[35];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C6AF4;
L_088C6AF4:;
    sp = sp + 112;
    { v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;return (rv_t){ v0, v1, f0 }; }
L_088C6B08:;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    func_088C3A04(a0, t1, t2, t3);
    goto L_088C6B1C;
L_088C6B1C:;
    a0 = D_08B2BE64 - (-16796);
    a0 = a0 - 16796;
    a1 = s0 + 0;
    func_08AB60C8(a0, a1);
    goto L_088C6B2C;
L_088C6B2C:;
    {u32 a_=sp+(80);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    goto L_088C69F4;
    v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;
}

/* 088C6B34 */
rv_t func_088C6B34(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_088C6B34:;
    sp = sp - 112;
    s1 = a1 + 0;
    {u32 a_=a0+(192);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];u32 k0_=(s0==t0)!=0;u32 k1_=(s1==t1)!=0;u32 k2_=(s2==t2)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|(k2_<<2)|((k0_|k1_|k2_)<<4)|((k0_&k1_&k2_)<<5);}
    cnd_ = !((vfpu_cc >> 5) & 1);
    s0 = a0 + 0;
    if (cnd_) { goto L_088C6CF0; }
    goto L_088C6B5C;
L_088C6B5C:;
    v0 = 1;
    goto L_088C6B60;
L_088C6B60:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C6BD4; }
    goto L_088C6B68;
L_088C6B68:;
    v1 = LD32(s0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 == 0;
    v0 = (v1 >> 5) & 0x1;
    if (cnd_) { goto L_088C6B8C; }
    goto L_088C6B78;
L_088C6B78:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    v1 = LD32(s0+248);
    v0 = (v1 >> 5) & 0x1;
    goto L_088C6B8C;
L_088C6B8C:;
    cnd_ = v0 == 0;
    v0 = (v1 >> 4) & 0x1;
    if (cnd_) { goto L_088C6CC0; }
    goto L_088C6B94;
L_088C6B94:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_088C6BAC; }
    goto L_088C6B9C;
L_088C6B9C:;
    v1 = (v1 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s0+248, v1);
    ST32(s0+352, 0);
    goto L_088C6BA8;
L_088C6BA8:;
    v1 = LD32(s1);
    goto L_088C6BAC;
L_088C6BAC:;
    a0 = LD32(s0+276);
    ST32(s0+192, v1);
    v0 = LD32(s1+4);
    ST32(s0+196, v0);
    v1 = LD32(s1+8);
    ST32(s0+200, v1);
    v0 = LD32(s1+12);
    cnd_ = a0 != 0;
    ST32(s0+204, v0);
    if (cnd_) { goto L_088C6BE4; }
    goto L_088C6BD0;
L_088C6BD0:;
    goto L_088C6BD4;
L_088C6BD4:;
    sp = sp + 112;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;return (rv_t){ v0, v1, f0 }; }
L_088C6BE4:;
    {u32 a_=s0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    v0 = LD32(s0+248);
    {u32 a_=s0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=s0+(192);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float t0=v[32];float t1=v[33];float t2=v[34];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(s0+248, v0);
    a0 = s0 + 0;
    a1 = 0 + 0;
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a3 = LD32(sp+12);
    a2 = LD32(sp+8);
    ST32(s0+224, v0);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    ST32(s0+228, v1);
    ST32(s0+236, a3);
    ST32(s0+208, v0);
    ST32(s0+212, v1);
    ST32(s0+220, a3);
    ST32(s0+232, a2);
    ST32(s0+216, a2);
    { rv_t r_ = ({ v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;__auto_type vr_t_ = func_088C9AE0(a0, a1); vr48=v[48];vr49=v[49];vr50=v[50];vr51=v[51];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C6C5C;
L_088C6C5C:;
    v1 = LD32(s0+276);
    v0 = LD32(v1);
    t0 = LD32(v0);
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088C6CB0; }
    goto L_088C6C70;
L_088C6C70:;
    t2 = LD32(s0+284);
    t1 = LD32(s0+280);
    goto L_088C6C78;
L_088C6C78:;
    v0 = a3 << 4;
    a1 = v0 + t1;
    v1 = LD32(a1);
    v0 = v0 + t2;
    a3 = a3 + 1;
    ST32(v0, v1);
    a2 = a3 < t0;
    v1 = LD32(a1+4);
    ST32(v0+4, v1);
    a0 = LD32(a1+8);
    ST32(v0+8, a0);
    v1 = LD32(a1+12);
    cnd_ = a2 != 0;
    ST32(v0+12, v1);
    if (cnd_) { goto L_088C6C78; }
    goto L_088C6CB0;
L_088C6CB0:;
    v0 = LD32(s0+248);
    v0 = v0 | 0x8;
    ST32(s0+248, v0);
    goto L_088C6BD0;
L_088C6CC0:;
    a0 = s0 + 0;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    func_088C3A04(a0, t1, t2, t3);
    goto L_088C6CD8;
L_088C6CD8:;
    a0 = D_08B2BE64 - (-16796);
    a0 = a0 - 16796;
    a1 = s0 + 0;
    func_08AB60C8(a0, a1);
    goto L_088C6CE8;
L_088C6CE8:;
    {u32 a_=sp+(80);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_088C6BA8;
L_088C6CF0:;
    v0 = 0 + 0;
    goto L_088C6B60;
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;
}

/* 088C6CF8 */
u32 func_088C6CF8(void)
{
    u32 v0 = 0;
L_088C6CF8:;
    v0 = 0 + 0;
    return v0;
}

/* 088C6D00 */
void func_088C6D00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C6D00:;
    sp = sp - 16;
    a1 = 1;
    s1 = a0 + 0;
    { rv_t r_ = func_088C9AE0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C6D1C;
L_088C6D1C:;
    v1 = LD32(s1+272);
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C6DA4; }
    goto L_088C6D2C;
L_088C6D2C:;
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { goto L_088C6DA4; }
    goto L_088C6D34;
L_088C6D34:;
    a0 = s1 + 0;
    func_088C6DC4(a0);
    goto L_088C6D3C;
L_088C6D3C:;
    a1 = LD32(s1+388);
    goto L_088C6D40;
L_088C6D40:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088C6D80; }
    goto L_088C6D48;
L_088C6D48:;
    v0 = LD32(s1+248);
    v0 = (v0 >> 7) & 0x1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088C6D90; }
    goto L_088C6D58;
L_088C6D58:;
    a1 = s0 + 0;
    goto L_088C6D5C;
L_088C6D5C:;
    a0 = s1 + 0;
    a2 = 0 + 0;
    func_088C7FC0(a0, a1, a2);
    goto L_088C6D68;
L_088C6D68:;
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088C6D5C; }
    goto L_088C6D74;
L_088C6D74:;
    a0 = s1 + 0;
    func_088C8DF8(a0);
    goto L_088C6D7C;
L_088C6D7C:;
    goto L_088C6D80;
L_088C6D80:;
    sp = sp + 16;
    return;
L_088C6D90:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    func_088C8848(a0, a1);
    goto L_088C6D9C;
L_088C6D9C:;
    goto L_088C6D74;
L_088C6DA4:;
    a0 = s1 + 0;
    func_088C742C(a0);
    goto L_088C6DAC;
L_088C6DAC:;
    a0 = s1 + 0;
    func_088C7D78(a0);
    goto L_088C6DB4;
L_088C6DB4:;
    a0 = s1 + 0;
    func_088C794C(a0);
    goto L_088C6DBC;
L_088C6DBC:;
    a1 = LD32(s1+388);
    goto L_088C6D40;
}

/* 088C6DC4 */
void func_088C6DC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 416);
L_088C6DC4:;
    sp = sp - 416;
    a1 = a0 + 0;
    s7 = a0 + 0;
    a0 = sp + 0;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    f23 = BITSF(0);
    func_088B4DF0(a0, a1);
    goto L_088C6E24;
L_088C6E24:;
    a0 = sp + 0;
    f0 = func_088B52A8(a0);
    goto L_088C6E2C;
L_088C6E2C:;
    a0 = sp + 0;
    f21 = f0;
    v0 = func_088B5298(a0);
    goto L_088C6E38;
L_088C6E38:;
    {float s0=v[0];float s1=v[1];float s2=v[2];v[0]=(float)0;v[1]=(float)0;v[2]=(float)0;}
    v0 = v0 < 0x2u;
    v0 = v0 ^ 0x1;
    ST32(sp+188, v0);
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    cnd_ = v0 != 0;
    f22 = f21 * f21;
    if (cnd_) { goto L_088C735C; }
    goto L_088C6E54;
L_088C6E54:;
    v0 = s7 + 288;
    s6 = LD32(v0+24);
    cnd_ = s6 == 0;
    ST32(sp+192, v0);
    if (cnd_) { goto L_088C7064; }
    goto L_088C6E64;
L_088C6E64:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    v0 = D_08B2BDB4 - (-16972);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    fp = v0 - 16972;
    a3 = LD32(s6);
    goto L_088C6E78;
L_088C6E78:;
    v0 = D_08B2BDB4 - (-16972);
    v1 = LD32(v0-16972);
    v0 = a3 >> 16;
    a0 = v0 << 3;
    a0 = a0 - v0;
    a0 = a0 << 3;
    a0 = a0 + v1;
    a1 = LD32(a0);
    t1 = LD32(fp+44);
    v1 = (a3 >> 1) & 0x7fff;
    a1 = a1 + v1;
    a3 = a3 & 0x1;
    v1 = 3;
    v0 = 1;
    a1 = a1 << 3;
    if (a3 != 0) v0 = v1;
    t1 = t1 + a1;
    v0 = v0 << 1;
    v1 = a3 << 2;
    v1 = v1 + t1;
    v0 = v0 + t1;
    a2 = LD32(a0+4);
    a1 = LD_U16(v1);
    a0 = LD_U16(v0);
    t0 = LD32(fp+56);
    a1 = a2 + a1;
    a0 = a2 + a0;
    v0 = 2;
    if (a3 != 0) v0 = 0;
    a1 = a1 << 4;
    a0 = a0 << 4;
    s3 = t0 + a1;
    s4 = t0 + a0;
    v0 = v0 << 1;
    {u32 a_=s3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s4+(0);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = v0 + t1;
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD_U16(v0);
    s0 = 0 + 0;
    a2 = a2 + v1;
    a2 = a2 << 4;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    s2 = t0 + a2;
    {u32 a_=s3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s2+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(272);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[12];float t0=v[0];float d0=s0/t0;v[4]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_088C6F54;
L_088C6F54:;
    a0 = sp + 0;
    v0 = func_088B5298(a0);
    goto L_088C6F5C;
L_088C6F5C:;
    v0 = s0 < v0;
    s1 = s0 << 4;
    a0 = sp + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_088C704C; }
    goto L_088C6F70;
L_088C6F70:;
    v0 = func_088B52A0(a0);
    goto L_088C6F78;
L_088C6F78:;
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    v0 = v0 + s1;
    a0 = v0 + 0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    t1 = sp + 144;
    t2 = sp + 180;
    a1 = sp + 128;
    a2 = s3 + 0;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = func_088B0E58(a0, a1, a2, a3, t0, t1, t2);
    goto L_088C6FA8;
L_088C6FA8:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    s5 = sp + 96;
    if (cnd_) { goto L_088C6F54; }
    goto L_088C6FB4;
L_088C6FB4:;
    f12 = BITSF(LD32(sp+180));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    v0 = LD_U8(sp+144);
    if (cnd_) { goto L_088C6F54; }
    goto L_088C6FC8;
L_088C6FC8:;
    f20 = f21 - f12;
    fcc = FCMP(f0, f20, 12);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C6F54; }
    goto L_088C6FD8;
L_088C6FD8:;
    cnd_ = !fcc;
    a0 = sp + 0;
    if (cnd_) { goto L_088C6F54; }
    goto L_088C6FE0;
L_088C6FE0:;
    v0 = func_088B52A0(a0);
    goto L_088C6FE8;
L_088C6FE8:;
    f0 = BITSF(LD32(sp+180));
    {u32 a_=sp+(96);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = v0 + s1;
    a0 = s7 + 0;
    a2 = s5 + 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=v0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a1 = LD32(s6);
    func_088CA2D0(a0, a1, a2, 0, 0, 0);
    goto L_088C7030;
L_088C7030:;
    a0 = s7 + 0;
    a2 = s5 + 0;
    f12 = f20;
    a1 = sp + 112;
    func_088C8F8C(a0, a1, a2, f12);
    goto L_088C7044;
L_088C7044:;
    goto L_088C6F54;
L_088C704C:;
    v0 = LD32(sp+188);
    cnd_ = v0 != 0;
    s0 = sp + 80;
    if (cnd_) { goto L_088C720C; }
    goto L_088C7058;
L_088C7058:;
    s6 = LD32(s6+12);
    goto L_088C705C;
L_088C705C:;
    cnd_ = s6 != 0;
    if (cnd_) { a3 = LD32(s6); goto L_088C6E78; }
    goto L_088C7064;
L_088C7064:;
    v0 = LD32(sp+192);
    s4 = LD32(v0+28);
    cnd_ = s4 == 0;
    v1 = D_08B2BDB4 - (-16972);
    if (cnd_) { goto L_088C71CC; }
    goto L_088C7074;
L_088C7074:;
    f20 = BITSF(0);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    s5 = v1 - 16972;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a2 = LD32(s4);
    goto L_088C7088;
L_088C7088:;
    a3 = LD32(s4+4);
    v0 = D_08B2BDB4 - (-16972);
    a0 = a2 >> 16;
    a1 = a3 >> 16;
    t0 = LD32(v0-16972);
    v1 = a1 << 3;
    v0 = a0 << 3;
    v0 = v0 - a0;
    v1 = v1 - a1;
    v0 = v0 << 3;
    v1 = v1 << 3;
    v0 = v0 + t0;
    v1 = v1 + t0;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    v0 = LD32(s5+56);
    a2 = a2 & 0xffff;
    a3 = a3 & 0xffff;
    a1 = a1 + a2;
    a0 = a0 + a3;
    a1 = a1 << 4;
    a0 = a0 << 4;
    s3 = v0 + a0;
    s2 = v0 + a1;
    s0 = 0 + 0;
    goto L_088C70EC;
L_088C70EC:;
    a0 = sp + 0;
    v0 = func_088B5298(a0);
    goto L_088C70F4;
L_088C70F4:;
    v0 = s0 < v0;
    s1 = sp + 160;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088C71C0; }
    goto L_088C7104;
L_088C7104:;
    v0 = func_088B52A0(a0);
    goto L_088C710C;
L_088C710C:;
    t0 = s0 << 4;
    t0 = t0 + v0;
    v0 = LD32(t0);
    a0 = s2 + 0;
    a1 = s3 + 0;
    ST32(sp+128, v0);
    a2 = sp + 128;
    a3 = s1 + 0;
    v1 = LD32(t0+4);
    s0 = s0 + 1;
    ST32(sp+132, v1);
    v0 = LD32(t0+8);
    ST32(sp+136, v0);
    v1 = LD32(t0+12);
    ST32(sp+140, v1);
    func_08835668(a0, a1, a2, a3);
    goto L_088C714C;
L_088C714C:;
    {u32 a_=sp+(160);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(128);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088C70EC; }
    goto L_088C7174;
L_088C7174:;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    fcc = FCMP(f0, f22, 12);
    a1 = s1 + 0;
    a2 = sp + 112;
    a0 = s7 + 0;
    cnd_ = !fcc;
    {float s0=v[0];float t0=v[0];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    if (cnd_) { goto L_088C70EC; }
    goto L_088C7190;
L_088C7190:;
    {v0=FBITS(v[0]);}
    f12 = BITSF(v0);
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(256);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C71B0; }
    goto L_088C71A4;
L_088C71A4:;
    {float s0=v[12];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088C71B0;
L_088C71B0:;
    f12 = f21 - f12;
    func_088C8F8C(a0, a1, a2, f12);
    goto L_088C71B8;
L_088C71B8:;
    goto L_088C70EC;
L_088C71C0:;
    s4 = LD32(s4+12);
    cnd_ = s4 != 0;
    if (cnd_) { a2 = LD32(s4); goto L_088C7088; }
    goto L_088C71CC;
L_088C71CC:;
    sp = sp + 416;
    return;
L_088C720C:;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = s2 + 0;
    a0 = s7 + 208;
    a1 = s0 + 0;
    t1 = sp + 176;
    t2 = sp + 184;
    v0 = func_088B0E58(a0, a1, a2, a3, t0, t1, t2);
    goto L_088C722C;
L_088C722C:;
    cnd_ = v0 == 0;
    if (cnd_) { s6 = LD32(s6+12); goto L_088C705C; }
    goto L_088C7234;
L_088C7234:;
    f0 = BITSF(LD32(sp+184));
    f1 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = LD_U8(sp+176);
    if (cnd_) { goto L_088C72D4; }
    goto L_088C724C;
L_088C724C:;
    cnd_ = v0 == 0;
    f20 = f23 - f0;
    if (cnd_) { goto L_088C72D4; }
    goto L_088C7254;
L_088C7254:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { s6 = LD32(s6+12); goto L_088C705C; }
    goto L_088C7264;
L_088C7264:;
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s7+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float d0=-s0;float d1=-s1;float d2=-s2;v[4]=d0;v[5]=d1;v[6]=d2;}
    a0 = s7 + 0;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    a2 = sp + 128;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a1 = LD32(s6);
    func_088CA2D0(a0, a1, a2, 0, 0, 0);
    goto L_088C72A8;
L_088C72A8:;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    f12 = f20;
    a0 = s7 + 0;
    a1 = sp + 160;
    a2 = sp + 128;
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088C72C4;
L_088C72C4:;
    func_088C8F8C(a0, a1, a2, f12);
    goto L_088C72CC;
L_088C72CC:;
    s6 = LD32(s6+12);
    goto L_088C705C;
L_088C72D4:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { s6 = LD32(s6+12); goto L_088C705C; }
    goto L_088C72E4;
L_088C72E4:;
    v0 = LD_U8(sp+176);
    cnd_ = v0 != 0;
    if (cnd_) { s6 = LD32(s6+12); goto L_088C705C; }
    goto L_088C72F0;
L_088C72F0:;
    f20 = f23 + f0;
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { s6 = LD32(s6+12); goto L_088C705C; }
    goto L_088C7304;
L_088C7304:;
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=s7+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a2 = s0 + 0;
    a0 = s7 + 0;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    a1 = LD32(s6);
    func_088CA2D0(a0, a1, a2, 0, 0, 0);
    goto L_088C7348;
L_088C7348:;
    a0 = s7 + 0;
    a2 = s0 + 0;
    f12 = f20;
    a1 = sp + 160;
    goto L_088C72C4;
L_088C735C:;
    s0 = sp + 96;
    a0 = s0 + 0;
    a1 = s7 + 0;
    func_088C3A64(a0, a1);
    goto L_088C736C;
L_088C736C:;
    a0 = s0 + 0;
    a1 = s7 + 0;
    f23 = BITSF(LD32(sp+96));
    func_088C3A64(a0, a1);
    goto L_088C737C;
L_088C737C:;
    f20 = BITSF(LD32(sp+100));
    a0 = s0 + 0;
    a1 = s7 + 0;
    func_088C3A64(a0, a1);
    goto L_088C738C;
L_088C738C:;
    fcc = FCMP(f20, f23, 12);
    f0 = BITSF(LD32(sp+104));
    cnd_ = !fcc;
    {u32 a_=sp+(336);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C740C; }
    goto L_088C739C;
L_088C739C:;
    fcc = FCMP(f0, f23, 12);
    cnd_ = !fcc;
    v0 = D_08AEC838 - (-14280);
    if (cnd_) { goto L_088C73FC; }
    goto L_088C73AC;
L_088C73AC:;
    f0 = BITSF(LD32(v0-14280));
    ST32(sp+80, FBITS(f0));
    goto L_088C73B4;
L_088C73B4:;
    {u32 a_=s7+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=s7+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=s7+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {u32 a_=sp+(80);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float t0=v[48];float t1=v[49];float t2=v[50];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    v0 = LD32(sp+104);
    v1 = LD32(sp+108);
    ST32(sp+88, v0);
    ST32(sp+92, v1);
    goto L_088C6E54;
L_088C73FC:;
    f23 = f0;
    f0 = BITSF(LD32(v0-14280));
    ST32(sp+88, FBITS(f0));
    goto L_088C73B4;
L_088C740C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = D_08AEC838 - (-14280);
    if (cnd_) { goto L_088C73FC; }
    goto L_088C741C;
L_088C741C:;
    f0 = BITSF(LD32(v0-14280));
    f23 = f20;
    ST32(sp+84, FBITS(f0));
    goto L_088C73B4;
}

/* 088C742C */
void func_088C742C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_088C742C:;
    sp = sp - 288;
    s5 = LD32(a0+312);
    cnd_ = s5 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088C7568; }
    goto L_088C7470;
L_088C7470:;
    v0 = a0 + 328;
    ST32(sp+144, v0);
    a1 = LD32(s5);
    goto L_088C747C;
L_088C747C:;
    v0 = D_08B2BDB4 - (-16972);
    v1 = LD32(v0-16972);
    v0 = v0 - 16972;
    t0 = LD32(v0+44);
    v0 = a1 >> 16;
    a2 = v0 << 3;
    a2 = a2 - v0;
    a2 = a2 << 3;
    a2 = a2 + v1;
    a3 = LD32(a2);
    v0 = (a1 >> 1) & 0x7fff;
    v1 = 2;
    a1 = a1 & 0x1;
    a3 = a3 + v0;
    if (a1 != 0) v1 = 0;
    a3 = a3 << 3;
    v0 = 3;
    a0 = 1;
    t0 = t0 + a3;
    if (a1 != 0) a0 = v0;
    v1 = v1 << 1;
    a1 = a1 << 2;
    v1 = v1 + t0;
    a1 = a1 + t0;
    a0 = a0 << 1;
    v0 = LD32(a2+4);
    a0 = a0 + t0;
    a3 = LD_U16(a1);
    a1 = LD_U16(v1);
    v1 = D_08B2BDB4 - (-16972);
    a2 = LD_U16(a0);
    v1 = v1 - 16972;
    a0 = LD32(v1+56);
    a3 = v0 + a3;
    a1 = v0 + a1;
    a3 = a3 << 4;
    v0 = v0 + a2;
    v0 = v0 << 4;
    a1 = a1 << 4;
    s3 = a0 + a3;
    a3 = LD32(sp+144);
    s7 = a0 + a1;
    s6 = a0 + v0;
    a1 = s6 + 0;
    a0 = s3 + 0;
    a2 = s7 + 0;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = func_088B8500(a0, a1, a2, a3);
    goto L_088C7548;
L_088C7548:;
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C75A4; }
    goto L_088C755C;
L_088C755C:;
    s5 = LD32(s5+12);
    goto L_088C7560;
L_088C7560:;
    cnd_ = s5 != 0;
    if (cnd_) { a1 = LD32(s5); goto L_088C747C; }
    goto L_088C7568;
L_088C7568:;
    sp = sp + 288;
    return;
L_088C75A4:;
    {u32 a_=s3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s6+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    a0 = LD32(s1+276);
    {u32 a_=sp+(128);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=s3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s7+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[32]=d0;v[33]=d1;v[34]=d2;}
    {u32 a_=sp+(128);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float t0=v[32];float t1=v[33];float t2=v[34];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[8];float t0=v[0];float d0=s0/t0;v[4]=d0;}
    {float s0=v[32];float s1=v[33];float s2=v[34];float t0=v[4];v[32]=s0*t0;v[33]=s1*t0;v[34]=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    v1 = LD32(a0);
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088C755C; }
    goto L_088C75FC;
L_088C75FC:;
    v0 = LD32(v1+8);
    goto L_088C7600;
L_088C7600:;
    {u32 a_=s1+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    s0 = s4 << 4;
    {u32 a_=s1+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    v0 = v0 + s0;
    {u32 a_=s1+(32);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v1 = D_08AEC83C - (-14276);
    {u32 a_=sp+(16);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(0);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    f2 = BITSF(LD32(v1-14276));
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[32];float t1=v[33];float t2=v[34];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    if (cnd_) { goto L_088C77A0; }
    goto L_088C7650;
L_088C7650:;
    a0 = LD32(s1+284);
    a1 = LD32(s1+280);
    a0 = s0 + a0;
    v1 = LD32(a0);
    s2 = a1 + s0;
    ST32(sp+32, v1);
    v0 = LD32(a0+4);
    ST32(sp+36, v0);
    v1 = LD32(a0+8);
    ST32(sp+40, v1);
    v0 = LD32(a0+12);
    ST32(sp+44, v0);
    {u32 a_=s2+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[8]=sum;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[8];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[8];float t0=v[8];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    if (cnd_) { goto L_088C76B8; }
    goto L_088C76A8;
L_088C76A8:;
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088C76B8;
L_088C76B8:;
    {v0=FBITS(v[8]);}
    f1 = BITSF(v0);
    f20 = BITSF(0);
    f21 = f1 + f1;
    fcc = FCMP(f21, f20, 2);
    cnd_ = fcc;
    fp = sp + 96;
    if (cnd_) { goto L_088C770C; }
    goto L_088C76D8;
L_088C76D8:;
    {u32 a_=s3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s2+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float d0=-s0;float d1=-s1;float d2=-s2;v[8]=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[32];float t1=v[33];float t2=v[34];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f22 = BITSF(v1);
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088C788C; }
    goto L_088C770C;
L_088C770C:;
    s0 = a1 + s0;
    {u32 a_=s3+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f20 = BITSF(0);
    {float s0=v[4];float s1=v[5];float s2=v[6];float d0=-s0;float d1=-s1;float d2=-s2;v[8]=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[32];float t1=v[33];float t2=v[34];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f22 = BITSF(v0);
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088C779C; }
    goto L_088C7748;
L_088C7748:;
    {u32 a_=s1+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    a0 = s1 + 208;
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {float s0=v[4];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[8];float t0=v[8];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    if (cnd_) { goto L_088C7780; }
    goto L_088C776C;
L_088C776C:;
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float t0=v[8];float d0=s0/t0;v[4]=d0;}
    {u32 a_=fp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=fp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088C7780;
L_088C7780:;
    {v0=FBITS(v[8]);}
    f0 = BITSF(v0);
    f21 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    a1 = fp + 0;
    if (cnd_) { goto L_088C77C0; }
    goto L_088C779C;
L_088C779C:;
    a0 = LD32(s1+276);
    goto L_088C77A0;
L_088C77A0:;
    v1 = LD32(a0);
    s4 = s4 + 1;
    v0 = LD32(v1);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_088C7600; }
    goto L_088C77B8;
L_088C77B8:;
    s5 = LD32(s5+12);
    goto L_088C7560;
L_088C77C0:;
    a2 = s3 + 0;
    a3 = s6 + 0;
    t0 = s7 + 0;
    t1 = sp + 0;
    t2 = sp + 112;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = func_088B0E58(a0, a1, a2, a3, t0, t1, t2);
    goto L_088C77E8;
L_088C77E8:;
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C779C; }
    goto L_088C77FC;
L_088C77FC:;
    v0 = LD_U8(sp);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+276); goto L_088C77A0; }
    goto L_088C7808;
L_088C7808:;
    f0 = BITSF(LD32(sp+112));
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+276); goto L_088C77A0; }
    goto L_088C781C;
L_088C781C:;
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s1+276); goto L_088C77A0; }
    goto L_088C782C;
L_088C782C:;
    v0 = LD32(s0);
    a1 = LD32(s5);
    a2 = sp + 16;
    ST32(sp+80, v0);
    a0 = s1 + 0;
    v0 = LD32(s0+4);
    ST32(sp+84, v0);
    v1 = LD32(s0+8);
    ST32(sp+88, v1);
    v0 = LD32(s0+12);
    ST32(sp+92, v0);
    func_088CA2D0(a0, a1, a2, 0, 0, 0);
    goto L_088C785C;
L_088C785C:;
    a0 = s1 + 0;
    f12 = f22;
    a1 = sp + 80;
    a2 = sp + 16;
    goto L_088C786C;
L_088C786C:;
    func_088C8F8C(a0, a1, a2, f12);
    goto L_088C7874;
L_088C7874:;
    a0 = LD32(s1+276);
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_088C77A0;
L_088C788C:;
    a1 = sp + 64;
    a0 = sp + 32;
    a2 = s3 + 0;
    a3 = s6 + 0;
    t0 = s7 + 0;
    t1 = sp + 0;
    t2 = sp + 112;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = func_088B0E58(a0, a1, a2, a3, t0, t1, t2);
    goto L_088C78BC;
L_088C78BC:;
    {u32 a_=sp+(160);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C7900; }
    goto L_088C78D0;
L_088C78D0:;
    v0 = LD_U8(sp);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+280); goto L_088C7904; }
    goto L_088C78DC;
L_088C78DC:;
    f0 = BITSF(LD32(sp+112));
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD32(s1+280); goto L_088C7904; }
    goto L_088C78F0;
L_088C78F0:;
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(s2); goto L_088C790C; }
    goto L_088C7900;
L_088C7900:;
    a1 = LD32(s1+280);
    goto L_088C7904;
L_088C7904:;
    {u32 a_=sp+(16);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    goto L_088C770C;
L_088C790C:;
    a1 = LD32(s5);
    a0 = s1 + 0;
    ST32(sp+96, v0);
    a2 = sp + 16;
    v0 = LD32(s2+4);
    ST32(sp+100, v0);
    v1 = LD32(s2+8);
    ST32(sp+104, v1);
    v0 = LD32(s2+12);
    ST32(sp+108, v0);
    func_088CA2D0(a0, a1, a2, 0, 0, 0);
    goto L_088C7938;
L_088C7938:;
    a0 = s1 + 0;
    a1 = fp + 0;
    a2 = sp + 16;
    f12 = f22;
    goto L_088C786C;
}

/* 088C794C */
void func_088C794C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 352);
L_088C794C:;
    sp = sp - 352;
    v0 = a0 + 208;
    s6 = a0 + 0;
    v1 = LD32(a0+276);
    a2 = LD32(v0+12);
    a1 = LD32(v0+8);
    v1 = LD32(v1);
    a0 = LD32(a0+208);
    ST32(sp+144, 0);
    ST32(sp+140, v1);
    v1 = LD32(v0+4);
    v0 = LD32(sp+140);
    ST32(sp, a0);
    a3 = LD32(v0+12);
    ST32(sp+4, v1);
    ST32(sp+8, a1);
    cnd_ = a3 == 0;
    ST32(sp+12, a2);
    if (cnd_) { goto L_088C7AE0; }
    goto L_088C79C4;
L_088C79C4:;
    v1 = s6 + 288;
    ST32(sp+208, v1);
    v0 = LD32(sp+140);
    goto L_088C79D0;
L_088C79D0:;
    v1 = LD32(sp+144);
    a1 = LD32(s6+280);
    a0 = LD32(v0+16);
    v0 = v1 << 5;
    s7 = a0 + v0;
    a0 = LD32(sp+208);
    v1 = LD_U16(s7+16);
    v0 = LD_U16(s7+18);
    s1 = LD32(a0+28);
    v1 = v1 << 4;
    v0 = v0 << 4;
    s4 = a1 + v0;
    cnd_ = s1 == 0;
    s3 = a1 + v1;
    if (cnd_) { goto L_088C7AC8; }
    goto L_088C7A08;
L_088C7A08:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[0]=(float)1;v[1]=(float)1;v[2]=(float)1;v[3]=(float)1;}
    fp = D_08B2BDB4 - (-16972);
    s5 = s6 + 328;
    {u32 a_=sp+(160);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a2 = LD32(s1);
    goto L_088C7A1C;
L_088C7A1C:;
    a3 = LD32(s1+4);
    t0 = LD32(fp-16972);
    a0 = a2 >> 16;
    a1 = a3 >> 16;
    v0 = a0 << 3;
    v1 = a1 << 3;
    v0 = v0 - a0;
    v1 = v1 - a1;
    v0 = v0 << 3;
    v1 = v1 << 3;
    v1 = v1 + t0;
    v0 = v0 + t0;
    a1 = LD32(v0+4);
    a0 = LD32(v1+4);
    v1 = D_08B2BDB4 - (-16972);
    v1 = v1 - 16972;
    v0 = LD32(v1+56);
    a2 = a2 & 0xffff;
    a3 = a3 & 0xffff;
    a1 = a1 + a2;
    a0 = a0 + a3;
    a1 = a1 << 4;
    a0 = a0 << 4;
    s2 = v0 + a0;
    s0 = v0 + a1;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s5 + 0;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    { rv_t r_ = func_088B85D8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C7AA0;
L_088C7AA0:;
    {u32 a_=sp+(224);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(272);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C7B18; }
    goto L_088C7AB4;
L_088C7AB4:;
    s1 = LD32(s1+12);
    goto L_088C7AB8;
L_088C7AB8:;
    cnd_ = s1 != 0;
    if (cnd_) { a2 = LD32(s1); goto L_088C7A1C; }
    goto L_088C7AC0;
L_088C7AC0:;
    a0 = LD32(sp+140);
    a3 = LD32(a0+12);
    goto L_088C7AC8;
L_088C7AC8:;
    v0 = LD32(sp+144);
    v0 = v0 + 1;
    ST32(sp+144, v0);
    v0 = v0 < a3;
    cnd_ = v0 != 0;
    v0 = LD32(sp+140);
    if (cnd_) { goto L_088C79D0; }
    goto L_088C7AE0;
L_088C7AE0:;
    sp = sp + 352;
    return;
L_088C7B18:;
    {u32 a_=s2+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[8]=sum;}
    {float s0=v[8];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[8];float t0=v[8];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088C7B48; }
    goto L_088C7B38;
L_088C7B38:;
    {u32 a_=sp+(160);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_088C7B48;
L_088C7B48:;
    a1 = sp + 16;
    a0 = s0 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    t0 = sp + 0;
    t1 = sp + 32;
    t2 = sp + 128;
    {v0=FBITS(v[8]);}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    f20 = BITSF(v0);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    v0 = func_088B0E58(a0, a1, a2, a3, t0, t1, t2);
    goto L_088C7B80;
L_088C7B80:;
    {u32 a_=sp+(224);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(272);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C7AB4; }
    goto L_088C7B94;
L_088C7B94:;
    f0 = BITSF(LD32(sp+128));
    f21 = BITSF(0);
    fcc = FCMP(f21, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s1 = LD32(s1+12); goto L_088C7AB8; }
    goto L_088C7BAC;
L_088C7BAC:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { s1 = LD32(s1+12); goto L_088C7AB8; }
    goto L_088C7BBC;
L_088C7BBC:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    a3 = s2 + 0;
    t0 = sp + 132;
    t1 = sp + 136;
    v0 = func_088B0F94(a0, a1, a2, a3, t0, t1);
    goto L_088C7BD8;
L_088C7BD8:;
    {u32 a_=sp+(224);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(272);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C7AB4; }
    goto L_088C7BEC;
L_088C7BEC:;
    {u32 a_=s0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=s2+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    f0 = BITSF(LD32(sp+136));
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = BITSF(LD32(sp+132));
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[12];v[36]=s0*t0;v[37]=s1*t0;v[38]=s2*t0;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = FBITS(f1);
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=s6+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=s6+(16);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=s0+(0);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float t0=v[36];float t1=v[37];float t2=v[38];float t3=v[39];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    {u32 a_=sp+(160);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[84]=d0;v[85]=d1;v[86]=d2;v[87]=d3;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=s3+(0);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=s4+(0);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float t0=v[32];float t1=v[33];float t2=v[34];float t3=v[35];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float t0=v[0];v[52]=s0*t0;v[53]=s1*t0;v[54]=s2*t0;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {u32 a_=s6+(32);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=s3+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float t0=v[52];float t1=v[53];float t2=v[54];float t3=v[55];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=s0+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=s2+(0);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=s3+(0);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=s4+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float t0=v[16];float t1=v[17];float t2=v[18];float t3=v[19];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float t0=v[48];float t1=v[49];float t2=v[50];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[56]=d0;v[57]=d1;v[58]=d2;}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {float s0=v[56];float s1=v[57];float s2=v[58];float t0=v[56];float t1=v[57];float t2=v[58];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[32]=sum;}
    {float s0=v[32];float d0=sqrtf(s0);v[32]=d0;}
    {float s0=v[4];float t0=v[32];float d0=s0/t0;v[0]=d0;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float t0=v[0];v[16]=s0*t0;v[17]=s1*t0;v[18]=s2*t0;}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=s7+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float t0=v[0];float t1=v[1];float t2=v[2];float o0=0;o0+=v[80]*t0;o0+=v[84]*t1;o0+=v[88]*t2;float o1=0;o1+=v[81]*t0;o1+=v[85]*t1;o1+=v[89]*t2;float o2=0;o2+=v[82]*t0;o2+=v[86]*t1;o2+=v[90]*t2;v[8]=o0;v[9]=o1;v[10]=o2;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(112);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088C7D14; }
    goto L_088C7CEC;
L_088C7CEC:;
    {float s0=v[16];float s1=v[17];float s2=v[18];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    v0 = LD32(sp+72);
    v1 = LD32(sp+76);
    ST32(sp+104, v0);
    ST32(sp+108, v1);
    goto L_088C7D14;
L_088C7D14:;
    {u32 a_=sp+(48);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(80);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(96);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f12 = BITSF(v1);
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    if (cnd_) { goto L_088C7AB4; }
    goto L_088C7D44;
L_088C7D44:;
    a1 = sp + 80;
    a2 = sp + 96;
    a0 = s6 + 0;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    func_088C8F8C(a0, a1, a2, f12);
    goto L_088C7D64;
L_088C7D64:;
    {u32 a_=sp+(272);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    goto L_088C7AB4;
}

/* 088C7D78 */
void func_088C7D78(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 128);
L_088C7D78:;
    sp = sp - 128;
    s2 = a0 + 0;
    v0 = LD32(a0+276);
    s0 = LD32(a0+320);
    cnd_ = s0 == 0;
    s7 = LD32(v0);
    if (cnd_) { goto L_088C7F88; }
    goto L_088C7DC0;
L_088C7DC0:;
    s5 = D_08B2BDB4 - (-16972);
    s3 = a0 + 328;
    s6 = s5 - 16972;
    a0 = LD32(s0);
    goto L_088C7DD0;
L_088C7DD0:;
    a1 = LD32(s5-16972);
    a2 = LD32(s6+56);
    v1 = a0 >> 16;
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 3;
    v0 = v0 + a1;
    v1 = LD32(v0+4);
    a0 = a0 & 0xffff;
    f0 = BITSF(LD32(s2+328));
    v1 = v1 + a0;
    v1 = v1 << 4;
    s1 = a2 + v1;
    f1 = BITSF(LD32(s1));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7E18;
L_088C7E18:;
    f0 = BITSF(LD32(s3+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7E2C;
L_088C7E2C:;
    f1 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s3+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7E44;
L_088C7E44:;
    f0 = BITSF(LD32(s3+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7E58;
L_088C7E58:;
    f1 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s3+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7E70;
L_088C7E70:;
    f0 = BITSF(LD32(s3+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7E84;
L_088C7E84:;
    v1 = LD32(s7+20);
    v0 = D_08AEC840 - (-14272);
    f20 = BITSF(LD32(v0-14272));
    ST32(sp+48, 0);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088C7F2C; }
    goto L_088C7E9C;
L_088C7E9C:;
    f21 = BITSF(0);
    fp = sp + 16;
    a2 = s4 + 0;
    goto L_088C7EA8;
L_088C7EA8:;
    a0 = s2 + 0;
    a1 = sp + 0;
    func_088C9F78(a0, a1, a2);
    goto L_088C7EB4;
L_088C7EB4:;
    a0 = fp + 0;
    a1 = s2 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    func_088C9F20(a0, a1, a2, a3);
    goto L_088C7EC8;
L_088C7EC8:;
    {u32 a_=s1+(0);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    if (cnd_) { goto L_088C7F7C; }
    goto L_088C7EF4;
L_088C7EF4:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s7+20); goto L_088C7F10; }
    goto L_088C7F04;
L_088C7F04:;
    f20 = BITSF(v0);
    ST32(sp+48, s4);
    v0 = LD32(s7+20);
    goto L_088C7F10;
L_088C7F10:;
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_088C7EA8; }
    goto L_088C7F20;
L_088C7F20:;
    v0 = 1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s0+12); goto L_088C7F80; }
    goto L_088C7F2C;
L_088C7F2C:;
    a2 = LD32(sp+48);
    a0 = s2 + 0;
    a1 = sp + 32;
    func_088C9F78(a0, a1, a2);
    goto L_088C7F3C;
L_088C7F3C:;
    v0 = LD32(s1);
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float d0=-s0;float d1=-s1;float d2=-s2;v[0]=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+16, v0);
    f12 = f20;
    a0 = s2 + 0;
    v1 = LD32(s1+4);
    a1 = sp + 16;
    a2 = sp + 0;
    ST32(sp+20, v1);
    v0 = LD32(s1+8);
    ST32(sp+24, v0);
    v1 = LD32(s1+12);
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+28, v1);
    func_088C8F8C(a0, a1, a2, f12);
    goto L_088C7F7C;
L_088C7F7C:;
    s0 = LD32(s0+12);
    goto L_088C7F80;
L_088C7F80:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_088C7DD0; }
    goto L_088C7F88;
L_088C7F88:;
    sp = sp + 128;
    return;
}

/* 088C7FC0 */
void func_088C7FC0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr56 = v[56], vr57 = v[57], vr58 = v[58], vr59 = v[59], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[1440] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 1440);
L_088C7FC0:;
    sp = sp - 1440;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    a3 = LD32(a0+248);
    v0 = (a3 >> 6) & 0x1;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088C8834; }
    goto L_088C8018;
L_088C8018:;
    v0 = (a3 >> 7) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C8524; }
    goto L_088C8024;
L_088C8024:;
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;__auto_type vr_t_ = func_088C9D8C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr32=v[32];vr33=v[33];vr34=v[34];vr35=v[35];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C8038;
L_088C8038:;
    v0 = LD32(s1+192);
    v1 = LD32(s1+196);
    a0 = LD32(s1+200);
    a1 = LD32(s1+204);
    {u32 a_=sp+(1280);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1296);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);vr120=BITSF(LD32(a_+0));vr121=BITSF(LD32(a_+4));vr122=BITSF(LD32(a_+8));vr123=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1328);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    goto L_088C8058;
L_088C8058:;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    v0 = D_08AEC844 - (-14268);
    f23 = BITSF(LD32(s1+260));
    f0 = BITSF(LD32(v0-14268));
    fcc = FCMP(f23, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f23 = f0; goto L_088C8084; }
    goto L_088C8084;
L_088C8084:;
    s3 = LD32(s0+4);
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    f22 = BITSF(0);
    v0 = s3 < 0x10u;
    v1 = 15;
    a0 = s1 + 0;
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (v0 == 0) s3 = v1;
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = func_088C32BC(a0);
    goto L_088C80BC;
L_088C80BC:;
    a2 = v0 + 0;
    s6 = s0 + 16;
    f20 = f22;
    a3 = sp + 752;
    t0 = v0 + 48;
    {u32 a_=sp+(1328);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);vr120=BITSF(LD32(a_+0));vr121=BITSF(LD32(a_+4));vr122=BITSF(LD32(a_+8));vr123=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1296);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1280);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    goto L_088C80E0;
L_088C80E0:;
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
    if (cnd_) { goto L_088C80E0; }
    goto L_088C810C;
L_088C810C:;
    fp = 0 < s3;
    cnd_ = fp == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088C882C; }
    goto L_088C8118;
L_088C8118:;
    a3 = LD32(s1+248);
    v0 = D_08AEC844 - (-14268);
    v1 = D_08AEC848 - (-14264);
    f4 = BITSF(LD32(v0-14268));
    f5 = BITSF(LD32(v1-14264));
    {u32 a_=s1+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s6+(0);vr104=BITSF(LD32(a_+0));vr105=BITSF(LD32(a_+4));vr106=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=s1+(144);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    t0 = a3 & 0x30;
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a0 = sp + 16;
    goto L_088C8144;
L_088C8144:;
    a3 = a2 << 4;
    v0 = s0 + a3;
    {u32 a_=v0+(32);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr16;float t1=vr17;float t2=vr18;float t3=vr19;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    a1 = a0 + 0;
    f2 = BITSF(0);
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    v0 = LD32(sp+800);
    {u32 a_=sp+(976);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    ST32(a0, v0);
    v0 = LD32(sp+804);
    ST32(a0+4, v0);
    v1 = LD32(sp+808);
    ST32(a0+8, v1);
    v0 = LD32(sp+812);
    ST32(a0+12, v0);
    {u32 a_=sp+(752);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=a0+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(928);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(768);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(784);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;v[27]=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float t0=vr8;float t1=vr9;float t2=vr10;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+816);
    v1 = LD32(sp+820);
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+800, v0);
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    ST32(sp+804, v1);
    v0 = LD32(sp+824);
    v1 = LD32(sp+828);
    ST32(sp+808, v0);
    ST32(sp+812, v1);
    {u32 a_=a0+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(800);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+816);
    ST32(sp+800, v0);
    v1 = LD32(sp+820);
    v0 = LD32(sp+824);
    ST32(sp+804, v1);
    v1 = LD32(sp+828);
    ST32(sp+808, v0);
    cnd_ = t0 != 0;
    ST32(sp+812, v1);
    if (cnd_) { goto L_088C8224; }
    goto L_088C8220;
L_088C8220:;
    f2 = BITSF(LD32(s1+376));
    goto L_088C8224;
L_088C8224:;
    {u32 a_=sp+(800);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr104;float t1=vr105;float t2=vr106;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f0 = f2 + f0;
    f2 = BITSF(0);
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    ST32(a1+36, FBITS(f0));
    if (cnd_) { goto L_088C8254; }
    goto L_088C824C;
L_088C824C:;
    f0 = f4 / f0;
    ST32(a1+36, FBITS(f0));
    goto L_088C8254;
L_088C8254:;
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(1344);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(sp+800);
    v1 = LD32(sp+804);
    ST32(sp+816, v0);
    ST32(sp+820, v1);
    v0 = LD32(sp+808);
    v1 = LD32(sp+812);
    ST32(sp+824, v0);
    ST32(sp+828, v1);
    {u32 a_=sp+(816);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr104;float t1=vr105;float t2=vr106;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(a1+32, v0); goto L_088C8300; }
    goto L_088C82AC;
L_088C82AC:;
    cnd_ = s2 != 0;
    f1 = f2;
    if (cnd_) { goto L_088C82B8; }
    goto L_088C82B4;
L_088C82B4:;
    f1 = BITSF(LD32(s1+256));
    goto L_088C82B8;
L_088C82B8:;
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    if (cnd_) { goto L_088C82CC; }
    goto L_088C82C8;
L_088C82C8:;
    f1 = BITSF(0);
    goto L_088C82CC;
L_088C82CC:;
    f2 = f1 + f4;
    f3 = BITSF(LD32(a1+36));
    v0 = s0 + a3;
    f1 = f0 * f1;
    f0 = f0 * f2;
    f20 = f20 + f4;
    ST32(a1+32, FBITS(f1));
    f0 = f0 * f3;
    {u32 a_=v0+(32);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;vr1=d1;vr2=d2;}
    f22 = f22 + f0;
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C8300;
L_088C8300:;
    a2 = a2 + 1;
    v0 = a2 < s3;
    cnd_ = v0 != 0;
    a0 = a0 + 48;
    if (cnd_) { goto L_088C8144; }
    goto L_088C8310;
L_088C8310:;
    s7 = 1;
    v1 = s3 ^ 0x1;
    v0 = 10;
    if (v1 != 0) s7 = v0;
    cnd_ = s7 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088C8488; }
    goto L_088C8328;
L_088C8328:;
    cnd_ = fp == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088C8478; }
    goto L_088C8330;
L_088C8330:;
    s4 = s1 + 160;
    s0 = sp + 16;
    goto L_088C8338;
L_088C8338:;
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=s1+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s6+(0);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    f3 = BITSF(0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+816);
    v1 = LD32(sp+820);
    ST32(sp+832, v0);
    ST32(sp+836, v1);
    v0 = LD32(sp+824);
    v1 = LD32(sp+828);
    ST32(sp+840, v0);
    ST32(sp+844, v1);
    f2 = BITSF(LD32(s0+36));
    {u32 a_=sp+(832);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    fcc = FCMP(f3, f2, 12);
    {v1=FBITS(vr0);}
    f1 = BITSF(v1);
    cnd_ = !fcc;
    if (cnd_) { s2 = s2 + 1; goto L_088C846C; }
    goto L_088C839C;
L_088C839C:;
    f0 = BITSF(LD32(s0+32));
    {u32 a_=sp+(992);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(s1+248);
    f0 = f0 - f1;
    v0 = v0 & 0x30;
    f0 = f0 * f2;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    cnd_ = v0 != 0;
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088C83D8; }
    goto L_088C83D4;
L_088C83D4:;
    f3 = BITSF(LD32(s1+376));
    goto L_088C83D8;
L_088C83D8:;
    {u32 a_=sp+(816);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {u32 a_=sp+(1008);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s4+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr16=d0;vr17=d1;vr18=d2;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=s4+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    v0 = func_088C32BC(a0);
    goto L_088C8430;
L_088C8430:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {u32 a_=s1+(144);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1328);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr116=d0;vr117=d1;vr118=d2;vr119=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {u32 a_=sp+(1024);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float t0=vr20;float t1=vr21;float t2=vr22;float o0=0;o0+=vr112*t0;o0+=vr116*t1;o0+=vr120*t2;float o1=0;o1+=vr113*t0;o1+=vr117*t1;o1+=vr121*t2;float o2=0;o2+=vr114*t0;o2+=vr118*t1;o2+=vr122*t2;vr16=o0;vr17=o1;vr18=o2;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr48=d0;vr49=d1;vr50=d2;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr100=d0;vr101=d1;vr102=d2;vr103=d3;}
    {u32 a_=s1+(144);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    s2 = s2 + 1;
    goto L_088C846C;
L_088C846C:;
    v0 = s2 < s3;
    cnd_ = v0 != 0;
    s0 = s0 + 48;
    if (cnd_) { goto L_088C8338; }
    goto L_088C8478;
L_088C8478:;
    s5 = s5 + 1;
    v0 = s5 < s7;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C8328; }
    goto L_088C8488;
L_088C8488:;
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=vr100;float t1=vr101;float t2=vr102;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    s0 = D_08AEC84C - (-14260);
    f21 = BITSF(LD32(s0-14260));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(912);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C84B4; }
    goto L_088C84B0;
L_088C84B0:;
    {u32 a_=s1+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C84B4;
L_088C84B4:;
    f24 = BITSF(0);
    fcc = FCMP(f20, f24, 2);
    cnd_ = !fcc;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    if (cnd_) { goto L_088C8564; }
    goto L_088C84C8;
L_088C84C8:;
    {u32 a_=s1+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088C84CC;
L_088C84CC:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f2 = BITSF(LD32(s0-14260));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=s1+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088C84FC; }
    goto L_088C84F0;
L_088C84F0:;
    {u32 a_=sp+(912);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s1+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    goto L_088C84FC;
L_088C84FC:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088C8524; }
    goto L_088C851C;
L_088C851C:;
    {u32 a_=sp+(912);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=s1+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C8524;
L_088C8524:;
    sp = sp + 1440;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return; }
L_088C8564:;
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    v0 = FBITS(f20);
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1040);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr8;float t0=vr0;float d0=s0/t0;vr4=d0;}
    {u32 a_=sp+(736);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = sp + 848;
    a2 = sp + 736;
    a1 = s1 + 0;
    f22 = f22 / f20;
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;func_088C43F4(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];});
    goto L_088C859C;
L_088C859C:;
    {u32 a_=s6+(0);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(848);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {u32 a_=sp+(1072);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {v0=FBITS(vr0);}
    {vr16=BITSF(v0);}
    {float s0=vr16;float s1=vr16;float s2=vr16;float s3=vr16;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr16;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float t0=vr0;float t1=vr1;float t2=vr2;float t3=vr3;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float t0=vr8;float t1=vr9;float t2=vr10;float t3=vr11;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {float s0=vr4;float t0=vr4;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    if (cnd_) { goto L_088C85FC; }
    goto L_088C85EC;
L_088C85EC:;
    {u32 a_=sp+(1056);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float s0=vr20;float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C85FC;
L_088C85FC:;
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    f4 = BITSF(v0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { {u32 a_=s1+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));} goto L_088C84CC; }
    goto L_088C8618;
L_088C8618:;
    {u32 a_=sp+(832);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(816);vr64=BITSF(LD32(a_+0));vr65=BITSF(LD32(a_+4));vr66=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {float s0=vr60;float s1=vr61;float s2=vr62;float t0=vr64;float t1=vr65;float t2=vr66;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr48=d0;vr49=d1;vr50=d2;}
    {u32 a_=sp+(752);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(768);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(784);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);vr68=BITSF(LD32(a_+0));vr69=BITSF(LD32(a_+4));vr70=BITSF(LD32(a_+8));vr71=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    a1 = LD32(s1+248);
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;v[27]=d3;}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr16*t0;o0+=vr20*t1;o0+=vr24*t2;float o1=0;o1+=vr17*t0;o1+=vr21*t1;o1+=vr25*t2;float o2=0;o2+=vr18*t0;o2+=vr22*t1;o2+=vr26*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+864);
    v1 = LD32(sp+872);
    a0 = a1 & 0x30;
    ST32(sp+800, v0);
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    f2 = f24;
    v0 = LD32(sp+868);
    ST32(sp+808, v1);
    ST32(sp+804, v0);
    v0 = LD32(sp+876);
    ST32(sp+812, v0);
    {u32 a_=sp+(800);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr60;float t1=vr61;float t2=vr62;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+864);
    v1 = LD32(sp+868);
    ST32(sp+800, v0);
    ST32(sp+804, v1);
    v0 = LD32(sp+872);
    v1 = LD32(sp+876);
    ST32(sp+808, v0);
    cnd_ = a0 != 0;
    ST32(sp+812, v1);
    if (cnd_) { goto L_088C86BC; }
    goto L_088C86B8;
L_088C86B8:;
    f2 = BITSF(LD32(s1+376));
    goto L_088C86BC;
L_088C86BC:;
    {u32 a_=sp+(800);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr64;float t1=vr65;float t2=vr66;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v1 = FBITS(f22);
    f3 = BITSF(LD32(s1+260));
    f1 = f2 + f0;
    v1 = (v1 >> 0) & 0x7fffffff;
    f2 = BITSF(v1);
    f0 = f4 / f1;
    f2 = f2 * f3;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_088C86F8; }
    goto L_088C86F8;
L_088C86F8:;
    {float s0=vr64;float s1=vr65;float s2=vr66;float d0=-s0;float d1=-s1;float d2=-s2;vr0=d0;vr1=d1;vr2=d2;}
    v0 = FBITS(f0);
    {u32 a_=sp+(1152);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {float s0=vr4;float s1=vr4;float s2=vr4;float s3=vr4;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    v0 = a1 & 0x30;
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v1 = s1 + 160;
    f0 = BITSF(0);
    cnd_ = v0 != 0;
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    if (cnd_) { goto L_088C8734; }
    goto L_088C8730;
L_088C8730:;
    f0 = BITSF(LD32(s1+376));
    goto L_088C8734;
L_088C8734:;
    {u32 a_=sp+(864);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {u32 a_=sp+(1168);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr12=s0*t0;vr13=s1*t0;vr14=s2*t0;}
    {u32 a_=sp+(832);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    a0 = s1 + 0;
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=v1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(1184);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=v1+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = func_088C32BC(a0);
    goto L_088C877C;
L_088C877C:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=s1+(144);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1248);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1200);vr68=BITSF(LD32(a_+0));vr69=BITSF(LD32(a_+4));vr70=BITSF(LD32(a_+8));vr71=BITSF(LD32(a_+12));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr68;float s1=vr69;float s2=vr70;float s3=vr71;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(1184);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {float t0=vr20;float t1=vr21;float t2=vr22;float o0=0;o0+=vr0*t0;o0+=vr4*t1;o0+=vr8*t2;float o1=0;o1+=vr1*t0;o1+=vr5*t1;o1+=vr9*t2;float o2=0;o2+=vr2*t0;o2+=vr6*t1;o2+=vr10*t2;vr16=o0;vr17=o1;vr18=o2;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr48=d0;vr49=d1;vr50=d2;}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=s1+(144);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=s6+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEC850 - (-14256);
    {u32 a_=sp+(1264);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = f1 * f23;
    f1 = BITSF(LD32(v0-14256));
    f0 = f0 * f1;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    v1 = LD32(sp+900);
    a0 = LD32(sp+904);
    a1 = LD32(sp+908);
    v0 = LD32(sp+896);
    ST32(s1+148, v1);
    ST32(s1+144, v0);
    ST32(s1+152, a0);
    ST32(s1+156, a1);
    goto L_088C84C8;
L_088C882C:;
    {u32 a_=s1+(144);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    goto L_088C8310;
L_088C8834:;
    v0 = LD32(a0+208);
    v1 = LD32(a0+212);
    a1 = LD32(s1+220);
    a0 = LD32(a0+216);
    goto L_088C8058;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 088C8848 */
void func_088C8848(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr103 = v[103], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr107 = v[107], vr108 = v[108], vr109 = v[109], vr110 = v[110], vr111 = v[111], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[2784] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 2784);
L_088C8848:;
    sp = sp - 2784;
    s2 = a1 & 0xff;
    v1 = LD32(a0+248);
    v0 = (v1 >> 6) & 0x1;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088C8DE4; }
    goto L_088C8884;
L_088C8884:;
    v0 = (v1 >> 7) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C8DA0; }
    goto L_088C8890;
L_088C8890:;
    {u32 a_=sp+(2608);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(2624);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(2640);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(2656);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(2672);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(2688);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(2704);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    {u32 a_=sp+(2720);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    { u64 r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;__auto_type vr_t_ = func_088C9D8C(a0); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr16=v[16];vr17=v[17];vr18=v[18];vr19=v[19];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C88B4;
L_088C88B4:;
    v0 = LD32(s1+192);
    v1 = LD32(s1+196);
    a0 = LD32(s1+200);
    a1 = LD32(s1+204);
    {u32 a_=sp+(2608);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2624);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2640);vr104=BITSF(LD32(a_+0));vr105=BITSF(LD32(a_+4));vr106=BITSF(LD32(a_+8));vr107=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2656);vr108=BITSF(LD32(a_+0));vr109=BITSF(LD32(a_+4));vr110=BITSF(LD32(a_+8));vr111=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2672);vr112=BITSF(LD32(a_+0));vr113=BITSF(LD32(a_+4));vr114=BITSF(LD32(a_+8));vr115=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2688);vr116=BITSF(LD32(a_+0));vr117=BITSF(LD32(a_+4));vr118=BITSF(LD32(a_+8));vr119=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2704);vr120=BITSF(LD32(a_+0));vr121=BITSF(LD32(a_+4));vr122=BITSF(LD32(a_+8));vr123=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2720);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    goto L_088C88E4;
L_088C88E4:;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a1);
    v0 = 49;
    v1 = (u32)-1;
    v0 = v0 - 25;
    goto L_088C8900;
L_088C8900:;
    cnd_ = v0 != v1;
    v0 = v0 - 25;
    if (cnd_) { goto L_088C8900; }
    goto L_088C8908;
L_088C8908:;
    s0 = LD32(s1+388);
    cnd_ = s0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088C8DD0; }
    goto L_088C8914;
L_088C8914:;
    {u32 a_=s1+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s1+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    {u32 a_=sp+(2608);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(2624);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(2640);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(2656);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    {u32 a_=sp+(2720);ST32(a_+0,FBITS(vr124));ST32(a_+4,FBITS(vr125));ST32(a_+8,FBITS(vr126));ST32(a_+12,FBITS(vr127));}
    {u32 a_=sp+(2592);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(2672);ST32(a_+0,FBITS(vr112));ST32(a_+4,FBITS(vr113));ST32(a_+8,FBITS(vr114));ST32(a_+12,FBITS(vr115));}
    {u32 a_=sp+(2688);ST32(a_+0,FBITS(vr116));ST32(a_+4,FBITS(vr117));ST32(a_+8,FBITS(vr118));ST32(a_+12,FBITS(vr119));}
    {u32 a_=sp+(2704);ST32(a_+0,FBITS(vr120));ST32(a_+4,FBITS(vr121));ST32(a_+8,FBITS(vr122));ST32(a_+12,FBITS(vr123));}
    v0 = func_088C32BC(a0);
    goto L_088C894C;
L_088C894C:;
    t3 = v0 + 0;
    v1 = D_08AEC858 - (-14248);
    v0 = D_08AEC854 - (-14252);
    t5 = v0 - 14252;
    t6 = v1 - 14248;
    t4 = sp + 2416;
    {u32 a_=sp+(2720);vr124=BITSF(LD32(a_+0));vr125=BITSF(LD32(a_+4));vr126=BITSF(LD32(a_+8));vr127=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2656);vr108=BITSF(LD32(a_+0));vr109=BITSF(LD32(a_+4));vr110=BITSF(LD32(a_+8));vr111=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2640);vr104=BITSF(LD32(a_+0));vr105=BITSF(LD32(a_+4));vr106=BITSF(LD32(a_+8));vr107=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2624);vr100=BITSF(LD32(a_+0));vr101=BITSF(LD32(a_+4));vr102=BITSF(LD32(a_+8));vr103=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2608);vr96=BITSF(LD32(a_+0));vr97=BITSF(LD32(a_+4));vr98=BITSF(LD32(a_+8));vr99=BITSF(LD32(a_+12));}
    goto L_088C8978;
L_088C8978:;
    t2 = LD32(s0+4);
    a2 = t3 + 0;
    t1 = s0 + 16;
    a3 = t4 + 0;
    t0 = t3 + 48;
    goto L_088C898C;
L_088C898C:;
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
    if (cnd_) { goto L_088C898C; }
    goto L_088C89B8;
L_088C89B8:;
    cnd_ = t2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088C8B9C; }
    goto L_088C89C0;
L_088C89C0:;
    v0 = s4 << 1;
    f3 = BITSF(LD32(t5));
    f4 = BITSF(LD32(t6));
    v0 = v0 + s4;
    a3 = v0 << 4;
    a2 = s0 + 32;
    goto L_088C89D8;
L_088C89D8:;
    v0 = t0 + s4;
    v0 = v0 < 0x32u;
    cnd_ = v0 == 0;
    v0 = sp + 16;
    if (cnd_) { goto L_088C8DC8; }
    goto L_088C89E8;
L_088C89E8:;
    v1 = LD32(t1);
    a1 = v0 + a3;
    ST32(a1+16, v1);
    f2 = BITSF(0);
    v0 = LD32(t1+4);
    ST32(a1+20, v0);
    v0 = LD32(t1+8);
    ST32(a1+24, v0);
    v0 = LD32(t1+12);
    ST32(a1+28, v0);
    {u32 a_=a2+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+2464);
    ST32(a1, v0);
    v1 = LD32(sp+2468);
    ST32(a1+4, v1);
    v0 = LD32(sp+2472);
    ST32(a1+8, v0);
    v1 = LD32(sp+2476);
    ST32(a1+12, v1);
    {u32 a_=sp+(2416);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr112=d0;vr113=d1;vr114=d2;vr115=d3;}
    {u32 a_=t1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {u32 a_=sp+(2432);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2448);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr116=d0;vr117=d1;vr118=d2;vr119=d3;}
    {float t0=vr8;float t1=vr9;float t2=vr10;float o0=0;o0+=vr112*t0;o0+=vr116*t1;o0+=vr120*t2;float o1=0;o1+=vr113*t0;o1+=vr117*t1;o1+=vr121*t2;float o2=0;o2+=vr114*t0;o2+=vr118*t1;o2+=vr122*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(2480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+2480);
    v1 = LD32(sp+2484);
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    ST32(sp+2464, v0);
    ST32(sp+2468, v1);
    v0 = LD32(sp+2488);
    v1 = LD32(sp+2492);
    ST32(sp+2472, v0);
    ST32(sp+2476, v1);
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2464);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    a0 = LD32(s1+248);
    a0 = a0 & 0x30;
    {u32 a_=sp+(2480);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(sp+2480);
    v1 = LD32(sp+2484);
    ST32(sp+2464, v0);
    ST32(sp+2468, v1);
    v0 = LD32(sp+2488);
    v1 = LD32(sp+2492);
    ST32(sp+2472, v0);
    cnd_ = a0 != 0;
    ST32(sp+2476, v1);
    if (cnd_) { goto L_088C8AD0; }
    goto L_088C8ACC;
L_088C8ACC:;
    f2 = BITSF(LD32(s1+376));
    goto L_088C8AD0;
L_088C8AD0:;
    {u32 a_=t1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2464);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f1 = BITSF(0);
    f0 = f2 + f0;
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    ST32(a1+36, FBITS(f0));
    if (cnd_) { goto L_088C8B04; }
    goto L_088C8AFC;
L_088C8AFC:;
    f0 = f3 / f0;
    ST32(a1+36, FBITS(f0));
    goto L_088C8B04;
L_088C8B04:;
    {u32 a_=a1+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2576);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(2592);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(2496);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    v0 = LD32(sp+2464);
    v1 = LD32(sp+2468);
    ST32(sp+2480, v0);
    ST32(sp+2484, v1);
    v0 = LD32(sp+2472);
    v1 = LD32(sp+2476);
    ST32(sp+2488, v0);
    ST32(sp+2492, v1);
    {u32 a_=t1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2480);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { t0 = t0 + 1; goto L_088C8B88; }
    goto L_088C8B64;
L_088C8B64:;
    cnd_ = s2 == 0;
    if (cnd_) { f1 = BITSF(LD32(s1+256)); goto L_088C8B6C; }
    goto L_088C8B6C;
L_088C8B6C:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    if (cnd_) { goto L_088C8B80; }
    goto L_088C8B7C;
L_088C8B7C:;
    f1 = BITSF(0);
    goto L_088C8B80;
L_088C8B80:;
    f0 = f0 * f1;
    t0 = t0 + 1;
    goto L_088C8B88;
L_088C8B88:;
    v0 = t0 < t2;
    ST32(a1+32, FBITS(f0));
    a3 = a3 + 48;
    cnd_ = v0 != 0;
    a2 = a2 + 16;
    if (cnd_) { goto L_088C89D8; }
    goto L_088C8B9C;
L_088C8B9C:;
    v0 = s4 < 0x32u;
    cnd_ = v0 == 0;
    s6 = 1;
    if (cnd_) { goto L_088C8BBC; }
    goto L_088C8BA8;
L_088C8BA8:;
    v0 = LD32(s0+4);
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    s4 = s4 + v0;
    if (cnd_) { goto L_088C8978; }
    goto L_088C8BB8;
L_088C8BB8:;
    s6 = 1;
    goto L_088C8BBC;
L_088C8BBC:;
    v1 = s4 ^ 0x1;
    v0 = 10;
    if (v1 != 0) s6 = v0;
    cnd_ = s6 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_088C8D40; }
    goto L_088C8BD0;
L_088C8BD0:;
    s7 = 0 < s4;
    goto L_088C8BD4;
L_088C8BD4:;
    cnd_ = s7 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088C8D30; }
    goto L_088C8BDC;
L_088C8BDC:;
    s3 = s1 + 160;
    s0 = sp + 16;
    goto L_088C8BE4;
L_088C8BE4:;
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2576);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(2592);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    f3 = BITSF(0);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float t0=vr4;float t1=vr5;float t2=vr6;float t3=vr7;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(2480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+2480);
    v1 = LD32(sp+2484);
    ST32(sp+2496, v0);
    ST32(sp+2500, v1);
    v0 = LD32(sp+2488);
    v1 = LD32(sp+2492);
    ST32(sp+2504, v0);
    ST32(sp+2508, v1);
    f2 = BITSF(LD32(s0+36));
    {u32 a_=s0+(16);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2496);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    fcc = FCMP(f3, f2, 12);
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    cnd_ = !fcc;
    if (cnd_) { s2 = s2 + 1; goto L_088C8D24; }
    goto L_088C8C4C;
L_088C8C4C:;
    f0 = BITSF(LD32(s0+32));
    {u32 a_=sp+(2528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(s1+248);
    f0 = f0 - f1;
    v0 = v0 & 0x30;
    f0 = f0 * f2;
    v1 = FBITS(f0);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(2528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    cnd_ = v0 != 0;
    {u32 a_=sp+(2480);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    if (cnd_) { goto L_088C8C88; }
    goto L_088C8C84;
L_088C8C84:;
    f3 = BITSF(LD32(s1+376));
    goto L_088C8C88;
L_088C8C88:;
    {u32 a_=sp+(2480);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {u32 a_=sp+(2544);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {u32 a_=sp+(2544);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s3+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    a0 = s1 + 0;
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[12];float t1=v[13];float t2=v[14];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr16=d0;vr17=d1;vr18=d2;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=s3+(0);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(2608);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr97));ST32(a_+8,FBITS(vr98));ST32(a_+12,FBITS(vr99));}
    {u32 a_=sp+(2560);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(2512);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(2624);ST32(a_+0,FBITS(vr100));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr102));ST32(a_+12,FBITS(vr103));}
    {u32 a_=sp+(2640);ST32(a_+0,FBITS(vr104));ST32(a_+4,FBITS(vr105));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr107));}
    {u32 a_=sp+(2656);ST32(a_+0,FBITS(vr108));ST32(a_+4,FBITS(vr109));ST32(a_+8,FBITS(vr110));ST32(a_+12,FBITS(vr111));}
    v0 = func_088C32BC(a0);
    goto L_088C8CE0;
L_088C8CE0:;
    {u32 a_=v0+(0);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(32);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {u32 a_=s1+(144);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2656);vr108=BITSF(LD32(a_+0));vr109=BITSF(LD32(a_+4));vr110=BITSF(LD32(a_+8));vr111=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr100=d0;vr101=d1;vr102=d2;vr103=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr104=d0;vr105=d1;vr106=d2;vr107=d3;}
    {u32 a_=sp+(2560);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr96*t0;o0+=vr100*t1;o0+=vr104*t2;float o1=0;o1+=vr97*t0;o1+=vr101*t1;o1+=vr105*t2;float o2=0;o2+=vr98*t0;o2+=vr102*t1;o2+=vr106*t2;vr16=o0;vr17=o1;vr18=o2;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float t0=vr16;float t1=vr17;float t2=vr18;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr48=d0;vr49=d1;vr50=d2;}
    {u32 a_=s1+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2592);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=s1+(144);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(2576);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    s2 = s2 + 1;
    goto L_088C8D24;
L_088C8D24:;
    v0 = s2 < s4;
    cnd_ = v0 != 0;
    s0 = s0 + 48;
    if (cnd_) { goto L_088C8BE4; }
    goto L_088C8D30;
L_088C8D30:;
    s5 = s5 + 1;
    v0 = s5 < s6;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088C8BD4; }
    goto L_088C8D40;
L_088C8D40:;
    {u32 a_=sp+(2576);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = D_08AEC85C - (-14244);
    f2 = BITSF(LD32(v0-14244));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    {u32 a_=sp+(2592);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C8D78; }
    goto L_088C8D6C;
L_088C8D6C:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    {u32 a_=s1+(144);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2592);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    goto L_088C8D78;
L_088C8D78:;
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088C8DA0; }
    goto L_088C8D98;
L_088C8D98:;
    {float s0=vr0;float s1=vr1;float s2=vr2;vr0=(float)0;vr1=(float)0;vr2=(float)0;}
    {u32 a_=s1+(160);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C8DA0;
L_088C8DA0:;
    sp = sp + 2784;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return; }
L_088C8DC8:;
    s4 = 50;
    goto L_088C8BB8;
L_088C8DD0:;
    {u32 a_=s1+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2576);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=s1+(160);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2592);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    goto L_088C8BB8;
L_088C8DE4:;
    v0 = LD32(a0+208);
    v1 = LD32(a0+212);
    a1 = LD32(s1+220);
    a0 = LD32(a0+216);
    goto L_088C88E4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[103]=vr103;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[107]=vr107;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[111]=vr111;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 088C8DF8 */
void func_088C8DF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C8DF8:;
    t0 = LD32(a0+388);
    sp = sp - 32;
    a2 = 1;
    f3 = BITSF(0);
    cnd_ = t0 == 0;
    a1 = t0 + 0;
    if (cnd_) { goto L_088C8F84; }
    goto L_088C8E10;
L_088C8E10:;
    v0 = D_08AEC860 - (-14240);
    v1 = D_08AEC864 - (-14236);
    f5 = BITSF(LD32(v0-14240));
    v0 = LD32(v1-14236);
    f4 = f3;
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    goto L_088C8E28;
L_088C8E28:;
    {u32 a_=a0+(208);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(a1+8));
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f2 = f2 - f0;
    fcc = FCMP(f4, f2, 12);
    f0 = f2 + f5;
    cnd_ = !fcc;
    f1 = f2;
    if (cnd_) { goto L_088C8E98; }
    goto L_088C8E50;
L_088C8E50:;
    a2 = FBITS(f0);
    {v[16]=BITSF(a2);}
    {float s0=v[16];float s1=v[16];float s2=v[16];float s3=v[16];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[16];v[8]=s0*t0;v[9]=s1*t0;v[10]=s2*t0;}
    {v[20]=BITSF(v0);}
    {float s0=v[20];float s1=v[20];float s2=v[20];float s3=v[20];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    fcc = FCMP(f3, f2, 14);
    a2 = 0 + 0;
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[20];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    cnd_ = fcc;
    {u32 a_=a0+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    if (cnd_) { goto L_088C8E94; }
    goto L_088C8E90;
L_088C8E90:;
    f1 = f3;
    goto L_088C8E94;
L_088C8E94:;
    f3 = f1;
    goto L_088C8E98;
L_088C8E98:;
    a1 = LD32(a1);
    cnd_ = a1 != 0;
    if (cnd_) { {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));} goto L_088C8E28; }
    goto L_088C8EA4;
L_088C8EA4:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088C8F84; }
    goto L_088C8EAC;
L_088C8EAC:;
    v0 = LD32(a0+248);
    v0 = (v0 >> 6) & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEC860 - (-14240);
    if (cnd_) { goto L_088C8ED4; }
    goto L_088C8EBC;
L_088C8EBC:;
    v0 = D_08AEC868 - (-14232);
    f0 = BITSF(LD32(v0-14232));
    fcc = FCMP(f3, f0, 12);
    cnd_ = fcc;
    v0 = D_08AEC860 - (-14240);
    if (cnd_) { goto L_088C8F84; }
    goto L_088C8ED4;
L_088C8ED4:;
    v1 = D_08AEC864 - (-14236);
    t1 = v0 - 14240;
    v1 = v1 - 14236;
    a3 = 1;
    v0 = t0 + 0;
    goto L_088C8EE8;
L_088C8EE8:;
    cnd_ = t0 == 0;
    a2 = 1;
    if (cnd_) { goto L_088C8F84; }
    goto L_088C8EF0;
L_088C8EF0:;
    f3 = BITSF(0);
    f4 = BITSF(LD32(t1));
    a1 = LD32(v1);
    {u32 a_=v0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    goto L_088C8F00;
L_088C8F00:;
    {u32 a_=a0+(208);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(v0+8));
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {t2=FBITS(v[0]);}
    f0 = BITSF(t2);
    f2 = f2 - f0;
    fcc = FCMP(f3, f2, 12);
    cnd_ = !fcc;
    f0 = f2 + f4;
    if (cnd_) { goto L_088C8F60; }
    goto L_088C8F28;
L_088C8F28:;
    a2 = FBITS(f0);
    {v[24]=BITSF(a2);}
    {float s0=v[24];float s1=v[24];float s2=v[24];float s3=v[24];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[24];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v[28]=BITSF(a1);}
    {float s0=v[28];float s1=v[28];float s2=v[28];float s3=v[28];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    a2 = 0 + 0;
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[28];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[8]=d0;v[9]=d1;v[10]=d2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=a0+(208);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    goto L_088C8F60;
L_088C8F60:;
    v0 = LD32(v0);
    cnd_ = v0 != 0;
    if (cnd_) { {u32 a_=v0+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));} goto L_088C8F00; }
    goto L_088C8F6C;
L_088C8F6C:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088C8F84; }
    goto L_088C8F74;
L_088C8F74:;
    a3 = a3 + 1;
    v0 = a3 < 0xau;
    cnd_ = v0 != 0;
    v0 = t0 + 0;
    if (cnd_) { goto L_088C8EE8; }
    goto L_088C8F84;
L_088C8F84:;
    sp = sp + 32;
    return;
}

/* 088C8F8C */
void func_088C8F8C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C8F8C:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = a2 + 0;
    s0 = a0 + 0;
    s1 = a2 + 0;
    f20 = f12;
    func_088C8FF4(a0, a1);
    goto L_088C8FBC;
L_088C8FBC:;
    a1 = s0 + 208;
    s0 = s0 + 388;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = s1 + 0;
    f12 = f20;
    func_08AB5FA0(a0, a1, a2, a3, 0, 0, 0, f12);
    goto L_088C8FD8;
L_088C8FD8:;
    sp = sp + 32;
    return;
}

/* 088C8FF4 */
void func_088C8FF4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C8FF4:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = func_088C4490(a0);
    goto L_088C9010;
L_088C9010:;
    {u32 a_=v0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEC86C - (-14228);
    f0 = BITSF(LD32(v0-14228));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = LD32(s1+248);
    if (cnd_) { goto L_088C904C; }
    goto L_088C903C;
L_088C903C:;
    v1 = 0x80000u;
    v0 = v0 | v1;
    ST32(s1+248, v0);
    v0 = LD32(s1+248);
    goto L_088C904C;
L_088C904C:;
    v1 = 0x100000u;
    v0 = v0 | v1;
    ST32(s1+248, v0);
    sp = sp + 16;
    { v[0]=vr0;return; }
    v[0]=vr0;
}

/* 088C906C */
void func_088C906C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088C906C:;
    v0 = D_08B2BC54 - (-17324);
    v1 = LD_U8(v0-17324);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088C9094; }
    goto L_088C907C;
L_088C907C:;
    v0 = LD32(a0+248);
    v0 = (v0 & ~(0x3u << 20)) | ((0 & 0x3) << 20);
    v1 = (v0 >> 19) & 0x1;
    v0 = (v0 & ~(0x1u << 18)) | ((v1 & 0x1) << 18);
    v0 = (v0 & ~(0x1u << 19)) | ((0 & 0x1) << 19);
    ST32(a0+248, v0);
    goto L_088C9094;
L_088C9094:;
    return;
}

/* 088C909C */
void func_088C909C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39], vr40 = v[40], vr41 = v[41], vr42 = v[42], vr43 = v[43], vr44 = v[44], vr45 = v[45], vr46 = v[46], vr47 = v[47], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51], vr52 = v[52], vr53 = v[53], vr54 = v[54], vr55 = v[55], vr56 = v[56], vr57 = v[57], vr58 = v[58], vr59 = v[59], vr60 = v[60], vr61 = v[61], vr62 = v[62], vr63 = v[63], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr72 = v[72], vr73 = v[73], vr74 = v[74], vr75 = v[75], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr79 = v[79], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr90 = v[90], vr91 = v[91], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr108 = v[108], vr109 = v[109], vr110 = v[110], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr120 = v[120];
    u8 stack_[2576] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 2576);
L_088C909C:;
    sp = sp - 2576;
    v1 = LD32(a0+248);
    v0 = v1 & 0x2000;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088C9154; }
    goto L_088C90C4;
L_088C90C4:;
    v0 = D_08AEC870 - (-14224);
    ST32(sp+4, 0);
    f0 = BITSF(LD32(v0-14224));
    ST32(sp+8, 0);
    ST32(sp, FBITS(f0));
    t2 = LD32(sp+4);
    ST32(sp+4, FBITS(f0));
    t3 = LD32(sp);
    t1 = LD32(sp+8);
    ST32(sp, 0);
    a3 = LD32(sp+4);
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, 0);
    t0 = LD32(sp);
    v0 = LD32(sp+12);
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    ST32(s0+44, v0);
    ST32(s0, t3);
    ST32(s0+4, t2);
    ST32(s0+8, t1);
    ST32(s0+16, t0);
    ST32(s0+20, a3);
    ST32(s0+24, t1);
    ST32(s0+32, t0);
    ST32(s0+36, a0);
    ST32(s0+40, a1);
    ST32(s0+12, v0);
    ST32(s0+28, v0);
    goto L_088C9138;
L_088C9138:;
    goto L_088C913C;
L_088C913C:;
    sp = sp + 2576;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;return; }
L_088C9154:;
    v0 = v1 & 0x4000;
    cnd_ = v0 == 0;
    v0 = v1 & 0x8000;
    if (cnd_) { goto L_088C92D8; }
    goto L_088C9160;
L_088C9160:;
    v0 = LD32(a0+32);
    v1 = LD32(a0+40);
    a0 = LD32(a0+44);
    ST32(sp+16, v0);
    v0 = D_08AEC870 - (-14224);
    ST32(sp+24, v1);
    ST32(sp+28, a0);
    ST32(sp+20, 0);
    {u32 a_=sp+(16);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f0 = BITSF(LD32(v0-14224));
    ST32(sp, 0);
    ST32(sp+4, FBITS(f0));
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr8;float t0=vr8;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 4) & 1);
    ST32(sp+8, 0);
    if (cnd_) { goto L_088C91B4; }
    goto L_088C91A4;
L_088C91A4:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    goto L_088C91B4;
L_088C91B4:;
    f2 = BITSF(0);
    {v0=FBITS(vr8);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+8); goto L_088C9264; }
    goto L_088C91D0;
L_088C91D0:;
    {u32 a_=sp+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=vr9;float t2=vr10;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+40, v0);
    ST32(sp+44, v1);
    goto L_088C9200;
L_088C9200:;
    a0 = LD32(sp+36);
    a1 = LD32(sp+40);
    a2 = LD32(sp+44);
    a3 = LD32(sp);
    t0 = LD32(sp+4);
    t1 = LD32(sp+8);
    t2 = LD32(sp+12);
    t3 = LD32(sp+16);
    t4 = LD32(sp+20);
    t5 = LD32(sp+24);
    v1 = LD32(sp+28);
    v0 = LD32(sp+32);
    ST32(s0+4, a0);
    ST32(s0, v0);
    ST32(s0+44, v1);
    ST32(s0+8, a1);
    ST32(s0+12, a2);
    ST32(s0+16, a3);
    ST32(s0+20, t0);
    ST32(s0+24, t1);
    ST32(s0+28, t2);
    ST32(s0+32, t3);
    ST32(s0+36, t4);
    ST32(s0+40, t5);
    goto L_088C9138;
L_088C9264:;
    v0 = LD32(s0);
    a0 = LD32(s0+12);
    ST32(sp+40, v1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr0=(float)1;vr1=(float)1;vr2=(float)1;vr3=(float)1;}
    ST32(sp+32, v0);
    ST32(sp+44, a0);
    ST32(sp+36, FBITS(f2));
    {u32 a_=sp+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr12=sum;}
    v0 = LD32(s0+4);
    ST32(sp+56, v1);
    ST32(sp+52, v0);
    {float s0=vr12;float d0=sqrtf(s0);vr12=d0;}
    ST32(sp+60, a0);
    {float s0=vr0;float t0=vr12;float d0=s0/t0;vr4=d0;}
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr4;vr8=s0*t0;vr9=s1*t0;vr10=s2*t0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {u32 a_=sp+(32);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+24, v0);
    ST32(sp+28, v1);
    goto L_088C9200;
L_088C92D8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C913C; }
    goto L_088C92E0;
L_088C92E0:;
    s1 = D_08AEC870 - (-14224);
    v0 = LD32(a0+16);
    v1 = LD32(a0+20);
    a3 = LD32(a0+24);
    t0 = LD32(a0+28);
    f0 = BITSF(LD32(s1-14224));
    a0 = sp + 64;
    a1 = sp + 48;
    a2 = sp + 32;
    ST32(sp+52, FBITS(f0));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, a3);
    ST32(sp+44, t0);
    ST32(sp+48, 0);
    ST32(sp+56, 0);
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;func_08835D58(a0, a1, a2); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];});
    goto L_088C9324;
L_088C9324:;
    v1 = D_08AEC874 - (-14220);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
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
    {u32 a_=sp+(80);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr100));ST32(a_+8,FBITS(vr104));ST32(a_+12,FBITS(vr108));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(vr97));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr105));ST32(a_+12,FBITS(vr109));}
    {u32 a_=sp+(112);ST32(a_+0,FBITS(vr98));ST32(a_+4,FBITS(vr102));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr110));}
    f0 = BITSF(LD32(v1-14220));
    f4 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+84));
    f5 = f0;
    fcc = FCMP(f4, f0, 12);
    f0 = BITSF(LD32(sp+96));
    f2 = BITSF(LD32(sp+88));
    f3 = BITSF(LD32(sp+104));
    ST32(sp+84, FBITS(f0));
    v0 = D_08AEC878 - (-14216);
    f0 = BITSF(LD32(sp+112));
    ST32(sp+96, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    f0 = BITSF(LD32(sp+116));
    ST32(sp+112, FBITS(f2));
    ST32(sp+104, FBITS(f0));
    ST32(sp+116, FBITS(f3));
    cnd_ = fcc;
    f0 = BITSF(LD32(v0-14216));
    if (cnd_) { goto L_088C93E8; }
    goto L_088C93D4;
L_088C93D4:;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    f5 = f0;
    if (cnd_) { goto L_088C93E8; }
    goto L_088C93E4;
L_088C93E4:;
    f5 = f4;
    goto L_088C93E8;
L_088C93E8:;
    f20 = BITSF(LD32(v1-14220));
    f21 = BITSF(LD32(v0-14216));
    a0 = sp + 68;
    a1 = sp + 288;
    a2 = sp + 292;
    ST32(sp+64, FBITS(f5));
    ST32(sp+288, FBITS(f20));
    ST32(sp+292, FBITS(f21));
    f0 = func_088CA5E0(a0, a1, a2);
    goto L_088C940C;
L_088C940C:;
    a2 = sp + 300;
    a0 = sp + 72;
    a1 = sp + 296;
    ST32(sp+68, FBITS(f0));
    ST32(sp+296, FBITS(f20));
    ST32(sp+300, FBITS(f21));
    f0 = func_088CA5E0(a0, a1, a2);
    goto L_088C9428;
L_088C9428:;
    f4 = f0 * f0;
    f1 = BITSF(LD32(sp+64));
    f2 = BITSF(LD32(sp+68));
    f3 = BITSF(LD32(s1-14224));
    f1 = f1 * f1;
    f2 = f2 * f2;
    {u32 a_=sp+(320);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(336);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    f1 = f1 + f2;
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(352);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    f1 = f1 + f4;
    {u32 a_=sp+(640);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(944);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(656);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    f3 = sqrtf(f3);
    {u32 a_=sp+(672);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(960);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {u32 a_=sp+(976);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=sp+(992);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1328);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1712);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    ST32(sp+72, FBITS(f0));
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;vr19=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {u32 a_=sp+(1344);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1728);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1360);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr72=d0;vr73=d1;vr74=d2;vr75=d3;}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {float s0=vr20;float s1=vr21;float s2=vr22;float s3=vr23;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr68=d0;vr69=d1;vr70=d2;vr71=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {u32 a_=sp+(1744);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1376);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1760);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr76=d0;vr77=d1;vr78=d2;vr79=d3;}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(2096);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2128);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=s0+(0);vr108=BITSF(LD32(a_+0));vr109=BITSF(LD32(a_+4));vr110=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {u32 a_=s0+(16);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2160);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(2176);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2192);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(2144);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2208);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    ST32(sp+76, FBITS(f3));
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;v[92]=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
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
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr96));ST32(a_+4,FBITS(vr100));ST32(a_+8,FBITS(vr104));ST32(a_+12,FBITS(vr108));}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(vr97));ST32(a_+4,FBITS(vr101));ST32(a_+8,FBITS(vr105));ST32(a_+12,FBITS(vr109));}
    {u32 a_=sp+(160);ST32(a_+0,FBITS(vr98));ST32(a_+4,FBITS(vr102));ST32(a_+8,FBITS(vr106));ST32(a_+12,FBITS(vr110));}
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(1040);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1056);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1024);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(336);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(944);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(960);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(992);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(416);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1072);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(1104);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(384);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1088);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(768);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1168);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1136);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {u32 a_=sp+(112);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(784);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(320);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(976);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(992);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(512);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr80=d0;vr81=d1;vr82=d2;vr83=d3;}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(944);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1248);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(528);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1200);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1216);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1264);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr72));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(vr74));ST32(a_+12,FBITS(vr75));}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(928);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(vr79));}
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1232);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1248);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);vr80=BITSF(LD32(a_+0));vr81=BITSF(LD32(a_+4));vr82=BITSF(LD32(a_+8));vr83=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(576);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float t0=vr108;float t1=vr109;float t2=vr110;float o0=0;o0+=vr48*t0;o0+=vr52*t1;o0+=vr56*t2;float o1=0;o1+=vr49*t0;o1+=vr53*t1;o1+=vr57*t2;float o2=0;o2+=vr50*t0;o2+=vr54*t1;o2+=vr58*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+16);
    {u32 a_=sp+(640);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    ST32(sp+224, v0);
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=vr79;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float t0=vr8;float t1=vr9;float t2=vr10;float o0=0;o0+=vr48*t0;o0+=vr52*t1;o0+=vr56*t2;float o1=0;o1+=vr49*t0;o1+=vr53*t1;o1+=vr57*t2;float o2=0;o2+=vr50*t0;o2+=vr54*t1;o2+=vr58*t2;vr0=o0;vr1=o1;vr2=o2;}
    v0 = LD32(sp+20);
    {u32 a_=sp+(1280);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    ST32(sp+228, v0);
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+24);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    {float t0=vr12;float t1=vr13;float t2=vr14;float o0=0;o0+=vr48*t0;o0+=vr52*t1;o0+=vr56*t2;float o1=0;o1+=vr49*t0;o1+=vr53*t1;o1+=vr57*t2;float o2=0;o2+=vr50*t0;o2+=vr54*t1;o2+=vr58*t2;vr0=o0;vr1=o1;vr2=o2;}
    ST32(sp+232, v0);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    v0 = LD32(sp+28);
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(vr19));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1776);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(1792);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(2224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+236, v0);
    {u32 a_=sp+(1808);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(1408);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(1424);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(1440);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1824);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    v0 = LD32(sp);
    {u32 a_=sp+(2176);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2192);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    ST32(sp+240, v0);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2240);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    v0 = LD32(sp+4);
    v1 = LD32(sp+272);
    {u32 a_=sp+(2256);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    ST32(sp+244, v0);
    {u32 a_=sp+(2208);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    v0 = LD32(sp+8);
    {u32 a_=sp+(1808);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2240);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    ST32(sp+248, v0);
    {u32 a_=sp+(2272);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(1392);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+12);
    {u32 a_=sp+(1824);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1776);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2224);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2096);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1712);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2256);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1792);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    ST32(sp+252, v0);
    {u32 a_=sp+(1728);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1744);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    ST32(sp+256, v1);
    {u32 a_=sp+(1760);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(2112);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(1376);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(2128);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(2272);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1728);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1744);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1760);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(2144);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1856);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1872);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(1888);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(2112);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr80=d0;vr81=d1;vr82=d2;vr83=d3;}
    {u32 a_=sp+(2144);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1856);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1456);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(1840);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(2288);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(2304);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(2128);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1888);vr52=BITSF(LD32(a_+0));vr53=BITSF(LD32(a_+4));vr54=BITSF(LD32(a_+8));vr55=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1520);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1904);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1872);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2320);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {u32 a_=sp+(2336);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(1920);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(1936);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(1952);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(1536);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1472);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(1488);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(1504);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1552);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(1568);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1920);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+276);
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {u32 a_=sp+(2320);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    ST32(sp+260, v0);
    {u32 a_=sp+(2336);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    v0 = LD32(sp+280);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    ST32(sp+264, v0);
    {u32 a_=sp+(2304);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2384);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    v0 = LD32(sp+284);
    {u32 a_=sp+(1936);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2400);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(1584);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(1952);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1968);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(2416);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(2144);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2128);vr44=BITSF(LD32(a_+0));vr45=BITSF(LD32(a_+4));vr46=BITSF(LD32(a_+8));vr47=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2368);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(1344);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2368);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+268, v0);
    {u32 a_=sp+(1728);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2112);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1600);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1984);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2000);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(2016);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(2432);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(2448);ST32(a_+0,FBITS(vr44));ST32(a_+4,FBITS(vr45));ST32(a_+8,FBITS(vr46));ST32(a_+12,FBITS(vr47));}
    {u32 a_=sp+(2352);ST32(a_+0,FBITS(vr80));ST32(a_+4,FBITS(vr81));ST32(a_+8,FBITS(vr82));ST32(a_+12,FBITS(vr83));}
    {u32 a_=sp+(1616);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(1632);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(2464);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(2000);vr32=BITSF(LD32(a_+0));vr33=BITSF(LD32(a_+4));vr34=BITSF(LD32(a_+8));vr35=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2016);vr36=BITSF(LD32(a_+0));vr37=BITSF(LD32(a_+4));vr38=BITSF(LD32(a_+8));vr39=BITSF(LD32(a_+12));}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr48=d0;vr49=d1;vr50=d2;vr51=d3;}
    {u32 a_=sp+(1648);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(2032);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {u32 a_=sp+(2480);ST32(a_+0,FBITS(vr52));ST32(a_+4,FBITS(vr53));ST32(a_+8,FBITS(vr54));ST32(a_+12,FBITS(vr55));}
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr52=d0;vr53=d1;vr54=d2;vr55=d3;}
    {u32 a_=sp+(2064);ST32(a_+0,FBITS(vr32));ST32(a_+4,FBITS(vr33));ST32(a_+8,FBITS(vr34));ST32(a_+12,FBITS(vr35));}
    {u32 a_=sp+(2080);ST32(a_+0,FBITS(vr36));ST32(a_+4,FBITS(vr37));ST32(a_+8,FBITS(vr38));ST32(a_+12,FBITS(vr39));}
    {u32 a_=sp+(2048);ST32(a_+0,FBITS(vr40));ST32(a_+4,FBITS(vr41));ST32(a_+8,FBITS(vr42));ST32(a_+12,FBITS(vr43));}
    {u32 a_=sp+(224);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {float s0=vr52;float s1=vr53;float s2=vr54;float s3=vr55;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float t0=vr4;float t1=vr5;float t2=vr6;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(2496);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    v0 = LD32(sp+272);
    {u32 a_=sp+(1664);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    v1 = LD32(sp+276);
    {u32 a_=sp+(2464);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2448);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2528);ST32(a_+0,FBITS(vr60));ST32(a_+4,FBITS(vr61));ST32(a_+8,FBITS(vr62));ST32(a_+12,FBITS(vr63));}
    {u32 a_=sp+(2080);vr40=BITSF(LD32(a_+0));vr41=BITSF(LD32(a_+4));vr42=BITSF(LD32(a_+8));vr43=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2512);ST32(a_+0,FBITS(vr56));ST32(a_+4,FBITS(vr57));ST32(a_+8,FBITS(vr58));ST32(a_+12,FBITS(vr59));}
    {float s0=vr40;float s1=vr41;float s2=vr42;float s3=vr43;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr60=d0;vr61=d1;vr62=d2;vr63=d3;}
    {u32 a_=sp+(240);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr56=d0;vr57=d1;vr58=d2;vr59=d3;}
    {float t0=vr12;float t1=vr13;float t2=vr14;float o0=0;o0+=vr48*t0;o0+=vr52*t1;o0+=vr56*t2;float o1=0;o1+=vr49*t0;o1+=vr53*t1;o1+=vr57*t2;float o2=0;o2+=vr50*t0;o2+=vr54*t1;o2+=vr58*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(2496);vr56=BITSF(LD32(a_+0));vr57=BITSF(LD32(a_+4));vr58=BITSF(LD32(a_+8));vr59=BITSF(LD32(a_+12));}
    {u32 a_=sp+(2528);vr60=BITSF(LD32(a_+0));vr61=BITSF(LD32(a_+4));vr62=BITSF(LD32(a_+8));vr63=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1680);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {u32 a_=sp+(256);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));vr19=BITSF(LD32(a_+12));}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+176, v0);
    {u32 a_=sp+(1696);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    {u32 a_=sp+(1680);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(2064);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(2512);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1360);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(1744);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(2128);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {float s0=vr56;float s1=vr57;float s2=vr58;float s3=vr59;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr36=d0;vr37=d1;vr38=d2;vr39=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr40=d0;vr41=d1;vr42=d2;vr43=d3;}
    {float s0=vr60;float s1=vr61;float s2=vr62;float s3=vr63;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr44=d0;vr45=d1;vr46=d2;vr47=d3;}
    {float t0=vr16;float t1=vr17;float t2=vr18;float o0=0;o0+=vr32*t0;o0+=vr36*t1;o0+=vr40*t2;float o1=0;o1+=vr33*t0;o1+=vr37*t1;o1+=vr41*t2;float o2=0;o2+=vr34*t0;o2+=vr38*t1;o2+=vr42*t2;vr0=o0;vr1=o1;vr2=o2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+180, v1);
    a3 = s0 + 0;
    a2 = sp + 176;
    v0 = LD32(sp+280);
    v1 = LD32(sp+284);
    t0 = sp + 224;
    ST32(sp+184, v0);
    ST32(sp+188, v1);
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    ST32(sp+192, v0);
    ST32(sp+196, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+200, v0);
    ST32(sp+204, v1);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    ST32(sp+208, v0);
    ST32(sp+212, v1);
    v0 = LD32(sp+8);
    v1 = LD32(sp+12);
    ST32(sp+216, v0);
    ST32(sp+220, v1);
    goto L_088C9AAC;
L_088C9AAC:;
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
    if (cnd_) { goto L_088C9AAC; }
    goto L_088C9AD8;
L_088C9AD8:;
    goto L_088C913C;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[19]=vr19;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;v[36]=vr36;v[37]=vr37;v[38]=vr38;v[39]=vr39;v[40]=vr40;v[41]=vr41;v[42]=vr42;v[43]=vr43;v[44]=vr44;v[45]=vr45;v[46]=vr46;v[47]=vr47;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;v[52]=vr52;v[53]=vr53;v[54]=vr54;v[55]=vr55;v[56]=vr56;v[57]=vr57;v[58]=vr58;v[59]=vr59;v[60]=vr60;v[61]=vr61;v[62]=vr62;v[63]=vr63;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[72]=vr72;v[73]=vr73;v[74]=vr74;v[75]=vr75;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[79]=vr79;v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[108]=vr108;v[109]=vr109;v[110]=vr110;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;
}

/* 088C9AE0 */
rv_t func_088C9AE0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_088C9AE0:;
    sp = sp - 144;
    v0 = D_08AEC87C - (-14212);
    v1 = D_08AEC880 - (-14208);
    s1 = a0 + 328;
    s5 = a1 & 0xff;
    s0 = a0 + 0;
    f1 = BITSF(LD32(v0-14212));
    f0 = BITSF(LD32(v1-14208));
    ST32(s1+16, FBITS(f1));
    ST32(s1+20, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    ST32(s1+12, FBITS(f0));
    v0 = LD32(a0+276);
    cnd_ = v0 == 0;
    ST32(a0+328, FBITS(f1));
    if (cnd_) { goto L_088C9C24; }
    goto L_088C9B3C;
L_088C9B3C:;
    v0 = LD32(a0+272);
    v0 = v0 - 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));} goto L_088C9C60; }
    goto L_088C9B50;
L_088C9B50:;
    v0 = a0 + 208;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a0+208));
    f1 = BITSF(LD32(v0+4));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C9B78;
L_088C9B78:;
    v0 = s0 + 224;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0+224));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C9BA0;
L_088C9BA0:;
    v0 = LD32(s0+276);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088C9BBC; }
    goto L_088C9BBC;
L_088C9BBC:;
    f1 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f6 = f0;
    if (cnd_) { goto L_088C9BD4; }
    goto L_088C9BD0;
L_088C9BD0:;
    f6 = f1;
    goto L_088C9BD4;
L_088C9BD4:;
    f0 = BITSF(LD32(s0+328));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1+16));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+12));
    f5 = BITSF(LD32(s1+20));
    f0 = f0 - f6;
    f1 = f1 - f6;
    f5 = f5 + f6;
    f2 = f2 - f6;
    f3 = f3 + f6;
    f4 = f4 + f6;
    ST32(s0+328, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s1+16, FBITS(f2));
    ST32(s1+4, FBITS(f3));
    ST32(s1+12, FBITS(f4));
    ST32(s1+20, FBITS(f5));
    goto L_088C9C1C;
L_088C9C1C:;
    cnd_ = s5 != 0;
    v0 = D_08AEC884 - (-14204);
    if (cnd_) { goto L_088C9C48; }
    goto L_088C9C24;
L_088C9C24:;
    goto L_088C9C28;
L_088C9C28:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_088C9C48:;
    f12 = BITSF(LD32(v0-14204));
    a0 = s0 + 288;
    a1 = s1 + 0;
    { rv_t r_ = func_088B8958(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088C9C58;
L_088C9C58:;
    goto L_088C9C28;
L_088C9C60:;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    { u64 r_ = func_088C9D8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C9C70;
L_088C9C70:;
    v1 = LD32(s0+276);
    s3 = 0 + 0;
    v0 = LD32(v1);
    s4 = LD32(v0);
    cnd_ = s4 == 0;
    {u32 a_=sp+(96);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C9C1C; }
    goto L_088C9C88;
L_088C9C88:;
    v1 = LD32(v1);
    {u32 a_=s0+(0);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    s2 = s3 << 4;
    v0 = LD32(v1+4);
    {u32 a_=s0+(16);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=s0+(32);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[48]=d0;v[49]=d1;v[50]=d2;v[51]=d3;}
    v0 = v0 + s2;
    {u32 a_=s0+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {float s0=v[40];float s1=v[41];float s2=v[42];float s3=v[43];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {u32 a_=v0+(0);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[48]*t0;o0+=v[52]*t1;o0+=v[56]*t2;float o1=0;o1+=v[49]*t0;o1+=v[53]*t1;o1+=v[57]*t2;float o2=0;o2+=v[50]*t0;o2+=v[54]*t1;o2+=v[58]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float t0=v[32];float t1=v[33];float t2=v[34];float t3=v[35];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    a2 = LD32(s0+280);
    {u32 a_=sp+(32);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    a0 = s1 + 0;
    a2 = s2 + a2;
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    v0 = LD32(sp+16);
    a1 = sp + 0;
    s3 = s3 + 1;
    ST32(a2, v0);
    v0 = LD32(sp+20);
    f1 = BITSF(LD32(a2));
    ST32(a2+4, v0);
    v1 = LD32(sp+24);
    ST32(a2+8, v1);
    v0 = LD32(sp+28);
    ST32(a2+12, v0);
    ST32(sp, FBITS(f1));
    f0 = BITSF(LD32(a2+4));
    ST32(sp+4, FBITS(f0));
    f1 = BITSF(LD32(a2+8));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    ST32(sp+8, FBITS(f1));
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    f0 = func_08AA0F30(a0, a1);
    goto L_088C9D28;
L_088C9D28:;
    v0 = LD32(s0+248);
    a0 = s1 + 0;
    a1 = sp + 0;
    v0 = v0 & 0x8;
    {u32 a_=sp+(80);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(96);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088C9D58; }
    goto L_088C9D44;
L_088C9D44:;
    v0 = s3 < s4;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088C9C1C; }
    goto L_088C9D50;
L_088C9D50:;
    v1 = LD32(s0+276);
    goto L_088C9C88;
L_088C9D58:;
    v0 = LD32(s0+284);
    v0 = v0 + s2;
    f0 = BITSF(LD32(v0));
    ST32(sp, FBITS(f0));
    f1 = BITSF(LD32(v0+4));
    ST32(sp+4, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    ST32(sp+8, FBITS(f0));
    f0 = func_08AA0F30(a0, a1);
    goto L_088C9D84;
L_088C9D84:;
    {u32 a_=sp+(96);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    goto L_088C9D44;
}

/* 088C9D8C */
u64 func_088C9D8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C9D8C:;
    v0 = LD32(a0+276);
    sp = sp - 32;
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088C9DEC; }
    goto L_088C9D9C;
L_088C9D9C:;
    {u32 a_=a0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(16);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=v0+(16);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=v[32]*t0;o0+=v[36]*t1;o0+=v[40]*t2;float o1=0;o1+=v[33]*t0;o1+=v[37]*t1;o1+=v[41]*t2;float o2=0;o2+=v[34]*t0;o2+=v[38]*t1;o2+=v[42]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[0];float t1=v[1];float t2=v[2];float t3=v[3];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a2+196, a0);
    ST32(a2+192, v0);
    ST32(a2+204, v1);
    ST32(a2+200, a1);
    goto L_088C9DEC;
L_088C9DEC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088C9DF4 */
u64 func_088C9DF4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088C9DF4:;
    v1 = LD32(a0+248);
    v0 = (v1 >> 4) & 0x1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088C9E44; }
    goto L_088C9E04;
L_088C9E04:;
    v0 = LD32(a0+384);
    v1 = v1 & 0x4;
    a1 = 1;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088C9E44; }
    goto L_088C9E18;
L_088C9E18:;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = 1; goto L_088C9E40; }
    goto L_088C9E20;
L_088C9E20:;
    v0 = D_08AEC888 - (-14200);
    f0 = BITSF(LD32(a0+352));
    f1 = BITSF(LD32(v0-14200));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a2 + 0;
    if (cnd_) { goto L_088C9E44; }
    goto L_088C9E3C;
L_088C9E3C:;
    a2 = 1;
    goto L_088C9E40;
L_088C9E40:;
    a1 = a2 + 0;
    goto L_088C9E44;
L_088C9E44:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088C9E4C */
u64 func_088C9E4C(u32 a0)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088C9E4C:;
    sp = sp - 32;
    v0 = LD32(a0+248);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088C9EF0; }
    goto L_088C9E68;
L_088C9E68:;
    {u32 a_=a0+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(224);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0-t0;float d1=s1-t1;float d2=s2-t2;float d3=s3-t3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEC88C - (-14196);
    f0 = BITSF(LD32(v0-14196));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+352, 0); goto L_088C9EE0; }
    goto L_088C9EA0;
L_088C9EA0:;
    {u32 a_=a0+(144);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    v0 = D_08AEC890 - (-14192);
    f0 = BITSF(LD32(v0-14192));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+352, 0); goto L_088C9EE0; }
    goto L_088C9ECC;
L_088C9ECC:;
    v0 = D_08B2BC44 - (-17340);
    f1 = BITSF(LD32(v0-17340));
    f0 = BITSF(LD32(a0+352));
    f0 = f0 + f1;
    ST32(a0+352, FBITS(f0));
    goto L_088C9EE0;
L_088C9EE0:;
    a0 = s0 + 0;
    { u64 r_ = func_088C9DF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088C9EE8;
L_088C9EE8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088C9F00; }
    goto L_088C9EF0;
L_088C9EF0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088C9F00:;
    func_088C446C(a0);
    goto L_088C9F08;
L_088C9F08:;
    a0 = s0 + 0;
    func_088C3A04(a0, 0, 0, 0);
    goto L_088C9F10;
L_088C9F10:;
    v0 = LD32(s0+248);
    v0 = v0 | 0x1;
    ST32(s0+248, v0);
    goto L_088C9EF0;
}

/* 088C9F20 */
void func_088C9F20(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0;
L_088C9F20:;
    v1 = LD32(a1+276);
    v0 = a2 << 1;
    v0 = v0 + a2;
    t0 = LD32(v1);
    v0 = v0 + a3;
    v0 = v0 << 1;
    a2 = LD32(t0+28);
    a3 = LD32(a1+280);
    v0 = v0 + a2;
    v1 = LD_U16(v0);
    v0 = a0 + 0;
    v1 = v1 << 4;
    v1 = v1 + a3;
    a2 = LD32(v1);
    ST32(a0, a2);
    a1 = LD32(v1+4);
    ST32(a0+4, a1);
    a2 = LD32(v1+8);
    ST32(a0+8, a2);
    a1 = LD32(v1+12);
    ST32(a0+12, a1);
    return;
}

/* 088C9F78 */
void func_088C9F78(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088C9F78:;
    v0 = LD32(a0+276);
    a2 = a2 << 4;
    {u32 a_=a0+(0);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v1 = LD32(v0);
    {u32 a_=a0+(16);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(32);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    v0 = LD32(v1+24);
    sp = sp - 16;
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    v0 = v0 + a2;
    {u32 a_=v0+(0);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    {float t0=v[32];float t1=v[33];float t2=v[34];float o0=0;o0+=v[64]*t0;o0+=v[68]*t1;o0+=v[72]*t2;float o1=0;o1+=v[65]*t0;o1+=v[69]*t1;o1+=v[73]*t2;float o2=0;o2+=v[66]*t0;o2+=v[70]*t1;o2+=v[74]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = LD32(sp+4);
    a2 = LD32(sp+8);
    v1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(a1+4, a0);
    ST32(a1, v0);
    ST32(a1+12, v1);
    ST32(a1+8, a2);
    sp = sp + 16;
    return;
}

/* 088C9FDC */
void func_088C9FDC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_088C9FDC:;
    v0 = LD32(a0);
    v1 = LD32(a0+4);
    t0 = LD32(a0+8);
    t1 = LD32(a0+12);
    sp = sp - 48;
    ST32(sp, v0);
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+4, v1);
    ST32(sp+8, t0);
    ST32(sp+12, t1);
    t0 = LD32(a0+276);
    v0 = LD32(a0+16);
    v1 = LD32(a0+20);
    t1 = LD32(a0+24);
    t2 = LD32(a0+28);
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(t0+4));
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+16, v0);
    {v0=FBITS(vr0);}
    v0 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+20, v1);
    f1 = BITSF(v0);
    v0 = LD32(a0+32);
    ST32(sp+24, t1);
    f1 = f1 * f0;
    ST32(sp+28, t2);
    {u32 a_=sp+(16);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(t0+8));
    v1 = LD32(a0+36);
    ST32(sp+32, v0);
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    t1 = LD32(a0+40);
    t2 = LD32(a0+44);
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    ST32(sp+36, v1);
    f0 = f0 * f2;
    ST32(sp+40, t1);
    ST32(sp+44, t2);
    f1 = f1 + f0;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(LD32(t0+12));
    f0 = BITSF(v0);
    f0 = f0 * f2;
    f1 = f1 + f0;
    ST32(a3, FBITS(f1));
    {u32 a_=a0+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=a1+(0);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    ST32(a2, v0);
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 088CA0C4 */
u64 func_088CA0C4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA0C4:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD32(a0+248);
    v0 = (v0 & ~(0x1u << 1)) | ((a1 & 0x1) << 1);
    cnd_ = a1 != 0;
    ST32(a0+248, v0);
    if (cnd_) { goto L_088CA110; }
    goto L_088CA0E8;
L_088CA0E8:;
    v0 = LD32(s0+248);
    goto L_088CA0EC;
L_088CA0EC:;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CA104; }
    goto L_088CA0F8;
L_088CA0F8:;
    v1 = 1;
    v0 = D_08B2BC55 - (-17323);
    ST8(v0-17323, v1);
    goto L_088CA104;
L_088CA104:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088CA110:;
    func_088C3A04(a0, t1, t2, t3);
    goto L_088CA118;
L_088CA118:;
    v0 = LD32(s0+248);
    goto L_088CA0EC;
}

/* 088CA120 */
void func_088CA120(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA120:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+384);
    cnd_ = v0 == a1;
    s0 = a1 + 0;
    if (cnd_) { goto L_088CA154; }
    goto L_088CA140;
L_088CA140:;
    func_088CA168(a0);
    goto L_088CA148;
L_088CA148:;
    a0 = s0 + 0;
    func_088C232C(a0);
    goto L_088CA150;
L_088CA150:;
    ST32(s1+384, s0);
    goto L_088CA154;
L_088CA154:;
    sp = sp + 16;
    return;
}

/* 088CA168 */
void func_088CA168(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA168:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+384);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CA198; }
    goto L_088CA184;
L_088CA184:;
    v0 = LD32(s0+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CA1A4; }
    goto L_088CA194;
L_088CA194:;
    goto L_088CA198;
L_088CA198:;
    sp = sp + 16;
    return;
L_088CA1A4:;
    func_088C233C(a0);
    goto L_088CA1AC;
L_088CA1AC:;
    ST32(s0+384, 0);
    goto L_088CA194;
}

/* 088CA1B4 */
void func_088CA1B4(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA1B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+384);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CA1E4; }
    goto L_088CA1D0;
L_088CA1D0:;
    v0 = LD32(s0+248);
    v0 = (v0 >> 9) & 0x1;
    cnd_ = v0 == 0;
    a1 = s0 + 208;
    if (cnd_) { goto L_088CA1F0; }
    goto L_088CA1E0;
L_088CA1E0:;
    goto L_088CA1E4;
L_088CA1E4:;
    sp = sp + 16;
    return;
L_088CA1F0:;
    func_088C2354(a0, a1);
    goto L_088CA1F8;
L_088CA1F8:;
    a0 = LD32(s0+384);
    a1 = s0 + 0;
    func_088C2464(a0, a1);
    goto L_088CA204;
L_088CA204:;
    a0 = s0 + 0;
    func_088CA168(a0);
    goto L_088CA20C;
L_088CA20C:;
    goto L_088CA1E4;
}

/* 088CA214 */
void func_088CA214(u32 a0)
{
L_088CA214:;
    ST32(a0+372, 0);
    ST32(a0+368, 0);
    return;
}

/* 088CA220 */
void func_088CA220(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA220:;
    sp = sp - 16;
    v1 = 0x100000u;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+248);
    a0 = 0x200000u;
    v0 = v0 | v1;
    v0 = v0 | a0;
    v1 = v0 & 0x400;
    cnd_ = v1 == 0;
    ST32(s0+248, v0);
    if (cnd_) { goto L_088CA2BC; }
    goto L_088CA258;
L_088CA258:;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088CA2C0; }
    goto L_088CA264;
L_088CA264:;
    v1 = LD32(s0+368);
    cnd_ = v1 == 0;
    a0 = D_08B2BEB8 - (-16712);
    if (cnd_) { goto L_088CA290; }
    goto L_088CA270;
L_088CA270:;
    a0 = LD32(a1+356);
    v0 = LD32(v1);
    goto L_088CA278;
L_088CA278:;
    cnd_ = v0 == a0;
    if (cnd_) { goto L_088CA2C0; }
    goto L_088CA280;
L_088CA280:;
    v1 = LD32(v1+8);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088CA278; }
    goto L_088CA28C;
L_088CA28C:;
    a0 = D_08B2BEB8 - (-16712);
    goto L_088CA290;
L_088CA290:;
    a0 = a0 - 16712;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA298;
L_088CA298:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088CA2BC; }
    goto L_088CA2A0;
L_088CA2A0:;
    v0 = LD32(s1+364);
    v1 = LD32(s0+368);
    ST32(a2+4, v0);
    a0 = LD32(s1+356);
    ST32(a2+8, v1);
    ST32(a2, a0);
    ST32(s0+368, a2);
    goto L_088CA2BC;
L_088CA2BC:;
    goto L_088CA2C0;
L_088CA2C0:;
    sp = sp + 16;
    return;
}

/* 088CA2D0 */
void func_088CA2D0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA2D0:;
    sp = sp - 16;
    v1 = 0x100000u;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+248);
    v0 = v0 | v1;
    a0 = v0 & 0x800;
    cnd_ = a0 == 0;
    ST32(s0+248, v0);
    if (cnd_) { goto L_088CA37C; }
    goto L_088CA308;
L_088CA308:;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088CA380; }
    goto L_088CA314;
L_088CA314:;
    v1 = LD32(s0+372);
    cnd_ = v1 == 0;
    a0 = D_08B2BEC4 - (-16700);
    if (cnd_) { goto L_088CA33C; }
    goto L_088CA320;
L_088CA320:;
    v0 = LD32(v1+16);
    goto L_088CA324;
L_088CA324:;
    cnd_ = v0 == s1;
    if (cnd_) { goto L_088CA380; }
    goto L_088CA32C;
L_088CA32C:;
    v1 = LD32(v1+20);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+16); goto L_088CA324; }
    goto L_088CA338;
L_088CA338:;
    a0 = D_08B2BEC4 - (-16700);
    goto L_088CA33C;
L_088CA33C:;
    a0 = a0 - 16700;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA344;
L_088CA344:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088CA37C; }
    goto L_088CA34C;
L_088CA34C:;
    v1 = LD32(s2);
    ST32(v0+16, s1);
    ST32(v0, v1);
    v0 = LD32(s2+4);
    a0 = LD32(s0+372);
    ST32(a1+4, v0);
    v1 = LD32(s2+8);
    ST32(a1+20, a0);
    ST32(a1+8, v1);
    v0 = LD32(s2+12);
    ST32(s0+372, a1);
    ST32(a1+12, v0);
    goto L_088CA37C;
L_088CA37C:;
    goto L_088CA380;
L_088CA380:;
    sp = sp + 16;
    return;
}

/* 088CA394 */
u64 func_088CA394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_088CA394:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    t3 = s3 < 0x1u;
    v0 = t3 & v0;
    t4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CA420; }
    goto L_088CA3CC;
L_088CA3CC:;
    t0 = D_08B2BEB8 - (-16712);
    t1 = D_08B2BEC4 - (-16700);
    a1 = D_08B2BEA4 - (-16732);
    a3 = t0 - 16712;
    a2 = t1 - 16700;
    v0 = 12;
    v1 = 32;
    ST32(a3+8, v0);
    a0 = a1 - 16732;
    t2 = 16;
    ST32(a2+8, v1);
    v0 = 8;
    v1 = (u32)-1;
    ST32(a0+4, v0);
    ST32(a0+12, v1);
    ST32(a0+16, 0);
    ST32(a1-16732, 0);
    ST32(a2+4, t2);
    ST32(t0-16712, 0);
    ST32(t1-16700, 0);
    ST32(a3+4, t2);
    goto L_088CA420;
L_088CA420:;
    s2 = t4 < 0x1u;
    v0 = t3 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088CA464; }
    goto L_088CA430;
L_088CA430:;
    v0 = D_08B2BEC4 - (-16700);
    s0 = LD32(v0-16700);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088CA464; }
    goto L_088CA440;
L_088CA440:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CA5D0; }
    goto L_088CA44C;
L_088CA44C:;
    s1 = LD32(s0+12);
    goto L_088CA450;
L_088CA450:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088CA5B8; }
    goto L_088CA458;
L_088CA458:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA460;
L_088CA460:;
    v0 = s3 < 0x1u;
    goto L_088CA464;
L_088CA464:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088CA4A4; }
    goto L_088CA470;
L_088CA470:;
    v0 = D_08B2BEB8 - (-16712);
    s0 = LD32(v0-16712);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088CA4A4; }
    goto L_088CA480;
L_088CA480:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CA5A8; }
    goto L_088CA48C;
L_088CA48C:;
    s1 = LD32(s0+12);
    goto L_088CA490;
L_088CA490:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088CA590; }
    goto L_088CA498;
L_088CA498:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA4A0;
L_088CA4A0:;
    v0 = s3 < 0x1u;
    goto L_088CA4A4;
L_088CA4A4:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CA548; }
    goto L_088CA4B0;
L_088CA4B0:;
    v0 = D_08B2BEA4 - (-16732);
    s4 = LD32(v0-16732);
    cnd_ = s4 == 0;
    if (cnd_) {  goto L_088CA54C; }
    goto L_088CA4C0;
L_088CA4C0:;
    a0 = LD32(s4);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s4+4); goto L_088CA528; }
    goto L_088CA4CC;
L_088CA4CC:;
    v0 = LD32(a0-4);
    v1 = 400;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s2 = a0 + v0;
    goto L_088CA4E0;
L_088CA4E0:;
    cnd_ = a0 == s2;
    s1 = s2 - 400;
    if (cnd_) { goto L_088CA51C; }
    goto L_088CA4E8;
L_088CA4E8:;
    a0 = LD32(s1+388);
    s2 = s1 + 0;
    cnd_ = a0 == 0;
    s3 = s1 + 388;
    if (cnd_) { goto L_088CA508; }
    goto L_088CA4F8;
L_088CA4F8:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA500;
L_088CA500:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CA4F8; }
    goto L_088CA508;
L_088CA508:;
    ST32(s3, 0);
    a0 = s1 + 288;
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA514;
L_088CA514:;
    a0 = LD32(s4);
    goto L_088CA4E0;
L_088CA51C:;
    a0 = a0 - 16;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA524;
L_088CA524:;
    a0 = LD32(s4+4);
    goto L_088CA528;
L_088CA528:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088CA57C; }
    goto L_088CA530;
L_088CA530:;
    s0 = LD32(s4+12);
    goto L_088CA534;
L_088CA534:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088CA564; }
    goto L_088CA53C;
L_088CA53C:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA544;
L_088CA544:;
    goto L_088CA548;
L_088CA548:;
    goto L_088CA54C;
L_088CA54C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088CA564:;
    a0 = s0 + 0;
    func_08AB6168(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CA56C;
L_088CA56C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA574;
L_088CA574:;
    goto L_088CA53C;
L_088CA57C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA588;
L_088CA588:;
    s0 = LD32(s4+12);
    goto L_088CA534;
L_088CA590:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088CA598;
L_088CA598:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5A0;
L_088CA5A0:;
    goto L_088CA498;
L_088CA5A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5B0;
L_088CA5B0:;
    s1 = LD32(s0+12);
    goto L_088CA490;
L_088CA5B8:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088CA5C0;
L_088CA5C0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5C8;
L_088CA5C8:;
    goto L_088CA458;
L_088CA5D0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5D8;
L_088CA5D8:;
    s1 = LD32(s0+12);
    goto L_088CA450;
}

/* 088CA5E0 */
float func_088CA5E0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088CA5E0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088CA60C; }
    goto L_088CA5F8;
L_088CA5F8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088CA60C; }
    goto L_088CA60C;
L_088CA60C:;
    return f0;
}

/* 088CA614 */
rv_t func_088CA614(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA614:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088CA394(a0, a1, a2, a3, t0, t1, t2, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA628;
L_088CA628:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CA634 */
rv_t func_088CA634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_088CA634:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088CA394(a0, a1, a2, a3, t0, t1, t2, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA648;
L_088CA648:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}
